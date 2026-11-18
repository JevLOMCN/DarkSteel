// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b480c00

UClass * __cdecl UDS_DropDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DropDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DropDataSet",
               &Z_Registration_Info_UClass_UDS_DropDataSet.InnerSingleton,
               StaticRegisterNativesUDS_DropDataSet,0xe0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DropDataSet>,
               InternalVTableHelperCtorCaller<UDS_DropDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DropDataSet.InnerSingleton;
}

// UDS_DropDataSet @ 14b483a00

UDS_DropDataSet * __thiscall
UDS_DropDataSet::UDS_DropDataSet(UDS_DropDataSet *this,FVTableHelper *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->IsHUDOpen = false;
  *(undefined ***)this = &___7UDS_DropDataSet__6B_;
  pTVar1 = ::operator_new(0x40);
  pTVar2 = (TNode *)0x0;
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Exp = 0;
    (pTVar1->Item).MoneyType = 0;
    (pTVar1->Item).MoneyQuantity = 0;
    (pTVar1->Item).ItemID = 0;
    (pTVar1->Item).ItemQuantity = 0;
    (pTVar1->Item).QuantityByBuff = 0;
    (pTVar1->Item).PlayerSkilltype = None;
    (pTVar1->Item).DropDataType = None;
    (pTVar1->Item).IsLuckDrop = false;
    (pTVar1->Item).IsNaturalHistoryDrop = false;
    *(undefined4 *)&(pTVar1->Item).field_0x34 = 0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Exp = 0;
    (pTVar1->Item).MoneyType = 0;
    (pTVar1->Item).MoneyQuantity = 0;
    (pTVar1->Item).ItemID = 0;
    (pTVar1->Item).ItemQuantity = 0;
    (pTVar1->Item).QuantityByBuff = 0;
    (pTVar1->Item).DropDataType = None;
    (pTVar1->Item).IsLuckDrop = false;
    (pTVar1->Item).IsNaturalHistoryDrop = false;
    pTVar2 = pTVar1;
  }
  (this->DropDataQueue).Tail = pTVar2;
  (this->DropDataQueue).Head = pTVar2;
  this->QueueElapsedTime = 0.0;
  return this;
}

// ~UDS_DropDataSet @ 14b484140

void __thiscall UDS_DropDataSet::~UDS_DropDataSet(UDS_DropDataSet *this)

{
  TNode *pTVar1;
  
  *(undefined ***)this = &___7UDS_DropDataSet__6B_;
  pTVar1 = (this->DropDataQueue).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->DropDataQueue).Tail = pTVar1->NextNode;
    ::operator_delete(pTVar1,0x40);
    pTVar1 = (this->DropDataQueue).Tail;
  }
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4854a0

UClass * __cdecl UDS_DropDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DropDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DropDataSet",
               &Z_Registration_Info_UClass_UDS_DropDataSet.InnerSingleton,
               StaticRegisterNativesUDS_DropDataSet,0xe0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DropDataSet>,
               InternalVTableHelperCtorCaller<UDS_DropDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DropDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_DropDataSet @ 14b485660

void __cdecl UDS_DropDataSet::StaticRegisterNativesUDS_DropDataSet(void)

{
  return;
}

// UDS_DropDataSet @ 14ba90fa0

UDS_DropDataSet * __thiscall
UDS_DropDataSet::UDS_DropDataSet(UDS_DropDataSet *this,FObjectInitializer *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->IsHUDOpen = false;
  *(undefined ***)this = &___7UDS_DropDataSet__6B_;
  pTVar1 = ::operator_new(0x40);
  pTVar2 = (TNode *)0x0;
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Exp = 0;
    (pTVar1->Item).MoneyType = 0;
    (pTVar1->Item).MoneyQuantity = 0;
    (pTVar1->Item).ItemID = 0;
    (pTVar1->Item).ItemQuantity = 0;
    (pTVar1->Item).QuantityByBuff = 0;
    (pTVar1->Item).PlayerSkilltype = None;
    (pTVar1->Item).DropDataType = None;
    (pTVar1->Item).IsLuckDrop = false;
    (pTVar1->Item).IsNaturalHistoryDrop = false;
    *(undefined4 *)&(pTVar1->Item).field_0x34 = 0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Exp = 0;
    (pTVar1->Item).MoneyType = 0;
    (pTVar1->Item).MoneyQuantity = 0;
    (pTVar1->Item).ItemID = 0;
    (pTVar1->Item).ItemQuantity = 0;
    (pTVar1->Item).QuantityByBuff = 0;
    (pTVar1->Item).DropDataType = None;
    (pTVar1->Item).IsLuckDrop = false;
    (pTVar1->Item).IsNaturalHistoryDrop = false;
    pTVar2 = pTVar1;
  }
  (this->DropDataQueue).Tail = pTVar2;
  (this->DropDataQueue).Head = pTVar2;
  this->QueueElapsedTime = 0.0;
  return this;
}

// BindOnPacketProcessor @ 14ba94d30

void __thiscall UDS_DropDataSet::BindOnPacketProcessor(UDS_DropDataSet *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &UDS_PacketProcessor::OnExpChangeEventDelegate,this);
  TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_DropDataSet>
            ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
             &UDS_PacketProcessor::OnExpChangeEventDelegate,(UDS_DropDataSet *)&stack0x00000008,
             (pmf_66ed0a8d *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDS_PlayerService::OnPlayerExpChangeEventDelegate,this);
  TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_DropDataSet>
            ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
             &FDS_PlayerService::OnPlayerExpChangeEventDelegate,(UDS_DropDataSet *)&stack0x00000008,
             (pmf_66ed0a8d *)this);
  this->IsHUDOpen = true;
  return;
}

// GetDataAtList @ 14baa8d50

TObjectPtr<UDS_DataBase> __thiscall
UDS_DropDataSet::GetDataAtList(UDS_DropDataSet *this,int param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  TObjectPtr<UDS_DataBase> TVar4;
  uint uVar5;
  undefined4 in_register_00000014;
  TObjectPtr<UDS_DataBase>_u_0 TVar6;
  uint in_R8D;
  
  TVar6._4_4_ = in_register_00000014;
  TVar6._0_4_ = param_1;
  if (((int)in_R8D < 0) || (*(int *)&this->field_0x98 <= (int)in_R8D)) {
    (TVar6.DebugPtr)->_padding_ = 0;
  }
  else {
    uVar5 = 0;
    if ((int)in_R8D < *(int *)&this->field_0x98) {
      uVar5 = ~in_R8D >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.field0_0x0 = (TObjectPtr<UDS_DataBase>_u_0)(*pcVar2)();
        return (TObjectPtr<UDS_DataBase>)TVar4.field0_0x0;
      }
    }
    pUVar1 = *(UObject **)(*(longlong *)&this->field_0x90 + (longlong)(int)in_R8D * 8);
    (TVar6.DebugPtr)->_padding_ = (longlong)pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
      return (TObjectPtr<UDS_DataBase>)TVar6;
    }
  }
  return (TObjectPtr<UDS_DataBase>)TVar6.DebugPtr;
}

// GetDropData @ 14baa9680

TWeakObjectPtr<UDS_DropData,FWeakObjectPtr> __thiscall
UDS_DropDataSet::GetDropData(UDS_DropDataSet *this,int param_1)

{
  FObjectPtr_u_0 *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TWeakObjectPtr<UDS_DropData,FWeakObjectPtr> TVar4;
  UClass *pUVar5;
  int in_register_00000014;
  FWeakObjectPtr this_01;
  FObjectPtr_u_0 FVar6;
  uint in_R8D;
  FObjectPtr_u_0 local_res8;
  undefined8 local_res20;
  
  this_01.ObjectSerialNumber = in_register_00000014;
  this_01.ObjectIndex = param_1;
  if (((int)in_R8D < 0) || (*(int *)&this->field_0x98 <= (int)in_R8D)) {
    *(undefined8 *)this_01 = 0;
    FVar6.Handle = (UObject *)&local_res20;
    local_res20 = 0;
  }
  else {
    FVar6.Handle = (UObject *)0x0;
    uVar3 = 0;
    if ((int)in_R8D < *(int *)&this->field_0x98) {
      uVar3 = ~in_R8D >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4.WeakPtr = (FWeakObjectPtr)(*pcVar1)();
      return (TWeakObjectPtr<UDS_DropData,FWeakObjectPtr>)TVar4.WeakPtr;
    }
    this_00 = (FObjectPtr_u_0 *)(*(longlong *)&this->field_0x90 + (longlong)(int)in_R8D * 8);
    if (*(longlong *)(*(longlong *)&this->field_0x90 + (longlong)(int)in_R8D * 8) != 0) {
      pUVar5 = Z_Construct_UClass_UDS_DropData_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
      if (bVar2) {
        FVar6 = (FObjectPtr_u_0)this_00->Handle;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6.Handle != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(FVar6.Handle);
    }
    *(undefined8 *)this_01 = 0;
    local_res8 = FVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6.Handle != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(FVar6.Handle);
    }
    FVar6.Handle = (UObject *)&local_res8;
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_01,(FObjectPtr)FVar6);
  return (TWeakObjectPtr<UDS_DropData,FWeakObjectPtr>)this_01;
}

// OnChangeCharExp @ 14babe390

void __thiscall UDS_DropDataSet::OnChangeCharExp(UDS_DropDataSet *this,long64 param_1)

{
  TNode *pTVar1;
  uint uVar2;
  TNode *pTVar3;
  undefined1 local_18;
  undefined4 uStack_14;
  
  if ((0 < param_1) && (pTVar3 = ::operator_new(0x40), pTVar3 != (TNode *)0x0)) {
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).Exp = param_1;
    (pTVar3->Item).MoneyType = 0;
    (pTVar3->Item).MoneyQuantity = 0;
    (pTVar3->Item).ItemID = 0;
    uVar2 = (uint)CONCAT11(3,local_18);
    (pTVar3->Item).ItemQuantity = 0;
    (pTVar3->Item).QuantityByBuff = 0;
    (pTVar3->Item).PlayerSkilltype = (char)uVar2;
    (pTVar3->Item).DropDataType = (char)(uVar2 >> 8);
    (pTVar3->Item).IsLuckDrop = (bool)(char)(uVar2 >> 0x10);
    (pTVar3->Item).IsNaturalHistoryDrop = (bool)(char)(uVar2 >> 0x18);
    *(undefined4 *)&(pTVar3->Item).field_0x34 = uStack_14;
    pTVar1 = (this->DropDataQueue).Head;
    (this->DropDataQueue).Head = pTVar3;
    pTVar1->NextNode = pTVar3;
  }
  return;
}

// OnChangePlayerExp @ 14babe430

void __thiscall UDS_DropDataSet::OnChangePlayerExp(UDS_DropDataSet *this,long64 param_1)

{
  TNode *pTVar1;
  uint uVar2;
  TNode *pTVar3;
  undefined1 local_18;
  undefined4 uStack_14;
  
  if ((0 < param_1) && (pTVar3 = ::operator_new(0x40), pTVar3 != (TNode *)0x0)) {
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).Exp = param_1;
    (pTVar3->Item).MoneyType = 0;
    (pTVar3->Item).MoneyQuantity = 0;
    (pTVar3->Item).ItemID = 0;
    uVar2 = (uint)CONCAT11(1,local_18);
    (pTVar3->Item).ItemQuantity = 0;
    (pTVar3->Item).QuantityByBuff = 0;
    (pTVar3->Item).PlayerSkilltype = (char)uVar2;
    (pTVar3->Item).DropDataType = (char)(uVar2 >> 8);
    (pTVar3->Item).IsLuckDrop = (bool)(char)(uVar2 >> 0x10);
    (pTVar3->Item).IsNaturalHistoryDrop = (bool)(char)(uVar2 >> 0x18);
    *(undefined4 *)&(pTVar3->Item).field_0x34 = uStack_14;
    pTVar1 = (this->DropDataQueue).Head;
    (this->DropDataQueue).Head = pTVar3;
    pTVar1->NextNode = pTVar3;
  }
  return;
}

// OnChangePlayerSkillExp @ 14babe4d0

void __thiscall
UDS_DropDataSet::OnChangePlayerSkillExp
          (UDS_DropDataSet *this,EDS_PlayerSkillType param_1,long64 param_2)

{
  TNode *pTVar1;
  uint uVar2;
  TNode *pTVar3;
  undefined4 uStack_14;
  
  pTVar3 = ::operator_new(0x40);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).Exp = param_2;
    (pTVar3->Item).MoneyType = 0;
    (pTVar3->Item).MoneyQuantity = 0;
    (pTVar3->Item).ItemID = 0;
    uVar2 = (uint)CONCAT11(2,param_1);
    (pTVar3->Item).ItemQuantity = 0;
    (pTVar3->Item).QuantityByBuff = 0;
    (pTVar3->Item).PlayerSkilltype = (char)uVar2;
    (pTVar3->Item).DropDataType = (char)(uVar2 >> 8);
    (pTVar3->Item).IsLuckDrop = (bool)(char)(uVar2 >> 0x10);
    (pTVar3->Item).IsNaturalHistoryDrop = (bool)(char)(uVar2 >> 0x18);
    *(undefined4 *)&(pTVar3->Item).field_0x34 = uStack_14;
    pTVar1 = (this->DropDataQueue).Head;
    (this->DropDataQueue).Head = pTVar3;
    pTVar1->NextNode = pTVar3;
  }
  return;
}

// OnItemDropEnqueue @ 14babf910

void __thiscall
UDS_DropDataSet::OnItemDropEnqueue
          (UDS_DropDataSet *this,TArray<FDS_RewardData,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  undefined1 local_38;
  undefined4 uStack_34;
  
  iVar3 = param_1->ArrayNum;
  pFVar8 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar3 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDS_RewardData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar8 == pFVar9) break;
    iVar4 = *(int *)pFVar8;
    iVar5 = *(int *)(pFVar8 + 4);
    FVar1 = pFVar8[8];
    FVar2 = pFVar8[9];
    pTVar7 = ::operator_new(0x40);
    if (pTVar7 != (TNode *)0x0) {
      pTVar7->NextNode = (TNode *)0x0;
      (pTVar7->Item).Exp = 0;
      (pTVar7->Item).MoneyType = 0;
      (pTVar7->Item).MoneyQuantity = 0;
      (pTVar7->Item).ItemID = (longlong)iVar4;
      (pTVar7->Item).ItemQuantity = (longlong)iVar5;
      (pTVar7->Item).QuantityByBuff = 0;
      (pTVar7->Item).PlayerSkilltype = local_38;
      (pTVar7->Item).DropDataType = 5;
      (pTVar7->Item).IsLuckDrop = (bool)FVar1;
      (pTVar7->Item).IsNaturalHistoryDrop = (bool)FVar2;
      *(undefined4 *)&(pTVar7->Item).field_0x34 = uStack_34;
      pTVar6 = (this->DropDataQueue).Head;
      (this->DropDataQueue).Head = pTVar7;
      pTVar6->NextNode = pTVar7;
    }
    pFVar8 = pFVar8 + 0x10;
  }
  return;
}

// OnMoneyDropEnqueue @ 14babfc30

void __thiscall
UDS_DropDataSet::OnMoneyDropEnqueue
          (UDS_DropDataSet *this,TArray<FDS_RewardData,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  TNode *pTVar4;
  uint uVar5;
  TNode *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  undefined1 local_28;
  undefined4 uStack_24;
  
  iVar1 = param_1->ArrayNum;
  pFVar7 = (param_1->AllocatorInstance).Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_RewardData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar7 == pFVar8) break;
    iVar2 = *(int *)pFVar7;
    iVar3 = *(int *)(pFVar7 + 4);
    pTVar6 = ::operator_new(0x40);
    if (pTVar6 != (TNode *)0x0) {
      pTVar6->NextNode = (TNode *)0x0;
      (pTVar6->Item).Exp = 0;
      (pTVar6->Item).MoneyType = (longlong)iVar2;
      (pTVar6->Item).MoneyQuantity = (longlong)iVar3;
      (pTVar6->Item).ItemID = 0;
      uVar5 = (uint)CONCAT11(4,local_28);
      (pTVar6->Item).ItemQuantity = 0;
      (pTVar6->Item).QuantityByBuff = 0;
      (pTVar6->Item).PlayerSkilltype = (char)uVar5;
      (pTVar6->Item).DropDataType = (char)(uVar5 >> 8);
      (pTVar6->Item).IsLuckDrop = (bool)(char)(uVar5 >> 0x10);
      (pTVar6->Item).IsNaturalHistoryDrop = (bool)(char)(uVar5 >> 0x18);
      *(undefined4 *)&(pTVar6->Item).field_0x34 = uStack_24;
      pTVar4 = (this->DropDataQueue).Head;
      (this->DropDataQueue).Head = pTVar6;
      pTVar4->NextNode = pTVar6;
    }
    pFVar7 = pFVar7 + 0x10;
  }
  return;
}

// OnRewardResponseProcess @ 14bac2380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_DropDataSet::OnRewardResponseProcess(UDS_DropDataSet *this,ResultUiResponse *param_1)

{
  uint uVar1;
  longlong lVar2;
  TNode *pTVar3;
  bool bVar4;
  UDS_DropDataSet *pUVar5;
  UDS_LogManager *pUVar6;
  ForAnyElementType FVar7;
  TNode *pTVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FDS_RewardData *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  undefined1 auStackY_268 [32];
  FIdentityFunctor local_218 [4];
  uint local_214;
  ForAnyElementType local_210;
  uint local_208;
  uint uStack_204;
  ForAnyElementType local_200;
  uint local_1f8;
  uint uStack_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e0;
  int local_1d8;
  int iStack_1d4;
  uint3 uStack_1d0;
  undefined1 uStack_1cd;
  int iStack_1cc;
  int local_1c8;
  int iStack_1c4;
  uint3 uStack_1c0;
  undefined1 uStack_1bd;
  int iStack_1bc;
  long64 local_1b8;
  longlong lStack_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  long64 lStack_190;
  undefined1 local_188;
  undefined1 uStack_187;
  FScriptContainerElement FStack_186;
  FScriptContainerElement FStack_185;
  undefined4 uStack_184;
  longlong local_180;
  UDS_DropDataSet *local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  iVar17 = (param_1->_impl_).reward_type_;
  uVar14 = 0;
  if ((iVar17 != 8) && (iVar17 != 9)) {
    local_180 = (longlong)*(int *)&(param_1->_impl_).db_work_items_.field_0x8;
    uVar13 = (uint)(iVar17 == 6 || iVar17 == 7);
    local_210.Data = (FScriptContainerElement *)0x0;
    local_208 = 0;
    uStack_204 = 0;
    local_200.Data = (FScriptContainerElement *)0x0;
    local_1f8 = 0;
    uStack_1f4 = 0;
    uVar16 = uVar14;
    local_214 = uVar13;
    local_178 = this;
    if (0 < local_180) {
      do {
        uVar9 = *(ulonglong *)&(param_1->_impl_).db_work_items_;
        if ((uVar9 & 1) != 0) {
          uVar9 = *(ulonglong *)(uVar9 + 7 + uVar14 * 8);
        }
        iVar17 = *(int *)(uVar9 + 0x28);
        bVar4 = false;
        iVar15 = (int)uVar16;
        if (iVar17 == 9) {
          bVar4 = true;
          iVar17 = *(int *)(*(longlong *)(uVar9 + 0x20) + 0x28);
          iVar11 = *(int *)(*(longlong *)(uVar9 + 0x20) + 0x20);
LAB_14bac2541:
          if ((0 < iVar17) && (0 < iVar11)) {
            if (bVar4) {
              uStack_1d0 = (uint3)(byte)uVar13;
              local_1d8 = iVar17;
              iStack_1d4 = iVar11;
              iStack_1cc = iVar15;
              if (local_1f8 == uStack_1f4) {
                local_1f8 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x410,&local_200,(int *)&uStack_1f4);
                uVar13 = local_214;
              }
              FVar7.Data = local_200.Data;
              iVar17 = local_1d8;
              iVar11 = iStack_1d4;
              uVar18 = _uStack_1d0;
              iVar19 = iStack_1cc;
              uVar1 = local_1f8;
              local_1f8 = local_1f8 + 1;
            }
            else {
              uStack_1c0 = (uint3)(byte)uVar13;
              local_1c8 = iVar17;
              iStack_1c4 = iVar11;
              iStack_1bc = iVar15;
              if (local_208 == uStack_204) {
                local_208 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x410,&local_210,(int *)&uStack_204);
                uVar13 = local_214;
              }
              FVar7.Data = local_210.Data;
              iVar17 = local_1c8;
              iVar11 = iStack_1c4;
              uVar18 = _uStack_1c0;
              iVar19 = iStack_1bc;
              uVar1 = local_208;
              local_208 = local_208 + 1;
            }
            pFVar12 = (FDS_RewardData *)((longlong)FVar7.Data + (longlong)(int)uVar1 * 0x10);
            pFVar12->ItemTID = iVar17;
            pFVar12->Quantity = iVar11;
            pFVar12->IsLuckDrop = (bool)(char)uVar18;
            pFVar12->IsNaturalHistoryDrop = (bool)(char)((uint)uVar18 >> 8);
            pFVar12->IsCraftEffect = (bool)(char)((uint)uVar18 >> 0x10);
            pFVar12->field_0xb = (char)((uint)uVar18 >> 0x18);
            pFVar12->Priority = iVar19;
          }
        }
        else {
          if (iVar17 == 10) {
            iVar11 = 1;
            iVar17 = *(int *)(*(longlong *)(uVar9 + 0x20) + 0x58);
            goto LAB_14bac2541;
          }
          if (iVar17 == 0xb) {
            lVar2 = *(longlong *)(uVar9 + 0x20);
            local_1e8 = *(int *)(lVar2 + 0x30);
            local_1ec = *(int *)(lVar2 + 0x2c);
            local_1e0 = *(int *)(lVar2 + 0x38) + *(int *)(lVar2 + 0x34);
            local_1f0 = *(int *)(lVar2 + 0x24) + *(int *)(lVar2 + 0x28);
            iVar17 = *(int *)(lVar2 + 0x20);
            iVar11 = local_1f0 + local_1e0 + local_1e8 + local_1ec;
            pUVar6 = UDS_LogManager::GetInst();
            uVar13 = local_214;
            if (pUVar6 != (UDS_LogManager *)0x0) {
              pUVar6 = UDS_LogManager::GetInst();
              local_168._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_168,"UDS_DropDataSet::OnRewardResponseProcess",0x28,Yes);
              UDS_LogManager::PrintLog
                        (pUVar6,1,Display,local_168.Ptr,0x12f,
                         L"[DropItem] ResultUiResponse(ItemStackable) - ItemID : %d, Inven : %d, WareHouse : %d, Mount : %d"
                        );
              uVar13 = local_214;
              if ((void *)local_168._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_168._padding_);
                uVar13 = local_214;
              }
            }
            goto LAB_14bac2541;
          }
        }
        uVar14 = uVar14 + 1;
        uVar16 = (ulonglong)(iVar15 + 1);
      } while ((longlong)uVar14 < local_180);
    }
    pUVar5 = local_178;
    AlgoImpl::
    IntroSortInternal<FDS_RewardData,int,FIdentityFunctor,TDereferenceWrapper<FDS_RewardData,_UDS_DropDataSet::OnRewardResponseProcess_::__l2::<lambda_1>_>_>
              ((FDS_RewardData *)local_210.Data,local_208,local_218[0],(<lambda_1> *)local_218);
    uVar13 = local_208;
    uVar14 = (ulonglong)(int)local_208;
    pFVar12 = (FDS_RewardData *)(local_210.Data + uVar14 * 0x10);
    pFVar10 = local_210.Data + 8;
    while( true ) {
      if ((uint)uVar14 != uVar13) {
        `TCheckedPointerIterator<FDS_RewardData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_218);
      }
      uVar1 = local_1f8;
      if ((FDS_RewardData *)(pFVar10 + -8) == pFVar12) break;
      lStack_1a0 = (longlong)((FDS_RewardData *)(pFVar10 + -8))->ItemTID;
      local_198 = (longlong)*(int *)(pFVar10 + -4);
      FStack_186 = *pFVar10;
      FStack_185 = pFVar10[1];
      local_1a8 = 0;
      lStack_190 = 0;
      uStack_187 = 5;
      pTVar8 = ::operator_new(0x40);
      if (pTVar8 != (TNode *)0x0) {
        pTVar8->NextNode = (TNode *)0x0;
        (pTVar8->Item).Exp = 0;
        (pTVar8->Item).MoneyType = 0;
        (pTVar8->Item).MoneyQuantity = local_1a8;
        (pTVar8->Item).ItemID = lStack_1a0;
        (pTVar8->Item).ItemQuantity = local_198;
        (pTVar8->Item).QuantityByBuff = lStack_190;
        (pTVar8->Item).PlayerSkilltype = local_188;
        (pTVar8->Item).DropDataType = uStack_187;
        (pTVar8->Item).IsLuckDrop = (bool)FStack_186;
        (pTVar8->Item).IsNaturalHistoryDrop = (bool)FStack_185;
        *(undefined4 *)&(pTVar8->Item).field_0x34 = uStack_184;
        pTVar3 = (pUVar5->DropDataQueue).Head;
        (pUVar5->DropDataQueue).Head = pTVar8;
        pTVar3->NextNode = pTVar8;
      }
      uVar14 = (ulonglong)local_208;
      pFVar10 = pFVar10 + 0x10;
    }
    uVar14 = (ulonglong)(int)local_1f8;
    pFVar12 = (FDS_RewardData *)(local_200.Data + uVar14 * 0x10);
    FVar7.Data = local_200.Data;
    while( true ) {
      if ((uint)uVar14 != uVar1) {
        `TCheckedPointerIterator<FDS_RewardData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_218);
      }
      if ((FDS_RewardData *)FVar7.Data == pFVar12) break;
      lStack_1b0 = (longlong)((FDS_RewardData *)FVar7.Data)->ItemTID;
      local_1a8 = (longlong)((FDS_RewardData *)FVar7.Data)->Quantity;
      local_1b8 = 0;
      lStack_1a0 = 0;
      local_198 = 0;
      lStack_190 = 0;
      FStack_186 = (FScriptContainerElement)0x0;
      FStack_185 = (FScriptContainerElement)0x0;
      uStack_187 = 4;
      pTVar8 = ::operator_new(0x40);
      if (pTVar8 != (TNode *)0x0) {
        pTVar8->NextNode = (TNode *)0x0;
        (pTVar8->Item).Exp = local_1b8;
        (pTVar8->Item).MoneyType = lStack_1b0;
        (pTVar8->Item).MoneyQuantity = local_1a8;
        (pTVar8->Item).ItemID = lStack_1a0;
        (pTVar8->Item).ItemQuantity = local_198;
        (pTVar8->Item).QuantityByBuff = lStack_190;
        (pTVar8->Item).PlayerSkilltype = local_188;
        (pTVar8->Item).DropDataType = uStack_187;
        (pTVar8->Item).IsLuckDrop = (bool)FStack_186;
        (pTVar8->Item).IsNaturalHistoryDrop = (bool)FStack_185;
        *(undefined4 *)&(pTVar8->Item).field_0x34 = uStack_184;
        pTVar3 = (pUVar5->DropDataQueue).Head;
        (pUVar5->DropDataQueue).Head = pTVar8;
        pTVar3->NextNode = pTVar8;
      }
      uVar14 = (ulonglong)local_1f8;
      FVar7.Data = FVar7.Data + 0x10;
    }
    if ((FDS_RewardData *)local_200.Data != (FDS_RewardData *)0x0) {
      FMemory::Free(local_200.Data);
    }
    if ((FDS_RewardData *)local_210.Data != (FDS_RewardData *)0x0) {
      FMemory::Free(local_210.Data);
    }
  }
  return;
}

// SetDropDataDisplayStartTime @ 14bacc3a0

void __thiscall
UDS_DropDataSet::SetDropDataDisplayStartTime
          (UDS_DropDataSet *this,TWeakObjectPtr<UDS_DropData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  double dVar3;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    if (this->IsHUDOpen == false) {
      pUVar2 = FWeakObjectPtr::Get(local_res10);
      dVar3 = UDS_TimeUtilManager::GetNowUnixTimeStampDecimal();
      *(double *)&pUVar2[3].field_0x10 = dVar3;
      return;
    }
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    *(undefined8 *)&pUVar2[3].field_0x10 = 0;
  }
  return;
}

// Update @ 14bad3610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_DropDataSet::Update(UDS_DropDataSet *this,float *param_1)

{
  FObjectPtr_u_0 *this_00;
  FScriptContainerElement *pFVar1;
  double dVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UDS_WindowManager *this_01;
  UDS_LogManager *pUVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  ulong64 uVar12;
  FGuid *pFVar13;
  UDS_DataBase *pUVar14;
  UDS_EventManager *this_02;
  UDS_ItemDrop *pUVar15;
  FObjectPtr_u_0 FVar16;
  FObjectPtr_u_0 FVar17;
  ForAnyElementType FVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  uint uVar21;
  undefined1 uVar22;
  FObjectPtr_u_0 FVar23;
  double dVar24;
  double dVar25;
  longlong lVar26;
  longlong lVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStackY_498 [32];
  FWeakObjectPtr local_468;
  undefined1 local_460 [8];
  ForAnyElementType local_458;
  uint local_450;
  uint local_44c;
  FWeakObjectPtr local_448;
  FWeakObjectPtr local_440 [5];
  long64 local_418;
  long64 lStack_410;
  undefined8 local_408;
  undefined8 local_3d0;
  FGuid local_3c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_498;
  this_01 = UDS_WindowManager::GetInst();
  if (this_01 == (UDS_WindowManager *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_3b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3b8,"UDS_DropDataSet::Update",0x17,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_3b8.Ptr,0x48,L"WindowManager is nullptr");
      if ((void *)local_3b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3b8._padding_);
      }
    }
  }
  else {
    UDS_WindowManager::GetWindowInfo(this_01,(EDS_WindowWidget)local_440);
    bVar6 = FWeakObjectPtr::IsValid(local_440);
    if (bVar6) {
      pUVar10 = FWeakObjectPtr::Get(local_440);
      bVar6 = (bool)(**(code **)(*(longlong *)pUVar10 + 0x2c8))(pUVar10);
      FVar16.Handle = (UObject *)0x0;
      this->IsHUDOpen = bVar6;
      dVar25 = __real_4004000000000000;
      if (bVar6 == false) {
        iVar8 = *(int *)&this->field_0x98;
        local_458.Data = (FScriptContainerElement *)0x0;
        local_450 = 0;
        local_44c = 0;
        FVar17.Handle = FVar16.Handle;
        FVar23.Handle = FVar16.Handle;
        if (0 < (longlong)iVar8) {
          do {
            uVar21 = FVar17._0_4_;
            uVar7 = 0;
            if ((int)uVar21 < *(int *)&this->field_0x98) {
              uVar7 = ~uVar21 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            this_00 = (FObjectPtr_u_0 *)
                      (*(longlong *)&this->field_0x90 + (longlong)FVar23.Handle * 8);
            FVar17.Handle = FVar16.Handle;
            if (*(longlong *)(*(longlong *)&this->field_0x90 + (longlong)FVar23.Handle * 8) != 0) {
              pUVar11 = Z_Construct_UClass_UDS_DropData_NoRegister();
              bVar6 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar11);
              if (bVar6) {
                FVar17.Handle = this_00->Handle;
              }
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (FVar17.Handle != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(FVar17.Handle);
            }
            dVar2 = *(double *)&FVar17.Handle[3].field_0x10;
            dVar24 = UDS_TimeUtilManager::GetNowUnixTimeStampDecimal();
            if (dVar25 < dVar24 - dVar2) {
              uVar12 = UDS_DataBase::GetUniqueKey((UDS_DataBase *)FVar17.Handle);
              if (local_450 == local_44c) {
                local_450 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x808,&local_458,(int *)&local_44c);
              }
              *(ulong64 *)(local_458.Data + (longlong)(int)local_450 * 8) = uVar12;
              local_450 = local_450 + 1;
            }
            FVar17._0_4_ = uVar21 + 1;
            FVar17._4_4_ = 0;
            FVar23.Handle = (UObject *)&(FVar23.Handle)->field_0x1;
          } while ((longlong)FVar23.Handle < (longlong)iVar8);
          FVar16._4_4_ = 0;
          FVar16._0_4_ = local_450;
        }
        iVar8 = FVar16._0_4_;
        pFVar1 = local_458.Data + (longlong)iVar8 * 8;
        FVar18.Data = local_458.Data;
        while( true ) {
          if (FVar16._0_4_ != iVar8) {
            `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_460);
          }
          if (FVar18.Data == pFVar1) break;
          UDS_DataSetBase::RemoveData((UDS_DataSetBase *)this,*(ulong64 *)FVar18.Data);
          FVar16._4_4_ = 0;
          FVar16._0_4_ = local_450;
          FVar18.Data = FVar18.Data + 8;
        }
        if (local_458.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_458.Data);
        }
      }
      if ((this->QueueElapsedTime <= __real_3f000000) ||
         (((this->DropDataQueue).Tail)->NextNode == (TNode *)0x0)) {
        this->QueueElapsedTime = *param_1 + this->QueueElapsedTime;
      }
      else {
        iVar8 = DS_CommonDataHelper::DropItemMessageCount();
        if (*(int *)&this->field_0x98 < iVar8 + 1) {
          local_418 = 0;
          lVar26 = 0;
          lVar27 = 0;
          uVar28 = 0;
          uVar29 = 0;
          uVar30 = 0;
          uVar31 = 0;
          pTVar3 = ((this->DropDataQueue).Tail)->NextNode;
          uVar19 = 0;
          uVar22 = 0;
          uVar20 = 0;
          if (pTVar3 != (TNode *)0x0) {
            local_418 = (pTVar3->Item).ItemQuantity;
            lStack_410 = (pTVar3->Item).QuantityByBuff;
            pTVar4 = (this->DropDataQueue).Tail;
            local_408._0_1_ = (pTVar3->Item).PlayerSkilltype;
            local_408._1_1_ = (pTVar3->Item).DropDataType;
            local_408._2_1_ = (pTVar3->Item).IsLuckDrop;
            local_408._3_1_ = (pTVar3->Item).IsNaturalHistoryDrop;
            local_408._4_4_ = *(undefined4 *)&(pTVar3->Item).field_0x34;
            lVar26 = (pTVar3->Item).Exp;
            lVar27 = (pTVar3->Item).MoneyType;
            local_3d0 = 0;
            uVar28 = (undefined4)(pTVar3->Item).MoneyQuantity;
            uVar29 = *(undefined4 *)((longlong)&(pTVar3->Item).MoneyQuantity + 4);
            uVar30 = (undefined4)(pTVar3->Item).ItemID;
            uVar31 = *(undefined4 *)((longlong)&(pTVar3->Item).ItemID + 4);
            (this->DropDataQueue).Tail = pTVar3;
            (pTVar3->Item).Exp = 0;
            (pTVar3->Item).MoneyType = 0;
            (pTVar3->Item).MoneyQuantity = 0;
            (pTVar3->Item).ItemID = 0;
            (pTVar3->Item).ItemQuantity = 0;
            (pTVar3->Item).QuantityByBuff = 0;
            (pTVar3->Item).PlayerSkilltype = None;
            (pTVar3->Item).DropDataType = None;
            (pTVar3->Item).IsLuckDrop = false;
            (pTVar3->Item).IsNaturalHistoryDrop = false;
            *(undefined4 *)&(pTVar3->Item).field_0x34 = 0;
            ::operator_delete(pTVar4,0x40);
            uVar19 = local_408._3_1_;
            uVar22 = local_408._2_1_;
            uVar20 = local_408._1_1_;
          }
          pFVar13 = FGuid::NewGuid(&local_3c8);
          uVar12 = CityHash64((char *)pFVar13,0x10);
          UDS_DropData::GetData
                    ((ulong64)&local_468,UDS_PlayerData::MainPlayerEntityID,SUB81(uVar12,0));
          bVar6 = FWeakObjectPtr::IsValid(&local_468);
          if (bVar6) {
            pUVar10 = FWeakObjectPtr::Get(&local_468);
            (**(code **)(*(longlong *)pUVar10 + 0x2c8))(pUVar10);
            local_448 = local_468;
            bVar6 = FWeakObjectPtr::IsValid(&local_448);
            if (bVar6) {
              if (this->IsHUDOpen == false) {
                pUVar10 = FWeakObjectPtr::Get(&local_448);
                dVar25 = UDS_TimeUtilManager::GetNowUnixTimeStampDecimal();
                *(double *)&pUVar10[3].field_0x10 = dVar25;
              }
              else {
                pUVar10 = FWeakObjectPtr::Get(&local_448);
                *(undefined8 *)&pUVar10[3].field_0x10 = 0;
              }
            }
            pUVar14 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_468);
            pUVar14[1]._padding_ = lVar26;
            UDS_DataBase::SetIsDirty(pUVar14,true);
            pUVar14 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_468);
            *(undefined4 *)&pUVar14[1]._padding_ = uVar30;
            *(undefined4 *)((longlong)&pUVar14[1]._padding_ + 4) = uVar31;
            UDS_DataBase::SetIsDirty(pUVar14,true);
            pUVar14 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_468);
            *(undefined4 *)&pUVar14[1]._padding_ = (undefined4)local_418;
            UDS_DataBase::SetIsDirty(pUVar14,true);
            pUVar14 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_468);
            pUVar14[1]._padding_ = lVar27;
            UDS_DataBase::SetIsDirty(pUVar14,true);
            pUVar14 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_468);
            pUVar14[1]._padding_ = CONCAT44(uVar29,uVar28);
            UDS_DataBase::SetIsDirty(pUVar14,true);
            pUVar14 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_468);
            *(undefined1 *)&pUVar14[1].OnDirty = uVar22;
            UDS_DataBase::SetIsDirty(pUVar14,true);
            pUVar14 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_468);
            pUVar14[1].OnDirty.field_0x1 = uVar19;
            UDS_DataBase::SetIsDirty(pUVar14,true);
            pUVar14 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_468);
            pUVar14[1].OnDirty.field_0x2 = uVar20;
            UDS_DataBase::SetIsDirty(pUVar14,true);
            pUVar14 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_468);
            pUVar14[1].OnDirty.field_0x3 = (undefined1)local_408;
            UDS_DataBase::SetIsDirty(pUVar14,true);
            this_02 = UDS_EventManager::GetInst();
            if (this_02 != (UDS_EventManager *)0x0) {
              if ((char)this_02->_padding_ == '\x01') {
                pUVar9 = UDS_LogManager::GetInst();
                if (pUVar9 != (UDS_LogManager *)0x0) {
                  pUVar9 = UDS_LogManager::GetInst();
                  local_178._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_178,"UDS_EventManager::GetEvent",0x1a,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar9,1,Warning,local_178.Ptr,0x31,
                             L"Cannot access event during UDS_EventManager destruction.");
                  if ((void *)local_178._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_178._padding_);
                    this->QueueElapsedTime = 0.0;
                    return;
                  }
                }
              }
              else {
                pUVar15 = UDS_EventManager::GetEventInternal<UDS_ItemDrop>(this_02);
                if (pUVar15 != (UDS_ItemDrop *)0x0) {
                  bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                     &pUVar15->OnDropDataChanged);
                  if (bVar6) {
                    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                              (&(pUVar15->OnDropDataChanged).Delegate);
                  }
                }
              }
            }
          }
          this->QueueElapsedTime = 0.0;
        }
      }
    }
    else {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_298._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_298,"UDS_DropDataSet::Update",0x17,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_298.Ptr,0x50,L"windowInfo is nullptr");
        if ((void *)local_298._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_298._padding_);
        }
      }
    }
  }
  return;
}

