;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname a250_r3a_Ngo_NhatTan) (read-case-sensitive #t) (teachpacks ((lib "draw.rkt" "teachpack" "htdp"))) (htdp-settings #(#t constructor repeating-decimal #f #t none #f ((lib "draw.rkt" "teachpack" "htdp")) #f)))
(start 600 600)
(define p (make-posn 450 450))
(define q (make-posn 150 150))

(define a (make-posn 0 300))
(define b (make-posn 300 600))

(define c (make-posn 300 300))
(define d (make-posn 0 600))

(define o (make-posn 300 0))
(define f (make-posn 600 300))

(define m (make-posn 300 300))
(define n (make-posn 600 0))

(draw-solid-rect (make-posn 300 300) 300 300 'black)
(draw-solid-rect (make-posn 0 0) 300 300 'black)

(draw-circle q 110 'white)
(draw-solid-disk q 100 'red)

(draw-circle p 110 'white)
(draw-solid-disk p 100 'red)

(draw-solid-line a b 'black)
(draw-solid-line c d 'black)
(draw-solid-line o f 'black)
(draw-solid-line m n 'black)
