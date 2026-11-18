// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 11

// Resampler @ 14f078680

Resampler * __thiscall vraudio::Resampler::Resampler(Resampler *this)

{
  ChannelView *pCVar1;
  ChannelView *pCVar2;
  
  this->up_rate_ = 0;
  this->down_rate_ = 0;
  this->time_modulo_up_rate_ = 0;
  this->last_processed_sample_ = 0;
  this->num_channels_ = 0;
  this->coeffs_per_phase_ = 0;
  AudioBuffer::AudioBuffer(&this->transposed_filter_coeffs_,1,0x4000);
  AudioBuffer::AudioBuffer(&this->temporary_filter_coeffs_,1,0x4000);
  AudioBuffer::AudioBuffer(&this->state_,0x10,0x4000);
  pCVar1 = (this->state_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar2 = (this->state_).channel_views_._Mypair._Myval2._Myfirst; pCVar2 != pCVar1;
      pCVar2 = pCVar2 + 1) {
    pCVar2->enabled_ = true;
    memset(pCVar2->begin_itr_,0,pCVar2->size_ << 2);
  }
  return this;
}

// AreSampleRatesSupported @ 14f078740

bool __cdecl vraudio::Resampler::AreSampleRatesSupported(int param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int local_res8 [2];
  int local_res10 [6];
  
  local_res8[0] = param_1;
  local_res10[0] = param_2;
  piVar7 = local_res10;
  if (param_2 <= param_1) {
    piVar7 = local_res8;
  }
  uVar5 = -param_1;
  if (-param_1 < 0) {
    uVar5 = param_1;
  }
  uVar6 = -param_2;
  if (-param_2 < 0) {
    uVar6 = param_2;
  }
  uVar3 = (ulonglong)uVar6;
  uVar1 = (ulonglong)uVar5;
  while (uVar2 = uVar3, uVar6 != 0) {
    uVar5 = (uint)uVar2;
    uVar1 = (longlong)(int)uVar1 % (longlong)(int)uVar5;
    uVar6 = (uint)uVar1;
    uVar3 = uVar1 & 0xffffffff;
    uVar1 = uVar2;
  }
  lVar4 = (longlong)(*piVar7 / (int)uVar5) * 0xd;
  return (ulonglong)((uint)lVar4 & 1) + lVar4 < 0x4001;
}

// ArrangeFilterAsPolyphase @ 14f0787b0

void __thiscall
vraudio::Resampler::ArrangeFilterAsPolyphase(Resampler *this,ulong64 param_1,ChannelView *param_2)

{
  ChannelView *pCVar1;
  ulonglong uVar2;
  ChannelView *pCVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  pCVar1 = (this->transposed_filter_coeffs_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar3 = (this->transposed_filter_coeffs_).channel_views_._Mypair._Myval2._Myfirst;
      pCVar3 != pCVar1; pCVar3 = pCVar3 + 1) {
    pCVar3->enabled_ = true;
    memset(pCVar3->begin_itr_,0,pCVar3->size_ << 2);
  }
  uVar2 = this->up_rate_;
  uVar7 = 0;
  pCVar1 = (this->transposed_filter_coeffs_).channel_views_._Mypair._Myval2._Myfirst;
  if (uVar2 != 0) {
    do {
      uVar5 = this->coeffs_per_phase_;
      uVar4 = 0;
      if (uVar5 != 0) {
        do {
          uVar6 = uVar2 * uVar4 + uVar7;
          if (uVar6 < param_1) {
            pCVar1->begin_itr_[((uVar7 + 1) * uVar5 - uVar4) + -1] = param_2->begin_itr_[uVar6];
            uVar2 = this->up_rate_;
          }
          uVar5 = this->coeffs_per_phase_;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  return;
}

// GenerateInterpolatingFilter @ 14f078890

void __thiscall vraudio::Resampler::GenerateInterpolatingFilter(Resampler *this,int param_1)

{
  float *pfVar1;
  ChannelView *pCVar2;
  float *pfVar3;
  ChannelView *pCVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  ulonglong uVar8;
  float *pfVar9;
  ulonglong uVar10;
  ChannelView *pCVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  pCVar2 = (this->temporary_filter_coeffs_).channel_views_._Mypair._Myval2._Myfirst;
  uVar8 = this->up_rate_;
  if (this->up_rate_ < this->down_rate_) {
    uVar8 = this->down_rate_;
  }
  uVar12 = (ulonglong)((uint)(uVar8 * 0xd) & 1) + uVar8 * 0xd;
  memset(pCVar2->begin_itr_,0,pCVar2->size_ << 2);
  uVar16 = uVar12 >> 1;
  fVar24 = (((float)param_1 / (float)(uVar8 * 2)) * __real_40c90fdb) / (float)param_1;
  GenerateHannWindow(true,uVar12,pCVar2);
  fVar17 = __real_3f000000;
  uVar15 = 0;
  uVar10 = uVar15;
  if (uVar12 != 0) {
    do {
      pfVar3 = pCVar2->begin_itr_;
      if (uVar10 == uVar16) {
        pfVar3[uVar16] = fVar24 * pfVar3[uVar16];
      }
      else {
        fVar19 = (float)uVar10 - (float)uVar12 * fVar17;
        fVar18 = sinf(fVar19 * fVar24);
        pfVar3[uVar10] = (fVar18 / fVar19) * pfVar3[uVar10];
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar12);
  }
  pfVar3 = pCVar2->begin_itr_;
  fVar17 = 0.0;
  fVar24 = 0.0;
  fVar18 = 0.0;
  fVar19 = 0.0;
  uVar10 = pCVar2->size_ & 0x3fffffffffffffff;
  if (pfVar3 + pCVar2->size_ < pfVar3) {
    uVar10 = uVar15;
  }
  pfVar9 = pfVar3;
  if ((uVar10 != 0) && (7 < uVar10)) {
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    uVar16 = uVar15;
    do {
      uVar16 = uVar16 + 8;
      fVar17 = fVar17 + *pfVar9;
      fVar24 = fVar24 + pfVar9[1];
      fVar18 = fVar18 + pfVar9[2];
      fVar19 = fVar19 + pfVar9[3];
      pfVar1 = pfVar9 + 4;
      pfVar5 = pfVar9 + 5;
      pfVar6 = pfVar9 + 6;
      pfVar7 = pfVar9 + 7;
      pfVar9 = pfVar9 + 8;
      fVar20 = fVar20 + *pfVar1;
      fVar21 = fVar21 + *pfVar5;
      fVar22 = fVar22 + *pfVar6;
      fVar23 = fVar23 + *pfVar7;
    } while (uVar16 != (uVar10 & 0xfffffffffffffff8));
    fVar17 = fVar22 + fVar18 + fVar20 + fVar17 + fVar23 + fVar19 + fVar21 + fVar24;
  }
  for (; pfVar9 != pfVar3 + pCVar2->size_; pfVar9 = pfVar9 + 1) {
    fVar17 = fVar17 + *pfVar9;
  }
  ScalarMultiply(uVar12,(float)this->up_rate_ / fVar17,pfVar3,pfVar3);
  this->coeffs_per_phase_ = ((uVar12 - uVar12 % uVar8) + uVar8) / uVar8;
  pCVar4 = (this->transposed_filter_coeffs_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar11 = (this->transposed_filter_coeffs_).channel_views_._Mypair._Myval2._Myfirst;
      pCVar11 != pCVar4; pCVar11 = pCVar11 + 1) {
    pCVar11->enabled_ = true;
    memset(pCVar11->begin_itr_,0,pCVar11->size_ << 2);
  }
  uVar8 = this->up_rate_;
  pCVar4 = (this->transposed_filter_coeffs_).channel_views_._Mypair._Myval2._Myfirst;
  uVar10 = uVar15;
  if (uVar8 != 0) {
    do {
      uVar16 = this->coeffs_per_phase_;
      uVar13 = uVar15;
      if (uVar16 != 0) {
        do {
          uVar14 = uVar8 * uVar13 + uVar10;
          if (uVar14 < uVar12) {
            pCVar4->begin_itr_[((uVar10 + 1) * uVar16 - uVar13) + -1] = pCVar2->begin_itr_[uVar14];
            uVar8 = this->up_rate_;
          }
          uVar16 = this->coeffs_per_phase_;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar16);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar8);
  }
  return;
}

// GenerateSincFilter @ 14f078bc0

void __thiscall
vraudio::Resampler::GenerateSincFilter
          (Resampler *this,float param_1,float param_2,ulong64 param_3,ChannelView *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar8 = param_3 >> 1;
  fVar17 = (param_1 * __real_40c90fdb) / param_2;
  GenerateHannWindow(true,param_3,param_4);
  fVar10 = __real_3f000000;
  uVar9 = 0;
  uVar7 = uVar9;
  if (param_3 != 0) {
    do {
      pfVar2 = param_4->begin_itr_;
      if (uVar7 == uVar8) {
        pfVar2[uVar8] = fVar17 * pfVar2[uVar8];
      }
      else {
        fVar12 = (float)uVar7 - (float)param_3 * fVar10;
        fVar11 = sinf(fVar12 * fVar17);
        pfVar2[uVar7] = (fVar11 / fVar12) * pfVar2[uVar7];
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_3);
  }
  pfVar2 = param_4->begin_itr_;
  fVar10 = 0.0;
  fVar17 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  uVar7 = param_4->size_ & 0x3fffffffffffffff;
  if (pfVar2 + param_4->size_ < pfVar2) {
    uVar7 = uVar9;
  }
  pfVar6 = pfVar2;
  fVar13 = 0.0;
  if ((uVar7 != 0) && (fVar13 = fVar10, 7 < uVar7)) {
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    do {
      uVar9 = uVar9 + 8;
      fVar10 = fVar10 + *pfVar6;
      fVar17 = fVar17 + pfVar6[1];
      fVar11 = fVar11 + pfVar6[2];
      fVar12 = fVar12 + pfVar6[3];
      pfVar1 = pfVar6 + 4;
      pfVar3 = pfVar6 + 5;
      pfVar4 = pfVar6 + 6;
      pfVar5 = pfVar6 + 7;
      pfVar6 = pfVar6 + 8;
      fVar13 = fVar13 + *pfVar1;
      fVar14 = fVar14 + *pfVar3;
      fVar15 = fVar15 + *pfVar4;
      fVar16 = fVar16 + *pfVar5;
    } while (uVar9 != (uVar7 & 0xfffffffffffffff8));
    fVar13 = fVar15 + fVar11 + fVar13 + fVar10 + fVar16 + fVar12 + fVar14 + fVar17;
  }
  for (; pfVar6 != pfVar2 + param_4->size_; pfVar6 = pfVar6 + 1) {
    fVar10 = *pfVar6;
    fVar13 = fVar13 + fVar10;
  }
  ScalarMultiply(param_3,(float)this->up_rate_ / fVar13,pfVar2,pfVar2);
  return;
}

// GetMaxOutputLength @ 14f078dd0

ulong64 __thiscall vraudio::Resampler::GetMaxOutputLength(Resampler *this,ulong64 param_1)

{
  if (this->up_rate_ == this->down_rate_) {
    return param_1;
  }
  return (this->up_rate_ * param_1) / this->down_rate_ + 1;
}

// GetNextOutputLength @ 14f078e00

ulong64 __thiscall vraudio::Resampler::GetNextOutputLength(Resampler *this,ulong64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  
  uVar1 = this->down_rate_;
  uVar2 = this->up_rate_;
  if (uVar2 == uVar1) {
    return param_1;
  }
  uVar3 = (uVar2 * param_1) / uVar1;
  uVar4 = uVar3 + 1;
  if ((uVar2 * param_1) % uVar1 <= uVar2 * this->last_processed_sample_ + this->time_modulo_up_rate_
     ) {
    uVar4 = uVar3;
  }
  return uVar4;
}

// InitializeStateBuffer @ 14f078e40

/* WARNING: Removing unreachable block (ram,0x00014f078ef7) */
/* WARNING: Removing unreachable block (ram,0x00014f078f02) */
/* WARNING: Removing unreachable block (ram,0x00014f078f06) */
/* WARNING: Removing unreachable block (ram,0x00014f078f0b) */

void __thiscall vraudio::Resampler::InitializeStateBuffer(Resampler *this,ulong64 param_1)

{
  void *_Dst;
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((this->up_rate_ != this->down_rate_) && (this->num_channels_ != 0)) {
    uVar2 = 0;
    uVar3 = this->coeffs_per_phase_ - 1;
    if (this->coeffs_per_phase_ == 0) {
      uVar3 = uVar2;
    }
    if (param_1 != uVar3) {
      uVar5 = uVar3;
      if (param_1 < uVar3) {
        uVar5 = param_1;
      }
      if (uVar3 < param_1) {
        uVar3 = param_1;
      }
      uVar4 = uVar2;
      if (this->num_channels_ != 0) {
        do {
          lVar1 = *(longlong *)
                   ((longlong)&((this->state_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_
                   + uVar4);
          _Dst = (void *)(lVar1 + uVar5 * 4);
          memset(_Dst,0,(lVar1 + uVar3 * 4) - (longlong)_Dst & 0xfffffffffffffffc);
          uVar2 = uVar2 + 1;
          uVar4 = uVar4 + 0x18;
        } while (uVar2 < this->num_channels_);
      }
    }
  }
  return;
}

// Process @ 14f078f50

void __thiscall
vraudio::Resampler::Process(Resampler *this,AudioBuffer *param_1,AudioBuffer *param_2)

{
  longlong *plVar1;
  ChannelView *pCVar2;
  ulong64 uVar3;
  ChannelView *pCVar4;
  longlong lVar5;
  void *_Dst;
  int iVar6;
  int iVar7;
  ChannelView *pCVar8;
  ulong64 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  pCVar2 = (param_2->channel_views_)._Mypair._Myval2._Mylast;
  uVar13 = param_1->num_frames_;
  for (pCVar8 = (param_2->channel_views_)._Mypair._Myval2._Myfirst; pCVar8 != pCVar2;
      pCVar8 = pCVar8 + 1) {
    pCVar8->enabled_ = true;
    memset(pCVar8->begin_itr_,0,pCVar8->size_ << 2);
  }
  if (this->up_rate_ == this->down_rate_) {
    AudioBuffer::operator=(param_2,param_1);
    return;
  }
  uVar10 = 0;
  pCVar2 = (this->transposed_filter_coeffs_).channel_views_._Mypair._Myval2._Myfirst;
  uVar16 = uVar10;
  for (uVar18 = this->last_processed_sample_; uVar18 < uVar13;
      uVar18 = uVar18 + uVar12 / this->up_rate_) {
    uVar3 = this->coeffs_per_phase_;
    lVar11 = uVar3 * this->time_modulo_up_rate_;
    uVar12 = (uVar18 - uVar3) + 1;
    iVar7 = -(int)uVar12;
    if (0 < iVar7) {
      iVar6 = (int)uVar3 + -1;
      for (lVar15 = (longlong)(iVar6 + (int)uVar12); lVar15 < iVar6; lVar15 = lVar15 + 1) {
        if (this->num_channels_ != 0) {
          pCVar8 = (param_2->channel_views_)._Mypair._Myval2._Myfirst;
          pCVar4 = (this->state_).channel_views_._Mypair._Myval2._Myfirst;
          uVar14 = uVar10;
          uVar17 = uVar10;
          do {
            plVar1 = (longlong *)((longlong)&pCVar4->begin_itr_ + uVar14);
            uVar17 = uVar17 + 1;
            lVar5 = *(longlong *)((longlong)&pCVar8->begin_itr_ + uVar14);
            uVar14 = uVar14 + 0x18;
            *(float *)(lVar5 + uVar16) =
                 *(float *)(*plVar1 + lVar15 * 4) * pCVar2->begin_itr_[lVar11] +
                 *(float *)(lVar5 + uVar16);
          } while (uVar17 < this->num_channels_);
        }
        lVar11 = lVar11 + 1;
      }
      uVar12 = uVar12 + (longlong)iVar7;
    }
    if (uVar12 <= uVar18) {
      lVar11 = lVar11 * 4;
      do {
        if (this->num_channels_ != 0) {
          pCVar8 = (param_2->channel_views_)._Mypair._Myval2._Myfirst;
          pCVar4 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
          uVar14 = uVar10;
          uVar17 = uVar10;
          do {
            plVar1 = (longlong *)((longlong)&pCVar4->begin_itr_ + uVar14);
            uVar17 = uVar17 + 1;
            lVar15 = *(longlong *)((longlong)&pCVar8->begin_itr_ + uVar14);
            uVar14 = uVar14 + 0x18;
            *(float *)(lVar15 + uVar16) =
                 *(float *)(*plVar1 + uVar12 * 4) *
                 *(float *)((longlong)pCVar2->begin_itr_ + lVar11) + *(float *)(lVar15 + uVar16);
          } while (uVar17 < this->num_channels_);
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 4;
      } while (uVar12 <= uVar18);
    }
    uVar12 = this->down_rate_ + this->time_modulo_up_rate_;
    uVar16 = uVar16 + 4;
    this->time_modulo_up_rate_ = uVar12 % this->up_rate_;
  }
  puVar9 = &this->num_channels_;
  this->last_processed_sample_ = uVar18 - uVar13;
  iVar7 = ~(uint)uVar13 + (int)this->coeffs_per_phase_;
  if (iVar7 < 1) {
    uVar13 = uVar10;
    if (*puVar9 != 0) {
      do {
        pCVar2 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
        lVar11 = this->coeffs_per_phase_ - 1;
        if (lVar11 != 0) {
          memmove(*(void **)((longlong)
                             &((this->state_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_ +
                            uVar13),
                  (void *)(*(longlong *)((longlong)&pCVar2->begin_itr_ + uVar13) +
                          ((*(longlong *)((longlong)&pCVar2->size_ + uVar13) -
                           this->coeffs_per_phase_) + 1) * 4),lVar11 * 4);
        }
        uVar10 = uVar10 + 1;
        uVar13 = uVar13 + 0x18;
      } while (uVar10 < *puVar9);
    }
  }
  else if (*puVar9 != 0) {
    uVar18 = uVar10;
    do {
      pCVar2 = (this->state_).channel_views_._Mypair._Myval2._Myfirst;
      _Dst = *(void **)((longlong)&pCVar2->begin_itr_ + uVar18);
      memmove(_Dst,(void *)((longlong)_Dst +
                           (*(longlong *)((longlong)&pCVar2->size_ + uVar18) - (longlong)iVar7) * 4)
              ,(longlong)iVar7 * 4);
      if (uVar13 != 0) {
        memmove((void *)(*(longlong *)((longlong)&pCVar2->begin_itr_ + uVar18) +
                        (*(longlong *)((longlong)&pCVar2->size_ + uVar18) - uVar13) * 4),
                *(void **)((longlong)
                           &((param_1->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ +
                          uVar18),uVar13 * 4);
      }
      uVar10 = uVar10 + 1;
      uVar18 = uVar18 + 0x18;
    } while (uVar10 < *puVar9);
  }
  return;
}

// ResetState @ 14f0792a0

void __thiscall vraudio::Resampler::ResetState(Resampler *this)

{
  ChannelView *pCVar1;
  ChannelView *pCVar2;
  
  this->time_modulo_up_rate_ = 0;
  this->last_processed_sample_ = 0;
  pCVar1 = (this->state_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar2 = (this->state_).channel_views_._Mypair._Myval2._Myfirst; pCVar2 != pCVar1;
      pCVar2 = pCVar2 + 1) {
    pCVar2->enabled_ = true;
    memset(pCVar2->begin_itr_,0,pCVar2->size_ << 2);
  }
  return;
}

// SetRateAndNumChannels @ 14f079300

/* WARNING: Removing unreachable block (ram,0x00014f079437) */
/* WARNING: Removing unreachable block (ram,0x00014f079442) */
/* WARNING: Removing unreachable block (ram,0x00014f079446) */
/* WARNING: Removing unreachable block (ram,0x00014f07944b) */

void __thiscall
vraudio::Resampler::SetRateAndNumChannels(Resampler *this,int param_1,int param_2,ulong64 param_3)

{
  ulong64 *puVar1;
  void *_Dst;
  longlong lVar2;
  ulong64 uVar3;
  uint uVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar10 = -param_2;
  if (-param_2 < 0) {
    uVar10 = param_2;
  }
  uVar4 = -param_1;
  if (-param_1 < 0) {
    uVar4 = param_1;
  }
  uVar8 = (ulonglong)uVar4;
  uVar9 = (ulonglong)uVar10;
  while (uVar6 = uVar8, uVar4 != 0) {
    uVar10 = (uint)uVar6;
    uVar9 = (longlong)(int)uVar9 % (longlong)(int)uVar10;
    uVar4 = (uint)uVar9;
    uVar8 = uVar9 & 0xffffffff;
    uVar9 = uVar6;
  }
  puVar1 = &this->down_rate_;
  uVar8 = 0;
  uVar3 = (ulong64)(param_1 / (int)uVar10);
  uVar9 = this->coeffs_per_phase_ - 1;
  if (this->coeffs_per_phase_ == 0) {
    uVar9 = uVar8;
  }
  uVar5 = (ulong64)(param_2 / (int)uVar10);
  if ((uVar5 != this->up_rate_) || (uVar3 != *puVar1)) {
    this->up_rate_ = uVar5;
    *puVar1 = uVar3;
    if (uVar5 == uVar3) {
      return;
    }
    GenerateInterpolatingFilter(this,param_1);
    this->time_modulo_up_rate_ = 0;
  }
  if (((this->num_channels_ != param_3) &&
      (this->num_channels_ = param_3, this->up_rate_ != *puVar1)) && (param_3 != 0)) {
    uVar6 = this->coeffs_per_phase_ - 1;
    if (this->coeffs_per_phase_ == 0) {
      uVar6 = uVar8;
    }
    if (uVar9 != uVar6) {
      uVar7 = uVar6;
      if (uVar6 < uVar9) {
        uVar7 = uVar9;
      }
      if (uVar9 < uVar6) {
        uVar6 = uVar9;
      }
      uVar9 = uVar8;
      if (param_3 != 0) {
        do {
          lVar2 = *(longlong *)
                   ((longlong)&((this->state_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_
                   + uVar8);
          _Dst = (void *)(lVar2 + uVar6 * 4);
          memset(_Dst,0,(lVar2 + uVar7 * 4) - (longlong)_Dst & 0xfffffffffffffffc);
          uVar9 = uVar9 + 1;
          uVar8 = uVar8 + 0x18;
        } while (uVar9 < this->num_channels_);
      }
    }
  }
  return;
}

