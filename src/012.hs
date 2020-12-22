ts :: [Int]
ts = scanl (+) 1 [2..]

d :: Int -> Int
d n = f . (*2) . length $ filter ((== 0) . mod n) [1..m]
  where
    m = floor . sqrt $ fromIntegral n
    f = if m * m == n then pred else id

main :: IO ()
main = print . head $ dropWhile ((< 501) . d) ts
