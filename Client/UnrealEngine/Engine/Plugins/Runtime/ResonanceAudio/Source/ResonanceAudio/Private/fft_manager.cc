// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 11

// FftManager @ 14f0731a0

/* WARNING: Removing unreachable block (ram,0x00014f07320c) */

FftManager * __thiscall vraudio::FftManager::FftManager(FftManager *this,ulong64 param_1)

{
  ChannelView *pCVar1;
  uint uVar2;
  float *pfVar3;
  PFFFT_Setup *pPVar4;
  ChannelView *pCVar5;
  ulonglong uVar6;
  
  uVar2 = (int)param_1 - 1;
  uVar2 = uVar2 >> 1 | uVar2;
  this->frames_per_buffer_ = param_1;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar6 = (ulonglong)((uVar2 >> 0x10 | uVar2) + 1) * 2;
  if (uVar6 < 0x20) {
    uVar6 = 0x20;
  }
  this->fft_size_ = uVar6;
  this->inverse_fft_scale_ = __real_3f800000 / (float)uVar6;
  AudioBuffer::AudioBuffer(&this->temp_zeropad_buffer_,1,uVar6);
  AudioBuffer::AudioBuffer(&this->temp_freq_buffer_,1,this->fft_size_);
  this->pffft_workspace_ = (float *)0x0;
  if (0x4000 < this->fft_size_) {
    pfVar3 = pffft_aligned_malloc(this->fft_size_ * 8);
    this->pffft_workspace_ = pfVar3;
  }
  pPVar4 = pffft_new_setup((int)this->fft_size_,PFFFT_REAL);
  this->fft_ = pPVar4;
  pCVar1 = (this->temp_zeropad_buffer_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar5 = (this->temp_zeropad_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      pCVar5 != pCVar1; pCVar5 = pCVar5 + 1) {
    pCVar5->enabled_ = true;
    memset(pCVar5->begin_itr_,0,pCVar5->size_ << 2);
  }
  return this;
}

// ~FftManager @ 14f0732e0

void __thiscall vraudio::FftManager::~FftManager(FftManager *this)

{
  pffft_destroy_setup(this->fft_);
  if (this->pffft_workspace_ != (float *)0x0) {
    pffft_aligned_free(this->pffft_workspace_);
  }
  AudioBuffer::~AudioBuffer(&this->temp_freq_buffer_);
  AudioBuffer::~AudioBuffer(&this->temp_zeropad_buffer_);
  return;
}

// ApplyReverseFftScaling @ 14f073330

void __thiscall vraudio::FftManager::ApplyReverseFftScaling(FftManager *this,ChannelView *param_1)

{
  ScalarMultiply(param_1->size_,this->inverse_fft_scale_,param_1->begin_itr_,param_1->begin_itr_);
  return;
}

// CanonicalFreqBufferFromMagnitudeAndPhase @ 14f073350

void __thiscall
vraudio::FftManager::CanonicalFreqBufferFromMagnitudeAndPhase
          (FftManager *this,ChannelView *param_1,ChannelView *param_2,ChannelView *param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  longlong lVar3;
  float fVar4;
  
  uVar2 = 1;
  *param_3->begin_itr_ = *param_1->begin_itr_;
  param_3->begin_itr_[1] =
       (float)((uint)param_1->begin_itr_[this->frames_per_buffer_] ^
              __xmm_80000000800000008000000080000000);
  if (1 < this->frames_per_buffer_) {
    lVar3 = 8;
    do {
      fVar4 = cosf(param_2->begin_itr_[uVar2]);
      *(float *)(lVar3 + (longlong)param_3->begin_itr_) = fVar4 * param_1->begin_itr_[uVar2];
      fVar4 = sinf(param_2->begin_itr_[uVar2]);
      pfVar1 = param_1->begin_itr_ + uVar2;
      uVar2 = uVar2 + 1;
      *(float *)((longlong)param_3->begin_itr_ + lVar3 + 4) = fVar4 * *pfVar1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < this->frames_per_buffer_);
  }
  return;
}

// CanonicalFreqBufferFromMagnitudeAndSinCosPhase @ 14f073420

void __thiscall
vraudio::FftManager::CanonicalFreqBufferFromMagnitudeAndSinCosPhase
          (FftManager *this,ulong64 param_1,ChannelView *param_2,ChannelView *param_3,
          ChannelView *param_4,ChannelView *param_5)

{
  *param_5->begin_itr_ = *param_2->begin_itr_;
  param_5->begin_itr_[1] =
       (float)((uint)param_2->begin_itr_[this->frames_per_buffer_] ^
              __xmm_80000000800000008000000080000000);
  param_5->begin_itr_[2] = param_4->begin_itr_[param_1 + 1] * param_2->begin_itr_[1];
  param_5->begin_itr_[3] = param_3->begin_itr_[param_1 + 1] * param_2->begin_itr_[1];
  param_5->begin_itr_[4] = param_4->begin_itr_[param_1 + 2] * param_2->begin_itr_[2];
  param_5->begin_itr_[5] = param_3->begin_itr_[param_1 + 2] * param_2->begin_itr_[2];
  param_5->begin_itr_[6] = param_4->begin_itr_[param_1 + 3] * param_2->begin_itr_[3];
  param_5->begin_itr_[7] = param_3->begin_itr_[param_1 + 3] * param_2->begin_itr_[3];
  param_5->begin_itr_[8] = param_4->begin_itr_[param_1 + 4] * param_2->begin_itr_[4];
  param_5->begin_itr_[9] = param_3->begin_itr_[param_1 + 4] * param_2->begin_itr_[4];
  ComplexInterleavedFormatFromMagnitudeAndSinCosPhase
            (this->frames_per_buffer_ * 2 - 8,param_2->begin_itr_ + 4,
             param_4->begin_itr_ + param_1 + 4,param_3->begin_itr_ + param_1 + 4,
             param_5->begin_itr_ + 8);
  return;
}

// FreqDomainConvolution @ 14f073580

void __thiscall
vraudio::FftManager::FreqDomainConvolution
          (FftManager *this,ChannelView *param_1,ChannelView *param_2,ChannelView *param_3)

{
  pffft_zconvolve_accumulate
            (this->fft_,param_1->begin_itr_,param_2->begin_itr_,param_3->begin_itr_,
             this->inverse_fft_scale_);
  return;
}

// FreqFromTimeDomain @ 14f0735b0

void __thiscall
vraudio::FftManager::FreqFromTimeDomain(FftManager *this,ChannelView *param_1,ChannelView *param_2)

{
  if (param_1->size_ != this->fft_size_) {
    if (this->frames_per_buffer_ != 0) {
      memmove(((this->temp_zeropad_buffer_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_,
              param_1->begin_itr_,this->frames_per_buffer_ * 4);
    }
    param_1 = (this->temp_zeropad_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  }
  pffft_transform(this->fft_,param_1->begin_itr_,param_2->begin_itr_,this->pffft_workspace_,
                  PFFFT_FORWARD);
  return;
}

// GetCanonicalFormatFreqBuffer @ 14f073630

void __thiscall
vraudio::FftManager::GetCanonicalFormatFreqBuffer
          (FftManager *this,ChannelView *param_1,ChannelView *param_2)

{
  pffft_zreorder(this->fft_,param_1->begin_itr_,param_2->begin_itr_,PFFFT_FORWARD);
  return;
}

// GetPffftFormatFreqBuffer @ 14f073650

void __thiscall
vraudio::FftManager::GetPffftFormatFreqBuffer
          (FftManager *this,ChannelView *param_1,ChannelView *param_2)

{
  pffft_zreorder(this->fft_,param_1->begin_itr_,param_2->begin_itr_,PFFFT_BACKWARD);
  return;
}

// MagnitudeFromCanonicalFreqBuffer @ 14f073670

void __thiscall
vraudio::FftManager::MagnitudeFromCanonicalFreqBuffer
          (FftManager *this,ChannelView *param_1,ChannelView *param_2)

{
  *param_2->begin_itr_ =
       (float)((uint)*param_1->begin_itr_ & __xmm_7fffffff7fffffff7fffffff7fffffff);
  ApproxComplexMagnitude
            (this->frames_per_buffer_ - 1,param_1->begin_itr_ + 2,param_2->begin_itr_ + 1);
  param_2->begin_itr_[this->frames_per_buffer_] =
       (float)((uint)param_1->begin_itr_[1] & __xmm_7fffffff7fffffff7fffffff7fffffff);
  return;
}

// TimeFromFreqDomain @ 14f0736f0

void __thiscall
vraudio::FftManager::TimeFromFreqDomain(FftManager *this,ChannelView *param_1,ChannelView *param_2)

{
  ChannelView *pCVar1;
  
  if (param_2->size_ == this->fft_size_) {
    pffft_transform(this->fft_,param_1->begin_itr_,param_2->begin_itr_,this->pffft_workspace_,
                    PFFFT_BACKWARD);
    return;
  }
  pCVar1 = (this->temp_freq_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  pffft_transform(this->fft_,param_1->begin_itr_,pCVar1->begin_itr_,this->pffft_workspace_,
                  PFFFT_BACKWARD);
  if (this->frames_per_buffer_ != 0) {
    memmove(param_2->begin_itr_,pCVar1->begin_itr_,this->frames_per_buffer_ * 4);
  }
  return;
}

