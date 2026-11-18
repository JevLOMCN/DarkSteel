// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 10

// HandleMessage @ 146316040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FChaosVDChannelStateChangeCommandMessage,FChaosVDRemoteSessionsManager>::
HandleMessage(TRawMessageHandler<FChaosVDChannelStateChangeCommandMessage,FChaosVDRemoteSessionsManager>
              *this,TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FChaosVDRemoteSessionsManager *pFVar2;
  pmf_c821f2f7 pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeCommandMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeCommandMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDChannelStateChangeCommandMessage,
                         (UObject *)pUVar5,L"ChaosVDChannelStateChangeCommandMessage");
    if (Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeCommandMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeCommandMessage.
            OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_1463160eb;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1463160eb:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 146316150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FChaosVDChannelStateChangeResponseMessage,FChaosVDRemoteSessionsManager>::
HandleMessage(TRawMessageHandler<FChaosVDChannelStateChangeResponseMessage,FChaosVDRemoteSessionsManager>
              *this,TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FChaosVDRemoteSessionsManager *pFVar2;
  pmf_b3662e9d pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeResponseMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeResponseMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDChannelStateChangeResponseMessage,
                         (UObject *)pUVar5,L"ChaosVDChannelStateChangeResponseMessage");
    if (Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeResponseMessage.OuterSingleton
        == (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeResponseMessage.
            OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_1463161fb;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_1463161fb:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 146316260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FChaosVDFullSessionInfoRequestMessage,FChaosVDRemoteSessionsManager>::
HandleMessage(TRawMessageHandler<FChaosVDFullSessionInfoRequestMessage,FChaosVDRemoteSessionsManager>
              *this,TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FChaosVDRemoteSessionsManager *pFVar2;
  pmf_b02ec498 pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDFullSessionInfoRequestMessage,
                         (UObject *)pUVar5,L"ChaosVDFullSessionInfoRequestMessage");
    if (Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_14631630b;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_14631630b:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 146316370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FChaosVDFullSessionInfoResponseMessage,FChaosVDRemoteSessionsManager>::
HandleMessage(TRawMessageHandler<FChaosVDFullSessionInfoResponseMessage,FChaosVDRemoteSessionsManager>
              *this,TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FChaosVDRemoteSessionsManager *pFVar2;
  pmf_0783d5e0 pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoResponseMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoResponseMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDFullSessionInfoResponseMessage,
                         (UObject *)pUVar5,L"ChaosVDFullSessionInfoResponseMessage");
    if (Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoResponseMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoResponseMessage.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_14631641b;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_14631641b:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 146316480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FChaosVDRecordingStatusMessage,FChaosVDRemoteSessionsManager>::HandleMessage
          (TRawMessageHandler<FChaosVDRecordingStatusMessage,FChaosVDRemoteSessionsManager> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FChaosVDRemoteSessionsManager *pFVar2;
  pmf_1c475fed pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDRecordingStatusMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDRecordingStatusMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDRecordingStatusMessage,(UObject *)pUVar5,
                         L"ChaosVDRecordingStatusMessage");
    if (Z_Registration_Info_UScriptStruct_FChaosVDRecordingStatusMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FChaosVDRecordingStatusMessage.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_14631652b;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_14631652b:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 146316590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FChaosVDSessionPing,FChaosVDRemoteSessionsManager>::HandleMessage
          (TRawMessageHandler<FChaosVDSessionPing,FChaosVDRemoteSessionsManager> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FChaosVDRemoteSessionsManager *pFVar2;
  pmf_b5e6d6fd pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDSessionPing,(UObject *)pUVar5,
                         L"ChaosVDSessionPing");
    if (Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton == (UScriptStruct *)0x0
       ) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_14631663b;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_14631663b:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 1463166a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FChaosVDSessionPong,FChaosVDRemoteSessionsManager>::HandleMessage
          (TRawMessageHandler<FChaosVDSessionPong,FChaosVDRemoteSessionsManager> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FChaosVDRemoteSessionsManager *pFVar2;
  pmf_dc197437 pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDSessionPong.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDSessionPong.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDSessionPong,(UObject *)pUVar5,
                         L"ChaosVDSessionPong");
    if (Z_Registration_Info_UScriptStruct_FChaosVDSessionPong.OuterSingleton == (UScriptStruct *)0x0
       ) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FChaosVDSessionPong.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_14631674b;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_14631674b:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 1463167b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FChaosVDStartRecordingCommandMessage,FChaosVDRemoteSessionsManager>::
HandleMessage(TRawMessageHandler<FChaosVDStartRecordingCommandMessage,FChaosVDRemoteSessionsManager>
              *this,TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FChaosVDRemoteSessionsManager *pFVar2;
  pmf_7bec5146 pVar3;
  bool bVar4;
  UScriptStruct *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  FTopLevelAssetPath *pFVar7;
  undefined8 uVar8;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  this_00 = FChaosVDStartRecordingCommandMessage::StaticStruct();
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
      goto LAB_146316833;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_146316833:
  pFVar7 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar7->PackageName) && (local_28.AssetName == pFVar7->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar8 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar8,param_1);
  }
  return;
}

// HandleMessage @ 146316890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FChaosVDStopRecordingCommandMessage,FChaosVDRemoteSessionsManager>::HandleMessage
          (TRawMessageHandler<FChaosVDStopRecordingCommandMessage,FChaosVDRemoteSessionsManager>
           *this,TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FChaosVDRemoteSessionsManager *pFVar2;
  pmf_5da2d5da pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDStopRecordingCommandMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDStopRecordingCommandMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDStopRecordingCommandMessage,
                         (UObject *)pUVar5,L"ChaosVDStopRecordingCommandMessage");
    if (Z_Registration_Info_UScriptStruct_FChaosVDStopRecordingCommandMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FChaosVDStopRecordingCommandMessage.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_14631693b;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_14631693b:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

// HandleMessage @ 1463169a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageHandler<FChaosVDTraceConnectionDetailsMessage,FChaosVDRemoteSessionsManager>::
HandleMessage(TRawMessageHandler<FChaosVDTraceConnectionDetailsMessage,FChaosVDRemoteSessionsManager>
              *this,TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  FChaosVDRemoteSessionsManager *pFVar2;
  pmf_ac59395d pVar3;
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
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDTraceConnectionDetailsMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDTraceConnectionDetailsMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDTraceConnectionDetailsMessage,
                         (UObject *)pUVar5,L"ChaosVDTraceConnectionDetailsMessage");
    if (Z_Registration_Info_UScriptStruct_FChaosVDTraceConnectionDetailsMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return;
    }
  }
  this_00 = Z_Registration_Info_UScriptStruct_FChaosVDTraceConnectionDetailsMessage.OuterSingleton;
  pIVar1 = param_1->Object;
  lVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (lVar6 != 0) {
    pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    bVar4 = FWeakObjectPtr::IsValid(pFVar7,false,true);
    if (bVar4) {
      pFVar7 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar7);
      UStruct::GetStructPathName(this_01,&local_28);
      goto LAB_146316a4b;
    }
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
LAB_146316a4b:
  pFVar8 = UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if ((local_28.PackageName == pFVar8->PackageName) && (local_28.AssetName == pFVar8->AssetName)) {
    pFVar2 = this->Handler;
    pVar3 = this->Func;
    uVar9 = (**(code **)((longlong)*param_1->Object + 0x18))();
    (*(code *)pVar3)(pFVar2,uVar9,param_1);
  }
  return;
}

