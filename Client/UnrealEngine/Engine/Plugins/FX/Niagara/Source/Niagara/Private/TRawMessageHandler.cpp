// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// HandleMessage @ 1492a9340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient>::HandleMessage
          (TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FNiagaraDebuggerClient *pFVar2;
  pmf_9998fee6 pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDSettingsData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDSettingsData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData,(UObject *)pUVar5,
                         L"NiagaraDebugHUDSettingsData");
    if (Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDSettingsData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDSettingsData.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_1492a93eb;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1492a93eb:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 1492a9450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient>::HandleMessage
          (TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FNiagaraDebuggerClient *pFVar2;
  pmf_5ad094e0 pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerConnectionClosed.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDebuggerConnectionClosed.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed,
                         (UObject *)pUVar5,L"NiagaraDebuggerConnectionClosed");
    if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerConnectionClosed.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FNiagaraDebuggerConnectionClosed.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_1492a94fb;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1492a94fb:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 1492a9560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient>::HandleMessage
          (TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FNiagaraDebuggerClient *pFVar2;
  pmf_b23dcbd3 pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand,
                         (UObject *)pUVar5,L"NiagaraDebuggerExecuteConsoleCommand");
    if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_1492a960b;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1492a960b:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 1492a9670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient>::HandleMessage
          (TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FNiagaraDebuggerClient *pFVar2;
  pmf_ea8e93d7 pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerRequestConnection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDebuggerRequestConnection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection,
                         (UObject *)pUVar5,L"NiagaraDebuggerRequestConnection");
    if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerRequestConnection.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FNiagaraDebuggerRequestConnection.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_1492a971b;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1492a971b:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 1492a9780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient>::HandleMessage
          (TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FNiagaraDebuggerClient *pFVar2;
  pmf_d6751c24 pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerCaptureSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraOutlinerCaptureSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings,(UObject *)pUVar5
                         ,L"NiagaraOutlinerCaptureSettings");
    if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerCaptureSettings.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FNiagaraOutlinerCaptureSettings.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_1492a982b;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1492a982b:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 1492a9890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient>::HandleMessage
          (TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FNiagaraDebuggerClient *pFVar2;
  pmf_d9f21d02 pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage,
                         (UObject *)pUVar5,L"NiagaraRequestSimpleClientInfoMessage");
    if (Z_Registration_Info_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_1492a993b;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1492a993b:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 1492a99a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient>::HandleMessage
          (TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FNiagaraDebuggerClient *pFVar2;
  pmf_8ee3c378 pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest,
                         (UObject *)pUVar5,L"NiagaraSystemSimCacheCaptureRequest");
    if (Z_Registration_Info_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_1492a9a4b;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1492a9a4b:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

