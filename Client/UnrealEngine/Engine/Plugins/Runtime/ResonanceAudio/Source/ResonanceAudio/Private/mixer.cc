// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 4

// Mixer @ 14f075670

Mixer * __thiscall vraudio::Mixer::Mixer(Mixer *this,ulong64 param_1,ulong64 param_2)

{
  ChannelView *pCVar1;
  ChannelView *pCVar2;
  
  AudioBuffer::AudioBuffer(&this->output_,param_1,param_2);
  this->is_empty_ = false;
  pCVar1 = (this->output_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar2 = (this->output_).channel_views_._Mypair._Myval2._Myfirst; pCVar2 != pCVar1;
      pCVar2 = pCVar2 + 1) {
    pCVar2->enabled_ = true;
    memset(pCVar2->begin_itr_,0,pCVar2->size_ << 2);
  }
  this->is_empty_ = true;
  return this;
}

// AddInput @ 14f0756e0

void __thiscall vraudio::Mixer::AddInput(Mixer *this,AudioBuffer *param_1)

{
  longlong lVar1;
  ChannelView *pCVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = (longlong)(this->output_).channel_views_._Mypair._Myval2._Mylast -
          (longlong)(this->output_).channel_views_._Mypair._Myval2._Myfirst;
  lVar1 = lVar4 / 6 + (lVar4 >> 0x3f);
  lVar4 = (longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast -
          (longlong)(param_1->channel_views_)._Mypair._Myval2._Myfirst;
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  uVar5 = (lVar1 >> 2) - (lVar1 >> 0x3f);
  uVar3 = (lVar4 >> 2) - (lVar4 >> 0x3f);
  if (uVar5 < uVar3) {
    uVar3 = uVar5;
  }
  if (uVar3 != 0) {
    lVar4 = 0;
    do {
      pCVar2 = (ChannelView *)
               ((longlong)&((param_1->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ + lVar4)
      ;
      if (pCVar2->enabled_ != false) {
        ChannelView::operator+=
                  ((ChannelView *)
                   ((longlong)&((this->output_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_
                   + lVar4),pCVar2);
      }
      lVar4 = lVar4 + 0x18;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  this->is_empty_ = false;
  return;
}

// GetOutput @ 14f0757a0

AudioBuffer * __thiscall vraudio::Mixer::GetOutput(Mixer *this)

{
  if (this->is_empty_ != false) {
    this = (Mixer *)0x0;
  }
  return &this->output_;
}

// Reset @ 14f0757c0

void __thiscall vraudio::Mixer::Reset(Mixer *this)

{
  ChannelView *pCVar1;
  ChannelView *pCVar2;
  
  if (this->is_empty_ != false) {
    this->is_empty_ = true;
    return;
  }
  pCVar2 = (this->output_).channel_views_._Mypair._Myval2._Myfirst;
  pCVar1 = (this->output_).channel_views_._Mypair._Myval2._Mylast;
  if (pCVar2 == pCVar1) {
    this->is_empty_ = true;
    return;
  }
  do {
    pCVar2->enabled_ = true;
    memset(pCVar2->begin_itr_,0,pCVar2->size_ << 2);
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != pCVar1);
  this->is_empty_ = true;
  return;
}

