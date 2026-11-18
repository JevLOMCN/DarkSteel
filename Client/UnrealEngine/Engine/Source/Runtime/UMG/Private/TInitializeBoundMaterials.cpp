// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// InitializeBoundMaterial @ 14692af20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::MovieScene::
TInitializeBoundMaterials<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::
InitializeBoundMaterial(UObject *param_1,FWidgetMaterialHandle *param_2,FObjectComponent *param_3)

{
  int iVar1;
  UMaterialInterface *pUVar2;
  FName FVar3;
  FName FVar4;
  void *pvVar5;
  ForAnyElementType FVar6;
  UClass *pUVar7;
  TObjectPtr<UObject>_u_0 TVar8;
  UMaterialInterface *pUVar9;
  void *pvVar10;
  FName *pFVar11;
  FName FVar12;
  bool bVar13;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  FString local_1b8;
  undefined1 local_1a8 [8];
  TObjectPtr<UObject>_u_0 local_1a0 [2];
  UObject *local_190;
  FWidgetMaterialHandle local_188;
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [128];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_1e8;
  FVar4 = param_2->TypeName;
  pvVar5 = param_2->Data;
  if (param_1 == (UObject *)0x0) {
LAB_14692b356:
    if ((param_1 != (UObject *)0x0) && (2 < (byte)LogUMG._0_1_)) {
      local_1a8 = *(undefined1 (*) [8])(*(longlong *)&param_1->field_0x10 + 0x18);
      ::FName::ToString((FName *)local_1a8,&local_1b8);
      local_1a8._0_4_ = *(uint *)&param_1->field_0x18;
      local_1a8._4_4_ = *(uint *)&param_1->field_0x1c;
      ::FName::ToString((FName *)local_1a8,(FString *)&local_1a0[0].ObjectPtr);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
      if (local_1a0[0].DebugPtr != (UObject *)0x0) {
        FMemory::Free(local_1a0[0].DebugPtr);
      }
      if ((FWeakObjectPtr)local_1b8.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
    }
    (param_3->ObjectPtr).field0_0x0.DebugPtr = (UObject *)0x0;
    (param_3->ObjectKey).ObjectIndex = 0;
    (param_3->ObjectKey).ObjectSerialNumber = 0;
    return false;
  }
  pUVar7 = Z_Construct_UClass_UWidget_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_)) goto LAB_14692b356;
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (((FVar4 != (FName)0x0) && (pvVar5 != (void *)0x0)) &&
     (local_190 = param_1, local_188.TypeName = FVar4, local_188.Data = pvVar5,
     TVar8.DebugPtr = (UObject *)FWidgetMaterialHandle::GetMaterial(&local_188),
     (UMaterialInterface *)TVar8.DebugPtr != (UMaterialInterface *)0x0)) {
    pUVar7 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&(TVar8.DebugPtr)->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&(TVar8.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) {
      pUVar9 = (UMaterialInterface *)(param_3->ObjectPtr).field0_0x0.DebugPtr;
      if (pUVar9 == (UMaterialInterface *)0x0) {
        bVar13 = (UMaterialInterface *)TVar8.DebugPtr == (UMaterialInterface *)0x0;
      }
      else {
        bVar13 = pUVar9 == (UMaterialInterface *)TVar8.DebugPtr;
      }
      if (bVar13) {
        return false;
      }
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(TVar8.DebugPtr);
      }
      local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a0[0].DebugPtr = TVar8.DebugPtr;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(TVar8.DebugPtr);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_1b8,(FObjectPtr)local_1a0);
      FVar6.Data = local_1b8.Data.AllocatorInstance.Data;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (GC::MarkAsReachable(TVar8.DebugPtr), GC::GIsIncrementalReachabilityPending != false)) {
        GC::MarkAsReachable(TVar8.DebugPtr);
      }
      (param_3->ObjectPtr).field0_0x0.DebugPtr = (UObject *)TVar8;
      param_3->ObjectKey = (FObjectKey)FVar6.Data;
      return true;
    }
    pUVar9 = (UMaterialInterface *)FObjectComponent::GetObject(param_3);
    if (pUVar9 != (UMaterialInterface *)0x0) {
      pUVar7 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) {
        pUVar2 = *(UMaterialInterface **)&pUVar9[1].SubsurfaceProfiles.ArrayNum;
        if (pUVar2 == (UMaterialInterface *)0x0) {
          bVar13 = (UMaterialInterface *)TVar8.DebugPtr == (UMaterialInterface *)0x0;
        }
        else {
          bVar13 = pUVar2 == (UMaterialInterface *)TVar8.DebugPtr;
        }
        if (bVar13) {
          local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (FVar4 == (FName)0x0) {
            return false;
          }
          if (pvVar5 == (void *)0x0) {
            return false;
          }
          FWidgetMaterialHandle::SetMaterial(&local_188,pUVar9,(UWidget *)param_1);
          return false;
        }
      }
    }
    local_178.Base = local_158;
    local_178.bIsDynamic = false;
    local_178.bIsExternal = false;
    local_178.CurPos = local_158;
    local_178.End = (wchar_t *)local_58;
    local_1a0[0] = *(TObjectPtr<UObject>_u_0 *)&(TVar8.DebugPtr)->field_0x18;
    ::FName::ToString((FName *)&local_1a0[0].ObjectPtr,&local_178);
    if (local_178.End < local_178.CurPos + 9) {
      TStringBuilderBase<wchar_t>::Extend(&local_178,9);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_178.CurPos,L"_Animated",0x12);
    local_178.CurPos = (wchar_t *)((longlong)pvVar10 + 0x12);
    if (local_178.End < (wchar_t *)((longlong)pvVar10 + 0x14U)) {
      TStringBuilderBase<wchar_t>::Extend(&local_178,1);
    }
    *local_178.CurPos = L'\0';
    pFVar11 = ::FName::FName((FName *)&local_1a0[0].ObjectPtr,local_178.Base);
    FVar3 = *pFVar11;
    FVar12 = (FName)Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    local_1c8 = 0;
    MakeUniqueObjectName
              ((UObject *)local_1a8,(UClass *)param_1,FVar12,FVar3.ComparisonIndex.Value.Value);
    TVar8.DebugPtr =
         (UObject *)
         UMaterialInstanceDynamic::Create
                   ((UMaterialInterface *)TVar8.DebugPtr,param_1,(FName)local_1a8);
    local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((FVar4 != (FName)0x0) && (pvVar5 != (void *)0x0)) {
      FWidgetMaterialHandle::SetMaterial
                (&local_188,(UMaterialInterface *)TVar8.DebugPtr,(UWidget *)param_1);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
    local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((UMaterialInstanceDynamic *)TVar8.DebugPtr != (UMaterialInstanceDynamic *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(TVar8.DebugPtr);
      }
      local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a0[0].DebugPtr = TVar8.DebugPtr;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(TVar8.DebugPtr);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_1b8,(FObjectPtr)local_1a0);
    }
    FVar6.Data = local_1b8.Data.AllocatorInstance.Data;
    if (GC::GIsIncrementalReachabilityPending != false) {
      if ((UMaterialInstanceDynamic *)TVar8.DebugPtr != (UMaterialInstanceDynamic *)0x0) {
        GC::MarkAsReachable(TVar8.DebugPtr);
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UMaterialInstanceDynamic *)TVar8.DebugPtr != (UMaterialInstanceDynamic *)0x0)) {
        GC::MarkAsReachable(TVar8.DebugPtr);
      }
    }
    (param_3->ObjectPtr).field0_0x0.DebugPtr = (UObject *)TVar8;
    param_3->ObjectKey = (FObjectKey)FVar6.Data;
    local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (FVar4 == (FName)0x0) {
      return true;
    }
    if (pvVar5 == (void *)0x0) {
      return true;
    }
    FWidgetMaterialHandle::SetMaterial
              (&local_188,(UMaterialInterface *)TVar8.DebugPtr,(UWidget *)param_1);
    return true;
  }
  if ((param_3->ObjectKey).ObjectIndex == 0) {
    if ((param_3->ObjectKey).ObjectSerialNumber == 0) {
      bVar13 = (param_3->ObjectPtr).field0_0x0.DebugPtr == (UObject *)0x0;
      goto LAB_14692b33a;
    }
    if ((param_3->ObjectKey).ObjectSerialNumber == 0) {
      bVar13 = true;
      goto LAB_14692b33a;
    }
  }
  bVar13 = false;
LAB_14692b33a:
  if (!bVar13) {
    (param_3->ObjectPtr).field0_0x0.DebugPtr = (UObject *)0x0;
    (param_3->ObjectKey).ObjectIndex = 0;
    (param_3->ObjectKey).ObjectSerialNumber = 0;
    return true;
  }
  return false;
}

