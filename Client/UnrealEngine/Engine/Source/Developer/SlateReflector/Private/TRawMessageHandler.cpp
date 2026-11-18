// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 2

// HandleMessage @ 142eb0ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService>::HandleMessage
          (TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FWidgetSnapshotService *pFVar2;
  pmf_24983cdb pVar3;
  UScriptStruct *this_00;
  bool bVar4;
  UPackage *pUVar5;
  longlong lVar6;
  FWeakObjectPtr *pFVar7;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar8;
  undefined8 uVar9;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  if (Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_SlateReflector();
    Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshotRequest,(UObject *)pUVar5,
                         L"WidgetSnapshotRequest");
    if (Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_142eb0d8b;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_142eb0d8b:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 142eb0df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService>::HandleMessage
          (TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FWidgetSnapshotService *pFVar2;
  pmf_7909ba51 pVar3;
  UScriptStruct *this_00;
  bool bVar4;
  UPackage *pUVar5;
  longlong lVar6;
  FWeakObjectPtr *pFVar7;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar8;
  undefined8 uVar9;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  if (Z_Registration_Info_UScriptStruct_FWidgetSnapshotResponse.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_SlateReflector();
    Z_Registration_Info_UScriptStruct_FWidgetSnapshotResponse.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshotResponse,(UObject *)pUVar5,
                         L"WidgetSnapshotResponse");
    if (Z_Registration_Info_UScriptStruct_FWidgetSnapshotResponse.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FWidgetSnapshotResponse.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_142eb0e9b;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_142eb0e9b:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

