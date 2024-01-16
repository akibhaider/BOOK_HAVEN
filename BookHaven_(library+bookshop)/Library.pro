QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

SOURCES += \
    aboutus_cust_login.cpp \
    addbook.cpp \
    addmember.cpp \
    authorslist.cpp \
    bookcart.cpp \
    booklist.cpp \
    contactus.cpp \
    customer_login.cpp \
    customer_panel.cpp \
    customer_signup.cpp \
    customers_book_list.cpp \
    deletebook.cpp \
    deletemember.cpp \
    digitallibrary.cpp \
    editbook.cpp \
    editmember.cpp \
    genrelist.cpp \
    issuebook.cpp \
    login.cpp \
    main.cpp \
    manageauthors.cpp \
    managebooks.cpp \
    memberslist.cpp \
    newpasswd.cpp \
    returnbook.cpp \
    signup.cpp

HEADERS += \
    aboutus_cust_login.h \
    addbook.h \
    addmember.h \
    authorslist.h \
    bookcart.h \
    booklist.h \
    contactus.h \
    customer_login.h \
    customer_panel.h \
    customer_signup.h \
    customers_book_list.h \
    deletebook.h \
    deletemember.h \
    digitallibrary.h \
    editbook.h \
    editmember.h \
    genrelist.h \
    issuebook.h \
    login.h \
    manageauthors.h \
    managebooks.h \
    memberslist.h \
    newpasswd.h \
    returnbook.h \
    signup.h

FORMS += \
    aboutus_cust_login.ui \
    addbook.ui \
    addmember.ui \
    authorslist.ui \
    bookcart.ui \
    booklist.ui \
    contactus.ui \
    customer_login.ui \
    customer_panel.ui \
    customer_signup.ui \
    customers_book_list.ui \
    deletebook.ui \
    deletemember.ui \
    digitallibrary.ui \
    editbook.ui \
    editmember.ui \
    genrelist.ui \
    issuebook.ui \
    login.ui \
    manageauthors.ui \
    managebooks.ui \
    memberslist.ui \
    newpasswd.ui \
    returnbook.ui \
    signup.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons.qrc

DISTFILES +=
