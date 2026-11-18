// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 3

// operator*= @ 14f06f170

ChannelView * __thiscall vraudio::ChannelView::operator*=(ChannelView *this,ChannelView *param_1)

{
  MultiplyPointwise(this->size_,param_1->begin_itr_,this->begin_itr_,this->begin_itr_);
  return this;
}

// operator+= @ 14f06f1a0

ChannelView * __thiscall vraudio::ChannelView::operator+=(ChannelView *this,ChannelView *param_1)

{
  AddPointwise(this->size_,param_1->begin_itr_,this->begin_itr_,this->begin_itr_);
  return this;
}

// operator-= @ 14f06f1d0

ChannelView * __thiscall vraudio::ChannelView::operator-=(ChannelView *this,ChannelView *param_1)

{
  SubtractPointwise(this->size_,param_1->begin_itr_,this->begin_itr_,this->begin_itr_);
  return this;
}

