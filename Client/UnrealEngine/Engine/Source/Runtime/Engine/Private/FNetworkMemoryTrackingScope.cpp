// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FNetworkMemoryTrackingScope @ 1480893f0

FNetworkMemoryTrackingScope * __thiscall
UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::FNetworkMemoryTrackingScope
          (FNetworkMemoryTrackingScope *this,FString *param_1)

{
  ::FString::FString(&this->ScopeName,param_1);
  *(undefined8 *)&this->SubScopes = 0;
  *(undefined8 *)&(this->SubScopes).field_0x8 = 0;
  *(undefined8 *)&(this->SubScopes).field_0x20 = 0;
  *(undefined4 *)&(this->SubScopes).field_0x28 = 0;
  *(undefined4 *)&(this->SubScopes).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubScopes).field_0x34 = 0;
  *(undefined4 *)&(this->SubScopes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SubScopes).field_0x40 = 0;
  *(undefined4 *)&(this->SubScopes).field_0x48 = 0;
  *(undefined8 *)&this->Fields = 0;
  *(undefined8 *)&(this->Fields).field_0x8 = 0;
  *(undefined8 *)&(this->Fields).field_0x20 = 0;
  *(undefined4 *)&(this->Fields).field_0x28 = 0;
  *(undefined4 *)&(this->Fields).field_0x2c = 0x80;
  *(undefined4 *)&(this->Fields).field_0x34 = 0;
  *(undefined4 *)&(this->Fields).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Fields).field_0x40 = 0;
  *(undefined4 *)&(this->Fields).field_0x48 = 0;
  this->Count = 0;
  this->TotalBytes = 0;
  return this;
}

// ~FNetworkMemoryTrackingScope @ 14808e8f0

void __thiscall
UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::~FNetworkMemoryTrackingScope
          (FNetworkMemoryTrackingScope *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->Fields).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Fields).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Fields);
  *(undefined4 *)&(this->SubScopes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SubScopes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubScopes);
  pFVar2 = (this->ScopeName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// FindOrAddScope @ 1480a2230

FNetworkMemoryTrackingScope * __thiscall
UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::FindOrAddScope
          (FNetworkMemoryTrackingScope *this,FString *param_1)

{
  int iVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
  *pTVar5;
  FNetworkMemoryTrackingScope *pFVar6;
  FNetworkMemoryTrackingScope *pFVar7;
  int iVar8;
  wchar_t *pwVar9;
  TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
  local_18 [2];
  
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar7 = (FNetworkMemoryTrackingScope *)0x0;
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar9);
  pTVar5 = TMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>
           ::FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>
                       *)&this->SubScopes,uVar4,param_1);
  if (pTVar5->Ptr != (FNetworkMemoryTrackingScope *)0x0) {
    return pTVar5->Ptr;
  }
  pFVar6 = ::operator_new(0xc0);
  if (pFVar6 != (FNetworkMemoryTrackingScope *)0x0) {
    pFVar7 = FNetworkMemoryTrackingScope(pFVar6,param_1);
  }
  if (pTVar5 == local_18) {
    if (pFVar7 == (FNetworkMemoryTrackingScope *)0x0) goto LAB_1480a2311;
    *(undefined4 *)&(pFVar7->Fields).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar7->Fields).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar7->Fields);
    *(undefined4 *)&(pFVar7->SubScopes).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar7->SubScopes).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar7->SubScopes);
    pFVar3 = (pFVar7->ScopeName).Data.AllocatorInstance.Data;
    pFVar6 = pFVar7;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  else {
    pFVar6 = pTVar5->Ptr;
    pTVar5->Ptr = pFVar7;
    if (pFVar6 == (FNetworkMemoryTrackingScope *)0x0) {
      return pFVar7;
    }
    *(undefined4 *)&(pFVar6->Fields).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar6->Fields).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar6->Fields);
    *(undefined4 *)&(pFVar6->SubScopes).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar6->SubScopes).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar6->SubScopes);
    pFVar3 = (pFVar6->ScopeName).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  ::operator_delete(pFVar6,0xc0);
LAB_1480a2311:
  return pTVar5->Ptr;
}

// GenerateRows @ 1480a2b40

void __thiscall
UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows
          (FNetworkMemoryTrackingScope *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  TMap<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint *puVar17;
  FScriptContainerElement *local_res8;
  undefined1 local_res10 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res18;
  undefined1 local_res20 [8];
  ForAnyElementType local_218;
  undefined8 local_210;
  ForAnyElementType local_208;
  int local_200;
  int local_1fc;
  ForAnyElementType local_1f8;
  int local_1f0;
  int local_1ec;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString *local_1b8;
  ulong64 uStack_1b0;
  FString *local_1a8;
  ulonglong uStack_1a0;
  longlong local_198;
  longlong lStack_190;
  FString local_188;
  undefined4 local_178;
  int local_174;
  FKeyComparisonClass<TLess<FString>_> local_170;
  FString local_168;
  FString local_158;
  TMap<FString,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>_>
  *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  longlong *local_118;
  undefined1 auStack_110 [16];
  uint uStack_100;
  uint uStack_fc;
  longlong local_f8;
  TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
  *pTStack_f0;
  TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
  *local_e8;
  undefined2 local_e0;
  TMap<FString,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>_>
  *local_d8;
  uint uStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  FString local_a8;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
  *pTStack_70;
  undefined4 local_4c;
  
  pFVar11 = (FScriptContainerElement *)0x0;
  uVar15 = 0;
  local_res8 = (FScriptContainerElement *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_res18 = param_2;
  if ((param_1->Data).ArrayNum < 2) {
    local_200 = (this->ScopeName).Data.ArrayNum;
    lVar9 = (longlong)local_200;
    pFVar13 = (this->ScopeName).Data.AllocatorInstance.Data;
    local_208.Data = (FScriptContainerElement *)0x0;
    if (local_200 == 0) {
      local_1fc = 0;
      bVar3 = true;
      bVar2 = false;
      bVar5 = false;
      FVar10.Data = pFVar11;
      iVar6 = local_200;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_200,0,&local_208,local_200,&local_1fc);
      memcpy(local_208.Data,pFVar13,lVar9 * 2);
      bVar3 = true;
      bVar2 = false;
      bVar5 = false;
      FVar10.Data = local_208.Data;
      iVar6 = local_200;
    }
  }
  else {
    ::FString::ConcatFC(&local_a8,param_1,L"::");
    ::FString::ConcatFF(&local_188,&local_a8,&this->ScopeName);
    bVar3 = false;
    bVar2 = true;
    bVar5 = true;
    FVar10.Data = local_188.Data.AllocatorInstance.Data;
    iVar6 = local_188.Data.ArrayNum;
  }
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Data.ArrayNum = iVar6;
  if (iVar6 == 0) {
    local_1e8.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar6,0,(ForAnyElementType *)&local_1e8,iVar6,&local_1e8.Data.ArrayMax);
    memcpy(local_1e8.Data.AllocatorInstance.Data,FVar10.Data,(longlong)iVar6 * 2);
  }
  if ((bVar5) && (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_208.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_208.Data);
  }
  local_170.Predicate.Predicate = (TDereferenceWrapper<FString,TLess<FString>_>)&local_res8;
  this_00 = &this->SubScopes;
  TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>::FKeyComparisonClass<TLess<FString>_>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
              *)this_00,&local_170);
  TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
              *)this_00);
  local_e0 = 0;
  stack0xfffffffffffffef8 = local_98._16_16_;
  local_118 = (longlong *)local_98._0_8_;
  auStack_110._0_8_ = local_98._8_8_;
  local_f8 = local_78;
  pTStack_f0 = pTStack_70;
  uVar8 = local_98._24_8_ >> 0x20;
  local_e8 = (TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      GenerateRows(*(FNetworkMemoryTrackingScope **)
                    ((longlong)(int)uVar8 * 0x20 + 0x10 + *local_118),&local_1e8,param_2);
      uStack_100 = uStack_100 & ~auStack_110._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_110);
      uVar8 = (ulonglong)uStack_fc;
    } while ((int)uStack_fc < *(int *)(auStack_110._8_8_ + 0x18));
    if (((char)local_e0 != '\0') && (local_e0._1_1_ != '\0')) {
      uVar12 = *(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34;
      if (uVar12 < 4) {
        iVar6 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_178 = (undefined4)lVar9;
        iVar6 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((0 < (int)uVar12) && (local_e8->HashSize < iVar6)) || (iVar6 < local_e8->HashSize)) {
        local_e8->HashSize = iVar6;
        TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_e8);
      }
    }
  }
  uVar12 = (*(int *)&(this->Fields).field_0x8 - *(int *)&(this->Fields).field_0x34) + 2;
  local_218.Data = (FScriptContainerElement *)0x0;
  local_210 = 0;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  local_210._0_4_ = 0;
  if (0 < (int)uVar12) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar12,&local_218,0,(int *)((longlong)&local_210 + 4));
  }
  local_1b8 = &local_1e8;
  uStack_1b0 = this->TotalBytes;
  iVar6 = (int)local_210;
  if ((local_218.Data <= (FScriptContainerElement *)&local_1b8) &&
     ((FScriptContainerElement *)&local_1b8 < local_218.Data + (longlong)local_210._4_4_ * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar6 = (int)local_210;
  }
  if (iVar6 == local_210._4_4_) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_218,(int *)((longlong)&local_210 + 4));
  }
  uVar8 = (ulonglong)_tls_index;
  *(FString **)(local_218.Data + (longlong)iVar6 * 0x10) = local_1b8;
  *(ulong64 *)(local_218.Data + (longlong)iVar6 * 0x10 + 8) = uStack_1b0;
  local_210._0_4_ = iVar6 + 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x9d4c) <
       `public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows(FString_const&___ptr64,TArray<FString,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows(FString_const&___ptr64,TArray<FString,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows(FString_const&___ptr64,TArray<FString,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows(FString_const&___ptr64,TArray<FString,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                        ::__l2::CountName,L"Count");
    atexit(`UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows'::
           __l2::_dynamic_atexit_destructor_for__CountName__);
    _Init_thread_footer(&`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows(FString_const&___ptr64,TArray<FString,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uStack_1a0 = (ulonglong)this->Count;
  local_1a8 = &`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows(FString_const&___ptr64,TArray<FString,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
               ::__l2::CountName;
  if (((local_218.Data <= (FScriptContainerElement *)&local_1a8) &&
      ((FScriptContainerElement *)&local_1a8 < local_218.Data + (longlong)local_210._4_4_ * 0x10))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((int)local_210 == local_210._4_4_) {
    local_210._0_4_ =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_218,(int *)((longlong)&local_210 + 4));
  }
  iVar6 = (int)local_210 + 1;
  local_148 = &this->Fields;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Fields).field_0x10;
  uStack_cc = 1;
  *(FString **)(local_218.Data + (longlong)(int)local_210 * 0x10) = local_1a8;
  *(ulonglong *)(local_218.Data + (longlong)(int)local_210 * 0x10 + 8) = uStack_1a0;
  uVar12 = *(uint *)&(this->Fields).field_0x28;
  pFVar13 = pFVar11;
  local_b8 = 0;
  if (uVar12 != 0) {
    puVar17 = *(uint **)&(this->Fields).field_0x20;
    pFVar13 = (FScriptContainerElement *)(ulonglong)uVar12;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)TStack_140.Array;
    }
    uVar7 = *puVar17;
    pFVar16 = pFVar11;
    local_b8 = 0;
    uVar15 = 0;
    while (uVar7 == 0) {
      iVar14 = (int)pFVar11;
      local_b8 = (int)pFVar16 + 0x20;
      pFVar16 = (FScriptContainerElement *)(ulonglong)local_b8;
      uVar15 = iVar14 + 1;
      pFVar11 = (FScriptContainerElement *)(ulonglong)uVar15;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_1480a305d;
      uVar7 = puVar17[(longlong)iVar14 + 1];
    }
    uStack_cc = -uVar7 & uVar7;
    uVar8 = (ulonglong)uStack_cc * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_174 = (int)lVar9;
    uVar7 = (local_b8 - 1) + local_174;
    if ((int)uVar12 < (int)uVar7) {
      uVar7 = uVar12;
    }
    pFVar13 = (FScriptContainerElement *)(ulonglong)uVar7;
  }
LAB_1480a305d:
  uStack_c0 = 0xffffffff;
  uStack_bc = (uint)pFVar13;
  uStack_b4 = local_4c;
  TStack_140._padding_ = CONCAT44(uStack_cc,uVar15);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_4c;
  TStack_140.BaseBitIndex = local_b8;
  local_d8 = local_148;
  uStack_d0 = uVar15;
  local_c8 = (undefined1 *)TStack_140.Array;
  local_210._0_4_ = iVar6;
  TStack_140.CurrentBitIndex = uStack_bc;
  if ((int)uStack_bc < (int)uVar12) {
    do {
      local_198 = (longlong)(int)pFVar13 * 0x20 + *(longlong *)local_148;
      lStack_190 = *(longlong *)((longlong)(int)pFVar13 * 0x20 + 0x10 + *(longlong *)local_148);
      if (((local_218.Data <= (FScriptContainerElement *)&local_198) &&
          ((FScriptContainerElement *)&local_198 < local_218.Data + (longlong)local_210._4_4_ * 0x10
          )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((int)local_210 == local_210._4_4_) {
        local_210._0_4_ =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_218,(int *)((longlong)&local_210 + 4));
      }
      *(longlong *)(local_218.Data + (longlong)(int)local_210 * 0x10) = local_198;
      *(longlong *)(local_218.Data + (longlong)(int)local_210 * 0x10 + 8) = lStack_190;
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      local_210._0_4_ = (int)local_210 + 1;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      pFVar13 = (FScriptContainerElement *)(ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  FVar10.Data = local_218.Data;
  iVar6 = (int)local_210 + -2;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  AlgoImpl::
  IntroSortInternal<_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows_::__l2::FField,int,FIdentityFunctor,_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows_::__l2::<lambda_1>_>
            ((FField *)(FVar10.Data + 0x20),iVar6,local_res8._0_1_,(<lambda_1>)local_res8._0_1_);
  iVar6 = (int)local_210;
  bVar5 = true;
  pFVar11 = local_218.Data + (longlong)(int)local_210 * 0x10;
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Data.ArrayNum = 0;
  local_1c8.Data.ArrayMax = 0;
  FVar10.Data = local_218.Data;
  while( true ) {
    if ((int)local_210 != iVar6) {
      `TCheckedPointerIterator<`UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows'::__l2::FField_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    iVar14 = (int)local_210;
    if (FVar10.Data == pFVar11) break;
    if (bVar5) {
      bVar5 = false;
    }
    else {
      ::FString::AppendChars(&local_1c8,L",",1);
    }
    ::FString::PrintfImpl(&local_168,L"%llu");
    uVar15 = local_168.Data.ArrayNum - 1;
    if (local_168.Data.ArrayNum == 0) {
      uVar15 = 0;
    }
    ::FString::AppendChars(&local_1c8,(wchar_t *)local_168.Data.AllocatorInstance.Data,uVar15);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    FVar10.Data = FVar10.Data + 0x10;
  }
  bVar5 = true;
  local_res8 = (FScriptContainerElement *)L"";
  if (local_1c8.Data.ArrayNum != 0) {
    local_res8 = local_1c8.Data.AllocatorInstance.Data;
  }
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Data.ArrayNum = 0;
  local_1d8.Data.ArrayMax = 0;
  pFVar11 = local_218.Data + (longlong)(int)local_210 * 0x10;
  FVar10.Data = local_218.Data;
  while( true ) {
    if ((int)local_210 != iVar14) {
      `TCheckedPointerIterator<`UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows'::__l2::FField_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (FVar10.Data == pFVar11) break;
    if (bVar5) {
      bVar5 = false;
    }
    else {
      ::FString::AppendChars(&local_1d8,L",",1);
    }
    local_1f8.Data = (FScriptContainerElement *)0x0;
    local_1f0 = ((*(FString **)FVar10.Data)->Data).ArrayNum;
    lVar9 = (longlong)local_1f0;
    pFVar13 = ((*(FString **)FVar10.Data)->Data).AllocatorInstance.Data;
    if (local_1f0 == 0) {
      local_1ec = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1f0,0,&local_1f8,local_1f0,&local_1ec);
      memcpy(local_1f8.Data,pFVar13,lVar9 * 2);
    }
    iVar6 = local_1f0 + -1;
    if (local_1f0 == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(&local_1d8,(wchar_t *)local_1f8.Data,iVar6);
    if (local_1f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data);
    }
    FVar10.Data = FVar10.Data + 0x10;
  }
  ::FString::PrintfImpl(&local_158,L"%s\r\n%s");
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pTVar4 = local_res18;
  iVar6 = local_res18->ArrayNum;
  if (iVar6 == local_res18->ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_res18->AllocatorInstance,&local_res18->ArrayMax);
  }
  FVar10.Data = local_158.Data.AllocatorInstance.Data;
  pTVar4->ArrayNum = iVar6 + 1;
  pFVar11 = (pTVar4->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(FScriptContainerElement **)&pFVar11->field_0x0 = (FScriptContainerElement *)0x0;
  *(int *)&pFVar11[8].field_0x0 = local_158.Data.ArrayNum;
  if (local_158.Data.ArrayNum == 0) {
    *(int *)(pFVar11 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_158.Data.ArrayNum,0,(ForAnyElementType *)pFVar11,local_158.Data.ArrayNum,
               (int *)(pFVar11 + 0xc));
    memcpy(*(FScriptContainerElement **)&pFVar11->field_0x0,FVar10.Data,
           (longlong)local_158.Data.ArrayNum * 2);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_218.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  return;
}

