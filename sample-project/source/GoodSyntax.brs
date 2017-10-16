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

    c = {
        "foo": 1
        "bar": 2
        "baz": 3
    }

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
