// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// AddStructReferencedObjects @ 149cabbd0

void __thiscall
FPCGPerExecutionCache::AddStructReferencedObjects
          (FPCGPerExecutionCache *this,FReferenceCollector *param_1)

{
  atomic<bool> aVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  UScriptStruct *pUVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  if ((this == (FPCGPerExecutionCache *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar12 = 1;
  LOCK();
  aVar1 = (this->Lock).bFlag;
  (this->Lock).bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar1 != (atomic<bool>)0x0) {
    aVar1 = (this->Lock).bFlag;
    while (aVar1 != (atomic<bool>)0x0) {
      aVar1 = (this->Lock).bFlag;
    }
    LOCK();
    aVar1 = (this->Lock).bFlag;
    (this->Lock).bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  TSet<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>,FDefaultSetAllocator>
              *)&this->Entries);
  local_20 = 0;
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar8 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>,FDefaultSetAllocator>
              *)&this->Entries;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lVar10 = 10;
      plVar9 = (longlong *)(*local_58 + 8 + (longlong)(int)uVar8 * 0xb0);
      do {
        plVar3 = (longlong *)plVar9[1];
        if ((plVar3 != (longlong *)0x0) && (lVar4 = *plVar9, lVar4 != 0)) {
          pUVar7 = FPCGPerExecutionCacheData::StaticStruct();
          if (pUVar7 == (UScriptStruct *)0x0) {
LAB_149cabd31:
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                               ,0xd3,L"");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          else {
            iVar2 = (int)pUVar7->_padding_;
            if ((*(int *)(lVar4 + 0x38) < iVar2) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar7->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) goto LAB_149cabd31;
          }
          (**(code **)(*plVar3 + 8))(plVar3,param_1);
        }
        plVar9 = plVar9 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar8 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
      uVar11 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (3 < uVar11) {
        uVar8 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar10 & 0x1f);
      }
      if (((0 < (int)uVar11) && (local_28->HashSize < iVar12)) || (iVar12 < local_28->HashSize)) {
        local_28->HashSize = iVar12;
        TSet<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  if (this != (FPCGPerExecutionCache *)0x0) {
    (this->Lock).bFlag = (atomic<bool>)0x0;
  }
  return;
}

// Clear @ 149cb4750

void __thiscall FPCGPerExecutionCache::Clear(FPCGPerExecutionCache *this)

{
  undefined1 *puVar1;
  atomic<bool> aVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((this == (FPCGPerExecutionCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  aVar2 = (this->Lock).bFlag;
  (this->Lock).bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar2 != (atomic<bool>)0x0) {
    aVar2 = (this->Lock).bFlag;
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = (this->Lock).bFlag;
    }
    LOCK();
    aVar2 = (this->Lock).bFlag;
    (this->Lock).bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  bVar5 = 1 < *(int *)&(this->Entries).field_0x48;
  if (!bVar5) {
    TSet<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>,FDefaultSetAllocator>
                      *)&this->Entries);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->Entries,0,*(int *)&(this->Entries).field_0x8);
  puVar1 = &(this->Entries).field_0xc;
  *(undefined4 *)&(this->Entries).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,8,0,(ForAnyElementType *)&this->Entries,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Entries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Entries).field_0x34 = 0;
  iVar3 = *(int *)&(this->Entries).field_0x2c;
  *(undefined4 *)&(this->Entries).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->Entries).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Entries).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->Entries).field_0x48 = 1;
    TSet<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>,FDefaultSetAllocator>
              *)&this->Entries);
  }
  if (this != (FPCGPerExecutionCache *)0x0) {
    (this->Lock).bFlag = (atomic<bool>)0x0;
  }
  return;
}

// GetExecutionCacheBounds @ 149cc7840

/* WARNING: Type propagation algorithm not settling */

TOptional<UE::Math::TBox<double>_> * __thiscall
FPCGPerExecutionCache::GetExecutionCacheBounds
          (FPCGPerExecutionCache *this,TOptional<UE::Math::TBox<double>_> *__return_storage_ptr__,
          ulong64 param_1,EPCGPerExecutionCacheDataType param_2)

{
  atomic<bool> aVar1;
  int iVar2;
  uchar *puVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  bool bVar18;
  TOptional<UE::Math::TBox<double>_> *pTVar19;
  FPCGPerExecutionCacheEntry *pFVar20;
  UScriptStruct *pUVar21;
  
  if (param_1 == 0xffffffffffffffff) {
LAB_149cc7987:
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  if ((this == (FPCGPerExecutionCache *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar19 = (TOptional<UE::Math::TBox<double>_> *)(*pcVar5)();
    return pTVar19;
  }
  LOCK();
  aVar1 = (this->Lock).bFlag;
  (this->Lock).bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar1 != (atomic<bool>)0x0) {
    aVar1 = (this->Lock).bFlag;
    while (aVar1 != (atomic<bool>)0x0) {
      aVar1 = (this->Lock).bFlag;
    }
    LOCK();
    aVar1 = (this->Lock).bFlag;
    (this->Lock).bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  pFVar20 = TMapBase<unsigned___int64,FPCGPerExecutionCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>_>
            ::Find((TMapBase<unsigned___int64,FPCGPerExecutionCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>_>
                    *)&this->Entries,param_1);
  if (((pFVar20 == (FPCGPerExecutionCacheEntry *)0x0) ||
      (puVar3 = pFVar20->Data[param_2].InstancedStruct.StructMemory, puVar3 == (uchar *)0x0)) ||
     (pUVar4 = pFVar20->Data[param_2].InstancedStruct.ScriptStruct.field0_0x0.DebugPtr,
     pUVar4 == (UScriptStruct *)0x0)) {
    if (this != (FPCGPerExecutionCache *)0x0) {
      (this->Lock).bFlag = (atomic<bool>)0x0;
    }
    goto LAB_149cc7987;
  }
  pUVar21 = FPCGPerExecutionCacheBounds::StaticStruct();
  if (pUVar21 != (UScriptStruct *)0x0) {
    iVar2 = (int)pUVar21->_padding_;
    if (((int)pUVar4->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) != &pUVar21->_padding_
       )) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    if (bVar18) goto LAB_149cc794e;
  }
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                      ,0xd3,L"");
  if (bVar18) {
    pcVar5 = (code *)swi(3);
    pTVar19 = (TOptional<UE::Math::TBox<double>_> *)(*pcVar5)();
    return pTVar19;
  }
LAB_149cc794e:
  __return_storage_ptr__->bIsSet = true;
  dVar6 = *(double *)(puVar3 + 0x10);
  dVar7 = *(double *)(puVar3 + 0x18);
  dVar8 = *(double *)(puVar3 + 0x20);
  (__return_storage_ptr__->TypedValue).Min.field0_0x0._s_0.X = *(double *)(puVar3 + 8);
  (__return_storage_ptr__->TypedValue).Min.field0_0x0._s_0.Y = dVar6;
  dVar6 = *(double *)(puVar3 + 0x28);
  dVar9 = *(double *)(puVar3 + 0x30);
  (__return_storage_ptr__->TypedValue).Min.field0_0x0._s_0.Z = dVar7;
  (__return_storage_ptr__->TypedValue).Max.field0_0x0._s_0.X = dVar8;
  uVar10 = puVar3[0x38];
  uVar11 = puVar3[0x39];
  uVar12 = puVar3[0x3a];
  uVar13 = puVar3[0x3b];
  uVar14 = puVar3[0x3c];
  uVar15 = puVar3[0x3d];
  uVar16 = puVar3[0x3e];
  uVar17 = puVar3[0x3f];
  (__return_storage_ptr__->TypedValue).Max.field0_0x0._s_0.Y = dVar6;
  (__return_storage_ptr__->TypedValue).Max.field0_0x0._s_0.Z = dVar9;
  (__return_storage_ptr__->TypedValue).IsValid = uVar10;
  (__return_storage_ptr__->TypedValue).Pad[0] = uVar11;
  (__return_storage_ptr__->TypedValue).Pad[1] = uVar12;
  (__return_storage_ptr__->TypedValue).Pad[2] = uVar13;
  (__return_storage_ptr__->TypedValue).Pad[3] = uVar14;
  (__return_storage_ptr__->TypedValue).Pad[4] = uVar15;
  (__return_storage_ptr__->TypedValue).Pad[5] = uVar16;
  (__return_storage_ptr__->TypedValue).Pad[6] = uVar17;
  if (this == (FPCGPerExecutionCache *)0x0) {
    return __return_storage_ptr__;
  }
  (this->Lock).bFlag = (atomic<bool>)0x0;
  return __return_storage_ptr__;
}

// GetExecutionCachePCGData @ 149cc79b0

/* WARNING: Type propagation algorithm not settling */

UPCGData * __thiscall
FPCGPerExecutionCache::GetExecutionCachePCGData
          (FPCGPerExecutionCache *this,ulong64 param_1,EPCGPerExecutionCacheDataType param_2,
          bool *param_3)

{
  atomic<bool> aVar1;
  int iVar2;
  uchar *puVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  bool bVar6;
  UPCGData *pUVar7;
  FPCGPerExecutionCacheEntry *pFVar8;
  UScriptStruct *pUVar9;
  
  *param_3 = false;
  if (param_1 == 0xffffffffffffffff) {
    return (UPCGData *)0x0;
  }
  if ((this == (FPCGPerExecutionCache *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar7 = (UPCGData *)(*pcVar5)();
    return pUVar7;
  }
  LOCK();
  aVar1 = (this->Lock).bFlag;
  (this->Lock).bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar1 != (atomic<bool>)0x0) {
    aVar1 = (this->Lock).bFlag;
    while (aVar1 != (atomic<bool>)0x0) {
      aVar1 = (this->Lock).bFlag;
    }
    LOCK();
    aVar1 = (this->Lock).bFlag;
    (this->Lock).bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  pFVar8 = TMapBase<unsigned___int64,FPCGPerExecutionCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>_>
           ::Find((TMapBase<unsigned___int64,FPCGPerExecutionCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>_>
                   *)&this->Entries,param_1);
  if (((pFVar8 == (FPCGPerExecutionCacheEntry *)0x0) ||
      (pFVar8->Data[param_2].InstancedStruct.StructMemory == (uchar *)0x0)) ||
     (pFVar8->Data[param_2].InstancedStruct.ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0
     )) {
    if (this == (FPCGPerExecutionCache *)0x0) {
      return (UPCGData *)0x0;
    }
    (this->Lock).bFlag = (atomic<bool>)0x0;
    return (UPCGData *)0x0;
  }
  *param_3 = true;
  puVar3 = pFVar8->Data[param_2].InstancedStruct.StructMemory;
  pUVar4 = pFVar8->Data[param_2].InstancedStruct.ScriptStruct.field0_0x0.DebugPtr;
  if ((puVar3 == (uchar *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar7 = (UPCGData *)(*pcVar5)();
    return pUVar7;
  }
  if ((pUVar4 == (UScriptStruct *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar7 = (UPCGData *)(*pcVar5)();
    return pUVar7;
  }
  pUVar9 = FPCGPerExecutionCachePCGData::StaticStruct();
  if (pUVar9 != (UScriptStruct *)0x0) {
    iVar2 = (int)pUVar9->_padding_;
    if (((int)pUVar4->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) != &pUVar9->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_149cc7b1c;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    pUVar7 = (UPCGData *)(*pcVar5)();
    return pUVar7;
  }
LAB_149cc7b1c:
  pUVar7 = *(UPCGData **)(puVar3 + 8);
  if (this != (FPCGPerExecutionCache *)0x0) {
    (this->Lock).bFlag = (atomic<bool>)0x0;
    return pUVar7;
  }
  return pUVar7;
}

// SetExecutionCacheBounds @ 149cdc510

void __thiscall
FPCGPerExecutionCache::SetExecutionCacheBounds
          (FPCGPerExecutionCache *this,ulong64 param_1,EPCGPerExecutionCacheDataType param_2,
          TBox<double> *param_3)

{
  atomic<bool> aVar1;
  code *pcVar2;
  double dVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  bool bVar11;
  FPCGPerExecutionCacheEntry *pFVar12;
  UScriptStruct *pUVar13;
  uchar *puVar14;
  uint uVar15;
  uint uVar16;
  FInstancedStruct *this_00;
  ulong64 local_res10;
  
  if (param_1 != 0xffffffffffffffff) {
    local_res10 = param_1;
    if ((this == (FPCGPerExecutionCache *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LOCK();
    aVar1 = (this->Lock).bFlag;
    (this->Lock).bFlag = (atomic<bool>)0x1;
    UNLOCK();
    while (aVar1 != (atomic<bool>)0x0) {
      aVar1 = (this->Lock).bFlag;
      while (aVar1 != (atomic<bool>)0x0) {
        aVar1 = (this->Lock).bFlag;
      }
      LOCK();
      aVar1 = (this->Lock).bFlag;
      (this->Lock).bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    pFVar12 = TMapBase<unsigned___int64,FPCGPerExecutionCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>_>
              ::FindOrAddImpl<unsigned___int64_const_&>
                        ((TMapBase<unsigned___int64,FPCGPerExecutionCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>_>
                          *)&this->Entries,(int)(local_res10 >> 0x20) * 0x17 + (int)local_res10,
                         &local_res10);
    this_00 = &pFVar12->Data[param_2].InstancedStruct;
    if (((this_00->StructMemory != (uchar *)0x0) &&
        ((this_00->ScriptStruct).field0_0x0.DebugPtr != (UScriptStruct *)0x0)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!PerExecutionCacheEntry.Data[(uint8)InExecutionCacheDataType].IsValid()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphPerExecutionCache.cpp"
                            ,0x3e,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar13 = FPCGPerExecutionCacheBounds::StaticStruct();
    if (pUVar13 == (this_00->ScriptStruct).field0_0x0.DebugPtr) {
      puVar14 = this_00->StructMemory;
      (*(code *)**(undefined8 **)puVar14)(puVar14,0);
    }
    else {
      FInstancedStruct::Reset(this_00);
      uVar16 = (uint)*(short *)((longlong)&pUVar13->_padding_ + 4);
      uVar15 = (int)pUVar13->_padding_ + -1 + uVar16 & -uVar16;
      if ((int)uVar15 < 1) {
        uVar15 = 1;
      }
      puVar14 = FMemory::Malloc((longlong)(int)uVar15,uVar16);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      (this_00->ScriptStruct).field0_0x0.DebugPtr = pUVar13;
      this_00->StructMemory = puVar14;
    }
    if ((puVar14 == (uchar *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Memory",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                            ,0x74,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined ***)puVar14 = &___7FPCGPerExecutionCacheBounds__6B_;
    dVar3 = (param_3->Min).field0_0x0._s_0.Y;
    *(double *)(puVar14 + 8) = (param_3->Min).field0_0x0._s_0.X;
    *(double *)(puVar14 + 0x10) = dVar3;
    dVar3 = (param_3->Max).field0_0x0._s_0.X;
    *(double *)(puVar14 + 0x18) = (param_3->Min).field0_0x0._s_0.Z;
    *(double *)(puVar14 + 0x20) = dVar3;
    dVar3 = (param_3->Max).field0_0x0._s_0.Z;
    *(double *)(puVar14 + 0x28) = (param_3->Max).field0_0x0._s_0.Y;
    *(double *)(puVar14 + 0x30) = dVar3;
    uVar4 = param_3->Pad[0];
    uVar5 = param_3->Pad[1];
    uVar6 = param_3->Pad[2];
    uVar7 = param_3->Pad[3];
    uVar8 = param_3->Pad[4];
    uVar9 = param_3->Pad[5];
    uVar10 = param_3->Pad[6];
    puVar14[0x38] = param_3->IsValid;
    puVar14[0x39] = uVar4;
    puVar14[0x3a] = uVar5;
    puVar14[0x3b] = uVar6;
    puVar14[0x3c] = uVar7;
    puVar14[0x3d] = uVar8;
    puVar14[0x3e] = uVar9;
    puVar14[0x3f] = uVar10;
    if (this != (FPCGPerExecutionCache *)0x0) {
      (this->Lock).bFlag = (atomic<bool>)0x0;
    }
  }
  return;
}

// SetExecutionCachePCGData @ 149cdc6e0

void __thiscall
FPCGPerExecutionCache::SetExecutionCachePCGData
          (FPCGPerExecutionCache *this,ulong64 param_1,EPCGPerExecutionCacheDataType param_2,
          UPCGData *param_3)

{
  atomic<bool> aVar1;
  code *pcVar2;
  bool bVar3;
  FPCGPerExecutionCacheEntry *pFVar4;
  UScriptStruct *pUVar5;
  uchar *puVar6;
  uint uVar7;
  uint uVar8;
  FInstancedStruct *this_00;
  ulong64 local_res10;
  
  if (param_1 != 0xffffffffffffffff) {
    local_res10 = param_1;
    if ((this == (FPCGPerExecutionCache *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LOCK();
    aVar1 = (this->Lock).bFlag;
    (this->Lock).bFlag = (atomic<bool>)0x1;
    UNLOCK();
    while (aVar1 != (atomic<bool>)0x0) {
      aVar1 = (this->Lock).bFlag;
      while (aVar1 != (atomic<bool>)0x0) {
        aVar1 = (this->Lock).bFlag;
      }
      LOCK();
      aVar1 = (this->Lock).bFlag;
      (this->Lock).bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    pFVar4 = TMapBase<unsigned___int64,FPCGPerExecutionCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>_>
             ::FindOrAddImpl<unsigned___int64_const_&>
                       ((TMapBase<unsigned___int64,FPCGPerExecutionCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>_>
                         *)&this->Entries,(int)(local_res10 >> 0x20) * 0x17 + (int)local_res10,
                        &local_res10);
    this_00 = &pFVar4->Data[param_2].InstancedStruct;
    if (((this_00->StructMemory != (uchar *)0x0) &&
        ((this_00->ScriptStruct).field0_0x0.DebugPtr != (UScriptStruct *)0x0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PerExecutionCacheEntry.Data[(uint8)InExecutionCacheDataType].IsValid()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphPerExecutionCache.cpp"
                           ,0x20,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar5 = FPCGPerExecutionCachePCGData::StaticStruct();
    if (pUVar5 == (this_00->ScriptStruct).field0_0x0.DebugPtr) {
      puVar6 = this_00->StructMemory;
      (*(code *)**(undefined8 **)puVar6)(puVar6,0);
    }
    else {
      FInstancedStruct::Reset(this_00);
      uVar8 = (uint)*(short *)((longlong)&pUVar5->_padding_ + 4);
      uVar7 = (int)pUVar5->_padding_ + -1 + uVar8 & -uVar8;
      if ((int)uVar7 < 1) {
        uVar7 = 1;
      }
      puVar6 = FMemory::Malloc((longlong)(int)uVar7,uVar8);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (this_00->ScriptStruct).field0_0x0.DebugPtr = pUVar5;
      this_00->StructMemory = puVar6;
    }
    if ((puVar6 == (uchar *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Memory",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0x74,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(UPCGData **)(puVar6 + 8) = param_3;
    *(undefined ***)puVar6 = &___7FPCGPerExecutionCachePCGData__6B_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UPCGData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_3);
    }
    if (this != (FPCGPerExecutionCache *)0x0) {
      (this->Lock).bFlag = (atomic<bool>)0x0;
    }
  }
  return;
}

