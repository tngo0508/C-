;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname a250_e12_Ngo_NhatTan) (read-case-sensitive #t) (teachpacks ((lib "draw.rkt" "teachpack" "htdp") (lib "gui.rkt" "teachpack" "htdp"))) (htdp-settings #(#t constructor repeating-decimal #t #t none #f ((lib "draw.rkt" "teachpack" "htdp") (lib "gui.rkt" "teachpack" "htdp")) #f)))
;; Need to add teachpack: gui.ss

;; textbox : GUI-ITEM
(define text
  (make-text "Please, enter your name:"))

;; msg : GUI-ITEM
(define msg
  (make-message (string-append "You can use C++ as a procedural, as well as an object-oriented, language")))
(define msg1
  (make-message (string-append "(Click on true or false.)")))

;; respond: appends the textbox contents to the message displayed
(define (respond e)
  (draw-message msg (string-append "Correct, " (text-contents text) "!")))

(define (respond2 f)
  (draw-message msg (string-append "Wrong, " (text-contents text) "!")))

;; set up a window with three "lines":
;;       a text field, a message, and two buttons
;; fill in text and click OK
(define w
  (create-window
   (list
    (list text)
    (list msg)
    (list (make-button "true" respond)
          (make-button "false" respond2))
    (list msg1)
  
    (list(make-button "QUIT" (lambda (e) (hide-window w)))))))      