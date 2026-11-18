// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 3

// HandleMessage @ 14cfedde0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider>::HandleMessage
          (TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FLiveLinkProvider *pFVar2;
  pmf_65d9a5a8 pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkConnectMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UScriptStruct_FLiveLinkConnectMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkConnectMessage,(UObject *)pUVar5,
                         L"LiveLinkConnectMessage");
    if (Z_Registration_Info_UScriptStruct_FLiveLinkConnectMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FLiveLinkConnectMessage.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_14cfede8b;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_14cfede8b:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 14cfedef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider>::HandleMessage
          (TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FLiveLinkProvider *pFVar2;
  pmf_686abfd6 pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkHeartbeatMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UScriptStruct_FLiveLinkHeartbeatMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage,(UObject *)pUVar5,
                         L"LiveLinkHeartbeatMessage");
    if (Z_Registration_Info_UScriptStruct_FLiveLinkHeartbeatMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FLiveLinkHeartbeatMessage.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_14cfedf9b;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_14cfedf9b:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 14cfee000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider>::HandleMessage
          (TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FLiveLinkProvider *pFVar2;
  pmf_66f7b120 pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkPingMessage.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UScriptStruct_FLiveLinkPingMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPingMessage,(UObject *)pUVar5,
                         L"LiveLinkPingMessage");
    if (Z_Registration_Info_UScriptStruct_FLiveLinkPingMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FLiveLinkPingMessage.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_14cfee0ab;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_14cfee0ab:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

