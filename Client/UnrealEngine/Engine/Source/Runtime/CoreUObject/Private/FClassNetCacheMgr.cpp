// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// ClearClassNetCache @ 141fc6a40

void __thiscall FClassNetCacheMgr::ClearClassNetCache(FClassNetCacheMgr *this)

{
  TMap<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>_>
  *this_00;
  undefined1 *puVar1;
  void *pvVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  this_00 = &this->ClassFieldIndices;
  TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
              *)this_00);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar6 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      pvVar2 = *(void **)(*local_48 + 8 + (longlong)(int)uVar6 * 0x18);
      if (pvVar2 != (void *)0x0) {
        *(undefined4 *)((longlong)pvVar2 + 200) = 0;
        if (*(void **)((longlong)pvVar2 + 0xc0) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar2 + 0xc0));
        }
        TSparseArray<TSparseSetElement<TTuple<unsigned_int,FFieldNetCache_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FFieldNetCache_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FFieldNetCache_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)((longlong)pvVar2 + 0x80));
        *(undefined4 *)((longlong)pvVar2 + 0x78) = 0;
        if (*(void **)((longlong)pvVar2 + 0x70) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar2 + 0x70));
        }
        TSparseArray<TSparseSetElement<TTuple<void_*,FFieldNetCache_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<void_*,FFieldNetCache_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<void_*,FFieldNetCache_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)((longlong)pvVar2 + 0x30));
        if (*(void **)((longlong)pvVar2 + 0x20) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar2 + 0x20));
        }
        ::operator_delete(pvVar2,0xd0);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar6 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar7 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar7 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((0 < (int)uVar7) && (local_18->HashSize < iVar5)) || (iVar5 < local_18->HashSize)) {
        local_18->HashSize = iVar5;
        TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  bVar3 = 1 < *(int *)&(this->ClassFieldIndices).field_0x48;
  if (!bVar3) {
    TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->ClassFieldIndices).field_0xc;
  *(undefined4 *)&(this->ClassFieldIndices).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ClassFieldIndices).field_0x34 = 0;
  *(undefined4 *)&(this->ClassFieldIndices).field_0x30 = 0xffffffff;
  iVar5 = *(int *)&(this->ClassFieldIndices).field_0x2c;
  *(undefined4 *)&(this->ClassFieldIndices).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->ClassFieldIndices).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ClassFieldIndices).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ClassFieldIndices).field_0x48 = 1;
    TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// CountBytes @ 141fc9140

void __thiscall FClassNetCacheMgr::CountBytes(FClassNetCacheMgr *this,FArchive *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
                *)&this->ClassFieldIndices,param_1);
  iVar3 = *(int *)&(this->ClassFieldIndices).field_0x28;
  puVar1 = &(this->ClassFieldIndices).field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ClassFieldIndices).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141fc91ed;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_141fc91ed:
  uVar11 = *(uint *)&(this->ClassFieldIndices).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ClassFieldIndices).field_0x8 -
                       *(int *)&(this->ClassFieldIndices).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->ClassFieldIndices).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->ClassFieldIndices).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141fc92f0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_141fc92f0:
  while( true ) {
    if (*(int *)&(this->ClassFieldIndices).field_0x8 - *(int *)&(this->ClassFieldIndices).field_0x34
        != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar9 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar4 = *(longlong *)&(this->ClassFieldIndices).field_0x0;
    if (*(longlong *)(lVar4 + 8 + lVar9 * 0x18) != 0) {
      (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0xd0,0xd0);
      lVar9 = *(longlong *)(lVar4 + lVar9 * 0x18 + 8);
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)*(int *)(lVar9 + 0x28) * 0x18,
                 (longlong)*(int *)(lVar9 + 0x2c) * 0x18);
      TSet<TTuple<void_*,FFieldNetCache_*>,TDefaultMapHashableKeyFuncs<void_*,FFieldNetCache_*,0>,FDefaultSetAllocator>
      ::CountBytes((TSet<TTuple<void_*,FFieldNetCache_*>,TDefaultMapHashableKeyFuncs<void_*,FFieldNetCache_*,0>,FDefaultSetAllocator>
                    *)(lVar9 + 0x30),param_1);
      TSet<TTuple<unsigned_int,FFieldNetCache_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FFieldNetCache_*,0>,FDefaultSetAllocator>
      ::CountBytes((TSet<TTuple<unsigned_int,FFieldNetCache_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FFieldNetCache_*,0>,FDefaultSetAllocator>
                    *)(lVar9 + 0x80),param_1);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetClassNetCache @ 141fce110

/* WARNING: Enum "Type": Some values do not have unique names */

FClassNetCache * __thiscall
FClassNetCacheMgr::GetClassNetCache(FClassNetCacheMgr *this,UClass *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 *puVar4;
  FField *this_00;
  code *pcVar5;
  FClassNetCache **ppFVar6;
  FProperty *pFVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  void *pvVar12;
  FClassNetCache *pFVar13;
  FClassNetCache *pFVar14;
  UClass *pUVar15;
  FString *pFVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  byte bVar22;
  void *pvVar23;
  UObject *pUVar24;
  ulonglong uVar25;
  ForAnyElementType FVar26;
  uint uVar27;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  TPairInitializer<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_&&,FClassNetCache_*_&&> local_res18;
  ForAnyElementType local_188;
  uint local_180;
  uint local_17c;
  FProperty *local_178;
  FWeakObjectPtr local_170;
  ulonglong local_168;
  int local_160;
  uint local_15c;
  FScriptContainerElement local_158;
  FWeakObjectPtr local_150;
  FProperty *local_148;
  int local_140;
  undefined4 local_13c;
  FScriptContainerElement local_138;
  FString local_130;
  undefined1 local_120 [8];
  UClass *local_118;
  FWeakObjectPtr local_110;
  UClass *local_108;
  UClass *local_100;
  void *local_f8;
  FName local_f0;
  FName local_e8;
  undefined8 local_e0;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  FString local_c8;
  FWeakObjectPtr *local_b8;
  void **local_b0;
  FString local_a8;
  FString local_98;
  undefined8 *local_88;
  FScriptContainerElement **local_80;
  FScriptContainerElement *local_78;
  FScriptContainerElement **local_70;
  FString local_68;
  FString local_58;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pvVar23 = (void *)0x0;
  local_170.ObjectIndex = 0;
  local_170.ObjectSerialNumber = 0;
  local_118 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_170,(FObjectPtr)&local_118);
  local_110 = local_170;
  iVar9 = TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
                      *)&this->ClassFieldIndices,
                     local_170.ObjectSerialNumber ^ local_170.ObjectIndex,
                     (TWeakObjectPtr<UClass_const_,FWeakObjectPtr> *)&local_110);
  if (((iVar9 == -1) ||
      (lVar17 = *(longlong *)&this->ClassFieldIndices + (longlong)iVar9 * 0x18, lVar17 == 0)) ||
     (pFVar14 = *(FClassNetCache **)(lVar17 + 8), pFVar14 == (FClassNetCache *)0x0)) {
    UClass::SetUpRuntimeReplicationData(param_1);
    pvVar12 = ::operator_new(0xd0);
    if (pvVar12 != (void *)0x0) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      *(undefined8 *)((longlong)pvVar12 + 0x10) = 0;
      local_108 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)pvVar12 + 0x10),(FObjectPtr)&local_108)
      ;
      *(undefined8 *)((longlong)pvVar12 + 0x20) = 0;
      *(undefined8 *)((longlong)pvVar12 + 0x28) = 0;
      *(undefined8 *)((longlong)pvVar12 + 0x30) = 0;
      *(undefined8 *)((longlong)pvVar12 + 0x38) = 0;
      *(undefined8 *)((longlong)pvVar12 + 0x50) = 0;
      *(undefined4 *)((longlong)pvVar12 + 0x58) = 0;
      *(undefined4 *)((longlong)pvVar12 + 0x5c) = 0x80;
      *(undefined4 *)((longlong)pvVar12 + 0x60) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar12 + 100) = 0;
      *(undefined8 *)((longlong)pvVar12 + 0x70) = 0;
      *(undefined4 *)((longlong)pvVar12 + 0x78) = 0;
      *(undefined8 *)((longlong)pvVar12 + 0x80) = 0;
      *(undefined8 *)((longlong)pvVar12 + 0x88) = 0;
      *(undefined8 *)((longlong)pvVar12 + 0xa0) = 0;
      *(undefined4 *)((longlong)pvVar12 + 0xa8) = 0;
      *(undefined4 *)((longlong)pvVar12 + 0xac) = 0x80;
      *(undefined4 *)((longlong)pvVar12 + 0xb0) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar12 + 0xb4) = 0;
      *(undefined8 *)((longlong)pvVar12 + 0xc0) = 0;
      *(undefined4 *)((longlong)pvVar12 + 200) = 0;
      pvVar23 = pvVar12;
    }
    local_f8 = pvVar23;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_150.ObjectIndex = 0;
    local_150.ObjectSerialNumber = 0;
    local_100 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_150,(FObjectPtr)&local_100);
    local_b8 = &local_150;
    local_b0 = &local_f8;
    TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_&&,FClassNetCache_*_&&>_>
              ((TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
                *)&this->ClassFieldIndices,&local_res18,(bool *)&local_b8);
    pFVar14 = *(FClassNetCache **)
               (*(longlong *)&this->ClassFieldIndices + 8 + (longlong)(int)local_res18.Key * 0x18);
    pFVar14->Super = (FClassNetCache *)0x0;
    pFVar14->FieldsBase = 0;
    pFVar14->ClassChecksum = 0;
    if ((UClass *)param_1->_padding_ != (UClass *)0x0) {
      pFVar13 = GetClassNetCache(this,(UClass *)param_1->_padding_);
      pFVar14->Super = pFVar13;
      pFVar14->FieldsBase = (pFVar13->Fields).ArrayNum + pFVar13->FieldsBase;
      pFVar14->ClassChecksum = pFVar13->ClassChecksum;
    }
    uVar27 = (param_1->NetFields).ArrayNum;
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
    }
    piVar1 = &(pFVar14->Fields).ArrayMax;
    (pFVar14->Fields).ArrayNum = 0;
    if (*piVar1 != uVar27) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar27,&(pFVar14->Fields).AllocatorInstance,0,piVar1);
    }
    uVar27 = (param_1->ClassReps).ArrayNum - param_1->FirstOwnedClassRep;
    local_188.Data = (FScriptContainerElement *)0x0;
    local_17c = 0;
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
    }
    local_180 = 0;
    if (uVar27 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar27,&local_188,0,(int *)&local_17c);
    }
    uVar27 = param_1->FirstOwnedClassRep;
    if ((int)uVar27 < (param_1->ClassReps).ArrayNum) {
      do {
        uVar10 = 0;
        if ((int)uVar27 < (param_1->ClassReps).ArrayNum) {
          uVar10 = ~uVar27 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FClassNetCache *)(*pcVar5)();
          return pFVar14;
        }
        local_178 = *(FProperty **)
                     ((param_1->ClassReps).AllocatorInstance.Data + (longlong)(int)uVar27 * 0x10);
        if ((local_178 == (FProperty *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Property",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNet.cpp"
                               ,0xc5,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FClassNetCache *)(*pcVar5)();
          return pFVar14;
        }
        if (((local_188.Data <= (FScriptContainerElement *)&local_178) &&
            ((FScriptContainerElement *)&local_178 < local_188.Data + (longlong)(int)local_17c * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FClassNetCache *)(*pcVar5)();
          return pFVar14;
        }
        if (local_180 == local_17c) {
          local_180 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_188,(int *)&local_17c);
        }
        lVar17 = (longlong)(int)local_180;
        local_180 = local_180 + 1;
        *(FProperty **)(local_188.Data + lVar17 * 8) = local_178;
        uVar10 = GetPropertyChecksum(this,local_178,0,false);
        pFVar7 = local_178;
        bVar22 = (byte)local_178;
        iVar9 = pFVar14->FieldsBase + (pFVar14->Fields).ArrayNum;
        local_res18.Value = (FClassNetCache **)CONCAT44(local_res18.Value._4_4_,uVar10);
        if ((((ulonglong)local_178 & 1) != 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsUObject()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x180,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FClassNetCache *)(*pcVar5)();
          return pFVar14;
        }
        local_148 = pFVar7;
        pUVar24 = (UObject *)((ulonglong)pFVar7 & 0xfffffffffffffffe);
        if (((bVar22 & pUVar24 != (UObject *)0x0) != 0) &&
           (UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable(pUVar24);
        }
        piVar1 = &(pFVar14->Fields).ArrayMax;
        pFVar3 = (pFVar14->Fields).AllocatorInstance.Data;
        local_13c = local_res18.Value._0_4_;
        local_138 = (FScriptContainerElement)0x0;
        local_140 = iVar9;
        if (((pFVar3 <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 < pFVar3 + (longlong)*piVar1 * 0x18)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FClassNetCache *)(*pcVar5)();
          return pFVar14;
        }
        iVar9 = (pFVar14->Fields).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&(pFVar14->Fields).AllocatorInstance,piVar1);
        }
        (pFVar14->Fields).ArrayNum = iVar9 + 1;
        pFVar3 = (pFVar14->Fields).AllocatorInstance.Data + (longlong)iVar9 * 0x18;
        *(FProperty **)pFVar3 = local_148;
        if ((((byte)local_148 &
             (UObject *)((ulonglong)local_148 & 0xfffffffffffffffe) != (UObject *)0x0) != 0) &&
           (UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)((ulonglong)local_148 & 0xfffffffffffffffe));
        }
        *(int *)(pFVar3 + 8) = local_140;
        *(undefined4 *)(pFVar3 + 0xc) = local_13c;
        pFVar3[0x10] = local_138;
        uVar27 = uVar27 + local_178->ArrayDim;
      } while ((int)uVar27 < (param_1->ClassReps).ArrayNum);
    }
    uVar27 = 0;
    if (0 < (param_1->NetFields).ArrayNum) {
      local_res18.Value = (FClassNetCache **)0x0;
      do {
        ppFVar6 = local_res18.Value;
        uVar10 = 0;
        if ((int)uVar27 < (param_1->NetFields).ArrayNum) {
          uVar10 = ~uVar27 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FClassNetCache *)(*pcVar5)();
          return pFVar14;
        }
        uVar20 = *(ulonglong *)
                  ((longlong)ppFVar6 + (longlong)(param_1->NetFields).AllocatorInstance.Data);
        if (uVar20 == 0) {
LAB_141fce7fb:
          if (2 < (byte)LogCoreNet._0_1_) {
            local_e8 = *(FName *)(uVar20 + 0x18);
            ::FName::ToString(&local_e8,&local_c8);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCoreNet);
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
          }
          uVar10 = 0;
        }
        else {
          pUVar15 = Z_Construct_UClass_UFunction_NoRegister();
          iVar9 = (int)pUVar15->_padding_;
          if ((*(int *)(*(longlong *)(uVar20 + 0x10) + 0x38) < iVar9) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(uVar20 + 0x10) + 0x30) + (longlong)iVar9 * 8) !=
              &pUVar15->_padding_)) goto LAB_141fce7fb;
          local_f0 = *(FName *)(uVar20 + 0x18);
          ::FName::ToString(&local_f0,&local_a8);
          pFVar16 = ::FString::ToLower(&local_a8,&local_68);
          if ((pFVar16->Data).ArrayNum == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
          }
          uVar10 = FCrc::StrCrc32<wchar_t>(pwVar18,0);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_98,L"%u");
          FVar26.Data = local_98.Data.AllocatorInstance.Data;
          FVar19.Data = (FScriptContainerElement *)L"";
          if (local_98.Data.ArrayNum != 0) {
            FVar19.Data = local_98.Data.AllocatorInstance.Data;
          }
          uVar10 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar19.Data,uVar10);
          if (FVar26.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar26.Data);
          }
        }
        uVar25 = uVar20 | 1;
        iVar9 = pFVar14->FieldsBase + (pFVar14->Fields).ArrayNum;
        pUVar24 = (UObject *)(uVar20 & 0xfffffffffffffffe);
        if ((pUVar24 == (UObject *)0x0) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
          local_168 = uVar25;
          if (pUVar24 != (UObject *)0x0) goto LAB_141fce88c;
        }
        else {
          UE::GC::MarkAsReachable(pUVar24);
LAB_141fce88c:
          local_168 = uVar25;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar24);
          }
        }
        pFVar3 = (pFVar14->Fields).AllocatorInstance.Data;
        piVar1 = &(pFVar14->Fields).ArrayMax;
        local_158 = (FScriptContainerElement)0x0;
        local_160 = iVar9;
        local_15c = uVar10;
        if (((pFVar3 <= (FScriptContainerElement *)&local_168) &&
            ((FScriptContainerElement *)&local_168 < pFVar3 + (longlong)*piVar1 * 0x18)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FClassNetCache *)(*pcVar5)();
          return pFVar14;
        }
        iVar9 = (pFVar14->Fields).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&(pFVar14->Fields).AllocatorInstance,piVar1);
        }
        (pFVar14->Fields).ArrayNum = iVar9 + 1;
        pFVar3 = (pFVar14->Fields).AllocatorInstance.Data + (longlong)iVar9 * 0x18;
        *(ulonglong *)pFVar3 = local_168;
        if ((((byte)local_168 & (UObject *)(local_168 & 0xfffffffffffffffe) != (UObject *)0x0) != 0)
           && (UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)(local_168 & 0xfffffffffffffffe));
        }
        uVar27 = uVar27 + 1;
        *(int *)(pFVar3 + 8) = local_160;
        *(uint *)(pFVar3 + 0xc) = local_15c;
        pFVar3[0x10] = local_158;
        local_res18.Value = local_res18.Value + 1;
      } while ((int)uVar27 < (param_1->NetFields).ArrayNum);
    }
    iVar9 = (pFVar14->Fields).ArrayNum;
    if ((pFVar14->Fields).ArrayMax != iVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar9,&(pFVar14->Fields).AllocatorInstance,iVar9,&(pFVar14->Fields).ArrayMax
                );
    }
    for (iVar9 = 0; (-1 < iVar9 && (iVar9 < (pFVar14->Fields).ArrayNum)); iVar9 = iVar9 + 1) {
      lVar17 = (longlong)iVar9 * 0x18;
      local_d8 = (pFVar14->Fields).AllocatorInstance.Data + lVar17;
      if (((pFVar14->Fields).ArrayNum <= iVar9) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FClassNetCache *)(*pcVar5)();
        return pFVar14;
      }
      local_e0 = *(undefined8 *)((pFVar14->Fields).AllocatorInstance.Data + lVar17);
      local_88 = &local_e0;
      local_80 = &local_d8;
      TSet<TTuple<void_*,FFieldNetCache_*>,TDefaultMapHashableKeyFuncs<void_*,FFieldNetCache_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<void_*_&&,FFieldNetCache_*_&&>_>
                ((TSet<TTuple<void_*,FFieldNetCache_*>,TDefaultMapHashableKeyFuncs<void_*,FFieldNetCache_*,0>,FDefaultSetAllocator>
                  *)&pFVar14->FieldMap,(TPairInitializer<void_*_&&,FFieldNetCache_*_&&> *)local_120,
                 (bool *)&local_88);
      if (((pFVar14->Fields).ArrayNum <= iVar9) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FClassNetCache *)(*pcVar5)();
        return pFVar14;
      }
      uVar27 = *(uint *)((pFVar14->Fields).AllocatorInstance.Data + lVar17 + 0xc);
      if (*(int *)&(pFVar14->FieldChecksumMap).field_0x8 !=
          *(int *)&(pFVar14->FieldChecksumMap).field_0x34) {
        puVar4 = *(undefined1 **)&(pFVar14->FieldChecksumMap).field_0x40;
        puVar21 = &(pFVar14->FieldChecksumMap).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar21 = puVar4;
        }
        iVar11 = *(int *)(puVar21 +
                         (ulonglong)(*(int *)&(pFVar14->FieldChecksumMap).field_0x48 - 1U & uVar27)
                         * 4);
        if (iVar11 != -1) {
          do {
            if (*(uint *)(*(longlong *)&pFVar14->FieldChecksumMap + (longlong)iVar11 * 0x18) ==
                uVar27) {
              if (1 < (byte)LogCoreNet._0_1_) {
                if (((pFVar14->Fields).ArrayNum <= iVar9) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  pFVar14 = (FClassNetCache *)(*pcVar5)();
                  return pFVar14;
                }
                if (((pFVar14->Fields).ArrayNum <= iVar9) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  pFVar14 = (FClassNetCache *)(*pcVar5)();
                  return pFVar14;
                }
                this_00 = *(FField **)
                           ((pFVar14->Fields).AllocatorInstance.Data + (longlong)iVar9 * 0x18);
                if (((ulonglong)this_00 & 1) == 0) {
                  ::FName::ToString(&this_00->ClassPrivate->Name,&local_130);
                  ::FString::AppendChars(&local_130,L" ",1);
                  pFVar16 = FField::GetPathName(this_00,&local_58,(UObject *)0x0);
                  iVar2 = (pFVar16->Data).ArrayNum;
                  iVar11 = iVar2 + -1;
                  if (iVar2 == 0) {
                    iVar11 = 0;
                  }
                  ::FString::AppendChars
                            (&local_130,(wchar_t *)(pFVar16->Data).AllocatorInstance.Data,iVar11);
                  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_58.Data.AllocatorInstance.Data);
                  }
                }
                else {
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)((ulonglong)this_00 & 0xfffffffffffffffe),
                             &local_130,(UObject *)0x0,None);
                }
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCoreNet);
                if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_130.Data.AllocatorInstance.Data);
                }
              }
              break;
            }
            iVar11 = *(int *)(*(longlong *)&pFVar14->FieldChecksumMap + 0x10 +
                             (longlong)iVar11 * 0x18);
          } while (iVar11 != -1);
        }
      }
      if (((pFVar14->Fields).ArrayNum <= iVar9) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FClassNetCache *)(*pcVar5)();
        return pFVar14;
      }
      local_d0 = (pFVar14->Fields).AllocatorInstance.Data + (longlong)iVar9 * 0x18;
      if (((pFVar14->Fields).ArrayNum <= iVar9) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FClassNetCache *)(*pcVar5)();
        return pFVar14;
      }
      local_78 = (pFVar14->Fields).AllocatorInstance.Data + (longlong)iVar9 * 0x18 + 0xc;
      local_70 = &local_d0;
      TSet<TTuple<unsigned_int,FFieldNetCache_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FFieldNetCache_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,FFieldNetCache_*_&&>_>
                ((TSet<TTuple<unsigned_int,FFieldNetCache_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FFieldNetCache_*,0>,FDefaultSetAllocator>
                  *)&pFVar14->FieldChecksumMap,
                 (TPairInitializer<unsigned_int_const_&,FFieldNetCache_*_&&> *)(local_120 + 4),
                 (bool *)&local_78);
    }
    if ((param_1->ClassFlags >> 7 & 1) == 0) {
      local_res8 = SUB81(this,0);
      AlgoImpl::
      IntroSortInternal<FProperty_*,int,FIdentityFunctor,_FClassNetCacheMgr::SortProperties_::__l2::FCompareUFieldOffsets>
                ((FProperty **)local_188.Data,local_180,local_res8,(FCompareUFieldOffsets)local_res8
                );
    }
    uVar27 = local_180;
    uVar20 = (ulonglong)(int)local_180;
    pFVar3 = local_188.Data + uVar20 * 8;
    FVar26.Data = local_188.Data;
    while( true ) {
      if ((uint)uVar20 != uVar27) {
        `TCheckedPointerIterator<FProperty_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar26.Data == pFVar3) break;
      uVar10 = GetPropertyChecksum(this,*(FProperty **)FVar26.Data,pFVar14->ClassChecksum,true);
      pFVar14->ClassChecksum = uVar10;
      FVar26.Data = FVar26.Data + 8;
      uVar20 = (ulonglong)local_180;
    }
    if (local_188.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data);
    }
  }
  return pFVar14;
}

// GetFieldChecksum @ 141fcf260

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
FClassNetCacheMgr::GetFieldChecksum(FClassNetCacheMgr *this,UField *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if (param_1 != (UField *)0x0) {
    pUVar3 = Z_Construct_UClass_UFunction_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_28);
      pFVar4 = ::FString::ToLower(&local_28,&local_18);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      uVar2 = FCrc::StrCrc32<wchar_t>(pwVar5,param_2);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_28,L"%u");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar6.Data = local_28.Data.AllocatorInstance.Data;
      }
      uVar2 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar6.Data,uVar2);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return uVar2;
    }
  }
  if (2 < (byte)LogCoreNet._0_1_) {
    local_res10 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCoreNet);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return param_2;
}

// GetFunctionChecksum @ 141fcf760

uint __thiscall
FClassNetCacheMgr::GetFunctionChecksum(FClassNetCacheMgr *this,UFunction *param_1,uint param_2)

{
  uint uVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res10,&local_28);
  pFVar2 = ::FString::ToLower(&local_28,&local_18);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  uVar1 = FCrc::StrCrc32<wchar_t>(pwVar3,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"%u");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
  }
  uVar1 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar4.Data,uVar1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return uVar1;
}

// GetPropertyChecksum @ 141fd2a30

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
FClassNetCacheMgr::GetPropertyChecksum
          (FClassNetCacheMgr *this,FProperty *param_1,uint param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FProperty *pFVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  ulonglong uVar11;
  FCompareUFieldOffsets FVar12;
  ForAnyElementType FVar13;
  FName local_res10;
  undefined1 local_res18 [8];
  FCompareUFieldOffsets local_res20;
  ForAnyElementType local_158;
  undefined8 local_150;
  FProperty *local_148;
  TFieldIterator<FProperty> local_140;
  FName local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  void *local_80 [2];
  FString local_70;
  FString local_60 [2];
  
  FVar12 = (FCompareUFieldOffsets)param_3;
  local_res20 = (FCompareUFieldOffsets)param_3;
  while( true ) {
    while( true ) {
      if ((this->bDebugChecksum != false) && (2 < (byte)LogCoreNet._0_1_)) {
        ::FName::ToString((FName *)param_1->_padding_,&local_100);
        ::FString::ToLower(&local_100,&local_b0);
        bVar4 = IsThisNotNull(param_1,"FField::GetName");
        if (bVar4) {
          ::FName::ToString((FName *)&param_1->_padding_,&local_120);
        }
        else {
          ::FString::FString(&local_120,L"None");
        }
        ::FString::ToLower(&local_120,&local_c0);
        TCString<wchar_t>::Spc(this->DebugChecksumIndent * 2);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCoreNet);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
      }
      bVar4 = IsThisNotNull(param_1,"FField::GetName");
      if (bVar4) {
        ::FName::ToString((FName *)&param_1->_padding_,&local_110);
      }
      else {
        ::FString::FString(&local_110,L"None");
      }
      pFVar7 = ::FString::ToLower(&local_110,&local_a0);
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      uVar5 = FCrc::StrCrc32<wchar_t>(pwVar9,param_2);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      pFVar7 = (FString *)(**(code **)(param_1->_padding_ + 0x68))(param_1,local_80,0,0);
      pFVar7 = ::FString::ToLower(pFVar7,&local_90);
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      uVar5 = FCrc::StrCrc32<wchar_t>(pwVar9,uVar5);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (local_80[0] != (void *)0x0) {
        FMemory::Free(local_80[0]);
      }
      ::FString::PrintfImpl(&local_f0,L"%u");
      FVar13.Data = local_f0.Data.AllocatorInstance.Data;
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_f0.Data.ArrayNum != 0) {
        FVar8.Data = local_f0.Data.AllocatorInstance.Data;
      }
      param_2 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar8.Data,uVar5);
      if (FVar13.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar13.Data);
      }
      if (local_res20 == (FCompareUFieldOffsets)0x0) {
        return param_2;
      }
      uVar11 = *(ulonglong *)(param_1->_padding_ + 0x18);
      if (((uVar11 >> 0x15 & 1) == 0) || (param_1 == (FProperty *)0x0)) break;
      param_1 = (FProperty *)param_1[1]._padding_;
    }
    if (((uVar11 >> 0x14 & 1) != 0) && (param_1 != (FProperty *)0x0)) {
      if ((this->bDebugChecksum != false) && (2 < (byte)LogCoreNet._0_1_)) {
        local_res10 = *(FName *)(param_1[1]._padding_ + 0x18);
        ::FName::ToString(&local_res10,&local_e0);
        ::FString::ToLower(&local_e0,&local_70);
        TCString<wchar_t>::Spc(this->DebugChecksumIndent * 2);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCoreNet);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
      }
      local_128 = *(FName *)(param_1[1]._padding_ + 0x18);
      ::FName::ToString(&local_128,&local_d0);
      pFVar7 = ::FString::ToLower(&local_d0,local_60);
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      param_2 = FCrc::StrCrc32<wchar_t>(pwVar9,param_2);
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      this->DebugChecksumIndent = this->DebugChecksumIndent + 1;
      local_140.Struct = (UStruct *)param_1[1]._padding_;
      local_158.Data = (FScriptContainerElement *)0x0;
      local_150 = 0;
      if (local_140.Struct == (UStruct *)0x0) {
        local_140.Field = (FField *)0x0;
      }
      else {
        local_140.Field = (local_140.Struct)->ChildProperties;
      }
      local_140.bIncludeInterface = false;
      local_140.InterfaceIndex = -1;
      local_140.bIncludeSuper = true;
      local_140.bIncludeDeprecated = true;
      TFieldIterator<FProperty>::IterateToNext(&local_140);
      pFVar3 = (FProperty *)local_140.Field;
      while (local_140.Field = (FField *)pFVar3, pFVar3 != (FProperty *)0x0) {
        if (-1 < (int)pFVar3->PropertyFlags) {
          local_148 = pFVar3;
          if (((local_158.Data <= (FScriptContainerElement *)&local_148) &&
              (local_150._4_4_ = (int)(local_150 >> 0x20), lVar10 = (longlong)local_150._4_4_,
              (FScriptContainerElement *)&local_148 < local_158.Data + lVar10 * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return uVar5;
          }
          iVar6 = (int)local_150;
          if ((int)local_150 == local_150._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_158,(int *)((longlong)&local_150 + 4));
          }
          local_150 = CONCAT44(local_150._4_4_,iVar6 + 1);
          *(FProperty **)(local_158.Data + (longlong)iVar6 * 8) = local_148;
        }
        local_140.Field = (FField *)pFVar3->_padding_;
        TFieldIterator<FProperty>::IterateToNext(&local_140);
        FVar12 = local_res20;
        pFVar3 = (FProperty *)local_140.Field;
      }
      iVar6 = (int)local_150;
      AlgoImpl::
      IntroSortInternal<FProperty_*,int,FIdentityFunctor,_FClassNetCacheMgr::SortProperties_::__l2::FCompareUFieldOffsets>
                ((FProperty **)local_158.Data,iVar6,(FIdentityFunctor)param_3,FVar12);
      iVar6 = (int)local_150;
      uVar11 = (ulonglong)(int)local_150;
      pFVar1 = local_158.Data + uVar11 * 8;
      FVar13.Data = local_158.Data;
      while( true ) {
        if ((int)uVar11 != iVar6) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FProperty_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        FVar12 = local_res20;
        if (FVar13.Data == pFVar1) break;
        param_2 = GetPropertyChecksum(this,*(FProperty **)FVar13.Data,param_2,true);
        uVar11 = local_150 & 0xffffffff;
        FVar13.Data = FVar13.Data + 8;
      }
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data);
      }
      this->DebugChecksumIndent = this->DebugChecksumIndent + -1;
    }
    if ((*(byte *)(param_1->_padding_ + 0x1f) & 1) == 0) {
      return param_2;
    }
    if (param_1 == (FProperty *)0x0) break;
    param_1 = FOptionalPropertyLayout::GetValueProperty((FOptionalPropertyLayout *)(param_1 + 1));
  }
  return param_2;
}

// SortProperties @ 141fe92c0

void __thiscall
FClassNetCacheMgr::SortProperties
          (FClassNetCacheMgr *this,TArray<FProperty_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FIdentityFunctor local_res10;
  
  AlgoImpl::
  IntroSortInternal<FProperty_*,int,FIdentityFunctor,_FClassNetCacheMgr::SortProperties_::__l2::FCompareUFieldOffsets>
            ((FProperty **)(param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res10,
             (FCompareUFieldOffsets)local_res10);
  return;
}

// SortedStructFieldsChecksum @ 141fe92e0

uint __thiscall
FClassNetCacheMgr::SortedStructFieldsChecksum(FClassNetCacheMgr *this,UStruct *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FProperty *pFVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  FIdentityFunctor local_res18 [8];
  FProperty *local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  TFieldIterator<FProperty> local_30;
  
  local_30.Field = (FField *)0x0;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  if (param_1 != (UStruct *)0x0) {
    local_30.Field = param_1->ChildProperties;
  }
  local_30.InterfaceIndex = -1;
  local_30.bIncludeSuper = true;
  local_30.bIncludeDeprecated = true;
  local_30.bIncludeInterface = false;
  local_30.Struct = param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_30);
  pFVar3 = (FProperty *)local_30.Field;
  do {
    local_30.Field = (FField *)pFVar3;
    if (pFVar3 == (FProperty *)0x0) {
      iVar6 = (int)local_38;
      AlgoImpl::
      IntroSortInternal<FProperty_*,int,FIdentityFunctor,_FClassNetCacheMgr::SortProperties_::__l2::FCompareUFieldOffsets>
                ((FProperty **)local_40.Data,iVar6,local_res18[0],
                 (FCompareUFieldOffsets)local_res18[0]);
      iVar6 = (int)local_38;
      uVar8 = (ulonglong)(int)local_38;
      pFVar1 = local_40.Data + uVar8 * 8;
      FVar9.Data = local_40.Data;
      while( true ) {
        if ((int)uVar8 != iVar6) {
          `TCheckedPointerIterator<FProperty_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar9.Data == pFVar1) break;
        param_2 = GetPropertyChecksum(this,*(FProperty **)FVar9.Data,param_2,true);
        uVar8 = local_38 & 0xffffffff;
        FVar9.Data = FVar9.Data + 8;
      }
      if (local_40.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data);
      }
      return param_2;
    }
    if (-1 < (int)pFVar3->PropertyFlags) {
      local_48 = pFVar3;
      if (((local_40.Data <= (FScriptContainerElement *)&local_48) &&
          (local_38._4_4_ = (int)(local_38 >> 0x20), lVar7 = (longlong)local_38._4_4_,
          (FScriptContainerElement *)&local_48 < local_40.Data + lVar7 * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      iVar6 = (int)local_38;
      if ((int)local_38 == local_38._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_40,(int *)((longlong)&local_38 + 4));
      }
      local_38 = CONCAT44(local_38._4_4_,iVar6 + 1);
      *(FProperty **)(local_40.Data + (longlong)iVar6 * 8) = local_48;
    }
    local_30.Field = (FField *)pFVar3->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_30);
    pFVar3 = (FProperty *)local_30.Field;
  } while( true );
}

