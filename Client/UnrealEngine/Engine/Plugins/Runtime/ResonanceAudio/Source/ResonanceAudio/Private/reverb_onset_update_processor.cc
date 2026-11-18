// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 4

// vector<float,std::allocator<float>_><std::allocator<float>,0> @ 14f07a560

vector<float,std::allocator<float>_> * __thiscall
std::vector<float,std::allocator<float>_>::
vector<float,std::allocator<float>_><std::allocator<float>,0>
          (vector<float,std::allocator<float>_> *this,ulong64 param_1,float *param_2,
          allocator<float> *param_3)

{
  float *_Dst;
  longlong lVar1;
  
  (this->_Mypair)._Myval2._Myfirst = (float *)0x0;
  (this->_Mypair)._Myval2._Mylast = (float *)0x0;
  (this->_Mypair)._Myval2._Myend = (float *)0x0;
  if (param_1 != 0) {
    if (0x3fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    _Dst = _Allocate<16,std::_Default_allocate_traits>(param_1 * 4);
    (this->_Mypair)._Myval2._Myfirst = _Dst;
    (this->_Mypair)._Myval2._Mylast = _Dst;
    (this->_Mypair)._Myval2._Myend = _Dst + param_1;
    if (*param_2 == 0.0) {
      memset(_Dst,0,param_1 * 4);
      _Dst = _Dst + param_1;
    }
    else {
      if (3 < param_1) {
        lVar1 = (param_1 - 4 >> 2) + 1;
        param_1 = param_1 + lVar1 * -4;
        do {
          *_Dst = *param_2;
          _Dst[1] = *param_2;
          _Dst[2] = *param_2;
          _Dst[3] = *param_2;
          _Dst = _Dst + 4;
          lVar1 = lVar1 + -1;
        } while (lVar1 != 0);
      }
      for (; param_1 != 0; param_1 = param_1 - 1) {
        *_Dst = *param_2;
        _Dst = _Dst + 1;
      }
    }
    (this->_Mypair)._Myval2._Mylast = _Dst;
  }
  return this;
}

// ReverbOnsetUpdateProcessor @ 14f07a670

ReverbOnsetUpdateProcessor * __thiscall
vraudio::ReverbOnsetUpdateProcessor::ReverbOnsetUpdateProcessor
          (ReverbOnsetUpdateProcessor *this,ulong64 param_1,int param_2,AudioBuffer *param_3,
          AudioBuffer *param_4)

{
  byte *pbVar1;
  ulong64 uVar2;
  int *piVar3;
  int *piVar4;
  int _Val;
  uint uVar5;
  ulong64 _Size;
  float local_res8 [2];
  allocator<float> local_res18 [16];
  byte local_38 [16];
  
  this->sampling_rate_ = param_2;
  piVar4 = (int *)0x0;
  uVar5 = 0;
  this->tail_update_cursor_ = 0;
  uVar2 = CeilToMultipleOfFramesPerBuffer(0x1800,param_1);
  this->tail_length_ = uVar2;
  this->gain_ = 1.0;
  uVar2 = GetNumReverbOctaveBands(this->sampling_rate_);
  (this->curve_indices_)._Mypair._Myval2._Myfirst = (int *)0x0;
  (this->curve_indices_)._Mypair._Myval2._Mylast = (int *)0x0;
  (this->curve_indices_)._Mypair._Myval2._Myend = (int *)0x0;
  if (uVar2 != 0) {
    if (0x3fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::vector<int,std::allocator<int>_>::_Xlength();
    }
    _Size = uVar2 * 4;
    piVar3 = std::_Allocate<16,std::_Default_allocate_traits>(_Size);
    (this->curve_indices_)._Mypair._Myval2._Myfirst = piVar3;
    (this->curve_indices_)._Mypair._Myval2._Mylast = piVar3;
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    (this->curve_indices_)._Mypair._Myval2._Myend = piVar3 + uVar2;
    piVar3 = (this->curve_indices_)._Mypair._Myval2._Myfirst;
    do {
      pbVar1 = (byte *)(piVar4 + 0x54c3f04c);
      piVar4 = (int *)((longlong)piVar4 + 1);
      if (*pbVar1 != (&stack0xffffffffffffffc7)[(longlong)piVar4]) {
        uVar5 = -(uint)(*pbVar1 < (byte)(&stack0xffffffffffffffc7)[(longlong)piVar4]) | 1;
        break;
      }
    } while (piVar4 != (int *)&DAT_00000004);
    piVar4 = piVar3 + uVar2;
    if (uVar5 == 0) {
      _Val = 0;
    }
    else {
      _Size = uVar2 << 2;
      _Val = -1;
    }
    memset(piVar3,_Val,_Size);
    (this->curve_indices_)._Mypair._Myval2._Mylast = piVar4;
  }
  local_res8[0] = 0.0;
  std::vector<float,std::allocator<float>_>::
  vector<float,std::allocator<float>_><std::allocator<float>,0>
            (&this->pure_decay_coefficients_,
             (longlong)piVar4 - (longlong)(this->curve_indices_)._Mypair._Myval2._Myfirst >> 2,
             local_res8,local_res18);
  local_res8[0] = 0.0;
  std::vector<float,std::allocator<float>_>::
  vector<float,std::allocator<float>_><std::allocator<float>,0>
            (&this->pure_decay_exponents_,
             (longlong)(this->curve_indices_)._Mypair._Myval2._Mylast -
             (longlong)(this->curve_indices_)._Mypair._Myval2._Myfirst >> 2,local_res8,local_res18);
  AudioBuffer::AudioBuffer(&this->band_buffer_,2,param_1);
  AudioBuffer::AudioBuffer(&this->envelope_buffer_,1,param_1);
  this->adder_curves_ = param_4;
  this->base_curves_ = param_3;
  return this;
}

// Process @ 14f07a800

/* WARNING: Removing unreachable block (ram,0x00014f07aa1b) */
/* WARNING: Removing unreachable block (ram,0x00014f07aa2b) */
/* WARNING: Removing unreachable block (ram,0x00014f07aa2f) */
/* WARNING: Removing unreachable block (ram,0x00014f07aa34) */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
vraudio::ReverbOnsetUpdateProcessor::Process
          (ReverbOnsetUpdateProcessor *this,
          vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_> *param_1,
          vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_> *param_2,
          ChannelView *param_3,ChannelView *param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  ulong64 uVar4;
  ChannelView *pCVar5;
  ChannelView *pCVar6;
  longlong *plVar7;
  float *pfVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  size_t _Size;
  float *pfVar11;
  ulong64 uVar12;
  ChannelView *local_res8;
  longlong local_58;
  
  if (this->tail_length_ <= this->tail_update_cursor_) {
    this->tail_update_cursor_ = 0;
    return false;
  }
  uVar4 = (this->band_buffer_).num_frames_;
  memset(param_3->begin_itr_,0,param_3->size_ << 2);
  memset(param_4->begin_itr_,0,param_4->size_ << 2);
  uVar10 = this->tail_update_cursor_;
  pCVar5 = (this->band_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  uVar12 = uVar4;
  if (0x1800 < uVar10 + uVar4) {
    uVar12 = 0x1800 - uVar10;
    if (0x17ff < uVar10) {
      uVar12 = uVar10 - 0x1800;
    }
  }
  uVar10 = 0;
  pCVar6 = (this->envelope_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  if ((longlong)(this->curve_indices_)._Mypair._Myval2._Mylast -
      (longlong)(this->curve_indices_)._Mypair._Myval2._Myfirst >> 2 != 0) {
    local_58 = 0;
    do {
      plVar7 = *(longlong **)
                ((longlong)
                 &(((param_2->_Mypair)._Myval2._Myfirst)->channel_views_)._Mypair._Myval2._Myfirst +
                local_58);
      ScalarMultiply(uVar4,this->gain_,
                     (float *)(**(longlong **)
                                 ((longlong)
                                  &(((param_1->_Mypair)._Myval2._Myfirst)->channel_views_)._Mypair.
                                   _Myval2._Myfirst + local_58) + this->tail_update_cursor_ * 4),
                     pCVar5->begin_itr_);
      ScalarMultiply(uVar4,this->gain_,(float *)(*plVar7 + this->tail_update_cursor_ * 4),
                     pCVar5[1].begin_itr_);
      uVar3 = (this->curve_indices_)._Mypair._Myval2._Myfirst[uVar10];
      if (uVar3 == 0xffffffff) {
        uVar9 = 0;
        if (uVar4 < 4) {
          if (uVar4 != 0) {
            pfVar8 = (this->pure_decay_coefficients_)._Mypair._Myval2._Myfirst;
            pfVar11 = (this->pure_decay_exponents_)._Mypair._Myval2._Myfirst;
            goto LAB_14f07abec;
          }
        }
        else {
          pfVar8 = (this->pure_decay_coefficients_)._Mypair._Myval2._Myfirst;
          pfVar11 = (this->pure_decay_exponents_)._Mypair._Myval2._Myfirst;
          do {
            param_3->begin_itr_[uVar9] =
                 pCVar5->begin_itr_[uVar9] * pfVar8[uVar10] + param_3->begin_itr_[uVar9];
            param_4->begin_itr_[uVar9] =
                 pCVar5[1].begin_itr_[uVar9] * pfVar8[uVar10] + param_4->begin_itr_[uVar9];
            fVar1 = pfVar11[uVar10];
            fVar2 = pfVar8[uVar10];
            pfVar8[uVar10] = fVar1 * fVar2;
            param_3->begin_itr_[uVar9 + 1] =
                 fVar1 * fVar2 * pCVar5->begin_itr_[uVar9 + 1] + param_3->begin_itr_[uVar9 + 1];
            param_4->begin_itr_[uVar9 + 1] =
                 pCVar5[1].begin_itr_[uVar9 + 1] * pfVar8[uVar10] + param_4->begin_itr_[uVar9 + 1];
            fVar1 = pfVar11[uVar10];
            fVar2 = pfVar8[uVar10];
            pfVar8[uVar10] = fVar1 * fVar2;
            param_3->begin_itr_[uVar9 + 2] =
                 fVar1 * fVar2 * pCVar5->begin_itr_[uVar9 + 2] + param_3->begin_itr_[uVar9 + 2];
            param_4->begin_itr_[uVar9 + 2] =
                 pCVar5[1].begin_itr_[uVar9 + 2] * pfVar8[uVar10] + param_4->begin_itr_[uVar9 + 2];
            fVar1 = pfVar11[uVar10];
            fVar2 = pfVar8[uVar10];
            pfVar8[uVar10] = fVar1 * fVar2;
            param_3->begin_itr_[uVar9 + 3] =
                 fVar1 * fVar2 * pCVar5->begin_itr_[uVar9 + 3] + param_3->begin_itr_[uVar9 + 3];
            param_4->begin_itr_[uVar9 + 3] =
                 pCVar5[1].begin_itr_[uVar9 + 3] * pfVar8[uVar10] + param_4->begin_itr_[uVar9 + 3];
            uVar9 = uVar9 + 4;
            pfVar8[uVar10] = pfVar11[uVar10] * pfVar8[uVar10];
          } while (uVar9 < uVar4 - 3);
          for (; uVar9 < uVar4; uVar9 = uVar9 + 1) {
LAB_14f07abec:
            param_3->begin_itr_[uVar9] =
                 pCVar5->begin_itr_[uVar9] * pfVar8[uVar10] + param_3->begin_itr_[uVar9];
            param_4->begin_itr_[uVar9] =
                 pCVar5[1].begin_itr_[uVar9] * pfVar8[uVar10] + param_4->begin_itr_[uVar9];
            pfVar8[uVar10] = pfVar11[uVar10] * pfVar8[uVar10];
          }
        }
      }
      else {
        if (this->tail_update_cursor_ < 0x1800) {
          local_res8 = (this->adder_curves_->channel_views_)._Mypair._Myval2._Myfirst;
          if (uVar3 < 0x33) {
            if (uVar12 != 0) {
              pfVar8 = ((this->base_curves_->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_;
              goto LAB_14f07a9b3;
            }
          }
          else {
            local_res8 = local_res8 + 1;
            if (uVar12 != 0) {
              pfVar8 = (this->base_curves_->channel_views_)._Mypair._Myval2._Myfirst[1].begin_itr_;
LAB_14f07a9b3:
              memmove(pCVar6->begin_itr_,pfVar8 + this->tail_update_cursor_,uVar12 * 4);
            }
          }
          ScalarMultiplyAndAccumulate
                    (uVar12,kCurveCorrectionMultipliers[(int)uVar3],
                     local_res8->begin_itr_ + this->tail_update_cursor_,pCVar6->begin_itr_);
          pfVar8 = pCVar6->begin_itr_ + uVar12;
          _Size = (longlong)pCVar6->begin_itr_ + (pCVar6->size_ * 4 - (longlong)pfVar8) &
                  0xfffffffffffffffc;
        }
        else {
          pfVar8 = pCVar6->begin_itr_;
          _Size = pCVar6->size_ << 2;
        }
        memset(pfVar8,0,_Size);
        MultiplyAndAccumulatePointwise
                  (uVar4,pCVar6->begin_itr_,pCVar5->begin_itr_,param_3->begin_itr_);
        MultiplyAndAccumulatePointwise
                  (uVar4,pCVar6->begin_itr_,pCVar5[1].begin_itr_,param_4->begin_itr_);
      }
      uVar10 = uVar10 + 1;
      local_58 = local_58 + 0x48;
    } while (uVar10 < (ulonglong)
                      ((longlong)(this->curve_indices_)._Mypair._Myval2._Mylast -
                       (longlong)(this->curve_indices_)._Mypair._Myval2._Myfirst >> 2));
  }
  this->tail_update_cursor_ = this->tail_update_cursor_ + uVar4;
  return true;
}

// SetReverbTimes @ 14f07acb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
vraudio::ReverbOnsetUpdateProcessor::SetReverbTimes(ReverbOnsetUpdateProcessor *this,float *param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  
  piVar11 = (this->curve_indices_)._Mypair._Myval2._Myfirst;
  uVar9 = 0;
  iVar1 = this->sampling_rate_;
  uVar10 = (longlong)(this->curve_indices_)._Mypair._Myval2._Mylast - (longlong)piVar11 >> 2;
  this->tail_update_cursor_ = 0;
  fVar6 = __real_5f000000;
  fVar5 = __real_3e19999a;
  fVar4 = __real_358637bd;
  fVar3 = __real_42c80000;
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (uVar10 != 0) {
    fVar13 = (float)iVar1 * ___real_37aec33e;
    do {
      fVar12 = fVar13 * param_1[uVar9];
      if (fVar5 <= fVar12) {
        fVar12 = fVar12 * fVar3;
        lVar7 = 0;
        if ((fVar6 <= fVar12) && (fVar12 = fVar12 - fVar6, fVar12 < fVar6)) {
          lVar7 = -0x8000000000000000;
        }
        iVar8 = 0x9b4;
        if (((longlong)fVar12 + lVar7) - 0xfU < 0x9b4) {
          iVar8 = (int)((longlong)fVar12 + lVar7) + -0xf;
        }
      }
      else {
        iVar8 = -1;
      }
      piVar11[uVar9] = iVar8;
      piVar11 = (this->curve_indices_)._Mypair._Myval2._Myfirst;
      if (piVar11[uVar9] == -1) {
        fVar12 = param_1[uVar9];
        if (fVar13 * fVar5 < fVar12) {
          fVar12 = 0.0;
        }
        if ((float)((uint)fVar12 & uVar2) <= fVar4) {
          fVar12 = 0.0;
        }
        else {
          fVar12 = expf(kNegativeLog1000 / (fVar12 * (float)iVar1));
        }
        (this->pure_decay_exponents_)._Mypair._Myval2._Myfirst[uVar9] = fVar12;
        (this->pure_decay_coefficients_)._Mypair._Myval2._Myfirst[uVar9] = fVar12;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar10);
  }
  return;
}

