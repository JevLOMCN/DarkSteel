// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 10

// FSourceEffectMotionFilter @ 14f0b80e0

FSourceEffectMotionFilter * __thiscall
FSourceEffectMotionFilter::FSourceEffectMotionFilter(FSourceEffectMotionFilter *this)

{
  FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this);
  *(undefined8 *)&this->field_0x80 = 0xffffffffffffffff;
  *(undefined ***)this = &___7FSourceEffectMotionFilter__6B_;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  this->Topology = ParallelMode;
  Audio::FOnePoleFilter::FOnePoleFilter(&(this->MotionFilterA).OnePoleFilter);
  Audio::FStateVariableFilter::FStateVariableFilter(&(this->MotionFilterA).StateVarFilter);
  Audio::FLadderFilter::FLadderFilter(&(this->MotionFilterA).LadderFilter);
  (this->MotionFilterA).CurrentFilter = (IFilter *)0x0;
  (this->MotionFilterA).CurrentFilterCircuit = OnePole;
  (this->MotionFilterA).FilterType = LowPass;
  (this->MotionFilterA).FilterFrequency = 800.0;
  (this->MotionFilterA).FilterQ = 2.0;
  Audio::FOnePoleFilter::FOnePoleFilter(&(this->MotionFilterB).OnePoleFilter);
  Audio::FStateVariableFilter::FStateVariableFilter(&(this->MotionFilterB).StateVarFilter);
  Audio::FLadderFilter::FLadderFilter(&(this->MotionFilterB).LadderFilter);
  (this->MotionFilterB).CurrentFilter = (IFilter *)0x0;
  (this->MotionFilterB).CurrentFilterCircuit = OnePole;
  (this->MotionFilterB).FilterType = LowPass;
  (this->MotionFilterB).FilterFrequency = 800.0;
  (this->MotionFilterB).FilterQ = 2.0;
  *(undefined8 *)&(this->ModMap).field_0x8 = 0;
  this->FilterMixAmount = 0.0;
  *(undefined8 *)&this->ModMap = 0;
  *(undefined8 *)&(this->ModMap).field_0x20 = 0;
  *(undefined4 *)&(this->ModMap).field_0x28 = 0;
  *(undefined4 *)&(this->ModMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModMap).field_0x34 = 0;
  *(undefined8 *)&(this->ModMap).field_0x40 = 0;
  *(undefined4 *)&(this->ModMap).field_0x48 = 0;
  *(undefined8 *)&(this->ModMapOutputRange).field_0x8 = 0;
  *(undefined8 *)&this->ModMapOutputRange = 0;
  *(undefined8 *)&(this->ModMapOutputRange).field_0x20 = 0;
  *(undefined4 *)&(this->ModMapOutputRange).field_0x28 = 0;
  *(undefined4 *)&(this->ModMapOutputRange).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModMapOutputRange).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModMapOutputRange).field_0x34 = 0;
  *(undefined8 *)&(this->ModMapOutputRange).field_0x40 = 0;
  *(undefined4 *)&(this->ModMapOutputRange).field_0x48 = 0;
  (this->ModMatrix).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModMatrix).ArrayNum = 0;
  (this->ModMatrix).ArrayMax = 0;
  (this->TargetMatrix).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetMatrix).ArrayNum = 0;
  (this->TargetMatrix).ArrayMax = 0;
  (this->LastTargetMatrix).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastTargetMatrix).ArrayNum = 0;
  (this->LastTargetMatrix).ArrayMax = 0;
  (this->LinearEaseMatrix).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinearEaseMatrix).ArrayNum = 0;
  (this->LinearEaseMatrix).ArrayMax = 0;
  (this->LinearEaseMatrixInit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinearEaseMatrixInit).ArrayNum = 0;
  (this->LinearEaseMatrixInit).ArrayMax = 0;
  this->DryVolumeScalar = 1.0;
  (this->ModSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModSources).ArrayNum = 0;
  (this->ModSources).ArrayMax = 0;
  this->ModSourceTimeStamp = 0.0;
  this->LastDistance = 0.0;
  (this->LastEmitterWorldPosition).field0_0x0._s_0.X = 0.0;
  (this->LastEmitterWorldPosition).field0_0x0._s_0.Y = 0.0;
  (this->LastEmitterWorldPosition).field0_0x0._s_0.Z = 0.0;
  (this->LastListenerWorldPosition).field0_0x0._s_0.X = 0.0;
  (this->LastListenerWorldPosition).field0_0x0._s_0.Y = 0.0;
  (this->LastListenerWorldPosition).field0_0x0._s_0.Z = 0.0;
  (this->LastEmitterNormalizedPosition).field0_0x0._s_0.X = 0.0;
  (this->LastEmitterNormalizedPosition).field0_0x0._s_0.Y = 0.0;
  (this->LastEmitterNormalizedPosition).field0_0x0._s_0.Z = 0.0;
  (this->BaseDestinationValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseDestinationValues).ArrayNum = 0;
  (this->BaseDestinationValues).ArrayMax = 0;
  (this->ModDestinationValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModDestinationValues).ArrayNum = 0;
  (this->ModDestinationValues).ArrayMax = 0;
  (this->ModDestinationUpdateTimeMS).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModDestinationUpdateTimeMS).ArrayNum = 0;
  (this->ModDestinationUpdateTimeMS).ArrayMax = 0;
  (this->ScratchBufferA).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchBufferA).ArrayNum = 0;
  (this->ScratchBufferA).ArrayMax = 0;
  (this->ScratchBufferB).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchBufferB).ArrayNum = 0;
  (this->ScratchBufferB).ArrayMax = 0;
  this->FilterAMixScale = 0.0;
  this->FilterBMixScale = 0.0;
  this->FilterAOutputScale = 1.0;
  this->FilterBOutputScale = 1.0;
  this->SampleRate = 48000.0;
  this->NumChannels = 2;
  this->ChannelRate = 96000.0;
  return this;
}

// ~FSourceEffectMotionFilter @ 14f0bf360

void __thiscall
FSourceEffectMotionFilter::~FSourceEffectMotionFilter(FSourceEffectMotionFilter *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->ScratchBufferB).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScratchBufferA).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModDestinationUpdateTimeMS).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModDestinationValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BaseDestinationValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<bool,TSizedDefaultAllocator<32>_>,int>
            ((TArray<bool,TSizedDefaultAllocator<32>_> *)
             (this->LinearEaseMatrixInit).AllocatorInstance.Data,
             (this->LinearEaseMatrixInit).ArrayNum);
  pFVar1 = (this->LinearEaseMatrixInit).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<Audio::FLinearEase,TSizedDefaultAllocator<32>_>,int>
            ((TArray<Audio::FLinearEase,TSizedDefaultAllocator<32>_> *)
             (this->LinearEaseMatrix).AllocatorInstance.Data,(this->LinearEaseMatrix).ArrayNum);
  pFVar1 = (this->LinearEaseMatrix).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (this->LastTargetMatrix).AllocatorInstance.Data,(this->LastTargetMatrix).ArrayNum);
  pFVar1 = (this->LastTargetMatrix).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (this->TargetMatrix).AllocatorInstance.Data,(this->TargetMatrix).ArrayNum);
  pFVar1 = (this->TargetMatrix).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)(this->ModMatrix).AllocatorInstance.Data,
             (this->ModMatrix).ArrayNum);
  pFVar1 = (this->ModMatrix).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ModMapOutputRange).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ModMapOutputRange).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ModMapOutputRange);
  *(undefined4 *)&(this->ModMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ModMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ModMap);
  Audio::FLadderFilter::~FLadderFilter(&(this->MotionFilterB).LadderFilter);
  Audio::FStateVariableFilter::~FStateVariableFilter(&(this->MotionFilterB).StateVarFilter);
  Audio::FOnePoleFilter::~FOnePoleFilter(&(this->MotionFilterB).OnePoleFilter);
  Audio::FLadderFilter::~FLadderFilter(&(this->MotionFilterA).LadderFilter);
  Audio::FStateVariableFilter::~FStateVariableFilter(&(this->MotionFilterA).StateVarFilter);
  Audio::FOnePoleFilter::~FOnePoleFilter(&(this->MotionFilterA).OnePoleFilter);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  return;
}

// ApplyFilterModulation @ 14f0c9be0

void __thiscall
FSourceEffectMotionFilter::ApplyFilterModulation
          (FSourceEffectMotionFilter *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  float _X;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (param_1->ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar4 = *(float *)((param_1->AllocatorInstance).Data + 4);
  if (param_1->ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UpdateFilter(this,&this->MotionFilterA,(this->MotionFilterA).CurrentFilterCircuit,
               (ESourceEffectMotionFilterType)(this->MotionFilterA).FilterType,
               *(float *)(param_1->AllocatorInstance).Data,fVar4);
  if (param_1->ArrayNum < 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar4 = *(float *)((param_1->AllocatorInstance).Data + 0x10);
  if (param_1->ArrayNum < 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UpdateFilter(this,&this->MotionFilterB,(this->MotionFilterB).CurrentFilterCircuit,
               (ESourceEffectMotionFilterType)(this->MotionFilterB).FilterType,
               *(float *)((param_1->AllocatorInstance).Data + 0xc),fVar4);
  if (param_1->ArrayNum < 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->FilterMixAmount = *(float *)((param_1->AllocatorInstance).Data + 0x18);
  if ((this->ModDestinationValues).ArrayNum < 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _X = __real_41200000;
  fVar4 = __real_3d4ccccd;
  fVar3 = powf(__real_41200000,
               *(float *)((this->ModDestinationValues).AllocatorInstance.Data + 8) * __real_3d4ccccd
              );
  this->FilterAOutputScale = fVar3;
  if ((this->ModDestinationValues).ArrayNum < 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar4 = powf(_X,*(float *)((this->ModDestinationValues).AllocatorInstance.Data + 0x14) * fVar4);
  this->FilterBOutputScale = fVar4;
  return;
}

// Init @ 14f0e4270

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FSourceEffectMotionFilter::Init(FSourceEffectMotionFilter *this,FSoundEffectSourceInitData *param_1)

{
  TMap<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>_>
  *this_00;
  TMap<ESourceEffectMotionFilterModDestination,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ESourceEffectMotionFilterModDestination,UE::Math::TVector2<double>,0>_>
  *this_01;
  TArray<TArray<Audio::FLinearEase,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_02;
  TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_03;
  FLadderFilter *pFVar1;
  int *piVar2;
  float fVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  int iVar8;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  uVar15 = 0;
  this_00 = &this->ModMap;
  LOCK();
  *(undefined4 *)&this->field_0x5c = 1;
  UNLOCK();
  this->Topology = ParallelMode;
  this->FilterMixAmount = 0.0;
  for (lVar16 = 0x3f; 0x15UL >> lVar16 == 0; lVar16 = lVar16 + -1) {
  }
  iVar13 = 1 << ((byte)lVar16 & 0x1f);
  iVar8 = *(int *)&(this->ModMap).field_0x48;
  if ((iVar8 < iVar13) || (iVar13 < iVar8)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
    TSet<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  *(undefined4 *)&(this->ModMap).field_0x8 = 0;
  if (*(int *)&(this->ModMap).field_0xc != 7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,7,(ForAnyElementType *)this_00,0,(int *)&(this->ModMap).field_0xc);
  }
  *(undefined4 *)&(this->ModMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModMap).field_0x34 = 0;
  iVar8 = *(int *)&(this->ModMap).field_0x2c;
  *(undefined4 *)&(this->ModMap).field_0x28 = 0;
  if ((iVar8 < 0x20) || (0x80 < iVar8)) {
    *(undefined4 *)&(this->ModMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ModMap).field_0x10,0);
  }
  if (bVar5) {
    *(int *)&(this->ModMap).field_0x48 = iVar13;
    TSet<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  for (lVar16 = 0x3f; 0x15UL >> lVar16 == 0; lVar16 = lVar16 + -1) {
  }
  this_01 = &this->ModMapOutputRange;
  iVar13 = 1 << ((byte)lVar16 & 0x1f);
  iVar8 = *(int *)&(this->ModMapOutputRange).field_0x48;
  if ((iVar8 < iVar13) || (iVar13 < iVar8)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
    TSet<TTuple<enum_ESourceEffectMotionFilterModDestination,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_01);
  }
  *(undefined4 *)&(this->ModMapOutputRange).field_0x8 = 0;
  if (*(int *)&(this->ModMapOutputRange).field_0xc != 7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,7,(ForAnyElementType *)this_01,0,(int *)&(this->ModMapOutputRange).field_0xc);
  }
  *(undefined4 *)&(this->ModMapOutputRange).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModMapOutputRange).field_0x34 = 0;
  iVar8 = *(int *)&(this->ModMapOutputRange).field_0x2c;
  *(undefined4 *)&(this->ModMapOutputRange).field_0x28 = 0;
  if ((iVar8 < 0x20) || (0x80 < iVar8)) {
    *(undefined4 *)&(this->ModMapOutputRange).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ModMapOutputRange).field_0x10,0);
  }
  if (bVar5) {
    *(int *)&(this->ModMapOutputRange).field_0x48 = iVar13;
    TSet<TTuple<enum_ESourceEffectMotionFilterModDestination,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
    ::Rehash(this_01);
  }
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->ModMatrix,5,Default);
  uVar14 = uVar15;
  if (0 < (this->ModMatrix).ArrayNum) {
    do {
      uVar10 = (uint)uVar15;
      uVar11 = 0;
      if ((int)uVar10 < (this->ModMatrix).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar9 = (TArray<float,TSizedDefaultAllocator<32>_> *)
               ((this->ModMatrix).AllocatorInstance.Data + uVar14);
      iVar8 = pTVar9->ArrayNum;
      if (iVar8 < 7) {
        TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(pTVar9,7 - iVar8);
      }
      else if (7 < iVar8) {
        iVar8 = iVar8 + -7;
        if (iVar8 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else if (iVar8 == 0) goto LAB_14f0e4513;
        pFVar6 = (pTVar9->AllocatorInstance).Data + 0x1c;
        iVar13 = (pTVar9->ArrayNum - iVar8) + -7;
        if (iVar13 != 0) {
          memmove(pFVar6,pFVar6 + (longlong)iVar8 * 4,(longlong)iVar13 << 2);
        }
        pTVar9->ArrayNum = pTVar9->ArrayNum - iVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)pTVar9,pTVar9->ArrayNum,&pTVar9->ArrayMax);
      }
LAB_14f0e4513:
      uVar15 = (ulonglong)(uVar10 + 1);
      uVar14 = uVar14 + 0x10;
    } while ((int)(uVar10 + 1) < (this->ModMatrix).ArrayNum);
  }
  uVar14 = 0;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->TargetMatrix,5,Default);
  uVar15 = uVar14;
  if (0 < (this->TargetMatrix).ArrayNum) {
    do {
      uVar10 = (uint)uVar14;
      uVar11 = 0;
      if ((int)uVar10 < (this->TargetMatrix).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar9 = (TArray<float,TSizedDefaultAllocator<32>_> *)
               ((this->TargetMatrix).AllocatorInstance.Data + uVar15);
      iVar8 = pTVar9->ArrayNum;
      if (iVar8 < 7) {
        TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(pTVar9,7 - iVar8);
      }
      else if (7 < iVar8) {
        iVar8 = iVar8 + -7;
        if (iVar8 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else if (iVar8 == 0) goto LAB_14f0e4653;
        pFVar6 = (pTVar9->AllocatorInstance).Data + 0x1c;
        iVar13 = (pTVar9->ArrayNum - iVar8) + -7;
        if (iVar13 != 0) {
          memmove(pFVar6,pFVar6 + (longlong)iVar8 * 4,(longlong)iVar13 << 2);
        }
        pTVar9->ArrayNum = pTVar9->ArrayNum - iVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)pTVar9,pTVar9->ArrayNum,&pTVar9->ArrayMax);
      }
LAB_14f0e4653:
      uVar14 = (ulonglong)(uVar10 + 1);
      uVar15 = uVar15 + 0x10;
    } while ((int)(uVar10 + 1) < (this->TargetMatrix).ArrayNum);
  }
  lVar16 = 0;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->LastTargetMatrix,5,Default);
  uVar11 = 0;
  if (0 < (this->LastTargetMatrix).ArrayNum) {
    do {
      uVar10 = 0;
      if ((int)uVar11 < (this->LastTargetMatrix).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar9 = (TArray<float,TSizedDefaultAllocator<32>_> *)
               ((this->LastTargetMatrix).AllocatorInstance.Data + lVar16);
      iVar8 = pTVar9->ArrayNum;
      if (iVar8 < 7) {
        TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(pTVar9,7 - iVar8);
      }
      else if (7 < iVar8) {
        iVar8 = iVar8 + -7;
        if (iVar8 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else if (iVar8 == 0) goto LAB_14f0e4793;
        pFVar6 = (pTVar9->AllocatorInstance).Data + 0x1c;
        iVar13 = (pTVar9->ArrayNum - iVar8) + -7;
        if (iVar13 != 0) {
          memmove(pFVar6,pFVar6 + (longlong)iVar8 * 4,(longlong)iVar13 << 2);
        }
        pTVar9->ArrayNum = pTVar9->ArrayNum - iVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)pTVar9,pTVar9->ArrayNum,&pTVar9->ArrayMax);
      }
LAB_14f0e4793:
      uVar11 = uVar11 + 1;
      lVar16 = lVar16 + 0x10;
    } while ((int)uVar11 < (this->LastTargetMatrix).ArrayNum);
  }
  uVar15 = 0;
  this_02 = &this->LinearEaseMatrix;
  iVar8 = (this->LinearEaseMatrix).ArrayNum;
  piVar2 = &(this->LinearEaseMatrix).ArrayNum;
  if (iVar8 < 5) {
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,5 - iVar8,&this_02->AllocatorInstance,piVar2,
                        &(this->LinearEaseMatrix).ArrayMax);
    memset((this_02->AllocatorInstance).Data + (longlong)iVar13 * 0x10,0,(longlong)(5 - iVar8) << 4)
    ;
  }
  else if (5 < iVar8) {
    iVar8 = iVar8 + -5;
    if (iVar8 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (iVar8 == 0) goto LAB_14f0e487d;
    TArray<TArray<Audio::FLinearEase,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
    RemoveAtImpl(this_02,5,iVar8);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this_02->AllocatorInstance,*piVar2,&(this->LinearEaseMatrix).ArrayMax);
  }
LAB_14f0e487d:
  uVar14 = uVar15;
  if (0 < (this->LinearEaseMatrix).ArrayNum) {
    do {
      uVar10 = (uint)uVar15;
      uVar11 = 0;
      if ((int)uVar10 < *piVar2) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar12 = (this_02->AllocatorInstance).Data + uVar14;
      iVar8 = *(int *)&pFVar12[8].field_0x0;
      pFVar6 = pFVar12 + 8;
      if (iVar8 < 7) {
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x20,4,7 - iVar8,(ForAnyElementType *)pFVar12,(int *)pFVar6,
                            (int *)(pFVar12 + 0xc));
        memset((void *)(*(longlong *)&pFVar12->field_0x0 + (longlong)iVar13 * 0x20),0,
               (longlong)(7 - iVar8) << 5);
      }
      else if (7 < iVar8) {
        iVar8 = iVar8 + -7;
        if (iVar8 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else if (iVar8 == 0) goto LAB_14f0e49cd;
        pvVar7 = (void *)(*(longlong *)&pFVar12->field_0x0 + 0xe0);
        iVar13 = (*(int *)&pFVar6->field_0x0 - iVar8) + -7;
        if (iVar13 != 0) {
          memmove(pvVar7,(void *)((longlong)pvVar7 + (longlong)iVar8 * 0x20),(longlong)iVar13 << 5);
        }
        *(int *)&pFVar6->field_0x0 = *(int *)&pFVar6->field_0x0 - iVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,4,(ForAnyElementType *)pFVar12,*(int *)&pFVar6->field_0x0,
                   (int *)(pFVar12 + 0xc));
      }
LAB_14f0e49cd:
      uVar15 = (ulonglong)(uVar10 + 1);
      uVar14 = uVar14 + 0x10;
    } while ((int)(uVar10 + 1) < (this->LinearEaseMatrix).ArrayNum);
  }
  uVar15 = 0;
  this_03 = &this->LinearEaseMatrixInit;
  iVar8 = (this->LinearEaseMatrixInit).ArrayNum;
  piVar2 = &(this->LinearEaseMatrixInit).ArrayNum;
  if (iVar8 < 5) {
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,5 - iVar8,&this_03->AllocatorInstance,piVar2,
                        &(this->LinearEaseMatrixInit).ArrayMax);
    memset((this_03->AllocatorInstance).Data + (longlong)iVar13 * 0x10,0,(longlong)(5 - iVar8) << 4)
    ;
  }
  else if (5 < iVar8) {
    iVar8 = iVar8 + -5;
    if (iVar8 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (iVar8 == 0) goto LAB_14f0e4aba;
    TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (this_03,5,iVar8);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this_03->AllocatorInstance,*piVar2,&(this->LinearEaseMatrixInit).ArrayMax);
  }
LAB_14f0e4aba:
  uVar14 = uVar15;
  if (0 < (this->LinearEaseMatrixInit).ArrayNum) {
    do {
      uVar10 = (uint)uVar15;
      uVar11 = 0;
      if ((int)uVar10 < *piVar2) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar12 = (this_03->AllocatorInstance).Data + uVar14;
      iVar8 = *(int *)&pFVar12[8].field_0x0;
      pFVar6 = pFVar12 + 8;
      if (iVar8 < 7) {
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,7 - iVar8,(ForAnyElementType *)pFVar12,(int *)pFVar6,
                            (int *)(pFVar12 + 0xc));
        memset((void *)(*(longlong *)&pFVar12->field_0x0 + (longlong)iVar13),0,(longlong)(7 - iVar8)
              );
      }
      else if (7 < iVar8) {
        iVar8 = iVar8 + -7;
        if (iVar8 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else if (iVar8 == 0) goto LAB_14f0e4bf4;
        pvVar7 = (void *)(*(longlong *)&pFVar12->field_0x0 + 7);
        iVar13 = (*(int *)&pFVar6->field_0x0 - iVar8) + -7;
        if (iVar13 != 0) {
          memmove(pvVar7,(void *)((longlong)pvVar7 + (longlong)iVar8),(longlong)iVar13);
        }
        *(int *)&pFVar6->field_0x0 = *(int *)&pFVar6->field_0x0 - iVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,(ForAnyElementType *)pFVar12,*(int *)&pFVar6->field_0x0,
                   (int *)(pFVar12 + 0xc));
      }
LAB_14f0e4bf4:
      uVar15 = (ulonglong)(uVar10 + 1);
      uVar14 = uVar14 + 0x10;
    } while ((int)(uVar10 + 1) < (this->LinearEaseMatrixInit).ArrayNum);
  }
  this->DryVolumeScalar = 1.0;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(&this->ModSources,5,Default);
  this->ModSourceTimeStamp = param_1->AudioClock;
  this->LastDistance = 0.0;
  (this->LastEmitterWorldPosition).field0_0x0._s_0.X = 0.0;
  (this->LastEmitterWorldPosition).field0_0x0._s_0.Y = 0.0;
  (this->LastEmitterWorldPosition).field0_0x0._s_0.Z = 0.0;
  (this->LastListenerWorldPosition).field0_0x0._s_0.X = 0.0;
  (this->LastListenerWorldPosition).field0_0x0._s_0.Y = 0.0;
  (this->LastListenerWorldPosition).field0_0x0._s_0.Z = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(&this->BaseDestinationValues,7,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(&this->ModDestinationValues,7,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->ModDestinationUpdateTimeMS,7,Default);
  this->FilterAMixScale = 0.0;
  this->FilterBMixScale = 0.0;
  this->FilterAOutputScale = 1.0;
  this->FilterBOutputScale = 1.0;
  fVar3 = param_1->SampleRate;
  this->SampleRate = fVar3;
  this->NumChannels = param_1->NumSourceChannels;
  if ((fVar3 <= 0.0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SampleRate > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SourceEffectMotionFilter.cpp"
                         ,0x69,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->NumChannels < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChannels > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SourceEffectMotionFilter.cpp"
                         ,0x6a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar16 = (this->MotionFilterA).StateVarFilter._padding_;
  this->ChannelRate = (float)this->NumChannels * this->SampleRate;
  (**(code **)(lVar16 + 8))
            (&(this->MotionFilterA).StateVarFilter,this->SampleRate,this->NumChannels,0,0);
  pFVar1 = &(this->MotionFilterA).LadderFilter;
  (**(code **)(pFVar1->_padding_ + 8))(pFVar1,this->SampleRate,this->NumChannels,0,0);
  (**(code **)((this->MotionFilterA).OnePoleFilter._padding_ + 8))
            (&this->MotionFilterA,this->SampleRate,this->NumChannels,0,0);
  (**(code **)((this->MotionFilterB).StateVarFilter._padding_ + 8))
            (&(this->MotionFilterB).StateVarFilter,this->SampleRate,this->NumChannels,0,0);
  (**(code **)((this->MotionFilterB).LadderFilter._padding_ + 8))
            (&(this->MotionFilterB).LadderFilter,this->SampleRate,this->NumChannels,0,0);
  (**(code **)((this->MotionFilterB).OnePoleFilter._padding_ + 8))
            (&this->MotionFilterB,this->SampleRate,this->NumChannels,0,0);
  return;
}

// OnPresetChanged @ 14f0ed850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSourceEffectMotionFilter::OnPresetChanged(FSourceEffectMotionFilter *this)

{
  TMap<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>_>
  *this_00;
  TMap<ESourceEffectMotionFilterModDestination,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ESourceEffectMotionFilterModDestination,UE::Math::TVector2<double>,0>_>
  *this_01;
  FScriptContainerElement FVar1;
  code *pcVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  FSourceEffectMotionFilterSettings *pFVar13;
  longlong lVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  undefined1 *puVar17;
  int iVar18;
  uint uVar19;
  ForAnyElementType FVar20;
  TArray<float,TSizedDefaultAllocator<32>_> *this_02;
  int iVar21;
  undefined1 *puVar22;
  UObject *pUVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStackY_2e8 [32];
  undefined1 local_2a8 [4];
  undefined4 local_2a4;
  TArray<ESourceEffectMotionFilterModDestination,TSizedDefaultAllocator<32>_> local_2a0;
  undefined4 local_290;
  undefined1 local_28c [12];
  FScriptContainerElement *local_280;
  undefined8 *local_278;
  double local_270;
  double local_268;
  FScriptContainerElement *local_260;
  double *local_258;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined1 local_208 [104];
  int local_1a0;
  float local_198;
  undefined1 local_188 [96];
  void *local_128;
  undefined4 local_120;
  float local_118;
  undefined1 local_108 [104];
  undefined4 local_a0;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  pUVar23 = (UObject *)0x0;
  pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4c);
  if (pUVar11 != (UObject *)0x0) {
    pUVar12 = USourceEffectMotionFilterPreset::StaticClass();
    iVar21 = (int)pUVar12->_padding_;
    if ((iVar21 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar21 * 8) ==
        &pUVar12->_padding_)) goto LAB_14f0ed8b3;
  }
  pUVar11 = pUVar23;
LAB_14f0ed8b3:
  if (pUVar11 == (UObject *)0x0) {
    pFVar13 = FSourceEffectMotionFilterSettings::FSourceEffectMotionFilterSettings
                        ((FSourceEffectMotionFilterSettings *)local_108);
    FSourceEffectMotionFilterSettings::FSourceEffectMotionFilterSettings
              ((FSourceEffectMotionFilterSettings *)local_208,pFVar13);
    local_a0 = 0;
    if ((void *)local_108._96_8_ != (void *)0x0) {
      FMemory::Free((void *)local_108._96_8_);
    }
    puVar22 = local_108;
  }
  else {
    puVar22 = &pUVar11[2].field_0x18;
    if (puVar22 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)puVar22);
    local_188[0] = pUVar11[3].field_0x18;
    local_188._4_4_ = *(undefined4 *)&pUVar11[3].field_0x1c;
    local_188[8] = pUVar11[3].field_0x20;
    local_188[9] = pUVar11[3].field_0x21;
    local_188._10_2_ = *(undefined2 *)&pUVar11[3].field_0x22;
    local_188._12_4_ = *(float *)&pUVar11[3].field_0x24;
    local_188._16_4_ = *(undefined4 *)(pUVar11 + 4);
    local_188[0x14] = pUVar11[4].field_0x4;
    local_188[0x15] = pUVar11[4].field_0x5;
    local_188._22_2_ = *(undefined2 *)&pUVar11[4].field_0x6;
    local_188._24_4_ = *(float *)&pUVar11[4].field_0x8;
    local_188._28_4_ = *(undefined4 *)&pUVar11[4].field_0xc;
    local_188._32_8_ = 0;
    local_188._40_8_ = 0;
    local_188._64_8_ = 0;
    local_188._72_4_ = 0;
    local_188._76_4_ = 0x80;
    local_188._80_4_ = 0xffffffff;
    local_188._84_4_ = 0;
    local_128 = (void *)0x0;
    local_120 = 0;
    TSet<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>,FDefaultSetAllocator>
    ::operator=(local_188 + 0x20,
                (TSet<TTuple<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>,TDefaultMapHashableKeyFuncs<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>,FDefaultSetAllocator>
                 *)&pUVar11[4].field_0x10);
    local_118 = *(float *)&pUVar11[6].field_0x10;
    LeaveCriticalSection((LPCRITICAL_SECTION)puVar22);
    FSourceEffectMotionFilterSettings::FSourceEffectMotionFilterSettings
              ((FSourceEffectMotionFilterSettings *)local_208,
               (FSourceEffectMotionFilterSettings *)local_188);
    local_120 = 0;
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    puVar22 = local_188;
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (puVar22 + 0x20);
  this->Topology = local_208[0];
  UpdateFilter(this,&this->MotionFilterA,local_208[8],local_208[9],(float)local_208._12_4_,
               (float)local_208._16_4_);
  UpdateFilter(this,&this->MotionFilterB,local_208[0x14],local_208[0x15],(float)local_208._24_4_,
               (float)local_208._28_4_);
  this_00 = &this->ModMap;
  this->FilterMixAmount = (float)local_208._4_4_;
  for (lVar15 = 0x3f; 0x15UL >> lVar15 == 0; lVar15 = lVar15 + -1) {
  }
  this->FilterAOutputScale = 1.0;
  iVar18 = 1 << ((byte)lVar15 & 0x1f);
  this->FilterBOutputScale = 1.0;
  local_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a0.ArrayNum = 0;
  local_2a0.ArrayMax = 0;
  local_2a4 = (undefined4)lVar15;
  iVar21 = *(int *)&(this->ModMap).field_0x48;
  if ((iVar21 < iVar18) || (iVar18 < iVar21)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
    TSet<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  *(undefined4 *)&(this->ModMap).field_0x8 = 0;
  if (*(int *)&(this->ModMap).field_0xc != 7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,7,(ForAnyElementType *)this_00,0,(int *)&(this->ModMap).field_0xc);
  }
  *(undefined4 *)&(this->ModMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModMap).field_0x34 = 0;
  iVar21 = *(int *)&(this->ModMap).field_0x2c;
  *(undefined4 *)&(this->ModMap).field_0x28 = 0;
  if ((iVar21 < 0x20) || (0x80 < iVar21)) {
    *(undefined4 *)&(this->ModMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ModMap).field_0x10,0);
  }
  if (bVar8) {
    *(int *)&(this->ModMap).field_0x48 = iVar18;
    TSet<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  for (lVar15 = 0x3f; 0x15UL >> lVar15 == 0; lVar15 = lVar15 + -1) {
  }
  this_01 = &this->ModMapOutputRange;
  iVar18 = 1 << ((byte)lVar15 & 0x1f);
  local_290 = (undefined4)lVar15;
  iVar21 = *(int *)&(this->ModMapOutputRange).field_0x48;
  if ((iVar21 < iVar18) || (iVar18 < iVar21)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
    TSet<TTuple<enum_ESourceEffectMotionFilterModDestination,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_01);
  }
  *(undefined4 *)&(this->ModMapOutputRange).field_0x8 = 0;
  if (*(int *)&(this->ModMapOutputRange).field_0xc != 7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,7,(ForAnyElementType *)this_01,0,(int *)&(this->ModMapOutputRange).field_0xc);
  }
  *(undefined4 *)&(this->ModMapOutputRange).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModMapOutputRange).field_0x34 = 0;
  iVar21 = *(int *)&(this->ModMapOutputRange).field_0x2c;
  *(undefined4 *)&(this->ModMapOutputRange).field_0x28 = 0;
  if ((iVar21 < 0x20) || (0x80 < iVar21)) {
    *(undefined4 *)&(this->ModMapOutputRange).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ModMapOutputRange).field_0x10,0);
  }
  if (bVar8) {
    *(int *)&(this->ModMapOutputRange).field_0x48 = iVar18;
    TSet<TTuple<enum_ESourceEffectMotionFilterModDestination,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
    ::Rehash(this_01);
  }
  TMapBase<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>(local_208 + 0x20,&local_2a0);
  fVar27 = __real_38000100;
  iVar21 = local_2a0.ArrayNum;
  pFVar16 = local_2a0.AllocatorInstance.Data + local_2a0.ArrayNum;
  FVar20.Data = local_2a0.AllocatorInstance.Data;
  lVar15 = local_208._32_8_;
  puVar22 = (undefined1 *)local_208._96_8_;
LAB_14f0edc43:
  while( true ) {
    if (local_2a0.ArrayNum != iVar21) {
      local_2a8[0] = 0;
      `TCheckedPointerIterator<enum_ESourceEffectMotionFilterModDestination,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_2a8);
      lVar15 = local_208._32_8_;
      puVar22 = (undefined1 *)local_208._96_8_;
    }
    if (FVar20.Data == pFVar16) break;
    FVar1 = *FVar20.Data;
    if (local_208._40_4_ == local_208._84_4_) goto LAB_14f0ede08;
    puVar17 = local_208 + 0x58;
    if (puVar22 != (undefined1 *)0x0) {
      puVar17 = puVar22;
    }
    iVar18 = *(int *)(puVar17 + ((ulonglong)(local_1a0 - 1) & (ulonglong)(byte)FVar1) * 4);
    if (iVar18 == -1) goto LAB_14f0ede08;
    do {
      if (*(FScriptContainerElement *)(lVar15 + (longlong)iVar18 * 0x50) == FVar1) {
        if (((iVar18 == -1) || (lVar14 = (longlong)iVar18 * 0x50 + lVar15, lVar14 == 0)) ||
           (lVar14 == -8)) goto LAB_14f0ede08;
        puVar17 = local_208 + 0x58;
        if (puVar22 != (undefined1 *)0x0) {
          puVar17 = puVar22;
        }
        iVar18 = *(int *)(puVar17 + ((ulonglong)(local_1a0 - 1) & (ulonglong)(byte)FVar1) * 4);
        goto joined_r0x00014f0edd03;
      }
      iVar18 = *(int *)(lVar15 + 0x48 + (longlong)iVar18 * 0x50);
    } while (iVar18 != -1);
    FVar20.Data = FVar20.Data + 1;
  }
  uVar9 = 0;
  if (0 < (this->ModMatrix).ArrayNum) {
    lVar15 = 0;
    do {
      uVar19 = 0;
      if ((int)uVar9 < (this->ModMatrix).ArrayNum) {
        uVar19 = ~uVar9 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_02 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                ((this->ModMatrix).AllocatorInstance.Data + lVar15);
      iVar21 = this_02->ArrayNum;
      if (iVar21 < 7) {
        TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(this_02,7 - iVar21);
      }
      else if (7 < iVar21) {
        iVar21 = iVar21 + -7;
        if (iVar21 < 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar8) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else if (iVar21 == 0) goto LAB_14f0edf55;
        pFVar16 = (this_02->AllocatorInstance).Data + 0x1c;
        iVar18 = (this_02->ArrayNum - iVar21) + -7;
        if (iVar18 != 0) {
          memmove(pFVar16,pFVar16 + (longlong)iVar21 * 4,(longlong)iVar18 << 2);
        }
        this_02->ArrayNum = this_02->ArrayNum - iVar21;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)this_02,this_02->ArrayNum,&this_02->ArrayMax);
      }
LAB_14f0edf55:
      uVar9 = uVar9 + 1;
      lVar15 = lVar15 + 0x10;
    } while ((int)uVar9 < (this->ModMatrix).ArrayNum);
  }
  uVar9 = 0;
  if (0 < (this->LinearEaseMatrixInit).ArrayNum) {
    lVar15 = 0;
    do {
      uVar19 = 0;
      lVar14 = 0;
      while( true ) {
        uVar10 = 0;
        if ((int)uVar9 < (this->LinearEaseMatrixInit).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)((this->LinearEaseMatrixInit).AllocatorInstance.Data + lVar15 + 8) <=
            (int)uVar19) break;
        uVar10 = 0;
        if ((int)uVar9 < (this->LinearEaseMatrixInit).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar16 = (this->LinearEaseMatrixInit).AllocatorInstance.Data;
        uVar10 = 0;
        if ((int)uVar19 < *(int *)(pFVar16 + lVar15 + 8)) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar19 = uVar19 + 1;
        *(undefined1 *)(lVar14 + *(longlong *)(pFVar16 + lVar15)) = 0;
        lVar14 = lVar14 + 1;
      }
      uVar9 = uVar9 + 1;
      lVar15 = lVar15 + 0x10;
    } while ((int)uVar9 < (this->LinearEaseMatrixInit).ArrayNum);
  }
  fVar27 = __real_41200000;
  fVar24 = powf(__real_41200000,local_198 * __real_3d4ccccd);
  fVar3 = __real_41a00000;
  fVar26 = __real_466a6000;
  if (__real_40400000 <= fVar24) {
    fVar24 = __real_40400000;
  }
  if (__real_466a6000 <= (float)local_208._12_4_) {
    local_208._12_4_ = __real_466a6000;
  }
  if (fVar24 <= 0.0) {
    fVar24 = 0.0;
  }
  fVar25 = (float)local_208._12_4_;
  if ((float)local_208._12_4_ <= __real_41a00000) {
    fVar25 = __real_41a00000;
  }
  this->DryVolumeScalar = fVar24;
  if (((this->BaseDestinationValues).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar24 = __real_3f000000;
  *(float *)(this->BaseDestinationValues).AllocatorInstance.Data = fVar25;
  if (fVar27 <= (float)local_208._16_4_) {
    local_208._16_4_ = fVar27;
  }
  fVar25 = (float)local_208._16_4_;
  if ((float)local_208._16_4_ <= fVar24) {
    fVar25 = fVar24;
  }
  if (((this->BaseDestinationValues).ArrayNum < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(float *)((this->BaseDestinationValues).AllocatorInstance.Data + 4) = fVar25;
  if (fVar26 <= (float)local_208._24_4_) {
    local_208._24_4_ = fVar26;
  }
  fVar26 = (float)local_208._24_4_;
  if ((float)local_208._24_4_ <= fVar3) {
    fVar26 = fVar3;
  }
  if (((this->BaseDestinationValues).ArrayNum < 4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(float *)((this->BaseDestinationValues).AllocatorInstance.Data + 0xc) = fVar26;
  if (fVar27 <= (float)local_208._28_4_) {
    local_208._28_4_ = fVar27;
  }
  fVar27 = (float)local_208._28_4_;
  if ((float)local_208._28_4_ <= fVar24) {
    fVar27 = fVar24;
  }
  if (((this->BaseDestinationValues).ArrayNum < 5) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(float *)((this->BaseDestinationValues).AllocatorInstance.Data + 0x10) = fVar27;
  if (__real_3f800000 <= (float)local_208._4_4_) {
    local_208._4_4_ = __real_3f800000;
  }
  fVar27 = (float)local_208._4_4_;
  if ((float)local_208._4_4_ <= __real_bf800000) {
    fVar27 = __real_bf800000;
  }
  if (((this->BaseDestinationValues).ArrayNum < 7) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(float *)((this->BaseDestinationValues).AllocatorInstance.Data + 0x18) = fVar27;
  if (local_2a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.AllocatorInstance.Data);
  }
  local_1a0 = 0;
  if ((undefined1 *)local_208._96_8_ != (undefined1 *)0x0) {
    FMemory::Free((void *)local_208._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_208 + 0x20);
  return;
joined_r0x00014f0edd03:
  pUVar11 = pUVar23;
  if (iVar18 == -1) goto LAB_14f0edd32;
  if (*(FScriptContainerElement *)(lVar15 + (longlong)iVar18 * 0x50) == FVar1) {
    if ((iVar18 != -1) && (lVar15 = (longlong)iVar18 * 0x50 + lVar15, lVar15 != 0)) {
      pUVar11 = (UObject *)(lVar15 + 8);
    }
    goto LAB_14f0edd32;
  }
  iVar18 = *(int *)(lVar15 + 0x48 + (longlong)iVar18 * 0x50);
  goto joined_r0x00014f0edd03;
LAB_14f0edd32:
  local_248 = *(undefined8 *)pUVar11;
  uStack_240 = *(undefined8 *)&pUVar11->field_0x8;
  local_278 = &local_248;
  local_238 = *(undefined8 *)&pUVar11->field_0x10;
  dStack_230 = *(double *)&pUVar11->field_0x18;
  local_228 = *(double *)&pUVar11->field_0x20;
  dStack_220 = *(double *)(pUVar11 + 1);
  local_218 = *(double *)&pUVar11[1].field_0x8;
  uStack_210 = *(undefined8 *)&pUVar11[1].field_0x10;
  local_280 = FVar20.Data;
  TSet<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_ESourceEffectMotionFilterModDestination_const_&,FSourceEffectMotionFilterModulationSettings_const_&>_>
            (this_00,(TPairInitializer<ESourceEffectMotionFilterModDestination_const_&,FSourceEffectMotionFilterModulationSettings_const_&>
                      *)local_28c,(bool *)&local_280);
  dVar5 = local_228;
  dVar4 = dStack_230;
  uVar9 = rand();
  dVar7 = local_218;
  dVar6 = dStack_220;
  local_270 = (double)((float)(uVar9 & 0x7fff) * fVar27) * (dVar5 - dVar4) + dVar4;
  uVar9 = rand();
  local_258 = &local_270;
  local_268 = (double)((float)(uVar9 & 0x7fff) * fVar27) * (dVar7 - dVar6) + dVar6;
  local_260 = FVar20.Data;
  TSet<TTuple<enum_ESourceEffectMotionFilterModDestination,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_ESourceEffectMotionFilterModDestination_const_&,UE::Math::TVector2<double>_const_&>_>
            (this_01,(TPairInitializer<ESourceEffectMotionFilterModDestination_const_&,UE::Math::TVector2<double>_const_&>
                      *)(local_28c + 4),(bool *)&local_260);
  lVar15 = local_208._32_8_;
  puVar22 = (undefined1 *)local_208._96_8_;
LAB_14f0ede08:
  FVar20.Data = FVar20.Data + 1;
  goto LAB_14f0edc43;
}

// ProcessAudio @ 14f0f33c0

void __thiscall
FSourceEffectMotionFilter::ProcessAudio
          (FSourceEffectMotionFilter *this,FSoundEffectSourceInputData *param_1,float *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  float *pfVar9;
  float *_Src;
  IFilter *pIVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  longlong lVar16;
  int *piVar17;
  float fVar18;
  undefined4 uStack_19c;
  undefined4 uStack_18c;
  undefined4 uStack_17c;
  undefined4 uStack_16c;
  undefined4 uStack_15c;
  undefined4 uStack_14c;
  undefined4 uStack_13c;
  undefined4 uStack_12c;
  TArrayView<float,int> local_128;
  TArrayView<float_const_,int> local_118;
  TArrayView<float,int> local_108;
  TArrayView<float_const_,int> local_f8;
  TArrayView<float,int> local_e8;
  TArrayView<float_const_,int> local_d8;
  TArrayView<float,int> local_c8;
  TArrayView<float,int> local_b8;
  TArrayView<float_const_,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float_const_,int> local_88;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68 [2];
  
  UpdateModulationSources(this,param_1);
  if ((this->ChannelRate <= 0.0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ChannelRate > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SourceEffectMotionFilter.cpp"
                          ,199,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  piVar1 = &param_1->NumSamples;
  bVar15 = UpdateModulationMatrix(this,(float)*piVar1 / this->ChannelRate);
  if (bVar15) {
    UpdateModulationDestinations(this);
    lVar16 = 0xaf8;
  }
  else {
    lVar16 = 0xae8;
  }
  ApplyFilterModulation
            (this,(TArray<float,TSizedDefaultAllocator<32>_> *)(&this->field_0x0 + lVar16));
  piVar17 = &(this->ScratchBufferA).ArrayNum;
  if (*piVar1 != *piVar17) {
    piVar2 = &(this->ScratchBufferA).ArrayMax;
    *piVar17 = 0;
    if (*piVar2 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this->ScratchBufferA).AllocatorInstance,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,*piVar1,&(this->ScratchBufferA).AllocatorInstance,piVar17,piVar2);
    piVar17 = &(this->ScratchBufferB).ArrayMax;
    piVar2 = &(this->ScratchBufferB).ArrayNum;
    *piVar2 = 0;
    if (*piVar17 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this->ScratchBufferB).AllocatorInstance,0,piVar17);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,*piVar1,&(this->ScratchBufferB).AllocatorInstance,piVar2,piVar17);
  }
  piVar17 = &param_1->NumSamples;
  FMath::SinCos<float>
            (&this->FilterBMixScale,&this->FilterAMixScale,
             (this->FilterMixAmount + __real_3f800000) * __real_3f490fdb);
  fVar18 = this->FilterAOutputScale * this->FilterAMixScale;
  pFVar7 = (this->ScratchBufferA).AllocatorInstance.Data;
  if (__real_40000000 <= fVar18) {
    fVar18 = __real_40000000;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  this->FilterAMixScale = fVar18;
  fVar18 = this->FilterBOutputScale * this->FilterBMixScale;
  if (__real_40000000 <= fVar18) {
    fVar18 = __real_40000000;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  this->FilterBMixScale = fVar18;
  iVar3 = *piVar1;
  if ((iVar3 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar8 = (this->ScratchBufferB).AllocatorInstance.Data;
  iVar4 = param_1->NumSamples;
  if ((iVar4 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar5 = *piVar17;
  if ((iVar5 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar6 = *piVar17;
  pfVar9 = param_1->InputSourceEffectBufferPtr;
  if ((iVar6 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  _Src = param_1->InputSourceEffectBufferPtr;
  if (this->Topology == ParallelMode) {
    pIVar10 = (this->MotionFilterA).CurrentFilter;
    (**(code **)(pIVar10->_padding_ + 0x70))
              (pIVar10,_Src,*piVar17,(this->ScratchBufferA).AllocatorInstance.Data);
    pIVar10 = (this->MotionFilterB).CurrentFilter;
    (**(code **)(pIVar10->_padding_ + 0x70))
              (pIVar10,param_1->InputSourceEffectBufferPtr,*piVar17,
               (this->ScratchBufferB).AllocatorInstance.Data);
    uVar12._4_4_ = uStack_19c;
    uVar12._0_4_ = iVar5;
    local_118._12_4_ = uStack_18c;
    local_118.ArrayNum = iVar6;
    local_128.DataPtr = param_2;
    local_128._8_8_ = uVar12;
    local_118.DataPtr = pfVar9;
    Audio::ArrayMixIn(&local_118,&local_128,this->DryVolumeScalar);
    local_f8._12_4_ = uStack_17c;
    local_f8.ArrayNum = iVar3;
    local_108.DataPtr = param_2;
    local_108._8_8_ = uVar12;
    local_f8.DataPtr = (float *)pFVar7;
    Audio::ArrayMixIn(&local_f8,&local_108,this->FilterAMixScale);
    local_d8._12_4_ = uStack_16c;
    local_d8.ArrayNum = iVar4;
    local_e8.DataPtr = param_2;
    local_e8._8_8_ = uVar12;
    local_d8.DataPtr = (float *)pFVar8;
    Audio::ArrayMixIn(&local_d8,&local_e8,this->FilterBMixScale);
  }
  else if (this->Topology == SerialMode) {
    pIVar10 = (this->MotionFilterA).CurrentFilter;
    (**(code **)(pIVar10->_padding_ + 0x70))
              (pIVar10,_Src,*piVar17,(this->ScratchBufferA).AllocatorInstance.Data);
    uVar14._4_4_ = uStack_15c;
    uVar14._0_4_ = iVar3;
    local_c8.DataPtr = (float *)pFVar7;
    local_c8._8_8_ = uVar14;
    Audio::ArrayMultiplyByConstantInPlace(&local_c8,this->FilterAMixScale);
    local_a8._12_4_ = uStack_14c;
    local_a8.ArrayNum = iVar6;
    local_b8.DataPtr = (float *)pFVar7;
    local_b8._8_8_ = uVar14;
    local_a8.DataPtr = pfVar9;
    Audio::ArrayMixIn(&local_a8,&local_b8,this->DryVolumeScalar);
    pIVar10 = (this->MotionFilterB).CurrentFilter;
    (**(code **)(pIVar10->_padding_ + 0x70))
              (pIVar10,(this->ScratchBufferA).AllocatorInstance.Data,*piVar17,
               (this->ScratchBufferB).AllocatorInstance.Data);
    uVar13._4_4_ = uStack_19c;
    uVar13._0_4_ = iVar5;
    local_88._12_4_ = uStack_13c;
    local_88.ArrayNum = iVar6;
    local_98.DataPtr = param_2;
    local_98._8_8_ = uVar13;
    local_88.DataPtr = pfVar9;
    Audio::ArrayMixIn(&local_88,&local_98,this->DryVolumeScalar);
    local_68[0]._12_4_ = uStack_12c;
    local_68[0].ArrayNum = iVar4;
    local_78.DataPtr = param_2;
    local_78._8_8_ = uVar13;
    local_68[0].DataPtr = (float *)pFVar8;
    Audio::ArrayMixIn(local_68,&local_78,this->FilterBMixScale);
  }
  else {
    memcpy(param_2,_Src,(longlong)*piVar17 << 2);
  }
  return;
}

// UpdateFilter @ 14f107520

void __thiscall
FSourceEffectMotionFilter::UpdateFilter
          (FSourceEffectMotionFilter *this,FMotionFilter *param_1,
          ESourceEffectMotionFilterCircuit param_2,ESourceEffectMotionFilterType param_3,
          float param_4,float param_5)

{
  code *pcVar1;
  bool bVar2;
  FMotionFilter *pFVar3;
  
  if ((param_1 == (FMotionFilter *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MotionFilter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SourceEffectMotionFilter.cpp"
                         ,0x119,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = param_1;
  if (param_2 != OnePole) {
    if (param_2 == StateVariable) {
      pFVar3 = (FMotionFilter *)&param_1->StateVarFilter;
    }
    else {
      pFVar3 = (FMotionFilter *)0x0;
      if (param_2 == Ladder) {
        pFVar3 = (FMotionFilter *)&param_1->LadderFilter;
      }
    }
  }
  (**(code **)((pFVar3->OnePoleFilter)._padding_ + 0x48))(pFVar3,param_3);
  (**(code **)((pFVar3->OnePoleFilter)._padding_ + 0x10))(pFVar3,param_4);
  (**(code **)((pFVar3->OnePoleFilter)._padding_ + 0x20))(pFVar3,param_5);
  (**(code **)((pFVar3->OnePoleFilter)._padding_ + 0x58))(pFVar3);
  if (__real_466a6000 <= param_4) {
    param_4 = __real_466a6000;
  }
  if (__real_41200000 <= param_5) {
    param_5 = __real_41200000;
  }
  param_1->CurrentFilter = (IFilter *)pFVar3;
  param_1->CurrentFilterCircuit = param_2;
  if (param_4 <= __real_41a00000) {
    param_4 = __real_41a00000;
  }
  if (param_5 <= __real_3f000000) {
    param_5 = __real_3f000000;
  }
  param_1->FilterType = (uint)param_3;
  param_1->FilterFrequency = param_4;
  param_1->FilterQ = param_5;
  return;
}

// UpdateModulationDestinations @ 14f107c10

void __thiscall
FSourceEffectMotionFilter::UpdateModulationDestinations(FSourceEffectMotionFilter *this)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 *puVar11;
  byte bVar12;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  byte local_res10;
  byte local_res18;
  uint uVar13;
  
  uVar13 = 0;
  lVar14 = 0;
  do {
    if (((this->ModDestinationValues).ArrayNum <= (int)uVar13) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar12 = (char)uVar13 + 1;
    uVar13 = (uint)bVar12;
    *(undefined4 *)((this->ModDestinationValues).AllocatorInstance.Data + lVar14 * 4) = 0;
    uVar7 = __xmm_80000000800000008000000080000000;
    uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    lVar14 = lVar14 + 1;
  } while (bVar12 < 7);
  local_res18 = 0;
  do {
    uVar17 = (ulonglong)local_res18;
    uVar13 = (uint)local_res18;
    if (*(int *)&(this->ModMap).field_0x8 != *(int *)&(this->ModMap).field_0x34) {
      puVar3 = *(undefined1 **)&(this->ModMap).field_0x40;
      puVar11 = &(this->ModMap).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar11 = puVar3;
      }
      iVar9 = *(int *)(puVar11 + (*(int *)&(this->ModMap).field_0x48 - 1 & uVar17) * 4);
      if (iVar9 != -1) {
LAB_14f107d10:
        if (*(byte *)(*(longlong *)&this->ModMap + (longlong)iVar9 * 0x50) != local_res18) break;
        uVar16 = (uint)local_res18;
        lVar14 = (longlong)(int)uVar16;
        local_res10 = 0;
        lVar15 = 0;
        do {
          if (((this->ModMatrix).ArrayNum <= (int)(uint)local_res10) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar10 = (this->ModMatrix).AllocatorInstance.Data;
          if ((*(int *)(pFVar10 + lVar15 + 8) <= (int)uVar16) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar2 = *(uint *)(*(longlong *)(pFVar10 + lVar15) + lVar14 * 4);
          if (((this->ModDestinationValues).ArrayNum <= (int)uVar16) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (this->ModMatrix).ArrayNum;
          if ((float)(*(uint *)((this->ModDestinationValues).AllocatorInstance.Data + lVar14 * 4) &
                     uVar6) <= (float)(uVar2 & uVar6)) {
            if ((iVar9 <= (int)(uint)local_res10) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar10 = (this->ModMatrix).AllocatorInstance.Data;
            if (((this->ModMatrix).ArrayNum <= (int)(uint)local_res10) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (this->ModMatrix).AllocatorInstance.Data;
            if ((*(int *)(pFVar4 + lVar15 + 8) <= (int)uVar16) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar19 = (float)(*(uint *)(*(longlong *)(pFVar4 + lVar15) + lVar14 * 4) & uVar6);
            if (((this->ModDestinationValues).ArrayNum <= (int)uVar16) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar18 = (float)(*(uint *)((this->ModDestinationValues).AllocatorInstance.Data +
                                      lVar14 * 4) & uVar6);
            if (fVar18 <= fVar19) {
              fVar18 = fVar19;
            }
            if ((*(int *)(pFVar10 + lVar15 + 8) <= (int)uVar13) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar10 = *(FScriptContainerElement **)(pFVar10 + lVar15);
          }
          else {
            if ((iVar9 <= (int)(uint)local_res10) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar10 = (this->ModMatrix).AllocatorInstance.Data;
            if ((*(int *)(pFVar10 + lVar15 + 8) <= (int)uVar13) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar19 = (float)(*(uint *)(*(longlong *)(pFVar10 + lVar15) + lVar14 * 4) & uVar6);
            if (((this->ModDestinationValues).ArrayNum <= (int)uVar13) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar18 = (float)(*(uint *)((this->ModDestinationValues).AllocatorInstance.Data +
                                      lVar14 * 4) & uVar6);
            if (fVar18 <= fVar19) {
              fVar18 = fVar19;
            }
            if (((this->ModDestinationValues).ArrayNum <= (int)uVar13) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar10 = (this->ModDestinationValues).AllocatorInstance.Data;
          }
          if (*(float *)(pFVar10 + lVar14 * 4) <= 0.0) {
            if (0.0 <= *(float *)(pFVar10 + lVar14 * 4)) {
              fVar18 = 0.0;
            }
            else {
              fVar18 = (float)((uint)fVar18 ^ uVar7);
            }
          }
          if (((this->ModDestinationValues).ArrayNum <= (int)uVar13) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_res10 = local_res10 + 1;
          lVar15 = lVar15 + 0x10;
          *(float *)((this->ModDestinationValues).AllocatorInstance.Data + lVar14 * 4) = fVar18;
        } while (local_res10 < 5);
        goto LAB_14f107dc1;
      }
    }
LAB_14f107d2c:
    if (((this->BaseDestinationValues).ArrayNum <= (int)uVar13) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar1 = *(undefined4 *)((this->BaseDestinationValues).AllocatorInstance.Data + uVar17 * 4);
    if (((this->ModDestinationValues).ArrayNum <= (int)uVar13) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined4 *)((this->ModDestinationValues).AllocatorInstance.Data + uVar17 * 4) = uVar1;
LAB_14f107dc1:
    local_res18 = local_res18 + 1;
    if (6 < local_res18) {
      return;
    }
  } while( true );
  iVar9 = *(int *)(*(longlong *)&this->ModMap + 0x48 + (longlong)iVar9 * 0x50);
  if (iVar9 == -1) goto LAB_14f107d2c;
  goto LAB_14f107d10;
}

// UpdateModulationMatrix @ 14f108210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FSourceEffectMotionFilter::UpdateModulationMatrix(FSourceEffectMotionFilter *this,float param_1)

{
  float fVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement FVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  undefined1 auVar8 [12];
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  undefined1 uVar23;
  int iVar24;
  int iVar25;
  ulonglong uVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  int iVar29;
  ulonglong uVar30;
  undefined1 *puVar31;
  byte bVar32;
  longlong lVar33;
  FScriptContainerElement *pFVar34;
  uint uVar35;
  ForAnyElementType FVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  float fVar40;
  undefined1 local_res8 [8];
  TArray<ESourceEffectMotionFilterModDestination,TSizedDefaultAllocator<32>_> local_170;
  ulonglong local_160;
  undefined4 local_158;
  undefined1 uStack_154;
  undefined2 uStack_153;
  undefined1 uStack_151;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 uStack_120;
  ulonglong local_118;
  longlong local_110;
  ulonglong local_108;
  longlong local_100;
  longlong local_f8;
  FScriptContainerElement *local_f0;
  double local_e8;
  double dStack_e0;
  
  if (*(int *)&(this->ModMap).field_0x8 == *(int *)&(this->ModMap).field_0x34) {
    bVar22 = false;
  }
  else {
    local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_170.ArrayNum = 0;
    local_170.ArrayMax = 0;
    TMapBase<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>_>
    ::GenerateKeyArray<TSizedDefaultAllocator<32>_>(&this->ModMap,&local_170);
    uVar21 = local_170._8_8_;
    uVar20 = _UNK_150689518;
    dVar19 = ___xmm_00000000000000003ff0000000000000;
    fVar18 = __real_3a83126f;
    uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar15 = _UNK_15061cbc8;
    uVar14 = ___xmm_3ff00000000000000000000000000000;
    fVar13 = __real_3f800000;
    dVar12 = __real_3e45798ee2308c3a;
    dVar11 = __real_3ff0000000000000;
    uVar26 = (ulonglong)local_170.ArrayNum;
    local_f0 = local_170.AllocatorInstance.Data + uVar26;
    uVar30 = uVar26;
    FVar36.Data = local_170.AllocatorInstance.Data;
    while( true ) {
      pFVar27 = local_f0;
      pFVar34 = (FScriptContainerElement *)0x0;
      if ((int)uVar26 != (int)uVar30) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<enum_ESourceEffectMotionFilterModDestination,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar36.Data == pFVar27) break;
      FVar2 = *FVar36.Data;
      if (*(int *)&(this->ModMap).field_0x8 != *(int *)&(this->ModMap).field_0x34) {
        puVar4 = *(undefined1 **)&(this->ModMap).field_0x40;
        puVar31 = &(this->ModMap).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar31 = puVar4;
        }
        iVar24 = *(int *)(puVar31 +
                         ((ulonglong)(*(int *)&(this->ModMap).field_0x48 - 1) &
                         (ulonglong)(byte)FVar2) * 4);
        if (iVar24 != -1) {
          do {
            pFVar27 = (FScriptContainerElement *)
                      ((longlong)iVar24 * 0x50 + *(longlong *)&this->ModMap);
            if (*pFVar27 == FVar2) {
              if (pFVar27 != (FScriptContainerElement *)0x0) {
                local_158 = *(undefined4 *)(pFVar27 + 8);
                uVar10 = *(undefined4 *)(pFVar27 + 0xc);
                local_148 = *(double *)(pFVar27 + 0x18);
                uStack_140 = *(undefined8 *)(pFVar27 + 0x20);
                local_138 = *(undefined8 *)(pFVar27 + 0x28);
                uStack_130 = *(undefined8 *)(pFVar27 + 0x30);
                local_128 = *(double *)(pFVar27 + 0x38);
                uVar9 = *(undefined4 *)(pFVar27 + 0x40);
                uStack_120 = *(undefined8 *)(pFVar27 + 0x40);
                uStack_154 = (undefined1)uVar10;
                uStack_153 = (undefined2)((uint)uVar10 >> 8);
                uStack_151 = (undefined1)((uint)uVar10 >> 0x18);
                auVar37._4_4_ = uVar9;
                auVar37._0_4_ = uVar9;
                auVar37._8_4_ = uVar9;
                auVar37._12_4_ = uVar9;
                auVar8._4_8_ = auVar37._8_8_;
                auVar8._0_4_ = uVar10;
                auVar38._0_8_ = auVar8._0_8_ << 0x20;
                auVar38._8_4_ = *(undefined4 *)(pFVar27 + 0x10);
                auVar38._12_4_ = *(undefined4 *)(pFVar27 + 0x14);
                dStack_150 = auVar38._8_8_;
                bVar32 = (byte)local_158;
                goto LAB_14f1083d4;
              }
              break;
            }
            iVar24 = *(int *)(pFVar27 + 0x48);
          } while (iVar24 != -1);
        }
      }
      dStack_150 = 0.0;
      bVar32 = 0;
      local_128 = dVar11;
      local_158 = 0;
      uStack_154 = 0;
      uStack_153 = 0;
      uStack_151 = 0;
      uStack_120 = 0x42480000;
      local_148 = dVar19;
      uStack_140 = uVar20;
      local_138 = uVar14;
      uStack_130 = uVar15;
LAB_14f1083d4:
      pFVar27 = pFVar34;
      if (*(int *)&(this->ModMapOutputRange).field_0x8 !=
          *(int *)&(this->ModMapOutputRange).field_0x34) {
        puVar4 = *(undefined1 **)&(this->ModMapOutputRange).field_0x40;
        puVar31 = &(this->ModMapOutputRange).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar31 = puVar4;
        }
        iVar24 = *(int *)(puVar31 +
                         ((ulonglong)(*(int *)&(this->ModMapOutputRange).field_0x48 - 1) &
                         (ulonglong)(byte)FVar2) * 4);
        if (iVar24 != -1) {
          do {
            pFVar27 = (FScriptContainerElement *)
                      ((longlong)iVar24 * 0x20 + *(longlong *)&this->ModMapOutputRange);
            if (*pFVar27 == FVar2) break;
            iVar24 = *(int *)(pFVar27 + 0x18);
            pFVar27 = pFVar34;
          } while (iVar24 != -1);
        }
      }
      pFVar28 = pFVar27 + 8;
      if (pFVar27 == (FScriptContainerElement *)0x0) {
        pFVar28 = pFVar34;
      }
      local_e8 = *(double *)pFVar28;
      dStack_e0 = *(double *)(pFVar28 + 8);
      if (((this->ModMatrix).ArrayNum <= (int)(uint)bVar32) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        uVar23 = (*pcVar6)();
        return (bool)uVar23;
      }
      FVar2 = *FVar36.Data;
      uVar30 = (ulonglong)bVar32;
      pFVar27 = (this->ModMatrix).AllocatorInstance.Data;
      local_160 = uVar30;
      if ((*(int *)(pFVar27 + uVar30 * 0x10 + 8) <= (int)(uint)(byte)FVar2) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        uVar23 = (*pcVar6)();
        return (bool)uVar23;
      }
      local_f8 = *(longlong *)(pFVar27 + uVar30 * 0x10);
      if (((this->TargetMatrix).ArrayNum <= (int)(uint)bVar32) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        uVar23 = (*pcVar6)();
        return (bool)uVar23;
      }
      pFVar27 = (this->TargetMatrix).AllocatorInstance.Data;
      FVar3 = *FVar36.Data;
      if ((*(int *)(pFVar27 + uVar30 * 0x10 + 8) <= (int)(uint)(byte)FVar3) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        uVar23 = (*pcVar6)();
        return (bool)uVar23;
      }
      local_110 = *(longlong *)(pFVar27 + uVar30 * 0x10);
      local_118 = (ulonglong)(byte)FVar3;
      if (((this->LastTargetMatrix).ArrayNum <= (int)(uint)bVar32) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        uVar23 = (*pcVar6)();
        return (bool)uVar23;
      }
      pFVar27 = (this->LastTargetMatrix).AllocatorInstance.Data;
      FVar3 = *FVar36.Data;
      if ((*(int *)(pFVar27 + uVar30 * 0x10 + 8) <= (int)(uint)(byte)FVar3) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        uVar23 = (*pcVar6)();
        return (bool)uVar23;
      }
      local_100 = *(longlong *)(pFVar27 + uVar30 * 0x10);
      uVar35 = (uint)bVar32;
      local_108 = (ulonglong)(byte)FVar3;
      if (((this->LinearEaseMatrix).ArrayNum <= (int)uVar35) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        uVar23 = (*pcVar6)();
        return (bool)uVar23;
      }
      pFVar27 = (this->LinearEaseMatrix).AllocatorInstance.Data;
      FVar3 = *FVar36.Data;
      if ((*(int *)(pFVar27 + uVar30 * 0x10 + 8) <= (int)(uint)(byte)FVar3) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        uVar23 = (*pcVar6)();
        return (bool)uVar23;
      }
      lVar5 = *(longlong *)(pFVar27 + uVar30 * 0x10);
      lVar33 = (ulonglong)(byte)FVar3 * 0x20;
      if (((this->LinearEaseMatrixInit).ArrayNum <= (int)uVar35) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        uVar23 = (*pcVar6)();
        return (bool)uVar23;
      }
      pFVar27 = (this->LinearEaseMatrixInit).AllocatorInstance.Data;
      FVar3 = *FVar36.Data;
      if ((*(int *)(pFVar27 + uVar30 * 0x10 + 8) <= (int)(uint)(byte)FVar3) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        uVar23 = (*pcVar6)();
        return (bool)uVar23;
      }
      if (*(char *)((ulonglong)(byte)FVar3 + *(longlong *)(pFVar27 + uVar30 * 0x10)) == '\0') {
        if ((param_1 == 0.0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("UpdateTime != 0.0f",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SourceEffectMotionFilter.cpp"
                                ,0x19c,L""), bVar22)) {
          pcVar6 = (code *)swi(3);
          uVar23 = (*pcVar6)();
          return (bool)uVar23;
        }
        *(undefined1 *)(lVar33 + 0x1c + lVar5) = 1;
        *(float *)(lVar33 + 0xc + lVar5) = fVar13 / param_1;
        if (((this->LinearEaseMatrixInit).ArrayNum <= (int)uVar35) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          uVar23 = (*pcVar6)();
          return (bool)uVar23;
        }
        pFVar27 = (this->LinearEaseMatrixInit).AllocatorInstance.Data;
        FVar3 = *FVar36.Data;
        if ((*(int *)(pFVar27 + uVar30 * 0x10 + 8) <= (int)(uint)(byte)FVar3) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          uVar23 = (*pcVar6)();
          return (bool)uVar23;
        }
        *(undefined1 *)((ulonglong)(byte)FVar3 + *(longlong *)(pFVar27 + uVar30 * 0x10)) = 1;
      }
      if (((this->ModSources).ArrayNum <= (int)uVar35) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        uVar23 = (*pcVar6)();
        return (bool)uVar23;
      }
      dVar39 = local_148 - dStack_150;
      dVar7 = (double)*(float *)((this->ModSources).AllocatorInstance.Data + (ulonglong)bVar32 * 4);
      if (dVar12 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar17,
                                    SUB84(dVar39,0) & uVar16)) {
        dVar39 = (dVar7 - dStack_150) / dVar39;
      }
      else {
        dVar39 = dVar11;
        if (dVar7 < local_148) {
          dVar39 = 0.0;
        }
      }
      if (dVar11 <= dVar39) {
        dVar39 = dVar11;
      }
      if (dVar39 <= 0.0) {
        dVar39 = 0.0;
      }
      fVar40 = (float)(dVar39 * (dStack_e0 - local_e8) + local_e8);
      *(float *)(local_110 + local_118 * 4) = fVar40;
      if (fVar18 < (float)((uint)(*(float *)(local_100 + local_108 * 4) - fVar40) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        if (*(char *)(lVar33 + 0x1c + lVar5) == '\0') {
          iVar24 = (int)((float)uStack_120 * fVar18 * *(float *)(lVar33 + 0xc + lVar5));
          *(int *)(lVar33 + 0x10 + lVar5) = iVar24;
          *(undefined4 *)(lVar33 + 0x18 + lVar5) = 0;
          if (iVar24 == 0) {
            *(float *)(lVar33 + 4 + lVar5) = fVar40;
          }
          else {
            fVar1 = *(float *)(lVar33 + 4 + lVar5);
            *(float *)(lVar33 + lVar5) = fVar1;
            *(float *)(lVar33 + 8 + lVar5) = fVar40 - fVar1;
          }
        }
        else {
          *(undefined1 *)(lVar33 + 0x1c + lVar5) = 0;
          *(undefined4 *)(lVar33 + 0x10 + lVar5) = 0;
          *(float *)(lVar33 + 4 + lVar5) = fVar40;
          *(undefined4 *)(lVar33 + 0x18 + lVar5) = 0;
        }
      }
      iVar24 = *(int *)(lVar33 + 0x10 + lVar5);
      iVar25 = *(int *)(lVar33 + 0x18 + lVar5);
      if (iVar25 < iVar24) {
        iVar25 = iVar25 + 1;
        iVar29 = iVar24;
        if (iVar25 < iVar24) {
          iVar29 = iVar25;
        }
        *(int *)(lVar33 + 0x18 + lVar5) = iVar29;
        fVar40 = ((float)iVar29 * *(float *)(lVar33 + 8 + lVar5)) / (float)iVar24 +
                 *(float *)(lVar33 + lVar5);
        *(float *)(lVar33 + 4 + lVar5) = fVar40;
      }
      else {
        fVar40 = *(float *)(lVar33 + 4 + lVar5);
      }
      FVar36.Data = FVar36.Data + 1;
      *(float *)(local_f8 + (ulonglong)(byte)FVar2 * 4) = fVar40;
      uVar30 = uVar21 & 0xffffffff;
      *(undefined4 *)(local_100 + local_108 * 4) = *(undefined4 *)(local_110 + local_118 * 4);
      uVar26 = local_170._8_8_ & 0xffffffff;
    }
    if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.AllocatorInstance.Data);
    }
    bVar22 = true;
  }
  return bVar22;
}

// UpdateModulationSources @ 14f108a90

void __thiscall
FSourceEffectMotionFilter::UpdateModulationSources
          (FSourceEffectMotionFilter *this,FSoundEffectSourceInputData *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  dVar7 = (param_1->SpatParams).AudioClock - this->ModSourceTimeStamp;
  if (__real_3f50624dd2f1a9fc <
      (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    fVar14 = (float)dVar7;
    if ((fVar14 == 0.0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TimeDelta != 0.0f",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SourceEffectMotionFilter.cpp"
                           ,0x15a,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    fVar13 = (param_1->SpatParams).Distance;
    if (((this->ModSources).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    fVar2 = __real_3f800000;
    fVar15 = __real_3f800000 / fVar14;
    *(float *)(this->ModSources).AllocatorInstance.Data = fVar13;
    fVar13 = (float)((uint)((param_1->SpatParams).Distance - this->LastDistance) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (((this->ModSources).ArrayNum < 2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    auVar5._0_8_ = (double)fVar14;
    auVar5._8_8_ = 0;
    *(float *)((this->ModSources).AllocatorInstance.Data + 4) = fVar13 * fVar15;
    dVar12 = (param_1->SpatParams).EmitterWorldPosition.field0_0x0._s_0.Y -
             (this->LastEmitterWorldPosition).field0_0x0._s_0.Y;
    dVar10 = (param_1->SpatParams).EmitterWorldPosition.field0_0x0._s_0.X -
             (this->LastEmitterWorldPosition).field0_0x0._s_0.X;
    dVar8 = (param_1->SpatParams).EmitterWorldPosition.field0_0x0._s_0.Z -
            (this->LastEmitterWorldPosition).field0_0x0._s_0.Z;
    dVar7 = __real_3ff0000000000000 / auVar5._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar12 * dVar12 + dVar10 * dVar10 + dVar8 * dVar8;
    auVar6 = sqrtpd(auVar5,auVar6);
    if (((this->ModSources).ArrayNum < 3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(float *)((this->ModSources).AllocatorInstance.Data + 8) = (float)(auVar6._0_8_ * dVar7);
    dVar10 = (param_1->SpatParams).ListenerPosition.field0_0x0._s_0.X;
    dVar12 = (param_1->SpatParams).ListenerPosition.field0_0x0._s_0.Y;
    dVar8 = (param_1->SpatParams).ListenerPosition.field0_0x0._s_0.Z;
    dVar4 = dVar8 - (this->LastListenerWorldPosition).field0_0x0._s_0.Z;
    dVar11 = dVar12 - (this->LastListenerWorldPosition).field0_0x0._s_0.Y;
    dVar9 = dVar10 - (this->LastListenerWorldPosition).field0_0x0._s_0.X;
    if (((this->ModSources).ArrayNum < 4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(float *)((this->ModSources).AllocatorInstance.Data + 0xc) =
         (float)(SQRT(dVar11 * dVar11 + dVar9 * dVar9 + dVar4 * dVar4) * dVar7);
    fVar13 = (float)((param_1->SpatParams).EmitterPosition.field0_0x0._s_0.Y *
                     (this->LastEmitterNormalizedPosition).field0_0x0._s_0.Y +
                     (param_1->SpatParams).EmitterPosition.field0_0x0._s_0.X *
                     (this->LastEmitterNormalizedPosition).field0_0x0._s_0.X +
                    (param_1->SpatParams).EmitterPosition.field0_0x0._s_0.Z *
                    (this->LastEmitterNormalizedPosition).field0_0x0._s_0.Z);
    fVar14 = __real_bf800000;
    if ((__real_bf800000 <= fVar13) && (fVar14 = fVar13, fVar2 <= fVar13)) {
      fVar14 = fVar2;
    }
    fVar14 = acosf(fVar14);
    fVar14 = (float)((uint)(fVar14 * __real_42652ee0) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (((this->ModSources).ArrayNum < 5) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(float *)((this->ModSources).AllocatorInstance.Data + 0x10) = fVar14 * fVar15;
    this->LastDistance = (param_1->SpatParams).Distance;
    dVar7 = (param_1->SpatParams).EmitterWorldPosition.field0_0x0._s_0.Y;
    (this->LastEmitterWorldPosition).field0_0x0._s_0.X =
         (param_1->SpatParams).EmitterWorldPosition.field0_0x0._s_0.X;
    (this->LastEmitterWorldPosition).field0_0x0._s_0.Y = dVar7;
    dVar7 = (param_1->SpatParams).EmitterWorldPosition.field0_0x0._s_0.Z;
    (this->LastListenerWorldPosition).field0_0x0._s_0.X = dVar10;
    (this->LastListenerWorldPosition).field0_0x0._s_0.Y = dVar12;
    (this->LastListenerWorldPosition).field0_0x0._s_0.Z = dVar8;
    (this->LastEmitterWorldPosition).field0_0x0._s_0.Z = dVar7;
    dVar7 = (param_1->SpatParams).EmitterPosition.field0_0x0._s_0.Y;
    (this->LastEmitterNormalizedPosition).field0_0x0._s_0.X =
         (param_1->SpatParams).EmitterPosition.field0_0x0._s_0.X;
    (this->LastEmitterNormalizedPosition).field0_0x0._s_0.Y = dVar7;
    (this->LastEmitterNormalizedPosition).field0_0x0._s_0.Z =
         (param_1->SpatParams).EmitterPosition.field0_0x0._s_0.Z;
    this->ModSourceTimeStamp = (param_1->SpatParams).AudioClock;
  }
  return;
}

