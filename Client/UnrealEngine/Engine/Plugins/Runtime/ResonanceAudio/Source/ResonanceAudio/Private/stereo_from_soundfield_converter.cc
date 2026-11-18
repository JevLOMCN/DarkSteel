// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 1

// StereoFromSoundfield @ 14f06e600

void __cdecl vraudio::StereoFromSoundfield(AudioBuffer *param_1,AudioBuffer *param_2)

{
  ChannelView *this;
  ChannelView *this_00;
  ChannelView *pCVar1;
  
  this_00 = (param_2->channel_views_)._Mypair._Myval2._Myfirst;
  pCVar1 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
  this = this_00 + 1;
  if (this_00 != pCVar1) {
    memcpy(this_00->begin_itr_,pCVar1->begin_itr_,this_00->size_ << 2);
  }
  ChannelView::operator+=(this_00,pCVar1 + 1);
  ConstantGain(0,__real_3f000000,this_00,this_00,false);
  if (this != pCVar1) {
    memcpy(this->begin_itr_,pCVar1->begin_itr_,this_00[1].size_ << 2);
  }
  ChannelView::operator-=(this,pCVar1 + 1);
  ConstantGain(0,__real_3f000000,this,this,false);
  return;
}

