main :: IO ()
main = do
  xs <- map read . lines <$> readFile "inputs/013.txt" :: IO [Integer]
  putStrLn . take 10 . show $ sum xs
