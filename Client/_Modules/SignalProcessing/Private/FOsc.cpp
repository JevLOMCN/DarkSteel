// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 8

// FOsc @ 1444f15e0

FOsc * __thiscall Audio::FOsc::FOsc(FOsc *this)

{
  LARGE_INTEGER local_res8 [4];
  
  IOscBase::IOscBase((IOscBase *)this);
  this->TriangleSign = -1.0;
  this->_padding_ = (longlong)&___7FOsc_Audio__6B_;
  (this->PulseWidthLerped).CurrentValue = 0.5;
  this->DPW_z1 = 0.0;
  (this->PulseWidthLerped).Threshold = 0.0001;
  (this->PulseWidthLerped).TargetValue = 0.5;
  (this->PulseWidthLerped).EaseFactor = 0.001;
  (this->PulseWidthLerped).OneMinusEase = 0.999;
  *(undefined8 *)&(this->PulseWidthLerped).EaseTimesTarget = 0x3a03126f;
  QueryPerformanceCounter(local_res8);
  (this->Noise).RandomStream.InitialSeed = local_res8[0].s.LowPart;
  (this->Noise).RandomStream.Seed = local_res8[0].s.LowPart;
  return this;
}

// ~FOsc @ 1444f41c0

void __thiscall Audio::FOsc::~FOsc(FOsc *this)

{
  this->_padding_ = (longlong)&___7FOsc_Audio__6B_;
  IOscBase::~IOscBase((IOscBase *)this);
  return;
}

// Generate @ 1444fce00

float __thiscall Audio::FOsc::Generate(FOsc *this,float *param_1)

{
  Type TVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((char)this->_padding_ == '\0') {
    return 0.0;
  }
  fVar8 = 0.0;
  bVar2 = IOscBase::WrapPhase((IOscBase *)this);
  fVar7 = __real_3fc00000;
  TVar1 = this->OscType;
  if (TVar1 == Sine) {
    fVar7 = __real_40490fdb - *(float *)((longlong)&this->_padding_ + 4) * __real_40c90fdb;
    fVar9 = (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar8 = __real_40490fdb - fVar9;
    fVar8 = (fVar8 * fVar7 * __real_41800000) / (__real_42456461 - fVar9 * fVar8 * __real_40800000);
  }
  else if (TVar1 == Saw) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::A = FastTanh(fVar7);
      _Init_thread_footer(&::_TSS0);
    }
    fVar9 = *(float *)((longlong)&this->_padding_ + 4);
    fVar8 = PolySmooth(this,fVar9,*(float *)&this->_padding_);
    fVar7 = FastTanh(fVar9 * __real_40400000 - fVar7);
    fVar8 = fVar8 + fVar7 / ::A;
  }
  else if (TVar1 == Triangle) {
    if (bVar2) {
      this->TriangleSign =
           (float)((uint)this->TriangleSign ^ __xmm_80000000800000008000000080000000);
    }
    fVar9 = __real_3e800000;
    fVar7 = *(float *)((longlong)&this->_padding_ + 4);
    fVar5 = (fVar7 + fVar7) - __real_3f800000;
    fVar4 = __real_3f800000 - *(float *)&this->_padding_;
    fVar8 = *(float *)((longlong)&this->_padding_ + 4);
    fVar5 = __real_3f800000 - fVar5 * fVar5;
    *(float *)((longlong)&this->_padding_ + 4) = *(float *)&this->_padding_ + fVar7;
    fVar5 = fVar5 * this->TriangleSign;
    fVar7 = this->DPW_z1;
    this->DPW_z1 = fVar5;
    fVar8 = (fVar9 / (fVar4 * fVar8)) * (fVar5 - fVar7) * *(float *)((longlong)&this->_padding_ + 4)
    ;
  }
  else {
    if (TVar1 == Square) {
      fVar7 = *(float *)((longlong)&this->_padding_ + 4);
      fVar8 = *(float *)&this->_padding_;
      fVar4 = PolySmooth(this,fVar7,fVar8);
      fVar5 = __real_3f800000;
      fVar9 = (this->PulseWidthLerped).CurrentValue;
      fVar6 = (fVar7 + fVar7) - __real_3f800000;
      if ((this->PulseWidthLerped).Threshold <=
          (float)((uint)((this->PulseWidthLerped).TargetValue - fVar9) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar9 = fVar9 * (this->PulseWidthLerped).OneMinusEase +
                (this->PulseWidthLerped).EaseTimesTarget;
        (this->PulseWidthLerped).CurrentValue = fVar9;
      }
      if (fVar8 <= 0.0) {
        fVar7 = fVar7 - fVar9;
        if (fVar7 <= 0.0) {
          fVar7 = fVar7 + fVar5;
        }
      }
      else {
        fVar7 = fVar7 + fVar9;
        if (fVar5 <= fVar7) {
          fVar7 = fVar7 + __real_bf800000;
        }
      }
      fVar8 = PolySmooth(this,fVar7,fVar8);
      return ((fVar4 + fVar6) - (fVar8 + ((fVar7 + fVar7) - fVar5))) +
             (((fVar9 - __real_3f000000) + fVar9) - __real_3f000000);
    }
    if (TVar1 == Noise) {
      uVar3 = (this->Noise).RandomStream.Seed * 0xbb38435 + 0x3619636b;
      (this->Noise).RandomStream.Seed = uVar3;
      fVar7 = (float)(uVar3 >> 9 | 0x3f800000) - __real_3f800000;
      fVar8 = (fVar7 + fVar7) - __real_3f800000;
    }
  }
  fVar7 = *(float *)&this->_padding_;
  *(float *)((longlong)&this->_padding_ + 4) =
       *(float *)&this->_padding_ + *(float *)((longlong)&this->_padding_ + 4);
  return fVar8 * *(float *)((longlong)&this->_padding_ + 4) * fVar7;
}

// PolySmooth @ 14450c5d0

float __thiscall Audio::FOsc::PolySmooth(FOsc *this,float param_1,float param_2)

{
  float fVar1;
  
  if (__real_3f800000 - param_2 < param_1) {
    fVar1 = (param_1 - __real_3f800000) / param_2;
    return ((float)((uint)(fVar1 * fVar1) ^ __xmm_80000000800000008000000080000000) -
           (fVar1 + fVar1)) - __real_3f800000;
  }
  if (param_1 < param_2) {
    fVar1 = param_1 / param_2;
    return (fVar1 * fVar1 - (fVar1 + fVar1)) + __real_3f800000;
  }
  return 0.0;
}

// Reset @ 144517490

void __thiscall Audio::FOsc::Reset(FOsc *this)

{
  Type TVar1;
  
  TVar1 = this->OscType;
  this->_padding_ = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  if ((TVar1 == Saw) || (TVar1 == Triangle)) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f000000;
  }
  this->DPW_z1 = 0.0;
  this->TriangleSign = -1.0;
  return;
}

// Start @ 14451dc40

void __thiscall Audio::FOsc::Start(FOsc *this)

{
  (**(code **)(this->_padding_ + 0x30))();
  *(undefined1 *)&this->_padding_ = 1;
                    /* WARNING: Could not recover jumptable at 0x00014451dc61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x28))(this);
  return;
}

// Stop @ 14451e9e0

void __thiscall Audio::FOsc::Stop(FOsc *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Update @ 14451fb40

void __thiscall Audio::FOsc::Update(FOsc *this)

{
  FModulationMatrix *this_00;
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  
  if ((FModulationMatrix *)this->_padding_ != (FModulationMatrix *)0x0) {
    bVar3 = *(byte *)((longlong)&this->_padding_ + 1);
    bVar2 = FModulationMatrix::GetDestinationValue
                      ((FModulationMatrix *)this->_padding_,(int)this->_padding_,
                       (FPatchDestination *)&this->_padding_,
                       (float *)((longlong)&this->_padding_ + 4));
    lVar1 = this->_padding_;
    this_00 = (FModulationMatrix *)this->_padding_;
    bVar3 = bVar2 | bVar3;
    *(byte *)((longlong)&this->_padding_ + 1) = bVar3;
    bVar2 = FModulationMatrix::GetDestinationValue
                      (this_00,(int)lVar1,(FPatchDestination *)&this->_padding_,
                       (float *)&this->_padding_);
    *(byte *)((longlong)&this->_padding_ + 1) = bVar2 | bVar3;
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    fVar4 = *(float *)&this->_padding_ * __real_41400000;
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
    fVar5 = *(float *)&this->_padding_ * __real_3c23d70a +
            *(float *)((longlong)&this->_padding_ + 4) +
            fVar4 + *(float *)((longlong)&this->_padding_ + 4) +
            *(float *)&this->_padding_ + *(float *)&this->_padding_ +
            *(float *)((longlong)&this->_padding_ + 4);
    fVar4 = *(float *)((longlong)&this->_padding_ + 4) + *(float *)&this->_padding_;
    if (__real_3f7ae148 <= fVar4) {
      fVar4 = __real_3f7ae148;
    }
    if (fVar4 <= __real_3ca3d70a) {
      fVar4 = __real_3ca3d70a;
    }
    *(float *)((longlong)&this->_padding_ + 4) = fVar4;
    fVar4 = __real_3f800000;
    if (fVar5 != 0.0) {
      fVar4 = powf(__real_40000000,fVar5 * __real_3daaaaab);
    }
    fVar5 = *(float *)&this->_padding_;
    fVar4 = *(float *)((longlong)&this->_padding_ + 4) * *(float *)&this->_padding_ * fVar4;
    if (fVar5 <= fVar4) {
      fVar4 = fVar5;
    }
    if (fVar4 <= (float)((uint)fVar5 ^ __xmm_80000000800000008000000080000000)) {
      fVar4 = (float)((uint)fVar5 ^ __xmm_80000000800000008000000080000000);
    }
    *(float *)((longlong)&this->_padding_ + 4) = fVar4;
    *(float *)&this->_padding_ = fVar4 / *(float *)((longlong)&this->_padding_ + 4);
  }
  fVar4 = *(float *)((longlong)&this->_padding_ + 4);
  (this->PulseWidthLerped).TargetValue = fVar4;
  (this->PulseWidthLerped).EaseTimesTarget = fVar4 * (this->PulseWidthLerped).EaseFactor;
  return;
}

