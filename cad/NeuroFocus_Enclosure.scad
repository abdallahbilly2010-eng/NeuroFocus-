// NeuroFocus Enclosure CAD Source
// Dimensions: 120 x 100 x 35 mm

difference() {
    // Main Body
    cube([120, 100, 35]);
    
    // Hollow inside
    translate([2, 2, 2])
    cube([116, 96, 33]);
}
