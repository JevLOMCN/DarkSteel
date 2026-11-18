// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionServices
// Functions: 11

// HandleMessage @ 148cf2d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FEngineServicePong,FSessionManager>::HandleMessage
          (TRawMessageHandler<FEngineServicePong,FSessionManager> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  int iVar1;
  IMessageContext *pIVar2;
  FSessionManager *pFVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *this_00;
  longlong lVar6;
  FWeakObjectPtr *pFVar7;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar8;
  undefined8 uVar9;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FEngineServicePong::StaticStruct();
  if (this_00 == (UScriptStruct *)0x0) {
    return;
  }
  pIVar2 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
    bVar5 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar5) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_148cf2e03;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148cf2e03:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    iVar1 = *(int *)&(this->Func).field_0x8;
    pFVar3 = this->Handler;
    pcVar4 = *(code **)&this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*pcVar4)((longlong)&pFVar3->_padding_ + (longlong)iVar1,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 148cf2e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo>::HandleMessage
          (TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  int iVar1;
  IMessageContext *pIVar2;
  FSessionInstanceInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *this_00;
  longlong lVar6;
  FWeakObjectPtr *pFVar7;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar8;
  undefined8 uVar9;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FSessionServiceLog::StaticStruct();
  if (this_00 == (UScriptStruct *)0x0) {
    return;
  }
  pIVar2 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
    bVar5 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar5) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_148cf2ee3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148cf2ee3:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    iVar1 = *(int *)&(this->Func).field_0x8;
    pFVar3 = this->Handler;
    pcVar4 = *(code **)&this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*pcVar4)((longlong)&pFVar3->_padding_ + (longlong)iVar1,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 148cf2f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FSessionServiceLogSubscribe,FSessionService>::HandleMessage
          (TRawMessageHandler<FSessionServiceLogSubscribe,FSessionService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  int iVar1;
  IMessageContext *pIVar2;
  FSessionService *pFVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *this_00;
  longlong lVar6;
  FWeakObjectPtr *pFVar7;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar8;
  undefined8 uVar9;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FSessionServiceLogSubscribe::StaticStruct();
  if (this_00 == (UScriptStruct *)0x0) {
    return;
  }
  pIVar2 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
    bVar5 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar5) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_148cf2fc3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148cf2fc3:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    iVar1 = *(int *)&(this->Func).field_0x8;
    pFVar3 = this->Handler;
    pcVar4 = *(code **)&this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*pcVar4)((longlong)&((FSessionService *)(&pFVar3->LogSubscribersLock + -1))->_padding_ +
              (longlong)iVar1,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 148cf3020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FSessionServiceLogUnsubscribe,FSessionService>::HandleMessage
          (TRawMessageHandler<FSessionServiceLogUnsubscribe,FSessionService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  int iVar1;
  IMessageContext *pIVar2;
  FSessionService *pFVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *this_00;
  longlong lVar6;
  FWeakObjectPtr *pFVar7;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar8;
  undefined8 uVar9;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FSessionServiceLogUnsubscribe::StaticStruct();
  if (this_00 == (UScriptStruct *)0x0) {
    return;
  }
  pIVar2 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
    bVar5 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar5) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_148cf30a3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148cf30a3:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    iVar1 = *(int *)&(this->Func).field_0x8;
    pFVar3 = this->Handler;
    pcVar4 = *(code **)&this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*pcVar4)((longlong)&((FSessionService *)(&pFVar3->LogSubscribersLock + -1))->_padding_ +
              (longlong)iVar1,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 148cf3100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FSessionServicePing,FSessionService>::HandleMessage
          (TRawMessageHandler<FSessionServicePing,FSessionService> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  int iVar1;
  IMessageContext *pIVar2;
  FSessionService *pFVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *this_00;
  longlong lVar6;
  FWeakObjectPtr *pFVar7;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar8;
  undefined8 uVar9;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FSessionServicePing::StaticStruct();
  if (this_00 == (UScriptStruct *)0x0) {
    return;
  }
  pIVar2 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
    bVar5 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar5) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_148cf3183;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148cf3183:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    iVar1 = *(int *)&(this->Func).field_0x8;
    pFVar3 = this->Handler;
    pcVar4 = *(code **)&this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*pcVar4)((longlong)&((FSessionService *)(&pFVar3->LogSubscribersLock + -1))->_padding_ +
              (longlong)iVar1,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 148cf31e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FSessionServicePong,FSessionManager>::HandleMessage
          (TRawMessageHandler<FSessionServicePong,FSessionManager> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  int iVar1;
  IMessageContext *pIVar2;
  FSessionManager *pFVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *this_00;
  longlong lVar6;
  FWeakObjectPtr *pFVar7;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar8;
  undefined8 uVar9;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FSessionServicePong::StaticStruct();
  if (this_00 == (UScriptStruct *)0x0) {
    return;
  }
  pIVar2 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
    bVar5 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar5) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_148cf3263;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148cf3263:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    iVar1 = *(int *)&(this->Func).field_0x8;
    pFVar3 = this->Handler;
    pcVar4 = *(code **)&this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*pcVar4)((longlong)&pFVar3->_padding_ + (longlong)iVar1,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 148cf32c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlChannelsDesc,FTraceController>::HandleMessage
          (TRawMessageHandler<FTraceControlChannelsDesc,FTraceController> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceController *pFVar2;
  pmf_3584822d pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlChannelsDesc::StaticStruct();
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
      goto LAB_148cf3343;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148cf3343:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 148cf33a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlChannelsStatus,FTraceController>::HandleMessage
          (TRawMessageHandler<FTraceControlChannelsStatus,FTraceController> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceController *pFVar2;
  pmf_36accc0e pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlChannelsStatus::StaticStruct();
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
      goto LAB_148cf3423;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148cf3423:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 148cf3480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlDiscovery,FTraceController>::HandleMessage
          (TRawMessageHandler<FTraceControlDiscovery,FTraceController> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceController *pFVar2;
  pmf_19264a38 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlDiscovery::StaticStruct();
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
      goto LAB_148cf3503;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148cf3503:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 148cf3560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlSettings,FTraceController>::HandleMessage
          (TRawMessageHandler<FTraceControlSettings,FTraceController> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceController *pFVar2;
  pmf_44f44acf pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlSettings::StaticStruct();
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
      goto LAB_148cf35e3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148cf35e3:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 148cf3640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FTraceControlStatus,FTraceController>::HandleMessage
          (TRawMessageHandler<FTraceControlStatus,FTraceController> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FTraceController *pFVar2;
  pmf_fa4eba1e pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FTraceControlStatus::StaticStruct();
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
      goto LAB_148cf36c3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148cf36c3:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

