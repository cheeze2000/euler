f :: Int -> Int -> Int -> Bool
f a b c = a < b
       && b < c
       && a + b + c == 40
       && a ^ 2 + b ^ 2 == c ^ 2

main :: IO ()
main = print . product . map (*25) $ head ys
  where
    xs = [1..40]
    ys = [[a, b, c] | a <- xs, b <- xs, c <- xs, f a b c]
