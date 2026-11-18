// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 18

// FLFO @ 1444ef810

FLFO * __thiscall Audio::FLFO::FLFO(FLFO *this)

{
  IOscBase::IOscBase((IOscBase *)this);
  this->ExponentialFactor = 3.5;
  this->_padding_ = (longlong)&___7FLFO_Audio__6B_;
  this->LFOType = Sine;
  this->LFOMode = Sync;
  this->RSHValue = 0.0;
  this->LastOutput = 0.0;
  this->LoopCount = 0.0;
  this->QuadLastOutput = 0.0;
  this->PhaseOffset = 0.0;
  (this->ModNormalPhase).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModNormalPhase).Name.Data.ArrayNum = 0;
  (this->ModNormalPhase).Name.Data.ArrayMax = 0;
  (this->ModQuadPhase).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModQuadPhase).Name.Data.ArrayNum = 0;
  (this->ModQuadPhase).Name.Data.ArrayMax = 0;
  this->RSHCounter = 0xffffffff;
  this->ModScale = 1.0;
  this->ModAdd = 0.0;
  this->bBipolar = true;
  (this->ModNormalPhase).Id = 0xffffffff;
  (this->ModQuadPhase).Id = 0xffffffff;
  return this;
}

// ~FLFO @ 1444f3a20

void __thiscall Audio::FLFO::~FLFO(FLFO *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FLFO_Audio__6B_;
  pFVar1 = (this->ModQuadPhase).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModNormalPhase).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IOscBase::~IOscBase((IOscBase *)this);
  return;
}

// ComputeLFO @ 1444f8010

float __thiscall Audio::FLFO::ComputeLFO(FLFO *this,float param_1,float *param_2)

{
  float fVar1;
  uint uVar2;
  float _X;
  float _X_00;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = __real_3f800000;
  _X = FGenericPlatformMath::Fmod(param_1 + this->PhaseOffset,__real_3f800000);
  _X_00 = FGenericPlatformMath::Fmod(param_1 + this->PhaseOffset + __real_3e800000,fVar3);
  fVar4 = 0.0;
  fVar5 = 0.0;
  switch(this->LFOType) {
  case Sine:
    if (__real_3f000000 < _X) {
      _X = _X - fVar3;
    }
    fVar5 = (__real_3f22f983 -
            (float)((uint)(_X * __real_40c90fdb) & __xmm_7fffffff7fffffff7fffffff7fffffff) *
            __real_3e4f817a) * _X * __real_40c90fdb + __real_3f000000;
    if (__real_3f000000 < _X_00) {
      _X_00 = _X_00 - fVar3;
    }
    fVar4 = (__real_3f22f983 -
            (float)((uint)(_X_00 * __real_40c90fdb) & __xmm_7fffffff7fffffff7fffffff7fffffff) *
            __real_3e4f817a) * _X_00 * __real_40c90fdb + __real_3f000000;
    break;
  case UpSaw:
    fVar4 = _X_00;
    fVar5 = _X;
    break;
  case DownSaw:
    fVar4 = fVar3 - _X_00;
    fVar5 = fVar3 - _X;
    break;
  case Square:
    fVar1 = *(float *)((longlong)&this->_padding_ + 4);
    if (_X <= fVar1) {
      fVar5 = fVar3;
    }
    if (_X_00 <= fVar1) {
      fVar4 = fVar3;
    }
    break;
  case Triangle:
    fVar4 = fVar3 - (float)((uint)((_X_00 + _X_00) - fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff
                           );
    fVar5 = fVar3 - (float)((uint)((_X + _X) - fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    break;
  case Exponential:
    fVar4 = this->ExponentialFactor;
    fVar5 = powf(_X,fVar4);
    fVar4 = powf(_X_00,fVar4);
    break;
  case RandomSampleHold:
    if ((uint)(longlong)
              (*(float *)((longlong)&this->_padding_ + 4) /
              *(float *)((longlong)&this->_padding_ + 4)) < this->RSHCounter) {
      this->RSHCounter = 0;
      uVar2 = rand();
      this->RSHValue = (float)(uVar2 & 0x7fff) * __real_38000100;
    }
    else {
      this->RSHCounter = this->RSHCounter + 1;
    }
    fVar4 = this->RSHValue;
    fVar5 = this->RSHValue;
  }
  if (this->bBipolar != false) {
    fVar5 = (fVar5 + fVar5) - fVar3;
    fVar4 = (fVar4 + fVar4) - fVar3;
  }
  fVar3 = *(float *)&this->_padding_ * *(float *)((longlong)&this->_padding_ + 4);
  fVar5 = fVar5 * fVar3;
  fVar4 = fVar4 * fVar3;
  if ((FModulationMatrix *)this->_padding_ != (FModulationMatrix *)0x0) {
    FModulationMatrix::GetDestinationValue
              ((FModulationMatrix *)this->_padding_,(int)this->_padding_,
               (FPatchDestination *)&this->_padding_,&this->ModAdd);
    FModulationMatrix::GetDestinationValue
              ((FModulationMatrix *)this->_padding_,(int)this->_padding_,
               (FPatchDestination *)&this->_padding_,&this->ModScale);
    fVar5 = this->ModScale * fVar5 + this->ModAdd;
    fVar4 = this->ModScale * fVar4 + this->ModAdd;
    FModulationMatrix::SetSourceValue
              ((FModulationMatrix *)this->_padding_,(int)this->_padding_,&this->ModNormalPhase,fVar5
              );
    FModulationMatrix::SetSourceValue
              ((FModulationMatrix *)this->_padding_,(int)this->_padding_,&this->ModQuadPhase,fVar4);
  }
  this->QuadLastOutput = fVar4;
  if (param_2 != (float *)0x0) {
    *param_2 = fVar4;
  }
  return fVar5;
}

// Generate @ 1444fcd50

float __thiscall Audio::FLFO::Generate(FLFO *this,float *param_1)

{
  float fVar1;
  Type TVar2;
  float fVar3;
  float fVar4;
  
  if ((char)this->_padding_ == '\0') {
    if (param_1 != (float *)0x0) {
      *param_1 = this->QuadLastOutput;
    }
    return this->LastOutput;
  }
  IOscBase::WrapPhase((IOscBase *)this);
  fVar3 = ComputeLFO(this,*(float *)((longlong)&this->_padding_ + 4),param_1);
  TVar2 = this->LFOMode;
  this->LastOutput = fVar3;
  fVar4 = *(float *)&this->_padding_ + this->LoopCount;
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  this->LoopCount = fVar4;
  *(float *)((longlong)&this->_padding_ + 4) = *(float *)&this->_padding_ + fVar1;
  if ((TVar2 == OneShot) && (__real_3f800000 <= fVar4)) {
    *(undefined1 *)&this->_padding_ = 0;
    this->LoopCount = 0.0;
  }
  return fVar3;
}

// GetModSourceNormalPhase @ 144503da0

FPatchSource * __thiscall
Audio::FLFO::GetModSourceNormalPhase(FLFO *this,FPatchSource *__return_storage_ptr__)

{
  __return_storage_ptr__->Id = (this->ModNormalPhase).Id;
  ::FString::FString(&__return_storage_ptr__->Name,&(this->ModNormalPhase).Name);
  return __return_storage_ptr__;
}

// GetModSourceQuadPhase @ 144503dd0

FPatchSource * __thiscall
Audio::FLFO::GetModSourceQuadPhase(FLFO *this,FPatchSource *__return_storage_ptr__)

{
  __return_storage_ptr__->Id = (this->ModQuadPhase).Id;
  ::FString::FString(&__return_storage_ptr__->Name,&(this->ModQuadPhase).Name);
  return __return_storage_ptr__;
}

// GetMode @ 144503e00

Type __thiscall Audio::FLFO::GetMode(FLFO *this)

{
  return this->LFOMode;
}

// GetType @ 144504be0

Type __thiscall Audio::FLFO::GetType(FLFO *this)

{
  return this->LFOType;
}

// Init @ 144505b70

void __thiscall
Audio::FLFO::Init(FLFO *this,float param_1,int param_2,FModulationMatrix *param_3,int param_4)

{
  FString *pFVar1;
  FString *this_00;
  FScriptContainerElement *pFVar2;
  FPatchSource *pFVar3;
  FString *this_01;
  FPatchSource local_28;
  
  IOscBase::Init((IOscBase *)this,param_1,param_2,param_3,param_4);
  if ((FModulationMatrix *)this->_padding_ != (FModulationMatrix *)0x0) {
    pFVar3 = FModulationMatrix::CreatePatchSource
                       ((FModulationMatrix *)this->_padding_,&local_28,param_2);
    this_00 = &(this->ModNormalPhase).Name;
    pFVar1 = &pFVar3->Name;
    (this->ModNormalPhase).Id = pFVar3->Id;
    if (this_00 != pFVar1) {
      pFVar2 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (this_00->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->ModNormalPhase).Name.Data.ArrayNum = (pFVar3->Name).Data.ArrayNum;
      (this->ModNormalPhase).Name.Data.ArrayMax = (pFVar3->Name).Data.ArrayMax;
      (pFVar3->Name).Data.ArrayNum = 0;
      (pFVar3->Name).Data.ArrayMax = 0;
    }
    if (local_28.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Name.Data.AllocatorInstance.Data);
    }
    pFVar3 = FModulationMatrix::CreatePatchSource
                       ((FModulationMatrix *)this->_padding_,&local_28,param_2);
    pFVar1 = &pFVar3->Name;
    (this->ModQuadPhase).Id = pFVar3->Id;
    this_01 = &(this->ModQuadPhase).Name;
    if (this_01 != pFVar1) {
      pFVar2 = (this_01->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (this_01->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->ModQuadPhase).Name.Data.ArrayNum = (pFVar3->Name).Data.ArrayNum;
      (this->ModQuadPhase).Name.Data.ArrayMax = (pFVar3->Name).Data.ArrayMax;
      (pFVar3->Name).Data.ArrayNum = 0;
      (pFVar3->Name).Data.ArrayMax = 0;
    }
    if (local_28.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Name.Data.AllocatorInstance.Data);
    }
    ::FString::operator=(this_00,L"ModNormalPhase");
    ::FString::operator=(this_01,L"ModQuadPhase");
  }
  return;
}

// Reset @ 144517340

void __thiscall Audio::FLFO::Reset(FLFO *this)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  this->_padding_ = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  (**(code **)(lVar1 + 0x38))();
  this->RSHValue = 0.0;
  this->RSHCounter = 0xffffffff;
  return;
}

// ResetPhase @ 144518240

void __thiscall Audio::FLFO::ResetPhase(FLFO *this)

{
  float fVar1;
  
  this->LoopCount = 0.0;
  switch(this->LFOType) {
  case Sine:
  case Triangle:
    if (this->bBipolar != false) {
      *(undefined4 *)((longlong)&this->_padding_ + 4) = __real_3e800000;
      return;
    }
    break;
  case UpSaw:
  case DownSaw:
    if (this->bBipolar != false) {
      *(float *)((longlong)&this->_padding_ + 4) = __real_3f000000;
      return;
    }
    break;
  case Exponential:
    if (this->bBipolar != false) {
      fVar1 = powf(__real_3f000000,__real_3f800000 / this->ExponentialFactor);
      *(float *)((longlong)&this->_padding_ + 4) = fVar1;
      return;
    }
  }
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  return;
}

// SetBipolar @ 144518c90

void __thiscall Audio::FLFO::SetBipolar(FLFO *this,bool param_1)

{
  this->bBipolar = param_1;
  return;
}

// SetExponentialFactor @ 144519e90

void __thiscall Audio::FLFO::SetExponentialFactor(FLFO *this,float param_1)

{
  if (param_1 <= __real_322bcc77) {
    param_1 = __real_322bcc77;
  }
  this->ExponentialFactor = param_1;
  return;
}

// SetMode @ 14451b860

void __thiscall Audio::FLFO::SetMode(FLFO *this,Type param_1)

{
  this->LFOMode = param_1;
  return;
}

// SetPhaseOffset @ 14451c4a0

void __thiscall Audio::FLFO::SetPhaseOffset(FLFO *this,float param_1)

{
  float fVar1;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar1 = FGenericPlatformMath::Fmod(param_1,__real_3f800000);
  this->PhaseOffset = fVar1;
  return;
}

// SetType @ 14451d020

void __thiscall Audio::FLFO::SetType(FLFO *this,Type param_1)

{
  this->LFOType = param_1;
  return;
}

// Start @ 14451dbe0

void __thiscall Audio::FLFO::Start(FLFO *this)

{
  if ((this->LFOMode != Sync) && (this->LFOMode != OneShot)) {
    if ((char)this->_padding_ == '\0') {
      (**(code **)(this->_padding_ + 0x38))();
      *(undefined1 *)&this->_padding_ = 1;
      return;
    }
    *(undefined1 *)&this->_padding_ = 1;
    return;
  }
  (**(code **)(this->_padding_ + 0x30))();
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// Stop @ 14451e9d0

void __thiscall Audio::FLFO::Stop(FLFO *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

