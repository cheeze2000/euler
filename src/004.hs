f :: Int
f = maximum $ [x * y | x <- xs, y <- xs, p $ x * y]
  where xs = [100..999]

p :: Int -> Bool
p n =
  let m = show n
  in mod n 11 == 0 && m == reverse m

main :: IO ()
main = print f
