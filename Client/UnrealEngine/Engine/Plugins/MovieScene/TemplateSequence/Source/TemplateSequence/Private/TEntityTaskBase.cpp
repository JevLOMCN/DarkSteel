// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 2

// TEntityTaskBase<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_> @ 14ac6f860

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityTaskBase<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
::
TEntityTaskBase<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
          (TEntityTaskBase<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&(this->FilteredTask).Components = *(undefined8 *)param_2;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x20 = *(undefined8 *)&param_2->field_0x20;
  (this->FilteredTask).Filter.AllMask.Bits.NumBits = 0;
  (this->FilteredTask).Filter.AllMask.Bits.MaxBits = 0x180;
  (this->FilteredTask).Filter.NoneMask.Bits.NumBits = 0;
  (this->FilteredTask).Filter.NoneMask.Bits.MaxBits = 0x180;
  (this->FilteredTask).Filter.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredTask).Filter.ComplexMasks.ArrayNum = 0;
  (this->FilteredTask).Filter.ComplexMasks.ArrayMax = 0;
  (this->FilteredTask).DynamicReadMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicReadMask.Bits.MaxBits = 0x180;
  (this->FilteredTask).DynamicWriteMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicWriteMask.Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)this,&(this->FilteredTask).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->FilteredTask).Components.field_0x2,
                      &(this->FilteredTask).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->FilteredTask).Components.field_0x4,
                      &(this->FilteredTask).Filter);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// Run @ 14ac7fa50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityTaskBase<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
      *this,FGatherPropertyScales *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::FGatherPropertyScales&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
           *)&param_1->EvaluatorSystem->PropertyScales);
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachEntityImpl<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

