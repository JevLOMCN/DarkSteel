// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// ~FDS_RaidPartyMemberSyncData @ 14b5f78c0

void __thiscall
FDS_RaidPartyMemberSyncData::~FDS_RaidPartyMemberSyncData(FDS_RaidPartyMemberSyncData *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->BuffMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BuffMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_BuffInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_BuffInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_BuffInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BuffMap);
  *(undefined4 *)&(this->StatusCurMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StatusCurMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->StatusCurMap);
  *(undefined4 *)&(this->StatusMaxMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StatusMaxMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->StatusMaxMap);
  return;
}

// operator= @ 14b5f7cf0

FDS_RaidPartyMemberSyncData * __thiscall
FDS_RaidPartyMemberSyncData::operator=
          (FDS_RaidPartyMemberSyncData *this,FDS_RaidPartyMemberSyncData *param_1)

{
  TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
  *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  TMap<EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>_>
  *this_01;
  TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
  *this_02;
  int iVar3;
  double dVar4;
  
  this_00 = &this->StatusMaxMap;
  this->PlayerEntityId = param_1->PlayerEntityId;
  this->PlayerUID = param_1->PlayerUID;
  this->CharId = param_1->CharId;
  dVar4 = (param_1->Position).field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = dVar4;
  (this->Position).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  this->CharEntityId = param_1->CharEntityId;
  this->IsDead = param_1->IsDead;
  this->ZoneID = param_1->ZoneID;
  if (this_00 != &param_1->StatusMaxMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->StatusMaxMap).field_0x38,
               (int *)&(this->StatusMaxMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->StatusMaxMap).field_0x38,
               *(int *)&(param_1->StatusMaxMap).field_0x48);
    iVar3 = *(int *)&(param_1->StatusMaxMap).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(this_00,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar3,(ForAnyElementType *)this_00,(int *)&(this->StatusMaxMap).field_0x8,
               (int *)&(this->StatusMaxMap).field_0xc);
    puVar1 = &(param_1->StatusMaxMap).field_0x10;
    puVar2 = &(this->StatusMaxMap).field_0x10;
    *(undefined4 *)&(this->StatusMaxMap).field_0x30 =
         *(undefined4 *)&(param_1->StatusMaxMap).field_0x30;
    *(undefined4 *)&(this->StatusMaxMap).field_0x34 =
         *(undefined4 *)&(param_1->StatusMaxMap).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_00,*(void **)&param_1->StatusMaxMap,(longlong)iVar3 << 4);
    }
  }
  this_01 = &this->StatusCurMap;
  if (this_01 != &param_1->StatusCurMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->StatusCurMap).field_0x38,
               (int *)&(this->StatusCurMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->StatusCurMap).field_0x38,
               *(int *)&(param_1->StatusCurMap).field_0x48);
    iVar3 = *(int *)&(param_1->StatusCurMap).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(this_01,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar3,(ForAnyElementType *)this_01,(int *)&(this->StatusCurMap).field_0x8,
               (int *)&(this->StatusCurMap).field_0xc);
    puVar1 = &(param_1->StatusCurMap).field_0x10;
    puVar2 = &(this->StatusCurMap).field_0x10;
    *(undefined4 *)&(this->StatusCurMap).field_0x30 =
         *(undefined4 *)&(param_1->StatusCurMap).field_0x30;
    *(undefined4 *)&(this->StatusCurMap).field_0x34 =
         *(undefined4 *)&(param_1->StatusCurMap).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_01,*(void **)&param_1->StatusCurMap,(longlong)iVar3 << 4);
    }
  }
  this_02 = &this->BuffMap;
  if (this_02 != &param_1->BuffMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->BuffMap).field_0x38,
               (int *)&(this->BuffMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->BuffMap).field_0x38,
               *(int *)&(param_1->BuffMap).field_0x48);
    iVar3 = *(int *)&(param_1->BuffMap).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<int,FDS_BuffInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<int,FDS_BuffInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_02,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar3,(ForAnyElementType *)this_02,(int *)&(this->BuffMap).field_0x8,
               (int *)&(this->BuffMap).field_0xc);
    puVar1 = &(param_1->BuffMap).field_0x10;
    puVar2 = &(this->BuffMap).field_0x10;
    *(undefined4 *)&(this->BuffMap).field_0x30 = *(undefined4 *)&(param_1->BuffMap).field_0x30;
    *(undefined4 *)&(this->BuffMap).field_0x34 = *(undefined4 *)&(param_1->BuffMap).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_02,*(void **)&param_1->BuffMap,(longlong)iVar3 * 0x38);
    }
  }
  return this;
}

// FDS_RaidPartyMemberSyncData @ 14b8b1e90

FDS_RaidPartyMemberSyncData * __thiscall
FDS_RaidPartyMemberSyncData::FDS_RaidPartyMemberSyncData(FDS_RaidPartyMemberSyncData *this)

{
  this->PlayerEntityId = 0;
  this->PlayerUID = 0;
  this->CharId = 0;
  this->CharEntityId = 0;
  this->IsDead = false;
  this->ZoneID = 0;
  *(undefined8 *)&this->StatusMaxMap = 0;
  *(undefined8 *)&(this->StatusMaxMap).field_0x8 = 0;
  *(undefined8 *)&(this->StatusMaxMap).field_0x20 = 0;
  *(undefined4 *)&(this->StatusMaxMap).field_0x28 = 0;
  *(undefined4 *)&(this->StatusMaxMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StatusMaxMap).field_0x34 = 0;
  *(undefined4 *)&(this->StatusMaxMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StatusMaxMap).field_0x40 = 0;
  *(undefined4 *)&(this->StatusMaxMap).field_0x48 = 0;
  *(undefined8 *)&this->StatusCurMap = 0;
  *(undefined8 *)&(this->StatusCurMap).field_0x8 = 0;
  *(undefined8 *)&(this->StatusCurMap).field_0x20 = 0;
  *(undefined4 *)&(this->StatusCurMap).field_0x28 = 0;
  *(undefined4 *)&(this->StatusCurMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StatusCurMap).field_0x34 = 0;
  *(undefined4 *)&(this->StatusCurMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StatusCurMap).field_0x40 = 0;
  *(undefined4 *)&(this->StatusCurMap).field_0x48 = 0;
  *(undefined8 *)&this->BuffMap = 0;
  *(undefined8 *)&(this->BuffMap).field_0x8 = 0;
  *(undefined8 *)&(this->BuffMap).field_0x20 = 0;
  *(undefined4 *)&(this->BuffMap).field_0x28 = 0;
  *(undefined4 *)&(this->BuffMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BuffMap).field_0x34 = 0;
  *(undefined4 *)&(this->BuffMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BuffMap).field_0x40 = 0;
  *(undefined4 *)&(this->BuffMap).field_0x48 = 0;
  return this;
}

// GetStatusRatio @ 14b8c8ca0

float __thiscall
FDS_RaidPartyMemberSyncData::GetStatusRatio
          (FDS_RaidPartyMemberSyncData *this,EDS_StatusType param_1)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  undefined1 *puVar6;
  
  if (*(int *)&(this->StatusCurMap).field_0x8 != *(int *)&(this->StatusCurMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->StatusCurMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->StatusCurMap).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->StatusCurMap).field_0x48 - Hp & param_1) *
                              4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->StatusCurMap;
      do {
        if (*(EDS_StatusType *)(lVar2 + (longlong)iVar3 * 0x10) == param_1) {
          if (*(int *)&(this->StatusMaxMap).field_0x8 == *(int *)&(this->StatusMaxMap).field_0x34) {
            return 0.0;
          }
          puVar6 = *(undefined1 **)&(this->StatusMaxMap).field_0x40;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &(this->StatusMaxMap).field_0x38;
          }
          iVar3 = *(int *)(puVar6 + (ulonglong)
                                    (*(int *)&(this->StatusMaxMap).field_0x48 - Hp & param_1) * 4);
          if (iVar3 == -1) {
            return 0.0;
          }
          do {
            if (*(EDS_StatusType *)(*(longlong *)&this->StatusMaxMap + (longlong)iVar3 * 0x10) ==
                param_1) {
              pfVar4 = TMapBase<enum_EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,float,0>_>
                       ::FindChecked(&this->StatusCurMap,Hp);
              fVar1 = *pfVar4;
              piVar5 = TMapBase<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
                       ::FindChecked(&this->StatusMaxMap,Hp);
              if ((float)*piVar5 <= 0.0) {
                return 0.0;
              }
              return fVar1 / (float)*piVar5;
            }
            iVar3 = *(int *)(*(longlong *)&this->StatusMaxMap + 8 + (longlong)iVar3 * 0x10);
          } while (iVar3 != -1);
          return 0.0;
        }
        iVar3 = *(int *)(lVar2 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  return 0.0;
}

// UpdataRaidPartyMemberSyncData @ 14b8f1b90

void __thiscall
FDS_RaidPartyMemberSyncData::UpdataRaidPartyMemberSyncData
          (FDS_RaidPartyMemberSyncData *this,RaidPartyMemberSyncResponse *param_1)

{
  undefined1 *puVar1;
  Vector *pVVar2;
  StatusFloats *pSVar3;
  ulonglong uVar4;
  StatusIntegers *pSVar5;
  BuffInfo *pBVar6;
  Buff *pBVar7;
  StatusFloats *pSVar8;
  StatusIntegers *pSVar9;
  BuffInfo *pBVar10;
  Vector *pVVar11;
  Impl_ *pIVar12;
  Impl_ *pIVar13;
  Impl_ *pIVar14;
  int local_res8 [2];
  undefined1 local_res10 [24];
  int *local_88;
  FDS_BuffInfo *local_80;
  FDS_BuffInfo local_78;
  
  this->PlayerEntityId = (param_1->_impl_).player_entity_id_;
  this->PlayerUID = (param_1->_impl_).player_uid_;
  this->CharId = (param_1->_impl_).char_id_;
  pVVar2 = (param_1->_impl_).position_;
  pVVar11 = &_Vector_default_instance_._instance;
  if (pVVar2 != (Vector *)0x0) {
    pVVar11 = pVVar2;
  }
  DS_Util::SetFVector(&this->Position,pVVar11);
  this->CharEntityId = (param_1->_impl_).char_entity_id_;
  this->IsDead = (param_1->_impl_).is_dead_;
  this->ZoneID = (param_1->_impl_).zone_id_;
  TSet<TTuple<enum_EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,float,0>,FDefaultSetAllocator>
  ::Reset(&this->StatusCurMap);
  pSVar3 = (param_1->_impl_).cur_stats_;
  pSVar8 = &server_msg::_StatusFloats_default_instance_._instance;
  if (pSVar3 != (StatusFloats *)0x0) {
    pSVar8 = pSVar3;
  }
  uVar4 = *(ulonglong *)&(pSVar8->_impl_).status_list_;
  if ((uVar4 & 1) == 0) {
    pIVar12 = &pSVar8->_impl_;
  }
  else {
    pIVar12 = (Impl_ *)(uVar4 + 7);
  }
  puVar1 = &(pIVar12->status_list_).field_0x0 +
           (longlong)*(int *)&(pSVar8->_impl_).status_list_.field_0x8 * 8;
  if (pIVar12 != (Impl_ *)puVar1) {
    local_88 = (int *)local_res10;
    local_80 = (FDS_BuffInfo *)local_res8;
    do {
      local_res8[0] = *(int *)(*(longlong *)&pIVar12->status_list_ + 0x1c);
      local_res10._0_4_ = *(int *)(*(longlong *)&pIVar12->status_list_ + 0x18);
      TSet<TTuple<enum_EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,float,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_StatusType_&&,float_&&>_>
                (&this->StatusCurMap,
                 (TPairInitializer<EDS_StatusType_&&,float_&&> *)(local_res10 + 8),(bool *)&local_88
                );
      pIVar12 = (Impl_ *)&(pIVar12->status_list_).field_0x8;
    } while (pIVar12 != (Impl_ *)puVar1);
  }
  TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
  ::Reset(&this->StatusMaxMap);
  pSVar5 = (param_1->_impl_).max_stats_;
  pSVar9 = &server_msg::_StatusIntegers_default_instance_._instance;
  if (pSVar5 != (StatusIntegers *)0x0) {
    pSVar9 = pSVar5;
  }
  uVar4 = *(ulonglong *)&(pSVar9->_impl_).status_list_;
  if ((uVar4 & 1) == 0) {
    pIVar13 = &pSVar9->_impl_;
  }
  else {
    pIVar13 = (Impl_ *)(uVar4 + 7);
  }
  puVar1 = &(pIVar13->status_list_).field_0x0 +
           (longlong)*(int *)&(pSVar9->_impl_).status_list_.field_0x8 * 8;
  if (pIVar13 != (Impl_ *)puVar1) {
    local_88 = (int *)local_res10;
    local_80 = (FDS_BuffInfo *)local_res8;
    do {
      local_res8[0] = *(int *)(*(longlong *)&pIVar13->status_list_ + 0x1c);
      local_res10._0_4_ = *(int *)(*(longlong *)&pIVar13->status_list_ + 0x18);
      TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_StatusType_&&,int_&&>_>
                (&this->StatusMaxMap,(TPairInitializer<EDS_StatusType_&&,int_&&> *)(local_res10 + 8)
                 ,(bool *)&local_88);
      pIVar13 = (Impl_ *)&(pIVar13->status_list_).field_0x8;
    } while (pIVar13 != (Impl_ *)puVar1);
  }
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
           *)&this->BuffMap);
  pBVar6 = (param_1->_impl_).buffs_;
  pBVar10 = &server_msg::_BuffInfo_default_instance_._instance;
  if (pBVar6 != (BuffInfo *)0x0) {
    pBVar10 = pBVar6;
  }
  uVar4 = *(ulonglong *)&(pBVar10->_impl_).buffs_;
  if ((uVar4 & 1) == 0) {
    pIVar14 = &pBVar10->_impl_;
  }
  else {
    pIVar14 = (Impl_ *)(uVar4 + 7);
  }
  puVar1 = &(pIVar14->buffs_).field_0x0 + (longlong)*(int *)&(pBVar10->_impl_).buffs_.field_0x8 * 8;
  if (pIVar14 != (Impl_ *)puVar1) {
    local_88 = local_res8;
    local_80 = &local_78;
    do {
      pBVar7 = *(Buff **)&pIVar14->buffs_;
      local_78.StartTicks = 0.0;
      local_78.BuffID = 0;
      local_78.BuffLevel = 0;
      local_78.BuffOverlapCount = 0;
      local_78.TriggerEntityID = 0;
      local_78.BuffApplyType = Buff;
      FDS_BuffInfo::SetInfoByBuffMsg(&local_78,pBVar7);
      local_res8[0] = (pBVar7->_impl_).buff_id_;
      TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_&&,FDS_BuffInfo_&>_>
                ((TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
                  *)&this->BuffMap,(TPairInitializer<int_&&,FDS_BuffInfo_&> *)local_res10,
                 (bool *)&local_88);
      pIVar14 = (Impl_ *)&(pIVar14->buffs_).field_0x8;
    } while (pIVar14 != (Impl_ *)puVar1);
  }
  return;
}

// operator= @ 14bbeb550

FDS_RaidPartyMemberSyncData * __thiscall
FDS_RaidPartyMemberSyncData::operator=
          (FDS_RaidPartyMemberSyncData *this,FDS_RaidPartyMemberSyncData *param_1)

{
  TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
  *pTVar1;
  TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
  *pTVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  TMap<EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>_>
  *pTVar5;
  TMap<EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>_>
  *pTVar6;
  TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
  *pTVar7;
  TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
  *pTVar8;
  void *pvVar9;
  double dVar10;
  
  pTVar1 = &param_1->StatusMaxMap;
  this->PlayerEntityId = param_1->PlayerEntityId;
  pTVar2 = &this->StatusMaxMap;
  this->PlayerUID = param_1->PlayerUID;
  this->CharId = param_1->CharId;
  dVar10 = (param_1->Position).field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = dVar10;
  (this->Position).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  this->CharEntityId = param_1->CharEntityId;
  this->IsDead = param_1->IsDead;
  this->ZoneID = param_1->ZoneID;
  if (pTVar2 != pTVar1) {
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
    puVar3 = &(param_1->StatusMaxMap).field_0x10;
    *(undefined8 *)pTVar2 = *(undefined8 *)pTVar1;
    puVar4 = &(this->StatusMaxMap).field_0x10;
    *(undefined8 *)pTVar1 = 0;
    *(undefined4 *)&(this->StatusMaxMap).field_0x8 =
         *(undefined4 *)&(param_1->StatusMaxMap).field_0x8;
    *(undefined4 *)&(this->StatusMaxMap).field_0xc =
         *(undefined4 *)&(param_1->StatusMaxMap).field_0xc;
    *(undefined8 *)&(param_1->StatusMaxMap).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->StatusMaxMap).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar9 = *(void **)&(this->StatusMaxMap).field_0x20;
      if (pvVar9 != (void *)0x0) {
        FMemory::Free(pvVar9);
      }
      *(undefined8 *)&(this->StatusMaxMap).field_0x20 =
           *(undefined8 *)&(param_1->StatusMaxMap).field_0x20;
      *(undefined8 *)&(param_1->StatusMaxMap).field_0x20 = 0;
      *(undefined4 *)&(this->StatusMaxMap).field_0x28 =
           *(undefined4 *)&(param_1->StatusMaxMap).field_0x28;
      *(undefined4 *)&(this->StatusMaxMap).field_0x2c =
           *(undefined4 *)&(param_1->StatusMaxMap).field_0x2c;
      *(undefined8 *)&(param_1->StatusMaxMap).field_0x28 = 0;
    }
    *(undefined4 *)&(this->StatusMaxMap).field_0x30 =
         *(undefined4 *)&(param_1->StatusMaxMap).field_0x30;
    *(undefined4 *)&(this->StatusMaxMap).field_0x34 =
         *(undefined4 *)&(param_1->StatusMaxMap).field_0x34;
    *(undefined4 *)&(param_1->StatusMaxMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->StatusMaxMap).field_0x34 = 0;
    if (*(longlong *)&(param_1->StatusMaxMap).field_0x40 == 0) {
      *(undefined4 *)&(this->StatusMaxMap).field_0x38 =
           *(undefined4 *)&(param_1->StatusMaxMap).field_0x38;
    }
    pvVar9 = *(void **)&(this->StatusMaxMap).field_0x40;
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
    *(undefined8 *)&(this->StatusMaxMap).field_0x40 =
         *(undefined8 *)&(param_1->StatusMaxMap).field_0x40;
    *(undefined8 *)&(param_1->StatusMaxMap).field_0x40 = 0;
    *(undefined4 *)&(this->StatusMaxMap).field_0x48 =
         *(undefined4 *)&(param_1->StatusMaxMap).field_0x48;
    *(undefined4 *)&(param_1->StatusMaxMap).field_0x48 = 0;
  }
  pTVar5 = &param_1->StatusCurMap;
  pTVar6 = &this->StatusCurMap;
  if (pTVar6 != pTVar5) {
    if (*(void **)pTVar6 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar6);
    }
    puVar3 = &(param_1->StatusCurMap).field_0x10;
    *(undefined8 *)pTVar6 = *(undefined8 *)pTVar5;
    puVar4 = &(this->StatusCurMap).field_0x10;
    *(undefined8 *)pTVar5 = 0;
    *(undefined4 *)&(this->StatusCurMap).field_0x8 =
         *(undefined4 *)&(param_1->StatusCurMap).field_0x8;
    *(undefined4 *)&(this->StatusCurMap).field_0xc =
         *(undefined4 *)&(param_1->StatusCurMap).field_0xc;
    *(undefined8 *)&(param_1->StatusCurMap).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->StatusCurMap).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar9 = *(void **)&(this->StatusCurMap).field_0x20;
      if (pvVar9 != (void *)0x0) {
        FMemory::Free(pvVar9);
      }
      *(undefined8 *)&(this->StatusCurMap).field_0x20 =
           *(undefined8 *)&(param_1->StatusCurMap).field_0x20;
      *(undefined8 *)&(param_1->StatusCurMap).field_0x20 = 0;
      *(undefined4 *)&(this->StatusCurMap).field_0x28 =
           *(undefined4 *)&(param_1->StatusCurMap).field_0x28;
      *(undefined4 *)&(this->StatusCurMap).field_0x2c =
           *(undefined4 *)&(param_1->StatusCurMap).field_0x2c;
      *(undefined8 *)&(param_1->StatusCurMap).field_0x28 = 0;
    }
    *(undefined4 *)&(this->StatusCurMap).field_0x30 =
         *(undefined4 *)&(param_1->StatusCurMap).field_0x30;
    *(undefined4 *)&(this->StatusCurMap).field_0x34 =
         *(undefined4 *)&(param_1->StatusCurMap).field_0x34;
    *(undefined4 *)&(param_1->StatusCurMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->StatusCurMap).field_0x34 = 0;
    if (*(longlong *)&(param_1->StatusCurMap).field_0x40 == 0) {
      *(undefined4 *)&(this->StatusCurMap).field_0x38 =
           *(undefined4 *)&(param_1->StatusCurMap).field_0x38;
    }
    pvVar9 = *(void **)&(this->StatusCurMap).field_0x40;
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
    *(undefined8 *)&(this->StatusCurMap).field_0x40 =
         *(undefined8 *)&(param_1->StatusCurMap).field_0x40;
    *(undefined8 *)&(param_1->StatusCurMap).field_0x40 = 0;
    *(undefined4 *)&(this->StatusCurMap).field_0x48 =
         *(undefined4 *)&(param_1->StatusCurMap).field_0x48;
    *(undefined4 *)&(param_1->StatusCurMap).field_0x48 = 0;
  }
  pTVar7 = &param_1->BuffMap;
  pTVar8 = &this->BuffMap;
  if (pTVar8 != pTVar7) {
    if (*(void **)pTVar8 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar8);
    }
    puVar3 = &(param_1->BuffMap).field_0x10;
    *(undefined8 *)pTVar8 = *(undefined8 *)pTVar7;
    puVar4 = &(this->BuffMap).field_0x10;
    *(undefined8 *)pTVar7 = 0;
    *(undefined4 *)&(this->BuffMap).field_0x8 = *(undefined4 *)&(param_1->BuffMap).field_0x8;
    *(undefined4 *)&(this->BuffMap).field_0xc = *(undefined4 *)&(param_1->BuffMap).field_0xc;
    *(undefined8 *)&(param_1->BuffMap).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->BuffMap).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar9 = *(void **)&(this->BuffMap).field_0x20;
      if (pvVar9 != (void *)0x0) {
        FMemory::Free(pvVar9);
      }
      *(undefined8 *)&(this->BuffMap).field_0x20 = *(undefined8 *)&(param_1->BuffMap).field_0x20;
      *(undefined8 *)&(param_1->BuffMap).field_0x20 = 0;
      *(undefined4 *)&(this->BuffMap).field_0x28 = *(undefined4 *)&(param_1->BuffMap).field_0x28;
      *(undefined4 *)&(this->BuffMap).field_0x2c = *(undefined4 *)&(param_1->BuffMap).field_0x2c;
      *(undefined8 *)&(param_1->BuffMap).field_0x28 = 0;
    }
    *(undefined4 *)&(this->BuffMap).field_0x30 = *(undefined4 *)&(param_1->BuffMap).field_0x30;
    *(undefined4 *)&(this->BuffMap).field_0x34 = *(undefined4 *)&(param_1->BuffMap).field_0x34;
    *(undefined4 *)&(param_1->BuffMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->BuffMap).field_0x34 = 0;
    if (*(longlong *)&(param_1->BuffMap).field_0x40 == 0) {
      *(undefined4 *)&(this->BuffMap).field_0x38 = *(undefined4 *)&(param_1->BuffMap).field_0x38;
    }
    pvVar9 = *(void **)&(this->BuffMap).field_0x40;
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
    *(undefined8 *)&(this->BuffMap).field_0x40 = *(undefined8 *)&(param_1->BuffMap).field_0x40;
    *(undefined8 *)&(param_1->BuffMap).field_0x40 = 0;
    *(undefined4 *)&(this->BuffMap).field_0x48 = *(undefined4 *)&(param_1->BuffMap).field_0x48;
    *(undefined4 *)&(param_1->BuffMap).field_0x48 = 0;
  }
  return this;
}

