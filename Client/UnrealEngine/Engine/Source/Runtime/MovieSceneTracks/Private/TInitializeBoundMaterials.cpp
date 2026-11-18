// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// InitializeBoundMaterial @ 1467a4430

bool __cdecl
UE::MovieScene::
TInitializeBoundMaterials<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
::InitializeBoundMaterial
          (UObject *param_1,FComponentMaterialInfo *param_2,FObjectComponent *param_3)

{
  int *piVar1;
  int iVar2;
  UMaterialInterface *pUVar3;
  FWeakObjectPtr FVar4;
  FWeakObjectPtr FVar5;
  UMaterialInterface *pUVar6;
  UClass *pUVar7;
  UMaterialInterface *pUVar8;
  UMaterialInstanceDynamic *pUVar9;
  bool bVar10;
  FWeakObjectPtr local_res8;
  UMaterialInstanceDynamic *local_res10;
  FComponentMaterialAccessor local_28;
  
  local_28.MaterialInfo.MaterialSlotName = param_2->MaterialSlotName;
  local_28.MaterialInfo.MaterialSlotIndex = param_2->MaterialSlotIndex;
  local_28.MaterialInfo.MaterialType = param_2->MaterialType;
  local_28.MaterialInfo._13_3_ = *(undefined3 *)&param_2->field_0xd;
  if (param_1 == (UObject *)0x0) {
    (param_3->ObjectPtr).field0_0x0.DebugPtr = (UObject *)0x0;
    (param_3->ObjectKey).ObjectIndex = 0;
    (param_3->ObjectKey).ObjectSerialNumber = 0;
    return false;
  }
  local_28.Object = param_1;
  pUVar6 = FComponentMaterialAccessor::GetMaterial(&local_28);
  if (pUVar6 != (UMaterialInterface *)0x0) {
    pUVar7 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar7->_padding_)) {
      pUVar8 = (UMaterialInterface *)FObjectComponent::GetObject(param_3);
      if (pUVar8 != (UMaterialInterface *)0x0) {
        pUVar7 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
        iVar2 = (int)pUVar7->_padding_;
        if ((((iVar2 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar7->_padding_)) &&
            (pUVar3 = *(UMaterialInterface **)&pUVar8[1].SubsurfaceProfiles.ArrayNum,
            pUVar3 != (UMaterialInterface *)0x0)) && (pUVar3 == pUVar6)) {
          FComponentMaterialAccessor::SetMaterial(&local_28,pUVar8);
          return false;
        }
      }
      pUVar9 = FComponentMaterialAccessor::CreateDynamicMaterial(&local_28,pUVar6);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if (pUVar9 != (UMaterialInstanceDynamic *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable((UObject *)pUVar9);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res10 = pUVar9;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable((UObject *)pUVar9);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      }
      FVar4 = local_res8;
      if (GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar9 != (UMaterialInstanceDynamic *)0x0) {
          GC::MarkAsReachable((UObject *)pUVar9);
        }
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar9 != (UMaterialInstanceDynamic *)0x0)) {
          GC::MarkAsReachable((UObject *)pUVar9);
        }
      }
      FVar5 = local_res8;
      (param_3->ObjectPtr).field0_0x0.DebugPtr = (UObject *)pUVar9;
      local_res8.ObjectIndex = FVar4.ObjectIndex;
      local_res8.ObjectSerialNumber = FVar4.ObjectSerialNumber;
      (param_3->ObjectKey).ObjectIndex = local_res8.ObjectIndex;
      (param_3->ObjectKey).ObjectSerialNumber = local_res8.ObjectSerialNumber;
      local_res8 = FVar5;
      FComponentMaterialAccessor::SetMaterial(&local_28,(UMaterialInterface *)pUVar9);
      return true;
    }
    pUVar8 = (UMaterialInterface *)(param_3->ObjectPtr).field0_0x0.DebugPtr;
    if (pUVar8 == (UMaterialInterface *)0x0) {
      bVar10 = pUVar6 == (UMaterialInterface *)0x0;
    }
    else {
      bVar10 = pUVar8 == pUVar6;
    }
    if (bVar10) {
      return false;
    }
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar6);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = (UMaterialInstanceDynamic *)pUVar6;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar6);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    FVar4 = local_res8;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (GC::MarkAsReachable((UObject *)pUVar6), GC::GIsIncrementalReachabilityPending != false)) {
      GC::MarkAsReachable((UObject *)pUVar6);
    }
    (param_3->ObjectPtr).field0_0x0.DebugPtr = (UObject *)pUVar6;
    local_res8.ObjectIndex = FVar4.ObjectIndex;
    local_res8.ObjectSerialNumber = FVar4.ObjectSerialNumber;
    (param_3->ObjectKey).ObjectIndex = local_res8.ObjectIndex;
    (param_3->ObjectKey).ObjectSerialNumber = local_res8.ObjectSerialNumber;
    return true;
  }
  piVar1 = &(param_3->ObjectKey).ObjectSerialNumber;
  if ((param_3->ObjectKey).ObjectIndex == 0) {
    if (*piVar1 == 0) {
      bVar10 = (param_3->ObjectPtr).field0_0x0.DebugPtr == (UObject *)0x0;
      goto LAB_1467a44bd;
    }
    if (*piVar1 == 0) {
      bVar10 = true;
      goto LAB_1467a44bd;
    }
  }
  bVar10 = false;
LAB_1467a44bd:
  if (bVar10) {
    return false;
  }
  (param_3->ObjectPtr).field0_0x0.DebugPtr = (UObject *)0x0;
  (param_3->ObjectKey).ObjectIndex = 0;
  (param_3->ObjectKey).ObjectSerialNumber = 0;
  return true;
}

