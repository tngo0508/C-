;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname racket_e3_form) (read-case-sensitive #t) (teachpacks ((lib "draw.rkt" "teachpack" "htdp") (lib "gui.rkt" "teachpack" "htdp"))) (htdp-settings #(#t constructor repeating-decimal #t #t none #f ((lib "draw.rkt" "teachpack" "htdp") (lib "gui.rkt" "teachpack" "htdp")))))
;; Need to add teachpack: gui.ss

;; textbox : GUI-ITEM
(define text
  (make-text "Please, enter your name:"))

;; msg : GUI-ITEM
(define msg
  (make-message (string-append "Hello!")))

;; respond: appends the textbox contents to the message displayed
(define (respond e)
  (draw-message msg (string-append "Thanks, " (text-contents text) "!")))

;; set up a window with three "lines":
;;       a text field, a message, and two buttons
;; fill in text and click OK
(define w
  (create-window
   (list
    (list text)
    (list msg)
    (list (make-button "OK" respond)
          (make-button "QUIT" (lambda (e) (hide-window w)))))))      