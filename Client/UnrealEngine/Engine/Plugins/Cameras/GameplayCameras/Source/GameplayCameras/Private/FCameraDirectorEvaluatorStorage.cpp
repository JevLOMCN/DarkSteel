// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// DestroyEvaluator @ 14d5526f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluatorStorage::DestroyEvaluator
          (FCameraDirectorEvaluatorStorage *this)

{
  FCameraDirectorEvaluatorStorage local_18;
  
  local_18.Evaluator.Object = (FCameraDirectorEvaluator *)0x0;
  local_18.Evaluator.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    (this->Evaluator).Object = (FCameraDirectorEvaluator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Evaluator).SharedReferenceCount,&local_18.Evaluator.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.Evaluator.SharedReferenceCount.ReferenceController);
  return;
}

// BuildEvaluator<UE::Cameras::FBlueprintCameraDirectorEvaluator> @ 14d57c340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlueprintCameraDirectorEvaluator * __thiscall
UE::Cameras::FCameraDirectorEvaluatorStorage::
BuildEvaluator<UE::Cameras::FBlueprintCameraDirectorEvaluator>
          (FCameraDirectorEvaluatorStorage *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FBlueprintCameraDirectorEvaluator *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FCameraDirectorEvaluator *pFVar6;
  FCameraDirectorEvaluatorStorage local_18;
  
  if ((this->Evaluator).Object != (FCameraDirectorEvaluator *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2111464931269279386>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraDirectorEvaluator.h"
                       ,0x166,"Evaluator == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBlueprintCameraDirectorEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  pTVar5 = ::operator_new(0x58);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_18.Evaluator.Object = ___xmm_00000000000000000000000000000010;
    pFVar6 = (FCameraDirectorEvaluator *)&DAT_00000010;
    local_18.Evaluator.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFBlueprintCameraDirectorEvaluator_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = 0;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[3]._padding_ = 0;
    pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[4]._padding_ = 0;
    pTVar5[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[5]._padding_ = 0;
    FCameraDirectorEvaluator::FCameraDirectorEvaluator((FCameraDirectorEvaluator *)(pTVar5 + 1));
    pTVar5[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
    pFVar6 = (FCameraDirectorEvaluator *)(pTVar5 + 1);
    pTVar5[1]._padding_ = (longlong)&___7FBlueprintCameraDirectorEvaluator_Cameras_UE__6B_;
    pTVar5[5]._padding_ = 0;
    if (pFVar6 == (FCameraDirectorEvaluator *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBlueprintCameraDirectorEvaluator *)(*pcVar1)();
        return pFVar4;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Evaluator.SharedReferenceCount.ReferenceController = pTVar5;
    local_18.Evaluator.Object = pFVar6;
  }
  if (this != &local_18) {
    (this->Evaluator).Object = pFVar6;
    local_18.Evaluator.Object = (FCameraDirectorEvaluator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Evaluator).SharedReferenceCount,&local_18.Evaluator.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.Evaluator.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if ((this->Evaluator).Object == (FCameraDirectorEvaluator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBlueprintCameraDirectorEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4 = (FBlueprintCameraDirectorEvaluator *)(this->Evaluator).Object;
  cVar3 = (**(code **)(pFVar4->_padding_ + 8))
                    (pFVar4,&FBlueprintCameraDirectorEvaluator::PrivateTypeID);
  if (cVar3 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsKindOf<Type>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraDirectorEvaluator.h"
                       ,0xdc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBlueprintCameraDirectorEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// BuildEvaluator<UE::Cameras::FPriorityQueueCameraDirectorEvaluator> @ 14d57c8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FPriorityQueueCameraDirectorEvaluator * __thiscall
UE::Cameras::FCameraDirectorEvaluatorStorage::
BuildEvaluator<UE::Cameras::FPriorityQueueCameraDirectorEvaluator>
          (FCameraDirectorEvaluatorStorage *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FPriorityQueueCameraDirectorEvaluator *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FCameraDirectorEvaluator *pFVar6;
  FCameraDirectorEvaluatorStorage local_18;
  
  if ((this->Evaluator).Object != (FCameraDirectorEvaluator *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2111464931269279386>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraDirectorEvaluator.h"
                       ,0x166,"Evaluator == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPriorityQueueCameraDirectorEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  pTVar5 = ::operator_new(0x58);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_18.Evaluator.Object = ___xmm_00000000000000000000000000000010;
    pFVar6 = (FCameraDirectorEvaluator *)&DAT_00000010;
    local_18.Evaluator.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPriorityQueueCameraDirectorEvaluator_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = 0;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[3]._padding_ = 0;
    pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[4]._padding_ = 0;
    pTVar5[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[5]._padding_ = 0;
    FCameraDirectorEvaluator::FCameraDirectorEvaluator((FCameraDirectorEvaluator *)(pTVar5 + 1));
    pTVar5[1]._padding_ = (longlong)&___7FPriorityQueueCameraDirectorEvaluator_Cameras_UE__6B_;
    pFVar6 = (FCameraDirectorEvaluator *)(pTVar5 + 1);
    pTVar5[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[5]._padding_ = 0;
    if (pFVar6 == (FCameraDirectorEvaluator *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPriorityQueueCameraDirectorEvaluator *)(*pcVar1)();
        return pFVar4;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Evaluator.SharedReferenceCount.ReferenceController = pTVar5;
    local_18.Evaluator.Object = pFVar6;
  }
  if (this != &local_18) {
    (this->Evaluator).Object = pFVar6;
    local_18.Evaluator.Object = (FCameraDirectorEvaluator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Evaluator).SharedReferenceCount,&local_18.Evaluator.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.Evaluator.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if ((this->Evaluator).Object == (FCameraDirectorEvaluator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPriorityQueueCameraDirectorEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4 = (FPriorityQueueCameraDirectorEvaluator *)(this->Evaluator).Object;
  cVar3 = (**(code **)(pFVar4->_padding_ + 8))
                    (pFVar4,&FPriorityQueueCameraDirectorEvaluator::PrivateTypeID);
  if (cVar3 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsKindOf<Type>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraDirectorEvaluator.h"
                       ,0xdc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPriorityQueueCameraDirectorEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// BuildEvaluator<UE::Cameras::FSingleCameraDirectorEvaluator> @ 14d57ccd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FSingleCameraDirectorEvaluator * __thiscall
UE::Cameras::FCameraDirectorEvaluatorStorage::
BuildEvaluator<UE::Cameras::FSingleCameraDirectorEvaluator>(FCameraDirectorEvaluatorStorage *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FSingleCameraDirectorEvaluator *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FCameraDirectorEvaluator *pFVar6;
  FCameraDirectorEvaluatorStorage local_18;
  
  if ((this->Evaluator).Object != (FCameraDirectorEvaluator *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2111464931269279386>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraDirectorEvaluator.h"
                       ,0x166,"Evaluator == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSingleCameraDirectorEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  pTVar5 = ::operator_new(0x48);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_18.Evaluator.Object = ___xmm_00000000000000000000000000000010;
    pFVar6 = (FCameraDirectorEvaluator *)&DAT_00000010;
    local_18.Evaluator.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSingleCameraDirectorEvaluator_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = 0;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[3]._padding_ = 0;
    pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[4]._padding_ = 0;
    FCameraDirectorEvaluator::FCameraDirectorEvaluator((FCameraDirectorEvaluator *)(pTVar5 + 1));
    pFVar6 = (FCameraDirectorEvaluator *)(pTVar5 + 1);
    pTVar5[1]._padding_ = (longlong)&___7FSingleCameraDirectorEvaluator_Cameras_UE__6B_;
    if (pFVar6 == (FCameraDirectorEvaluator *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSingleCameraDirectorEvaluator *)(*pcVar1)();
        return pFVar4;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Evaluator.SharedReferenceCount.ReferenceController = pTVar5;
    local_18.Evaluator.Object = pFVar6;
  }
  if (this != &local_18) {
    (this->Evaluator).Object = pFVar6;
    local_18.Evaluator.Object = (FCameraDirectorEvaluator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Evaluator).SharedReferenceCount,&local_18.Evaluator.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.Evaluator.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if ((this->Evaluator).Object == (FCameraDirectorEvaluator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSingleCameraDirectorEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar6 = (this->Evaluator).Object;
  cVar3 = (**(code **)(pFVar6->_padding_ + 8))
                    (pFVar6,&FSingleCameraDirectorEvaluator::PrivateTypeID);
  if (cVar3 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsKindOf<Type>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraDirectorEvaluator.h"
                       ,0xdc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSingleCameraDirectorEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FSingleCameraDirectorEvaluator *)pFVar6;
}

// BuildEvaluator<UE::Cameras::FStateTreeCameraDirectorEvaluator> @ 14d57ceb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FStateTreeCameraDirectorEvaluator * __thiscall
UE::Cameras::FCameraDirectorEvaluatorStorage::
BuildEvaluator<UE::Cameras::FStateTreeCameraDirectorEvaluator>
          (FCameraDirectorEvaluatorStorage *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FStateTreeCameraDirectorEvaluator *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FCameraDirectorEvaluator *pFVar6;
  FCameraDirectorEvaluatorStorage local_18;
  
  if ((this->Evaluator).Object != (FCameraDirectorEvaluator *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2111464931269279386>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraDirectorEvaluator.h"
                       ,0x166,"Evaluator == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStateTreeCameraDirectorEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  pTVar5 = ::operator_new(0x78);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_18.Evaluator.Object = ___xmm_00000000000000000000000000000010;
    pFVar6 = (FCameraDirectorEvaluator *)&DAT_00000010;
    local_18.Evaluator.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFStateTreeCameraDirectorEvaluator_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = 0;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[3]._padding_ = 0;
    pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[4]._padding_ = 0;
    pTVar5[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[5]._padding_ = 0;
    pTVar5[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[6]._padding_ = 0;
    pTVar5[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[7]._padding_ = 0;
    FCameraDirectorEvaluator::FCameraDirectorEvaluator((FCameraDirectorEvaluator *)(pTVar5 + 1));
    pTVar5[1]._padding_ = (longlong)&___7FStateTreeCameraDirectorEvaluator_Cameras_UE__6B_;
    FStateTreeInstanceData::FStateTreeInstanceData
              ((FStateTreeInstanceData *)&pTVar5[4].SharedReferenceCount);
    pFVar6 = (FCameraDirectorEvaluator *)(pTVar5 + 1);
    pTVar5[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[6]._padding_ = 0;
    pTVar5[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[7]._padding_ = 0;
    if (pFVar6 == (FCameraDirectorEvaluator *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FStateTreeCameraDirectorEvaluator *)(*pcVar1)();
        return pFVar4;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Evaluator.SharedReferenceCount.ReferenceController = pTVar5;
    local_18.Evaluator.Object = pFVar6;
  }
  if (this != &local_18) {
    (this->Evaluator).Object = pFVar6;
    local_18.Evaluator.Object = (FCameraDirectorEvaluator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Evaluator).SharedReferenceCount,&local_18.Evaluator.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.Evaluator.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if ((this->Evaluator).Object == (FCameraDirectorEvaluator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStateTreeCameraDirectorEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4 = (FStateTreeCameraDirectorEvaluator *)(this->Evaluator).Object;
  cVar3 = (**(code **)(pFVar4->_padding_ + 8))
                    (pFVar4,&FStateTreeCameraDirectorEvaluator::PrivateTypeID);
  if (cVar3 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsKindOf<Type>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraDirectorEvaluator.h"
                       ,0xdc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStateTreeCameraDirectorEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// BuildEvaluator<UE::Cameras::Test::FFixedTextCameraDirectorEvaluator> @ 14d64cfa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FFixedTextCameraDirectorEvaluator * __thiscall
UE::Cameras::FCameraDirectorEvaluatorStorage::
BuildEvaluator<UE::Cameras::Test::FFixedTextCameraDirectorEvaluator>
          (FCameraDirectorEvaluatorStorage *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FFixedTextCameraDirectorEvaluator *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FCameraDirectorEvaluator *pFVar6;
  FCameraDirectorEvaluatorStorage local_18;
  
  if ((this->Evaluator).Object != (FCameraDirectorEvaluator *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2111464931269279386>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraDirectorEvaluator.h"
                       ,0x166,"Evaluator == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFixedTextCameraDirectorEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  pTVar5 = ::operator_new(0x50);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_18.Evaluator.Object = ___xmm_00000000000000000000000000000010;
    pFVar6 = (FCameraDirectorEvaluator *)&DAT_00000010;
    local_18.Evaluator.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFixedTextCameraDirectorEvaluator_Test_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = 0;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[3]._padding_ = 0;
    pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[4]._padding_ = 0;
    pTVar5[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
    FCameraDirectorEvaluator::FCameraDirectorEvaluator((FCameraDirectorEvaluator *)(pTVar5 + 1));
    pFVar6 = (FCameraDirectorEvaluator *)(pTVar5 + 1);
    pTVar5[4].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar5[1]._padding_ = (longlong)&___7FFixedTextCameraDirectorEvaluator_Test_Cameras_UE__6B_;
    if (pFVar6 == (FCameraDirectorEvaluator *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FFixedTextCameraDirectorEvaluator *)(*pcVar1)();
        return pFVar4;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Evaluator.SharedReferenceCount.ReferenceController = pTVar5;
    local_18.Evaluator.Object = pFVar6;
  }
  if (this != &local_18) {
    (this->Evaluator).Object = pFVar6;
    local_18.Evaluator.Object = (FCameraDirectorEvaluator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Evaluator).SharedReferenceCount,&local_18.Evaluator.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.Evaluator.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if ((this->Evaluator).Object == (FCameraDirectorEvaluator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFixedTextCameraDirectorEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4 = (FFixedTextCameraDirectorEvaluator *)(this->Evaluator).Object;
  cVar3 = (**(code **)(pFVar4->_padding_ + 8))
                    (pFVar4,&Cameras::Test::FFixedTextCameraDirectorEvaluator::PrivateTypeID);
  if (cVar3 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsKindOf<Type>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraDirectorEvaluator.h"
                       ,0xdc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFixedTextCameraDirectorEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  return pFVar4;
}

