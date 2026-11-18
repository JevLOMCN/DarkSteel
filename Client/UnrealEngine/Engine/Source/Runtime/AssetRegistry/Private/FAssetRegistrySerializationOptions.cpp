// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 4

// FAssetRegistrySerializationOptions @ 142ad5320

FAssetRegistrySerializationOptions * __thiscall
FAssetRegistrySerializationOptions::FAssetRegistrySerializationOptions
          (FAssetRegistrySerializationOptions *this,ESerializationTarget param_1)

{
  TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
  *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined8 *puVar15;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  this->bSerializeAssetRegistry = false;
  this->bSerializeDependencies = false;
  this->bSerializeSearchableNameDependencies = false;
  this->bSerializeManageDependencies = false;
  this->bSerializePackageData = false;
  this->bUseAssetRegistryTagsAllowListInsteadOfDenyList = false;
  this->bFilterAssetDataWithNoTags = false;
  this->bFilterDependenciesWithNoTags = false;
  this_00 = &this->CookFilterlistTagsByClass;
  this->bFilterSearchableNames = false;
  this->bKeepDevelopmentAssetRegistryTags = false;
  puVar7 = &(this->CookFilterlistTagsByClass).field_0xc;
  puVar1 = &(this->CookFilterlistTagsByClass).field_0x48;
  *(undefined4 *)puVar7 = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined4 *)&(this->CookFilterlistTagsByClass).field_0x8 = 0;
  *(undefined8 *)&(this->CookFilterlistTagsByClass).field_0x20 = 0;
  *(undefined4 *)&(this->CookFilterlistTagsByClass).field_0x28 = 0;
  *(undefined4 *)&(this->CookFilterlistTagsByClass).field_0x2c = 0x80;
  *(undefined4 *)&(this->CookFilterlistTagsByClass).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CookFilterlistTagsByClass).field_0x34 = 0;
  *(undefined8 *)&(this->CookFilterlistTagsByClass).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined8 *)&(this->CookTagsAsName).Elements = 0;
  *(undefined8 *)&(this->CookTagsAsName).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CookTagsAsName).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CookTagsAsName).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CookTagsAsName).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CookTagsAsName).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CookTagsAsName).Elements.field_0x34 = 0;
  (this->CookTagsAsName).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CookTagsAsName).HashSize = 0;
  *(undefined8 *)&(this->CookTagsAsPath).Elements = 0;
  *(undefined8 *)&(this->CookTagsAsPath).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CookTagsAsPath).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CookTagsAsPath).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CookTagsAsPath).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CookTagsAsPath).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CookTagsAsPath).Elements.field_0x34 = 0;
  (this->CookTagsAsPath).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CookTagsAsPath).HashSize = 0;
  *(undefined8 *)&(this->AssetBundlesDenyList).Elements = 0;
  *(undefined8 *)&(this->AssetBundlesDenyList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AssetBundlesDenyList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AssetBundlesDenyList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AssetBundlesDenyList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AssetBundlesDenyList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssetBundlesDenyList).Elements.field_0x34 = 0;
  (this->AssetBundlesDenyList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AssetBundlesDenyList).HashSize = 0;
  if (param_1 == ForDevelopment) {
    this->bSerializeAssetRegistry = true;
    this->bSerializeDependencies = true;
    this->bSerializeSearchableNameDependencies = true;
    this->bSerializeManageDependencies = true;
    this->bSerializePackageData = true;
    this->bUseAssetRegistryTagsAllowListInsteadOfDenyList = false;
    this->bFilterAssetDataWithNoTags = false;
    this->bFilterDependenciesWithNoTags = false;
    this->bFilterSearchableNames = false;
    iVar3 = *(int *)puVar1;
    if (iVar3 < 2) {
      TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->CookFilterlistTagsByClass).field_0x8);
    *(undefined4 *)&(this->CookFilterlistTagsByClass).field_0x8 = 0;
    if (*(int *)puVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,0,(ForAnyElementType *)this_00,0,(int *)puVar7);
    }
    puVar7 = &(this->CookFilterlistTagsByClass).field_0x10;
    *(undefined4 *)&(this->CookFilterlistTagsByClass).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->CookFilterlistTagsByClass).field_0x34 = 0;
    iVar4 = *(int *)&(this->CookFilterlistTagsByClass).field_0x2c;
    *(undefined4 *)&(this->CookFilterlistTagsByClass).field_0x28 = 0;
    if ((iVar4 < 0) || (0x80 < iVar4)) {
      *(undefined4 *)&(this->CookFilterlistTagsByClass).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar7,0);
    }
    if (iVar3 >= 2) {
      puVar13 = &(this->CookFilterlistTagsByClass).field_0x40;
      puVar2 = &(this->CookFilterlistTagsByClass).field_0x38;
      *(undefined4 *)puVar1 = 1;
      if ((*(longlong *)&(this->CookFilterlistTagsByClass).field_0x40 != 0) &&
         (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)puVar13,0,0,4),
         *(longlong *)&(this->CookFilterlistTagsByClass).field_0x40 != 0)) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)puVar13,0,0,4);
      }
      puVar10 = *(undefined4 **)&(this->CookFilterlistTagsByClass).field_0x40;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)puVar2;
      }
      *puVar10 = 0xffffffff;
      if (*(int *)puVar1 != 0) {
        iVar3 = *(int *)&(this->CookFilterlistTagsByClass).field_0x28;
        local_78 = 0;
        uStack_74 = 1;
        iStack_64 = 0;
        iStack_60 = 0;
        if (iVar3 != 0) {
          puVar14 = *(uint **)&(this->CookFilterlistTagsByClass).field_0x20;
          if (puVar14 == (uint *)0x0) {
            puVar14 = (uint *)puVar7;
          }
          uVar8 = *puVar14;
          iStack_60 = 0;
          local_78 = 0;
          while (uVar8 == 0) {
            lVar12 = (longlong)local_78;
            iStack_60 = iStack_60 + 0x20;
            local_78 = local_78 + 1;
            if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78)
            goto LAB_142ad55dc;
            uVar8 = puVar14[lVar12 + 1];
          }
          uStack_74 = -uVar8 & uVar8;
          uVar11 = (ulonglong)uStack_74 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iStack_64 = iStack_60 + -1 + (int)lVar12;
          if (iVar3 < iStack_64) {
LAB_142ad55dc:
            iStack_64 = iVar3;
          }
        }
        local_50._padding_._0_4_ = local_78;
        local_50._padding_._4_4_ = uStack_74;
        local_50.UnvisitedBitMask = 0xffffffff;
        local_50.CurrentBitIndex = iStack_64;
        local_50._28_4_ = uStack_5c;
        local_50.BaseBitIndex = iStack_60;
        local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar7;
        if (iStack_64 < iVar3) {
          do {
            iVar3 = local_50.CurrentBitIndex;
            puVar15 = (undefined8 *)
                      ((longlong)local_50.CurrentBitIndex * 0x68 + *(longlong *)&this_00->field_0x0)
            ;
            uVar5 = puVar15[1];
            uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
            uVar6 = *puVar15;
            uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
            uVar9 = uVar9 + (int)((ulonglong)uVar6 >> 0x20);
            uVar8 = ((uVar9 >> 2) + uVar8 + (int)((ulonglong)uVar5 >> 0x20) +
                     uVar9 * 0x40 + -0x61c88647 ^ uVar9) & *(int *)puVar1 - 1U;
            *(uint *)((longlong)puVar15 + 100) = uVar8;
            puVar7 = *(undefined1 **)&(this->CookFilterlistTagsByClass).field_0x40;
            puVar13 = puVar2;
            if (puVar7 != (undefined1 *)0x0) {
              puVar13 = puVar7;
            }
            uVar11 = (longlong)*(int *)puVar1 - 1U & (longlong)(int)uVar8;
            *(undefined4 *)(puVar15 + 0xc) = *(undefined4 *)(puVar13 + uVar11 * 4);
            *(int *)(puVar13 + uVar11 * 4) = iVar3;
            local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
          } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
        }
      }
    }
  }
  return this;
}

// ~FAssetRegistrySerializationOptions @ 142ada2f0

void __thiscall
FAssetRegistrySerializationOptions::~FAssetRegistrySerializationOptions
          (FAssetRegistrySerializationOptions *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  (this->AssetBundlesDenyList).HashSize = 0;
  FVar1 = (this->AssetBundlesDenyList).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AssetBundlesDenyList).Elements);
  (this->CookTagsAsPath).HashSize = 0;
  FVar1 = (this->CookTagsAsPath).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CookTagsAsPath).Elements);
  (this->CookTagsAsName).HashSize = 0;
  FVar1 = (this->CookTagsAsName).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CookTagsAsName).Elements);
  *(undefined4 *)&(this->CookFilterlistTagsByClass).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CookFilterlistTagsByClass).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CookFilterlistTagsByClass);
  return;
}

// operator= @ 142b7e000

FAssetRegistrySerializationOptions * __thiscall
FAssetRegistrySerializationOptions::operator=
          (FAssetRegistrySerializationOptions *this,FAssetRegistrySerializationOptions *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar3;
  
  this->bSerializeAssetRegistry = param_1->bSerializeAssetRegistry;
  this->bSerializeDependencies = param_1->bSerializeDependencies;
  this->bSerializeSearchableNameDependencies = param_1->bSerializeSearchableNameDependencies;
  this->bSerializeManageDependencies = param_1->bSerializeManageDependencies;
  this->bSerializePackageData = param_1->bSerializePackageData;
  this->bUseAssetRegistryTagsAllowListInsteadOfDenyList =
       param_1->bUseAssetRegistryTagsAllowListInsteadOfDenyList;
  this->bFilterAssetDataWithNoTags = param_1->bFilterAssetDataWithNoTags;
  this->bFilterDependenciesWithNoTags = param_1->bFilterDependenciesWithNoTags;
  this->bFilterSearchableNames = param_1->bFilterSearchableNames;
  this->bKeepDevelopmentAssetRegistryTags = param_1->bKeepDevelopmentAssetRegistryTags;
  if (&this->CookFilterlistTagsByClass != &param_1->CookFilterlistTagsByClass) {
    TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)&this->CookFilterlistTagsByClass,
               (TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)&param_1->CookFilterlistTagsByClass);
  }
  if (&this->CookTagsAsName != &param_1->CookTagsAsName) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
              (&this->CookTagsAsName,&param_1->CookTagsAsName);
  }
  if (&this->CookTagsAsPath != &param_1->CookTagsAsPath) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
              (&this->CookTagsAsPath,&param_1->CookTagsAsPath);
  }
  pTVar3 = &param_1->AssetBundlesDenyList;
  this_00 = &this->AssetBundlesDenyList;
  if (this_00 != pTVar3) {
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this_00->Elements,0,*(int *)&(this->AssetBundlesDenyList).Elements.field_0x8)
    ;
    if (*(void **)&this_00->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this_00->Elements);
    }
    _Src = &(param_1->AssetBundlesDenyList).Elements.field_0x10;
    *(undefined8 *)&this_00->Elements = *(undefined8 *)&pTVar3->Elements;
    _Dst = &(this->AssetBundlesDenyList).Elements.field_0x10;
    *(undefined8 *)&pTVar3->Elements = 0;
    *(undefined4 *)&(this->AssetBundlesDenyList).Elements.field_0x8 =
         *(undefined4 *)&(param_1->AssetBundlesDenyList).Elements.field_0x8;
    *(undefined4 *)&(this->AssetBundlesDenyList).Elements.field_0xc =
         *(undefined4 *)&(param_1->AssetBundlesDenyList).Elements.field_0xc;
    *(undefined8 *)&(param_1->AssetBundlesDenyList).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->AssetBundlesDenyList).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->AssetBundlesDenyList).Elements.field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->AssetBundlesDenyList).Elements.field_0x20 =
           *(undefined8 *)&(param_1->AssetBundlesDenyList).Elements.field_0x20;
      *(undefined8 *)&(param_1->AssetBundlesDenyList).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->AssetBundlesDenyList).Elements.field_0x28 =
           *(undefined4 *)&(param_1->AssetBundlesDenyList).Elements.field_0x28;
      *(undefined4 *)&(this->AssetBundlesDenyList).Elements.field_0x2c =
           *(undefined4 *)&(param_1->AssetBundlesDenyList).Elements.field_0x2c;
      *(undefined8 *)&(param_1->AssetBundlesDenyList).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->AssetBundlesDenyList).Elements.field_0x30 =
         *(undefined4 *)&(param_1->AssetBundlesDenyList).Elements.field_0x30;
    *(undefined4 *)&(this->AssetBundlesDenyList).Elements.field_0x34 =
         *(undefined4 *)&(param_1->AssetBundlesDenyList).Elements.field_0x34;
    *(undefined4 *)&(param_1->AssetBundlesDenyList).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->AssetBundlesDenyList).Elements.field_0x34 = 0;
    if ((param_1->AssetBundlesDenyList).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
      *(undefined4 *)(this->AssetBundlesDenyList).Hash.InlineData =
           *(undefined4 *)(param_1->AssetBundlesDenyList).Hash.InlineData;
    }
    FVar2 = (this->AssetBundlesDenyList).Hash.SecondaryData;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    (this->AssetBundlesDenyList).Hash.SecondaryData =
         (param_1->AssetBundlesDenyList).Hash.SecondaryData;
    (param_1->AssetBundlesDenyList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (this->AssetBundlesDenyList).HashSize = (param_1->AssetBundlesDenyList).HashSize;
    (param_1->AssetBundlesDenyList).HashSize = 0;
  }
  return this;
}

// operator= @ 142b7e1b0

FAssetRegistrySerializationOptions * __thiscall
FAssetRegistrySerializationOptions::operator=
          (FAssetRegistrySerializationOptions *this,FAssetRegistrySerializationOptions *param_1)

{
  this->bSerializeAssetRegistry = param_1->bSerializeAssetRegistry;
  this->bSerializeDependencies = param_1->bSerializeDependencies;
  this->bSerializeSearchableNameDependencies = param_1->bSerializeSearchableNameDependencies;
  this->bSerializeManageDependencies = param_1->bSerializeManageDependencies;
  this->bSerializePackageData = param_1->bSerializePackageData;
  this->bUseAssetRegistryTagsAllowListInsteadOfDenyList =
       param_1->bUseAssetRegistryTagsAllowListInsteadOfDenyList;
  this->bFilterAssetDataWithNoTags = param_1->bFilterAssetDataWithNoTags;
  this->bFilterDependenciesWithNoTags = param_1->bFilterDependenciesWithNoTags;
  this->bFilterSearchableNames = param_1->bFilterSearchableNames;
  this->bKeepDevelopmentAssetRegistryTags = param_1->bKeepDevelopmentAssetRegistryTags;
  if (&this->CookFilterlistTagsByClass != &param_1->CookFilterlistTagsByClass) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->CookFilterlistTagsByClass).field_0x38,
               (int *)&(this->CookFilterlistTagsByClass).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->CookFilterlistTagsByClass).field_0x38,
               *(int *)&(param_1->CookFilterlistTagsByClass).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->CookFilterlistTagsByClass,
                (TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->CookFilterlistTagsByClass);
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->CookTagsAsName,&param_1->CookTagsAsName);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->CookTagsAsPath,&param_1->CookTagsAsPath);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (&this->AssetBundlesDenyList,&param_1->AssetBundlesDenyList);
  return this;
}

