void
shiftview(const Arg *arg) {
	Arg shifted;
	unsigned int a = arg->ui;

	if(a & SHIFT_LEFT) // left circular shift
		shifted.ui = (selmon->tagset[selmon->seltags] >> 1)
		   | (selmon->tagset[selmon->seltags] << (LENGTH(tags) - 1));

	else if(a & SHIFT_RIGHT) // right circular shift
		shifted.ui = (selmon->tagset[selmon->seltags] << 1)
		   | (selmon->tagset[selmon->seltags] >> (LENGTH(tags) - 1));

	if(a & SHIFT_TAG) 
		tag(&shifted);
	
	if(a & SHIFT_VIEW)
		view(&shifted);
}
