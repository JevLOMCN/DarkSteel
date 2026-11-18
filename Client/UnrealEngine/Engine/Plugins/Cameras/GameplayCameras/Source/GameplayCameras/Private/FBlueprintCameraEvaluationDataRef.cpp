// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// StaticStruct @ 14d579d10

UScriptStruct * __cdecl FBlueprintCameraEvaluationDataRef::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintCameraEvaluationDataRef.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FBlueprintCameraEvaluationDataRef.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCameraEvaluationDataRef,
                         (UObject *)pUVar1,L"BlueprintCameraEvaluationDataRef");
  }
  return Z_Registration_Info_UScriptStruct_FBlueprintCameraEvaluationDataRef.OuterSingleton;
}

// FBlueprintCameraEvaluationDataRef @ 14d58c190

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlueprintCameraEvaluationDataRef * __thiscall
FBlueprintCameraEvaluationDataRef::FBlueprintCameraEvaluationDataRef
          (FBlueprintCameraEvaluationDataRef *this)

{
  this->Result = (FCameraNodeEvaluationResult *)0x0;
  (this->SharedResult).Object = (FCameraNodeEvaluationResult *)0x0;
  (this->SharedResult).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  return this;
}

// MakeExternalRef @ 14d5b5fd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlueprintCameraEvaluationDataRef * __cdecl
FBlueprintCameraEvaluationDataRef::MakeExternalRef
          (FBlueprintCameraEvaluationDataRef *__return_storage_ptr__,
          FCameraNodeEvaluationResult *param_1)

{
  __return_storage_ptr__->Result = param_1;
  (__return_storage_ptr__->SharedResult).Object = (FCameraNodeEvaluationResult *)0x0;
  (__return_storage_ptr__->SharedResult).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// MakeOwningRef @ 14d5b6070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlueprintCameraEvaluationDataRef * __cdecl
FBlueprintCameraEvaluationDataRef::MakeOwningRef
          (FBlueprintCameraEvaluationDataRef *__return_storage_ptr__)

{
  TSharedPtr<UE::Cameras::FCameraNodeEvaluationResult,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FBlueprintCameraEvaluationDataRef *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FCameraNodeEvaluationResult *pFVar7;
  FCameraNodeEvaluationResult *local_28;
  FSharedReferencer<1> FStack_20;
  
  pTVar1 = &__return_storage_ptr__->SharedResult;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->Result = (FCameraNodeEvaluationResult *)0x0;
  pTVar1->Object = (FCameraNodeEvaluationResult *)0x0;
  (__return_storage_ptr__->SharedResult).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar4 = ::operator_new(0xa10);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    local_28 = ___xmm_00000000000000000000000000000010;
    pFVar7 = (FCameraNodeEvaluationResult *)&DAT_00000010;
    FStack_20.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFCameraNodeEvaluationResult_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar4 + 1,0,0xa00);
    UE::Cameras::FCameraNodeEvaluationResult::FCameraNodeEvaluationResult
              ((FCameraNodeEvaluationResult *)(pTVar4 + 1));
    pFVar7 = (FCameraNodeEvaluationResult *)(pTVar4 + 1);
    if (pFVar7 == (FCameraNodeEvaluationResult *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FBlueprintCameraEvaluationDataRef *)(*pcVar2)();
        return pFVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FStack_20.ReferenceController = pTVar4;
    pTVar6 = pTVar4;
    local_28 = pFVar7;
  }
  if (pTVar1 != (TSharedPtr<UE::Cameras::FCameraNodeEvaluationResult,1> *)&local_28) {
    pTVar1->Object = pFVar7;
    local_28 = (FCameraNodeEvaluationResult *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->SharedResult).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  __return_storage_ptr__->Result = pTVar1->Object;
  return __return_storage_ptr__;
}

