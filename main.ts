namespace sound {
    //% block
    export function record(): number {
        return sound.__record()
    }
    //% block
    export function init(): void {
        sound.__init()
    }
}