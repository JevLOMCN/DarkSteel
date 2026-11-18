// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// HandleMessage @ 147b73190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FEngineServiceAuthDeny,FEngineService>::HandleMessage
          (TRawMessageHandler<FEngineServiceAuthDeny,FEngineService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FEngineService *pFVar2;
  pmf_738be375 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FEngineServiceAuthDeny::StaticStruct();
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
      goto LAB_147b73213;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_147b73213:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 147b73270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FEngineServiceAuthGrant,FEngineService>::HandleMessage
          (TRawMessageHandler<FEngineServiceAuthGrant,FEngineService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FEngineService *pFVar2;
  pmf_ac00d8a3 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FEngineServiceAuthGrant::StaticStruct();
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
      goto LAB_147b732f3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_147b732f3:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 147b73350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService>::HandleMessage
          (TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FEngineService *pFVar2;
  pmf_ff279577 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FEngineServiceExecuteCommand::StaticStruct();
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
      goto LAB_147b733d3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_147b733d3:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 147b73430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FEngineServicePing,FEngineService>::HandleMessage
          (TRawMessageHandler<FEngineServicePing,FEngineService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FEngineService *pFVar2;
  pmf_c92fab13 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FEngineServicePing::StaticStruct();
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
      goto LAB_147b734b3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_147b734b3:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 147b73510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FEngineServiceTerminate,FEngineService>::HandleMessage
          (TRawMessageHandler<FEngineServiceTerminate,FEngineService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FEngineService *pFVar2;
  pmf_99bc5ef0 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FEngineServiceTerminate::StaticStruct();
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
      goto LAB_147b73593;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_147b73593:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 1488c6e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlBookmark,FTraceService>::HandleMessage
          (TRawMessageHandler<FTraceControlBookmark,FTraceService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceService *pFVar2;
  pmf_c5b83b2d pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlBookmark::StaticStruct();
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
      goto LAB_1488c6ec3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1488c6ec3:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 1488c6f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlChannelsPing,FTraceService>::HandleMessage
          (TRawMessageHandler<FTraceControlChannelsPing,FTraceService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceService *pFVar2;
  pmf_d74bbc81 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlChannelsPing::StaticStruct();
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
      goto LAB_1488c6fa3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1488c6fa3:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 1488c7000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlChannelsSet,FTraceService>::HandleMessage
          (TRawMessageHandler<FTraceControlChannelsSet,FTraceService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceService *pFVar2;
  pmf_cb81ed99 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlChannelsSet::StaticStruct();
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
      goto LAB_1488c7083;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1488c7083:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 1488c70e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService>::HandleMessage
          (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceService *pFVar2;
  pmf_974c75c9 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlDiscoveryPing::StaticStruct();
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
      goto LAB_1488c7163;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1488c7163:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 1488c71c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlFile,FTraceService>::HandleMessage
          (TRawMessageHandler<FTraceControlFile,FTraceService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceService *pFVar2;
  pmf_390060a7 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlFile::StaticStruct();
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
      goto LAB_1488c7243;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1488c7243:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 1488c72a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlPause,FTraceService>::HandleMessage
          (TRawMessageHandler<FTraceControlPause,FTraceService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceService *pFVar2;
  pmf_36418f95 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlPause::StaticStruct();
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
      goto LAB_1488c7323;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1488c7323:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 1488c7380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlResume,FTraceService>::HandleMessage
          (TRawMessageHandler<FTraceControlResume,FTraceService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceService *pFVar2;
  pmf_35034f96 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlResume::StaticStruct();
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
      goto LAB_1488c7403;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1488c7403:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 1488c7460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlScreenshot,FTraceService>::HandleMessage
          (TRawMessageHandler<FTraceControlScreenshot,FTraceService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceService *pFVar2;
  pmf_86eb7dfd pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlScreenshot::StaticStruct();
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
      goto LAB_1488c74e3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1488c74e3:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 1488c7540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlSend,FTraceService>::HandleMessage
          (TRawMessageHandler<FTraceControlSend,FTraceService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceService *pFVar2;
  pmf_6d6d761b pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlSend::StaticStruct();
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
      goto LAB_1488c75c3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1488c75c3:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 1488c7620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService>::HandleMessage
          (TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceService *pFVar2;
  pmf_656c8327 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlSetStatNamedEvents::StaticStruct();
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
      goto LAB_1488c76a3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1488c76a3:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 1488c7700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlSettingsPing,FTraceService>::HandleMessage
          (TRawMessageHandler<FTraceControlSettingsPing,FTraceService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceService *pFVar2;
  pmf_3ec8d38e pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlSettingsPing::StaticStruct();
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
      goto LAB_1488c7783;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1488c7783:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 1488c77e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlSnapshotFile,FTraceService>::HandleMessage
          (TRawMessageHandler<FTraceControlSnapshotFile,FTraceService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceService *pFVar2;
  pmf_62161343 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlSnapshotFile::StaticStruct();
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
      goto LAB_1488c7863;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1488c7863:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 1488c78c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlSnapshotSend,FTraceService>::HandleMessage
          (TRawMessageHandler<FTraceControlSnapshotSend,FTraceService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceService *pFVar2;
  pmf_968328b7 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlSnapshotSend::StaticStruct();
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
      goto LAB_1488c7943;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1488c7943:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 1488c79a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlStatusPing,FTraceService>::HandleMessage
          (TRawMessageHandler<FTraceControlStatusPing,FTraceService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceService *pFVar2;
  pmf_e09b9d9f pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlStatusPing::StaticStruct();
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
      goto LAB_1488c7a23;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1488c7a23:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 1488c7a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlStop,FTraceService>::HandleMessage
          (TRawMessageHandler<FTraceControlStop,FTraceService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceService *pFVar2;
  pmf_56f835e1 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlStop::StaticStruct();
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
      goto LAB_1488c7b03;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1488c7b03:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

