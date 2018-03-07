function sampleFunction() as object
    if GetGlobalAA().user = invalid then
        user = {
            _name : "",
        }
        GetGlobalAA()["user"] = user
    end if
    return invalid
end function
