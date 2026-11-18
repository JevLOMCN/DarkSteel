// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 5

// GainProcessor @ 14f075440

GainProcessor * __thiscall vraudio::GainProcessor::GainProcessor(GainProcessor *this,float param_1)

{
  this->current_gain_ = param_1;
  this->is_initialized_ = true;
  return this;
}

// GainProcessor @ 14f075460

GainProcessor * __thiscall vraudio::GainProcessor::GainProcessor(GainProcessor *this)

{
  this->current_gain_ = 0.0;
  this->is_initialized_ = false;
  return this;
}

// ApplyGain @ 14f075480

void __thiscall
vraudio::GainProcessor::ApplyGain
          (GainProcessor *this,float param_1,ChannelView *param_2,ChannelView *param_3,bool param_4)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  byte local_28 [16];
  
  if (this->is_initialized_ == false) {
    this->current_gain_ = param_1;
    this->is_initialized_ = true;
  }
  uVar5 = param_2->size_;
  lVar4 = 0;
  fVar9 = (float)((uint)(param_1 - this->current_gain_) & __xmm_7fffffff7fffffff7fffffff7fffffff) *
          __real_45000000;
  if ((__real_5f000000 <= fVar9) && (fVar9 = fVar9 - __real_5f000000, fVar9 < __real_5f000000)) {
    lVar4 = -0x8000000000000000;
  }
  lVar7 = (longlong)fVar9;
  uVar8 = lVar7 + lVar4;
  if (uVar8 != 0) {
    param_1 = LinearGainRamp(uVar8,this->current_gain_,param_1,param_2,param_3,param_4);
  }
  this->current_gain_ = param_1;
  if (uVar8 < uVar5) {
    bVar3 = IsGainNearZero(param_1);
    if (bVar3) {
      if (!param_4) {
        local_28[0] = 0;
        local_28[1] = 0;
        local_28[2] = 0;
        local_28[3] = 0;
        local_28[4] = 0;
        local_28[5] = 0;
        local_28[6] = 0;
        local_28[7] = 0;
        pfVar1 = param_3->begin_itr_ + lVar7;
        pfVar2 = param_3->begin_itr_ + param_3->size_;
        uVar5 = 0;
        do {
          uVar8 = uVar5 + 1;
          if (local_28[uVar5] != local_28[uVar5 + 4]) {
            uVar6 = -(uint)(local_28[uVar5] < local_28[uVar5 + 4]) | 1;
            goto LAB_14f07559f;
          }
          uVar5 = uVar8;
        } while (uVar8 != 4);
        uVar6 = 0;
LAB_14f07559f:
        uVar5 = (longlong)pfVar2 - (longlong)pfVar1;
        if (uVar6 == 0) {
          memset(pfVar1,0,uVar5 & 0xfffffffffffffffc);
        }
        else {
          uVar5 = uVar5 + 3 >> 2;
          if (pfVar2 < pfVar1) {
            uVar5 = 0;
          }
          if (uVar5 != 0) {
            memset(pfVar1,0,uVar5 << 2);
          }
        }
      }
    }
    else {
      bVar3 = IsGainNearUnity(this->current_gain_);
      if ((!bVar3) || (param_4)) {
        ConstantGain(uVar8,this->current_gain_,param_2,param_3,param_4);
      }
      else if (param_2 != param_3) {
        pfVar1 = param_2->begin_itr_ + lVar7;
        memmove(param_3->begin_itr_ + lVar7,pfVar1,
                (param_2->size_ * 4 - (longlong)pfVar1) + (longlong)param_2->begin_itr_);
      }
    }
  }
  return;
}

// GetGain @ 14f075650

float __thiscall vraudio::GainProcessor::GetGain(GainProcessor *this)

{
  return this->current_gain_;
}

// Reset @ 14f075660

void __thiscall vraudio::GainProcessor::Reset(GainProcessor *this,float param_1)

{
  this->current_gain_ = param_1;
  this->is_initialized_ = true;
  return;
}

