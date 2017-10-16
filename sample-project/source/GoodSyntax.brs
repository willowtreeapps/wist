sub DefaultMain()
    print "in showChannelSGScreen"
    'Indicate this is a Roku SceneGraph application'
    screen = CreateObject("roSGScreen")
    m.port = CreateObject("roMessagePort")
    screen.setMessagePort(m.port)

    'Create a scene and load /components/sampleproject.xml'
    scene = screen.CreateScene("SampleProject")
    screen.show()

    stop

    ? "some thing";"other thing"

    a = ["foo", "bar", "baz"]

    b = [
        "foo"
        "bar"
        "baz"
    ]

    c = {
        "foo": 1,
        "bar": 2,
        "baz": 3
    }

    d = {
        "foo": 1
        "bar": 2
        "baz": 3
    }

    e = 255

    f = &HFF

    g = &hFEDCBA9876543210&

    h = 9876543210&

    i = 2.01

    j = 1.23456E+30

    k = 2!

    l = 1.23456789D-12

    m = 2.3#

    n = 2.345678987654

    while(true)
        msg = wait(0, m.port)
        msgType = type(msg)
        if msgType = "roSGScreenEvent"
            if msg.isScreenClosed() then return
        end if
    end while
end sub

function SomeFunc() as void
    a = "foo"
    b = "bar"

    return
end function
