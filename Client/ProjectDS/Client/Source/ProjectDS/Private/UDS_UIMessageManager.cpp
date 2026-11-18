// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 35

// StaticClass @ 14b5c2410

UClass * __cdecl UDS_UIMessageManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_UIMessageManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_UIMessageManager",
               &Z_Registration_Info_UClass_UDS_UIMessageManager.InnerSingleton,
               StaticRegisterNativesUDS_UIMessageManager,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_UIMessageManager>,
               InternalVTableHelperCtorCaller<UDS_UIMessageManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_UIMessageManager.InnerSingleton;
}

// UDS_UIMessageManager @ 14b5c7d40

UDS_UIMessageManager * __thiscall
UDS_UIMessageManager::UDS_UIMessageManager(UDS_UIMessageManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_UIMessageManager__6B_;
  *(undefined8 *)&this->MsgQueueMap = 0;
  *(undefined8 *)&(this->MsgQueueMap).field_0x8 = 0;
  *(undefined8 *)&(this->MsgQueueMap).field_0x20 = 0;
  *(undefined4 *)&(this->MsgQueueMap).field_0x28 = 0;
  *(undefined4 *)&(this->MsgQueueMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MsgQueueMap).field_0x34 = 0;
  *(undefined4 *)&(this->MsgQueueMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MsgQueueMap).field_0x40 = 0;
  *(undefined4 *)&(this->MsgQueueMap).field_0x48 = 0;
  *(undefined8 *)&this->CurMsgMap = 0;
  *(undefined8 *)&(this->CurMsgMap).field_0x8 = 0;
  *(undefined8 *)&(this->CurMsgMap).field_0x20 = 0;
  *(undefined4 *)&(this->CurMsgMap).field_0x28 = 0;
  *(undefined4 *)&(this->CurMsgMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurMsgMap).field_0x34 = 0;
  *(undefined4 *)&(this->CurMsgMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurMsgMap).field_0x40 = 0;
  *(undefined4 *)&(this->CurMsgMap).field_0x48 = 0;
  *(undefined8 *)&this->LastMsgTimeMap = 0;
  *(undefined8 *)&(this->LastMsgTimeMap).field_0x8 = 0;
  *(undefined8 *)&(this->LastMsgTimeMap).field_0x20 = 0;
  *(undefined4 *)&(this->LastMsgTimeMap).field_0x28 = 0;
  *(undefined4 *)&(this->LastMsgTimeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LastMsgTimeMap).field_0x34 = 0;
  *(undefined4 *)&(this->LastMsgTimeMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LastMsgTimeMap).field_0x40 = 0;
  *(undefined4 *)&(this->LastMsgTimeMap).field_0x48 = 0;
  return this;
}

// UDS_UIMessageManager @ 14b5c7e20

UDS_UIMessageManager * __thiscall
UDS_UIMessageManager::UDS_UIMessageManager(UDS_UIMessageManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_UIMessageManager__6B_;
  *(undefined8 *)&this->MsgQueueMap = 0;
  *(undefined8 *)&(this->MsgQueueMap).field_0x8 = 0;
  *(undefined8 *)&(this->MsgQueueMap).field_0x20 = 0;
  *(undefined4 *)&(this->MsgQueueMap).field_0x28 = 0;
  *(undefined4 *)&(this->MsgQueueMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MsgQueueMap).field_0x34 = 0;
  *(undefined4 *)&(this->MsgQueueMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MsgQueueMap).field_0x40 = 0;
  *(undefined4 *)&(this->MsgQueueMap).field_0x48 = 0;
  *(undefined8 *)&this->CurMsgMap = 0;
  *(undefined8 *)&(this->CurMsgMap).field_0x8 = 0;
  *(undefined8 *)&(this->CurMsgMap).field_0x20 = 0;
  *(undefined4 *)&(this->CurMsgMap).field_0x28 = 0;
  *(undefined4 *)&(this->CurMsgMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurMsgMap).field_0x34 = 0;
  *(undefined4 *)&(this->CurMsgMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurMsgMap).field_0x40 = 0;
  *(undefined4 *)&(this->CurMsgMap).field_0x48 = 0;
  *(undefined8 *)&this->LastMsgTimeMap = 0;
  *(undefined8 *)&(this->LastMsgTimeMap).field_0x8 = 0;
  *(undefined8 *)&(this->LastMsgTimeMap).field_0x20 = 0;
  *(undefined4 *)&(this->LastMsgTimeMap).field_0x28 = 0;
  *(undefined4 *)&(this->LastMsgTimeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LastMsgTimeMap).field_0x34 = 0;
  *(undefined4 *)&(this->LastMsgTimeMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LastMsgTimeMap).field_0x40 = 0;
  *(undefined4 *)&(this->LastMsgTimeMap).field_0x48 = 0;
  return this;
}

// ~UDS_UIMessageManager @ 14b5c90d0

void __thiscall UDS_UIMessageManager::~UDS_UIMessageManager(UDS_UIMessageManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_UIMessageManager__6B_;
  *(undefined4 *)&(this->LastMsgTimeMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LastMsgTimeMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<__int64,enum_EDS_MessageType>,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<__int64,enum_EDS_MessageType>,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->LastMsgTimeMap);
  *(undefined4 *)&(this->CurMsgMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurMsgMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageType,FDS_UIMessageInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageType,FDS_UIMessageInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->CurMsgMap);
  *(undefined4 *)&(this->MsgQueueMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MsgQueueMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageType,TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageType,TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->MsgQueueMap);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cca80

UClass * __cdecl UDS_UIMessageManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_UIMessageManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_UIMessageManager",
               &Z_Registration_Info_UClass_UDS_UIMessageManager.InnerSingleton,
               StaticRegisterNativesUDS_UIMessageManager,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_UIMessageManager>,
               InternalVTableHelperCtorCaller<UDS_UIMessageManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_UIMessageManager.InnerSingleton;
}

// StaticRegisterNativesUDS_UIMessageManager @ 14b5ce140

void __cdecl UDS_UIMessageManager::StaticRegisterNativesUDS_UIMessageManager(void)

{
  return;
}

// AddChattingMsg @ 14bb4f370

void __thiscall
UDS_UIMessageManager::AddChattingMsg
          (UDS_UIMessageManager *this,EDS_ChattingType param_1,FString *param_2)

{
  UDS_ChattingManager *pUVar1;
  
  if ((param_1 != None) &&
     (pUVar1 = UDS_ChattingManager::GetInst(), pUVar1 != (UDS_ChattingManager *)0x0)) {
    UDS_ChattingManager::AddSystemMessage(param_1,param_2);
  }
  return;
}

// Created @ 14bb5ca10

void __thiscall UDS_UIMessageManager::Created(UDS_UIMessageManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// DequeueMsg @ 14bb5d240

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UDS_UIMessageManager::DequeueMsg(UDS_UIMessageManager *this,FDS_UIMessageInfo *param_1)

{
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TMap<TTuple<__int64,EDS_MessageType>,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<__int64,EDS_MessageType>,FDateTime,0>_>
  *this_00;
  EDS_MessageType EVar3;
  int iVar4;
  FDS_UIMessageInfo *pFVar5;
  FDS_TextFormatArg *pFVar6;
  longlong lVar7;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_> *this_01;
  FDS_UIMessageInfo *this_02;
  FDateTime *pFVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  double dVar15;
  TPairInitializer<TTuple<__int64,EDS_MessageType>_&,FDateTime_&> local_res10;
  TTuple<__int64,EDS_MessageType> local_58;
  TTuple<__int64,EDS_MessageType> *local_48;
  FDateTime **local_40;
  
  EVar3 = param_1->MsgType;
  this_01 = GetMsgQueue(this,EVar3);
  if (this_01->ArrayNum != 0) {
    while (0 < this_01->ArrayNum) {
      pFVar5 = (FDS_UIMessageInfo *)(this_01->AllocatorInstance).Data;
      bVar9 = IsMsgCooltimeEnd(this,pFVar5);
      if (bVar9) {
        this_02 = GetCurMsg(this,EVar3);
        FDS_UIMessageInfo::operator=(this_02,pFVar5);
        FDS_UIMessageInfo::operator=(param_1,pFVar5);
        TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_>::RemoveAt(this_01,0,Default);
        local_58._8_1_ = param_1->MsgType;
        if (local_58._8_1_ == Request_Popup) {
          return true;
        }
        local_58._0_8_ = param_1->StringUiTID;
        dVar15 = UDS_TimeUtilManager::GetCurrentServerTime();
        dVar15 = dVar15 * __real_416312d000000000;
        pFVar10 = FDateTime::FDateTime((FDateTime *)&local_res10,0x7b2,1,1,0,0,0,0);
        this_00 = &this->LastMsgTimeMap;
        local_res10.Value =
             (FDateTime *)
             ((longlong)(param_1->MessageCoolTime * __real_4b189680) +
             pFVar10->Ticks + (longlong)dVar15);
        uVar12 = local_58._4_4_ * 0x17 + local_58._0_4_;
        if (*(int *)&(this->LastMsgTimeMap).field_0x8 == *(int *)&(this->LastMsgTimeMap).field_0x34)
        goto LAB_14bb5d4df;
        puVar13 = *(undefined1 **)&(this->LastMsgTimeMap).field_0x40;
        if (puVar13 == (undefined1 *)0x0) {
          puVar13 = &(this->LastMsgTimeMap).field_0x38;
        }
        iVar14 = *(int *)(puVar13 +
                         (ulonglong)
                         (*(int *)&(this->LastMsgTimeMap).field_0x48 - 1U &
                         ((byte)local_58._8_1_ + 0x9e3779b9 + uVar12 * 0x40 + (uVar12 >> 2) ^ uVar12
                         )) * 4);
        if (iVar14 == -1) goto LAB_14bb5d4df;
        lVar7 = *(longlong *)this_00;
        goto LAB_14bb5d4c0;
      }
      (param_1->MsgText).StringTableType = (pFVar5->MsgText).StringTableType;
      (param_1->MsgText).StringTableID = (pFVar5->MsgText).StringTableID;
      (param_1->MsgText).StringEnumTableNameID = (pFVar5->MsgText).StringEnumTableNameID;
      (param_1->MsgText).DateTime.Ticks = (pFVar5->MsgText).DateTime.Ticks;
      (param_1->MsgText).TimeSpan.Ticks = (pFVar5->MsgText).TimeSpan.Ticks;
      (param_1->MsgText).TimeExpressionType = (pFVar5->MsgText).TimeExpressionType;
      (param_1->MsgText).IsExpression = (pFVar5->MsgText).IsExpression;
      ::FString::operator=(&(param_1->MsgText).UniqueString,&(pFVar5->MsgText).UniqueString);
      pTVar8 = &(pFVar5->MsgText).FormatArgs;
      pTVar1 = &(param_1->MsgText).FormatArgs;
      if (pTVar1 != pTVar8) {
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)(pTVar1->AllocatorInstance).Data,
                   (param_1->MsgText).FormatArgs.ArrayNum);
        iVar14 = (pFVar5->MsgText).FormatArgs.ArrayNum;
        piVar2 = &(param_1->MsgText).FormatArgs.ArrayMax;
        pFVar6 = (FDS_TextFormatArg *)(pTVar8->AllocatorInstance).Data;
        iVar4 = *piVar2;
        (param_1->MsgText).FormatArgs.ArrayNum = iVar14;
        if ((iVar14 == 0) && (iVar4 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar14,iVar4,&pTVar1->AllocatorInstance,iVar14,piVar2);
          ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                    ((pTVar1->AllocatorInstance).Data,pFVar6,iVar14);
        }
      }
      param_1->StringUiTID = pFVar5->StringUiTID;
      param_1->MessageCoolTime = pFVar5->MessageCoolTime;
      TSet<TTuple<enum_EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
      ::operator=(&param_1->MsgArgs,
                  (TSet<TTuple<EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
                   *)&pFVar5->MsgArgs);
      TDelegate<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(&param_1->UIMsgResDel,&pFVar5->UIMsgResDel);
      param_1->MsgType = pFVar5->MsgType;
      TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_>::RemoveAt(this_01,0,Default);
    }
  }
  return false;
LAB_14bb5d4c0:
  lVar11 = (longlong)iVar14 * 0x20;
  if ((*(longlong *)(lVar11 + lVar7) == local_58._0_8_) &&
     (*(EDS_MessageType *)(lVar11 + 8 + lVar7) == local_58._8_1_)) {
    if (iVar14 != -1) {
      TSet<TTuple<TTuple<__int64,enum_EDS_MessageType>,FDateTime>,TDefaultMapHashableKeyFuncs<TTuple<__int64,enum_EDS_MessageType>,FDateTime,0>,FDefaultSetAllocator>
      ::Remove(this_00,&local_58);
      return true;
    }
    goto LAB_14bb5d4df;
  }
  iVar14 = *(int *)(lVar11 + 0x18 + lVar7);
  if (iVar14 == -1) {
LAB_14bb5d4df:
    local_48 = &local_58;
    local_40 = &local_res10.Value;
    TSet<TTuple<TTuple<__int64,enum_EDS_MessageType>,FDateTime>,TDefaultMapHashableKeyFuncs<TTuple<__int64,enum_EDS_MessageType>,FDateTime,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TTuple<__int64,enum_EDS_MessageType>_&,FDateTime_&>_>
              (this_00,&local_res10,(bool *)&local_48);
    return true;
  }
  goto LAB_14bb5d4c0;
}

// Destroyed @ 14bb5d8e0

void __thiscall UDS_UIMessageManager::Destroyed(UDS_UIMessageManager *this)

{
  return;
}

// EndMsgQueueing @ 14bb5e0d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_UIMessageManager::EndMsgQueueing
          (UDS_UIMessageManager *this,EDS_MessageType param_1,uint param_2,bool param_3)

{
  FDS_UIMessageInfo *pFVar1;
  TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FDS_MessageBaseTableRow *pFVar3;
  UDS_WindowManager *this_00;
  EDS_WindowWidget EVar4;
  uint local_res18 [2];
  float local_res20 [2];
  
  local_res18[0] = param_2;
  pFVar1 = GetCurMsg(this,param_1);
  FDS_UIMessageInfo::Reset(pFVar1);
  pTVar2 = GetMsgQueue(this,param_1);
  pFVar1 = (FDS_UIMessageInfo *)(pTVar2->AllocatorInstance).Data;
  if (pTVar2->ArrayMax < 0) {
    DestructItems<FDS_UIMessageInfo,int>(pFVar1,pTVar2->ArrayNum);
    pTVar2->ArrayNum = 0;
    if (pTVar2->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,8,0,&pTVar2->AllocatorInstance,0,&pTVar2->ArrayMax);
    }
  }
  else {
    DestructItems<FDS_UIMessageInfo,int>(pFVar1,pTVar2->ArrayNum);
    pTVar2->ArrayNum = 0;
  }
  EVar4 = None;
  if (param_3) {
    pFVar3 = FDS_MessageBaseTableRow::Get((ulonglong)param_1,true);
    if (pFVar3 != (FDS_MessageBaseTableRow *)0x0) {
      EVar4 = pFVar3->ID_WindowBase;
    }
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 != (UDS_WindowManager *)0x0) {
      local_res20[0] = 0.0;
      UDS_WindowManager::CloseWindow(this_00,EVar4,local_res18,local_res20);
    }
  }
  return;
}

// EnqueueMsg @ 14bb5e1b0

bool __thiscall
UDS_UIMessageManager::EnqueueMsg(UDS_UIMessageManager *this,FDS_UIMessageInfo *param_1)

{
  int *piVar1;
  EDS_MessageType EVar2;
  bool bVar3;
  int iVar4;
  TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  FDS_MessageBaseTableRow *pFVar6;
  FDS_UIMessageInfo *pFVar7;
  
  bVar3 = UDS_GameInstance::GetIsCCSAIMode();
  if (!bVar3) {
    EVar2 = param_1->MsgType;
    pTVar5 = GetMsgQueue(this,EVar2);
    bVar3 = IsMsgCooltimeEnd(this,param_1);
    if (bVar3) {
      pFVar6 = FDS_MessageBaseTableRow::Get((ulonglong)EVar2,true);
      if ((pFVar6 == (FDS_MessageBaseTableRow *)0x0) || (pFVar6->IsQueue == false)) {
        pFVar7 = (FDS_UIMessageInfo *)(pTVar5->AllocatorInstance).Data;
        piVar1 = &pTVar5->ArrayMax;
        if (pTVar5->ArrayMax < 0) {
          DestructItems<FDS_UIMessageInfo,int>(pFVar7,pTVar5->ArrayNum);
          pTVar5->ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xd0,8,0,&pTVar5->AllocatorInstance,0,piVar1);
          }
        }
        else {
          DestructItems<FDS_UIMessageInfo,int>(pFVar7,pTVar5->ArrayNum);
          pTVar5->ArrayNum = 0;
        }
        iVar4 = pTVar5->ArrayNum;
        if (iVar4 == *piVar1) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x8d0,&pTVar5->AllocatorInstance,piVar1);
        }
        pTVar5->ArrayNum = iVar4 + 1;
        FDS_UIMessageInfo::FDS_UIMessageInfo
                  ((FDS_UIMessageInfo *)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 0xd0),
                   param_1);
        pFVar7 = GetCurMsg(this,EVar2);
        FDS_UIMessageInfo::operator=(pFVar7,param_1);
        ShowMsg(this,EVar2);
        return true;
      }
      bVar3 = IsSameMsg(this,param_1);
      if (!bVar3) {
        iVar4 = pTVar5->ArrayNum;
        if (iVar4 == pTVar5->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x8d0,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
        }
        pTVar5->ArrayNum = iVar4 + 1;
        FDS_UIMessageInfo::FDS_UIMessageInfo
                  ((FDS_UIMessageInfo *)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 0xd0),
                   param_1);
        ShowMsg(this,EVar2);
        return true;
      }
    }
  }
  return false;
}

// GetCurMsg @ 14bb64770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FDS_UIMessageInfo * __thiscall
UDS_UIMessageManager::GetCurMsg(UDS_UIMessageManager *this,EDS_MessageType param_1)

{
  TMap<EDS_MessageType,FDS_UIMessageInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageType,FDS_UIMessageInfo,0>_>
  *this_00;
  ulonglong uVar1;
  FDS_UIMessageInfo *pFVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 auStackY_138 [32];
  EDS_MessageType local_108 [8];
  EDS_MessageType *local_100;
  FDS_UIMessageInfo **local_f8;
  bool local_f0;
  TPairInitializer<EDS_MessageType_&,FDS_UIMessageInfo_&&> local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  void *local_b0;
  undefined8 local_a8;
  FDS_TextFormatArg *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  undefined8 uStack_50;
  void *local_40;
  undefined4 local_38;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_30;
  ForAnyElementType FStack_28;
  int local_20;
  EDS_MessageType local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_138;
  this_00 = &this->CurMsgMap;
  local_108[0] = param_1;
  if (*(int *)&(this->CurMsgMap).field_0x8 != *(int *)&(this->CurMsgMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->CurMsgMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->CurMsgMap).field_0x38;
    }
    iVar4 = *(int *)(puVar3 + ((ulonglong)(*(int *)&(this->CurMsgMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar4 != -1) {
      do {
        if (*(EDS_MessageType *)((longlong)iVar4 * 0xe0 + *(longlong *)this_00) == param_1) {
          if (iVar4 != -1) goto LAB_14bb649aa;
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0xe0 + 0xd8 + *(longlong *)this_00);
      } while (iVar4 != -1);
    }
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_100 = local_108;
  local_70._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_50 = _UNK_150631d98;
  local_e8.Value._0_1_ = 0;
  local_f8 = &local_e8.Value;
  local_d8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_30.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_28.Data = (FScriptContainerElement *)0x0;
  local_b0 = (void *)0x0;
  local_a8 = 0;
  local_a0 = (FDS_TextFormatArg *)0x0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_20 = 0;
  local_18 = param_1;
  TSet<TTuple<enum_EDS_MessageType,FDS_UIMessageInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_MessageType,FDS_UIMessageInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_MessageType_&,FDS_UIMessageInfo_&&>_>
            (this_00,&local_e8,(bool *)&local_100);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_30,(FWriteAccessScope *)&local_100);
  if ((local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_f0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_f8,(FDestructionSentinel *)&local_100);
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_30.AccessDetector);
  local_38 = 0;
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  uVar1 = local_78 >> 0x20;
  local_78 = local_78 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&local_80,0,(int *)((longlong)&local_78 + 4));
  }
  iVar4 = local_70.MaxBits;
  local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
  uStack_50 = 0xffffffff;
  if (0x80 < (uint)iVar4) {
    local_70.NumBits = 0;
    local_70.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70,0);
  }
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  DestructItems<FDS_TextFormatArg,int>(local_a0,(int)local_98);
  if (local_a0 != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_a0);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
LAB_14bb649aa:
  pFVar2 = TMapBase<enum_EDS_MessageType,FDS_UIMessageInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MessageType,FDS_UIMessageInfo,0>_>
           ::FindChecked(this_00,local_108[0]);
  return pFVar2;
}

// GetInst @ 14bb66340

UDS_UIMessageManager * __cdecl UDS_UIMessageManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_UIMessageManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_UIMessageManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_UIMessageManager_NoRegister();
  pUVar3 = (UDS_UIMessageManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_UIMessageManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_UIMessageManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_UIMessageManager *)0x0;
}

// GetMsgQueue @ 14bb669f0

TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_> * __thiscall
UDS_UIMessageManager::GetMsgQueue(UDS_UIMessageManager *this,EDS_MessageType param_1)

{
  TMap<EDS_MessageType,TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageType,TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  int iVar3;
  TPairInitializer<EDS_MessageType_&,TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_>_&&>
  local_res8 [2];
  FDS_UIMessageInfo *local_28;
  undefined8 local_20;
  TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_> **local_18;
  FDS_UIMessageInfo **local_10;
  
  this_00 = &this->MsgQueueMap;
  local_res8[0].Value._0_1_ = param_1;
  if (*(int *)&(this->MsgQueueMap).field_0x8 != *(int *)&(this->MsgQueueMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->MsgQueueMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->MsgQueueMap).field_0x38;
    }
    iVar3 = *(int *)(puVar2 + ((ulonglong)(*(int *)&(this->MsgQueueMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar3 != -1) {
      do {
        if (*(EDS_MessageType *)((longlong)iVar3 * 0x20 + *(longlong *)this_00) == param_1) {
          if (iVar3 != -1) {
            pTVar1 = TMapBase<enum_EDS_MessageType,TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MessageType,TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_>,0>_>
                     ::FindChecked(this_00,param_1);
            return pTVar1;
          }
          break;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)this_00);
      } while (iVar3 != -1);
    }
  }
  local_28 = (FDS_UIMessageInfo *)0x0;
  local_20 = 0;
  local_18 = &local_res8[0].Value;
  local_10 = &local_28;
  TSet<TTuple<enum_EDS_MessageType,TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_MessageType,TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EDS_MessageType_&,TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,local_res8,(bool *)&local_18);
  DestructItems<FDS_UIMessageInfo,int>(local_28,(int)local_20);
  if (local_28 != (FDS_UIMessageInfo *)0x0) {
    FMemory::Free(local_28);
  }
  pTVar1 = TMapBase<enum_EDS_MessageType,TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MessageType,TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked(this_00,(EDS_MessageType)local_res8[0].Value);
  return pTVar1;
}

// GetMsgQueueNum @ 14bb66ad0

int __thiscall
UDS_UIMessageManager::GetMsgQueueNum(UDS_UIMessageManager *this,EDS_MessageType param_1)

{
  TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = GetMsgQueue(this,param_1);
  return pTVar1->ArrayNum;
}

// GetWindowID @ 14bb68aa0

EDS_WindowWidget __thiscall
UDS_UIMessageManager::GetWindowID(UDS_UIMessageManager *this,EDS_MessageType param_1)

{
  FDS_MessageBaseTableRow *pFVar1;
  
  pFVar1 = FDS_MessageBaseTableRow::Get((ulonglong)param_1,true);
  if (pFVar1 != (FDS_MessageBaseTableRow *)0x0) {
    return pFVar1->ID_WindowBase;
  }
  return None;
}

// Init @ 14bb6a830

void __thiscall UDS_UIMessageManager::Init(UDS_UIMessageManager *this)

{
  return;
}

// IsMsgCooltimeEnd @ 14bb6edc0

bool __thiscall
UDS_UIMessageManager::IsMsgCooltimeEnd(UDS_UIMessageManager *this,FDS_UIMessageInfo *param_1)

{
  longlong lVar1;
  longlong lVar2;
  FDateTime *pFVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  double dVar7;
  FDateTime local_res8;
  TTuple<__int64,EDS_MessageType> local_18;
  
  local_18._0_8_ = param_1->StringUiTID;
  local_18._8_1_ = param_1->MsgType;
  uVar4 = (int)((ulonglong)local_18._0_8_ >> 0x20) * 0x17 + (int)local_18._0_8_;
  if (*(int *)&(this->LastMsgTimeMap).field_0x8 != *(int *)&(this->LastMsgTimeMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->LastMsgTimeMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->LastMsgTimeMap).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->LastMsgTimeMap).field_0x48 - 1U &
                              ((byte)local_18._8_1_ + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^
                              uVar4)) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&this->LastMsgTimeMap;
      do {
        lVar2 = (longlong)iVar6 * 0x20;
        if ((*(longlong *)(lVar2 + lVar1) == local_18._0_8_) &&
           (*(EDS_MessageType *)(lVar2 + 8 + lVar1) == local_18._8_1_)) {
          if (iVar6 == -1) {
            return true;
          }
          dVar7 = UDS_TimeUtilManager::GetCurrentServerTime();
          dVar7 = dVar7 * __real_416312d000000000;
          pFVar3 = FDateTime::FDateTime(&local_res8,0x7b2,1,1,0,0,0,0);
          lVar1 = pFVar3->Ticks;
          pFVar3 = TMapBase<TTuple<__int64,enum_EDS_MessageType>,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<__int64,enum_EDS_MessageType>,FDateTime,0>_>
                   ::FindChecked(&this->LastMsgTimeMap,&local_18);
          return pFVar3->Ticks < (longlong)dVar7 + lVar1;
        }
        iVar6 = *(int *)(lVar2 + 0x18 + lVar1);
      } while (iVar6 != -1);
    }
  }
  return true;
}

// IsQueueingMsg @ 14bb6f0c0

bool __thiscall
UDS_UIMessageManager::IsQueueingMsg(UDS_UIMessageManager *this,EDS_MessageType param_1)

{
  FDS_MessageBaseTableRow *pFVar1;
  
  pFVar1 = FDS_MessageBaseTableRow::Get((ulonglong)param_1,true);
  if (pFVar1 != (FDS_MessageBaseTableRow *)0x0) {
    return pFVar1->IsQueue;
  }
  return false;
}

// IsSameMsg @ 14bb6f7d0

bool __thiscall
UDS_UIMessageManager::IsSameMsg(UDS_UIMessageManager *this,FDS_UIMessageInfo *param_1)

{
  EDS_MessageType EVar1;
  int iVar2;
  bool bVar3;
  TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  FText *pFVar5;
  FText *pFVar6;
  FDS_UIMessageInfo *this_00;
  FDS_Text *pFVar7;
  FDS_Text *this_01;
  undefined1 local_res10 [8];
  FText local_48;
  FText local_38;
  
  EVar1 = param_1->MsgType;
  pTVar4 = GetMsgQueue(this,EVar1);
  iVar2 = pTVar4->ArrayNum;
  this_01 = (FDS_Text *)(pTVar4->AllocatorInstance).Data;
  pFVar7 = (FDS_Text *)((longlong)this_01 + (longlong)iVar2 * 0xd0);
  while( true ) {
    if (pTVar4->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDS_UIMessageInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (this_01 == pFVar7) break;
    if ((*(longlong *)(this_01 + 1) < 1) || (*(longlong *)(this_01 + 1) == param_1->StringUiTID)) {
      pFVar5 = FDS_Text::GetText(this_01,&local_38);
      pFVar6 = FDS_Text::GetText(&param_1->MsgText,&local_48);
      bVar3 = FText::EqualToCaseIgnored(pFVar5,pFVar6);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      if (bVar3) {
        return true;
      }
    }
    this_01 = (FDS_Text *)&this_01[2].UniqueString;
  }
  this_00 = GetCurMsg(this,EVar1);
  if ((0 < this_00->StringUiTID) && (this_00->StringUiTID != param_1->StringUiTID)) {
    return false;
  }
  pFVar5 = FDS_Text::GetText(&this_00->MsgText,&local_48);
  pFVar6 = FDS_Text::GetText(&param_1->MsgText,&local_38);
  bVar3 = FText::EqualToCaseIgnored(pFVar5,pFVar6);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference == (ITextData *)0x0) {
    return bVar3;
  }
  (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  return bVar3;
}

// OnClickCancel @ 14bb72240

void __thiscall
UDS_UIMessageManager::OnClickCancel
          (UDS_UIMessageManager *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,
          EDS_MessageType param_2,uint param_3)

{
  UDS_UIMessageManager *this_00;
  
  this_00 = GetInst();
  if (this_00 != (UDS_UIMessageManager *)0x0) {
    EndMsgQueueing(this_00,param_2,param_3,true);
  }
  return;
}

// OnClickConfirm @ 14bb72280

void __thiscall
UDS_UIMessageManager::OnClickConfirm
          (UDS_UIMessageManager *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,
          EDS_MessageType param_2,uint param_3,long64 param_4)

{
  UDS_NetworkManager *this_00;
  
  EndMsgQueueing(this,param_2,param_3,true);
  if (param_2 == Popup_LogOut) {
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      UDS_NetworkManager::Disconnect(this_00,(EDS_DisconnectReason)param_4);
      return;
    }
  }
  return;
}

// OpenMsgByContentId @ 14bb796f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_UIMessageManager::OpenMsgByContentId(long64 param_1,EDS_MessageDefineType param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  int iVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_UIMessageManager *this;
  FDS_ContentsBaseTableRow *pFVar6;
  FDS_MessageDefineTableRow *pFVar7;
  undefined1 auStackY_3a8 [32];
  undefined4 local_378 [2];
  long64 local_370;
  TPairInitializer<EDS_MessageArgsType_&&,__int64_&> local_368;
  long64 *local_358;
  FDestructionSentinel local_350;
  undefined1 local_338 [96];
  ForAnyElementType local_2d8;
  undefined8 local_2d0;
  TBitArray<FDefaultBitArrayAllocator> local_2c8;
  undefined8 uStack_2a8;
  void *local_298;
  undefined4 local_290;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_288;
  ForAnyElementType FStack_280;
  int local_278;
  EDS_MessageType local_270;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  if (param_2 != None) {
    local_28 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
    local_370 = param_1;
    if (param_2 == ContentsOpen_None_01) {
      this = GetInst();
      if (this == (UDS_UIMessageManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_UIMessageManager::OpenMsgByContentId",0x28,Yes);
          UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0xe4,L"msgMng is nullptr.");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
      else {
        pFVar6 = FDS_ContentsBaseTableRow::GetRef(local_370,true);
        pFVar7 = FDS_MessageDefineTableRow::GetRef(0x38271,true);
        local_270 = pFVar7->MessageType;
        if (local_270 != None) {
          local_338[0] = None;
          local_338._24_8_ = 0;
          local_338._32_8_ = 0;
          local_338._8_8_ = 0;
          local_2c8.NumBits = ___xmm_00000000ffffffff0000008000000000;
          local_2c8.MaxBits = _UNK_150631d94;
          uStack_2a8 = _UNK_150631d98;
          local_338._16_4_ = 0;
          local_338._20_4_ = 0;
          local_338._40_4_ = None;
          local_288.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_280.Data = (FScriptContainerElement *)0x0;
          local_338[0x2c] = false;
          local_338._48_8_ = (FScriptContainerElement *)0x0;
          local_338._56_4_ = 0;
          local_338._60_4_ = 0;
          local_338._64_8_ = (FDS_TextFormatArg *)0x0;
          local_338._72_4_ = 0;
          local_338._76_4_ = 0;
          local_338._80_8_ = 0;
          local_338._88_4_ = 0.0;
          local_2d8.Data = (FScriptContainerElement *)0x0;
          local_2d0 = 0;
          local_2c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_298 = (void *)0x0;
          local_290 = 0;
          local_278 = 0;
          FDS_Text::SetTextFromStringID((FDS_Text *)local_338,&pFVar6->ID_OpenString);
          local_338._80_8_ = (**(code **)(pFVar6->ID_OpenString)._padding_)(&pFVar6->ID_OpenString);
          local_338._88_4_ = pFVar7->MessageCoolTime;
          local_368.Value = (long64 *)local_378;
          local_358 = &local_370;
          local_378[0] = 2;
          TSet<TTuple<enum_EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<enum_EDS_MessageArgsType_&&,__int64_&>_>
                    (&local_2d8,&local_368,(bool *)&local_368.Value);
          EnqueueMsg(this,(FDS_UIMessageInfo *)local_338);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_288,(FWriteAccessScope *)&local_350);
          if ((local_278 != 0) && (FStack_280.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_280.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_280,0,0,0x10);
            local_278 = 0;
          }
          if (local_350.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_350.Accessor,&local_350);
          }
          if (FStack_280.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_280.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_288.AccessDetector);
          local_290 = 0;
          if (local_298 != (void *)0x0) {
            FMemory::Free(local_298);
          }
          uVar2 = local_2d0 >> 0x20;
          local_2d0 = local_2d0 & 0xffffffff00000000;
          if ((int)uVar2 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&local_2d8,0,(int *)((longlong)&local_2d0 + 4));
          }
          iVar3 = local_2c8.MaxBits;
          uStack_2a8 = 0xffffffff;
          local_2c8._24_8_ = (ulonglong)(uint)local_2c8.MaxBits << 0x20;
          if (0x80 < (uint)iVar3) {
            local_2c8.NumBits = 0;
            local_2c8.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2c8,0);
          }
          if (local_2c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_2c8.AllocatorInstance.SecondaryData);
          }
          if (local_2d8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d8.Data);
          }
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)local_338._64_8_,local_338._72_4_);
          if ((FDS_TextFormatArg *)local_338._64_8_ != (FDS_TextFormatArg *)0x0) {
            FMemory::Free((void *)local_338._64_8_);
          }
          if ((FScriptContainerElement *)local_338._48_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_338._48_8_);
          }
        }
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8541516905981148964>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_UIMessageManager.cpp"
                         ,0xdc,"false");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_268._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_268,"UDS_UIMessageManager::OpenMsgByContentId",0x28,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_268.Ptr,0xdd,
                   L"InMessageDefine is not ContentsOpen_None_01.");
        if ((void *)local_268._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_268._padding_);
        }
      }
    }
  }
  return;
}

// OpenMsgByMsgInfo @ 14bb79ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_UIMessageManager::OpenMsgByMsgInfo(FDS_UIMessageInfo *param_1)

{
  UDS_UIMessageManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = GetInst();
  if (this == (UDS_UIMessageManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_UIMessageManager::OpenMsgByMsgInfo",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x103,L"msgMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    EnqueueMsg(this,param_1);
  }
  return;
}

// OpenMsgByString @ 14bb79ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_UIMessageManager::OpenMsgByString(EDS_MessageDefineType param_1,FString *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  int iVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_UIMessageManager *this;
  FDS_MessageDefineTableRow *pFVar6;
  undefined1 auStackY_398 [32];
  FDestructionSentinel local_368;
  undefined1 local_350 [96];
  ForAnyElementType local_2f0;
  undefined8 local_2e8;
  TBitArray<FDefaultBitArrayAllocator> local_2e0;
  undefined8 uStack_2c0;
  void *local_2b0;
  undefined4 local_2a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2a0;
  ForAnyElementType FStack_298;
  int local_290;
  EDS_MessageType local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  if (param_1 != None) {
    local_38 = __security_cookie.value ^ (ulonglong)auStackY_398;
    if (param_1 == ContentsOpen_None_01) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8541516905981149003>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_UIMessageManager.cpp"
                         ,0xb5,"false");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_UIMessageManager::OpenMsgByString",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_278.Ptr,0xb6,
                   L"ContentsOpen_None_01 is invalid MessageDefineType.");
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
    }
    else {
      this = GetInst();
      if (this == (UDS_UIMessageManager *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8541516905981148997>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_UIMessageManager.cpp"
                           ,0xbb,"msgMng");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_UIMessageManager::OpenMsgByString",0x25,Yes);
          UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0xbd,L"msgMng is nullptr.");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
      else {
        pFVar6 = FDS_MessageDefineTableRow::GetRef((longlong)(int)param_1,true);
        local_288 = pFVar6->MessageType;
        if (local_288 != None) {
          local_350._24_8_ = 0;
          local_350._32_8_ = 0;
          local_2e0.NumBits = ___xmm_00000000ffffffff0000008000000000;
          local_2e0.MaxBits = _UNK_150631d94;
          uStack_2c0 = _UNK_150631d98;
          local_350[0] = None;
          local_350._8_8_ = 0;
          local_2a0.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_298.Data = (FScriptContainerElement *)0x0;
          local_350._16_4_ = 0;
          local_350._20_4_ = 0;
          local_350._40_4_ = None;
          local_350[0x2c] = false;
          local_350._48_8_ = (FScriptContainerElement *)0x0;
          local_350._56_4_ = 0;
          local_350._60_4_ = 0;
          local_350._64_8_ = (FDS_TextFormatArg *)0x0;
          local_350._72_4_ = 0;
          local_350._76_4_ = 0;
          local_350._80_8_ = 0;
          local_350._88_4_ = 0.0;
          local_2f0.Data = (FScriptContainerElement *)0x0;
          local_2e8 = 0;
          local_2e0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_2b0 = (void *)0x0;
          local_2a8 = 0;
          local_290 = 0;
          FDS_Text::SetTextFromUniqueString((FDS_Text *)local_350,param_2);
          bVar4 = EnqueueMsg(this,(FDS_UIMessageInfo *)local_350);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_2a0,(FWriteAccessScope *)&local_368);
          if ((local_290 != 0) && (FStack_298.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_298.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_298,0,0,0x10);
            local_290 = 0;
          }
          if (local_368.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_368.Accessor,&local_368);
          }
          if (FStack_298.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_298.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2a0.AccessDetector);
          local_2a8 = 0;
          if (local_2b0 != (void *)0x0) {
            FMemory::Free(local_2b0);
          }
          uVar2 = local_2e8 >> 0x20;
          local_2e8 = local_2e8 & 0xffffffff00000000;
          if ((int)uVar2 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&local_2f0,0,(int *)((longlong)&local_2e8 + 4));
          }
          iVar3 = local_2e0.MaxBits;
          uStack_2c0 = 0xffffffff;
          local_2e0._24_8_ = (ulonglong)(uint)local_2e0.MaxBits << 0x20;
          if (0x80 < (uint)iVar3) {
            local_2e0.NumBits = 0;
            local_2e0.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2e0,0);
          }
          if (local_2e0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_2e0.AllocatorInstance.SecondaryData);
          }
          if (local_2f0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f0.Data);
          }
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)local_350._64_8_,local_350._72_4_);
          if ((FDS_TextFormatArg *)local_350._64_8_ != (FDS_TextFormatArg *)0x0) {
            FMemory::Free((void *)local_350._64_8_);
          }
          if ((FScriptContainerElement *)local_350._48_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_350._48_8_);
          }
          if ((bVar4) && (pFVar6->ChattingType != None)) {
            AddChattingMsg(this,pFVar6->ChattingType,param_2);
          }
        }
      }
    }
  }
  return;
}

// OpenMsgByStringError @ 14bb79f80

void __cdecl UDS_UIMessageManager::OpenMsgByStringError(EDS_ErrorCode param_1)

{
  FDS_StringErrorTableRow *pFVar1;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  pFVar1 = FDS_StringErrorTableRow::GetRef((longlong)(int)param_1,true);
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  OpenMsgByStringUi((pFVar1->ID_StringUi).ID,pFVar1->MessageDefine,&local_28);
  return;
}

// OpenMsgByStringUi @ 14bb79fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_UIMessageManager::OpenMsgByStringUi
          (long64 param_1,EDS_MessageDefineType param_2,
          TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> *param_3,
          TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
          *param_4)

{
  EDS_ChattingType EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  uint uVar6;
  UDS_LogManager *pUVar7;
  UDS_UIMessageManager *this;
  FDS_StringUiTableRow *pFVar8;
  FDS_MessageDefineTableRow *pFVar9;
  UDS_ChattingManager *pUVar10;
  int iVar11;
  uint uVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  undefined1 auStackY_568 [32];
  FString local_538;
  TPairInitializer<FString_&&,FStringFormatArg_const_&> local_528;
  TSet<TTuple<EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
  *local_518;
  FString local_510;
  FString *local_500;
  FScriptContainerElement *local_4f8;
  FDestructionSentinel local_4f0;
  undefined1 local_4d8 [96];
  ForAnyElementType local_478;
  undefined8 local_470;
  TBitArray<FDefaultBitArrayAllocator> local_468;
  undefined8 uStack_448;
  void *local_438;
  undefined4 local_430;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_428;
  ForAnyElementType FStack_420;
  int local_418;
  EDS_MessageType local_410;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  local_408;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_568;
  local_528.Value = (FStringFormatArg *)param_1;
  local_518 = (TSet<TTuple<EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
               *)param_4;
  if (param_2 == None) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_3b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3b8,"UDS_UIMessageManager::OpenMsgByStringUi",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_3b8.Ptr,0x72,L"InMessageDefine is None.");
      if ((void *)local_3b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3b8._padding_);
      }
    }
  }
  else if (param_2 == ContentsOpen_None_01) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8541516905981149064>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_UIMessageManager.cpp"
                       ,0x78,"false");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_298._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_298,"UDS_UIMessageManager::OpenMsgByStringUi",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_298.Ptr,0x79,
                 L"ContentsOpen_None_01 is invalid MessageDefineType.");
      if ((void *)local_298._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_298._padding_);
      }
    }
  }
  else {
    this = GetInst();
    if (this == (UDS_UIMessageManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_178._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_178,"UDS_UIMessageManager::OpenMsgByStringUi",0x27,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Warning,local_178.Ptr,0x80,L"msgMng is nullptr.");
        if ((void *)local_178._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_178._padding_);
        }
      }
    }
    else {
      pFVar8 = FDS_StringUiTableRow::GetRef(param_1,true);
      pFVar9 = FDS_MessageDefineTableRow::GetRef((longlong)(int)param_2,true);
      iVar11 = param_3->ArrayNum;
      uVar12 = 0;
      local_408.Elements._0_8_ = 0;
      local_408.Elements._8_8_ = 0;
      local_408.Elements._32_8_ = 0;
      local_408.Elements._40_4_ = 0;
      local_408.Elements._44_4_ = 0x80;
      local_408.Elements._48_4_ = 0xffffffff;
      local_408.Elements._52_4_ = 0;
      local_408.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_408.HashSize = 0;
      if (0 < iVar11) {
        do {
          uVar6 = 0;
          if ((int)uVar12 < iVar11) {
            uVar6 = ~uVar12 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar14 = (longlong)(int)uVar12;
          uVar12 = uVar12 + 1;
          pFVar2 = (param_3->AllocatorInstance).Data;
          local_538.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_538.Data.ArrayNum = 0;
          local_538.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_538,uVar12);
          local_500 = &local_538;
          local_4f8 = pFVar2 + lVar14 * 0x20;
          TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_const_&>_>
                    (&local_408,&local_528,(bool *)&local_500);
          if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_538.Data.AllocatorInstance.Data);
          }
          iVar11 = param_3->ArrayNum;
        } while ((int)uVar12 < iVar11);
      }
      if ((pFVar8->Text).Data.ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar8->Text).Data.AllocatorInstance.Data;
      }
      ::FString::FormatImpl
                (&local_510,pwVar13,
                 (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                  *)&local_408);
      if (pFVar9->MessageType != None) {
        local_4d8[0] = None;
        local_4d8._24_8_ = 0;
        local_4d8._32_8_ = 0;
        local_4d8._8_8_ = 0;
        local_468.NumBits = ___xmm_00000000ffffffff0000008000000000;
        local_468.MaxBits = _UNK_150631d94;
        uStack_448 = _UNK_150631d98;
        local_4d8._16_4_ = 0;
        local_4d8._20_4_ = 0;
        local_4d8._40_4_ = None;
        local_428.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_420.Data = (FScriptContainerElement *)0x0;
        local_4d8[0x2c] = false;
        local_4d8._48_8_ = (FScriptContainerElement *)0x0;
        local_4d8._56_4_ = 0;
        local_4d8._60_4_ = 0;
        local_4d8._64_8_ = (FDS_TextFormatArg *)0x0;
        local_4d8._72_4_ = 0;
        local_4d8._76_4_ = 0;
        local_4d8._80_8_ = 0;
        local_4d8._88_4_ = 0.0;
        local_478.Data = (FScriptContainerElement *)0x0;
        local_470 = 0;
        local_468.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_438 = (void *)0x0;
        local_430 = 0;
        local_418 = 0;
        local_410 = pFVar9->MessageType;
        FDS_Text::SetTextFromUniqueString((FDS_Text *)local_4d8,&local_510);
        local_4d8._88_4_ = pFVar9->MessageCoolTime;
        local_4d8._80_8_ = local_528.Value;
        if (local_518 !=
            (TSet<TTuple<EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
             *)0x0) {
          TSet<TTuple<enum_EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
          ::operator=(&local_478,local_518);
        }
        bVar5 = EnqueueMsg(this,(FDS_UIMessageInfo *)local_4d8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_428,(FWriteAccessScope *)&local_4f0);
        if ((local_418 != 0) && (FStack_420.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_420.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_420,0,0,0x10)
          ;
          local_418 = 0;
        }
        if (local_4f0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f0.Accessor,&local_4f0);
        }
        if (FStack_420.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_420.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_428.AccessDetector);
        local_430 = 0;
        if (local_438 != (void *)0x0) {
          FMemory::Free(local_438);
        }
        uVar4 = local_470 >> 0x20;
        local_470 = local_470 & 0xffffffff00000000;
        if ((int)uVar4 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&local_478,0,(int *)((longlong)&local_470 + 4));
        }
        iVar11 = local_468.MaxBits;
        uStack_448 = 0xffffffff;
        local_468._24_8_ = (ulonglong)(uint)local_468.MaxBits << 0x20;
        if (0x80 < (uint)iVar11) {
          local_468.NumBits = 0;
          local_468.MaxBits = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_468,0);
        }
        if (local_468.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_468.AllocatorInstance.SecondaryData);
        }
        if (local_478.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_478.Data);
        }
        DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_4d8._64_8_,local_4d8._72_4_)
        ;
        if ((FDS_TextFormatArg *)local_4d8._64_8_ != (FDS_TextFormatArg *)0x0) {
          FMemory::Free((void *)local_4d8._64_8_);
        }
        if ((FScriptContainerElement *)local_4d8._48_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_4d8._48_8_);
        }
        if (((bVar5) && (EVar1 = pFVar9->ChattingType, EVar1 != None)) &&
           (pUVar10 = UDS_ChattingManager::GetInst(), pUVar10 != (UDS_ChattingManager *)0x0)) {
          UDS_ChattingManager::AddSystemMessage(EVar1,&local_510);
        }
      }
      if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_510.Data.AllocatorInstance.Data);
      }
      local_408.HashSize = 0;
      if (local_408.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_408.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_408.Elements);
    }
  }
  return;
}

// OpenMsgByStringUi @ 14bb7a5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_UIMessageManager::OpenMsgByStringUi
          (long64 param_1,EDS_MessageDefineType param_2,
          TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  EDS_ChattingType EVar1;
  code *pcVar2;
  ulonglong uVar3;
  int iVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UDS_UIMessageManager *this;
  FDS_StringUiTableRow *pFVar7;
  FDS_MessageDefineTableRow *pFVar8;
  UDS_ChattingManager *pUVar9;
  undefined1 auStackY_3b8 [32];
  FString local_388;
  FDestructionSentinel local_378;
  undefined1 local_360 [96];
  ForAnyElementType local_300;
  undefined8 local_2f8;
  TBitArray<FDefaultBitArrayAllocator> local_2f0;
  undefined8 uStack_2d0;
  void *local_2c0;
  undefined4 local_2b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2b0;
  ForAnyElementType FStack_2a8;
  int local_2a0;
  EDS_MessageType local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  if (param_2 == None) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
    if (*(void **)&param_3->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_3->field_0x8);
    }
    goto LAB_14bb7a9cf;
  }
  if (param_2 == ContentsOpen_None_01) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8541516905981149111>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_UIMessageManager.cpp"
                       ,0x49,"false");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_UIMessageManager::OpenMsgByStringUi",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_288.Ptr,0x4a,
                 L"ContentsOpen_None_01 is invalid MessageDefineType.");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
    if (*(void **)&param_3->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_3->field_0x8);
    }
    goto LAB_14bb7a9cf;
  }
  this = GetInst();
  if (this == (UDS_UIMessageManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_UIMessageManager::OpenMsgByStringUi",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,0x51,L"msgMng is nullptr.");
      local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_168._padding_;
      goto LAB_14bb7a99f;
    }
  }
  else {
    pFVar7 = FDS_StringUiTableRow::GetRef(param_1,true);
    pFVar8 = FDS_MessageDefineTableRow::GetRef((longlong)(int)param_2,true);
    ::FString::FString(&local_388,&pFVar7->Text);
    if (pFVar8->MessageType != None) {
      local_360._16_4_ = 0;
      local_360._20_4_ = 0;
      local_360._24_8_ = 0;
      local_360._32_8_ = 0;
      local_2f0.NumBits = ___xmm_00000000ffffffff0000008000000000;
      local_2f0.MaxBits = _UNK_150631d94;
      uStack_2d0 = _UNK_150631d98;
      local_360._40_4_ = None;
      local_360[0x2c] = false;
      local_2b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_2a8.Data = (FScriptContainerElement *)0x0;
      local_360._48_8_ = (FScriptContainerElement *)0x0;
      local_360._56_4_ = 0;
      local_360._60_4_ = 0;
      local_360._64_8_ = (FDS_TextFormatArg *)0x0;
      local_360._76_4_ = 0;
      local_360._80_8_ = 0;
      local_360._88_4_ = 0.0;
      local_300.Data = (FScriptContainerElement *)0x0;
      local_2f8 = 0;
      local_2f0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_2c0 = (void *)0x0;
      local_2b8 = 0;
      local_2a0 = 0;
      local_360[0] = StringUi;
      local_360._8_8_ = param_1;
      local_298 = pFVar8->MessageType;
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
      local_360._72_4_ = 0;
      if (local_360._76_4_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)(local_360 + 0x40),0,(int *)(local_360 + 0x4c));
      }
      local_360._88_4_ = pFVar8->MessageCoolTime;
      local_360._80_8_ = param_1;
      TDelegate<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(&local_2b0,param_3);
      bVar5 = EnqueueMsg(this,(FDS_UIMessageInfo *)local_360);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2b0,(FWriteAccessScope *)&local_378);
      if ((local_2a0 != 0) && (FStack_2a8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_2a8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2a8,0,0,0x10);
        local_2a0 = 0;
      }
      if (local_378.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
      }
      if (FStack_2a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_2a8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2b0.AccessDetector);
      local_2b8 = 0;
      if (local_2c0 != (void *)0x0) {
        FMemory::Free(local_2c0);
      }
      uVar3 = local_2f8 >> 0x20;
      local_2f8 = local_2f8 & 0xffffffff00000000;
      if ((int)uVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_300,0,(int *)((longlong)&local_2f8 + 4));
      }
      iVar4 = local_2f0.MaxBits;
      uStack_2d0 = 0xffffffff;
      local_2f0._24_8_ = (ulonglong)(uint)local_2f0.MaxBits << 0x20;
      if (0x80 < (uint)iVar4) {
        local_2f0.NumBits = 0;
        local_2f0.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2f0,0);
      }
      if (local_2f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_2f0.AllocatorInstance.SecondaryData);
      }
      if (local_300.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data);
      }
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_360._64_8_,local_360._72_4_);
      if ((FDS_TextFormatArg *)local_360._64_8_ != (FDS_TextFormatArg *)0x0) {
        FMemory::Free((void *)local_360._64_8_);
      }
      if ((FScriptContainerElement *)local_360._48_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_360._48_8_);
      }
      if (((bVar5) && (EVar1 = pFVar8->ChattingType, EVar1 != None)) &&
         (pUVar9 = UDS_ChattingManager::GetInst(), pUVar9 != (UDS_ChattingManager *)0x0)) {
        UDS_ChattingManager::AddSystemMessage(EVar1,&local_388);
      }
    }
LAB_14bb7a99f:
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
LAB_14bb7a9cf:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// Reset @ 14bb86490

void __thiscall UDS_UIMessageManager::Reset(UDS_UIMessageManager *this)

{
  return;
}

// SendMessageResponse @ 14bb88700

void __thiscall
UDS_UIMessageManager::SendMessageResponse
          (UDS_UIMessageManager *this,EDS_MessageType param_1,EDS_MessageResponseType param_2)

{
  char cVar1;
  FDS_UIMessageInfo *pFVar2;
  longlong *plVar3;
  EDS_MessageResponseType local_res18 [4];
  FReadAccessScope local_28;
  
  local_res18[0] = param_2;
  pFVar2 = GetCurMsg(this,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->UIMsgResDel,
             &local_28);
  if ((*(int *)&(pFVar2->UIMsgResDel).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(pFVar2->UIMsgResDel).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->UIMsgResDel,
                 &local_28);
      if (*(int *)&(pFVar2->UIMsgResDel).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(pFVar2->UIMsgResDel).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,local_res18);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// ShowMsg @ 14bb8ee00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_UIMessageManager::ShowMsg(UDS_UIMessageManager *this,EDS_MessageType param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FDS_MessageBaseTableRow *pFVar4;
  FDS_UIMessageInfo *pFVar5;
  UDS_WindowManager *this_00;
  UObject *pUVar6;
  UDS_UserWidget *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar10;
  UDS_LogManager *pUVar11;
  TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_> *this_01;
  FDestructionSentinel *pFVar12;
  uint uVar13;
  int iVar14;
  EDS_WindowWidget EVar15;
  undefined1 auStackY_228 [32];
  undefined1 local_1f8 [8];
  FDelegateAllocation local_1f0;
  FWeakObjectPtr local_1e0;
  UDS_UIMessageManager *local_1d8;
  FDestructionSentinel local_1d0;
  FDestructionSentinel local_1b8;
  FDestructionSentinel local_1a0;
  FDelegateAllocation *local_188;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pFVar4 = FDS_MessageBaseTableRow::Get((ulonglong)param_1,true);
  if ((pFVar4 != (FDS_MessageBaseTableRow *)0x0) && (pFVar4->IsQueue == true)) {
    pFVar5 = GetCurMsg(this,param_1);
    bVar2 = FDS_Text::IsEmpty(&pFVar5->MsgText);
    if (!bVar2) {
      return;
    }
  }
  pFVar4 = FDS_MessageBaseTableRow::Get((ulonglong)param_1,true);
  uVar13 = 0;
  EVar15 = None;
  if (pFVar4 != (FDS_MessageBaseTableRow *)0x0) {
    EVar15 = pFVar4->ID_WindowBase;
  }
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    return;
  }
  UDS_WindowManager::GetWindowInfo(this_00,(int)&local_1e0);
  bVar2 = FWeakObjectPtr::IsValid(&local_1e0);
  if (bVar2) {
    pUVar6 = FWeakObjectPtr::Get(&local_1e0);
    cVar3 = (**(code **)(*(longlong *)pUVar6 + 0x2c8))(pUVar6);
    if (cVar3 == '\x01') {
      pUVar6 = FWeakObjectPtr::Get(&local_1e0);
      pUVar7 = (UDS_UserWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar6[5].field_0x10);
      ShowMsgCallback(this,pUVar7,param_1);
      return;
    }
  }
  local_1f8 = (undefined1  [8])0x0;
  local_1f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f8,
             (FWriteAccessScope *)&local_1a0);
  local_188 = &local_1f0;
  puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_1f0);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_MessageType____6B_
    ;
    *(EDS_MessageType *)(puVar8 + 1) = param_1;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_UIMessageManager____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_MessageType____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_UIMessageManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[3] = 0;
    local_1d8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_UIMessageManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_1d8);
    puVar8[4] = ShowMsgCallback;
  }
  if (local_1a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
  }
  pTVar10 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
            TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                      (&local_180,
                       (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                       local_1f8);
  bVar2 = UDS_WindowManager::OpenWindow(this_00,EVar15,pTVar10);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f8,
               (FWriteAccessScope *)&local_1b8);
    if ((local_1f0.DelegateSize != 0) &&
       (local_1f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_1f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1f0,0,0,0x10);
      local_1f0.DelegateSize = 0;
    }
    if (local_1b8.bDestroyed != false) goto LAB_14bb8f1cc;
    pFVar12 = &local_1b8;
    local_1d0.Accessor = local_1b8.Accessor;
  }
  else {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_UIMessageManager::ShowMsg",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar11,1,Warning,local_168.Ptr,0x17a,L"Failed to OpenWindow().");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    pFVar5 = GetCurMsg(this,param_1);
    this_01 = GetMsgQueue(this,param_1);
    iVar14 = this_01->ArrayNum;
    if (0 < iVar14) {
      do {
        EVar15 = None;
        if ((int)uVar13 < this_01->ArrayNum) {
          EVar15 = ~uVar13 >> 0x1f;
        }
        if ((EVar15 == None) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        bVar2 = FDS_UIMessageInfo::IsSameMsg
                          ((FDS_UIMessageInfo *)
                           ((this_01->AllocatorInstance).Data + (longlong)(int)uVar13 * 0xd0),pFVar5
                          );
        if (bVar2) {
          TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_>::RemoveAt(this_01,uVar13,Default);
          uVar13 = uVar13 - 1;
          iVar14 = iVar14 + -1;
        }
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar14);
    }
    FDS_UIMessageInfo::Reset(pFVar5);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f8,
               (FWriteAccessScope *)&local_1d0);
    if ((local_1f0.DelegateSize != 0) &&
       (local_1f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_1f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1f0,0,0,0x10);
      local_1f0.DelegateSize = 0;
    }
    if (local_1d0.bDestroyed != false) goto LAB_14bb8f1cc;
    pFVar12 = &local_1d0;
  }
  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,pFVar12);
LAB_14bb8f1cc:
  if (local_1f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f8);
  return;
}

// ShowMsgCallback @ 14bb8f230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_UIMessageManager::ShowMsgCallback
          (UDS_UIMessageManager *this,UDS_UserWidget *param_1,EDS_MessageType param_2)

{
  longlong lVar1;
  code *pcVar2;
  FDS_ViewModelContext_CommonMessage *pFVar3;
  bool bVar4;
  uint uVar5;
  UDS_LogManager *pUVar6;
  FDS_UIMessageInfo *pFVar7;
  TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_> *pTVar8;
  FText *this_00;
  FText *pFVar9;
  FDS_ViewModelContext *pFVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *this_01;
  UDS_CommonPopupManager *pUVar12;
  long64 *plVar13;
  UDS_M_CommonPopup *pUVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  int iVar17;
  FDS_Text *pFVar18;
  undefined1 *puVar19;
  FScriptContainerElement *pFVar20;
  FDS_ViewModelContext *pFVar21;
  uint uVar22;
  ulonglong uVar23;
  FDS_ViewModelContext *pFVar24;
  long64 lVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined1 auStackY_728 [32];
  int local_6f8;
  FWeakObjectPtr local_6f0;
  FWeakObjectPtr local_6e8;
  FDS_UIMessageInfo *local_6e0;
  FWeakObjectPtr local_6d8;
  FWeakObjectPtr local_6d0;
  FWeakObjectPtr local_6c8;
  FWeakObjectPtr local_6c0;
  FWeakObjectPtr local_6b8;
  FWeakObjectPtr local_6b0;
  FWeakObjectPtr local_6a8;
  UDS_M_CommonPopup *local_6a0;
  undefined1 local_698 [8];
  FDelegateAllocation local_690;
  undefined1 local_680 [8];
  FDelegateAllocation local_678;
  undefined1 local_668 [8];
  FDelegateAllocation local_660;
  UDS_UserWidget *local_650;
  UDS_UserWidget *local_648;
  UDS_UserWidget *local_640;
  UDS_UserWidget *local_638;
  UDS_UserWidget *local_630;
  UDS_UserWidget *local_628;
  UDS_UserWidget *local_620;
  UDS_UIMessageManager *local_618;
  UDS_UIMessageManager *local_610;
  TSharedPtr<FDS_ViewModelContext_CommonMessage,1> local_608;
  TSharedPtr<FDS_ViewModelContext_CommonMessage,1> local_5f8;
  TSharedPtr<FDS_ViewModelContext_CommonMessage,1> local_5e8;
  TSharedPtr<FDS_ViewModelContext_CommonMessage,1> local_5d8;
  TSharedPtr<FDS_ViewModelContext_CommonMessage,1> local_5c8;
  TSharedPtr<FDS_ViewModelContext_CommonMessage,1> local_5b8;
  TSharedPtr<FDS_ViewModelContext,1> local_5a8;
  TSharedPtr<FDS_ViewModelContext,1> local_598;
  FDestructionSentinel local_588;
  FDestructionSentinel local_570;
  FDestructionSentinel local_558;
  FDestructionSentinel local_540;
  FDestructionSentinel local_528;
  FDelegateAllocation *local_510;
  FDestructionSentinel local_508;
  FDelegateAllocation *local_4f0;
  FDestructionSentinel local_4e8;
  FDelegateAllocation *local_4d0;
  TSharedPtr<FDS_ViewModelContext,1> local_4c8;
  TSharedPtr<FDS_ViewModelContext,1> local_4b8;
  TSharedPtr<FDS_ViewModelContext,1> local_4a8;
  TSharedPtr<FDS_ViewModelContext,1> local_498;
  TSharedPtr<FDS_ViewModelContext,1> local_488;
  FText local_478;
  FText local_468;
  TSharedPtr<FDS_ViewModelContext,1> local_458;
  FDS_Text local_448;
  FDS_Text local_3f8;
  FDS_Text local_3a8;
  FDS_Text local_358;
  undefined1 local_308 [96];
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  TBitArray<FDefaultBitArrayAllocator> local_298;
  undefined8 uStack_278;
  undefined1 local_270 [8];
  undefined1 *local_268;
  int local_260;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_258;
  ForAnyElementType FStack_250;
  int local_248;
  EDS_MessageType local_240;
  undefined1 local_238 [96];
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  TBitArray<FDefaultBitArrayAllocator> local_1c8;
  undefined8 uStack_1a8;
  void *local_198;
  undefined4 local_190;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_188;
  ForAnyElementType FStack_180;
  int local_178;
  EDS_MessageType local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_728;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    uVar23 = 0;
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_UIMessageManager::ShowMsgCallback",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,0x212,L"InWidget is nullptr.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    pFVar7 = GetCurMsg(this,param_2);
    local_6e0 = pFVar7;
    pTVar8 = GetMsgQueue(this,param_2);
    local_6f8 = pTVar8->ArrayNum;
    uVar27 = uVar23;
    if (0 < local_6f8) {
      do {
        uVar22 = (uint)uVar23;
        uVar26 = ~uVar22 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar22 < pTVar8->ArrayNum) {
          uVar5 = uVar26;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar18 = (FDS_Text *)((pTVar8->AllocatorInstance).Data + uVar27);
        lVar1 = *(longlong *)(pFVar18 + 1);
        if ((lVar1 < 1) || (lVar1 == pFVar7->StringUiTID)) {
          this_00 = FDS_Text::GetText(pFVar18,&local_468);
          pFVar9 = FDS_Text::GetText(&local_6e0->MsgText,&local_478);
          bVar4 = FText::EqualToCaseIgnored(this_00,pFVar9);
          if (local_478.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_478.TextData.Reference + 0x10))();
          }
          if (local_468.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_468.TextData.Reference + 0x10))();
          }
          pFVar7 = local_6e0;
          if (bVar4) {
            uVar5 = 0;
            if ((int)uVar22 < pTVar8->ArrayNum) {
              uVar5 = uVar26;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar7 = (FDS_UIMessageInfo *)
                     ((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar22 * 0xd0);
            FDS_UIMessageInfo::~FDS_UIMessageInfo(pFVar7);
            iVar17 = pTVar8->ArrayNum + ~uVar22;
            if (iVar17 != 0) {
              memmove(pFVar7,pFVar7 + 1,(longlong)iVar17 * 0xd0);
            }
            pTVar8->ArrayNum = pTVar8->ArrayNum + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xd0,8,&pTVar8->AllocatorInstance,pTVar8->ArrayNum,&pTVar8->ArrayMax);
            uVar22 = uVar22 - 1;
            uVar27 = uVar27 - 0xd0;
            local_6f8 = local_6f8 + -1;
            pFVar7 = local_6e0;
          }
        }
        uVar23 = (ulonglong)(uVar22 + 1);
        uVar27 = uVar27 + 0xd0;
      } while ((int)(uVar22 + 1) < local_6f8);
    }
    FDS_UIMessageInfo::Reset(pFVar7);
    return;
  }
  pFVar7 = GetCurMsg(this,param_2);
  switch(param_2) {
  case Alert:
    MakeContext<FDS_ViewModelContext_CommonMessage>(&local_608);
    pFVar3 = local_608.Object;
    if ((local_608.Object == (FDS_ViewModelContext_CommonMessage *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x105;
    local_458.Object = (FDS_ViewModelContext *)local_608.Object;
    local_458.SharedReferenceCount.ReferenceController =
         local_608.SharedReferenceCount.ReferenceController;
    pFVar3->MsgType = param_2;
    if (local_608.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_6d8.ObjectIndex = 0;
    local_6d8.ObjectSerialNumber = 0;
    local_650 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_6d8,(FObjectPtr)&local_650);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_6d8,&local_458,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_608.SharedReferenceCount.ReferenceController);
    break;
  case Complete:
    MakeContext<FDS_ViewModelContext_CommonMessage>(&local_5f8);
    pFVar3 = local_5f8.Object;
    if ((local_5f8.Object == (FDS_ViewModelContext_CommonMessage *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x106;
    local_4c8.Object = (FDS_ViewModelContext *)local_5f8.Object;
    local_4c8.SharedReferenceCount.ReferenceController =
         local_5f8.SharedReferenceCount.ReferenceController;
    pFVar3->MsgType = param_2;
    if (local_5f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_6d0.ObjectIndex = 0;
    local_6d0.ObjectSerialNumber = 0;
    local_648 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_6d0,(FObjectPtr)&local_648);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_6d0,&local_4c8,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5f8.SharedReferenceCount.ReferenceController);
    break;
  case HeadLine:
  case Bro_HeadLine_Low:
    MakeContext<FDS_ViewModelContext_CommonMessage>(&local_5e8);
    pFVar3 = local_5e8.Object;
    if ((local_5e8.Object == (FDS_ViewModelContext_CommonMessage *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x107;
    local_4b8.Object = (FDS_ViewModelContext *)local_5e8.Object;
    local_4b8.SharedReferenceCount.ReferenceController =
         local_5e8.SharedReferenceCount.ReferenceController;
    pFVar3->MsgType = param_2;
    if (local_5e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_6c8.ObjectIndex = 0;
    local_6c8.ObjectSerialNumber = 0;
    local_640 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_6c8,(FObjectPtr)&local_640);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_6c8,&local_4b8,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5e8.SharedReferenceCount.ReferenceController);
    break;
  case Warning:
    MakeContext<FDS_ViewModelContext_CommonMessage>(&local_5d8);
    pFVar3 = local_5d8.Object;
    if ((local_5d8.Object == (FDS_ViewModelContext_CommonMessage *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x108;
    local_4a8.Object = (FDS_ViewModelContext *)local_5d8.Object;
    local_4a8.SharedReferenceCount.ReferenceController =
         local_5d8.SharedReferenceCount.ReferenceController;
    pFVar3->MsgType = param_2;
    if (local_5d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_6c0.ObjectIndex = 0;
    local_6c0.ObjectSerialNumber = 0;
    local_638 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_6c0,(FObjectPtr)&local_638);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_6c0,&local_4a8,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5d8.SharedReferenceCount.ReferenceController);
    break;
  case ContentsOpen:
    MakeContext<FDS_ViewModelContext_CommonMessage>(&local_5c8);
    pFVar3 = local_5c8.Object;
    if ((local_5c8.Object == (FDS_ViewModelContext_CommonMessage *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x109;
    local_498.Object = (FDS_ViewModelContext *)local_5c8.Object;
    local_498.SharedReferenceCount.ReferenceController =
         local_5c8.SharedReferenceCount.ReferenceController;
    pFVar3->MsgType = param_2;
    if (local_5c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_6b8.ObjectIndex = 0;
    local_6b8.ObjectSerialNumber = 0;
    local_630 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_6b8,(FObjectPtr)&local_630);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_6b8,&local_498,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5c8.SharedReferenceCount.ReferenceController);
    break;
  case Attention:
  case GM_Notice:
    MakeContext<FDS_ViewModelContext_CommonMessage>(&local_5b8);
    pFVar3 = local_5b8.Object;
    if ((local_5b8.Object == (FDS_ViewModelContext_CommonMessage *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x10a;
    local_488.Object = (FDS_ViewModelContext *)local_5b8.Object;
    local_488.SharedReferenceCount.ReferenceController =
         local_5b8.SharedReferenceCount.ReferenceController;
    pFVar3->MsgType = param_2;
    if (local_5b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_6b0.ObjectIndex = 0;
    local_6b0.ObjectSerialNumber = 0;
    local_628 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_6b0,(FObjectPtr)&local_628);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_6b0,&local_488,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5b8.SharedReferenceCount.ReferenceController);
    break;
  case Popup_Close:
    local_238[0] = None;
    local_238._8_8_ = 0;
    local_238._24_8_ = 0;
    local_238._32_8_ = 0;
    local_1c8.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_1c8.MaxBits = _UNK_150631d94;
    uStack_1a8 = _UNK_150631d98;
    local_238._16_4_ = 0;
    local_238._20_4_ = 0;
    local_238._40_4_ = None;
    local_188.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_180.Data = (FScriptContainerElement *)0x0;
    local_238[0x2c] = false;
    local_238._48_8_ = (FScriptContainerElement *)0x0;
    local_238._56_4_ = 0;
    local_238._60_4_ = 0;
    local_238._64_8_ = (FDS_TextFormatArg *)0x0;
    local_238._72_4_ = 0;
    local_238._76_4_ = 0;
    local_238._80_8_ = 0;
    local_238._88_4_ = 0.0;
    local_1d8.Data = (FScriptContainerElement *)0x0;
    local_1d0 = 0;
    local_1c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_198 = (void *)0x0;
    local_190 = 0;
    local_178 = 0;
    local_170 = Popup_Close;
    bVar4 = DequeueMsg(this,(FDS_UIMessageInfo *)local_238);
    if (bVar4) {
      pUVar12 = UDS_CommonPopupManager::GetInst();
      if (pUVar12 == (UDS_CommonPopupManager *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8541516905981148547>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_UIMessageManager.cpp"
                           ,0x27d,"false");
        if (bVar4) goto code_r0x00014bb8fc99;
        goto LAB_14bb8fc9a;
      }
      UDS_CommonPopupManager::CreateCommonPopup(pUVar12);
      bVar4 = FWeakObjectPtr::IsValid(&local_6f0);
      if (!bVar4) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8541516905981148544>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_UIMessageManager.cpp"
                           ,0x280,"false");
        if (bVar4) goto code_r0x00014bb8fc99;
        goto LAB_14bb8fc9a;
      }
      pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_6f0);
      pFVar18 = FDS_Text::FromStringTable(&local_448,StringUi,2);
      UDS_M_CommonPopup::SetTitle(pUVar14,pFVar18);
      pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_6f0);
      pFVar18 = FDS_Text::FDS_Text(&local_3f8,(FDS_Text *)local_238);
      UDS_M_CommonPopup::SetMainContent(pUVar14,pFVar18);
      pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_6f0);
      UDS_M_CommonPopup::SetButton(pUVar14,ButtonCancel,StringUi,0x66,false);
      pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_6f0);
      uVar5 = param_1->MultipleID;
      local_698 = (undefined1  [8])0x0;
      local_690.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_690.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_698,
                 (FWriteAccessScope *)&local_528);
      local_510 = &local_690;
      puVar15 = UE::Core::Private::DelegateAllocate(0x28,&local_690);
      if (puVar15 != (undefined8 *)0x0) {
        *puVar15 = &
                   ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__W4EDS_MessageType__I__6B_
        ;
        *(EDS_MessageType *)(puVar15 + 1) = param_2;
        *(uint *)((longlong)puVar15 + 0xc) = uVar5;
        uVar16 = FDelegateHandle::GenerateNewID();
        puVar15[2] = uVar16;
        *puVar15 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_UIMessageManager____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__W4EDS_MessageType__I__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_UIMessageManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar15[3] = 0;
        local_618 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_UIMessageManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar15 + 3),(FObjectPtr)&local_618);
        puVar15[4] = OnClickCancel;
      }
      if (local_528.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_528.Accessor,&local_528);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar14,ButtonCancel,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_698);
      pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_6f0);
      UDS_M_CommonPopup::SetButton(pUVar14,ButtonConfirm,StringUi,0x65,false);
      pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_6f0);
      uVar5 = param_1->MultipleID;
      local_680 = (undefined1  [8])0x0;
      local_678.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_678.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_680,
                 (FWriteAccessScope *)&local_508);
      local_4f0 = &local_678;
      puVar15 = UE::Core::Private::DelegateAllocate(0x30,&local_678);
      if (puVar15 != (undefined8 *)0x0) {
        *puVar15 = &
                   ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__W4EDS_MessageType__I_J__6B_
        ;
        *(EDS_MessageType *)(puVar15 + 1) = param_2;
        *(uint *)((longlong)puVar15 + 0xc) = uVar5;
        puVar15[2] = 0;
        uVar16 = FDelegateHandle::GenerateNewID();
        puVar15[3] = uVar16;
        *puVar15 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_UIMessageManager____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__W4EDS_MessageType__I_J__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_UIMessageManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar15[4] = 0;
        local_6a0 = (UDS_M_CommonPopup *)this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_UIMessageManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar15 + 4),(FObjectPtr)&local_6a0);
        puVar15[5] = OnClickConfirm;
      }
      if (local_508.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_508.Accessor,&local_508);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar14,ButtonConfirm,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_680);
      pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_6f0);
      UDS_M_CommonPopup::OnPopupOpened(pUVar14,param_1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_188,(FWriteAccessScope *)&local_570);
      if ((local_178 != 0) && (FStack_180.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_180.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_180,0,0,0x10);
        local_178 = 0;
      }
      if (local_570.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_570.Accessor,&local_570);
      }
      if (FStack_180.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_180.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_188.AccessDetector);
      local_190 = 0;
      if (local_198 != (void *)0x0) {
        FMemory::Free(local_198);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(&local_1d8,0);
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8541516905981148550>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_UIMessageManager.cpp"
                         ,0x27a,"false");
      if (bVar4) {
code_r0x00014bb8fc99:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
LAB_14bb8fc9a:
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_188,(FWriteAccessScope *)&local_588);
      if ((local_178 != 0) && (FStack_180.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_180.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_180,0,0,0x10);
        local_178 = 0;
      }
      if (local_588.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_588.Accessor,&local_588);
      }
      if (FStack_180.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_180.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_188.AccessDetector);
      local_190 = 0;
      if (local_198 != (void *)0x0) {
        FMemory::Free(local_198);
      }
      uVar23 = local_1d0 >> 0x20;
      local_1d0 = local_1d0 & 0xffffffff00000000;
      if ((int)uVar23 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_1d8,0,(int *)((longlong)&local_1d0 + 4));
      }
      iVar17 = local_1c8.MaxBits;
      uStack_1a8 = 0xffffffff;
      local_1c8._24_8_ = (ulonglong)(uint)local_1c8.MaxBits << 0x20;
      if (0x80 < (uint)iVar17) {
        local_1c8.NumBits = 0;
        local_1c8.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1c8,0);
      }
    }
    if (local_1c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_1c8.AllocatorInstance.SecondaryData);
    }
    if (local_1d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data);
    }
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_238._64_8_,local_238._72_4_);
    pFVar20 = (FScriptContainerElement *)local_238._48_8_;
    if ((FDS_TextFormatArg *)local_238._64_8_ != (FDS_TextFormatArg *)0x0) {
      FMemory::Free((void *)local_238._64_8_);
      pFVar20 = (FScriptContainerElement *)local_238._48_8_;
    }
    goto LAB_14bb906b9;
  case Popup_LogOut:
    lVar25 = 0;
    local_308[0] = None;
    local_308._8_8_ = 0;
    local_308._24_8_ = 0;
    local_308._32_8_ = 0;
    local_298.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_298.MaxBits = _UNK_150631d94;
    uStack_278 = _UNK_150631d98;
    local_308._16_4_ = 0;
    local_308._20_4_ = 0;
    local_308._40_4_ = None;
    local_258.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_250.Data = (FScriptContainerElement *)0x0;
    local_308[0x2c] = false;
    local_308._48_8_ = (FScriptContainerElement *)0x0;
    local_308._56_4_ = 0;
    local_308._60_4_ = 0;
    local_308._64_8_ = (FDS_TextFormatArg *)0x0;
    local_308._72_4_ = 0;
    local_308._76_4_ = 0;
    local_308._80_8_ = 0;
    local_308._88_4_ = 0.0;
    local_2a8.Data = (FScriptContainerElement *)0x0;
    local_2a0 = 0;
    local_298.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_268 = (undefined1 *)0x0;
    local_260 = 0;
    local_248 = 0;
    local_240 = Popup_LogOut;
    bVar4 = DequeueMsg(this,(FDS_UIMessageInfo *)local_308);
    if (bVar4) {
      pUVar12 = UDS_CommonPopupManager::GetInst();
      if (pUVar12 == (UDS_CommonPopupManager *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8541516905981148524>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_UIMessageManager.cpp"
                           ,0x294,"false");
        if (bVar4) goto code_r0x00014bb902aa;
        goto LAB_14bb902ab;
      }
      UDS_CommonPopupManager::CreateCommonPopup(pUVar12);
      bVar4 = FWeakObjectPtr::IsValid(&local_6e8);
      if (!bVar4) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8541516905981148521>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_UIMessageManager.cpp"
                           ,0x297,"false");
        if (bVar4) goto code_r0x00014bb902aa;
        goto LAB_14bb902ab;
      }
      if ((int)local_2a0 != uStack_278._4_4_) {
        puVar19 = local_270;
        if (local_268 != (undefined1 *)0x0) {
          puVar19 = local_268;
        }
        for (iVar17 = *(int *)(puVar19 + (ulonglong)(local_260 - 1U & 1) * 4); lVar25 = 0,
            iVar17 != -1; iVar17 = *(int *)(local_2a8.Data + (longlong)iVar17 * 0x18 + 0x10)) {
          if (*(int *)(local_2a8.Data + (longlong)iVar17 * 0x18) == 1) {
            plVar13 = TMapBase<enum_EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>_>
                      ::FindChecked(&local_2a8,DisconnectReason);
            lVar25 = *plVar13;
            break;
          }
        }
      }
      pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_6e8);
      pFVar18 = FDS_Text::FromStringTable(&local_3a8,StringUi,2);
      UDS_M_CommonPopup::SetTitle(pUVar14,pFVar18);
      pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_6e8);
      pFVar18 = FDS_Text::FDS_Text(&local_358,(FDS_Text *)local_308);
      UDS_M_CommonPopup::SetMainContent(pUVar14,pFVar18);
      pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_6e8);
      UDS_M_CommonPopup::SetButton(pUVar14,ButtonCancel,StringUi,0x65,false);
      local_6a0 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_6e8);
      uVar5 = param_1->MultipleID;
      local_668 = (undefined1  [8])0x0;
      local_660.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_660.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_668,
                 (FWriteAccessScope *)&local_4e8);
      local_4d0 = &local_660;
      puVar15 = UE::Core::Private::DelegateAllocate(0x30,&local_660);
      if (puVar15 != (undefined8 *)0x0) {
        *puVar15 = &
                   ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__W4EDS_MessageType__I_J__6B_
        ;
        *(EDS_MessageType *)(puVar15 + 1) = param_2;
        *(uint *)((longlong)puVar15 + 0xc) = uVar5;
        puVar15[2] = lVar25;
        uVar16 = FDelegateHandle::GenerateNewID();
        puVar15[3] = uVar16;
        *puVar15 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_UIMessageManager____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__W4EDS_MessageType__I_J__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_UIMessageManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar15[4] = 0;
        local_610 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_UIMessageManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar15 + 4),(FObjectPtr)&local_610);
        puVar15[5] = OnClickConfirm;
      }
      if (local_4e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e8.Accessor,&local_4e8);
      }
      UDS_M_CommonPopup::SetDelegate
                (local_6a0,ButtonCancel,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_668);
      pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_6e8);
      UDS_M_CommonPopup::OnPopupOpened(pUVar14,param_1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_258,(FWriteAccessScope *)&local_540);
      if ((local_248 != 0) && (FStack_250.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_250.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_250,0,0,0x10);
        local_248 = 0;
      }
      if (local_540.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_540.Accessor,&local_540);
      }
      if (FStack_250.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_250.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_258.AccessDetector);
      local_260 = 0;
      if (local_268 != (undefined1 *)0x0) {
        FMemory::Free(local_268);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(&local_2a8,0);
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8541516905981148527>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_UIMessageManager.cpp"
                         ,0x291,"false");
      if (bVar4) {
code_r0x00014bb902aa:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
LAB_14bb902ab:
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_258,(FWriteAccessScope *)&local_558);
      if ((local_248 != 0) && (FStack_250.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_250.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_250,0,0,0x10);
        local_248 = 0;
      }
      if (local_558.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_558.Accessor,&local_558);
      }
      if (FStack_250.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_250.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_258.AccessDetector);
      local_260 = 0;
      if (local_268 != (undefined1 *)0x0) {
        FMemory::Free(local_268);
      }
      uVar23 = local_2a0 >> 0x20;
      local_2a0 = local_2a0 & 0xffffffff00000000;
      if ((int)uVar23 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_2a8,0,(int *)((longlong)&local_2a0 + 4));
      }
      iVar17 = local_298.MaxBits;
      uStack_278 = 0xffffffff;
      local_298._24_8_ = (ulonglong)(uint)local_298.MaxBits << 0x20;
      if (0x80 < (uint)iVar17) {
        local_298.NumBits = 0;
        local_298.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_298,0);
      }
    }
    if (local_298.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_298.AllocatorInstance.SecondaryData);
    }
    if (local_2a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data);
    }
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_308._64_8_,local_308._72_4_);
    pFVar20 = (FScriptContainerElement *)local_308._48_8_;
    if ((FDS_TextFormatArg *)local_308._64_8_ != (FDS_TextFormatArg *)0x0) {
      FMemory::Free((void *)local_308._64_8_);
      pFVar20 = (FScriptContainerElement *)local_308._48_8_;
    }
LAB_14bb906b9:
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    break;
  case Request_Popup:
    pFVar10 = ::operator_new(0x30);
    pFVar24 = (FDS_ViewModelContext *)0x0;
    pFVar21 = pFVar24;
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      *(undefined4 *)&pFVar10->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar10[1]._padding_ + 1) = 0;
      *(undefined2 *)((longlong)&pFVar10[1]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pFVar10[1]._padding_ + 7) = 0;
      ((atomic<int> *)&pFVar10[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
      *(undefined8 *)&pFVar10->DerivedStaticStruct = 0;
      (pFVar10->ViewModelName).ComparisonIndex = 0;
      (pFVar10->ViewModelName).Number = 0;
      pFVar10->ViewModelTemplateKey = None;
      *(undefined1 *)&pFVar10[1]._padding_ = 0;
      pFVar10->_padding_ = (longlong)&___7FDS_ViewModelContext_Common_RequestPopup__6B_;
      *(atomic<int> *)&pFVar10[1].DerivedStaticStruct = (atomic<int>)0x0;
      pFVar21 = pFVar10;
    }
    pFVar10 = ::operator_new(0x20);
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar10->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar10->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar10->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Common_RequestPopup__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar10->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar10->ViewModelTemplateKey = pFVar21;
      pFVar24 = pFVar10;
    }
    if ((pFVar21 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar11 = FDS_ViewModelContext_Common_RequestPopup::StaticStruct();
    *(UScriptStruct **)&pFVar21->DerivedStaticStruct = pUVar11;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar24 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar24->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar24->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_598.Object = pFVar21;
      local_598.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar24;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_598);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar24);
    }
    pFVar21->ViewModelTemplateKey = W_Common_RequestPopup;
    *(EDS_MessageType *)&pFVar21[1]._padding_ = param_2;
    *(float *)&pFVar21[1].DerivedStaticStruct = pFVar7->MessageCoolTime;
    if (pFVar24 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar24->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar24->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_5a8.Object = pFVar21;
    local_5a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar24;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_6a8.ObjectIndex = 0;
    local_6a8.ObjectSerialNumber = 0;
    local_620 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_6a8,(FObjectPtr)&local_620);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_6a8,&local_5a8,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar24);
  }
  return;
}

// Update @ 14bb96240

void __thiscall UDS_UIMessageManager::Update(UDS_UIMessageManager *this,float *param_1)

{
  return;
}

// UpdateMsgCooltime @ 14bb969b0

void __thiscall
UDS_UIMessageManager::UpdateMsgCooltime(UDS_UIMessageManager *this,FDS_UIMessageInfo *param_1)

{
  TMap<TTuple<__int64,EDS_MessageType>,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<__int64,EDS_MessageType>,FDateTime,0>_>
  *this_00;
  longlong lVar1;
  FDateTime *pFVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  double dVar7;
  TPairInitializer<TTuple<__int64,EDS_MessageType>_&,FDateTime_&> local_res10;
  TTuple<__int64,EDS_MessageType> local_28;
  TTuple<__int64,EDS_MessageType> *local_18;
  FDateTime **local_10;
  
  local_28._8_1_ = param_1->MsgType;
  if (local_28._8_1_ != Request_Popup) {
    local_28._0_8_ = param_1->StringUiTID;
    dVar7 = UDS_TimeUtilManager::GetCurrentServerTime();
    dVar7 = dVar7 * __real_416312d000000000;
    pFVar2 = FDateTime::FDateTime((FDateTime *)&local_res10,0x7b2,1,1,0,0,0,0);
    this_00 = &this->LastMsgTimeMap;
    local_res10.Value =
         (FDateTime *)
         ((longlong)(param_1->MessageCoolTime * __real_4b189680) + pFVar2->Ticks + (longlong)dVar7);
    uVar4 = local_28._4_4_ * 0x17 + local_28._0_4_;
    if (*(int *)&(this->LastMsgTimeMap).field_0x8 != *(int *)&(this->LastMsgTimeMap).field_0x34) {
      puVar5 = *(undefined1 **)&(this->LastMsgTimeMap).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->LastMsgTimeMap).field_0x38;
      }
      iVar6 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(this->LastMsgTimeMap).field_0x48 - 1U &
                                ((byte)local_28._8_1_ + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^
                                uVar4)) * 4);
      if (iVar6 != -1) {
        lVar1 = *(longlong *)this_00;
        do {
          lVar3 = (longlong)iVar6 * 0x20;
          if ((*(longlong *)(lVar3 + lVar1) == local_28._0_8_) &&
             (*(EDS_MessageType *)(lVar3 + 8 + lVar1) == local_28._8_1_)) {
            if (iVar6 != -1) {
              TSet<TTuple<TTuple<__int64,enum_EDS_MessageType>,FDateTime>,TDefaultMapHashableKeyFuncs<TTuple<__int64,enum_EDS_MessageType>,FDateTime,0>,FDefaultSetAllocator>
              ::Remove(this_00,&local_28);
              return;
            }
            break;
          }
          iVar6 = *(int *)(lVar3 + 0x18 + lVar1);
        } while (iVar6 != -1);
      }
    }
    local_18 = &local_28;
    local_10 = &local_res10.Value;
    TSet<TTuple<TTuple<__int64,enum_EDS_MessageType>,FDateTime>,TDefaultMapHashableKeyFuncs<TTuple<__int64,enum_EDS_MessageType>,FDateTime,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TTuple<__int64,enum_EDS_MessageType>_&,FDateTime_&>_>
              (this_00,&local_res10,(bool *)&local_18);
  }
  return;
}

