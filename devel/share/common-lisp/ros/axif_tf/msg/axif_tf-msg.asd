
(cl:in-package :asdf)

(defsystem "axif_tf-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "getPoint" :depends-on ("_package_getPoint"))
    (:file "_package_getPoint" :depends-on ("_package"))
  ))