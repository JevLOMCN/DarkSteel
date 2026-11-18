// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// GetTypeID @ 14d5abb20

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraComponentCameraNodeEvaluator::GetTypeID
          (FCameraComponentCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b4660

bool __thiscall
UE::Cameras::FCameraComponentCameraNodeEvaluator::IsKindOf
          (FCameraComponentCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCameraComponentCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnRun @ 14d5c28c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraComponentCameraNodeEvaluator::OnRun
          (FCameraComponentCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  undefined1 auStack_908 [32];
  FMinimalViewInfo local_8e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_908;
  if ((param_1->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar4 = FWeakObjectPtr::Get(&(((param_1->EvaluationContext).Object)->WeakOwner).WeakPtr);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UCameraComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14d5c2951;
  }
  pUVar4 = (UObject *)0x0;
LAB_14d5c2951:
  if (pUVar4 != (UObject *)0x0) {
    FMinimalViewInfo::FMinimalViewInfo(&local_8e8);
    (**(code **)(*(longlong *)pUVar4 + 0x660))(pUVar4,param_1->DeltaTime,&local_8e8);
    FActorCameraEvaluationContext::ApplyMinimalViewInfo(&local_8e8,param_2);
    if (local_8e8.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8e8.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
    }
  }
  return;
}

