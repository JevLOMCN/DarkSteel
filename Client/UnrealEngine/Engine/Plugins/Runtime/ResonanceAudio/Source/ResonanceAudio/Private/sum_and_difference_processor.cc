// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 2

// SumAndDifferenceProcessor @ 14f099950

SumAndDifferenceProcessor * __thiscall
vraudio::SumAndDifferenceProcessor::SumAndDifferenceProcessor
          (SumAndDifferenceProcessor *this,ulong64 param_1)

{
  AudioBuffer::AudioBuffer(&this->temp_buffer_,1,param_1);
  return this;
}

// Process @ 14f099980

void __thiscall
vraudio::SumAndDifferenceProcessor::Process(SumAndDifferenceProcessor *this,AudioBuffer *param_1)

{
  ChannelView *this_00;
  ChannelView *pCVar1;
  ChannelView *pCVar2;
  
  this_00 = (this->temp_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  pCVar1 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
  if (this_00 != pCVar1) {
    memcpy(this_00->begin_itr_,pCVar1->begin_itr_,this_00->size_ << 2);
  }
  ChannelView::operator-=(this_00,(param_1->channel_views_)._Mypair._Myval2._Myfirst + 1);
  pCVar1 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
  ChannelView::operator+=(pCVar1,pCVar1 + 1);
  pCVar1 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
  pCVar2 = pCVar1 + 1;
  if (pCVar2 != this_00) {
    memcpy(pCVar2->begin_itr_,this_00->begin_itr_,pCVar1[1].size_ << 2);
  }
  return;
}

