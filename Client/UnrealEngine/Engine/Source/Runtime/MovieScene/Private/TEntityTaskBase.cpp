// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// TEntityTaskBase<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_> @ 146117bc0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityTaskBase<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
::
TEntityTaskBase<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
          (TEntityTaskBase<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->FilteredTask).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  FEntityComponentFilter::FEntityComponentFilter(&(this->FilteredTask).Filter,&param_2->Filter);
  (this->FilteredTask).DynamicReadMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->FilteredTask).DynamicWriteMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  (this->WriteContext).SystemSerial = param_1->SystemSerialNumber;
  return this;
}

// TEntityTaskBase<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_> @ 146117c70

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityTaskBase<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
* __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
::
TEntityTaskBase<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
          (TEntityTaskBase<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->FilteredTask).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  FEntityComponentFilter::FEntityComponentFilter(&(this->FilteredTask).Filter,&param_2->Filter);
  (this->FilteredTask).DynamicReadMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->FilteredTask).DynamicWriteMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  (this->WriteContext).SystemSerial = param_1->SystemSerialNumber;
  return this;
}

// Run @ 146152800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
::Run(TEntityTaskBase<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
      *this,FAssignEvalSecondsTask *param_1)

{
  FEntityComponentFilter *pFVar1;
  EEntityThreadingModel EVar2;
  FEntityManager *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  FString local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar3 = this->EntityManager;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    AccessorToString((FReadAccess *)this,pFVar3,&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x2,pFVar3,&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>::Run(UE::MovieScene::FAssignEvalSecondsTask&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = this->EntityManager;
  pFVar1 = &(this->FilteredTask).Filter;
  EVar2 = pFVar3->ThreadingModel;
  if ((pFVar1 == (FEntityComponentFilter *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFilter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x405,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,pFVar3,pFVar1);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,pFVar3);
  bVar6 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar6) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      lVar4 = *(longlong *)
               (*(longlong *)&(local_68.Manager)->EntityAllocations +
               (longlong)local_68.AllocationIndex * 8);
      lVar7 = 0;
      if (EVar2 == NoThreading) {
        *(undefined4 *)(lVar4 + 0x14) = 0;
        lVar7 = lVar4;
      }
      local_58.Manager = local_68.Manager;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
      ForEachEntityImpl<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
                  *)this);
      if (lVar7 != 0) {
        *(undefined4 *)(lVar7 + 0x14) = 1;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar6 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar6);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1461529b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
::Run(TEntityTaskBase<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
      *this,FAssignEvalTimesTask *param_1)

{
  FEntityComponentFilter *pFVar1;
  EEntityThreadingModel EVar2;
  FEntityManager *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  FString local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar3 = this->EntityManager;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    AccessorToString((FReadAccess *)this,pFVar3,&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x2,pFVar3,&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>::Run(UE::MovieScene::FAssignEvalTimesTask&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = this->EntityManager;
  pFVar1 = &(this->FilteredTask).Filter;
  EVar2 = pFVar3->ThreadingModel;
  if ((pFVar1 == (FEntityComponentFilter *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFilter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x405,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,pFVar3,pFVar1);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,pFVar3);
  bVar6 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar6) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      lVar4 = *(longlong *)
               (*(longlong *)&(local_68.Manager)->EntityAllocations +
               (longlong)local_68.AllocationIndex * 8);
      lVar7 = 0;
      if (EVar2 == NoThreading) {
        *(undefined4 *)(lVar4 + 0x14) = 0;
        lVar7 = lVar4;
      }
      local_58.Manager = local_68.Manager;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
      ForEachEntityImpl<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
                  *)this);
      if (lVar7 != 0) {
        *(undefined4 *)(lVar7 + 0x14) = 1;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar6 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar6);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

