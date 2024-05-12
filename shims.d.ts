declare namespace sound {
    //% block
    //% shim=soundCpp::record
    function __record(): number;
    //% block
    //% shim=soundCpp::init
    function __init(): void;
}