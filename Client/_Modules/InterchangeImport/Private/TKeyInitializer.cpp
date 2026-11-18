// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 5

// operator<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>_>_TTuple<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>_> @ 14e6759e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>_>
* __thiscall
TKeyInitializer<int_const_&>::
operator<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>_>_TTuple<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>_>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(int *)__return_storage_ptr__ = *this->Key;
  TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_> @ 14e6ad660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>
* __thiscall
TKeyInitializer<int_const_&>::
operator<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(int *)__return_storage_ptr__ = *this->Key;
  TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FString,FObjData::FMaterialData>_TTuple<FString,FObjData::FMaterialData> @ 14e6d86b0

TTuple<FString,FObjData::FMaterialData> * __thiscall
TKeyInitializer<FString_&&>::
operator<FString,FObjData::FMaterialData>_TTuple<FString,FObjData::FMaterialData>
          (TKeyInitializer<FString_&&> *this,
          TTuple<FString,FObjData::FMaterialData> *__return_storage_ptr__)

{
  FString *pFVar1;
  FMaterialData *pFVar2;
  FMaterialData local_188;
  
  memset(&local_188,0,0x178);
  pFVar2 = FObjData::FMaterialData::FMaterialData(&local_188);
  pFVar1 = this->Key;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(FScriptContainerElement **)__return_storage_ptr__ = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x8 = (pFVar1->Data).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0xc = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  FObjData::FMaterialData::FMaterialData
            ((FMaterialData *)&__return_storage_ptr__->field_0x10,pFVar2);
  FObjData::FMaterialData::~FMaterialData(&local_188);
  return __return_storage_ptr__;
}

// operator<int,UInterchangeStaticMeshFactory::FLodPayloads>_TTuple<int,UInterchangeStaticMeshFactory::FLodPayloads> @ 14e7016a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<int,UInterchangeStaticMeshFactory::FLodPayloads> * __thiscall
TKeyInitializer<int_const_&>::
operator<int,UInterchangeStaticMeshFactory::FLodPayloads>_TTuple<int,UInterchangeStaticMeshFactory::FLodPayloads>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int,UInterchangeStaticMeshFactory::FLodPayloads> *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [24];
  undefined8 uStack_190;
  void *local_188;
  undefined4 local_180;
  uint local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  void *local_168;
  ulonglong local_160;
  undefined1 local_158 [24];
  undefined8 uStack_140;
  void *local_138;
  undefined4 local_130;
  uint local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  void *local_118;
  ulonglong local_110;
  undefined1 local_108 [24];
  undefined8 uStack_f0;
  void *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  void *local_c8;
  ulonglong local_c0;
  undefined1 local_b8 [24];
  undefined8 uStack_a0;
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  void *local_78;
  ulonglong local_70;
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_17c = 0x80;
  local_1a8._0_8_ = (FScriptContainerElement *)0x0;
  local_170 = 0;
  local_160 = 0;
  local_120 = 0;
  local_110 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_80 = 0;
  local_70 = 0;
  local_30 = 0;
  local_20 = 0;
  local_1a8._16_8_ = 0;
  uStack_190 = 0;
  local_158._16_8_ = 0;
  uStack_140 = 0;
  local_108._16_8_ = 0;
  uStack_f0 = 0;
  local_b8._16_8_ = 0;
  uStack_a0 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_1a8._8_8_ = 0;
  local_188 = (void *)0x0;
  local_180 = 0;
  local_178 = 0xffffffff;
  local_174 = 0;
  local_168 = (void *)0x0;
  local_158._0_8_ = (FScriptContainerElement *)0x0;
  local_158._8_8_ = 0;
  local_138 = (void *)0x0;
  local_130 = 0;
  local_12c = 0x80;
  local_128 = 0xffffffff;
  local_124 = 0;
  local_118 = (void *)0x0;
  local_108._0_8_ = (FScriptContainerElement *)0x0;
  local_108._8_8_ = 0;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_dc = 0x80;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_c8 = (void *)0x0;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_b8._8_8_ = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (void *)0x0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  *(int *)__return_storage_ptr__ = *this->Key;
  UInterchangeStaticMeshFactory::FLodPayloads::FLodPayloads
            ((FLodPayloads *)&__return_storage_ptr__->field_0x8,(FLodPayloads *)local_1a8);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x3f0,0x10,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  local_70 = local_70 & 0xffffffff00000000;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_b8,0,local_b8._8_4_);
  iVar1 = SUB84(local_b8._8_8_,4);
  local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x3f0,0x10,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
  }
  local_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  local_c0 = local_c0 & 0xffffffff00000000;
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_108,0,local_108._8_4_);
  iVar1 = SUB84(local_108._8_8_,4);
  local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x3f0,0x10,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
  }
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_e0 = 0;
  if (0x80 < local_dc) {
    local_dc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
  }
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._0_8_);
  }
  local_110 = local_110 & 0xffffffff00000000;
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_158,0,local_158._8_4_);
  iVar1 = SUB84(local_158._8_8_,4);
  local_158._8_8_ = local_158._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x3f0,0x10,0,(ForAnyElementType *)local_158,0,(int *)(local_158 + 0xc));
  }
  local_128 = 0xffffffff;
  local_124 = 0;
  local_130 = 0;
  if (0x80 < local_12c) {
    local_12c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10),0);
  }
  if (local_138 != (void *)0x0) {
    FMemory::Free(local_138);
  }
  if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_158._0_8_);
  }
  local_160 = local_160 & 0xffffffff00000000;
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_1a8,0,local_1a8._8_4_);
  iVar1 = SUB84(local_1a8._8_8_,4);
  local_1a8._8_8_ = local_1a8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x3f0,0x10,0,(ForAnyElementType *)local_1a8,0,(int *)(local_1a8 + 0xc));
  }
  local_178 = 0xffffffff;
  local_174 = 0;
  local_180 = 0;
  if (0x80 < local_17c) {
    local_17c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10),0);
  }
  if (local_188 != (void *)0x0) {
    FMemory::Free(local_188);
  }
  if ((FScriptContainerElement *)local_1a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1a8._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload> @ 14e701b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload> * __thiscall
TKeyInitializer<FInterchangeMeshPayLoadKey_const_&>::
operator<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>
          (TKeyInitializer<FInterchangeMeshPayLoadKey_const_&> *this,
          TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload> *__return_storage_ptr__)

{
  FInterchangeMeshPayLoadKey *pFVar1;
  undefined1 auStack_3f8 [32];
  FMeshPayload local_3d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  pFVar1 = this->Key;
  memset(&local_3d8.PayloadData,0,0x340);
  local_3d8.Transform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_3d8.Transform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_3d8.Transform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_3d8.Transform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_3d8.Transform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_3d8.Transform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_3d8._849_8_ = 0;
  local_3d8._padding_._1_4_ = 0;
  local_3d8._padding_._5_2_ = 0;
  local_3d8._padding_._7_1_ = 0;
  local_3d8.MeshName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3d8.MeshName.Data.ArrayNum = 0;
  local_3d8.MeshName.Data.ArrayMax = 0;
  local_3d8.PayloadData.bIsSet = false;
  ::FString::FString((FString *)__return_storage_ptr__,&pFVar1->UniqueId);
  __return_storage_ptr__->field_0x10 = pFVar1->Type;
  *(int *)&__return_storage_ptr__->field_0x14 = pFVar1->FrameNumber;
  UE::Interchange::FMeshPayload::FMeshPayload
            ((FMeshPayload *)&__return_storage_ptr__->field_0x20,&local_3d8);
  if (local_3d8.PayloadData.bIsSet != false) {
    if (local_3d8.PayloadData.TypedValue.NaniteAssemblyDescription.bIsSet != false) {
      UE::Interchange::FNaniteAssemblyDescription::~FNaniteAssemblyDescription
                (&local_3d8.PayloadData.TypedValue.NaniteAssemblyDescription.TypedValue);
    }
    if (local_3d8.PayloadData.TypedValue.MorphTargetName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.PayloadData.TypedValue.MorphTargetName.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_3d8.PayloadData.TypedValue.JointNames.AllocatorInstance.Data,
               local_3d8.PayloadData.TypedValue.JointNames.ArrayNum);
    if (local_3d8.PayloadData.TypedValue.JointNames.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.PayloadData.TypedValue.JointNames.AllocatorInstance.Data);
    }
    FMeshDescription::~FMeshDescription((FMeshDescription *)&local_3d8.PayloadData);
  }
  if (local_3d8.MeshName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.MeshName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

