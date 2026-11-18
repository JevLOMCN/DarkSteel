// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b427150

UClass * __cdecl UDS_BubbleTalkManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_BubbleTalkManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_BubbleTalkManager",
               &Z_Registration_Info_UClass_UDS_BubbleTalkManager.InnerSingleton,
               StaticRegisterNativesUDS_BubbleTalkManager,0x100,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_BubbleTalkManager>,
               InternalVTableHelperCtorCaller<UDS_BubbleTalkManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_BubbleTalkManager.InnerSingleton;
}

// UDS_BubbleTalkManager @ 14b42ace0

UDS_BubbleTalkManager * __thiscall
UDS_BubbleTalkManager::UDS_BubbleTalkManager(UDS_BubbleTalkManager *this,FVTableHelper *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  pTVar2 = (TNode *)0x0;
  *(undefined ***)this = &___7UDS_BubbleTalkManager__6B_;
  *(undefined8 *)&this->BubbleTalkIDMap = 0;
  *(undefined8 *)&(this->BubbleTalkIDMap).field_0x8 = 0;
  *(undefined8 *)&(this->BubbleTalkIDMap).field_0x20 = 0;
  *(undefined4 *)&(this->BubbleTalkIDMap).field_0x28 = 0;
  *(undefined4 *)&(this->BubbleTalkIDMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BubbleTalkIDMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BubbleTalkIDMap).field_0x34 = 0;
  *(undefined8 *)&(this->BubbleTalkIDMap).field_0x40 = 0;
  *(undefined4 *)&(this->BubbleTalkIDMap).field_0x48 = 0;
  pTVar1 = ::operator_new(0x10);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    pTVar1->Item = 0;
    pTVar1->NextNode = (TNode *)0x0;
    pTVar2 = pTVar1;
  }
  (this->ReservedBubbleTalkQueue).Tail = pTVar2;
  (this->ReservedBubbleTalkQueue).Head = pTVar2;
  *(undefined8 *)&this->RunningBubbleTalkMap = 0;
  *(undefined8 *)&(this->RunningBubbleTalkMap).field_0x8 = 0;
  *(undefined8 *)&(this->RunningBubbleTalkMap).field_0x20 = 0;
  *(undefined4 *)&(this->RunningBubbleTalkMap).field_0x28 = 0;
  *(undefined4 *)&(this->RunningBubbleTalkMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RunningBubbleTalkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RunningBubbleTalkMap).field_0x34 = 0;
  *(undefined8 *)&(this->RunningBubbleTalkMap).field_0x40 = 0;
  *(undefined4 *)&(this->RunningBubbleTalkMap).field_0x48 = 0;
  this->MaxBubbleTalkCount = 1;
  (this->BubbleTalkTimerHandle).Handle = 0;
  this->BubbleTalkTimerInterval = 1;
  return this;
}

// UDS_BubbleTalkManager @ 14b42add0

UDS_BubbleTalkManager * __thiscall
UDS_BubbleTalkManager::UDS_BubbleTalkManager
          (UDS_BubbleTalkManager *this,FObjectInitializer *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  pTVar2 = (TNode *)0x0;
  *(undefined ***)this = &___7UDS_BubbleTalkManager__6B_;
  *(undefined8 *)&this->BubbleTalkIDMap = 0;
  *(undefined8 *)&(this->BubbleTalkIDMap).field_0x8 = 0;
  *(undefined8 *)&(this->BubbleTalkIDMap).field_0x20 = 0;
  *(undefined4 *)&(this->BubbleTalkIDMap).field_0x28 = 0;
  *(undefined4 *)&(this->BubbleTalkIDMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BubbleTalkIDMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BubbleTalkIDMap).field_0x34 = 0;
  *(undefined8 *)&(this->BubbleTalkIDMap).field_0x40 = 0;
  *(undefined4 *)&(this->BubbleTalkIDMap).field_0x48 = 0;
  pTVar1 = ::operator_new(0x10);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    pTVar1->Item = 0;
    pTVar1->NextNode = (TNode *)0x0;
    pTVar2 = pTVar1;
  }
  (this->ReservedBubbleTalkQueue).Tail = pTVar2;
  (this->ReservedBubbleTalkQueue).Head = pTVar2;
  *(undefined8 *)&this->RunningBubbleTalkMap = 0;
  *(undefined8 *)&(this->RunningBubbleTalkMap).field_0x8 = 0;
  *(undefined8 *)&(this->RunningBubbleTalkMap).field_0x20 = 0;
  *(undefined4 *)&(this->RunningBubbleTalkMap).field_0x28 = 0;
  *(undefined4 *)&(this->RunningBubbleTalkMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RunningBubbleTalkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RunningBubbleTalkMap).field_0x34 = 0;
  *(undefined8 *)&(this->RunningBubbleTalkMap).field_0x40 = 0;
  *(undefined4 *)&(this->RunningBubbleTalkMap).field_0x48 = 0;
  this->MaxBubbleTalkCount = 1;
  (this->BubbleTalkTimerHandle).Handle = 0;
  this->BubbleTalkTimerInterval = 1;
  return this;
}

// ~UDS_BubbleTalkManager @ 14b42b740

void __thiscall UDS_BubbleTalkManager::~UDS_BubbleTalkManager(UDS_BubbleTalkManager *this)

{
  void *pvVar1;
  TNode *pTVar2;
  
  *(undefined ***)this = &___7UDS_BubbleTalkManager__6B_;
  *(undefined4 *)&(this->RunningBubbleTalkMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RunningBubbleTalkMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RunningBubbleTalkMap);
  pTVar2 = (this->ReservedBubbleTalkQueue).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->ReservedBubbleTalkQueue).Tail = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x10);
    pTVar2 = (this->ReservedBubbleTalkQueue).Tail;
  }
  *(undefined4 *)&(this->BubbleTalkIDMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BubbleTalkIDMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BubbleTalkIDMap);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b42dbc0

UClass * __cdecl UDS_BubbleTalkManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_BubbleTalkManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_BubbleTalkManager",
               &Z_Registration_Info_UClass_UDS_BubbleTalkManager.InnerSingleton,
               StaticRegisterNativesUDS_BubbleTalkManager,0x100,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_BubbleTalkManager>,
               InternalVTableHelperCtorCaller<UDS_BubbleTalkManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_BubbleTalkManager.InnerSingleton;
}

// StaticRegisterNativesUDS_BubbleTalkManager @ 14b42e270

void __cdecl UDS_BubbleTalkManager::StaticRegisterNativesUDS_BubbleTalkManager(void)

{
  return;
}

// CancelRunningBubbleTalk @ 14ba95a60

void __thiscall
UDS_BubbleTalkManager::CancelRunningBubbleTalk(UDS_BubbleTalkManager *this,ulong64 param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong64 local_res8 [4];
  
  uVar4 = (int)(param_1 >> 0x20) * 0x17 + (int)param_1;
  if (*(int *)&(this->RunningBubbleTalkMap).field_0x8 !=
      *(int *)&(this->RunningBubbleTalkMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->RunningBubbleTalkMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->RunningBubbleTalkMap).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->RunningBubbleTalkMap).field_0x48 - 1U & uVar4) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->RunningBubbleTalkMap).field_0x0;
      while (*(ulong64 *)(lVar1 + (longlong)iVar2 * 0x18) != param_1) {
        iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18);
        if (iVar2 == -1) {
          return;
        }
      }
      local_res8[0] = param_1;
      TSet<TTuple<unsigned___int64,FDateTime>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDateTime,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                ((TSet<TTuple<unsigned___int64,FDateTime>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDateTime,0>,FDefaultSetAllocator>
                  *)&this->RunningBubbleTalkMap,uVar4,local_res8);
    }
  }
  return;
}

// CheckEntityID @ 14ba96840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_BubbleTalkManager::CheckEntityID(UDS_BubbleTalkManager *this,ulong64 param_1)

{
  TMap<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>_>
  *this_00;
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  FWeakObjectPtr *this_01;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 auStackY_188 [32];
  ulong64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = &this->BubbleTalkIDMap;
  uVar5 = (int)(param_1 >> 0x20) * 0x17 + (int)param_1;
  if (*(int *)&(this->BubbleTalkIDMap).field_0x8 != *(int *)&(this->BubbleTalkIDMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->BubbleTalkIDMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->BubbleTalkIDMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->BubbleTalkIDMap).field_0x48 - 1U & uVar5)
                              * 4);
    local_148[0] = param_1;
    if (iVar2 != -1) {
      do {
        if (*(ulong64 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x18) == param_1) {
          this_01 = &TMapBase<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>_>
                     ::FindChecked((TMapBase<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>_>
                                    *)this_00,param_1)->WeakPtr;
          bVar1 = FWeakObjectPtr::IsValid(this_01);
          if (bVar1) {
            return true;
          }
          if (*(int *)&(this->BubbleTalkIDMap).field_0x8 !=
              *(int *)&(this->BubbleTalkIDMap).field_0x34) {
            TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::RemoveImpl<unsigned___int64>
                      ((TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                        *)this_00,uVar5,local_148);
          }
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_BubbleTalkManager::CheckEntityID",0x24,Yes);
          uVar5 = 0xba;
          goto LAB_14ba96931;
        }
        iVar2 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
    TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)this_00,uVar5,local_148);
  }
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_BubbleTalkManager::CheckEntityID",0x24,Yes);
    uVar5 = 0xb4;
LAB_14ba96931:
    UDS_LogManager::PrintLog(pUVar3,1,Display,local_138.Ptr,uVar5,L"Invalid BubbleTalkID: %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return false;
}

// Created @ 14ba9d160

void __thiscall UDS_BubbleTalkManager::Created(UDS_BubbleTalkManager *this)

{
  this->field_0x28 = 0;
  return;
}

// Destroyed @ 14ba9e590

void __thiscall UDS_BubbleTalkManager::Destroyed(UDS_BubbleTalkManager *this)

{
  return;
}

// GetInst @ 14baab2f0

UDS_BubbleTalkManager * __cdecl UDS_BubbleTalkManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_BubbleTalkManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_BubbleTalkManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_BubbleTalkManager_NoRegister();
  pUVar3 = (UDS_BubbleTalkManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_BubbleTalkManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_BubbleTalkManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_BubbleTalkManager *)0x0;
}

// Init @ 14bab3830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_BubbleTalkManager::Init(UDS_BubbleTalkManager *this)

{
  int iVar1;
  FTimerManager *this_00;
  
  (**(code **)(*(longlong *)this + 0x2d0))();
  iVar1 = DS_CommonDataHelper::BubbleTalkOutputLimit();
  this->MaxBubbleTalkCount = iVar1;
  iVar1 = DS_CommonDataHelper::BubbleTalkCoolTimeNonBattleCheck();
  this->BubbleTalkTimerInterval = iVar1;
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  FTimerManager::SetTimer<UDS_BubbleTalkManager>
            (this_00,&this->BubbleTalkTimerHandle,this,(pmf_0ec9060c)0x14babe0f0,
             (float)this->BubbleTalkTimerInterval,true,__real_bf800000);
  return;
}

// OnBubbleTalkTimer @ 14babe0f0

void __thiscall UDS_BubbleTalkManager::OnBubbleTalkTimer(UDS_BubbleTalkManager *this)

{
  TMap<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>_>
  *this_00;
  undefined1 *puVar1;
  ulong64 uVar2;
  TNode *pTVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FWeakObjectPtr *this_01;
  UDS_NPCBubbleTalkAbilityData *this_02;
  TNode *pTVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong local_res8;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  this_00 = &this->BubbleTalkIDMap;
  TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)this_00);
  local_20 = 0;
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar10 = local_88._24_8_ >> 0x20;
  uVar11 = local_88._28_4_;
  local_28 = (TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)this_00;
  if ((int)uVar11 < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      plVar5 = local_58;
      bVar6 = FWeakObjectPtr::IsValid
                        ((FWeakObjectPtr *)(*local_58 + ((longlong)(int)uVar10 * 3 + 1) * 8));
      if (bVar6) {
        uVar2 = *(ulong64 *)(*plVar5 + (longlong)(int)uVar11 * 0x18);
        bVar6 = CheckEntityID(this,uVar2);
        if (bVar6) {
          this_01 = &TMapBase<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>_>
                     ::FindChecked((TMapBase<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>_>
                                    *)this_00,uVar2)->WeakPtr;
          this_02 = (UDS_NPCBubbleTalkAbilityData *)FWeakObjectPtr::Get(this_01);
          bVar6 = UDS_NPCBubbleTalkAbilityData::CanRequestBubbleTalk(this_02);
          if (bVar6) {
            if (*(int *)&(this->RunningBubbleTalkMap).field_0x8 -
                *(int *)&(this->RunningBubbleTalkMap).field_0x34 < this->MaxBubbleTalkCount) {
              TryExecuteBubbleTalk(this,uVar2);
            }
            else {
              pTVar9 = ::operator_new(0x10);
              if (pTVar9 != (TNode *)0x0) {
                pTVar9->NextNode = (TNode *)0x0;
                pTVar9->Item = uVar2;
                pTVar3 = (this->ReservedBubbleTalkQueue).Head;
                (this->ReservedBubbleTalkQueue).Head = pTVar9;
                pTVar3->NextNode = pTVar9;
              }
            }
          }
        }
      }
      else {
        uVar10 = *(ulonglong *)(*plVar5 + (longlong)(int)uVar11 * 0x18);
        iVar8 = *(int *)&(this->BubbleTalkIDMap).field_0x8;
        if (iVar8 != *(int *)&(this->BubbleTalkIDMap).field_0x34) {
          puVar1 = *(undefined1 **)&(this->BubbleTalkIDMap).field_0x40;
          puVar12 = &(this->BubbleTalkIDMap).field_0x38;
          if (puVar1 != (undefined1 *)0x0) {
            puVar12 = puVar1;
          }
          iVar7 = *(int *)(puVar12 +
                          ((uVar10 >> 0x20) * 0x17 + uVar10 &
                          (ulonglong)(*(int *)&(this->BubbleTalkIDMap).field_0x48 - 1)) * 4);
          if (iVar7 != -1) {
            do {
              if (*(ulonglong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar7 * 0x18) ==
                  uVar10) {
                local_res8 = uVar10;
                if (iVar8 != *(int *)&(this->BubbleTalkIDMap).field_0x34) {
                  TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  ::RemoveImpl<unsigned___int64>
                            ((TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                              *)this_00,(int)(uVar10 >> 0x20) * 0x17 + (int)uVar10,&local_res8);
                }
                break;
              }
              iVar7 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar7 * 0x18);
            } while (iVar7 != -1);
          }
        }
      }
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar10 = (ulonglong)uStack_3c;
      uVar11 = uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
      uVar11 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar11 < 4) {
        iVar8 = 1;
      }
      else {
        uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar8 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((0 < (int)uVar11) && (local_28->HashSize < iVar8)) || (iVar8 < local_28->HashSize)) {
        local_28->HashSize = iVar8;
        TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// RegisterBubbleTalk @ 14bac3e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_BubbleTalkManager::RegisterBubbleTalk(UDS_BubbleTalkManager *this,ulong64 param_1)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  undefined1 *puVar4;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_160;
  TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr> local_158;
  TPairInitializer<unsigned___int64_const_&,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_&>
  local_150;
  TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr> *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_160 = (FWeakObjectPtr)param_1;
  UDS_AbilityDataSet::GetAbilityData<UDS_NPCBubbleTalkAbilityData>
            ((ulong64 *)&local_158,(EDS_AbilityTagType *)&local_160);
  bVar1 = TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&local_158,(void *)0x0);
  if (bVar1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_BubbleTalkManager::RegisterBubbleTalk",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x52,L"AirWalkAbilityData is nullptr. (%d)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (*(int *)&(this->BubbleTalkIDMap).field_0x8 != *(int *)&(this->BubbleTalkIDMap).field_0x34) {
      puVar4 = *(undefined1 **)&(this->BubbleTalkIDMap).field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(this->BubbleTalkIDMap).field_0x38;
      }
      iVar2 = *(int *)(puVar4 + (((ulonglong)local_160 >> 0x20) * 0x17 + (longlong)local_160 &
                                (ulonglong)(*(int *)&(this->BubbleTalkIDMap).field_0x48 - 1)) * 4);
      if (iVar2 != -1) {
        do {
          if (*(FWeakObjectPtr *)(*(longlong *)&this->BubbleTalkIDMap + (longlong)iVar2 * 0x18) ==
              local_160) {
            return;
          }
          iVar2 = *(int *)(*(longlong *)&this->BubbleTalkIDMap + 0x10 + (longlong)iVar2 * 0x18);
        } while (iVar2 != -1);
      }
    }
    local_150.Value = (TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr> *)&local_160;
    local_140 = &local_158;
    TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned___int64_const_&,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_&>_>
              ((TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)&this->BubbleTalkIDMap,&local_150,(bool *)&local_150.Value);
  }
  return;
}

// Reset @ 14bac95d0

void __thiscall UDS_BubbleTalkManager::Reset(UDS_BubbleTalkManager *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           *)&this->BubbleTalkIDMap);
  TSet<TTuple<unsigned___int64,FDateTime>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDateTime,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned___int64,FDateTime>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDateTime,0>,FDefaultSetAllocator>
           *)&this->RunningBubbleTalkMap);
  while (pTVar1 = ((this->ReservedBubbleTalkQueue).Tail)->NextNode, pTVar1 != (TNode *)0x0) {
    pTVar2 = (this->ReservedBubbleTalkQueue).Tail;
    (this->ReservedBubbleTalkQueue).Tail = pTVar1;
    pTVar1->Item = 0;
    ::operator_delete(pTVar2,0x10);
  }
  return;
}

// TryExecuteBubbleTalk @ 14bacf110

void __thiscall
UDS_BubbleTalkManager::TryExecuteBubbleTalk(UDS_BubbleTalkManager *this,ulong64 param_1)

{
  bool bVar1;
  int iVar2;
  FWeakObjectPtr *pFVar3;
  UDS_NPCBubbleTalkAbilityData *pUVar4;
  FDateTime FVar5;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar6 [16];
  ulong64 local_res10;
  TPairInitializer<unsigned___int64_const_&,FDateTime_&> local_res18;
  ulong64 *local_28;
  FDateTime **local_20;
  
  local_res10 = param_1;
  bVar1 = CheckEntityID(this,param_1);
  if (bVar1) {
    pFVar3 = &TMapBase<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>_>
              ::FindChecked((TMapBase<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>_>
                             *)&this->BubbleTalkIDMap,local_res10)->WeakPtr;
    pUVar4 = (UDS_NPCBubbleTalkAbilityData *)FWeakObjectPtr::Get(pFVar3);
    bVar1 = UDS_NPCBubbleTalkAbilityData::UpdateNextBubbleTalk(pUVar4);
    if (bVar1) {
      FVar5 = UDS_TimeUtilManager::GetCurrentServerDateTime();
      pFVar3 = &TMapBase<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>_>
                ::FindChecked((TMapBase<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>_>
                               *)&this->BubbleTalkIDMap,local_res10)->WeakPtr;
      pUVar4 = (UDS_NPCBubbleTalkAbilityData *)FWeakObjectPtr::Get(pFVar3);
      iVar2 = UDS_NPCBubbleTalkAbilityData::GetBubbleTalkGroupCoolTime(pUVar4);
      local_28 = &local_res10;
      local_20 = &local_res18.Value;
      auVar6._0_8_ = (double)iVar2 * __real_416312d000000000 + __real_3fe0000000000000;
      auVar6._8_8_ = 0;
      auVar6 = roundpd(extraout_XMM0,auVar6,1);
      local_res18.Value = (FDateTime *)((longlong)auVar6._0_8_ + *(longlong *)FVar5.Ticks);
      TSet<TTuple<unsigned___int64,FDateTime>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDateTime,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,FDateTime_&>_>
                ((TSet<TTuple<unsigned___int64,FDateTime>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDateTime,0>,FDefaultSetAllocator>
                  *)&this->RunningBubbleTalkMap,&local_res18,(bool *)&local_28);
      pFVar3 = &TMapBase<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>_>
                ::FindChecked((TMapBase<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>_>
                               *)&this->BubbleTalkIDMap,local_res10)->WeakPtr;
      pUVar4 = (UDS_NPCBubbleTalkAbilityData *)FWeakObjectPtr::Get(pFVar3);
      UDS_NPCBubbleTalkAbilityData::ExecuteBubbleTalk(pUVar4);
    }
  }
  return;
}

// TryRequestBubbleTalk @ 14bacfd00

bool __thiscall
UDS_BubbleTalkManager::TryRequestBubbleTalk(UDS_BubbleTalkManager *this,ulong64 param_1)

{
  TNode *pTVar1;
  bool bVar2;
  FWeakObjectPtr *this_00;
  UDS_NPCBubbleTalkAbilityData *this_01;
  TNode *pTVar3;
  
  bVar2 = CheckEntityID(this,param_1);
  if (bVar2) {
    this_00 = &TMapBase<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>_>
               ::FindChecked((TMapBase<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>_>
                              *)&this->BubbleTalkIDMap,param_1)->WeakPtr;
    this_01 = (UDS_NPCBubbleTalkAbilityData *)FWeakObjectPtr::Get(this_00);
    bVar2 = UDS_NPCBubbleTalkAbilityData::CanRequestBubbleTalk(this_01);
    if (bVar2) {
      if (*(int *)&(this->RunningBubbleTalkMap).field_0x8 -
          *(int *)&(this->RunningBubbleTalkMap).field_0x34 < this->MaxBubbleTalkCount) {
        TryExecuteBubbleTalk(this,param_1);
        return true;
      }
      pTVar3 = ::operator_new(0x10);
      if (pTVar3 != (TNode *)0x0) {
        pTVar3->NextNode = (TNode *)0x0;
        pTVar3->Item = param_1;
        pTVar1 = (this->ReservedBubbleTalkQueue).Head;
        (this->ReservedBubbleTalkQueue).Head = pTVar3;
        pTVar1->NextNode = pTVar3;
      }
    }
  }
  return false;
}

// UnRegisterBubbleTalk @ 14bad0070

void __thiscall
UDS_BubbleTalkManager::UnRegisterBubbleTalk(UDS_BubbleTalkManager *this,ulong64 param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong64 local_res8 [4];
  
  uVar4 = (int)(param_1 >> 0x20) * 0x17 + (int)param_1;
  if (*(int *)&(this->BubbleTalkIDMap).field_0x8 != *(int *)&(this->BubbleTalkIDMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->BubbleTalkIDMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->BubbleTalkIDMap).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(*(int *)&(this->BubbleTalkIDMap).field_0x48 - 1U & uVar4)
                              * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->BubbleTalkIDMap).field_0x0;
      while (*(ulong64 *)(lVar1 + (longlong)iVar2 * 0x18) != param_1) {
        iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18);
        if (iVar2 == -1) {
          return;
        }
      }
      local_res8[0] = param_1;
      TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                ((TSet<TTuple<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  *)&this->BubbleTalkIDMap,uVar4,local_res8);
    }
  }
  return;
}

// Update @ 14bad2f30

void __thiscall UDS_BubbleTalkManager::Update(UDS_BubbleTalkManager *this,float *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  int iVar3;
  ulong64 uVar4;
  undefined1 *puVar5;
  
  if ((((this->ReservedBubbleTalkQueue).Tail)->NextNode != (TNode *)0x0) &&
     (*(int *)&(this->RunningBubbleTalkMap).field_0x8 -
      *(int *)&(this->RunningBubbleTalkMap).field_0x34 < this->MaxBubbleTalkCount)) {
    uVar4 = 0xffffffffffffffff;
    pTVar1 = ((this->ReservedBubbleTalkQueue).Tail)->NextNode;
    if (pTVar1 != (TNode *)0x0) {
      uVar4 = pTVar1->Item;
      pTVar2 = (this->ReservedBubbleTalkQueue).Tail;
      (this->ReservedBubbleTalkQueue).Tail = pTVar1;
      pTVar1->Item = 0;
      ::operator_delete(pTVar2,0x10);
    }
    if (*(int *)&(this->BubbleTalkIDMap).field_0x8 != *(int *)&(this->BubbleTalkIDMap).field_0x34) {
      puVar5 = *(undefined1 **)&(this->BubbleTalkIDMap).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->BubbleTalkIDMap).field_0x38;
      }
      iVar3 = *(int *)(puVar5 + ((uVar4 >> 0x20) * 0x17 + uVar4 &
                                (ulonglong)(*(int *)&(this->BubbleTalkIDMap).field_0x48 - 1)) * 4);
      if (iVar3 != -1) {
        while (*(ulonglong *)(*(longlong *)&this->BubbleTalkIDMap + (longlong)iVar3 * 0x18) != uVar4
              ) {
          iVar3 = *(int *)(*(longlong *)&this->BubbleTalkIDMap + 0x10 + (longlong)iVar3 * 0x18);
          if (iVar3 == -1) {
            return;
          }
        }
        TryExecuteBubbleTalk(this,uVar4);
      }
    }
  }
  return;
}

