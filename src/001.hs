f :: Int -> Bool
f n = mod n 3 * mod n 5 == 0

main :: IO ()
main = print . sum . filter f $ [1..999]
