// Declare custom effects using the RGB_MATRIX_EFFECT macro
// (note the lack of semicolon after the macro!)
RGB_MATRIX_EFFECT(PORTAL)

// Step 2.
// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static bool PORTAL(effect_params_t* params) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  for (uint8_t i = led_min; i < led_max; i++) {
	rgb_matrix_set_color(0, 255, 165, 0);
	rgb_matrix_set_color(1, 255, 165, 0);
	rgb_matrix_set_color(2, 255, 165, 0);
	rgb_matrix_set_color(3, 255, 165, 0);
	rgb_matrix_set_color(4, 255, 165, 0);
	rgb_matrix_set_color(5, 255, 165, 0);
	rgb_matrix_set_color(6, 0, 0, 255);
	rgb_matrix_set_color(7, 0, 0, 255);
	rgb_matrix_set_color(8, 0, 0, 255);
	rgb_matrix_set_color(9, 0, 0, 255);
	rgb_matrix_set_color(10, 0, 0, 255);
	rgb_matrix_set_color(11, 0, 0, 255);
	rgb_matrix_set_color(12, 0, 0, 255);
	rgb_matrix_set_color(13, 0, 0, 255);
	rgb_matrix_set_color(14, 0, 0, 255);
	rgb_matrix_set_color(15, 255, 165, 0);
	rgb_matrix_set_color(16, 255, 165, 0);
	rgb_matrix_set_color(17, 255, 165, 0);
	rgb_matrix_set_color(18, 255, 165, 0);
	rgb_matrix_set_color(19, 255, 165, 0);
	rgb_matrix_set_color(20, 255, 165, 0);
	rgb_matrix_set_color(21, 0, 0, 255);
	rgb_matrix_set_color(22, 0, 0, 255);
	rgb_matrix_set_color(23, 0, 0, 255);
	rgb_matrix_set_color(24, 0, 0, 255);
	rgb_matrix_set_color(25, 0, 0, 255);
	rgb_matrix_set_color(26, 0, 0, 255);
	rgb_matrix_set_color(27, 0, 0, 255);
	rgb_matrix_set_color(28, 0, 0, 255);
	rgb_matrix_set_color(29, 0, 0, 255);
	rgb_matrix_set_color(30, 255, 165, 0);
	rgb_matrix_set_color(31, 255, 165, 0);
	rgb_matrix_set_color(32, 255, 165, 0);
	rgb_matrix_set_color(33, 255, 165, 0);
	rgb_matrix_set_color(34, 255, 165, 0);
	rgb_matrix_set_color(35, 255, 165, 0);
	rgb_matrix_set_color(36, 0, 0, 255);
	rgb_matrix_set_color(37, 0, 0, 255);
	rgb_matrix_set_color(38, 0, 0, 255);
	rgb_matrix_set_color(39, 0, 0, 255);
	rgb_matrix_set_color(40, 0, 0, 255);
	rgb_matrix_set_color(41, 0, 0, 255);
	rgb_matrix_set_color(42, 0, 0, 255);
	rgb_matrix_set_color(43, 0, 0, 255);
	rgb_matrix_set_color(44, 255, 165, 0);
	rgb_matrix_set_color(45, 255, 165, 0);
	rgb_matrix_set_color(46, 255, 165, 0);
	rgb_matrix_set_color(47, 255, 165, 0);
	rgb_matrix_set_color(48, 255, 165, 0);
	rgb_matrix_set_color(49, 255, 165, 0);
	rgb_matrix_set_color(50, 0, 0, 255);
	rgb_matrix_set_color(51, 0, 0, 255);
	rgb_matrix_set_color(52, 0, 0, 255);
	rgb_matrix_set_color(53, 0, 0, 255);
	rgb_matrix_set_color(54, 0, 0, 255);
	rgb_matrix_set_color(55, 0, 0, 255);
	rgb_matrix_set_color(56, 0, 0, 255);
	rgb_matrix_set_color(57, 0, 0, 255);
	rgb_matrix_set_color(58, 255, 165, 0);
	rgb_matrix_set_color(59, 255, 165, 0);
	rgb_matrix_set_color(60, 255, 165, 0);
	rgb_matrix_set_color(61, 255, 255, 255);
	rgb_matrix_set_color(62, 0, 0, 255);
	rgb_matrix_set_color(63, 0, 0, 255);
	rgb_matrix_set_color(64, 0, 0, 255);
	rgb_matrix_set_color(65, 255, 165, 0);
	rgb_matrix_set_color(66, 255, 165, 0);
	rgb_matrix_set_color(67, 255, 165, 0);
  }
  return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
