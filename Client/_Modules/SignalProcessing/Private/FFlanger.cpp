// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 8

// FFlanger @ 1444a48a0

FFlanger * __thiscall Audio::FFlanger::FFlanger(FFlanger *this)

{
  this->ModulationRate = 0.5;
  this->ModulationDepth = 0.5;
  this->CenterDelayMsec = 0.5;
  this->MixLevel = 0.5;
  this->DelayedSignalLevel = 0.5;
  this->NonDelayedSignalLevel = 0.5;
  FDelay::FDelay(&this->DelayBuffer);
  (this->LFO).LastPhasePerSample = -1.0;
  (this->ScratchBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchBuffer).ArrayNum = 0;
  (this->ScratchBuffer).ArrayMax = 0;
  this->DelaySample = 0.0;
  (this->LFO).LastPhase = 0.0;
  (this->LFO).QuadDxVec.m128_u64[0] = 0;
  (this->LFO).QuadDxVec.m128_u64[1] = 0;
  (this->LFO).QuadDyVec.m128_u64[0] = 0;
  (this->LFO).QuadDyVec.m128_u64[1] = 0;
  this->SampleRate = 48000.0;
  return this;
}

// ~FFlanger @ 1444a66f0

void __thiscall Audio::FFlanger::~FFlanger(FFlanger *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ScratchBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->DelayBuffer)._padding_ = (longlong)&___7FDelay_Audio__6B_;
  pFVar1 = (this->DelayBuffer).AudioBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Init @ 1444c34c0

void __thiscall Audio::FFlanger::Init(FFlanger *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = __real_40a00000;
  fVar1 = __real_3f800000;
  fVar2 = param_1 * __real_40a00000 + __real_3f800000;
  this->SampleRate = param_1;
  (this->DelayBuffer).SampleRate = param_1;
  (this->DelayBuffer).MaxBufferLengthSamples = (int)fVar2;
  fVar2 = fVar3;
  if ((0.0 < FDelayInitialAllocationSecondsCVar) &&
     (fVar2 = FDelayInitialAllocationSecondsCVar, fVar3 <= FDelayInitialAllocationSecondsCVar)) {
    fVar2 = fVar3;
  }
  (this->DelayBuffer).AudioBufferSize = (int)(fVar2 * param_1) + 1;
  FDelay::Reset(&this->DelayBuffer);
  fVar3 = this->MixLevel;
  if (fVar1 <= this->MixLevel) {
    fVar3 = fVar1;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  this->DelayedSignalLevel = fVar3;
  this->NonDelayedSignalLevel = fVar1 - fVar3;
  return;
}

// ProcessAudio @ 1444d8ca0

void __thiscall
Audio::FFlanger::ProcessAudio
          (FFlanger *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,int param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  FDelay *this_00;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uStack_bc;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  TArrayView<float,int> local_98;
  TArrayView<float_const_,int> local_88;
  TArrayView<float_const_,int> local_78 [3];
  
  FSinOsc2DRotation::GenerateBuffer
            (&this->LFO,this->SampleRate / (float)param_2,this->ModulationRate,&this->DelaySample,1)
  ;
  this_00 = &this->DelayBuffer;
  FDelay::SetEasedDelayMsec
            (this_00,this->ModulationDepth * this->DelaySample + this->CenterDelayMsec,true);
  pTVar1 = &this->ScratchBuffer;
  piVar2 = &(this->ScratchBuffer).ArrayNum;
  if ((this->ScratchBuffer).ArrayNum != param_2) {
    piVar3 = &(this->ScratchBuffer).ArrayMax;
    *piVar2 = 0;
    if ((this->ScratchBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&pTVar1->AllocatorInstance,0,piVar3);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,param_1->ArrayNum,&pTVar1->AllocatorInstance,piVar2,piVar3);
  }
  uVar15 = 0;
  if (0 < param_2) {
    lVar16 = 0;
    do {
      pcVar9 = *(code **)(this_00->_padding_ + 8);
      uVar14 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar17 = (*pcVar9)(this_00,*(undefined4 *)((param_1->AllocatorInstance).Data + lVar16));
      uVar14 = 0;
      if ((int)uVar15 < (this->ScratchBuffer).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar15 = uVar15 + 1;
      *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar16) = uVar17;
      lVar16 = lVar16 + 4;
    } while ((int)uVar15 < param_2);
  }
  pFVar10 = (param_3->AllocatorInstance).Data;
  iVar6 = param_3->ArrayNum;
  if ((iVar6 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar11 = (param_1->AllocatorInstance).Data;
  fVar4 = this->NonDelayedSignalLevel;
  iVar7 = param_1->ArrayNum;
  if ((iVar7 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar12 = (this->ScratchBuffer).AllocatorInstance.Data;
  fVar5 = this->DelayedSignalLevel;
  iVar8 = (this->ScratchBuffer).ArrayNum;
  if ((iVar8 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_98._12_4_ = uStack_bc;
  local_98.ArrayNum = iVar6;
  local_88._12_4_ = uStack_ac;
  local_88.ArrayNum = iVar7;
  local_78[0]._12_4_ = uStack_9c;
  local_78[0].ArrayNum = iVar8;
  local_98.DataPtr = (float *)pFVar10;
  local_88.DataPtr = (float *)pFVar11;
  local_78[0].DataPtr = (float *)pFVar12;
  ArrayWeightedSum(local_78,fVar5,&local_88,fVar4,&local_98);
  return;
}

// SetCenterDelay @ 1444e31e0

void __thiscall Audio::FFlanger::SetCenterDelay(FFlanger *this,float param_1)

{
  if (__real_41a00000 <= param_1) {
    param_1 = __real_41a00000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(param_1 - this->CenterDelayMsec) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->CenterDelayMsec = param_1;
  }
  return;
}

// SetMixLevel @ 1444e4610

void __thiscall Audio::FFlanger::SetMixLevel(FFlanger *this,float param_1)

{
  float fVar1;
  
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(param_1 - this->MixLevel) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar1 = __real_3f800000 - param_1;
    this->MixLevel = param_1;
    this->DelayedSignalLevel = param_1;
    this->NonDelayedSignalLevel = fVar1;
  }
  return;
}

// SetModulationDepth @ 1444e4680

void __thiscall Audio::FFlanger::SetModulationDepth(FFlanger *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->CenterDelayMsec;
  if (param_1 <= this->CenterDelayMsec) {
    fVar1 = param_1;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar1 - this->ModulationDepth) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->ModulationDepth = fVar1;
  }
  return;
}

// SetModulationRate @ 1444e46c0

void __thiscall Audio::FFlanger::SetModulationRate(FFlanger *this,float param_1)

{
  if (__real_41a00000 <= param_1) {
    param_1 = __real_41a00000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(param_1 - this->ModulationRate) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->ModulationRate = param_1;
  }
  return;
}

