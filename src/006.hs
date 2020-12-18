main :: IO ()
main = print $ (sum xs) ^ 2 - sum ys
  where
    xs = [1..100]
    ys = map (^2) xs
