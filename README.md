## elp_camera

Both folders are a modification of others repos.

In order to use it:
-----------------
Change the calibration path in side_x_side_stereo_node.cpp
	left_cinfo_->loadCameraInfo("YOUR PATH");
	
Maybe you have to change the camera path in usb_cam-test.launch   (dev/video1 or dev/video0)

roslaunch usb_cam usb_cam-test.launch
