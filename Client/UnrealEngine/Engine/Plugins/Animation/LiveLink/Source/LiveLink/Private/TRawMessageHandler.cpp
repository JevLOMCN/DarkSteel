// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 4

// HandleMessage @ 14d058630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FLiveLinkClearSubject,FLiveLinkMessageBusSource>::HandleMessage
          (TRawMessageHandler<FLiveLinkClearSubject,FLiveLinkMessageBusSource> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FLiveLinkMessageBusSource *pFVar2;
  pmf_b1ceca78 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FLiveLinkClearSubject::StaticStruct();
  if (this_00 == (UScriptStruct *)0x0) {
    return;
  }
  pIVar1 = param_1->Object;
  lVar5 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar5 != 0) {
    pFVar6 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar6,false,true);
    if (bVar4) {
      pFVar6 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar6);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_14d0586b3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_14d0586b3:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 14d058710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkMessageBusSource>::HandleMessage
          (TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkMessageBusSource> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FLiveLinkMessageBusSource *pFVar2;
  pmf_59aa31ac pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FLiveLinkHeartbeatMessage::StaticStruct();
  if (this_00 == (UScriptStruct *)0x0) {
    return;
  }
  pIVar1 = param_1->Object;
  lVar5 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar5 != 0) {
    pFVar6 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar6,false,true);
    if (bVar4) {
      pFVar6 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar6);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_14d058793;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_14d058793:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 14d0587f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager>::HandleMessage
          (TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FLiveLinkMessageBusDiscoveryManager *pFVar2;
  pmf_ff88e5d6 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FLiveLinkPongMessage::StaticStruct();
  if (this_00 == (UScriptStruct *)0x0) {
    return;
  }
  pIVar1 = param_1->Object;
  lVar5 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar5 != 0) {
    pFVar6 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar6,false,true);
    if (bVar4) {
      pFVar6 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar6);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_14d058873;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_14d058873:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 14d0588d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FLiveLinkPongMessage,ULiveLinkMessageBusFinder>::HandleMessage
          (TRawMessageHandler<FLiveLinkPongMessage,ULiveLinkMessageBusFinder> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  ULiveLinkMessageBusFinder *pUVar2;
  pmf_5abfc76e pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FLiveLinkPongMessage::StaticStruct();
  if (this_00 == (UScriptStruct *)0x0) {
    return;
  }
  pIVar1 = param_1->Object;
  lVar5 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar5 != 0) {
    pFVar6 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar6,false,true);
    if (bVar4) {
      pFVar6 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar6);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_14d058953;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_14d058953:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pUVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pUVar2,uVar8,param_1);
  }
  return;
}

