// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 10

// HandleMessage @ 148c60f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager>::HandleMessage
          (TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager>
           *this,TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FAutomationControllerManager *pFVar2;
  pmf_7c4e738f pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FAutomationWorkerFindWorkersResponse::StaticStruct();
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
      goto LAB_148c60fc3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148c60fc3:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 148c61020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager>::
HandleMessage(TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager>
              *this,TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FAutomationControllerManager *pFVar2;
  pmf_5c6dc282 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FAutomationWorkerImageComparisonResults::StaticStruct();
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
      goto LAB_148c610a3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148c610a3:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 148c61100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager>::HandleMessage
          (TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FAutomationControllerManager *pFVar2;
  pmf_ea2eb1a8 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FAutomationWorkerPong::StaticStruct();
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
      goto LAB_148c61183;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148c61183:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 148c611e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>::
HandleMessage(TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>
              *this,TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FAutomationControllerManager *pFVar2;
  pmf_781e98b1 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FAutomationWorkerRequestNextNetworkCommand::StaticStruct();
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
      goto LAB_148c61263;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148c61263:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 148c612c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>::
HandleMessage(TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>
              *this,TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FAutomationControllerManager *pFVar2;
  pmf_7deb6e43 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FAutomationWorkerRequestTestsReplyComplete::StaticStruct();
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
      goto LAB_148c61343;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148c61343:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 148c613a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager>::HandleMessage
          (TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FAutomationControllerManager *pFVar2;
  pmf_99fc5de6 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FAutomationWorkerRunTestsReply::StaticStruct();
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
      goto LAB_148c61423;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148c61423:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 148c61480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager>::HandleMessage
          (TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FAutomationControllerManager *pFVar2;
  pmf_12daeec1 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FAutomationWorkerScreenImage::StaticStruct();
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
      goto LAB_148c61503;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148c61503:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 148c61560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager>::HandleMessage
          (TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FAutomationControllerManager *pFVar2;
  pmf_a0d4d335 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FAutomationWorkerTelemetryData::StaticStruct();
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
      goto LAB_148c615e3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148c615e3:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 148c61640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager>::HandleMessage
          (TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FAutomationControllerManager *pFVar2;
  pmf_c8a6eb85 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FAutomationWorkerTestDataRequest::StaticStruct();
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
      goto LAB_148c616c3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148c616c3:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 148c61720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager>::HandleMessage
          (TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FAutomationControllerManager *pFVar2;
  pmf_29e317b7 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FAutomationWorkerWorkerOffline::StaticStruct();
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
      goto LAB_148c617a3;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_148c617a3:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

