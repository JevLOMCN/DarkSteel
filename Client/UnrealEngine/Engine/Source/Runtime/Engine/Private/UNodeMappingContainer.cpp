// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147589f30

UClass * __cdecl UNodeMappingContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNodeMappingContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NodeMappingContainer",
               &Z_Registration_Info_UClass_UNodeMappingContainer.InnerSingleton,
               StaticRegisterNativesUNodeMappingContainer,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNodeMappingContainer>,
               InternalVTableHelperCtorCaller<UNodeMappingContainer>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNodeMappingContainer.InnerSingleton;
}

// UNodeMappingContainer @ 1475a7990

UNodeMappingContainer * __thiscall
UNodeMappingContainer::UNodeMappingContainer(UNodeMappingContainer *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  puVar1 = &(this->SourceAsset).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UNodeMappingContainer__6B_;
  *(undefined8 *)&this->SourceItems = 0;
  *(undefined8 *)&(this->SourceItems).field_0x8 = 0;
  *(undefined8 *)&(this->SourceItems).field_0x20 = 0;
  *(undefined4 *)&(this->SourceItems).field_0x28 = 0;
  *(undefined4 *)&(this->SourceItems).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceItems).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceItems).field_0x34 = 0;
  *(undefined8 *)&(this->SourceItems).field_0x40 = 0;
  *(undefined4 *)&(this->SourceItems).field_0x48 = 0;
  *(undefined8 *)&this->TargetItems = 0;
  *(undefined8 *)&(this->TargetItems).field_0x8 = 0;
  *(undefined8 *)&(this->TargetItems).field_0x20 = 0;
  *(undefined4 *)&(this->TargetItems).field_0x28 = 0;
  *(undefined4 *)&(this->TargetItems).field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetItems).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TargetItems).field_0x34 = 0;
  *(undefined8 *)&(this->TargetItems).field_0x40 = 0;
  *(undefined4 *)&(this->TargetItems).field_0x48 = 0;
  *(undefined8 *)&this->SourceToTarget = 0;
  *(undefined8 *)&(this->SourceToTarget).field_0x8 = 0;
  *(undefined8 *)&(this->SourceToTarget).field_0x20 = 0;
  *(undefined4 *)&(this->SourceToTarget).field_0x28 = 0;
  *(undefined4 *)&(this->SourceToTarget).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceToTarget).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceToTarget).field_0x34 = 0;
  *(undefined8 *)&(this->SourceToTarget).field_0x40 = 0;
  *(undefined4 *)&(this->SourceToTarget).field_0x48 = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->SourceAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SourceAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SourceAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SourceAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->TargetAsset).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TargetAsset).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TargetAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TargetAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TargetAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  return this;
}

// UNodeMappingContainer @ 1475a7ac0

UNodeMappingContainer * __thiscall
UNodeMappingContainer::UNodeMappingContainer
          (UNodeMappingContainer *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  puVar1 = &(this->SourceAsset).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UNodeMappingContainer__6B_;
  *(undefined8 *)&this->SourceItems = 0;
  *(undefined8 *)&(this->SourceItems).field_0x8 = 0;
  *(undefined8 *)&(this->SourceItems).field_0x20 = 0;
  *(undefined4 *)&(this->SourceItems).field_0x28 = 0;
  *(undefined4 *)&(this->SourceItems).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceItems).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceItems).field_0x34 = 0;
  *(undefined8 *)&(this->SourceItems).field_0x40 = 0;
  *(undefined4 *)&(this->SourceItems).field_0x48 = 0;
  *(undefined8 *)&this->TargetItems = 0;
  *(undefined8 *)&(this->TargetItems).field_0x8 = 0;
  *(undefined8 *)&(this->TargetItems).field_0x20 = 0;
  *(undefined4 *)&(this->TargetItems).field_0x28 = 0;
  *(undefined4 *)&(this->TargetItems).field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetItems).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TargetItems).field_0x34 = 0;
  *(undefined8 *)&(this->TargetItems).field_0x40 = 0;
  *(undefined4 *)&(this->TargetItems).field_0x48 = 0;
  *(undefined8 *)&this->SourceToTarget = 0;
  *(undefined8 *)&(this->SourceToTarget).field_0x8 = 0;
  *(undefined8 *)&(this->SourceToTarget).field_0x20 = 0;
  *(undefined4 *)&(this->SourceToTarget).field_0x28 = 0;
  *(undefined4 *)&(this->SourceToTarget).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceToTarget).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceToTarget).field_0x34 = 0;
  *(undefined8 *)&(this->SourceToTarget).field_0x40 = 0;
  *(undefined4 *)&(this->SourceToTarget).field_0x48 = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->SourceAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SourceAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SourceAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SourceAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->TargetAsset).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TargetAsset).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TargetAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TargetAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TargetAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  return this;
}

// ~UNodeMappingContainer @ 1475aab10

void __thiscall UNodeMappingContainer::~UNodeMappingContainer(UNodeMappingContainer *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UNodeMappingContainer__6B_;
  pvVar1 = *(void **)&(this->TargetAsset).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SourceAsset).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->SourceToTarget).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SourceToTarget).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SourceToTarget);
  *(undefined4 *)&(this->TargetItems).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TargetItems).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TargetItems);
  *(undefined4 *)&(this->SourceItems).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SourceItems).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SourceItems);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1475dbc60

UClass * __cdecl UNodeMappingContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNodeMappingContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NodeMappingContainer",
               &Z_Registration_Info_UClass_UNodeMappingContainer.InnerSingleton,
               StaticRegisterNativesUNodeMappingContainer,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNodeMappingContainer>,
               InternalVTableHelperCtorCaller<UNodeMappingContainer>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNodeMappingContainer.InnerSingleton;
}

// GetTargetToSourceMappingTable @ 1475de9b0

void __thiscall
UNodeMappingContainer::GetTargetToSourceMappingTable
          (UNodeMappingContainer *this,
          TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
          *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  FName *pFVar6;
  longlong lVar7;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *pTVar8;
  uint *puVar9;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)param_1);
  iStack_38 = 0;
  pTVar8 = &this->SourceToTarget;
  iVar2 = *(int *)&(this->SourceToTarget).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->SourceToTarget).field_0x10;
  uStack_34 = 1;
  local_20 = 0;
  iStack_24 = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)&(this->SourceToTarget).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)TStack_60.Array;
    }
    uVar4 = *puVar9;
    while (uVar4 == 0) {
      lVar7 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      iStack_24 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_1475dea58;
      uVar4 = puVar9[lVar7 + 1];
    }
    uStack_34 = -uVar4 & uVar4;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_24 = local_20 + -1 + (int)lVar7;
    if (iVar2 < iStack_24) {
      iStack_24 = iVar2;
    }
  }
LAB_1475dea58:
  uStack_28 = 0xffffffff;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  local_40 = pTVar8;
  local_30 = (undefined1 *)TStack_60.Array;
  TStack_60._padding_._0_4_ = iStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = iStack_24;
  if (iStack_24 < iVar2) {
    do {
      iVar2 = TStack_60.CurrentBitIndex;
      lVar5 = (longlong)TStack_60.CurrentBitIndex;
      lVar7 = *(longlong *)pTVar8;
      uVar3 = *(undefined8 *)(lVar7 + 8 + lVar5 * 0x18);
      uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
      pFVar6 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
               ::FindOrAddImpl<FName_const_&>
                         ((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                           *)param_1,uVar4 + (int)((ulonglong)uVar3 >> 0x20),
                          (FName *)(lVar7 + lVar5 * 0x18 + 8));
      *pFVar6 = *(FName *)(*(longlong *)pTVar8 + (longlong)iVar2 * 0x18);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return;
}

// StaticRegisterNativesUNodeMappingContainer @ 1475fedb0

void __cdecl UNodeMappingContainer::StaticRegisterNativesUNodeMappingContainer(void)

{
  return;
}

