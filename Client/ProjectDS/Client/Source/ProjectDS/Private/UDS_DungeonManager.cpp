// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 38

// StaticClass @ 14b486cc0

UClass * __cdecl UDS_DungeonManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DungeonManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DungeonManager",
               &Z_Registration_Info_UClass_UDS_DungeonManager.InnerSingleton,
               StaticRegisterNativesUDS_DungeonManager,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DungeonManager>,
               InternalVTableHelperCtorCaller<UDS_DungeonManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DungeonManager.InnerSingleton;
}

// UDS_DungeonManager @ 14b48ae20

UDS_DungeonManager * __thiscall
UDS_DungeonManager::UDS_DungeonManager(UDS_DungeonManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->PreMyMemberState = None;
  this->_padding_ = (longlong)&___7UDS_DungeonManager__6B_;
  (this->DungeonFilterDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonFilterDataList).ArrayNum = 0;
  (this->DungeonFilterDataList).ArrayMax = 0;
  (this->MyRaidPartySimpleInfo).RaidPartyUID = 0;
  (this->MyRaidPartySimpleInfo).DungeonId = 0;
  (this->MyRaidPartySimpleInfo).PartyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MyRaidPartySimpleInfo).PartyName.Data.ArrayNum = 0;
  (this->MyRaidPartySimpleInfo).PartyName.Data.ArrayMax = 0;
  (this->MyRaidPartySimpleInfo).IsPassword = false;
  (this->MyRaidPartySimpleInfo).LeaderUID = 0;
  (this->MyRaidPartySimpleInfo).LeaderNickName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MyRaidPartySimpleInfo).LeaderNickName.Data.ArrayNum = 0;
  (this->MyRaidPartySimpleInfo).LeaderNickName.Data.ArrayMax = 0;
  (this->MyRaidPartySimpleInfo).IsPublic = false;
  (this->MyRaidPartySimpleInfo).MemberCount = 0;
  (this->RaidPartySimpleInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RaidPartySimpleInfoList).ArrayNum = 0;
  (this->RaidPartySimpleInfoList).ArrayMax = 0;
  *(undefined8 *)&this->RaidPartyListDetailMap = 0;
  *(undefined8 *)&(this->RaidPartyListDetailMap).field_0x8 = 0;
  *(undefined8 *)&(this->RaidPartyListDetailMap).field_0x20 = 0;
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x28 = 0;
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x34 = 0;
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RaidPartyListDetailMap).field_0x40 = 0;
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x48 = 0;
  (this->DungeonNpcEntityList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonNpcEntityList).ArrayNum = 0;
  (this->DungeonNpcEntityList).ArrayMax = 0;
  (this->DungeonLevelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonLevelList).ArrayNum = 0;
  (this->DungeonLevelList).ArrayMax = 0;
  return this;
}

// UDS_DungeonManager @ 14b48af00

UDS_DungeonManager * __thiscall
UDS_DungeonManager::UDS_DungeonManager(UDS_DungeonManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->PreMyMemberState = None;
  this->_padding_ = (longlong)&___7UDS_DungeonManager__6B_;
  (this->DungeonFilterDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonFilterDataList).ArrayNum = 0;
  (this->DungeonFilterDataList).ArrayMax = 0;
  (this->MyRaidPartySimpleInfo).RaidPartyUID = 0;
  (this->MyRaidPartySimpleInfo).DungeonId = 0;
  (this->MyRaidPartySimpleInfo).PartyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MyRaidPartySimpleInfo).PartyName.Data.ArrayNum = 0;
  (this->MyRaidPartySimpleInfo).PartyName.Data.ArrayMax = 0;
  (this->MyRaidPartySimpleInfo).IsPassword = false;
  (this->MyRaidPartySimpleInfo).LeaderUID = 0;
  (this->MyRaidPartySimpleInfo).LeaderNickName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MyRaidPartySimpleInfo).LeaderNickName.Data.ArrayNum = 0;
  (this->MyRaidPartySimpleInfo).LeaderNickName.Data.ArrayMax = 0;
  (this->MyRaidPartySimpleInfo).IsPublic = false;
  (this->MyRaidPartySimpleInfo).MemberCount = 0;
  (this->RaidPartySimpleInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RaidPartySimpleInfoList).ArrayNum = 0;
  (this->RaidPartySimpleInfoList).ArrayMax = 0;
  *(undefined8 *)&this->RaidPartyListDetailMap = 0;
  *(undefined8 *)&(this->RaidPartyListDetailMap).field_0x8 = 0;
  *(undefined8 *)&(this->RaidPartyListDetailMap).field_0x20 = 0;
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x28 = 0;
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x34 = 0;
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RaidPartyListDetailMap).field_0x40 = 0;
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x48 = 0;
  (this->DungeonNpcEntityList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonNpcEntityList).ArrayNum = 0;
  (this->DungeonNpcEntityList).ArrayMax = 0;
  (this->DungeonLevelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonLevelList).ArrayNum = 0;
  (this->DungeonLevelList).ArrayMax = 0;
  return this;
}

// ~UDS_DungeonManager @ 14b48bbb0

void __thiscall UDS_DungeonManager::~UDS_DungeonManager(UDS_DungeonManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_DungeonManager__6B_;
  pFVar1 = (this->DungeonLevelList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DungeonNpcEntityList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RaidPartyListDetailMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,ds_proto::RaidPartyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,ds_proto::RaidPartyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,ds_proto::RaidPartyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RaidPartyListDetailMap);
  DestructItems<FDS_RaidPartySimpleInfo,int>
            ((FDS_RaidPartySimpleInfo *)(this->RaidPartySimpleInfoList).AllocatorInstance.Data,
             (this->RaidPartySimpleInfoList).ArrayNum);
  pFVar1 = (this->RaidPartySimpleInfoList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MyRaidPartySimpleInfo).LeaderNickName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MyRaidPartySimpleInfo).PartyName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DungeonFilterDataList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b48d010

UClass * __cdecl UDS_DungeonManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DungeonManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DungeonManager",
               &Z_Registration_Info_UClass_UDS_DungeonManager.InnerSingleton,
               StaticRegisterNativesUDS_DungeonManager,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DungeonManager>,
               InternalVTableHelperCtorCaller<UDS_DungeonManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DungeonManager.InnerSingleton;
}

// StaticRegisterNativesUDS_DungeonManager @ 14b48d7c0

void __cdecl UDS_DungeonManager::StaticRegisterNativesUDS_DungeonManager(void)

{
  return;
}

// AddDungeonNpc @ 14baef9f0

void __thiscall UDS_DungeonManager::AddDungeonNpc(UDS_DungeonManager *this,ulong64 param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->DungeonNpcEntityList).ArrayNum;
  piVar1 = &(this->DungeonNpcEntityList).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->DungeonNpcEntityList).AllocatorInstance,piVar1);
  }
  (this->DungeonNpcEntityList).ArrayNum = iVar2 + 1;
  *(ulong64 *)((this->DungeonNpcEntityList).AllocatorInstance.Data + (longlong)iVar2 * 8) = param_1;
  return;
}

// AddRaidPartyListDetailMap @ 14baf1620

void __thiscall
UDS_DungeonManager::AddRaidPartyListDetailMap
          (UDS_DungeonManager *this,long64 param_1,RaidPartyInfo *param_2)

{
  TMap<__int64,ds_proto::RaidPartyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>_>
  *this_00;
  RaidPartyInfo *this_01;
  undefined1 *puVar1;
  int iVar2;
  TPairInitializer<__int64_&,ds_proto::RaidPartyInfo_const_&> local_res8 [2];
  RaidPartyInfo **local_18;
  RaidPartyInfo *local_10;
  
  this_00 = &this->RaidPartyListDetailMap;
  local_res8[0].Value = (RaidPartyInfo *)param_1;
  if (*(int *)&(this->RaidPartyListDetailMap).field_0x8 !=
      *(int *)&(this->RaidPartyListDetailMap).field_0x34) {
    puVar1 = *(undefined1 **)&(this->RaidPartyListDetailMap).field_0x40;
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &(this->RaidPartyListDetailMap).field_0x38;
    }
    iVar2 = *(int *)(puVar1 + ((param_1 >> 0x20) * 0x17 + param_1 &
                              (ulonglong)(*(int *)&(this->RaidPartyListDetailMap).field_0x48 - 1)) *
                              4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)((longlong)iVar2 * 0x68 + *(longlong *)&this_00->field_0x0) == param_1) {
          if (iVar2 != -1) {
            this_01 = TMapBase<__int64,ds_proto::RaidPartyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>_>
                      ::FindChecked((TMapBase<__int64,ds_proto::RaidPartyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>_>
                                     *)this_00,param_1);
            ds_proto::RaidPartyInfo::CopyFrom(this_01,param_2);
            return;
          }
          break;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x68 + 0x60 + *(longlong *)&this_00->field_0x0);
      } while (iVar2 != -1);
    }
  }
  local_18 = &local_res8[0].Value;
  local_10 = param_2;
  TSet<TTuple<__int64,ds_proto::RaidPartyInfo>,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<__int64_&,ds_proto::RaidPartyInfo_const_&>_>
            ((TSet<TTuple<__int64,ds_proto::RaidPartyInfo>,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>,FDefaultSetAllocator>
              *)this_00,local_res8,(bool *)&local_18);
  return;
}

// Destroyed @ 14bb02af0

void __thiscall UDS_DungeonManager::Destroyed(UDS_DungeonManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bb02af3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d0))();
  return;
}

// GetDungeonFilterData @ 14bb0a280

TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr> __thiscall
UDS_DungeonManager::GetDungeonFilterData(UDS_DungeonManager *this,EDS_DungeonType param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_DungeonFilterData *this_00;
  undefined7 in_register_00000011;
  FWeakObjectPtr this_01;
  FScriptContainerElement *pFVar5;
  char in_R8B;
  UObject *local_res8;
  FWeakObjectPtr local_res20;
  
  this_01._1_7_ = in_register_00000011;
  this_01.ObjectIndex._0_1_ = param_1;
  pFVar5 = (this->DungeonFilterDataList).AllocatorInstance.Data;
  iVar2 = (this->DungeonFilterDataList).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->DungeonFilterDataList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DungeonFilterData>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar5 == pFVar1) {
      *(undefined8 *)this_01 = 0;
      local_res8 = (UObject *)0x0;
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this_01,(FObjectPtr)&local_res8);
      return (TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr>)this_01;
    }
    pUVar4 = *(UObject **)pFVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_res8 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res8);
    bVar3 = TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr> *)&local_res20,
                       (void *)0x0);
    if ((!bVar3) && (pUVar4 = FWeakObjectPtr::Get(&local_res20), *(char *)(pUVar4 + 1) == in_R8B))
    break;
    pFVar5 = pFVar5 + 8;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res20);
  if (pUVar4[1].field_0x19 == '\0') {
    this_00 = (UDS_DungeonFilterData *)FWeakObjectPtr::Get(&local_res20);
    UDS_DungeonFilterData::InitFilterData(this_00);
  }
  *(FWeakObjectPtr *)this_01 = local_res20;
  return (TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr>)this_01;
}

// GetFilteredDungeonList @ 14bb0aa40

void __cdecl
UDS_DungeonManager::GetFilteredDungeonList
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,FDS_DungeonFilterOption *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FDS_DungeonLevelGroupTableRow *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res8 [8];
  TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  FDS_DungeonBaseTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  if (local_38.ArrayNum != 0) {
    pFVar2 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
    FVar7.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_DungeonBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar7.Data == pFVar2) break;
      lVar3 = *(longlong *)FVar7.Data;
      if ((((((lVar3 != 0) && (param_2->OpenMinLevel <= *(int *)(lVar3 + 0x74))) &&
            (*(int *)(lVar3 + 0x74) <= param_2->OpenMaxLevel)) &&
           ((param_2->DungeonType == *(EDS_DungeonType *)(lVar3 + 0x20) ||
            (param_2->DungeonType == Max)))) &&
          ((pFVar6 = FDS_DungeonLevelGroupTableRow::GetRef((longlong)*(int *)(lVar3 + 0x24),true),
           param_2->UseIsVisible != true || (pFVar6->isVisible != false)))) &&
         ((param_2->UseLevelGroup == false || ((pFVar6->ID_Name).ID == *(longlong *)(lVar3 + 0x58)))
         )) {
        iVar5 = param_1->ArrayNum;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar5 + 1;
        *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 4) =
             *(undefined4 *)(lVar3 + 8);
      }
      FVar7.Data = FVar7.Data + 8;
    }
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// GetInst @ 14bb0b6c0

UDS_DungeonManager * __cdecl UDS_DungeonManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_DungeonManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this != (UDS_GameInstance *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_DungeonManager_NoRegister();
    pUVar3 = (UDS_DungeonManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
    if (pUVar3 != (UDS_DungeonManager *)0x0) {
      pUVar2 = Z_Construct_UClass_UDS_DungeonManager_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return pUVar3;
      }
    }
  }
  return (UDS_DungeonManager *)0x0;
}

// GetRaidPartyListDetailInfo @ 14bb0fac0

RaidPartyInfo * __thiscall
UDS_DungeonManager::GetRaidPartyListDetailInfo
          (UDS_DungeonManager *this,RaidPartyInfo *__return_storage_ptr__,long64 param_1,
          TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  RaidPartyInfo *pRVar5;
  TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
  *pTVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined1 *puVar10;
  FReadAccessScope local_98;
  RaidPartyInfo local_78;
  
  if (*(int *)&(this->RaidPartyListDetailMap).field_0x8 !=
      *(int *)&(this->RaidPartyListDetailMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->RaidPartyListDetailMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->RaidPartyListDetailMap).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->RaidPartyListDetailMap).field_0x48 - 1U &
                    (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->RaidPartyListDetailMap;
      do {
        if (*(longlong *)((longlong)iVar4 * 0x68 + lVar1) == param_1) {
          pRVar5 = TMapBase<__int64,ds_proto::RaidPartyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>_>
                   ::FindChecked((TMapBase<__int64,ds_proto::RaidPartyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>_>
                                  *)&this->RaidPartyListDetailMap,param_1);
          ds_proto::RaidPartyInfo::RaidPartyInfo(__return_storage_ptr__,(Arena *)0x0,pRVar5);
          __return_storage_ptr__->_padding_ = (longlong)&___7RaidPartyInfo_ds_proto__6B_;
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
          pvVar9 = *(void **)&param_2->field_0x8;
          goto LAB_14bb0fc83;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x68 + 0x60 + lVar1);
      } while (iVar4 != -1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_98);
  if (((*(int *)&param_2->field_0x10 == 0) || (*(longlong **)&param_2->field_0x8 == (longlong *)0x0)
      ) || (cVar3 = (**(code **)(**(longlong **)&param_2->field_0x8 + 0x38))(), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_98);
  if (bVar2) {
    pTVar6 = TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
             ::
             TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                         *)&local_98,param_2);
    FDS_RaidPartyService::RequestGetRaidPartyInfo(param_1,pTVar6);
  }
  ds_proto::RaidPartyInfo::RaidPartyInfo(&local_78,(Arena *)0x0);
  local_78._padding_ = (longlong)&___7RaidPartyInfo_ds_proto__6B_;
  ds_proto::RaidPartyInfo::RaidPartyInfo(__return_storage_ptr__,(Arena *)0x0);
  __return_storage_ptr__->_padding_ = (longlong)&___7RaidPartyInfo_ds_proto__6B_;
  if (__return_storage_ptr__ != &local_78) {
    if ((local_78._padding_ & 1U) == 0) {
      puVar7 = (undefined8 *)(local_78._padding_ & 0xfffffffffffffffe);
    }
    else {
      puVar7 = *(undefined8 **)(local_78._padding_ & 0xfffffffffffffffe);
    }
    puVar8 = (undefined8 *)(__return_storage_ptr__->_padding_ & 0xfffffffffffffffe);
    if ((__return_storage_ptr__->_padding_ & 1) != 0) {
      puVar8 = (undefined8 *)*puVar8;
    }
    if (puVar8 == puVar7) {
      ds_proto::RaidPartyInfo::InternalSwap(__return_storage_ptr__,&local_78);
    }
    else {
      ds_proto::RaidPartyInfo::CopyFrom(__return_storage_ptr__,&local_78);
    }
  }
  __return_storage_ptr__->_padding_ = (longlong)&___7RaidPartyInfo_ds_proto__6B_;
  ds_proto::RaidPartyInfo::~RaidPartyInfo(&local_78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar9 = *(void **)&param_2->field_0x8;
LAB_14bb0fc83:
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return __return_storage_ptr__;
}

// GetRaidPartyListDetailMemberInfo @ 14bb0fcb0

RaidPartyMemberInfo * __thiscall
UDS_DungeonManager::GetRaidPartyListDetailMemberInfo
          (UDS_DungeonManager *this,RaidPartyMemberInfo *__return_storage_ptr__,long64 param_1,
          long64 param_2)

{
  undefined8 *puVar1;
  RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *pRVar2;
  undefined8 *puVar3;
  RaidPartyMemberInfo *this_00;
  TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
  local_f0;
  RaidPartyMemberInfo local_d8;
  RaidPartyMemberInfo local_a0;
  RaidPartyInfo local_68;
  
  local_f0._0_8_ = 0;
  local_f0._8_8_ = 0;
  local_f0._16_4_ = 0;
  GetRaidPartyListDetailInfo(this,&local_68,param_1,&local_f0);
  if (local_68._impl_.raid_party_uid_ == 0) {
    ds_proto::RaidPartyMemberInfo::RaidPartyMemberInfo(&local_d8,(Arena *)0x0);
    local_d8._padding_ = (longlong)&___7RaidPartyMemberInfo_ds_proto__6B_;
    ds_proto::RaidPartyMemberInfo::RaidPartyMemberInfo(__return_storage_ptr__,(Arena *)0x0);
    __return_storage_ptr__->_padding_ = (longlong)&___7RaidPartyMemberInfo_ds_proto__6B_;
    if (__return_storage_ptr__ != &local_d8) {
      if ((local_d8._padding_ & 1U) == 0) {
        puVar1 = (undefined8 *)(local_d8._padding_ & 0xfffffffffffffffe);
      }
      else {
        puVar1 = *(undefined8 **)(local_d8._padding_ & 0xfffffffffffffffe);
      }
      puVar3 = (undefined8 *)(__return_storage_ptr__->_padding_ & 0xfffffffffffffffe);
      if ((__return_storage_ptr__->_padding_ & 1) != 0) {
        puVar3 = (undefined8 *)*puVar3;
      }
      if (puVar3 == puVar1) {
        ds_proto::RaidPartyMemberInfo::InternalSwap(__return_storage_ptr__,&local_d8);
        this_00 = &local_d8;
        goto LAB_14bb0fe31;
      }
      ds_proto::RaidPartyMemberInfo::CopyFrom(__return_storage_ptr__,&local_d8);
    }
    this_00 = &local_d8;
  }
  else {
    if ((local_68._impl_.members_._0_8_ & 1) == 0) {
      pRVar2 = &local_68._impl_.members_;
    }
    else {
      pRVar2 = (RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *)
               (local_68._impl_.members_._0_8_ + 7);
    }
    puVar1 = (undefined8 *)&pRVar2->field_0x0;
    for (; pRVar2 != (RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *)
                     (puVar1 + (int)local_68._impl_.members_._8_4_);
        pRVar2 = (RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *)&pRVar2->field_0x8) {
      if (((*(RaidPartyMemberInfo **)pRVar2)->_impl_).player_uid_ == param_2) {
        ds_proto::RaidPartyMemberInfo::RaidPartyMemberInfo
                  (__return_storage_ptr__,(Arena *)0x0,*(RaidPartyMemberInfo **)pRVar2);
        __return_storage_ptr__->_padding_ = (longlong)&___7RaidPartyMemberInfo_ds_proto__6B_;
        goto LAB_14bb0fe39;
      }
    }
    ds_proto::RaidPartyMemberInfo::RaidPartyMemberInfo(&local_a0,(Arena *)0x0);
    local_a0._padding_ = (longlong)&___7RaidPartyMemberInfo_ds_proto__6B_;
    ds_proto::RaidPartyMemberInfo::RaidPartyMemberInfo(__return_storage_ptr__,(Arena *)0x0);
    __return_storage_ptr__->_padding_ = (longlong)&___7RaidPartyMemberInfo_ds_proto__6B_;
    if (__return_storage_ptr__ != &local_a0) {
      if ((local_a0._padding_ & 1U) == 0) {
        puVar1 = (undefined8 *)(local_a0._padding_ & 0xfffffffffffffffe);
      }
      else {
        puVar1 = *(undefined8 **)(local_a0._padding_ & 0xfffffffffffffffe);
      }
      puVar3 = (undefined8 *)(__return_storage_ptr__->_padding_ & 0xfffffffffffffffe);
      if ((__return_storage_ptr__->_padding_ & 1) != 0) {
        puVar3 = (undefined8 *)*puVar3;
      }
      if (puVar3 == puVar1) {
        ds_proto::RaidPartyMemberInfo::InternalSwap(__return_storage_ptr__,&local_a0);
      }
      else {
        ds_proto::RaidPartyMemberInfo::CopyFrom(__return_storage_ptr__,&local_a0);
      }
    }
    this_00 = &local_a0;
  }
LAB_14bb0fe31:
  __return_storage_ptr__->_padding_ = (longlong)&___7RaidPartyMemberInfo_ds_proto__6B_;
  ds_proto::RaidPartyMemberInfo::~RaidPartyMemberInfo(this_00);
LAB_14bb0fe39:
  ds_proto::RaidPartyInfo::~RaidPartyInfo(&local_68);
  return __return_storage_ptr__;
}

// GetRaidPartySimpleInfo @ 14bb0fe60

FDS_RaidPartySimpleInfo * __thiscall
UDS_DungeonManager::GetRaidPartySimpleInfo
          (UDS_DungeonManager *this,FDS_RaidPartySimpleInfo *__return_storage_ptr__,long64 param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (param_1 == (this->MyRaidPartySimpleInfo).RaidPartyUID) {
    FDS_RaidPartySimpleInfo::FDS_RaidPartySimpleInfo
              (__return_storage_ptr__,&this->MyRaidPartySimpleInfo);
    return __return_storage_ptr__;
  }
  pFVar3 = (this->RaidPartySimpleInfoList).AllocatorInstance.Data;
  iVar2 = (this->RaidPartySimpleInfoList).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->RaidPartySimpleInfoList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDS_RaidPartySimpleInfo_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong *)pFVar3 == param_1) {
      __return_storage_ptr__->RaidPartyUID = *(longlong *)pFVar3;
      __return_storage_ptr__->DungeonId = *(int *)(pFVar3 + 8);
      ::FString::FString(&__return_storage_ptr__->PartyName,(FString *)(pFVar3 + 0x10));
      __return_storage_ptr__->IsPassword = (bool)pFVar3[0x20];
      __return_storage_ptr__->LeaderUID = *(longlong *)(pFVar3 + 0x28);
      ::FString::FString(&__return_storage_ptr__->LeaderNickName,(FString *)(pFVar3 + 0x30));
      __return_storage_ptr__->IsPublic = (bool)pFVar3[0x40];
      iVar2 = *(int *)(pFVar3 + 0x44);
LAB_14bb0ff38:
      __return_storage_ptr__->MemberCount = iVar2;
      return __return_storage_ptr__;
    }
    pFVar3 = pFVar3 + 0x48;
  }
  __return_storage_ptr__->RaidPartyUID = 0;
  iVar2 = 0;
  __return_storage_ptr__->DungeonId = 0;
  (__return_storage_ptr__->PartyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->PartyName).Data.ArrayNum = 0;
  (__return_storage_ptr__->PartyName).Data.ArrayMax = 0;
  __return_storage_ptr__->IsPassword = false;
  __return_storage_ptr__->LeaderUID = 0;
  (__return_storage_ptr__->LeaderNickName).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->LeaderNickName).Data.ArrayNum = 0;
  (__return_storage_ptr__->LeaderNickName).Data.ArrayMax = 0;
  __return_storage_ptr__->IsPublic = false;
  goto LAB_14bb0ff38;
}

// Init @ 14bb12fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_DungeonManager::Init(UDS_DungeonManager *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  UDS_DungeonEvent *pUVar10;
  UDS_EventManager *this_00;
  UDS_LogManager *pUVar11;
  UDS_LoadingEvent *pUVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  undefined1 auStackY_1f8 [32];
  FIdentityFunctor local_1a8;
  undefined1 local_1a7 [7];
  UDS_DungeonFilterData *local_1a0;
  UDS_DungeonFilterData *local_198;
  UDS_DungeonFilterData *local_190;
  TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_188;
  undefined1 local_178 [16];
  undefined1 local_168 [272];
  void *local_58;
  wchar_t *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((this->DungeonFilterDataList).ArrayNum == 0) {
    local_1a0 = NewObject<UDS_DungeonFilterData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_1a0 != (UDS_DungeonFilterData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1a0);
    }
    local_1a0->DungeonType = Normal;
    pFVar4 = (this->DungeonFilterDataList).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_1a0) &&
       ((FScriptContainerElement *)&local_1a0 <
        pFVar4 + (longlong)(this->DungeonFilterDataList).ArrayMax * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (this->DungeonFilterDataList).ArrayNum;
    if (iVar8 == (this->DungeonFilterDataList).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->DungeonFilterDataList).AllocatorInstance,
                         &(this->DungeonFilterDataList).ArrayMax);
    }
    (this->DungeonFilterDataList).ArrayNum = iVar8 + 1;
    *(UDS_DungeonFilterData **)
     ((this->DungeonFilterDataList).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_1a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_1a0 != (UDS_DungeonFilterData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1a0);
    }
    local_198 = NewObject<UDS_DungeonFilterData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_198 != (UDS_DungeonFilterData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_198);
    }
    local_198->DungeonType = Heroic;
    pFVar4 = (this->DungeonFilterDataList).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_198) &&
       ((FScriptContainerElement *)&local_198 <
        pFVar4 + (longlong)(this->DungeonFilterDataList).ArrayMax * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (this->DungeonFilterDataList).ArrayNum;
    if (iVar8 == (this->DungeonFilterDataList).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->DungeonFilterDataList).AllocatorInstance,
                         &(this->DungeonFilterDataList).ArrayMax);
    }
    (this->DungeonFilterDataList).ArrayNum = iVar8 + 1;
    *(UDS_DungeonFilterData **)
     ((this->DungeonFilterDataList).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_198;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_198 != (UDS_DungeonFilterData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_198);
    }
    local_190 = NewObject<UDS_DungeonFilterData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_190 != (UDS_DungeonFilterData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_190);
    }
    local_190->DungeonType = Raid;
    pFVar4 = (this->DungeonFilterDataList).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_190) &&
       ((FScriptContainerElement *)&local_190 <
        pFVar4 + (longlong)(this->DungeonFilterDataList).ArrayMax * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (this->DungeonFilterDataList).ArrayNum;
    if (iVar8 == (this->DungeonFilterDataList).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->DungeonFilterDataList).AllocatorInstance,
                         &(this->DungeonFilterDataList).ArrayMax);
    }
    (this->DungeonFilterDataList).ArrayNum = iVar8 + 1;
    *(UDS_DungeonFilterData **)
     ((this->DungeonFilterDataList).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_190;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_190 != (UDS_DungeonFilterData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_190);
    }
  }
  pUVar10 = UDS_DungeonEvent::GetEvent();
  if (pUVar10 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar10->OnChangedMyRaidPartyState,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_DungeonManager>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar10->OnChangedMyRaidPartyState,(UDS_DungeonManager *)local_178,
               (pmf_9b6dd274)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar10->OnChangedRaidPartyInfo,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_DungeonManager>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar10->OnChangedRaidPartyInfo,(UDS_DungeonManager *)(local_178 + 8),
               (pmf_9b6dd274)this);
  }
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    if ((char)this_00->_padding_ == '\x01') {
      pUVar11 = UDS_LogManager::GetInst();
      if (pUVar11 != (UDS_LogManager *)0x0) {
        pUVar11 = UDS_LogManager::GetInst();
        local_58 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x10),
                   "UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar11,1,Warning,local_50,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
      }
    }
    else {
      pUVar12 = UDS_EventManager::GetEventInternal<UDS_LoadingEvent>(this_00);
      if (pUVar12 != (UDS_LoadingEvent *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar12->LoadingPhaseDelegate,this);
        TMulticastDelegateRegistration<void___cdecl(enum_EDS_LoadingPhase),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_DungeonManager>
                  (&pUVar12->LoadingPhaseDelegate,(UDS_DungeonManager *)local_168,(pmf_e579cf8f)this
                  );
      }
    }
  }
  pTVar2 = &this->DungeonLevelList;
  piVar1 = &(this->DungeonLevelList).ArrayMax;
  (this->DungeonLevelList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  FDS_DungeonBaseTableRow::GetAll(&local_188);
  iVar8 = local_188.ArrayNum;
  pFVar4 = local_188.AllocatorInstance.Data + (longlong)local_188.ArrayNum * 8;
  FVar14.Data = local_188.AllocatorInstance.Data;
  do {
    if (local_188.ArrayNum != iVar8) {
      `TCheckedPointerIterator<FDS_DungeonBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_1a7);
    }
    pFVar13 = (pTVar2->AllocatorInstance).Data;
    if (FVar14.Data == pFVar4) {
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                ((int *)pFVar13,(this->DungeonLevelList).ArrayNum,local_1a8,
                 (TLess<void> *)&local_1a8);
      this->SelectedDungeonLevelGroup = 0;
      if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.AllocatorInstance.Data);
      }
      return;
    }
    iVar9 = (this->DungeonLevelList).ArrayNum;
    pFVar3 = pFVar13 + (longlong)iVar9 * 4;
    if (pFVar13 != pFVar3) {
      do {
        if (*(int *)pFVar13 == *(int *)(*(longlong *)FVar14.Data + 0x74)) goto LAB_14bb1348f;
        pFVar13 = pFVar13 + 4;
      } while (pFVar13 != pFVar3);
    }
    lVar5 = *(longlong *)FVar14.Data;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar2->AllocatorInstance,piVar1);
      (this->DungeonLevelList).ArrayNum = iVar9;
    }
    iVar9 = (this->DungeonLevelList).ArrayNum;
    pFVar13 = (pTVar2->AllocatorInstance).Data;
    (this->DungeonLevelList).ArrayNum = iVar9 + 1;
    *(undefined4 *)(pFVar13 + (longlong)iVar9 * 4) = *(undefined4 *)(lVar5 + 0x74);
LAB_14bb1348f:
    FVar14.Data = FVar14.Data + 8;
  } while( true );
}

// IsDungeonEnterCondition @ 14bb152f0

bool __thiscall
UDS_DungeonManager::IsDungeonEnterCondition
          (UDS_DungeonManager *this,int param_1,EDS_ContentsFunctionType param_2)

{
  bool bVar1;
  FDS_DungeonBaseTableRow *pFVar2;
  FDS_DungeonBaseTableRow *pFVar3;
  UObject *pUVar4;
  UDS_QuestManager *this_00;
  FDS_DungeonTypeDataTableRow *pFVar5;
  UDS_ContentDataSet *this_01;
  ForAnyElementType FVar6;
  longlong lVar7;
  EDS_ContentsFunctionType local_res18 [2];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_68;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_60;
  FDS_ContentsFunctionData local_48;
  
  lVar7 = (longlong)param_1;
  local_res18[0] = param_2;
  pFVar2 = FDS_DungeonBaseTableRow::Get(lVar7,true);
  if (pFVar2 == (FDS_DungeonBaseTableRow *)0x0) {
    return false;
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (!bVar1) {
    pFVar3 = FDS_DungeonBaseTableRow::GetRef(lVar7,true);
    pUVar4 = FWeakObjectPtr::Get(&local_res20);
    if (*(int *)&pUVar4[6].field_0x10 < pFVar3->OpenPlayerLevel) goto LAB_14bb1538a;
  }
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 == (UDS_QuestManager *)0x0) {
    return false;
  }
  pFVar3 = FDS_DungeonBaseTableRow::GetRef(lVar7,true);
  if ((pFVar3->ID_RequestQuest != 0) &&
     (bVar1 = UDS_QuestManager::IsQuestCompleted(this_00,pFVar3->ID_RequestQuest), !bVar1)) {
    return false;
  }
LAB_14bb1538a:
  pFVar5 = FDS_DungeonTypeDataTableRow::GetRef((ulonglong)pFVar2->DungeonType,true);
  if ((pFVar2->DungeonType == Raid) && (0 < pFVar5->EnterLimitCount)) {
    UDS_DungeonRecordData::GetData
              ((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,SUB41(param_1,0));
    bVar1 = TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr> *)&local_res20,
                       (void *)0x0);
    if ((!bVar1) &&
       (pUVar4 = FWeakObjectPtr::Get(&local_res20),
       pFVar5->EnterLimitCount <= *(int *)&pUVar4[2].field_0xc)) {
      local_60._0_8_ = 0;
      local_60._8_8_ = 0;
      local_60._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x347de,Complete_None_01,&local_60);
      return false;
    }
  }
  TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)&local_68);
  bVar1 = TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr> *)&local_68,(void *)0x0);
  if (bVar1) {
    return false;
  }
  local_48.FunctionType = None;
  local_48.ContentsName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ContentsName.Data.ArrayNum = 0;
  local_48.ContentsName.Data.ArrayMax = 0;
  local_48.FunctionLockType = None;
  local_48.FunctionLockMessageID = 0;
  local_48.FunctionLockValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.FunctionLockValues.ArrayNum = 0;
  local_48.FunctionLockValues.ArrayMax = 0;
  this_01 = (UDS_ContentDataSet *)FWeakObjectPtr::Get(&local_68);
  UDS_ContentDataSet::TryGetContentsFunctionData(this_01,local_res18,&local_48);
  if (local_48.FunctionType == local_res18[0]) {
    for (FVar6.Data = local_48.FunctionLockValues.AllocatorInstance.Data;
        FVar6.Data !=
        local_48.FunctionLockValues.AllocatorInstance.Data +
        (longlong)local_48.FunctionLockValues.ArrayNum * 4; FVar6.Data = FVar6.Data + 4) {
      if (*(int *)FVar6.Data == param_1) {
        bVar1 = false;
        goto LAB_14bb1549f;
      }
    }
  }
  bVar1 = true;
LAB_14bb1549f:
  if (local_48.FunctionLockValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.FunctionLockValues.AllocatorInstance.Data);
  }
  if (local_48.ContentsName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ContentsName.Data.AllocatorInstance.Data);
    return bVar1;
  }
  return bVar1;
}

// IsDungeonPlay @ 14bb154d0

bool __cdecl UDS_DungeonManager::IsDungeonPlay(void)

{
  bool bVar1;
  
  bVar1 = FDS_RaidPartyService::IsRaidPlaying();
  return bVar1;
}

// IsLockByLevel @ 14bb15620

bool __thiscall UDS_DungeonManager::IsLockByLevel(UDS_DungeonManager *this,int param_1)

{
  bool bVar1;
  FDS_DungeonBaseTableRow *pFVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res18 [2];
  
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_res18,(void *)0x0);
  if (!bVar1) {
    pFVar2 = FDS_DungeonBaseTableRow::GetRef((longlong)param_1,true);
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    return pFVar2->OpenPlayerLevel <= *(int *)&pUVar3[6].field_0x10;
  }
  return true;
}

// IsLockByQuest @ 14bb15680

bool __thiscall UDS_DungeonManager::IsLockByQuest(UDS_DungeonManager *this,int param_1)

{
  bool bVar1;
  UDS_QuestManager *this_00;
  FDS_DungeonBaseTableRow *pFVar2;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 == (UDS_QuestManager *)0x0) {
    return true;
  }
  pFVar2 = FDS_DungeonBaseTableRow::GetRef((longlong)param_1,true);
  if (pFVar2->ID_RequestQuest != 0) {
    bVar1 = UDS_QuestManager::IsQuestCompleted(this_00,pFVar2->ID_RequestQuest);
    return !bVar1;
  }
  return false;
}

// IsLockDungeon @ 14bb156f0

bool __thiscall UDS_DungeonManager::IsLockDungeon(UDS_DungeonManager *this,int param_1)

{
  bool bVar1;
  FDS_DungeonBaseTableRow *pFVar2;
  UObject *pUVar3;
  UDS_QuestManager *this_00;
  FWeakObjectPtr local_res18 [2];
  
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_res18,(void *)0x0);
  if (!bVar1) {
    pFVar2 = FDS_DungeonBaseTableRow::GetRef((longlong)param_1,true);
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    if (*(int *)&pUVar3[6].field_0x10 < pFVar2->OpenPlayerLevel) {
      return false;
    }
  }
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 == (UDS_QuestManager *)0x0) {
    return true;
  }
  pFVar2 = FDS_DungeonBaseTableRow::GetRef((longlong)param_1,true);
  if ((pFVar2->ID_RequestQuest != 0) &&
     (bVar1 = UDS_QuestManager::IsQuestCompleted(this_00,pFVar2->ID_RequestQuest), !bVar1)) {
    return true;
  }
  return false;
}

// IsValidDungeonID @ 14bb17320

bool __thiscall UDS_DungeonManager::IsValidDungeonID(UDS_DungeonManager *this,int param_1)

{
  FDS_DungeonBaseTableRow *pFVar1;
  
  pFVar1 = FDS_DungeonBaseTableRow::Get((longlong)param_1,true);
  return pFVar1 != (FDS_DungeonBaseTableRow *)0x0;
}

// OnChangedMyRaidParty @ 14bb1c870

void __thiscall UDS_DungeonManager::OnChangedMyRaidParty(UDS_DungeonManager *this)

{
  FString *this_00;
  FString *this_01;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FDS_RaidPartyRepo *pFVar3;
  FDS_RaidPartyMemberInfo *pFVar4;
  FString local_48 [2];
  FString local_28 [2];
  
  pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  this_00 = &(this->MyRaidPartySimpleInfo).PartyName;
  (this->MyRaidPartySimpleInfo).RaidPartyUID = 0;
  (this->MyRaidPartySimpleInfo).DungeonId = 0;
  if (this_00 != local_48) {
    pFVar1 = (this_00->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MyRaidPartySimpleInfo).PartyName.Data.ArrayNum = 0;
    (this->MyRaidPartySimpleInfo).PartyName.Data.ArrayMax = 0;
  }
  this_01 = &(this->MyRaidPartySimpleInfo).LeaderNickName;
  (this->MyRaidPartySimpleInfo).IsPassword = false;
  (this->MyRaidPartySimpleInfo).LeaderUID = 0;
  if (this_01 != local_28) {
    pFVar1 = (this_01->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this_01->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MyRaidPartySimpleInfo).LeaderNickName.Data.ArrayNum = 0;
    (this->MyRaidPartySimpleInfo).LeaderNickName.Data.ArrayMax = 0;
  }
  (this->MyRaidPartySimpleInfo).IsPublic = false;
  (this->MyRaidPartySimpleInfo).MemberCount = 0;
  lVar2 = (pFVar3->RaidPartyInfo).RaidPartyUID;
  if (0 < lVar2) {
    (this->MyRaidPartySimpleInfo).RaidPartyUID = lVar2;
    (this->MyRaidPartySimpleInfo).DungeonId = (pFVar3->RaidPartyInfo).DungeonId;
    ::FString::operator=(this_00,&(pFVar3->RaidPartyInfo).PartyName);
    (this->MyRaidPartySimpleInfo).IsPassword = (pFVar3->RaidPartyInfo).IsPassword;
    (this->MyRaidPartySimpleInfo).LeaderUID = (pFVar3->RaidPartyInfo).LeaderUID;
    pFVar4 = FDS_RaidPartyInfo::GetMemberInfoByPlayerUID
                       (&pFVar3->RaidPartyInfo,(pFVar3->RaidPartyInfo).LeaderUID);
    ::FString::operator=(this_01,&pFVar4->NickName);
    (this->MyRaidPartySimpleInfo).IsPublic = (pFVar3->RaidPartyInfo).IsPublic;
    (this->MyRaidPartySimpleInfo).MemberCount = (pFVar3->RaidPartyInfo).MemberCount;
  }
  return;
}

// OnChangedMyRaidPartyState @ 14bb1c980

void __thiscall UDS_DungeonManager::OnChangedMyRaidPartyState(UDS_DungeonManager *this)

{
  EDS_RaidMemberState EVar1;
  bool bVar2;
  FDS_RaidPartyRepo *pFVar3;
  UDS_DungeonEvent *pUVar4;
  FDS_RaidPartyMemberInfo *pFVar5;
  
  pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar2 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar3);
  if (!bVar2) {
    if (this->PreMyMemberState != DungeonInPlay) {
      return;
    }
    this->PreMyMemberState = None;
    pUVar4 = UDS_DungeonEvent::GetEvent();
    if (pUVar4 == (UDS_DungeonEvent *)0x0) {
      return;
    }
    FDS_EventDelegate<bool_const_>::Broadcast(&pUVar4->OnDungeonInOut,false);
    return;
  }
  pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar5 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar3);
  EVar1 = pFVar5->MemberState;
  if (EVar1 == this->PreMyMemberState) {
    return;
  }
  pUVar4 = UDS_DungeonEvent::GetEvent();
  if (pUVar4 != (UDS_DungeonEvent *)0x0) {
    if (EVar1 == DungeonInPlay) {
      bVar2 = true;
    }
    else {
      if (this->PreMyMemberState != DungeonInPlay) goto LAB_14bb1c9fe;
      bVar2 = false;
    }
    FDS_EventDelegate<bool_const_>::Broadcast(&pUVar4->OnDungeonInOut,bVar2);
  }
LAB_14bb1c9fe:
  this->PreMyMemberState = EVar1;
  return;
}

// OnCreateRaidParty @ 14bb1d6c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_DungeonManager::OnCreateRaidParty(UDS_DungeonManager *this)

{
  bool bVar1;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  UDS_WindowManager *this_00;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar3;
  undefined1 *local_res10;
  long64 local_res18 [2];
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  bVar1 = FDS_RaidPartyService::IsRaidPlaying();
  if (!bVar1) {
    bVar1 = IsDungeonEnterCondition(this,this->SelectedDungeonID,RaidPartyCreate);
    if (bVar1) {
      pTVar2 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateUObject<UDS_DungeonManager>
                         ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_30,this
                          ,(pmf_9b6dd274)0x14bb1d6c0);
      local_res10 = &DAT_0003348f;
      local_res18[0] = 0x3348e;
      local_res18[1] = 0x33459;
      bVar1 = FDS_RaidPartyService::IsPartyStateCheckLeave
                        (local_res18 + 1,local_res18,(long64 *)&local_res10,pTVar2);
      if ((bVar1) && (this_00 = UDS_WindowManager::GetInst(), this_00 != (UDS_WindowManager *)0x0))
      {
        TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
        CreateUObject<UDS_DungeonManager>
                  ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_48,
                   this,(pmf_bed09b88)0x14bb1f2a0);
        pTVar3 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                 TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                           ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            &local_30,
                            (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            local_48);
        UDS_WindowManager::OpenWindow(this_00,PartyCreate,pTVar3);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                   (FWriteAccessScope *)&local_30);
        if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_40.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
          local_38 = 0;
        }
        if (local_30.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
        }
        if (local_40.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_48);
      }
    }
    return;
  }
  local_30.AccessType = Reader;
  local_30._4_4_ = 0;
  local_30.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  local_30.bDestroyed = false;
  local_30._17_3_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi
            (0x347e6,Complete_None_01,
             (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> *)
             &local_30);
  return;
}

// OnManagementRaidParty @ 14bb1ed50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_DungeonManager::OnManagementRaidParty(UDS_DungeonManager *this)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  UDS_DungeonManager *local_res10;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  bVar1 = FDS_RaidPartyService::IsRaidPlaying();
  if (bVar1) {
    local_40.AccessType = Reader;
    local_40._4_4_ = 0;
    local_40.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    local_40.bDestroyed = false;
    local_40._17_3_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi
              (0x347e6,Complete_None_01,
               (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                *)&local_40);
    return;
  }
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_DungeonManager____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_DungeonManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_DungeonManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = OnOpenManagementWindow;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_40,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_58);
    UDS_WindowManager::OpenWindow(this_00,RaidPartySetting,pTVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}

// OnOpenCreatePartyWindow @ 14bb1f2a0

void __thiscall
UDS_DungeonManager::OnOpenCreatePartyWindow(UDS_DungeonManager *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_res18 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    MakeContext<FDS_ViewModelContext>(&local_28);
    if (local_28.Object == (FDS_ViewModelContext *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (local_28.Object)->ViewModelTemplateKey = CreatePartyPopup;
    local_18.Object = local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_18,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnOpenManagementWindow @ 14bb1ff60

void __thiscall
UDS_DungeonManager::OnOpenManagementWindow(UDS_DungeonManager *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_res18 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    MakeContext<FDS_ViewModelContext>(&local_28);
    if (local_28.Object == (FDS_ViewModelContext *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (local_28.Object)->ViewModelTemplateKey = RaidPartySetting;
    local_18.Object = local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_18,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnOpenRaidPartyFinderFilter @ 14bb20480

void __thiscall
UDS_DungeonManager::OnOpenRaidPartyFinderFilter
          (UDS_DungeonManager *this,UDS_UserWidget *param_1,EDS_DungeonType param_2)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar5;
  FDS_ViewModelContext *pFVar6;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_res20;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    pFVar3 = ::operator_new(0x28);
    pFVar6 = (FDS_ViewModelContext *)0x0;
    pFVar5 = pFVar6;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(undefined4 *)&pFVar3->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar3[1]._padding_ + 1) = 0;
      *(undefined2 *)((longlong)&pFVar3[1]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pFVar3[1]._padding_ + 7) = 0;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->ViewModelTemplateKey = None;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_RaidPartyFinderFilter__6B_;
      *(undefined1 *)&pFVar3[1]._padding_ = 0;
      pFVar5 = pFVar3;
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RaidPartyFinderFilter__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar5;
      pFVar6 = pFVar3;
    }
    if ((pFVar5 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = FDS_ViewModelContext_RaidPartyFinderFilter::StaticStruct();
    *(UScriptStruct **)&pFVar5->DerivedStaticStruct = pUVar4;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar6->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_38.Object = pFVar5;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    pFVar5->ViewModelTemplateKey = RaidPartyFinderFilter;
    *(EDS_DungeonType *)&pFVar5[1]._padding_ = param_2;
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar6->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_28.Object = pFVar5;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_28,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar6);
  }
  return;
}

// OnRaidPartyFinderFilter @ 14bb20df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_DungeonManager::OnRaidPartyFinderFilter(UDS_DungeonManager *this,EDS_DungeonType param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_WindowManager *this_00;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [8];
  FDelegateAllocation local_190;
  FWeakObjectPtr local_180;
  UDS_WindowManager *local_178;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_178 = UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_178 != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_178);
  }
  local_180.ObjectIndex = 0;
  local_180.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_178 != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_178);
  }
  FWeakObjectPtr::operator=(&local_180,(FObjectPtr)&local_178);
  bVar1 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&local_180,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_DungeonManager::OnRaidPartyFinderFilter",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x11d,L"windowManager is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    local_198 = (undefined1  [8])0x0;
    local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_190.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
               (FWriteAccessScope *)&local_170);
    local_158 = &local_190;
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_190);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_DungeonType____6B_
      ;
      *(EDS_DungeonType *)(puVar3 + 1) = param_1;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_DungeonManager____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_DungeonType____6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_DungeonManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_178 = (UDS_WindowManager *)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_DungeonManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_178);
      puVar3[4] = OnOpenRaidPartyFinderFilter;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    this_00 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_180);
    pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_170,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_198);
    UDS_WindowManager::OpenWindow(this_00,RaidPartyFindFilter,pTVar5);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
               (FWriteAccessScope *)&local_170);
    if ((local_190.DelegateSize != 0) &&
       (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_190.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_190,0,0,0x10);
      local_190.DelegateSize = 0;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    if (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_190.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_198);
  }
  return;
}

// OpenInDungeonUI @ 14bb26100

void __thiscall
UDS_DungeonManager::OpenInDungeonUI(UDS_DungeonManager *this,EDS_LoadingPhase param_1)

{
  bool bVar1;
  
  bVar1 = FDS_RaidPartyService::IsRaidPlaying();
  if (bVar1) {
    FDS_DungeonService::OpenDuneonExitButton();
    return;
  }
  return;
}

// RemoveAllDungeonNpc @ 14bb30980

void __thiscall UDS_DungeonManager::RemoveAllDungeonNpc(UDS_DungeonManager *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UDS_GameInstance *this_00;
  UClass *pUVar5;
  UDS_EntityManager *this_01;
  uint uVar6;
  longlong lVar7;
  
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 == (UDS_GameInstance *)0x0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_UDS_EntityManager_NoRegister();
  this_01 = (UDS_EntityManager *)UDS_GameInstance::GetManager(this_00,(FName)pUVar5->_padding_);
  if (this_01 != (UDS_EntityManager *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_EntityManager_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14bb309e1;
  }
  this_01 = (UDS_EntityManager *)0x0;
LAB_14bb309e1:
  if ((this_01 != (UDS_EntityManager *)0x0) &&
     (uVar6 = 0, 0 < (this->DungeonNpcEntityList).ArrayNum)) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->DungeonNpcEntityList).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UDS_EntityManager::RemoveEntity
                (this_01,*(ulong64 *)((this->DungeonNpcEntityList).AllocatorInstance.Data + lVar7),
                 false);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->DungeonNpcEntityList).ArrayNum);
  }
  return;
}

// RemoveDungeonNpc @ 14bb31210

void __thiscall UDS_DungeonManager::RemoveDungeonNpc(UDS_DungeonManager *this,ulong64 param_1)

{
  ulong64 local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::Remove
            (&this->DungeonNpcEntityList,local_res10);
  return;
}

// RequestFindRaidPartyList @ 14bb32410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_DungeonManager::RequestFindRaidPartyList(UDS_DungeonManager *this,EDS_DungeonType *param_1)

{
  undefined1 *puVar1;
  TMap<__int64,ds_proto::RaidPartyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>_>
  *this_00;
  FScriptContainerElement *pFVar2;
  EDS_DungeonType EVar3;
  int iVar4;
  void *_Src;
  code *pcVar5;
  bool bVar6;
  UObject *pUVar7;
  UDS_DungeonFilterData *this_01;
  UDS_LogManager *pUVar8;
  UObject *pUVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1a8 [8];
  FWeakObjectPtr local_1a0;
  FWeakObjectPtr local_198;
  TArray<int,TSizedDefaultAllocator<32>_> local_190;
  UObject *local_180;
  undefined8 local_178 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this_00 = &this->RaidPartyListDetailMap;
  bVar6 = 1 < *(int *)&(this->RaidPartyListDetailMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<__int64,ds_proto::RaidPartyInfo>,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<__int64,ds_proto::RaidPartyInfo>,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,ds_proto::RaidPartyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<__int64,ds_proto::RaidPartyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->RaidPartyListDetailMap).field_0x8);
  puVar1 = &(this->RaidPartyListDetailMap).field_0xc;
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->RaidPartyListDetailMap).field_0x2c;
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RaidPartyListDetailMap).field_0x10,0)
    ;
  }
  if (bVar6) {
    *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x48 = 1;
    TSet<TTuple<__int64,ds_proto::RaidPartyInfo>,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<__int64,ds_proto::RaidPartyInfo>,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  pFVar10 = (this->DungeonFilterDataList).AllocatorInstance.Data;
  iVar4 = (this->DungeonFilterDataList).ArrayNum;
  EVar3 = *param_1;
  pFVar2 = pFVar10 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->DungeonFilterDataList).ArrayNum != iVar4) {
      local_1a8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDS_DungeonFilterData>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_1a8);
    }
    if (pFVar10 == pFVar2) {
      local_198.ObjectIndex = 0;
      local_198.ObjectSerialNumber = 0;
      local_178[0] = 0;
      FWeakObjectPtr::operator=(&local_198,(FObjectPtr)local_178);
      goto LAB_14bb325ee;
    }
    pUVar7 = *(UObject **)pFVar10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar7 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
    }
    local_1a0.ObjectIndex = 0;
    local_1a0.ObjectSerialNumber = 0;
    local_180 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_1a0,(FObjectPtr)&local_180);
    bVar6 = TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr> *)&local_1a0,
                       (void *)0x0);
    if ((!bVar6) &&
       (pUVar7 = FWeakObjectPtr::Get(&local_1a0), *(EDS_DungeonType *)(pUVar7 + 1) == EVar3)) break;
    pFVar10 = pFVar10 + 8;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_1a0);
  if (pUVar7[1].field_0x19 == '\0') {
    this_01 = (UDS_DungeonFilterData *)FWeakObjectPtr::Get(&local_1a0);
    UDS_DungeonFilterData::InitFilterData(this_01);
  }
  local_198 = local_1a0;
LAB_14bb325ee:
  bVar6 = TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr> *)&local_198,(void *)0x0)
  ;
  if (bVar6) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_DungeonManager::RequestFindRaidPartyList",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_168.Ptr,0x239,L"dungeonFilterData is nullptr.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8678284964086676934>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_DungeonManager.cpp"
                       ,0x23a,"false");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pUVar7 = FWeakObjectPtr::Get(&local_198);
    pUVar9 = FWeakObjectPtr::Get(&local_198);
    local_190.ArrayNum = *(int *)&pUVar7[1].field_0x10;
    lVar11 = (longlong)local_190.ArrayNum;
    _Src = *(void **)&pUVar7[1].field_0x8;
    bVar6 = (bool)pUVar9[1].field_0x18;
    local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_190.ArrayNum == 0) {
      local_190.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_190.ArrayNum,0,&local_190.AllocatorInstance,local_190.ArrayNum,
                 &local_190.ArrayMax);
      memcpy(local_190.AllocatorInstance.Data,_Src,lVar11 << 2);
    }
    FDS_RaidPartyService::RequestRaidPartyList(*param_1,&local_190,bVar6);
  }
  return;
}

// Reset @ 14bb32ae0

void __thiscall UDS_DungeonManager::Reset(UDS_DungeonManager *this)

{
  UDS_DungeonEvent *pUVar1;
  
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedMyRaidPartyState,this);
    return;
  }
  return;
}

// ResetRaidPartyListDetailMap @ 14bb33660

void __thiscall UDS_DungeonManager::ResetRaidPartyListDetailMap(UDS_DungeonManager *this)

{
  undefined1 *puVar1;
  TMap<__int64,ds_proto::RaidPartyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->RaidPartyListDetailMap;
  bVar3 = 1 < *(int *)&(this->RaidPartyListDetailMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<__int64,ds_proto::RaidPartyInfo>,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<__int64,ds_proto::RaidPartyInfo>,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,ds_proto::RaidPartyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<__int64,ds_proto::RaidPartyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->RaidPartyListDetailMap).field_0x8);
  puVar1 = &(this->RaidPartyListDetailMap).field_0xc;
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->RaidPartyListDetailMap).field_0x2c;
  *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RaidPartyListDetailMap).field_0x10,0)
    ;
  }
  if (bVar3) {
    *(undefined4 *)&(this->RaidPartyListDetailMap).field_0x48 = 1;
    TSet<TTuple<__int64,ds_proto::RaidPartyInfo>,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<__int64,ds_proto::RaidPartyInfo>,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// SetRaidPartySimpleInfoList @ 14bb37650

void __thiscall
UDS_DungeonManager::SetRaidPartySimpleInfoList
          (UDS_DungeonManager *this,
          TArray<FDS_RaidPartySimpleInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FDS_RaidPartySimpleInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FDS_RaidPartySimpleInfo *pFVar4;
  bool bVar5;
  UDS_DungeonEvent *pUVar6;
  
  pTVar2 = &this->RaidPartySimpleInfoList;
  if (pTVar2 != param_1) {
    DestructItems<FDS_RaidPartySimpleInfo,int>
              ((FDS_RaidPartySimpleInfo *)(pTVar2->AllocatorInstance).Data,
               (this->RaidPartySimpleInfoList).ArrayNum);
    iVar3 = param_1->ArrayNum;
    piVar1 = &(this->RaidPartySimpleInfoList).ArrayMax;
    pFVar4 = (FDS_RaidPartySimpleInfo *)(param_1->AllocatorInstance).Data;
    (this->RaidPartySimpleInfoList).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FDS_RaidPartySimpleInfo,FDS_RaidPartySimpleInfo,int>
                ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  pUVar6 = UDS_DungeonEvent::GetEvent();
  if (pUVar6 != (UDS_DungeonEvent *)0x0) {
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar6->OnChangedDungeonList);
    if (bVar5) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar6->OnChangedDungeonList).Delegate);
      return;
    }
  }
  return;
}

// SetSelectedDungeonID @ 14bb37860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_DungeonManager::SetSelectedDungeonID(UDS_DungeonManager *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDS_DungeonBaseTableRow *pFVar4;
  UDS_LogManager *pUVar5;
  UDS_DungeonEvent *pUVar6;
  undefined1 auStackY_2b8 [32];
  TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> local_278 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  pFVar4 = FDS_DungeonBaseTableRow::Get((longlong)param_1,true);
  if (pFVar4 == (FDS_DungeonBaseTableRow *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_268._padding_ = (longlong)pFVar4;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_DungeonManager::SetSelectedDungeonID",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_268.Ptr,0x1c1,
                 L"dungeonBaseTableRow == nullptr (InDungeonID : %d)");
      if ((FDS_DungeonBaseTableRow *)local_268._padding_ != (FDS_DungeonBaseTableRow *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8678284964086677054>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_DungeonManager.cpp"
                       ,0x1c2,"false");
    if (bVar3) {
code_r0x00014bb37a12:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    UDS_PlayerData::GetMainPlayerData();
    bVar3 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals(local_278,(void *)0x0);
    if (bVar3) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_DungeonManager::SetSelectedDungeonID",0x28,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x1c9,L"playerData == nullptr");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8678284964086677046>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_DungeonManager.cpp"
                         ,0x1ca,"false");
      if (bVar3) goto code_r0x00014bb37a12;
    }
    else if (this->SelectedDungeonID != param_1) {
      this->SelectedDungeonID = param_1;
      pUVar6 = UDS_DungeonEvent::GetEvent();
      if (pUVar6 != (UDS_DungeonEvent *)0x0) {
        iVar1 = this->SelectedDungeonID;
        bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &pUVar6->OnSelectedDungeonID);
        if (bVar3) {
          TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                    (&(pUVar6->OnSelectedDungeonID).Delegate,iVar1);
        }
        iVar1 = pFVar4->LevelGroup;
        if (this->SelectedDungeonLevelGroup != iVar1) {
          this->SelectedDungeonLevelGroup = iVar1;
          bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &pUVar6->OnSelectedDungeonLevel);
          if (bVar3) {
            TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                      (&(pUVar6->OnSelectedDungeonLevel).Delegate,iVar1);
          }
        }
      }
    }
  }
  return;
}

