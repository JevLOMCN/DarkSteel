// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 15

// FSchemaCategoryInstanceBase @ 14ec22960

/* WARNING: Enum "Type": Some values do not have unique names */

FSchemaCategoryInstanceBase * __thiscall
UE::Online::Private::FSchemaCategoryInstanceBase::FSchemaCategoryInstanceBase
          (FSchemaCategoryInstanceBase *this,FName *param_1,FName *param_2,FName *param_3,
          TSharedRef<UE::Online::FSchemaRegistry_const_,1> *param_4)

{
  TSharedPtr<UE::Online::FSchemaDefinition_const_,1> *pTVar1;
  TSharedPtr<UE::Online::FSchemaDefinition_const_,1> *pTVar2;
  FSchemaCategoryDefinition **ppFVar3;
  atomic<int> *paVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FString local_78;
  FString local_68;
  FString local_58;
  TSharedPtr<UE::Online::FSchemaDefinition_const_,1> local_48;
  TSharedPtr<UE::Online::FSchemaDefinition_const_,1> local_38;
  
  this->_padding_ = (longlong)&___7FSchemaCategoryInstanceBase_Private_Online_UE__6B_;
  (this->SchemaRegistry).Object = param_4->Object;
  pTVar6 = (param_4->SharedReferenceCount).ReferenceController;
  (this->SchemaRegistry).SharedReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->BaseSchemaDefinition;
  pTVar2 = &this->DerivedSchemaDefinition;
  pTVar1->Object = (FSchemaDefinition *)0x0;
  pTVar2->Object = (FSchemaDefinition *)0x0;
  (this->DerivedSchemaDefinition).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  ppFVar3 = &this->DerivedSchemaCategoryDefinition;
  (this->BaseSchemaDefinition).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *ppFVar3 = (FSchemaCategoryDefinition *)0x0;
  this->BaseSchemaCategoryDefinition = (FSchemaCategoryDefinition *)0x0;
  (this->PreparedClientChanges).bIsSet = false;
  (this->PreparedServiceChanges).bIsSet = false;
  this->LastSentSchemaCompatibilityId = 0;
  bVar7 = InitializeSchemaDefinition
                    (this,param_2,(FSchemaDefinition *)0x0,param_3,pTVar1,
                     &this->BaseSchemaCategoryDefinition);
  if (((bVar7) && (*param_1 != (FName)0x0)) &&
     (bVar7 = InitializeSchemaDefinition(this,param_1,pTVar1->Object,param_3,pTVar2,ppFVar3), !bVar7
     )) {
    if (1 < (byte)LogOnlineSchema._0_1_) {
      ::FName::ToString(param_3,&local_58);
      ::FName::ToString(param_2,&local_68);
      ::FName::ToString(param_1,&local_78);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if (pTVar1 != &local_48) {
      pTVar1->Object = (FSchemaDefinition *)0x0;
      pTVar6 = (this->BaseSchemaDefinition).SharedReferenceCount.ReferenceController;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        (this->BaseSchemaDefinition).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        LOCK();
        paVar4 = &pTVar6->SharedReferenceCount;
        aVar5 = *paVar4;
        *paVar4 = (atomic<int>)((int)*paVar4 + -1);
        UNLOCK();
        if (aVar5 == (atomic<int>)0x1) {
          (**(code **)pTVar6->_padding_)();
          LOCK();
          paVar4 = &pTVar6->WeakReferenceCount;
          aVar5 = *paVar4;
          *paVar4 = (atomic<int>)((int)*paVar4 + -1);
          UNLOCK();
          if (aVar5 == (atomic<int>)0x1) {
            (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this->BaseSchemaCategoryDefinition = (FSchemaCategoryDefinition *)0x0;
    if (pTVar2 != &local_38) {
      pTVar2->Object = (FSchemaDefinition *)0x0;
      pTVar6 = (this->DerivedSchemaDefinition).SharedReferenceCount.ReferenceController;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        (this->DerivedSchemaDefinition).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        LOCK();
        paVar4 = &pTVar6->SharedReferenceCount;
        aVar5 = *paVar4;
        *paVar4 = (atomic<int>)((int)*paVar4 + -1);
        UNLOCK();
        if (aVar5 == (atomic<int>)0x1) {
          (**(code **)pTVar6->_padding_)();
          LOCK();
          paVar4 = &pTVar6->WeakReferenceCount;
          aVar5 = *paVar4;
          *paVar4 = (atomic<int>)((int)*paVar4 + -1);
          UNLOCK();
          if (aVar5 == (atomic<int>)0x1) {
            (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    *ppFVar3 = (FSchemaCategoryDefinition *)0x0;
  }
  return this;
}

// ~FSchemaCategoryInstanceBase @ 14ec24150

void __thiscall
UE::Online::Private::FSchemaCategoryInstanceBase::~FSchemaCategoryInstanceBase
          (FSchemaCategoryInstanceBase *this)

{
  void *pvVar1;
  
  if ((this->PreparedServiceChanges).bIsSet != false) {
    *(undefined4 *)&(this->PreparedServiceChanges).TypedValue.ClientDataSnapshot.field_0x48 = 0;
    pvVar1 = *(void **)&(this->PreparedServiceChanges).TypedValue.ClientDataSnapshot.field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(this->PreparedServiceChanges).TypedValue.ClientDataSnapshot);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->PreparedServiceChanges).TypedValue.DerivedSchemaDefinition.
               SharedReferenceCount.ReferenceController);
    FSchemaServiceClientChanges::~FSchemaServiceClientChanges
              ((FSchemaServiceClientChanges *)&this->PreparedServiceChanges);
  }
  if ((this->PreparedClientChanges).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->PreparedClientChanges).TypedValue.DerivedSchemaDefinition.SharedReferenceCount
               .ReferenceController);
    FSchemaServiceClientChanges::~FSchemaServiceClientChanges
              ((FSchemaServiceClientChanges *)&this->PreparedClientChanges);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BaseSchemaDefinition).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DerivedSchemaDefinition).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SchemaRegistry).SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 14ec24970

bool __thiscall
`UE::Online::Private::FSchemaCategoryInstanceBase::PrepareServiceSnapshot'::__l171::<lambda_2>::
operator()(void *this,TTuple<FName,UE::Online::FSchemaVariant> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)param_1;
  lVar2 = *(longlong *)this;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)(lVar2 + 0x118) != *(int *)(lVar2 + 0x144)) {
    lVar5 = *(longlong *)(lVar2 + 0x150);
    if (*(longlong *)(lVar2 + 0x150) == 0) {
      lVar5 = lVar2 + 0x148;
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar2 + 0x158) - 1U & (int)((ulonglong)lVar1 >> 0x20) + uVar3
                             ) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0x110) + (longlong)iVar4 * 0x30) == lVar1)
        goto LAB_14ec249ff;
        iVar4 = *(int *)(*(longlong *)(lVar2 + 0x110) + 0x28 + (longlong)iVar4 * 0x30);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14ec249ff:
  return iVar4 == -1;
}

// CommitClientChanges @ 14ec257b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Result * __thiscall
UE::Online::Private::FSchemaCategoryInstanceBase::CommitClientChanges
          (FSchemaCategoryInstanceBase *this,Result *__return_storage_ptr__)

{
  TOptional<UE::Online::Private::FSchemaCategoryInstanceBase::FPreparedClientChanges> *this_00;
  TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
  *pTVar1;
  TMap<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>_>
  *pTVar2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar3;
  code *pcVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  <lambda_1> <Var11;
  Result *pRVar12;
  FPreparedClientChanges *pFVar13;
  undefined1 auStackY_388 [32];
  TOptional<FName>_u_0 local_358;
  undefined1 local_350 [32];
  void *local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  ForElementType<FSetElementId> local_310;
  int local_308;
  undefined1 local_300 [32];
  void *local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  ForElementType<FSetElementId> local_2c0;
  int local_2b8;
  undefined1 local_2b0 [32];
  void *local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  ForElementType<FSetElementId> local_270;
  int local_268;
  TOptional<FName>_u_0 local_258;
  undefined1 local_250 [32];
  void *local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  ForElementType<FSetElementId> local_210;
  int local_208;
  undefined1 local_200 [32];
  void *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  ForElementType<FSetElementId> local_1c0;
  int local_1b8;
  undefined1 local_1b0 [32];
  void *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  ForElementType<FSetElementId> local_170;
  int local_168;
  FSchemaServiceClientChanges local_158;
  ulonglong local_58;
  
  uVar7 = _UNK_150631d98;
  uVar5 = ___xmm_00000000ffffffff0000008000000000;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_388;
  this_00 = &this->PreparedClientChanges;
  local_358 = (TOptional<FName>_u_0)0xffffffff;
  local_350._0_8_ = (FScriptContainerElement *)0x0;
  local_350._8_8_ = 0;
  local_330 = (void *)0x0;
  local_328 = ___xmm_00000000ffffffff0000008000000000;
  uStack_320 = _UNK_150631d98;
  local_310 = (ForElementType<FSetElementId>)0x0;
  local_308 = 0;
  local_300._0_8_ = (FScriptContainerElement *)0x0;
  local_300._8_8_ = 0;
  local_2e0 = (void *)0x0;
  local_2d8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_2d0 = _UNK_150631d98;
  local_2c0 = (ForElementType<FSetElementId>)0x0;
  local_2b8 = 0;
  local_2b0._0_8_ = (FScriptContainerElement *)0x0;
  local_2b0._8_8_ = 0;
  local_290 = (void *)0x0;
  local_288 = ___xmm_00000000ffffffff0000008000000000;
  uStack_280 = _UNK_150631d98;
  local_270 = (ForElementType<FSetElementId>)0x0;
  local_268 = 0;
  if ((this->PreparedClientChanges).bIsSet == false) {
    local_258.TypedValue.ComparisonIndex.Value = (FNameEntryId)0xffffffff;
    local_258.TypedValue.Number = 0;
    local_250._0_8_ = (FScriptContainerElement *)0x0;
    local_250._8_8_ = 0;
    local_230 = (void *)0x0;
    local_228 = ___xmm_00000000ffffffff0000008000000000;
    uStack_220 = _UNK_150631d98;
    local_210 = (ForElementType<FSetElementId>)0x0;
    local_208 = 0;
    TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                *)local_250,
               (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                *)local_350);
    local_200._0_8_ = (FScriptContainerElement *)0x0;
    local_200._8_8_ = 0;
    local_1e0 = (void *)0x0;
    local_1d8 = uVar5;
    uStack_1d0 = uVar7;
    local_1c0 = (ForElementType<FSetElementId>)0x0;
    local_1b8 = 0;
    TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                *)local_200,
               (TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                *)local_300);
    local_1b0._0_8_ = (FScriptContainerElement *)0x0;
    local_1b0._8_8_ = 0;
    local_190 = (void *)0x0;
    local_188 = uVar5;
    uStack_180 = uVar7;
    local_170 = (ForElementType<FSetElementId>)0x0;
    local_168 = 0;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_1b0,
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_2b0);
    FSchemaServiceClientChanges::FSchemaServiceClientChanges
              (&__return_storage_ptr__->ClientChanges,
               (FSchemaServiceClientChanges *)&local_258.TypedValue);
    local_168 = 0;
    if (local_170 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_170);
    }
    iVar6 = SUB84(local_1b0._8_8_,4);
    local_1b0._8_8_ = local_1b0._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_1b0,0,(int *)(local_1b0 + 0xc));
    }
    uVar9 = local_188._4_4_;
    uStack_180 = 0xffffffff;
    local_188 = (ulonglong)local_188._4_4_ << 0x20;
    if (0x80 < uVar9) {
      local_188 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1b0 + 0x10),0);
    }
    if (local_190 != (void *)0x0) {
      FMemory::Free(local_190);
    }
    if ((FScriptContainerElement *)local_1b0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1b0._0_8_);
    }
    local_1b8 = 0;
    if (local_1c0 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1c0);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_200,0,local_200._8_4_);
    iVar6 = SUB84(local_200._8_8_,4);
    local_200._8_8_ = local_200._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,(ForAnyElementType *)local_200,0,(int *)(local_200 + 0xc));
    }
    uVar9 = local_1d8._4_4_;
    uStack_1d0 = 0xffffffff;
    local_1d8 = (ulonglong)local_1d8._4_4_ << 0x20;
    if (0x80 < uVar9) {
      local_1d8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_200 + 0x10),0);
    }
    if (local_1e0 != (void *)0x0) {
      FMemory::Free(local_1e0);
    }
    if ((FScriptContainerElement *)local_200._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_200._0_8_);
    }
    local_208 = 0;
    if (local_210 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_210);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_250,0,local_250._8_4_);
    iVar6 = SUB84(local_250._8_8_,4);
    local_250._8_8_ = local_250._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)local_250,0,(int *)(local_250 + 0xc));
    }
    uVar9 = local_228._4_4_;
    uStack_220 = 0xffffffff;
    local_228 = (ulonglong)local_228._4_4_ << 0x20;
    if (0x80 < uVar9) {
      local_228 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_250 + 0x10),0);
    }
    if (local_230 != (void *)0x0) {
      FMemory::Free(local_230);
    }
    if ((FScriptContainerElement *)local_250._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_250._0_8_);
    }
    local_268 = 0;
    if (local_270 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_270);
    }
    iVar6 = SUB84(local_2b0._8_8_,4);
    local_2b0._8_8_ = local_2b0._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_2b0,0,(int *)(local_2b0 + 0xc));
    }
    uVar9 = local_288._4_4_;
    uStack_280 = 0xffffffff;
    local_288 = (ulonglong)local_288._4_4_ << 0x20;
    if (0x80 < uVar9) {
      local_288 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_2b0 + 0x10),0);
    }
    if (local_290 != (void *)0x0) {
      FMemory::Free(local_290);
    }
    if ((FScriptContainerElement *)local_2b0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2b0._0_8_);
    }
    local_2b8 = 0;
    if (local_2c0 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2c0);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_300,0,local_300._8_4_);
    iVar6 = SUB84(local_300._8_8_,4);
    local_300._8_8_ = local_300._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,(ForAnyElementType *)local_300,0,(int *)(local_300 + 0xc));
    }
    uVar9 = local_2d8._4_4_;
    uStack_2d0 = 0xffffffff;
    local_2d8 = (ulonglong)local_2d8._4_4_ << 0x20;
    if (0x80 < uVar9) {
      local_2d8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_300 + 0x10),0);
    }
    if (local_2e0 != (void *)0x0) {
      FMemory::Free(local_2e0);
    }
    if ((FScriptContainerElement *)local_300._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_300._0_8_);
    }
    local_308 = 0;
    if (local_310 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_310);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_350,0,local_350._8_4_);
    iVar6 = SUB84(local_350._8_8_,4);
    local_350._8_8_ = local_350._8_8_ & 0xffffffff00000000;
    uVar5 = local_328;
    if (iVar6 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)local_350,0,(int *)(local_350 + 0xc));
      uVar5 = local_328;
    }
  }
  else {
    <Var11.ClientDataSnapshot =
         (TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
          *)(**(code **)(this->_padding_ + 8))();
    if (((this->PreparedClientChanges).bIsSet == false) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar10)) {
      pcVar4 = (code *)swi(3);
      pRVar12 = (Result *)(*pcVar4)();
      return pRVar12;
    }
    pTVar1 = &(this->PreparedClientChanges).TypedValue.ClientChanges.AddedAttributes;
    Algo::
    ForEach<TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>_&,_UE::Online::Private::FSchemaCategoryInstanceBase::CommitClientChanges_::__l2::<lambda_1>_>
              (pTVar1,<Var11);
    if (((this->PreparedClientChanges).bIsSet == false) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar10)) {
      pcVar4 = (code *)swi(3);
      pRVar12 = (Result *)(*pcVar4)();
      return pRVar12;
    }
    pTVar2 = &(this->PreparedClientChanges).TypedValue.ClientChanges.ChangedAttributes;
    Algo::
    ForEach<TMap<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>_>_&,_UE::Online::Private::FSchemaCategoryInstanceBase::CommitClientChanges_::__l2::<lambda_2>_>
              (pTVar2,(<lambda_2>)<Var11.ClientDataSnapshot);
    if (((this->PreparedClientChanges).bIsSet == false) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar10)) {
      pcVar4 = (code *)swi(3);
      pRVar12 = (Result *)(*pcVar4)();
      return pRVar12;
    }
    pTVar3 = &(this->PreparedClientChanges).TypedValue.ClientChanges.RemovedAttributes;
    Algo::
    ForEach<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_&,_UE::Online::Private::FSchemaCategoryInstanceBase::CommitClientChanges_::__l2::<lambda_3>_>
              (pTVar3,(<lambda_3>)<Var11.ClientDataSnapshot);
    if (((this->PreparedClientChanges).bIsSet == false) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar10)) {
      pcVar4 = (code *)swi(3);
      pRVar12 = (Result *)(*pcVar4)();
      return pRVar12;
    }
    if ((this->PreparedClientChanges).TypedValue.SchemaCompatibilityId != 0) {
      pFVar13 = TOptional<UE::Online::Private::FSchemaCategoryInstanceBase::FPreparedClientChanges>
                ::operator->(this_00);
      this->LastSentSchemaCompatibilityId = pFVar13->SchemaCompatibilityId;
    }
    if (((this->PreparedClientChanges).bIsSet == false) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar10)) {
      pcVar4 = (code *)swi(3);
      pRVar12 = (Result *)(*pcVar4)();
      return pRVar12;
    }
    if ((this->PreparedClientChanges).TypedValue.DerivedSchemaCategoryDefinition !=
        (FSchemaCategoryDefinition *)0x0) {
      pFVar13 = TOptional<UE::Online::Private::FSchemaCategoryInstanceBase::FPreparedClientChanges>
                ::operator->(this_00);
      TSharedPtr<UE::Online::FSchemaDefinition_const_,1>::operator=
                (&this->DerivedSchemaDefinition,&pFVar13->DerivedSchemaDefinition);
      pFVar13 = TOptional<UE::Online::Private::FSchemaCategoryInstanceBase::FPreparedClientChanges>
                ::operator->(this_00);
      this->DerivedSchemaCategoryDefinition = pFVar13->DerivedSchemaCategoryDefinition;
    }
    if (((this->PreparedClientChanges).bIsSet == false) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar10)) {
      pcVar4 = (code *)swi(3);
      pRVar12 = (Result *)(*pcVar4)();
      return pRVar12;
    }
    if (((((TOptional<FName>_u_0 *)this_00 != &local_358) &&
         ((this_00->TypedValue).ClientChanges.SchemaId.field0_0x0.TypedValue.ComparisonIndex.Value
          != 0xffffffff)) &&
        (local_358.TypedValue = (this_00->TypedValue).ClientChanges.SchemaId.field0_0x0.TypedValue,
        local_358.TypedValue.ComparisonIndex.Value.Value == 0xffffffff)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           ), bVar10)) {
      pcVar4 = (code *)swi(3);
      pRVar12 = (Result *)(*pcVar4)();
      return pRVar12;
    }
    if ((TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
         *)local_350 != pTVar1) {
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)local_350,
                 (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)pTVar1);
    }
    if ((TMap<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>_>
         *)local_300 != pTVar2) {
      TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                  *)local_300,
                 (TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                  *)pTVar2);
    }
    if ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_2b0 != pTVar3) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
      Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_2b0,pTVar3);
    }
    ResetPreparedChanges(this);
    FSchemaServiceClientChanges::FSchemaServiceClientChanges
              (&local_158,(FSchemaServiceClientChanges *)&local_358.TypedValue);
    FSchemaServiceClientChanges::FSchemaServiceClientChanges
              (&__return_storage_ptr__->ClientChanges,&local_158);
    FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_158);
    local_268 = 0;
    if (local_270 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_270);
    }
    iVar6 = SUB84(local_2b0._8_8_,4);
    local_2b0._8_8_ = local_2b0._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_2b0,0,(int *)(local_2b0 + 0xc));
    }
    uVar9 = local_288._4_4_;
    uStack_280 = 0xffffffff;
    local_288 = (ulonglong)local_288._4_4_ << 0x20;
    if (0x80 < uVar9) {
      local_288 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_2b0 + 0x10),0);
    }
    if (local_290 != (void *)0x0) {
      FMemory::Free(local_290);
    }
    if ((FScriptContainerElement *)local_2b0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2b0._0_8_);
    }
    local_2b8 = 0;
    if (local_2c0 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2c0);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_300,0,local_300._8_4_);
    iVar6 = SUB84(local_300._8_8_,4);
    local_300._8_8_ = local_300._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,(ForAnyElementType *)local_300,0,(int *)(local_300 + 0xc));
    }
    uVar9 = local_2d8._4_4_;
    uStack_2d0 = 0xffffffff;
    local_2d8 = (ulonglong)local_2d8._4_4_ << 0x20;
    if (0x80 < uVar9) {
      local_2d8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_300 + 0x10),0);
    }
    if (local_2e0 != (void *)0x0) {
      FMemory::Free(local_2e0);
    }
    if ((FScriptContainerElement *)local_300._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_300._0_8_);
    }
    local_308 = 0;
    if (local_310 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_310);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_350,0,local_350._8_4_);
    iVar6 = SUB84(local_350._8_8_,4);
    local_350._8_8_ = local_350._8_8_ & 0xffffffff00000000;
    uVar5 = local_328;
    if (iVar6 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)local_350,0,(int *)(local_350 + 0xc));
      uVar5 = local_328;
    }
  }
  local_328 = uVar5 & 0xffffffff00000000;
  uVar8 = local_328;
  local_328._4_4_ = (uint)(uVar5 >> 0x20);
  uStack_320 = 0xffffffff;
  bVar10 = 0x80 < local_328._4_4_;
  local_328 = uVar8;
  if (bVar10) {
    local_328 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_350 + 0x10),0);
  }
  if (local_330 != (void *)0x0) {
    FMemory::Free(local_330);
  }
  if ((FScriptContainerElement *)local_350._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_350._0_8_);
  }
  return __return_storage_ptr__;
}

// CommitServiceSnapshot @ 14ec260f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Result * __thiscall
UE::Online::Private::FSchemaCategoryInstanceBase::CommitServiceSnapshot
          (FSchemaCategoryInstanceBase *this,Result *__return_storage_ptr__)

{
  TMap<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>_>
  *pTVar1;
  TOptional<UE::Online::Private::FSchemaCategoryInstanceBase::FPreparedServiceChanges> *this_00;
  TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
  *pTVar2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  bool bVar9;
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
  *pTVar10;
  Result *pRVar11;
  FPreparedServiceChanges *pFVar12;
  undefined1 auStackY_378 [32];
  TOptional<FName>_u_0 local_348;
  undefined1 local_340 [32];
  void *local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  ForElementType<FSetElementId> local_300;
  int local_2f8;
  undefined1 local_2f0 [32];
  void *local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  ForElementType<FSetElementId> local_2b0;
  int local_2a8;
  undefined1 local_2a0 [32];
  void *local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  ForElementType<FSetElementId> local_260;
  int local_258;
  TOptional<FName>_u_0 local_248;
  undefined1 local_240 [32];
  void *local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  ForElementType<FSetElementId> local_200;
  int local_1f8;
  undefined1 local_1f0 [32];
  void *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  ForElementType<FSetElementId> local_1b0;
  int local_1a8;
  undefined1 local_1a0 [32];
  void *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ForElementType<FSetElementId> local_160;
  int local_158;
  FSchemaServiceClientChanges local_148;
  ulonglong local_48;
  
  uVar7 = _UNK_150631d98;
  uVar6 = ___xmm_00000000ffffffff0000008000000000;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_378;
  this_00 = &this->PreparedServiceChanges;
  local_348 = (TOptional<FName>_u_0)0xffffffff;
  local_340._0_8_ = (FScriptContainerElement *)0x0;
  local_340._8_8_ = 0;
  local_320 = (void *)0x0;
  local_318 = ___xmm_00000000ffffffff0000008000000000;
  uStack_310 = _UNK_150631d98;
  local_300 = (ForElementType<FSetElementId>)0x0;
  local_2f8 = 0;
  local_2f0._0_8_ = (FScriptContainerElement *)0x0;
  local_2f0._8_8_ = 0;
  local_2d0 = (void *)0x0;
  local_2c8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_2c0 = _UNK_150631d98;
  local_2b0 = (ForElementType<FSetElementId>)0x0;
  local_2a8 = 0;
  local_2a0._0_8_ = (FScriptContainerElement *)0x0;
  local_2a0._8_8_ = 0;
  local_280 = (void *)0x0;
  local_278 = ___xmm_00000000ffffffff0000008000000000;
  uStack_270 = _UNK_150631d98;
  local_260 = (ForElementType<FSetElementId>)0x0;
  local_258 = 0;
  if ((this->PreparedServiceChanges).bIsSet == false) {
    local_248.TypedValue.ComparisonIndex.Value = (FNameEntryId)0xffffffff;
    local_248.TypedValue.Number = 0;
    local_240._0_8_ = (FScriptContainerElement *)0x0;
    local_240._8_8_ = 0;
    local_220 = (void *)0x0;
    local_218 = ___xmm_00000000ffffffff0000008000000000;
    uStack_210 = _UNK_150631d98;
    local_200 = (ForElementType<FSetElementId>)0x0;
    local_1f8 = 0;
    TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                *)local_240,
               (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                *)local_340);
    local_1f0._0_8_ = (FScriptContainerElement *)0x0;
    local_1f0._8_8_ = 0;
    local_1d0 = (void *)0x0;
    local_1c8 = uVar6;
    uStack_1c0 = uVar7;
    local_1b0 = (ForElementType<FSetElementId>)0x0;
    local_1a8 = 0;
    TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                *)local_1f0,
               (TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                *)local_2f0);
    local_1a0._0_8_ = (FScriptContainerElement *)0x0;
    local_1a0._8_8_ = 0;
    local_180 = (void *)0x0;
    local_178 = uVar6;
    uStack_170 = uVar7;
    local_160 = (ForElementType<FSetElementId>)0x0;
    local_158 = 0;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_1a0,
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_2a0);
    FSchemaServiceClientChanges::FSchemaServiceClientChanges
              (&__return_storage_ptr__->ClientChanges,
               (FSchemaServiceClientChanges *)&local_248.TypedValue);
    local_158 = 0;
    if (local_160 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_160);
    }
    iVar5 = SUB84(local_1a0._8_8_,4);
    local_1a0._8_8_ = local_1a0._8_8_ & 0xffffffff00000000;
    if (iVar5 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_1a0,0,(int *)(local_1a0 + 0xc));
    }
    uVar8 = local_178._4_4_;
    uStack_170 = 0xffffffff;
    local_178 = (ulonglong)local_178._4_4_ << 0x20;
    if (0x80 < uVar8) {
      local_178 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1a0 + 0x10),0);
    }
    if (local_180 != (void *)0x0) {
      FMemory::Free(local_180);
    }
    if ((FScriptContainerElement *)local_1a0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1a0._0_8_);
    }
    local_1a8 = 0;
    if (local_1b0 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1b0);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_1f0,0,local_1f0._8_4_);
    iVar5 = SUB84(local_1f0._8_8_,4);
    local_1f0._8_8_ = local_1f0._8_8_ & 0xffffffff00000000;
    if (iVar5 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,(ForAnyElementType *)local_1f0,0,(int *)(local_1f0 + 0xc));
    }
    uVar8 = local_1c8._4_4_;
    uStack_1c0 = 0xffffffff;
    local_1c8 = (ulonglong)local_1c8._4_4_ << 0x20;
    if (0x80 < uVar8) {
      local_1c8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1f0 + 0x10),0);
    }
    if (local_1d0 != (void *)0x0) {
      FMemory::Free(local_1d0);
    }
    if ((FScriptContainerElement *)local_1f0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1f0._0_8_);
    }
    local_1f8 = 0;
    if (local_200 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_200);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_240,0,local_240._8_4_);
    iVar5 = SUB84(local_240._8_8_,4);
    local_240._8_8_ = local_240._8_8_ & 0xffffffff00000000;
    if (iVar5 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)local_240,0,(int *)(local_240 + 0xc));
    }
    uVar8 = local_218._4_4_;
    uStack_210 = 0xffffffff;
    local_218 = (ulonglong)local_218._4_4_ << 0x20;
    if (0x80 < uVar8) {
      local_218 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_240 + 0x10),0);
    }
    if (local_220 != (void *)0x0) {
      FMemory::Free(local_220);
    }
    if ((FScriptContainerElement *)local_240._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_240._0_8_);
    }
  }
  else {
    pTVar2 = &(this->PreparedServiceChanges).TypedValue.ClientDataSnapshot;
    pTVar10 = (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
               *)(**(code **)(this->_padding_ + 8))();
    if (pTVar10 !=
        (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
         *)pTVar2) {
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>_>
                (pTVar10,(TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                          *)pTVar2);
    }
    if ((this->PreparedServiceChanges).bIsSet == false) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        pRVar11 = (Result *)(*pcVar4)();
        return pRVar11;
      }
    }
    if ((this->PreparedServiceChanges).TypedValue.DerivedSchemaCategoryDefinition !=
        (FSchemaCategoryDefinition *)0x0) {
      pFVar12 = TOptional<UE::Online::Private::FSchemaCategoryInstanceBase::FPreparedServiceChanges>
                ::operator->(this_00);
      TSharedPtr<UE::Online::FSchemaDefinition_const_,1>::operator=
                (&this->DerivedSchemaDefinition,&pFVar12->DerivedSchemaDefinition);
      pFVar12 = TOptional<UE::Online::Private::FSchemaCategoryInstanceBase::FPreparedServiceChanges>
                ::operator->(this_00);
      this->DerivedSchemaCategoryDefinition = pFVar12->DerivedSchemaCategoryDefinition;
    }
    if ((this->PreparedServiceChanges).bIsSet == false) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        pRVar11 = (Result *)(*pcVar4)();
        return pRVar11;
      }
    }
    if ((((TOptional<FName>_u_0 *)this_00 != &local_348) &&
        ((this_00->TypedValue).ClientChanges.SchemaId.field0_0x0.TypedValue.ComparisonIndex.Value !=
         0xffffffff)) &&
       (local_348.TypedValue = (this_00->TypedValue).ClientChanges.SchemaId.field0_0x0.TypedValue,
       local_348.TypedValue.ComparisonIndex.Value.Value == 0xffffffff)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        pRVar11 = (Result *)(*pcVar4)();
        return pRVar11;
      }
    }
    pTVar2 = &(this->PreparedServiceChanges).TypedValue.ClientChanges.AddedAttributes;
    if ((TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
         *)local_340 != pTVar2) {
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)local_340,
                 (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)pTVar2);
    }
    pTVar1 = &(this->PreparedServiceChanges).TypedValue.ClientChanges.ChangedAttributes;
    if ((TMap<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>_>
         *)local_2f0 != pTVar1) {
      TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                  *)local_2f0,
                 (TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                  *)pTVar1);
    }
    pTVar3 = &(this->PreparedServiceChanges).TypedValue.ClientChanges.RemovedAttributes;
    if ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_2a0 != pTVar3) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
      Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_2a0,pTVar3);
    }
    ResetPreparedChanges(this);
    FSchemaServiceClientChanges::FSchemaServiceClientChanges
              (&local_148,(FSchemaServiceClientChanges *)&local_348.TypedValue);
    FSchemaServiceClientChanges::FSchemaServiceClientChanges
              (&__return_storage_ptr__->ClientChanges,&local_148);
    FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_148);
  }
  local_258 = 0;
  if (local_260 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_260);
  }
  iVar5 = SUB84(local_2a0._8_8_,4);
  local_2a0._8_8_ = local_2a0._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_2a0,0,(int *)(local_2a0 + 0xc));
  }
  uVar8 = local_278._4_4_;
  local_278 = (ulonglong)local_278._4_4_ << 0x20;
  uStack_270 = 0xffffffff;
  if (0x80 < uVar8) {
    local_278 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_2a0 + 0x10),0);
  }
  if (local_280 != (void *)0x0) {
    FMemory::Free(local_280);
  }
  if ((FScriptContainerElement *)local_2a0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2a0._0_8_);
  }
  local_2a8 = 0;
  if (local_2b0 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2b0);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_2f0,0,local_2f0._8_4_);
  iVar5 = SUB84(local_2f0._8_8_,4);
  local_2f0._8_8_ = local_2f0._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)local_2f0,0,(int *)(local_2f0 + 0xc));
  }
  uVar8 = local_2c8._4_4_;
  local_2c8 = (ulonglong)local_2c8._4_4_ << 0x20;
  uStack_2c0 = 0xffffffff;
  if (0x80 < uVar8) {
    local_2c8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_2f0 + 0x10),0);
  }
  if (local_2d0 != (void *)0x0) {
    FMemory::Free(local_2d0);
  }
  if ((FScriptContainerElement *)local_2f0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f0._0_8_);
  }
  local_2f8 = 0;
  if (local_300 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_300);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_340,0,local_340._8_4_);
  iVar5 = SUB84(local_340._8_8_,4);
  local_340._8_8_ = local_340._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_340,0,(int *)(local_340 + 0xc));
  }
  uVar8 = local_318._4_4_;
  local_318 = (ulonglong)local_318._4_4_ << 0x20;
  uStack_310 = 0xffffffff;
  if (0x80 < uVar8) {
    local_318 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_340 + 0x10),0);
  }
  if (local_320 != (void *)0x0) {
    FMemory::Free(local_320);
  }
  if ((FScriptContainerElement *)local_340._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_340._0_8_);
  }
  return __return_storage_ptr__;
}

// GetClientSnapshot @ 14ec29120

TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
* __thiscall
UE::Online::Private::FSchemaCategoryInstanceBase::GetClientSnapshot
          (FSchemaCategoryInstanceBase *this)

{
  TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
  *pTVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ec29123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar1 = (TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
            *)(**(code **)(this->_padding_ + 8))();
  return pTVar1;
}

// GetSerializationSchema @ 14ec29750

bool __thiscall
UE::Online::Private::FSchemaCategoryInstanceBase::GetSerializationSchema
          (FSchemaCategoryInstanceBase *this,FSchemaDefinition **param_1,
          FSchemaCategoryDefinition **param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  if (param_1 == (FSchemaDefinition **)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutSchemaDefinition",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Schema.cpp"
                       ,0x5f3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (param_2 == (FSchemaCategoryDefinition **)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutSchemaCategoryDefinition",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Schema.cpp"
                       ,0x5f4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (this->BaseSchemaCategoryDefinition != (FSchemaCategoryDefinition *)0x0) {
    bVar2 = this->DerivedSchemaCategoryDefinition == (FSchemaCategoryDefinition *)0x0;
    lVar4 = 0x18;
    if (bVar2) {
      lVar4 = 0x28;
    }
    *param_1 = *(FSchemaDefinition **)((longlong)&this->_padding_ + lVar4);
    lVar4 = 0x38;
    if (bVar2) {
      lVar4 = 0x40;
    }
    *param_2 = *(FSchemaCategoryDefinition **)((longlong)&this->_padding_ + lVar4);
    return true;
  }
  return false;
}

// InitializeSchemaDefinition @ 14ec299e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Online::Private::FSchemaCategoryInstanceBase::InitializeSchemaDefinition
          (FSchemaCategoryInstanceBase *this,
          TSharedRef<UE::Online::FSchemaDefinition_const_,1> *param_1,FSchemaDefinition *param_2,
          FName *param_3,TSharedPtr<UE::Online::FSchemaDefinition_const_,1> *param_4,
          FSchemaCategoryDefinition **param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedRef<UE::Online::FSchemaDefinition_const_,1> *pTVar4;
  FName *pFVar5;
  TTuple<FName,UE::Online::FSchemaCategoryDefinition> *pTVar6;
  FSchemaCategoryDefinition *pFVar7;
  TSharedPtr<UE::Online::FSchemaDefinition_const_,1> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((param_4 == (TSharedPtr<UE::Online::FSchemaDefinition_const_,1> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutSchemaDefinition",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Schema.cpp"
                         ,0x5d4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_5 == (FSchemaCategoryDefinition **)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutSchemaCategoryDefinition",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Schema.cpp"
                         ,0x5d5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_2 == (FSchemaDefinition *)0x0) ||
     ((pTVar4 = TMapBase<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,0>_>
                ::Find((TMapBase<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,0>_>
                        *)(this->SchemaRegistry).Object,param_1->Object->Id),
      pTVar4 != (TSharedRef<UE::Online::FSchemaDefinition_const_,1> *)0x0 &&
      (pFVar5 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                          (&pTVar4->Object->ParentSchemaIds,param_2->Id), pFVar5 != (FName *)0x0))))
  {
    pTVar6 = TSet<TTuple<FName,UE::Online::FSchemaCategoryDefinition>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaCategoryDefinition,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,UE::Online::FSchemaCategoryDefinition>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaCategoryDefinition,0>,FDefaultSetAllocator>
                     *)&param_1->Object->Categories,*param_3);
    pFVar7 = (FSchemaCategoryDefinition *)&pTVar6->field_0x8;
    if (pTVar6 == (TTuple<FName,UE::Online::FSchemaCategoryDefinition> *)0x0) {
      pFVar7 = (FSchemaCategoryDefinition *)0x0;
    }
    if (pFVar7 != (FSchemaCategoryDefinition *)0x0) {
      local_68.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      local_68.Object = param_1->Object;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (param_4 != &local_68) {
        param_4->Object = local_68.Object;
        local_68.Object = (FSchemaDefinition *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&param_4->SharedReferenceCount,&local_68.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      *param_5 = pFVar7;
      return true;
    }
    if ((byte)LogOnlineSchema._0_1_ < 2) {
      return false;
    }
    ::FName::ToString(&param_1->Object->Id,&local_28);
    ::FName::ToString(param_3,&local_38);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((byte)LogOnlineSchema._0_1_ < 3) {
      return false;
    }
    ::FName::ToString(&param_2->Id,&local_48);
    ::FName::ToString(&param_1->Object->Id,&local_58);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
    local_28.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
      local_28.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// InitializeSchemaDefinition @ 14ec29c20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Online::Private::FSchemaCategoryInstanceBase::InitializeSchemaDefinition
          (FSchemaCategoryInstanceBase *this,FName *param_1,FSchemaDefinition *param_2,
          FName *param_3,TSharedPtr<UE::Online::FSchemaDefinition_const_,1> *param_4,
          FSchemaCategoryDefinition **param_5)

{
  FSchemaDefinition *pFVar1;
  bool bVar2;
  TSharedRef<UE::Online::FSchemaDefinition_const_,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<UE::Online::FSchemaDefinition_const_,1> local_28;
  
  pTVar3 = TMapBase<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,0>_>
                   *)(this->SchemaRegistry).Object,*param_1);
  if (pTVar3 == (TSharedRef<UE::Online::FSchemaDefinition_const_,1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar4 = (pTVar3->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar3->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pFVar1 != (FSchemaDefinition *)0x0) {
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.Object = pFVar1;
      local_28.SharedReferenceCount.ReferenceController = pTVar4;
      bVar2 = InitializeSchemaDefinition(this,&local_28,param_2,param_3,param_4,param_5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      goto LAB_14ec29d14;
    }
  }
  if (1 < (byte)LogOnlineSchema._0_1_) {
    ::FName::ToString(param_1,(FString *)&local_28);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
    if (local_28.Object != (FSchemaDefinition *)0x0) {
      FMemory::Free(local_28.Object);
    }
  }
  bVar2 = false;
LAB_14ec29d14:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return bVar2;
}

// InitializeSchemaDefinition @ 14ec29d40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Online::Private::FSchemaCategoryInstanceBase::InitializeSchemaDefinition
          (FSchemaCategoryInstanceBase *this,long64 param_1,FSchemaDefinition *param_2,
          FName *param_3,TSharedPtr<UE::Online::FSchemaDefinition_const_,1> *param_4,
          FSchemaCategoryDefinition **param_5)

{
  FSchemaDefinition *pFVar1;
  bool bVar2;
  TSharedRef<UE::Online::FSchemaDefinition_const_,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<UE::Online::FSchemaDefinition_const_,1> local_28;
  
  pTVar3 = TMapBase<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,0>_>
           ::Find((TMapBase<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,0>_>
                   *)&((this->SchemaRegistry).Object)->SchemaDefinitionsByCompatibilityId,param_1);
  if (pTVar3 == (TSharedRef<UE::Online::FSchemaDefinition_const_,1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar4 = (pTVar3->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar3->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pFVar1 != (FSchemaDefinition *)0x0) {
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.Object = pFVar1;
      local_28.SharedReferenceCount.ReferenceController = pTVar4;
      bVar2 = InitializeSchemaDefinition(this,&local_28,param_2,param_3,param_4,param_5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      goto LAB_14ec29e0a;
    }
  }
  if (1 < (byte)LogOnlineSchema._0_1_) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
  }
  bVar2 = false;
LAB_14ec29e0a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return bVar2;
}

// IsValid @ 14ec2a450

bool __thiscall
UE::Online::Private::FSchemaCategoryInstanceBase::IsValid(FSchemaCategoryInstanceBase *this)

{
  return this->BaseSchemaCategoryDefinition != (FSchemaCategoryDefinition *)0x0;
}

// PrepareClientChanges @ 14ec31820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges> * __thiscall
UE::Online::Private::FSchemaCategoryInstanceBase::PrepareClientChanges
          (FSchemaCategoryInstanceBase *this,
          TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>
          *__return_storage_ptr__,Params *param_1)

{
  int *piVar1;
  FSchemaVariant *this_00;
  FName *this_01;
  TOptional<UE::Online::Private::FSchemaCategoryInstanceBase::FPreparedClientChanges> *this_02;
  ulonglong uVar2;
  ESchemaAttributeType EVar3;
  code *pcVar4;
  FSchemaCategoryInstanceBase *pFVar5;
  FName FVar6;
  FSchemaServiceAttributeData *pFVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  FName *pFVar11;
  FOnlineError *pFVar12;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar13;
  TTuple<FName,UE::Online::FSchemaAttributeDefinition> *pTVar14;
  FString *pFVar15;
  TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
  *this_03;
  FSchemaVariant *this_04;
  FName *pFVar16;
  FSchemaServiceAttributeDefinition *pFVar17;
  TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges> *pTVar18;
  FOnlineError *pFVar19;
  int iVar20;
  uint uVar21;
  ForElementType<unsigned_int> FVar22;
  uint uVar23;
  FSchemaCategoryDefinition *pFVar24;
  FSchemaDefinition *pFVar25;
  uint uVar26;
  FName FVar27;
  FName *pFVar28;
  undefined1 auStackY_af8 [32];
  undefined1 local_ab8;
  undefined1 local_ab7 [7];
  FSchemaDefinition *local_ab0;
  uint local_aa8;
  ForElementType<unsigned_int> local_aa0;
  FSchemaCategoryInstanceBase *local_a98;
  TPairInitializer<FName_const_&,UE::Online::FSchemaServiceAttributeData_&&> local_a90;
  FName local_a80;
  FOnlineError local_a78;
  int iStack_a50;
  undefined4 uStack_a4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a48;
  undefined1 local_a28 [8];
  int local_a20;
  int local_a1c;
  FName local_a18;
  FName local_a10;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a08;
  undefined8 uStack_9e8;
  FSchemaServiceAttributeData *local_9e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_9d8;
  undefined8 uStack_9b8;
  FName *local_9b0;
  FName *local_9a8;
  FName *local_9a0;
  undefined1 *local_998;
  FName *local_990;
  FSchemaServiceAttributeData *local_988;
  TOptional<UE::Online::FOnlineError> local_980;
  FString local_950;
  FString local_940;
  FString local_930;
  FString local_920;
  FString local_910;
  FString local_900;
  FString local_8f0;
  FString local_8e0;
  FString local_8d0;
  FString local_8c0;
  FString local_8b0;
  FString local_8a0;
  FString local_890;
  FString local_880;
  FString local_870;
  FString local_860;
  FString local_850;
  FString local_840;
  FString local_830;
  FString local_820;
  FString local_810;
  FString local_800;
  FString local_7f0;
  FString local_7e0;
  FString local_7d0;
  FString local_7c0;
  FString local_7b0;
  FString local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  TOptional<UE::Online::FOnlineError> local_758;
  TOptional<UE::Online::FOnlineError> local_728;
  TOptional<UE::Online::FOnlineError> local_6f8;
  TOptional<UE::Online::FOnlineError> local_6c8;
  TOptional<UE::Online::FOnlineError> local_698;
  TOptional<UE::Online::FOnlineError> local_668;
  TOptional<UE::Online::FOnlineError> local_638;
  TOptional<UE::Online::FOnlineError> local_608;
  TOptional<UE::Online::FOnlineError> local_5d8;
  TOptional<UE::Online::FOnlineError> local_5a8;
  TOptional<UE::Online::FOnlineError> local_578;
  FOnlineError local_548;
  FOnlineError local_520;
  FOnlineError local_4f8;
  FOnlineError local_4d0;
  FOnlineError local_4a8;
  FOnlineError local_480;
  FOnlineError local_458;
  FOnlineError local_430;
  FOnlineError local_408;
  FOnlineError local_3e0;
  FOnlineError local_3b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_390;
  undefined4 local_354;
  FSchemaServiceClientChanges local_348;
  long64 local_250;
  TSharedPtr<UE::Online::FSchemaDefinition_const_,1> local_248;
  FSchemaCategoryDefinition *local_238 [2];
  undefined1 local_228 [32];
  void *local_208;
  undefined4 local_200;
  uint local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  ForElementType<FSetElementId> local_1e8;
  int local_1e0;
  undefined1 local_1d8 [32];
  void *local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  ForElementType<FSetElementId> local_198;
  int local_190;
  FName local_188;
  longlong lStack_180;
  FSchemaVariant FStack_178;
  FSchemaServiceAttributeData local_158;
  TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
  local_128;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_d8;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_af8;
  local_aa0 = (ForElementType<unsigned_int>)param_1;
  local_a98 = this;
  ResetPreparedChanges(this);
  if (this->BaseSchemaCategoryDefinition == (FSchemaCategoryDefinition *)0x0) {
    if (2 < (byte)LogOnlineSchema._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
    }
    local_980.bIsSet = false;
    pFVar19 = Errors::InvalidState(&local_a78,&local_980);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TResult_UResult_FSchemaCategoryInstancePrepareClientChanges_Online_UE__VFOnlineError_34__Online_UE__6B_
    ;
    *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar19->Details).Object;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
         (pFVar19->Details).SharedReferenceCount.ReferenceController;
    pFVar12 = (pFVar19->Inner).Object;
    (pFVar19->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    (pFVar19->Details).Object = (IOnlineErrorDetails *)0x0;
    *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar12;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
         (pFVar19->Inner).SharedReferenceCount.ReferenceController;
    (pFVar19->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar19->Inner).Object = (FOnlineError *)0x0;
    *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar19->ErrorCode;
    __return_storage_ptr__->field_0xa8 = 1;
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TOnlineResult_UFSchemaCategoryInstancePrepareClientChanges_Online_UE___Online_UE__6B_
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_a78.Inner.SharedReferenceCount.ReferenceController._4_4_,
                        local_a78.Inner.SharedReferenceCount.ReferenceController._0_4_));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_a78.Details.SharedReferenceCount.ReferenceController._4_4_,
                        (uint)local_a78.Details.SharedReferenceCount.ReferenceController));
    if (local_980.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_980.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_980.TypedValue.Details.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    return __return_storage_ptr__;
  }
  pFVar24 = this->DerivedSchemaCategoryDefinition;
  lVar10 = 0x18;
  if (pFVar24 == (FSchemaCategoryDefinition *)0x0) {
    lVar10 = 0x28;
    pFVar24 = this->BaseSchemaCategoryDefinition;
  }
  pFVar16 = (FName *)0x0;
  local_ab0 = *(FSchemaDefinition **)((longlong)&this->_padding_ + lVar10);
  local_228._0_8_ = (FScriptContainerElement *)0x0;
  local_228._8_8_ = 0;
  local_208 = (void *)0x0;
  local_200 = 0;
  local_1fc = 0x80;
  local_1f8 = 0xffffffff;
  local_1f4 = 0;
  local_1e8 = (ForElementType<FSetElementId>)0x0;
  local_1e0 = 0;
  local_1d8._0_8_ = (FScriptContainerElement *)0x0;
  local_1d8._8_8_ = 0;
  local_1b8 = (void *)0x0;
  local_1b0 = 0;
  local_1ac = 0x80;
  local_1a8 = 0xffffffff;
  local_1a4 = 0;
  local_198 = (ForElementType<FSetElementId>)0x0;
  local_190 = 0;
  FSchemaServiceClientChanges::FSchemaServiceClientChanges(&local_348);
  FVar22 = local_aa0;
  local_250 = 0;
  local_238[0] = (FSchemaCategoryDefinition *)0x0;
  local_248.Object = (FSchemaDefinition *)0x0;
  local_248.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((param_1->ClientChanges).SchemaId.field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    pFVar24 = this->BaseSchemaCategoryDefinition;
    pFVar25 = (this->BaseSchemaDefinition).Object;
    pFVar11 = TOptional<FName>::operator*((TOptional<FName> *)local_aa0);
    bVar8 = InitializeSchemaDefinition(this,pFVar11,pFVar25,&pFVar24->Id,&local_248,local_238);
    pFVar24 = local_238[0];
    if (!bVar8) {
      if (2 < (byte)LogOnlineSchema._0_1_) {
        ::FName::ToString(&this->BaseSchemaCategoryDefinition->Id,&local_788);
        pFVar16 = TOptional<FName>::operator->((TOptional<FName> *)FVar22);
        ::FName::ToString(pFVar16,&local_798);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
        if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_798.Data.AllocatorInstance.Data);
        }
        if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_788.Data.AllocatorInstance.Data);
        }
      }
      local_728.bIsSet = false;
      pFVar12 = Errors::InvalidParams(&local_3b8,&local_728);
      TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>::
      TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>
                (__return_storage_ptr__,pFVar12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3b8.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3b8.Details.SharedReferenceCount.ReferenceController);
      if (local_728.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_728.TypedValue.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_728.TypedValue.Details.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_248.SharedReferenceCount.ReferenceController);
      FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_348);
      if (local_198 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_198);
      }
      if (local_1d8._12_4_ != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_1d8,0,(int *)(local_1d8 + 0xc));
      }
      local_1a8 = 0xffffffff;
      local_1a4 = 0;
      local_1b0 = 0;
      if (0x80 < local_1ac) {
        local_1ac = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),0);
      }
      if (local_1b8 != (void *)0x0) {
        FMemory::Free(local_1b8);
      }
      if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1d8._0_8_);
      }
      local_1e0 = 0;
      if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1e8);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_228);
      return __return_storage_ptr__;
    }
    if ((this->DerivedSchemaDefinition).Object != (FSchemaDefinition *)0x0) {
      local_758.bIsSet = false;
      pFVar12 = Errors::NotImplemented(&local_3e0,&local_758);
      TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>::
      TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>
                (__return_storage_ptr__,pFVar12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3e0.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3e0.Details.SharedReferenceCount.ReferenceController);
      if (local_758.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_758.TypedValue.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_758.TypedValue.Details.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_248.SharedReferenceCount.ReferenceController);
      FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_348);
      if (local_198 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_198);
      }
      if (local_1d8._12_4_ != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_1d8,0,(int *)(local_1d8 + 0xc));
      }
      local_1a8 = 0xffffffff;
      local_1a4 = 0;
      local_1b0 = 0;
      if (0x80 < local_1ac) {
        local_1ac = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),0);
      }
      if (local_1b8 != (void *)0x0) {
        FMemory::Free(local_1b8);
      }
      if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1d8._0_8_);
      }
      local_1e0 = 0;
      if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1e8);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_228);
      return __return_storage_ptr__;
    }
    local_ab0 = local_248.Object;
    TOptional<FName>::Emplace<FName_const_&>(&local_348.SchemaId,&(local_248.Object)->Id);
    param_1 = (Params *)local_aa0;
  }
  local_a80 = (FName)&((FSchemaClientChanges *)
                      &((TBitArray<FDefaultBitArrayAllocator> *)param_1)->AllocatorInstance)->
                      UpdatedAttributes;
  local_a48._padding_._0_4_ = 0;
  piVar1 = &((TBitArray<FDefaultBitArrayAllocator> *)param_1)->NumBits;
  local_a90.Key = (FName *)&DAT_00000001;
  local_a48._padding_._4_4_ = 1;
  local_a48.UnvisitedBitMask = 0xffffffff;
  local_a48.CurrentBitIndex = 0;
  local_a48.BaseBitIndex = 0;
  local_a48.Array = (TBitArray<FDefaultBitArrayAllocator> *)piVar1;
  if (*(int *)&(((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x20))->
               AllocatorInstance).SecondaryData != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a48);
  }
  TStack_a08._padding_ = CONCAT44(local_a48._padding_._4_4_,(undefined4)local_a48._padding_);
  FVar27 = (FName)&((FSchemaClientChanges *)
                   &((TBitArray<FDefaultBitArrayAllocator> *)param_1)->AllocatorInstance)->
                   UpdatedAttributes;
  TStack_a08._16_8_ = CONCAT44(local_a48.CurrentBitIndex,local_a48.UnvisitedBitMask);
  TStack_a08._28_4_ = local_a48._28_4_;
  TStack_a08.BaseBitIndex = local_a48.BaseBitIndex;
  FStack_178._24_4_ =
       *(int *)&(((FSchemaClientChanges *)
                 &((TBitArray<FDefaultBitArrayAllocator> *)param_1)->AllocatorInstance)->
                UpdatedAttributes).field_0x8 -
       ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x20))->MaxBits;
  FStack_178.VariantData._padding_ = (longlong)local_a48.Array;
  uStack_9e8 = CONCAT44(FStack_178._28_4_,FStack_178._24_4_);
  TStack_a08.Array = local_a48.Array;
  local_a10 = FVar27;
  local_188 = FVar27;
  lStack_180 = TStack_a08._padding_;
  FStack_178.VariantData._padding_ = TStack_a08._16_8_;
  FStack_178.VariantData._16_8_ = TStack_a08._24_8_;
  pTVar13 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_390,(TBitArray<FDefaultBitArrayAllocator> *)piVar1,
                       *(int *)&(((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x20)
                                 )->AllocatorInstance).SecondaryData);
  local_980.TypedValue.Details.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pTVar13->_padding_;
  local_980.TypedValue.Inner.Object = (FOnlineError *)pTVar13->Array;
  local_980.TypedValue.Inner.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&pTVar13->UnvisitedBitMask;
  local_980.TypedValue.ErrorCode = *(ulong64 *)&pTVar13->BaseBitIndex;
  while( true ) {
    FVar6 = local_a10;
    if (*(int *)((longlong)local_a10 + 8) - *(int *)((longlong)local_a10 + 0x34) != (int)uStack_9e8)
    {
      local_ab8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_ab8);
    }
    uVar21 = 0;
    if (((TStack_a08.CurrentBitIndex ==
          local_980.TypedValue.Inner.SharedReferenceCount.ReferenceController._4_4_) &&
        ((FOnlineError *)TStack_a08.Array == local_980.TypedValue.Inner.Object)) &&
       (FVar6 == FVar27)) {
      local_a78.Inner.Object =
           (FOnlineError *)
           ((longlong)
            (((TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_aa0 + 0x60))->
            AllocatorInstance).InlineData + 8);
      uVar23 = *(uint *)(((TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_aa0 + 0x80))->
                        AllocatorInstance).InlineData;
      local_a90.Value =
           (FSchemaServiceAttributeData *)
           &((TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_aa0 + 0x40))->NumBits;
      local_a78.Inner.SharedReferenceCount.ReferenceController._4_4_ = uVar21;
      local_a78.ErrorCode._0_4_ = uVar21;
      if (uVar23 == 0) goto LAB_14ec32031;
      FVar22 = *(ForElementType<unsigned_int> *)
                &((TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_aa0 + 0x60))->NumBits;
      if (*(ForElementType<unsigned_int> *)
           &((TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_aa0 + 0x60))->NumBits ==
          (ForElementType<unsigned_int>)0x0) {
        FVar22 = (ForElementType<unsigned_int>)local_a78.Inner.Object;
      }
      uVar26 = *(uint *)FVar22;
      pFVar11 = pFVar16;
      pFVar28 = pFVar16;
      local_a78.ErrorCode._0_4_ = 0;
      uVar21 = 0;
      goto joined_r0x00014ec31fe8;
    }
    pFVar28 = (FName *)((longlong)TStack_a08.CurrentBitIndex * 0x30 + *(longlong *)FVar6);
    this_00 = (FSchemaVariant *)(pFVar28 + 1);
    pTVar14 = TSet<TTuple<FName,UE::Online::FSchemaAttributeDefinition>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaAttributeDefinition,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,UE::Online::FSchemaAttributeDefinition>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaAttributeDefinition,0>,FDefaultSetAllocator>
                      *)&pFVar24->SchemaAttributeDefinitions,*pFVar28);
    pFVar11 = (FName *)&pTVar14->field_0x8;
    if (pTVar14 == (TTuple<FName,UE::Online::FSchemaAttributeDefinition> *)0x0) {
      pFVar11 = pFVar16;
    }
    if (pFVar11 == (FName *)0x0) {
      if (2 < (byte)LogOnlineSchema._0_1_) {
        ::FName::ToString(pFVar28,&local_7b0);
        ::FName::ToString(&pFVar24->Id,&local_7c0);
        ::FName::ToString(&local_ab0->Id,&local_7d0);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
        if (local_7d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7d0.Data.AllocatorInstance.Data);
        }
        if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
        }
        if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
        }
      }
      local_578.bIsSet = false;
      pFVar19 = Errors::InvalidParams(&local_408,&local_578);
      *(undefined ***)__return_storage_ptr__ =
           &
           ___7__TResult_UResult_FSchemaCategoryInstancePrepareClientChanges_Online_UE__VFOnlineError_34__Online_UE__6B_
      ;
      *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar19->Details).Object;
      *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
           (pFVar19->Details).SharedReferenceCount.ReferenceController;
      pFVar12 = (pFVar19->Inner).Object;
      (pFVar19->Details).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar19->Details).Object = (IOnlineErrorDetails *)0x0;
      *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar12;
      *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
           (pFVar19->Inner).SharedReferenceCount.ReferenceController;
      (pFVar19->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      (pFVar19->Inner).Object = (FOnlineError *)0x0;
      *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar19->ErrorCode;
      __return_storage_ptr__->field_0xa8 = 1;
      *(undefined ***)__return_storage_ptr__ =
           &
           ___7__TOnlineResult_UFSchemaCategoryInstancePrepareClientChanges_Online_UE___Online_UE__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_408.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_408.Details.SharedReferenceCount.ReferenceController);
      if (local_578.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_578.TypedValue.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_578.TypedValue.Details.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_248.SharedReferenceCount.ReferenceController);
      FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_348);
      local_190 = 0;
      if (local_198 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_198);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1d8);
      local_1e0 = 0;
      if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1e8);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_228);
      return __return_storage_ptr__;
    }
    if ((pFVar11[1].ComparisonIndex.Value & 0x800) != 0) break;
    EVar3 = (ESchemaAttributeType)pFVar11[1].ComparisonIndex.Value;
    if (EVar3 != (ESchemaAttributeType)pFVar28[4].ComparisonIndex.Value) {
      if (2 < (byte)LogOnlineSchema._0_1_) {
        Online::LexToString(EVar3);
        local_a90.Value =
             (FSchemaServiceAttributeData *)
             Online::LexToString((ESchemaAttributeType)pFVar28[4].ComparisonIndex.Value);
        ::FName::ToString(pFVar11,&local_810);
        ::FName::ToString(&pFVar24->Id,&local_820);
        ::FName::ToString(&local_ab0->Id,&local_830);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
        if (local_830.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_830.Data.AllocatorInstance.Data);
        }
        if (local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_820.Data.AllocatorInstance.Data);
        }
        if (local_810.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_810.Data.AllocatorInstance.Data);
        }
      }
      local_5d8.bIsSet = false;
      pFVar12 = Errors::InvalidParams(&local_458,&local_5d8);
      TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>::
      TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>
                (__return_storage_ptr__,pFVar12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_458.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_458.Details.SharedReferenceCount.ReferenceController);
      if (local_5d8.bIsSet == false) goto LAB_14ec33278;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_5d8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      goto LAB_14ec33273;
    }
    if (EVar3 == String) {
      pFVar15 = FSchemaVariant::GetString(this_00);
      iVar20 = (pFVar15->Data).ArrayNum;
      iVar9 = iVar20 + -1;
      if (iVar20 == 0) {
        iVar9 = 0;
      }
      this = local_a98;
      if ((int)pFVar11[1].Number < iVar9) {
        if (2 < (byte)LogOnlineSchema._0_1_) {
          pFVar15 = FSchemaVariant::GetString(this_00);
          iVar20 = (pFVar15->Data).ArrayNum;
          local_aa8 = iVar20 - 1;
          if (iVar20 == 0) {
            local_aa8 = uVar21;
          }
          ::FName::ToString(pFVar11,&local_880);
          ::FName::ToString(&pFVar24->Id,&local_890);
          ::FName::ToString(&local_ab0->Id,&local_8a0);
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
          if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8a0.Data.AllocatorInstance.Data);
          }
          if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_890.Data.AllocatorInstance.Data);
          }
          if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_880.Data.AllocatorInstance.Data);
          }
        }
        local_638.bIsSet = false;
        pFVar12 = Errors::InvalidParams(&local_4a8,&local_638);
        TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>::
        TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>
                  (__return_storage_ptr__,pFVar12);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4a8.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4a8.Details.SharedReferenceCount.ReferenceController);
        if (local_638.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_638.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_638.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_248.SharedReferenceCount.ReferenceController);
        FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_348);
        local_190 = 0;
        if (local_198 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_198);
        }
        iVar20 = SUB84(local_1d8._8_8_,4);
        local_1d8._8_8_ = local_1d8._8_8_ & 0xffffffff00000000;
        if (iVar20 != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,(ForAnyElementType *)local_1d8,0,(int *)(local_1d8 + 0xc));
        }
        local_1a8 = 0xffffffff;
        local_1a4 = 0;
        local_1b0 = 0;
        if (0x80 < local_1ac) {
          local_1ac = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),0);
        }
        if (local_1b8 != (void *)0x0) {
          FMemory::Free(local_1b8);
        }
        if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1d8._0_8_);
        }
        local_1e0 = 0;
        if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_1e8);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_228);
        return __return_storage_ptr__;
      }
    }
    this_03 = (TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
               *)(**(code **)(this->_padding_ + 8))(this);
    this_04 = TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
              ::Find(this_03,*pFVar28);
    if (this_04 == (FSchemaVariant *)0x0) {
      TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
      ::Emplace<FName_const_&,UE::Online::FSchemaVariant_const_&>
                ((TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
                  *)&local_348.AddedAttributes,pFVar28,this_00);
    }
    else {
      bVar8 = FSchemaVariant::operator==(this_04,this_00);
      if (!bVar8) {
        TVariant<FString,__int64,double,bool>::TVariant<FString,__int64,double,bool>
                  ((TVariant<FString,__int64,double,bool> *)local_88,&this_04->VariantData);
        local_88[0x18] = this_04->VariantType;
        TVariant<FString,__int64,double,bool>::TVariant<FString,__int64,double,bool>
                  ((TVariant<FString,__int64,double,bool> *)(local_88 + 0x20),
                   (TVariant<FString,__int64,double,bool> *)this_00);
        local_88[0x38] = *(undefined1 *)&pFVar28[4].ComparisonIndex.Value;
        local_998 = local_88;
        local_9a0 = pFVar28;
        TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FName_const_&,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_&&>_>
                  ((TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                    *)&local_348.ChangedAttributes,
                   (TPairInitializer<FName_const_&,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_&&>
                    *)local_a28,(bool *)&local_9a0);
        Core::Private::Tuple::
        TTupleBase<TIntegerSequence<unsigned_int,0,1>,UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>
        ::
        ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>
                  ((TTupleBase<TIntegerSequence<unsigned_int,0,1>,UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>
                    *)local_88);
      }
    }
    this_01 = pFVar11 + 2;
    if (pFVar11[2] != (FName)0x0) {
      pFVar17 = TMapBase<FName,UE::Online::FSchemaServiceAttributeDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeDefinition,0>_>
                ::Find((TMapBase<FName,UE::Online::FSchemaServiceAttributeDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeDefinition,0>_>
                        *)&pFVar24->ServiceAttributeDefinitions,pFVar11[2]);
      if (pFVar17 == (FSchemaServiceAttributeDefinition *)0x0) {
        bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5340537342878809110>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Schema.cpp"
                           ,0x3ea,"ServiceAttributeDefinition");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar18 = (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges> *)
                    (*pcVar4)();
          return pTVar18;
        }
        if (2 < (byte)LogOnlineSchema._0_1_) {
          ::FName::ToString(this_01,&local_840);
          ::FName::ToString(pFVar11,&local_850);
          ::FName::ToString(&pFVar24->Id,&local_860);
          ::FName::ToString(&local_ab0->Id,&local_870);
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
          if (local_870.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_870.Data.AllocatorInstance.Data);
          }
          if (local_860.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_860.Data.AllocatorInstance.Data);
          }
          if (local_850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_850.Data.AllocatorInstance.Data);
          }
          if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_840.Data.AllocatorInstance.Data);
          }
        }
        local_608.bIsSet = false;
        pFVar12 = Errors::InvalidState(&local_480,&local_608);
        TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>::
        TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>
                  (__return_storage_ptr__,pFVar12);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_480.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_480.Details.SharedReferenceCount.ReferenceController);
        if (local_608.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_608.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_608.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_248.SharedReferenceCount.ReferenceController);
        FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_348);
        local_190 = 0;
        if (local_198 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_198);
        }
        TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_1d8);
        local_1e0 = 0;
        if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_1e8);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_228);
        return __return_storage_ptr__;
      }
      local_158.Id = *this_01;
      local_158.Flags = pFVar17->Flags;
      local_158.Value.VariantData._padding_ = 0;
      local_158.Value.VariantData._padding_ = 0;
      local_158.Value.VariantData.TypeIndex = '\0';
      local_158.Value.VariantType = None;
      TVariant<FString,__int64,double,bool>::operator=
                (&local_158.Value.VariantData,(TVariant<FString,__int64,double,bool> *)this_00);
      local_158.Value.VariantType = (ESchemaAttributeType)pFVar28[4].ComparisonIndex.Value;
      local_988 = &local_158;
      *(undefined1 *)&pFVar28[4].ComparisonIndex.Value = 0;
      local_990 = this_01;
      TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,UE::Online::FSchemaServiceAttributeData_&&>_>
                ((TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
                  *)local_228,
                 (TPairInitializer<FName_const_&,UE::Online::FSchemaServiceAttributeData_&&> *)
                 (local_a28 + 4),(bool *)&local_990);
      FSchemaServiceAttributeData::~FSchemaServiceAttributeData(&local_158);
    }
    TStack_a08.UnvisitedBitMask = TStack_a08.UnvisitedBitMask & ~TStack_a08._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a08);
    this = local_a98;
    FVar27 = local_a80;
  }
  if (2 < (byte)LogOnlineSchema._0_1_) {
    ::FName::ToString(pFVar11,&local_7e0);
    ::FName::ToString(&pFVar24->Id,&local_7f0);
    ::FName::ToString(&local_ab0->Id,&local_800);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
    if (local_800.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_800.Data.AllocatorInstance.Data);
    }
    if (local_7f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7f0.Data.AllocatorInstance.Data);
    }
    if (local_7e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7e0.Data.AllocatorInstance.Data);
    }
  }
  local_5a8.bIsSet = false;
  pFVar19 = Errors::InvalidParams(&local_430,&local_5a8);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TResult_UResult_FSchemaCategoryInstancePrepareClientChanges_Online_UE__VFOnlineError_34__Online_UE__6B_
  ;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar19->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar19->Details).SharedReferenceCount.ReferenceController;
  pFVar12 = (pFVar19->Inner).Object;
  (pFVar19->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar19->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar12;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar19->Inner).SharedReferenceCount.ReferenceController;
  (pFVar19->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar19->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar19->ErrorCode;
  __return_storage_ptr__->field_0xa8 = 1;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFSchemaCategoryInstancePrepareClientChanges_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_430.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_430.Details.SharedReferenceCount.ReferenceController);
  if (local_5a8.bIsSet == false) goto LAB_14ec33278;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
  local_5d8.TypedValue.Details.SharedReferenceCount.ReferenceController =
       local_5a8.TypedValue.Details.SharedReferenceCount.ReferenceController;
LAB_14ec33273:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5d8.TypedValue.Details.SharedReferenceCount.ReferenceController);
LAB_14ec33278:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.SharedReferenceCount.ReferenceController);
  FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_348);
  local_190 = 0;
  if (local_198 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_198);
  }
  iVar20 = SUB84(local_1d8._8_8_,4);
  local_1d8._8_8_ = local_1d8._8_8_ & 0xffffffff00000000;
  if (iVar20 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_1d8,0,(int *)(local_1d8 + 0xc));
  }
  local_1a8 = 0xffffffff;
  local_1a4 = 0;
  local_1b0 = 0;
  if (0x80 < local_1ac) {
    local_1ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),0);
  }
  if (local_1b8 != (void *)0x0) {
    FMemory::Free(local_1b8);
  }
  if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1d8._0_8_);
  }
  local_1e0 = 0;
  if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1e8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_228,0,local_228._8_4_);
  iVar20 = SUB84(local_228._8_8_,4);
  local_228._8_8_ = local_228._8_8_ & 0xffffffff00000000;
  if (iVar20 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)local_228,0,(int *)(local_228 + 0xc));
  }
  local_1f8 = 0xffffffff;
  local_1f4 = 0;
  local_200 = 0;
  if (0x80 < local_1fc) {
    local_1fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10),0);
  }
  if (local_208 != (void *)0x0) {
    FMemory::Free(local_208);
  }
  if ((FScriptContainerElement *)local_228._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_228._0_8_);
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
joined_r0x00014ec31fe8:
  if (uVar26 != 0) goto LAB_14ec32008;
  iVar20 = (int)pFVar11;
  local_a78.ErrorCode._0_4_ = (int)pFVar28 + 0x20;
  pFVar28 = (FName *)(ulonglong)(uint)local_a78.ErrorCode;
  uVar21 = iVar20 + 1;
  pFVar11 = (FName *)(ulonglong)uVar21;
  local_a78.Inner.SharedReferenceCount.ReferenceController._4_4_ = uVar23;
  if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
  goto LAB_14ec32031;
  uVar26 = *(uint *)((uchar *)((longlong)FVar22 + 4) + (longlong)iVar20 * 4);
  goto joined_r0x00014ec31fe8;
LAB_14ec32008:
  local_a90.Key = (FName *)(ulonglong)(-uVar26 & uVar26);
  uVar2 = (longlong)local_a90.Key * 2 + 1;
  lVar10 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  local_a20 = (int)lVar10;
  local_a78.Inner.SharedReferenceCount.ReferenceController._4_4_ =
       local_a20 + -1 + (uint)local_a78.ErrorCode;
  if ((int)uVar23 < (int)local_a78.Inner.SharedReferenceCount.ReferenceController._4_4_) {
    local_a78.Inner.SharedReferenceCount.ReferenceController._4_4_ = uVar23;
  }
LAB_14ec32031:
  FVar22 = (ForElementType<unsigned_int>)
           ((longlong)
            (((TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_aa0 + 0x60))->
            AllocatorInstance).InlineData + 8);
  local_a78.Details.SharedReferenceCount.ReferenceController._4_4_ = SUB84(local_a90.Key,0);
  local_a78.ErrorCode._4_4_ = local_354;
  iStack_a50 = *(uint *)(((TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_aa0 + 0x60))->
                        AllocatorInstance).InlineData -
               *(uint *)((((TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_aa0 + 0x80))->
                         AllocatorInstance).InlineData + 0xc);
  uVar23 = *(uint *)(((TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_aa0 + 0x80))->
                    AllocatorInstance).InlineData;
  local_a78.Inner.SharedReferenceCount.ReferenceController._0_4_ = 0xffffffff;
  TStack_9d8.CurrentBitIndex = local_a78.Inner.SharedReferenceCount.ReferenceController._4_4_;
  TStack_9d8.UnvisitedBitMask = 0xffffffff;
  local_aa8 = -1 << ((byte)uVar23 & 0x1f);
  uVar26 = uVar23 & 0xffffffe0;
  TStack_9d8._padding_ =
       CONCAT44(local_a78.Details.SharedReferenceCount.ReferenceController._4_4_,uVar21);
  iVar20 = (int)uVar23 >> 5;
  TStack_9d8._28_4_ = local_354;
  TStack_9d8.BaseBitIndex = (uint)local_a78.ErrorCode;
  uStack_9b8 = CONCAT44(uStack_a4c,iStack_a50);
  local_aa0 = FVar22;
  local_a78.Details.Object = (IOnlineErrorDetails *)local_a90.Value;
  local_a78.Details.SharedReferenceCount.ReferenceController._0_4_ = uVar21;
  local_9e0 = local_a90.Value;
  TStack_9d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a78.Inner.Object;
  if (((int)uVar23 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar18 = (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges> *)(*pcVar4)();
    return pTVar18;
  }
  uVar21 = *(int *)((longlong)local_aa0 + 0x18);
  if (uVar23 != uVar21) {
    FVar22 = local_aa0;
    if (*(ForElementType<unsigned_int> *)((longlong)local_aa0 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar22 = *(ForElementType<unsigned_int> *)((longlong)local_aa0 + 0x10);
    }
    uVar23 = local_aa8 & *(uint *)((longlong)FVar22 + (longlong)iVar20 * 4);
    while (uVar23 == 0) {
      lVar10 = (longlong)iVar20;
      uVar26 = uVar26 + 0x20;
      iVar20 = iVar20 + 1;
      uVar23 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_14ec32170;
      uVar23 = *(uint *)((uchar *)((longlong)FVar22 + 4) + lVar10 * 4);
    }
    uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_a1c = (int)lVar10;
    uVar23 = local_a1c + -1 + uVar26;
    if ((int)uVar21 < (int)uVar23) {
      uVar23 = uVar21;
    }
  }
LAB_14ec32170:
  while( true ) {
    pFVar7 = local_9e0;
    if (*(int *)&local_9e0->Flags - local_9e0[1].Id.Number != (int)uStack_9b8) {
      local_ab7[0] = 0;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_ab7);
    }
    pFVar5 = local_a98;
    if (((TStack_9d8.CurrentBitIndex == uVar23) &&
        ((ForElementType<unsigned_int>)TStack_9d8.Array == local_aa0)) &&
       (pFVar7 == local_a90.Value)) break;
    pFVar28 = (FName *)((longlong)TStack_9d8.CurrentBitIndex * 0x10 + (longlong)pFVar7->Id);
    pTVar14 = TSet<TTuple<FName,UE::Online::FSchemaAttributeDefinition>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaAttributeDefinition,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,UE::Online::FSchemaAttributeDefinition>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaAttributeDefinition,0>,FDefaultSetAllocator>
                      *)&pFVar24->SchemaAttributeDefinitions,*pFVar28);
    pFVar11 = (FName *)&pTVar14->field_0x8;
    if (pTVar14 == (TTuple<FName,UE::Online::FSchemaAttributeDefinition> *)0x0) {
      pFVar11 = pFVar16;
    }
    if (pFVar11 == (FName *)0x0) {
      if (2 < (byte)LogOnlineSchema._0_1_) {
        ::FName::ToString(pFVar28,&local_8b0);
        ::FName::ToString(&pFVar24->Id,&local_8c0);
        ::FName::ToString(&local_ab0->Id,&local_8d0);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
        if (local_8d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8d0.Data.AllocatorInstance.Data);
        }
        if (local_8c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8c0.Data.AllocatorInstance.Data);
        }
        if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
        }
      }
      local_668.bIsSet = false;
      pFVar19 = Errors::InvalidParams(&local_4d0,&local_668);
      *(undefined ***)__return_storage_ptr__ =
           &
           ___7__TResult_UResult_FSchemaCategoryInstancePrepareClientChanges_Online_UE__VFOnlineError_34__Online_UE__6B_
      ;
      *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar19->Details).Object;
      *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
           (pFVar19->Details).SharedReferenceCount.ReferenceController;
      pFVar12 = (pFVar19->Inner).Object;
      (pFVar19->Details).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar19->Details).Object = (IOnlineErrorDetails *)0x0;
      *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar12;
      *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
           (pFVar19->Inner).SharedReferenceCount.ReferenceController;
      (pFVar19->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      (pFVar19->Inner).Object = (FOnlineError *)0x0;
      *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar19->ErrorCode;
      __return_storage_ptr__->field_0xa8 = 1;
      *(undefined ***)__return_storage_ptr__ =
           &
           ___7__TOnlineResult_UFSchemaCategoryInstancePrepareClientChanges_Online_UE___Online_UE__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4d0.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4d0.Details.SharedReferenceCount.ReferenceController);
      if (local_668.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_668.TypedValue.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_668.TypedValue.Details.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_248.SharedReferenceCount.ReferenceController);
      FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_348);
      local_190 = 0;
      if (local_198 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_198);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1d8);
      local_1e0 = 0;
      if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1e8);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_228);
      return __return_storage_ptr__;
    }
    if ((pFVar11[1].ComparisonIndex.Value & 0x800) != 0) {
      if (2 < (byte)LogOnlineSchema._0_1_) {
        ::FName::ToString(pFVar11,&local_8e0);
        ::FName::ToString(&pFVar24->Id,&local_8f0);
        ::FName::ToString(&local_ab0->Id,&local_900);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
        if (local_900.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_900.Data.AllocatorInstance.Data);
        }
        if (local_8f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8f0.Data.AllocatorInstance.Data);
        }
        if (local_8e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8e0.Data.AllocatorInstance.Data);
        }
      }
      local_698.bIsSet = false;
      pFVar19 = Errors::InvalidParams(&local_4f8,&local_698);
      *(undefined ***)__return_storage_ptr__ =
           &
           ___7__TResult_UResult_FSchemaCategoryInstancePrepareClientChanges_Online_UE__VFOnlineError_34__Online_UE__6B_
      ;
      *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar19->Details).Object;
      *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
           (pFVar19->Details).SharedReferenceCount.ReferenceController;
      pFVar12 = (pFVar19->Inner).Object;
      (pFVar19->Details).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar19->Details).Object = (IOnlineErrorDetails *)0x0;
      *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar12;
      *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
           (pFVar19->Inner).SharedReferenceCount.ReferenceController;
      (pFVar19->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      (pFVar19->Inner).Object = (FOnlineError *)0x0;
      *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar19->ErrorCode;
      __return_storage_ptr__->field_0xa8 = 1;
      *(undefined ***)__return_storage_ptr__ =
           &
           ___7__TOnlineResult_UFSchemaCategoryInstancePrepareClientChanges_Online_UE___Online_UE__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4f8.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4f8.Details.SharedReferenceCount.ReferenceController);
      if (local_698.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_698.TypedValue.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_698.TypedValue.Details.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_248.SharedReferenceCount.ReferenceController);
      FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_348);
      local_190 = 0;
      if (local_198 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_198);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1d8);
      local_1e0 = 0;
      if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1e8);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_228);
      return __return_storage_ptr__;
    }
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&local_348.RemovedAttributes,&local_a18,(bool *)pFVar28);
    if (pFVar11[2] != (FName)0x0) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_1d8,&local_a80,
                 (bool *)(pFVar11 + 2));
    }
    TStack_9d8.UnvisitedBitMask = TStack_9d8.UnvisitedBitMask & ~TStack_9d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_9d8);
  }
  if ((pFVar24->SchemaCompatibilityAttributeId == (FName)0x0) ||
     (local_a98->LastSentSchemaCompatibilityId != 0)) goto LAB_14ec32676;
  pTVar14 = TSet<TTuple<FName,UE::Online::FSchemaAttributeDefinition>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaAttributeDefinition,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,UE::Online::FSchemaAttributeDefinition>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaAttributeDefinition,0>,FDefaultSetAllocator>
                    *)&pFVar24->SchemaAttributeDefinitions,pFVar24->SchemaCompatibilityAttributeId);
  pFVar11 = (FName *)&pTVar14->field_0x8;
  if (pTVar14 == (TTuple<FName,UE::Online::FSchemaAttributeDefinition> *)0x0) {
    pFVar11 = pFVar16;
  }
  if (pFVar11 == (FName *)0x0) {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5340537342878809053>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Schema.cpp"
                       ,0x423,"AttributeDefinition");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar18 = (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges> *)
                (*pcVar4)();
      return pTVar18;
    }
    if (2 < (byte)LogOnlineSchema._0_1_) {
      ::FName::ToString(&pFVar24->SchemaCompatibilityAttributeId,&local_950);
      ::FName::ToString(&pFVar24->Id,&local_768);
      ::FName::ToString(&local_ab0->Id,&local_778);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
      if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_778.Data.AllocatorInstance.Data);
      }
      if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_768.Data.AllocatorInstance.Data);
      }
      if (local_950.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_950.Data.AllocatorInstance.Data);
      }
    }
    local_6f8.bIsSet = false;
    pFVar19 = Errors::InvalidState(&local_548,&local_6f8);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TResult_UResult_FSchemaCategoryInstancePrepareClientChanges_Online_UE__VFOnlineError_34__Online_UE__6B_
    ;
    *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar19->Details).Object;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
         (pFVar19->Details).SharedReferenceCount.ReferenceController;
    pFVar12 = (pFVar19->Inner).Object;
    (pFVar19->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    (pFVar19->Details).Object = (IOnlineErrorDetails *)0x0;
    *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar12;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
         (pFVar19->Inner).SharedReferenceCount.ReferenceController;
    (pFVar19->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar19->Inner).Object = (FOnlineError *)0x0;
    *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar19->ErrorCode;
    __return_storage_ptr__->field_0xa8 = 1;
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TOnlineResult_UFSchemaCategoryInstancePrepareClientChanges_Online_UE___Online_UE__6B_
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_548.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_548.Details.SharedReferenceCount.ReferenceController);
    if (local_6f8.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6f8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6f8.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_248.SharedReferenceCount.ReferenceController);
    FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_348);
    local_190 = 0;
    if (local_198 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_198);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1d8);
    local_1e0 = 0;
    if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1e8);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_228);
    return __return_storage_ptr__;
  }
  pFVar16 = pFVar11 + 2;
  pFVar25 = local_ab0;
  if (pFVar11[2] != (FName)0x0) {
    pFVar17 = TMapBase<FName,UE::Online::FSchemaServiceAttributeDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeDefinition,0>_>
              ::Find((TMapBase<FName,UE::Online::FSchemaServiceAttributeDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeDefinition,0>_>
                      *)&pFVar24->ServiceAttributeDefinitions,pFVar11[2]);
    pFVar25 = local_ab0;
    if (pFVar17 == (FSchemaServiceAttributeDefinition *)0x0) {
      bVar8 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5340537342878809048>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Schema.cpp"
                         ,0x428,"ServiceAttributeDefinition");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar18 = (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges> *)
                  (*pcVar4)();
        return pTVar18;
      }
      if (2 < (byte)LogOnlineSchema._0_1_) {
        ::FName::ToString(pFVar16,&local_910);
        ::FName::ToString(pFVar11,&local_920);
        ::FName::ToString(&pFVar24->Id,&local_930);
        ::FName::ToString(&local_ab0->Id,&local_940);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
        if (local_940.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_940.Data.AllocatorInstance.Data);
        }
        if (local_930.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_930.Data.AllocatorInstance.Data);
        }
        if (local_920.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_920.Data.AllocatorInstance.Data);
        }
        if (local_910.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_910.Data.AllocatorInstance.Data);
        }
      }
      local_6c8.bIsSet = false;
      pFVar12 = Errors::InvalidState(&local_520,&local_6c8);
      TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>::
      TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>
                (__return_storage_ptr__,pFVar12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_520.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_520.Details.SharedReferenceCount.ReferenceController);
      if (local_6c8.bIsSet == false) goto LAB_14ec33278;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6c8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      local_5d8.TypedValue.Details.SharedReferenceCount.ReferenceController =
           local_6c8.TypedValue.Details.SharedReferenceCount.ReferenceController;
      goto LAB_14ec33273;
    }
    local_188 = *pFVar16;
    lStack_180 = CONCAT71(lStack_180._1_7_,pFVar17->Flags);
    FStack_178.VariantData._padding_ = local_ab0->CompatibilityId;
    local_9a8 = &local_188;
    FStack_178.VariantData._padding_ = 0;
    FStack_178.VariantData.TypeIndex = '\x01';
    FStack_178.VariantType = 2;
    local_9b0 = pFVar16;
    TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,UE::Online::FSchemaServiceAttributeData_&&>_>
              ((TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
                *)local_228,&local_a90,(bool *)&local_9b0);
    FSchemaVariant::~FSchemaVariant(&FStack_178);
  }
  local_250 = pFVar25->CompatibilityId;
LAB_14ec32676:
  this_02 = &pFVar5->PreparedClientChanges;
  if ((TOptional<UE::Online::Private::FSchemaCategoryInstanceBase::FPreparedClientChanges> *)
      &local_348 != this_02) {
    if ((pFVar5->PreparedClientChanges).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar5->PreparedClientChanges).TypedValue.DerivedSchemaDefinition.
                 SharedReferenceCount.ReferenceController);
      FSchemaServiceClientChanges::~FSchemaServiceClientChanges
                ((FSchemaServiceClientChanges *)this_02);
    }
    FSchemaServiceClientChanges::FSchemaServiceClientChanges
              ((FSchemaServiceClientChanges *)this_02,&local_348);
    (pFVar5->PreparedClientChanges).TypedValue.SchemaCompatibilityId = local_250;
    (pFVar5->PreparedClientChanges).TypedValue.DerivedSchemaDefinition.Object = local_248.Object;
    (pFVar5->PreparedClientChanges).TypedValue.DerivedSchemaDefinition.SharedReferenceCount.
    ReferenceController = local_248.SharedReferenceCount.ReferenceController;
    (pFVar5->PreparedClientChanges).TypedValue.DerivedSchemaCategoryDefinition = local_238[0];
    (pFVar5->PreparedClientChanges).bIsSet = true;
    local_248.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_248.Object = (FSchemaDefinition *)0x0;
  }
  TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
            (&local_128,
             (TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
              *)local_228);
  local_d8.Elements._0_8_ = 0;
  local_d8.Elements._8_8_ = 0;
  local_d8.Elements._32_8_ = 0;
  local_d8.Elements._40_4_ = 0;
  local_d8.Elements._44_4_ = 0x80;
  local_d8.Elements._48_4_ = 0xffffffff;
  local_d8.Elements._52_4_ = 0;
  local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_d8.HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
            (&local_d8,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_1d8);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TResult_UResult_FSchemaCategoryInstancePrepareClientChanges_Online_UE__VFOnlineError_34__Online_UE__6B_
  ;
  TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeData>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeData,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,&local_128);
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x80 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x84 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x88 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x8c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x98 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xa0 = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x58,&local_d8);
  __return_storage_ptr__->field_0xa8 = 0;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFSchemaCategoryInstancePrepareClientChanges_Online_UE___Online_UE__6B_;
  local_d8.HashSize = 0;
  if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8.Elements);
  local_128.HashSize = 0;
  if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.SharedReferenceCount.ReferenceController);
  FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_348);
  local_190 = 0;
  if (local_198 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_198);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1d8);
  local_1e0 = 0;
  if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1e8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_228);
  return __return_storage_ptr__;
}

// PrepareServiceSnapshot @ 14ec336b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> * __thiscall
UE::Online::Private::FSchemaCategoryInstanceBase::PrepareServiceSnapshot
          (FSchemaCategoryInstanceBase *this,
          TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot>
          *__return_storage_ptr__,Params *param_1)

{
  undefined1 *puVar1;
  TOptional<UE::Online::Private::FSchemaCategoryInstanceBase::FPreparedServiceChanges> *this_00;
  FSchemaDefinition *pFVar2;
  undefined8 uVar3;
  void *pvVar4;
  code *pcVar5;
  TSharedPtr<UE::Online::FSchemaDefinition_const_,1> *pTVar6;
  FSchemaCategoryDefinition *pFVar7;
  FSchemaCategoryInstanceBase *pFVar8;
  longlong *plVar9;
  TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant> *pTVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  TTuple<FName,UE::Online::FSchemaVariant> *pTVar15;
  long64 lVar16;
  TSharedRef<UE::Online::FSchemaDefinition_const_,1> *pTVar17;
  TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> *pTVar18;
  FSchemaDefinition *pFVar19;
  FOnlineError *pFVar20;
  FName *pFVar21;
  FSchemaServiceAttributeDefinition *pFVar22;
  ulonglong uVar23;
  TTuple<FName,UE::Online::FSchemaAttributeDefinition> *pTVar24;
  TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
  *this_01;
  FSchemaVariant *this_02;
  TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
  *pTVar25;
  FOnlineError *pFVar26;
  byte bVar27;
  longlong lVar28;
  TReferenceControllerBase<1> *pTVar29;
  FName *pFVar30;
  undefined8 uVar31;
  FName *this_03;
  TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_> *pTVar32;
  int iVar33;
  ForElementType<unsigned_int> FVar34;
  uint uVar35;
  FName *pFVar36;
  FSchemaDefinition *pFVar37;
  TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant> *pTVar38;
  undefined1 auStackY_608 [32];
  undefined1 local_5d8;
  undefined1 local_5d7;
  <lambda_3> local_5d6 [6];
  FSchemaCategoryDefinition *local_5d0;
  uint local_5c8;
  int local_5c4;
  FSchemaDefinition *local_5c0;
  FSchemaCategoryInstanceBase *local_5b8;
  uint local_5b0;
  TOptional<FName>_u_0 local_5a8;
  TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> *local_5a0;
  FName *local_598;
  undefined8 local_590;
  FSchemaServiceSnapshot *local_588;
  undefined8 uStack_580;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  int local_560;
  undefined4 uStack_55c;
  TBitArray<FDefaultBitArrayAllocator> *local_558;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_550;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_530;
  TPairInitializer<FName_const_&,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_&&>
  local_510;
  FSparseArrayAllocationInfo local_500;
  longlong *local_4f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4e8;
  undefined8 uStack_4c8;
  TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant> *local_4c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4b8;
  undefined8 uStack_498;
  TSharedRef<UE::Online::FSchemaDefinition_const_,1> local_490;
  FName *local_480;
  undefined1 *local_478;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  undefined8 local_3d0;
  undefined8 local_3c8;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  TOptional<UE::Online::FOnlineError> local_380;
  TOptional<UE::Online::FOnlineError> local_350;
  TOptional<UE::Online::FOnlineError> local_320;
  TOptional<UE::Online::FOnlineError> local_2f0;
  FOnlineError local_2c0;
  FOnlineError local_298;
  FOnlineError local_270;
  FOnlineError local_248 [2];
  undefined4 local_1f4;
  FSchemaServiceClientChanges local_1e8;
  TSharedPtr<UE::Online::FSchemaDefinition_const_,1> local_f0;
  FSchemaCategoryDefinition *pFStack_e0;
  undefined1 local_d8 [32];
  ForElementType<unsigned_int> local_b8;
  uint local_b0;
  uint local_ac;
  int local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_608;
  pTVar29 = (TReferenceControllerBase<1> *)0x0;
  local_5b8 = this;
  local_5a0 = __return_storage_ptr__;
  ResetPreparedChanges(this);
  FSchemaServiceClientChanges::FSchemaServiceClientChanges(&local_1e8);
  local_5d0 = this->BaseSchemaCategoryDefinition;
  local_f0.Object = (FSchemaDefinition *)0x0;
  local_f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFStack_e0 = (FSchemaCategoryDefinition *)0x0;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (ForElementType<unsigned_int>)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = -1;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  local_5a8 = (TOptional<FName>_u_0)0xffffffff;
  if (local_5d0 == (FSchemaCategoryDefinition *)0x0) {
    if (2 < (byte)LogOnlineSchema._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
    }
    local_2f0.bIsSet = false;
    pFVar26 = Errors::InvalidState(&local_270,&local_2f0);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TResult_UResult_FSchemaCategoryInstancePrepareServiceSnapshot_Online_UE__VFOnlineError_34__Online_UE__6B_
    ;
    *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar26->Details).Object;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
         (pFVar26->Details).SharedReferenceCount.ReferenceController;
    pFVar20 = (pFVar26->Inner).Object;
    (pFVar26->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    (pFVar26->Details).Object = (IOnlineErrorDetails *)0x0;
    *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar20;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
         (pFVar26->Inner).SharedReferenceCount.ReferenceController;
    (pFVar26->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar26->Inner).Object = (FOnlineError *)0x0;
    *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar26->ErrorCode;
    __return_storage_ptr__->field_0x30 = 1;
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TOnlineResult_UFSchemaCategoryInstancePrepareServiceSnapshot_Online_UE___Online_UE__6B_
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_270.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_270.Details.SharedReferenceCount.ReferenceController);
    if (local_2f0.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2f0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2f0.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
    local_90 = 0;
    if (local_98 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_d8,0,local_d8._8_4_);
    iVar33 = SUB84(local_d8._8_8_,4);
    local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
    if (iVar33 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
    }
    local_a8 = -1;
    local_a4 = 0;
    local_b0 = 0;
    if (0x80 < local_ac) {
      local_ac = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
    }
    if (local_b8 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_b8);
    }
    if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d8._0_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f0.SharedReferenceCount.ReferenceController);
    FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_1e8);
    return __return_storage_ptr__;
  }
  pTVar6 = &this->BaseSchemaDefinition;
  if (this->DerivedSchemaCategoryDefinition != (FSchemaCategoryDefinition *)0x0) {
    local_5d0 = this->DerivedSchemaCategoryDefinition;
    pTVar6 = &this->DerivedSchemaDefinition;
  }
  pFVar37 = pTVar6->Object;
  local_5c0 = pFVar37;
  pTVar15 = AlgoImpl::
            FindByPredicate<TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>_&,_UE::Online::Private::FSchemaCategoryInstanceBase::PrepareServiceSnapshot_::__l2::<lambda_1>_>
                      (&(param_1->ServiceSnapshot).Attributes,(<lambda_1>)&local_5d0);
  if (pTVar15 != (TTuple<FName,UE::Online::FSchemaVariant> *)0x0) {
    lVar16 = FSchemaVariant::GetInt64((FSchemaVariant *)&pTVar15->field_0x8);
    pFVar7 = local_5d0;
    pFVar37 = (this->BaseSchemaDefinition).Object;
    pTVar17 = TMapBase<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,0>_>
              ::Find((TMapBase<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,0>_>
                      *)&((this->SchemaRegistry).Object)->SchemaDefinitionsByCompatibilityId,lVar16)
    ;
    if (pTVar17 == (TSharedRef<UE::Online::FSchemaDefinition_const_,1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pTVar29 = (pTVar17->SharedReferenceCount).ReferenceController;
      pFVar2 = pTVar17->Object;
      if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_3c8 = 0;
      local_3d0 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar8 = local_5b8;
      if (pFVar2 != (FSchemaDefinition *)0x0) {
        if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_490.Object = pFVar2;
        local_490.SharedReferenceCount.ReferenceController = pTVar29;
        bVar11 = InitializeSchemaDefinition
                           (local_5b8,&local_490,pFVar37,&pFVar7->Id,&local_f0,&pFStack_e0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29)
        ;
        if (!bVar11) goto LAB_14ec339e7;
        if ((pFVar8->DerivedSchemaDefinition).Object != (FSchemaDefinition *)0x0) {
          if ((local_f0.Object == (FSchemaDefinition *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            pTVar18 = (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> *)
                      (*pcVar5)();
            return pTVar18;
          }
          pFVar2 = local_f0.Object;
          pFVar19 = TSharedPtr<UE::Online::FSchemaDefinition_const_,1>::operator->
                              (&pFVar8->DerivedSchemaDefinition);
          this = local_5b8;
          __return_storage_ptr__ = local_5a0;
          pFVar37 = local_5c0;
          if (pFVar19->Id == pFVar2->Id) goto LAB_14ec3396c;
        }
        pFVar37 = local_f0.Object;
        local_5d0 = pFStack_e0;
        local_5c0 = local_f0.Object;
        local_1e8.SchemaId.field0_0x0 = *(TOptional<FName>_u_0 *)&(local_f0.Object)->Id;
        if ((local_1e8.SchemaId.field0_0x0._0_4_ == 0xffffffff) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x171,
                                L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          pTVar18 = (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> *)
                    (*pcVar5)();
          return pTVar18;
        }
        local_5a8 = *(TOptional<FName>_u_0 *)&pFVar37->Id;
        this = local_5b8;
        __return_storage_ptr__ = local_5a0;
        if ((local_5a8.TypedValue.ComparisonIndex.Value.Value == 0xffffffff) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x171,
                                L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                               ), this = local_5b8, __return_storage_ptr__ = local_5a0, bVar11)) {
          pcVar5 = (code *)swi(3);
          pTVar18 = (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> *)
                    (*pcVar5)();
          return pTVar18;
        }
        goto LAB_14ec3396c;
      }
    }
    if (1 < (byte)LogOnlineSchema._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
LAB_14ec339e7:
    if (2 < (byte)LogOnlineSchema._0_1_) {
      ::FName::ToString(&local_5d0->SchemaCompatibilityServiceAttributeId,&local_3a0);
      ::FName::ToString(&local_5d0->Id,&local_3b0);
      ::FName::ToString(&local_5c0->Id,&local_3c0);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
      if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
      }
      if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
      }
      if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
      }
    }
    local_380.bIsSet = false;
    pFVar20 = Errors::InvalidParams(local_248,&local_380);
    pTVar18 = local_5a0;
    TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot>::
    TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot>(local_5a0,pFVar20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_248[0].Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_248[0].Details.SharedReferenceCount.ReferenceController);
    if (local_380.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_380.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_380.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
    local_90 = 0;
    if (local_98 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_d8,0,local_d8._8_4_);
    iVar33 = SUB84(local_d8._8_8_,4);
    local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
    if (iVar33 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
    }
    local_a8 = -1;
    local_a4 = 0;
    local_b0 = 0;
    if (0x80 < local_ac) {
      local_ac = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
    }
    if (local_b8 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_b8);
    }
    if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d8._0_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f0.SharedReferenceCount.ReferenceController);
    FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_1e8);
    return pTVar18;
  }
LAB_14ec3396c:
  pFVar7 = local_5d0;
  if ((param_1->SchemaId).field0_0x0.TypedValue.ComparisonIndex.Value == 0xffffffff) {
LAB_14ec33da2:
    local_530.UnvisitedBitMask = 0xffffffff;
    pTVar38 = (TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant> *)
              &param_1->ServiceSnapshot;
    puVar1 = &(param_1->ServiceSnapshot).Attributes.field_0x10;
    local_530._padding_._0_4_ = 0;
    local_590 = 1;
    local_530._padding_._4_4_ = 1;
    local_530.CurrentBitIndex = 0;
    local_530.BaseBitIndex = 0;
    local_530.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    local_510.Value = pTVar38;
    if (*(int *)&(param_1->ServiceSnapshot).Attributes.field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_530);
    }
    uVar31 = local_590;
    uVar13 = *(uint *)&(param_1->ServiceSnapshot).Attributes.field_0x28;
    bVar27 = (byte)uVar13 & 0x1f;
    local_560 = *(int *)&(param_1->ServiceSnapshot).Attributes.field_0x8 -
                *(int *)&(param_1->ServiceSnapshot).Attributes.field_0x34;
    uStack_580 = CONCAT44(local_530._padding_._4_4_,(undefined4)local_530._padding_);
    uStack_570._4_4_ = local_530.CurrentBitIndex;
    uStack_570._0_4_ = local_530.UnvisitedBitMask;
    uStack_568._4_4_ = local_530._28_4_;
    uStack_568._0_4_ = local_530.BaseBitIndex;
    local_550._padding_._0_4_ = (int)uVar13 >> 5;
    local_550._padding_._4_4_ = (int)local_590 << bVar27;
    local_550.UnvisitedBitMask = -1 << bVar27;
    pTStack_578 = local_530.Array;
    local_550.BaseBitIndex = uVar13 & 0xffffffe0;
    uStack_498 = CONCAT44(uStack_55c,local_560);
    TStack_4b8.Array = local_530.Array;
    local_588 = (FSchemaServiceSnapshot *)pTVar38;
    local_550.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    local_550.CurrentBitIndex = uVar13;
    local_4c0 = pTVar38;
    TStack_4b8._padding_ = uStack_580;
    TStack_4b8._16_8_ = uStack_570;
    TStack_4b8._24_8_ = uStack_568;
    if (((int)uVar13 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      pTVar18 = (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> *)
                (*pcVar5)();
      return pTVar18;
    }
    if (uVar13 != *(uint *)&(param_1->ServiceSnapshot).Attributes.field_0x28) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_550);
    }
    uStack_580 = CONCAT44(local_550._padding_._4_4_,(int)local_550._padding_);
    uStack_570 = CONCAT44(local_550.CurrentBitIndex,local_550.UnvisitedBitMask);
    uStack_568 = CONCAT44(local_550._28_4_,local_550.BaseBitIndex);
    pTStack_578 = local_550.Array;
    local_558 = local_550.Array;
    local_5c8 = local_550.CurrentBitIndex;
    uVar13 = local_550.CurrentBitIndex;
    while( true ) {
      pTVar10 = local_4c0;
      uVar14 = (uint)uVar31;
      if (*(int *)&local_4c0->field_0x8 - *(int *)&local_4c0->field_0x34 != (int)uStack_498) {
        local_5d8 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5d8);
      }
      uVar35 = local_b0;
      if (((TStack_4b8.CurrentBitIndex == uVar13) && (TStack_4b8.Array == local_558)) &&
         (pTVar10 == pTVar38)) break;
      pFVar21 = (FName *)(*(longlong *)pTVar10 + (longlong)TStack_4b8.CurrentBitIndex * 0x30);
      pFVar22 = TMapBase<FName,UE::Online::FSchemaServiceAttributeDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeDefinition,0>_>
                ::Find((TMapBase<FName,UE::Online::FSchemaServiceAttributeDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeDefinition,0>_>
                        *)&local_5d0->ServiceAttributeDefinitions,*pFVar21);
      if (pFVar22 == (FSchemaServiceAttributeDefinition *)0x0) {
        if (2 < (byte)LogOnlineSchema._0_1_) {
          ::FName::ToString(pFVar21,&local_3e0);
          ::FName::ToString(&local_5d0->Id,&local_3f0);
          ::FName::ToString(&pFVar37->Id,&local_400);
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
          if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_400.Data.AllocatorInstance.Data);
          }
          if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
          }
          uVar13 = local_5c8;
          if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
            uVar13 = local_5c8;
          }
        }
      }
      else {
        pFVar36 = (FName *)(pFVar22->SchemaAttributeIds).AllocatorInstance.Data;
        local_5b0 = (pFVar22->SchemaAttributeIds).ArrayNum;
        uVar23 = (ulonglong)(int)local_5b0;
        local_598 = pFVar36 + uVar23;
        pFVar30 = local_598;
        while( true ) {
          if ((pFVar22->SchemaAttributeIds).ArrayNum != (int)uVar23) {
            local_5d7 = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_5d7);
          }
          pFVar37 = local_5c0;
          uVar13 = local_5c8;
          if (pFVar36 == pFVar30) break;
          if (((pFVar22->SchemaAttributeIds).ArrayNum != 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SchemaServiceAttributeDefinition->SchemaAttributeIds.Num() == 1",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Schema.cpp"
                                  ,0x4f0,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            pTVar18 = (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> *)
                      (*pcVar5)();
            return pTVar18;
          }
          pTVar24 = TSet<TTuple<FName,UE::Online::FSchemaAttributeDefinition>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaAttributeDefinition,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,UE::Online::FSchemaAttributeDefinition>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaAttributeDefinition,0>,FDefaultSetAllocator>
                            *)&local_5d0->SchemaAttributeDefinitions,*pFVar36);
          this_03 = (FName *)&pTVar24->field_0x8;
          if (pTVar24 == (TTuple<FName,UE::Online::FSchemaAttributeDefinition> *)0x0) {
            this_03 = (FName *)0x0;
          }
          if ((this_03 == (FName *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SchemaAttributeDefinition",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Schema.cpp"
                                  ,0x4f5,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            pTVar18 = (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> *)
                      (*pcVar5)();
            return pTVar18;
          }
          if ((this_03[1].ComparisonIndex.Value & 0x800) == 0) {
            if (local_a4 == 0) {
              iVar12 = Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x30,8,(int)uVar31,(ForAnyElementType *)local_d8,
                                  (int *)(local_d8 + 8),(int *)(local_d8 + 0xc));
              TBitArray<FDefaultBitArrayAllocator>::Add
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),false);
              iVar33 = local_a8;
            }
            else {
              local_a4 = local_a4 + -1;
              iVar33 = *(int *)(local_d8._0_8_ + (longlong)local_a8 * 0x30 + 4);
              iVar12 = local_a8;
              if (local_a4 != 0) {
                *(undefined4 *)(local_d8._0_8_ + (longlong)iVar33 * 0x30) = 0xffffffff;
              }
            }
            local_a8 = iVar33;
            TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_d8,&local_500,iVar12);
            pTVar32 = local_500.Pointer;
            if (local_500.Pointer ==
                (TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_> *)0x0) {
              pTVar32 = (TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_> *)0x0;
            }
            else {
              *(FName *)local_500.Pointer = *this_03;
              *(undefined8 *)((longlong)local_500.Pointer + 0x10) = 0;
              *(undefined8 *)((longlong)local_500.Pointer + 8) = 0;
              *(undefined8 *)((longlong)local_500.Pointer + 0x10) = 0;
              *(undefined1 *)((longlong)local_500.Pointer + 0x18) = 0;
              *(undefined1 *)((longlong)local_500.Pointer + 0x20) = 0;
              TVariant<FString,__int64,double,bool>::operator=
                        ((TVariant<FString,__int64,double,bool> *)((longlong)local_500.Pointer + 8),
                         (TVariant<FString,__int64,double,bool> *)(pFVar21 + 1));
              *(char *)((longlong)pTVar32 + 0x20) = (char)pFVar21[4].ComparisonIndex.Value;
              *(undefined1 *)&pFVar21[4].ComparisonIndex.Value = 0;
              *(undefined4 *)((longlong)pTVar32 + 0x28) = 0xffffffff;
            }
            uVar3 = *(undefined8 *)pTVar32;
            local_5c4 = local_500.Index;
            uVar13 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
            uVar13 = (int)((ulonglong)uVar3 >> 0x20) + uVar13;
            bVar11 = TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                     ::TryReplaceExisting
                               ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                                 *)local_d8,uVar13,pTVar32,&local_5c4,(bool *)0x0);
            pFVar30 = local_598;
            if (bVar11) goto LAB_14ec34272;
            TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
            ::RehashOrLink((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                            *)local_d8,uVar13,pTVar32,local_5c4);
            uVar23 = (ulonglong)local_5b0;
            pFVar36 = pFVar36 + 1;
            pFVar30 = local_598;
          }
          else {
            if (5 < (byte)LogOnlineSchema._0_1_) {
              FSchemaVariant::GetInt64((FSchemaVariant *)(pFVar21 + 1));
              ::FName::ToString(this_03,&local_410);
              ::FName::ToString(&local_5d0->Id,&local_420);
              ::FName::ToString(&local_5c0->Id,&local_430);
              Logging::Private::BasicLog<6>
                        ((FStaticBasicLogRecord *)&PTR_u__PrepareService_15304bf58,
                         (FLogCategoryBase *)&LogOnlineSchema);
              if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_430.Data.AllocatorInstance.Data);
              }
              if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_420.Data.AllocatorInstance.Data);
              }
              pFVar30 = local_598;
              uVar31 = local_590;
              if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_410.Data.AllocatorInstance.Data);
                pFVar30 = local_598;
                uVar31 = local_590;
              }
            }
LAB_14ec34272:
            uVar23 = (ulonglong)local_5b0;
            pFVar36 = pFVar36 + 1;
          }
        }
      }
      TStack_4b8.UnvisitedBitMask = TStack_4b8.UnvisitedBitMask & ~TStack_4b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4b8);
      pTVar38 = local_510.Value;
    }
    iVar33 = 0;
    uStack_568._0_4_ = 0;
    uStack_570._4_4_ = 0;
    if (local_b0 != 0) {
      FVar34 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
      if (local_b8 != (ForElementType<unsigned_int>)0x0) {
        FVar34 = local_b8;
      }
      uVar13 = *(uint *)FVar34;
      uStack_568._0_4_ = 0;
      while (uVar13 == 0) {
        lVar28 = (longlong)iVar33;
        uStack_568._0_4_ = (int)uStack_568 + 0x20;
        iVar33 = iVar33 + 1;
        uStack_570._4_4_ = local_b0;
        if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar33)
        goto LAB_14ec34530;
        uVar13 = ((uint *)((longlong)FVar34 + 4))[lVar28];
      }
      uVar14 = -uVar13 & uVar13;
      uVar23 = (ulonglong)uVar14 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      local_510.Key._4_4_ = (int)lVar28;
      uStack_570._4_4_ = local_510.Key._4_4_ + -1 + (int)uStack_568;
      if ((int)local_b0 < (int)uStack_570._4_4_) {
        uStack_570._4_4_ = local_b0;
      }
    }
LAB_14ec34530:
    local_588 = (FSchemaServiceSnapshot *)local_d8;
    pTStack_578 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
    local_560 = local_d8._8_4_ - local_a4;
    uVar13 = local_b0 & 0xffffffe0;
    uStack_580 = CONCAT44(uVar14,iVar33);
    uStack_570._0_4_ = 0xffffffff;
    uStack_568._4_4_ = local_1f4;
    TStack_4e8._padding_ = uStack_580;
    iVar33 = (int)local_b0 >> 5;
    uStack_4c8 = CONCAT44(uStack_55c,local_560);
    bVar27 = (byte)local_b0;
    TStack_4e8.UnvisitedBitMask = 0xffffffff;
    TStack_4e8.CurrentBitIndex = uStack_570._4_4_;
    TStack_4e8.BaseBitIndex = (int)uStack_568;
    TStack_4e8._28_4_ = local_1f4;
    local_4f0 = (longlong *)local_588;
    TStack_4e8.Array = pTStack_578;
    if (((int)local_b0 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      pTVar18 = (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> *)
                (*pcVar5)();
      return pTVar18;
    }
    pFVar8 = local_5b8;
    if (uVar35 != local_b0) {
      FVar34 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
      if (local_b8 != (ForElementType<unsigned_int>)0x0) {
        FVar34 = local_b8;
      }
      uVar14 = -1 << (bVar27 & 0x1f) & *(uint *)((longlong)FVar34 + (longlong)iVar33 * 4);
      while (uVar14 == 0) {
        lVar28 = (longlong)iVar33;
        uVar13 = uVar13 + 0x20;
        iVar33 = iVar33 + 1;
        uVar35 = local_b0;
        if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar33)
        goto LAB_14ec3463f;
        uVar14 = ((uint *)((longlong)FVar34 + 4))[lVar28];
      }
      uVar23 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar28 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      uVar35 = (uVar13 - 1) + (int)lVar28;
      if ((int)local_b0 < (int)uVar35) {
        uVar35 = local_b0;
      }
    }
LAB_14ec3463f:
    while( true ) {
      plVar9 = local_4f0;
      if ((int)local_4f0[1] - *(int *)((longlong)local_4f0 + 0x34) != (int)uStack_4c8) {
        `TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5d6);
      }
      if (((TStack_4e8.CurrentBitIndex == uVar35) &&
          (TStack_4e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
         (plVar9 == (longlong *)local_d8)) break;
      pFVar21 = (FName *)((longlong)TStack_4e8.CurrentBitIndex * 0x30 + *plVar9);
      this_01 = (TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
                 *)(**(code **)(pFVar8->_padding_ + 8))(pFVar8);
      this_02 = TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
                ::Find(this_01,*pFVar21);
      if (this_02 == (FSchemaVariant *)0x0) {
        TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
        ::Emplace<FName_const_&,UE::Online::FSchemaVariant_const_&>
                  ((TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
                    *)&local_1e8.AddedAttributes,pFVar21,(FSchemaVariant *)(pFVar21 + 1));
      }
      else {
        bVar11 = FSchemaVariant::operator==(this_02,(FSchemaVariant *)(pFVar21 + 1));
        if (!bVar11) {
          TVariant<FString,__int64,double,bool>::TVariant<FString,__int64,double,bool>
                    ((TVariant<FString,__int64,double,bool> *)local_88,&this_02->VariantData);
          local_88[0x18] = this_02->VariantType;
          TVariant<FString,__int64,double,bool>::TVariant<FString,__int64,double,bool>
                    ((TVariant<FString,__int64,double,bool> *)(local_88 + 0x20),
                     (TVariant<FString,__int64,double,bool> *)(pFVar21 + 1));
          local_88[0x38] = *(undefined1 *)&pFVar21[4].ComparisonIndex.Value;
          local_478 = local_88;
          local_480 = pFVar21;
          TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FName_const_&,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_&&>_>
                    ((TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
                      *)&local_1e8.ChangedAttributes,&local_510,(bool *)&local_480);
          Core::Private::Tuple::
          TTupleBase<TIntegerSequence<unsigned_int,0,1>,UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>
          ::
          ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>
                    ((TTupleBase<TIntegerSequence<unsigned_int,0,1>,UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>
                      *)local_88);
        }
      }
      TStack_4e8.UnvisitedBitMask = TStack_4e8.UnvisitedBitMask & ~TStack_4e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4e8);
    }
    pTVar25 = (TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
               *)(**(code **)(pFVar8->_padding_ + 8))(pFVar8);
    Algo::
    TransformIf<TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_&,_UE::Online::Private::FSchemaCategoryInstanceBase::PrepareServiceSnapshot_::__l171::<lambda_2>,_UE::Online::Private::FSchemaCategoryInstanceBase::PrepareServiceSnapshot_::__l171::<lambda_3>_>
              (pTVar25,&local_1e8.RemovedAttributes,(FPreparedServiceChanges *)&local_1e8,
               local_5d6[0]);
    this_00 = &pFVar8->PreparedServiceChanges;
    if ((TOptional<UE::Online::Private::FSchemaCategoryInstanceBase::FPreparedServiceChanges> *)
        &local_1e8 != this_00) {
      pTVar25 = &(pFVar8->PreparedServiceChanges).TypedValue.ClientDataSnapshot;
      if ((pFVar8->PreparedServiceChanges).bIsSet != false) {
        *(undefined4 *)&(pFVar8->PreparedServiceChanges).TypedValue.ClientDataSnapshot.field_0x48 =
             0;
        pvVar4 = *(void **)&(pFVar8->PreparedServiceChanges).TypedValue.ClientDataSnapshot.
                            field_0x40;
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)pTVar25);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar8->PreparedServiceChanges).TypedValue.DerivedSchemaDefinition.
                   SharedReferenceCount.ReferenceController);
        FSchemaServiceClientChanges::~FSchemaServiceClientChanges
                  ((FSchemaServiceClientChanges *)this_00);
      }
      FSchemaServiceClientChanges::FSchemaServiceClientChanges
                ((FSchemaServiceClientChanges *)this_00,&local_1e8);
      (pFVar8->PreparedServiceChanges).TypedValue.DerivedSchemaDefinition.Object = local_f0.Object;
      (pFVar8->PreparedServiceChanges).TypedValue.DerivedSchemaDefinition.SharedReferenceCount.
      ReferenceController = local_f0.SharedReferenceCount.ReferenceController;
      (pFVar8->PreparedServiceChanges).TypedValue.DerivedSchemaCategoryDefinition = pFStack_e0;
      *(undefined8 *)&pTVar25->field_0x0 = 0;
      *(undefined8 *)&(pFVar8->PreparedServiceChanges).TypedValue.ClientDataSnapshot.field_0x8 = 0;
      *(undefined8 *)&(pFVar8->PreparedServiceChanges).TypedValue.ClientDataSnapshot.field_0x20 = 0;
      *(undefined4 *)&(pFVar8->PreparedServiceChanges).TypedValue.ClientDataSnapshot.field_0x28 = 0;
      *(undefined4 *)&(pFVar8->PreparedServiceChanges).TypedValue.ClientDataSnapshot.field_0x2c =
           0x80;
      *(undefined4 *)&(pFVar8->PreparedServiceChanges).TypedValue.ClientDataSnapshot.field_0x30 =
           0xffffffff;
      *(undefined4 *)&(pFVar8->PreparedServiceChanges).TypedValue.ClientDataSnapshot.field_0x34 = 0;
      *(undefined8 *)&(pFVar8->PreparedServiceChanges).TypedValue.ClientDataSnapshot.field_0x40 = 0;
      *(undefined4 *)&(pFVar8->PreparedServiceChanges).TypedValue.ClientDataSnapshot.field_0x48 = 0;
      local_f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_f0.Object = (FSchemaDefinition *)0x0;
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)pTVar25,
                 (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)local_d8);
      (pFVar8->PreparedServiceChanges).bIsSet = true;
    }
    __return_storage_ptr__ = local_5a0;
    *(undefined4 *)&local_5a0->field_0x8 = 0xffffffff;
    *(undefined4 *)&local_5a0->field_0xc = 0;
    if (local_5a8.TypedValue.ComparisonIndex.Value != 0xffffffff) {
      *(TOptional<FName>_u_0 *)&local_5a0->field_0x8 = local_5a8;
    }
    local_5a0->field_0x30 = 0;
    *(undefined ***)local_5a0 =
         &
         ___7__TOnlineResult_UFSchemaCategoryInstancePrepareServiceSnapshot_Online_UE___Online_UE__6B_
    ;
    local_90 = 0;
    if (local_98 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_d8);
  }
  else {
    if (pTVar15 == (TTuple<FName,UE::Online::FSchemaVariant> *)0x0) {
      pFVar2 = (this->BaseSchemaDefinition).Object;
      pFVar21 = TOptional<FName>::operator*(&param_1->SchemaId);
      pFVar8 = local_5b8;
      bVar11 = InitializeSchemaDefinition
                         (local_5b8,pFVar21,pFVar2,&pFVar7->Id,&local_f0,&pFStack_e0);
      if (bVar11) {
        if ((pFVar8->DerivedSchemaDefinition).Object != (FSchemaDefinition *)0x0) {
          if ((local_f0.Object == (FSchemaDefinition *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            pTVar18 = (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> *)
                      (*pcVar5)();
            return pTVar18;
          }
          pFVar2 = local_f0.Object;
          pFVar19 = TSharedPtr<UE::Online::FSchemaDefinition_const_,1>::operator->
                              (&pFVar8->DerivedSchemaDefinition);
          if (pFVar19->Id == pFVar2->Id) goto LAB_14ec33da2;
        }
        pFVar37 = local_f0.Object;
        local_5c0 = local_f0.Object;
        local_5d0 = pFStack_e0;
        TOptional<FName>::Emplace<FName_const_&>(&local_1e8.SchemaId,&(local_f0.Object)->Id);
        TOptional<FName>::Emplace<FName_const_&>
                  ((TOptional<FName> *)&local_5a8.TypedValue,&pFVar37->Id);
        goto LAB_14ec33da2;
      }
      if (2 < (byte)LogOnlineSchema._0_1_) {
        pFVar21 = TOptional<FName>::operator->(&param_1->SchemaId);
        ::FName::ToString(pFVar21,&local_440);
        ::FName::ToString(&local_5d0->Id,&local_450);
        ::FName::ToString(&pFVar37->Id,&local_460);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
        if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_460.Data.AllocatorInstance.Data);
        }
        if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_450.Data.AllocatorInstance.Data);
        }
        if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_440.Data.AllocatorInstance.Data);
        }
      }
      local_320.bIsSet = false;
      pFVar20 = Errors::InvalidParams(&local_298,&local_320);
      TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot>::
      TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot>
                (__return_storage_ptr__,pFVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_298.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_298.Details.SharedReferenceCount.ReferenceController);
      if (local_320.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_320.TypedValue.Inner.SharedReferenceCount.ReferenceController);
        local_350.TypedValue.Details.SharedReferenceCount.ReferenceController =
             local_320.TypedValue.Details.SharedReferenceCount.ReferenceController;
        goto LAB_14ec34105;
      }
    }
    else {
      if (2 < (byte)LogOnlineSchema._0_1_) {
        ::FName::ToString(&local_5d0->Id,&local_470);
        ::FName::ToString(&pFVar37->Id,&local_390);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
        if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_390.Data.AllocatorInstance.Data);
        }
        if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_470.Data.AllocatorInstance.Data);
        }
      }
      local_350.bIsSet = false;
      pFVar20 = Errors::InvalidParams(&local_2c0,&local_350);
      TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot>::
      TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot>
                (__return_storage_ptr__,pFVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2c0.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2c0.Details.SharedReferenceCount.ReferenceController);
      if (local_350.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_350.TypedValue.Inner.SharedReferenceCount.ReferenceController);
LAB_14ec34105:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_350.TypedValue.Details.SharedReferenceCount.ReferenceController);
      }
    }
    local_90 = 0;
    if (local_98 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_d8,0,local_d8._8_4_);
    iVar33 = SUB84(local_d8._8_8_,4);
    local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
    if (iVar33 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
    }
    local_b0 = 0;
    local_a4 = 0;
    local_a8 = -1;
    if (0x80 < local_ac) {
      local_ac = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
    }
    if (local_b8 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_b8);
    }
    if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d8._0_8_);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.SharedReferenceCount.ReferenceController);
  FSchemaServiceClientChanges::~FSchemaServiceClientChanges(&local_1e8);
  return __return_storage_ptr__;
}

// ResetPreparedChanges @ 14ec36fc0

void __thiscall
UE::Online::Private::FSchemaCategoryInstanceBase::ResetPreparedChanges
          (FSchemaCategoryInstanceBase *this)

{
  void *pvVar1;
  
  if ((this->PreparedClientChanges).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->PreparedClientChanges).TypedValue.DerivedSchemaDefinition.SharedReferenceCount
               .ReferenceController);
    FSchemaServiceClientChanges::~FSchemaServiceClientChanges
              ((FSchemaServiceClientChanges *)&this->PreparedClientChanges);
    (this->PreparedClientChanges).bIsSet = false;
  }
  if ((this->PreparedServiceChanges).bIsSet != false) {
    *(undefined4 *)&(this->PreparedServiceChanges).TypedValue.ClientDataSnapshot.field_0x48 = 0;
    pvVar1 = *(void **)&(this->PreparedServiceChanges).TypedValue.ClientDataSnapshot.field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(this->PreparedServiceChanges).TypedValue.ClientDataSnapshot);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->PreparedServiceChanges).TypedValue.DerivedSchemaDefinition.
               SharedReferenceCount.ReferenceController);
    FSchemaServiceClientChanges::~FSchemaServiceClientChanges
              ((FSchemaServiceClientChanges *)&this->PreparedServiceChanges);
    (this->PreparedServiceChanges).bIsSet = false;
  }
  return;
}

// VerifyBaseAttributeData @ 14ec399a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Online::Private::FSchemaCategoryInstanceBase::VerifyBaseAttributeData
          (FSchemaCategoryInstanceBase *this,FName *param_1,FSchemaVariant *param_2,FName *param_3,
          ESchemaServiceAttributeFlags *param_4)

{
  ESchemaAttributeType EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  TTuple<FName,UE::Online::FSchemaAttributeDefinition> *pTVar7;
  FString *pFVar8;
  FSchemaServiceAttributeDefinition *pFVar9;
  FSchemaDefinition *pFVar10;
  FName *this_00;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (this->BaseSchemaCategoryDefinition == (FSchemaCategoryDefinition *)0x0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5340537342878808734>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Schema.cpp"
                       ,0x562,"IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((byte)LogOnlineSchema._0_1_ < 6) {
      return false;
    }
    ::FName::ToString(param_1,&local_c8);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
  }
  else {
    pTVar7 = TSet<TTuple<FName,UE::Online::FSchemaAttributeDefinition>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaAttributeDefinition,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,UE::Online::FSchemaAttributeDefinition>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaAttributeDefinition,0>,FDefaultSetAllocator>
                     *)&this->BaseSchemaCategoryDefinition->SchemaAttributeDefinitions,*param_1);
    this_00 = (FName *)&pTVar7->field_0x8;
    if (pTVar7 == (TTuple<FName,UE::Online::FSchemaAttributeDefinition> *)0x0) {
      this_00 = (FName *)0x0;
    }
    if (this_00 == (FName *)0x0) {
      if ((byte)LogOnlineSchema._0_1_ < 6) {
        return false;
      }
      ::FName::ToString(&this->BaseSchemaCategoryDefinition->Id,&local_28);
      pFVar10 = TSharedPtr<UE::Online::FSchemaDefinition_const_,1>::operator->
                          (&this->BaseSchemaDefinition);
      ::FName::ToString(&pFVar10->Id,&local_38);
      ::FName::ToString(param_1,&local_48);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_c8.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        local_c8.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      }
    }
    else {
      EVar1 = (ESchemaAttributeType)this_00[1].ComparisonIndex.Value;
      if (EVar1 == param_2->VariantType) {
        if (EVar1 == String) {
          pFVar8 = FSchemaVariant::GetString(param_2);
          iVar2 = (pFVar8->Data).ArrayNum;
          iVar6 = iVar2 + -1;
          if (iVar2 == 0) {
            iVar6 = 0;
          }
          if ((int)this_00[1].Number < iVar6) {
            return false;
          }
        }
        *param_3 = this_00[2];
        if (this_00[2] == (FName)0x0) {
          return true;
        }
        pFVar9 = TMapBase<FName,UE::Online::FSchemaServiceAttributeDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeDefinition,0>_>
                 ::Find((TMapBase<FName,UE::Online::FSchemaServiceAttributeDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeDefinition,0>_>
                         *)&this->BaseSchemaCategoryDefinition->ServiceAttributeDefinitions,
                        this_00[2]);
        if (pFVar9 != (FSchemaServiceAttributeDefinition *)0x0) {
          *param_4 = pFVar9->Flags;
          return true;
        }
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5340537342878808720>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Schema.cpp"
                           ,0x570,"ServiceAttributeDefinition");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if ((byte)LogOnlineSchema._0_1_ < 3) {
          return false;
        }
        ::FName::ToString(this_00 + 2,&local_88);
        ::FName::ToString(this_00,&local_98);
        ::FName::ToString(&this->BaseSchemaCategoryDefinition->Id,&local_a8);
        ::FName::ToString(&this->BaseSchemaCategoryDefinition->Id,&local_b8);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        local_c8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
          local_c8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
        }
      }
      else {
        if ((byte)LogOnlineSchema._0_1_ < 6) {
          return false;
        }
        Online::LexToString(EVar1);
        Online::LexToString(param_2->VariantType);
        ::FName::ToString(this_00,&local_58);
        ::FName::ToString(&this->BaseSchemaCategoryDefinition->Id,&local_68);
        pFVar10 = TSharedPtr<UE::Online::FSchemaDefinition_const_,1>::operator->
                            (&this->BaseSchemaDefinition);
        ::FName::ToString(&pFVar10->Id,&local_78);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSchema);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        local_c8.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
          local_c8.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        }
      }
    }
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return false;
}

