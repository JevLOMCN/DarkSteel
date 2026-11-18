// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 5

// DelayFilter @ 14f072a30

DelayFilter * __thiscall
vraudio::DelayFilter::DelayFilter(DelayFilter *this,ulong64 param_1,ulong64 param_2)

{
  this->frames_per_buffer_ = param_2;
  (this->delay_line_)._Mypair._Myval2 = (AudioBuffer *)0x0;
  this->write_cursor_ = 0;
  SetMaximumDelay(this,param_1);
  return this;
}

// operator() @ 14f072a60

void __thiscall
std::default_delete<vraudio::AudioBuffer>::operator()
          (default_delete<vraudio::AudioBuffer> *this,AudioBuffer *param_1)

{
  ChannelView *pCVar1;
  float *pfVar2;
  ulong64 uVar3;
  ChannelView *pCVar4;
  
  if (param_1 != (AudioBuffer *)0x0) {
    pCVar1 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
    if (pCVar1 != (ChannelView *)0x0) {
      uVar3 = (((longlong)(param_1->channel_views_)._Mypair._Myval2._Myend - (longlong)pCVar1) /
              0x18) * 0x18;
      pCVar4 = pCVar1;
      if (0xfff < uVar3) {
        pCVar4 = *(ChannelView **)&pCVar1[-1].enabled_;
        uVar3 = uVar3 + 0x27;
        if (0x1f < (ulonglong)((longlong)pCVar1 + (-8 - (longlong)pCVar4))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pCVar4,uVar3);
      (param_1->channel_views_)._Mypair._Myval2._Myfirst = (ChannelView *)0x0;
      (param_1->channel_views_)._Mypair._Myval2._Mylast = (ChannelView *)0x0;
      (param_1->channel_views_)._Mypair._Myval2._Myend = (ChannelView *)0x0;
    }
    pfVar2 = (param_1->data_)._Mypair._Myval2._Myfirst;
    if (pfVar2 != (float *)0x0) {
      free(*(void **)(pfVar2 + -2));
      (param_1->data_)._Mypair._Myval2._Myfirst = (float *)0x0;
      (param_1->data_)._Mypair._Myval2._Mylast = (float *)0x0;
      (param_1->data_)._Mypair._Myval2._Myend = (float *)0x0;
    }
    ::operator_delete(param_1,0x48);
  }
  return;
}

// GetDelayedData @ 14f072b40

/* WARNING: Type propagation algorithm not settling */

void __thiscall
vraudio::DelayFilter::GetDelayedData(DelayFilter *this,ulong64 param_1,ChannelView *param_2)

{
  AudioBuffer *pAVar1;
  ulonglong uVar2;
  ChannelView *pCVar3;
  float *pfVar4;
  float *_Dst;
  ulonglong uVar5;
  float *_Src;
  ulonglong uVar6;
  size_t _Size;
  
  pAVar1 = (this->delay_line_)._Mypair._Myval2;
  uVar2 = this->frames_per_buffer_;
  uVar6 = pAVar1->num_frames_;
  pCVar3 = (pAVar1->channel_views_)._Mypair._Myval2._Myfirst;
  _Dst = param_2->begin_itr_;
  uVar5 = (((this->write_cursor_ - uVar2) - param_1) + uVar6) % uVar6;
  pfVar4 = pCVar3->begin_itr_;
  uVar6 = uVar6 - uVar5;
  _Src = pfVar4 + uVar5;
  if (uVar6 < uVar2) {
    memmove(_Dst,_Src,(pCVar3->size_ * 4 - (longlong)_Src) + (longlong)pfVar4);
    _Src = pCVar3->begin_itr_;
    _Size = (this->frames_per_buffer_ - uVar6) * 4;
    _Dst = param_2->begin_itr_ + uVar6;
  }
  else {
    _Size = ((uVar5 + uVar2) * 4 - (longlong)_Src) + (longlong)pfVar4;
  }
  memmove(_Dst,_Src,_Size);
  return;
}

// InsertData @ 14f072bf0

/* WARNING: Type propagation algorithm not settling */

void __thiscall vraudio::DelayFilter::InsertData(DelayFilter *this,ChannelView *param_1)

{
  AudioBuffer *pAVar1;
  ulonglong uVar2;
  ChannelView *pCVar3;
  float *_Dst;
  float *_Src;
  ulonglong uVar4;
  size_t _Size;
  
  pAVar1 = (this->delay_line_)._Mypair._Myval2;
  _Src = param_1->begin_itr_;
  uVar2 = pAVar1->num_frames_;
  pCVar3 = (pAVar1->channel_views_)._Mypair._Myval2._Myfirst;
  uVar4 = uVar2 - this->write_cursor_;
  _Dst = pCVar3->begin_itr_ + this->write_cursor_;
  if (uVar4 < this->frames_per_buffer_) {
    memmove(_Dst,_Src,uVar4 * 4);
    _Dst = pCVar3->begin_itr_;
    _Src = param_1->begin_itr_ + uVar4;
    _Size = (param_1->size_ * 4 - (longlong)_Src) + (longlong)param_1->begin_itr_;
  }
  else {
    _Size = param_1->size_ << 2;
  }
  memmove(_Dst,_Src,_Size);
  this->write_cursor_ = (this->write_cursor_ + this->frames_per_buffer_) % uVar2;
  return;
}

// SetMaximumDelay @ 14f072ca0

/* WARNING: Type propagation algorithm not settling */

void __thiscall vraudio::DelayFilter::SetMaximumDelay(DelayFilter *this,ulong64 param_1)

{
  ulong64 uVar1;
  float *_Src;
  AudioBuffer *pAVar2;
  ChannelView *pCVar3;
  ulong64 uVar4;
  AudioBuffer *pAVar5;
  ChannelView *pCVar6;
  ChannelView *pCVar7;
  
  this->max_delay_length_ = param_1;
  pAVar5 = (this->delay_line_)._Mypair._Myval2;
  uVar1 = this->frames_per_buffer_ + param_1;
  if (pAVar5 == (AudioBuffer *)0x0) {
    pAVar5 = ::operator_new(0x48);
    if (pAVar5 == (AudioBuffer *)0x0) {
      pAVar5 = (AudioBuffer *)0x0;
    }
    else {
      pAVar5 = AudioBuffer::AudioBuffer(pAVar5,1,uVar1);
    }
    pAVar2 = (this->delay_line_)._Mypair._Myval2;
    (this->delay_line_)._Mypair._Myval2 = pAVar5;
    if (pAVar2 != (AudioBuffer *)0x0) {
      std::default_delete<vraudio::AudioBuffer>::operator()
                ((default_delete<vraudio::AudioBuffer> *)&this->delay_line_,pAVar2);
    }
    pAVar5 = (this->delay_line_)._Mypair._Myval2;
    pCVar3 = (pAVar5->channel_views_)._Mypair._Myval2._Mylast;
    pCVar6 = (pAVar5->channel_views_)._Mypair._Myval2._Myfirst;
    if (pCVar6 != pCVar3) {
      do {
        pCVar6->enabled_ = true;
        memset(pCVar6->begin_itr_,0,pCVar6->size_ << 2);
        pCVar6 = pCVar6 + 1;
      } while (pCVar6 != pCVar3);
      return;
    }
  }
  else {
    pCVar3 = (pAVar5->channel_views_)._Mypair._Myval2._Myfirst;
    uVar4 = pAVar5->num_frames_;
    if (uVar4 - this->frames_per_buffer_ < param_1) {
      pAVar5 = ::operator_new(0x48);
      if (pAVar5 == (AudioBuffer *)0x0) {
        pAVar5 = (AudioBuffer *)0x0;
      }
      else {
        pAVar5 = AudioBuffer::AudioBuffer(pAVar5,1,uVar1);
      }
      pCVar6 = (pAVar5->channel_views_)._Mypair._Myval2._Mylast;
      for (pCVar7 = (pAVar5->channel_views_)._Mypair._Myval2._Myfirst; pCVar7 != pCVar6;
          pCVar7 = pCVar7 + 1) {
        pCVar7->enabled_ = true;
        memset(pCVar7->begin_itr_,0,pCVar7->size_ << 2);
      }
      _Src = pCVar3->begin_itr_ + this->write_cursor_;
      memmove(((pAVar5->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_,_Src,
              (pCVar3->size_ * 4 - (longlong)_Src) + (longlong)pCVar3->begin_itr_);
      uVar1 = this->write_cursor_;
      if (uVar1 != 0) {
        memmove(((pAVar5->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ + (uVar4 - uVar1),
                pCVar3->begin_itr_,uVar1 * 4);
        this->write_cursor_ = uVar4;
      }
      pAVar2 = (this->delay_line_)._Mypair._Myval2;
      (this->delay_line_)._Mypair._Myval2 = pAVar5;
      if (pAVar2 != (AudioBuffer *)0x0) {
        std::default_delete<vraudio::AudioBuffer>::operator()
                  ((default_delete<vraudio::AudioBuffer> *)&this->delay_line_,pAVar2);
      }
    }
  }
  return;
}

