// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// AddAssetUserDataOfClass @ 145670660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
IInterface_AssetUserData::AddAssetUserDataOfClass
          (IInterface_AssetUserData *this,TSubclassOf<UAssetUserData> param_1)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_e8 [32];
  FName local_c8;
  UClass *local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar11 != 0) &&
     (pUVar7 = Z_Construct_UClass_UAssetUserData_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar11 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (*(longlong *)param_1.Class.field0_0x0 != 0)) goto LAB_1456706f3;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("InUserDataClass.Get() != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces\\Interface_AssetUserData.h"
                     ,0x3d,L"");
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
LAB_1456706f3:
  pUVar7 = (UClass *)0x0;
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  pcVar2 = *(code **)((longlong)*this + 0x10);
  pUVar10 = pUVar7;
  if ((lVar11 != 0) &&
     (pUVar8 = Z_Construct_UClass_UAssetUserData_NoRegister(), pUVar8 != (UClass *)0x0)) {
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar11 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar10 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  pUVar9 = (UObject *)(**(code **)((longlong)*this + 8))(this);
  FVar3 = local_c8;
  if (local_c8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (pUVar9,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar8 = Z_Construct_UClass_UAssetUserData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar8,pUVar10);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar10);
  FVar4 = local_c8;
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_c8.ComparisonIndex = FVar3.ComparisonIndex.Value;
  local_c8.Number = FVar3.Number;
  local_b8._16_4_ = local_c8.ComparisonIndex.Value;
  local_b8._20_4_ = local_c8.Number;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_c8 = FVar4;
  local_b8._8_8_ = pUVar9;
  pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar12 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  (*pcVar2)(this,pUVar9);
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  pcVar2 = *(code **)((longlong)*this + 0x18);
  if ((lVar11 != 0) &&
     (pUVar10 = Z_Construct_UClass_UAssetUserData_NoRegister(), pUVar10 != (UClass *)0x0)) {
    iVar1 = (int)pUVar10->_padding_;
    if ((*(int *)(lVar11 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar10->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar7 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  local_c0 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  lVar11 = (*pcVar2)(this,&local_c0);
  return lVar11 != 0;
}

// HasAssetUserDataOfClass @ 14568b320

bool __thiscall
IInterface_AssetUserData::HasAssetUserDataOfClass
          (IInterface_AssetUserData *this,TSubclassOf<UAssetUserData> param_1)

{
  code *pcVar1;
  longlong lVar2;
  UObject *local_res8;
  
  local_res8 = *(UObject **)param_1.Class.field0_0x0;
  pcVar1 = *(code **)((longlong)*this + 0x18);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  lVar2 = (*pcVar1)(this,&local_res8);
  return lVar2 != 0;
}

