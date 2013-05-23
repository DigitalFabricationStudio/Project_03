3D Cleaning
============

Needed a 3D model to test out 3D Printing and Milling in the Fablab. Used [123D Catch from Autodesk](http://www.123dapp.com/catch) to generate the model from a friend's pics. This took about 30-odd photographs on their [iPhone app.](https://itunes.apple.com/us/app/123d-catch/id513913018?mt=8)

The resultant mesh (barbara_raw.stl) was quite decent but nowehere near good enough to print or mill. The following steps were taken to prepare it for these processes.

1. Import the raw model from 123D Catch (barbara_raw.stl) into [Blender](http://www.blender.org/) and apply the Remesh modifier. Use the Smooth mode, and Octree Depth of 8-10 depending on the resolution and detail you need. This step should cap all holes.
2. Now shift into Sculpt mode, and using the Subtract mode on the brush, carefully take away any parts of the model that don't seem quite right (barbara_00_capped.blend).
3. Take the saved file (barbara_00.stl) into [Netfabb Studio Basic](http://www.netfabb.com/download.php). This application allows you to check your file for mesh-errors and fix them.
4. Use Netfabb to repair the mesh: fixing holes, culling unneeded faces and triangulating the mesh.
5. Finally, cut away the base and/or the back so that the final model can stand upright or lie on its back during fabrication (barbara_00_cut.stl).
6. Finally, re-import the cut model into Blender and rotate it to be upright. Save and export the cleaned model ready for fabrication (barbara_00_cut_rotated.stl).