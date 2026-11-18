// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// BuildEvaluator<UE::Cameras::FBlueprintCameraDirectorEvaluator> @ 14d57c330

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlueprintCameraDirectorEvaluator * __thiscall
UE::Cameras::FCameraDirectorEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FBlueprintCameraDirectorEvaluator>
          (FCameraDirectorEvaluatorBuilder *this)

{
  FBlueprintCameraDirectorEvaluator *pFVar1;
  
  pFVar1 = FCameraDirectorEvaluatorStorage::
           BuildEvaluator<UE::Cameras::FBlueprintCameraDirectorEvaluator>(this->Storage);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FPriorityQueueCameraDirectorEvaluator> @ 14d57c8c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FPriorityQueueCameraDirectorEvaluator * __thiscall
UE::Cameras::FCameraDirectorEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FPriorityQueueCameraDirectorEvaluator>
          (FCameraDirectorEvaluatorBuilder *this)

{
  FPriorityQueueCameraDirectorEvaluator *pFVar1;
  
  pFVar1 = FCameraDirectorEvaluatorStorage::
           BuildEvaluator<UE::Cameras::FPriorityQueueCameraDirectorEvaluator>(this->Storage);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FSingleCameraDirectorEvaluator> @ 14d57cb00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FSingleCameraDirectorEvaluator * __thiscall
UE::Cameras::FCameraDirectorEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FSingleCameraDirectorEvaluator>(FCameraDirectorEvaluatorBuilder *this)

{
  FCameraDirectorEvaluatorStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FSingleCameraDirectorEvaluator *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FCameraDirectorEvaluator *pFVar7;
  FCameraDirectorEvaluatorStorage local_18;
  
  pFVar1 = this->Storage;
  if ((pFVar1->Evaluator).Object != (FCameraDirectorEvaluator *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2111464931269279386>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraDirectorEvaluator.h"
                       ,0x166,"Evaluator == nullptr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSingleCameraDirectorEvaluator *)(*pcVar2)();
      return pFVar5;
    }
  }
  pTVar6 = ::operator_new(0x48);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_18.Evaluator.Object = ___xmm_00000000000000000000000000000010;
    pFVar7 = (FCameraDirectorEvaluator *)&DAT_00000010;
    local_18.Evaluator.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSingleCameraDirectorEvaluator_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4]._padding_ = 0;
    FCameraDirectorEvaluator::FCameraDirectorEvaluator((FCameraDirectorEvaluator *)(pTVar6 + 1));
    pFVar7 = (FCameraDirectorEvaluator *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7FSingleCameraDirectorEvaluator_Cameras_UE__6B_;
    if (pFVar7 == (FCameraDirectorEvaluator *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FSingleCameraDirectorEvaluator *)(*pcVar2)();
        return pFVar5;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Evaluator.SharedReferenceCount.ReferenceController = pTVar6;
    local_18.Evaluator.Object = pFVar7;
  }
  if (pFVar1 != &local_18) {
    (pFVar1->Evaluator).Object = pFVar7;
    local_18.Evaluator.Object = (FCameraDirectorEvaluator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar1->Evaluator).SharedReferenceCount,&local_18.Evaluator.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.Evaluator.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((pFVar1->Evaluator).Object == (FCameraDirectorEvaluator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSingleCameraDirectorEvaluator *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar7 = (pFVar1->Evaluator).Object;
  cVar4 = (**(code **)(pFVar7->_padding_ + 8))
                    (pFVar7,&FSingleCameraDirectorEvaluator::PrivateTypeID);
  if (cVar4 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsKindOf<Type>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraDirectorEvaluator.h"
                       ,0xdc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSingleCameraDirectorEvaluator *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FSingleCameraDirectorEvaluator *)pFVar7;
}

// BuildEvaluator<UE::Cameras::FStateTreeCameraDirectorEvaluator> @ 14d57cea0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FStateTreeCameraDirectorEvaluator * __thiscall
UE::Cameras::FCameraDirectorEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FStateTreeCameraDirectorEvaluator>
          (FCameraDirectorEvaluatorBuilder *this)

{
  FStateTreeCameraDirectorEvaluator *pFVar1;
  
  pFVar1 = FCameraDirectorEvaluatorStorage::
           BuildEvaluator<UE::Cameras::FStateTreeCameraDirectorEvaluator>(this->Storage);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::Test::FFixedTextCameraDirectorEvaluator> @ 14d64cf90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FFixedTextCameraDirectorEvaluator * __thiscall
UE::Cameras::FCameraDirectorEvaluatorBuilder::
BuildEvaluator<UE::Cameras::Test::FFixedTextCameraDirectorEvaluator>
          (FCameraDirectorEvaluatorBuilder *this)

{
  FFixedTextCameraDirectorEvaluator *pFVar1;
  
  pFVar1 = FCameraDirectorEvaluatorStorage::
           BuildEvaluator<UE::Cameras::Test::FFixedTextCameraDirectorEvaluator>(this->Storage);
  return pFVar1;
}

