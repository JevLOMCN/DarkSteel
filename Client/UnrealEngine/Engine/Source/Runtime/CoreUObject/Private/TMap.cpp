// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 11

// Append<FDefaultSetAllocator> @ 141ec6310

void __thiscall
TMap<FName,FAsyncPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>_>
::Append<FDefaultSetAllocator>
          (TMap<FName,FAsyncPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>_>
           *this,TMap<FName,FAsyncPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>_>
                 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FName,FAsyncPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 local_res8 [8];
  int local_res10;
  longlong local_a8;
  longlong local_a0;
  TMap<FName,FAsyncPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FName,FAsyncPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
             *)this,((*(int *)&this->field_0x8 - *(int *)&this->field_0x34) -
                    *(int *)&param_1->field_0x34) + *(int *)&param_1->field_0x8);
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141ec63cd;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_8c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_141ec63cd:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_70 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_141ec64d0;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_141ec64d0:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAsyncPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    local_a8 = *(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x18;
    local_a0 = local_a8 + 8;
    TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FAsyncPackage_*_const_&>_>
              ((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FName_const_&,FAsyncPackage_*_const_&> *)&stack0x00000018,
               (bool *)&local_a8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// RemoveAndCopyValue @ 141f43660

bool __thiscall
TMap<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,0>_>
::RemoveAndCopyValue
          (TMap<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>,0>_>
           *this,FName param_1,
          TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>
          *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  FPackage *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>
  *pTVar11;
  
  uVar8 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar9 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &this->field_0x38;
    }
    uVar8 = *(uint *)(puVar9 + (ulonglong)(*(int *)&this->field_0x48 - 1U & param_1.Number + uVar8)
                               * 4);
    if (uVar8 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar1 = (longlong)(int)uVar8 * 0x18;
        if (*(FName *)(lVar1 + lVar3) == param_1) {
          pTVar11 = (TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>
                     *)(lVar3 + 8 + lVar1);
          if (param_2 != pTVar11) {
            pFVar4 = param_2->Ptr;
            param_2->Ptr = pTVar11->Ptr;
            pTVar11->Ptr = (FPackage *)0x0;
            if (pFVar4 != (FPackage *)0x0) {
              (**(code **)pFVar4->_padding_)(pFVar4,1);
            }
          }
          if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&this->field_0x28)) {
            puVar9 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar9 = &this->field_0x10;
            }
            if ((*(uint *)(puVar9 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar8 & 0x1f) & 1) != 0) goto LAB_141f4377f;
          }
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
LAB_141f4377f:
          lVar3 = *(longlong *)this;
          puVar9 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar9 = &this->field_0x38;
          }
          puVar10 = (uint *)(puVar9 + (longlong)*(int *)(lVar1 + lVar3 + 0x14) * 4);
          do {
            uVar2 = *puVar10;
            if (uVar2 == 0xffffffff) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
            }
            else if (uVar2 == uVar8) {
              *puVar10 = *(uint *)(lVar1 + lVar3 + 0x10);
              TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FPackageWriterRecords::FPackage,TDefaultDelete<FPackageWriterRecords::FPackage>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)this,uVar8,1);
              TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar8,1);
              return true;
            }
            puVar10 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x18 + 0x10);
          } while( true );
        }
        uVar8 = *(uint *)(lVar1 + 0x10 + lVar3);
      } while (uVar8 != 0xffffffff);
    }
  }
  return false;
}

// TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_> @ 141fbcaa0

TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_> * __thiscall
TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>::
TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>
          (TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>
           *this,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

// ~TMap<void_const_*,UE::GC::FSchemaStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,UE::GC::FSchemaStats,0>_> @ 142012140

void __thiscall
TMap<void_const_*,UE::GC::FSchemaStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,UE::GC::FSchemaStats,0>_>
::
~TMap<void_const_*,UE::GC::FSchemaStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,UE::GC::FSchemaStats,0>_>
          (TMap<void_const_*,UE::GC::FSchemaStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,UE::GC::FSchemaStats,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<void_const_*,UE::GC::FSchemaStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_const_*,UE::GC::FSchemaStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_const_*,UE::GC::FSchemaStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_> @ 1420a3b60

void __thiscall
TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>::
~TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
          (TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_> *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> @ 142163210

void __thiscall
TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
~TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          (TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator= @ 1421b6dd0

TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
* __thiscall
TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
::operator=(TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
            *this,TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
                  *param_1)

{
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<UObject_*,FObjectSaveOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UObject_*,FObjectSaveOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&this->field_0x8);
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
    }
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
    if (*(longlong *)&param_1->field_0x40 == 0) {
      *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
    }
    if (*(void **)&this->field_0x40 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x40);
    }
    *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
    *(undefined8 *)&param_1->field_0x40 = 0;
    *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
    *(undefined4 *)&param_1->field_0x48 = 0;
  }
  return this;
}

// RemoveAndCopyValue @ 1422a59b0

bool __thiscall
TMap<UObjectBase_*,UPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,UPackage_*,0>_>
::RemoveAndCopyValue
          (TMap<UObjectBase_*,UPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,UPackage_*,0>_>
           *this,UObjectBase *param_1,UPackage **param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  
  uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar7 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x38;
    }
    uVar9 = *(uint *)(puVar7 + (ulonglong)(*(int *)&this->field_0x48 - 1U & (uVar9 >> 0x10 ^ uVar9))
                               * 4);
    if (uVar9 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar1 = (longlong)(int)uVar9 * 0x18;
        if (*(UObjectBase **)(lVar1 + lVar3) == param_1) {
          *param_2 = *(UPackage **)(lVar1 + 8 + lVar3);
          if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&this->field_0x28)) {
            puVar7 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar7 = &this->field_0x10;
            }
            if ((*(uint *)(puVar7 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar9 & 0x1f) & 1) != 0) goto LAB_1422a5acc;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
LAB_1422a5acc:
          lVar3 = *(longlong *)this;
          puVar7 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar7 = &this->field_0x38;
          }
          puVar8 = (uint *)(puVar7 + (longlong)*(int *)(lVar3 + lVar1 + 0x14) * 4);
          do {
            uVar2 = *puVar8;
            if (uVar2 == 0xffffffff) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
            }
            else if (uVar2 == uVar9) {
              *puVar8 = *(uint *)(lVar3 + lVar1 + 0x10);
              TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar9,1);
              return true;
            }
            puVar8 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x18 + 0x10);
          } while( true );
        }
        uVar9 = *(uint *)(lVar1 + 0x10 + lVar3);
      } while (uVar9 != 0xffffffff);
    }
  }
  return false;
}

// operator= @ 1422b9650

TMap<int,FVerseClassVarAccessor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVerseClassVarAccessor,0>_>
* __thiscall
TMap<int,FVerseClassVarAccessor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVerseClassVarAccessor,0>_>
::operator=(TMap<int,FVerseClassVarAccessor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVerseClassVarAccessor,0>_>
            *this,TMap<int,FVerseClassVarAccessor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVerseClassVarAccessor,0>_>
                  *param_1)

{
  uint uVar1;
  void *_Dst;
  void *_Src;
  uint uVar2;
  
  if (this == param_1) {
    return this;
  }
  uVar1 = *(uint *)&param_1->field_0x48;
  uVar2 = uVar1;
  if (uVar1 < 2) {
    if (*(longlong *)&this->field_0x40 == 0) goto LAB_1422b96ab;
    uVar2 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->field_0x40,0,uVar2,4);
LAB_1422b96ab:
  if (uVar1 != 0) {
    _Src = *(void **)&param_1->field_0x40;
    if (*(void **)&param_1->field_0x40 == (void *)0x0) {
      _Src = &param_1->field_0x38;
    }
    _Dst = *(void **)&this->field_0x40;
    if (*(void **)&this->field_0x40 == (void *)0x0) {
      _Dst = &this->field_0x38;
    }
    memcpy(_Dst,_Src,(longlong)(int)uVar1 << 2);
  }
  *(uint *)&this->field_0x48 = uVar1;
  TSparseArray<TSparseSetElement<TTuple<int,FVerseClassVarAccessor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=((TSparseArray<TSparseSetElement<TTuple<int,FVerseClassVarAccessor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,(TSparseArray<TSparseSetElement<TTuple<int,FVerseClassVarAccessor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)param_1);
  return this;
}

// RemoveAndCopyValue @ 1423391a0

bool __thiscall
TMap<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,0>_>
::RemoveAndCopyValue
          (TMap<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,UClass *param_1,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar11 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar8 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar8 = &this->field_0x38;
    }
    uVar11 = *(uint *)(puVar8 + (ulonglong)
                                (*(int *)&this->field_0x48 - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
    if (uVar11 != 0xffffffff) {
      do {
        lVar10 = (longlong)(int)uVar11 * 0x20;
        lVar2 = lVar10 + *(longlong *)this;
        if (*(UClass **)(lVar10 + *(longlong *)this) == param_1) {
          pTVar1 = (TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_> *)(lVar2 + 8);
          if (param_2 != pTVar1) {
            pFVar4 = (param_2->AllocatorInstance).Data;
            if (pFVar4 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar4);
            }
            (param_2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
            (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            param_2->ArrayNum = *(int *)(lVar2 + 0x10);
            param_2->ArrayMax = *(int *)(lVar2 + 0x14);
            *(undefined8 *)(lVar2 + 0x10) = 0;
          }
          if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)&this->field_0x28)) {
            puVar8 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar8 = &this->field_0x10;
            }
            if ((*(uint *)(puVar8 + (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) *
                                    4) >> (uVar11 & 0x1f) & 1) != 0) goto LAB_1423392ed;
          }
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
LAB_1423392ed:
          lVar2 = *(longlong *)this;
          puVar8 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar8 = &this->field_0x38;
          }
          puVar9 = (uint *)(puVar8 + (longlong)*(int *)(lVar2 + lVar10 + 0x1c) * 4);
          do {
            uVar3 = *puVar9;
            if (uVar3 == 0xffffffff) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
            }
            else if (uVar3 == uVar11) {
              *puVar9 = *(uint *)(lVar2 + lVar10 + 0x18);
              TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)this,uVar11,1);
              TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar11,1);
              return true;
            }
            puVar9 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar3 * 0x20);
          } while( true );
        }
        uVar11 = *(uint *)(lVar2 + 0x18);
      } while (uVar11 != 0xffffffff);
    }
  }
  return false;
}

// RemoveAndCopyValue @ 142339390

bool __thiscall
TMap<FPackageId,FLoadedPackageRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageRef,0>_>
::RemoveAndCopyValue
          (TMap<FPackageId,FLoadedPackageRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageRef,0>_>
           *this,FPackageId *param_1,FLoadedPackageRef *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar7 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x38;
    }
    uVar9 = *(uint *)(puVar7 + (ulonglong)(*(int *)&this->field_0x48 - 1U & (uint)param_1->Id) * 4);
    if (uVar9 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar1 = (longlong)(int)uVar9 * 0x48;
        if (*(ulong64 *)(lVar1 + lVar3) == param_1->Id) {
          FLoadedPackageRef::operator=(param_2,(FLoadedPackageRef *)(lVar3 + 8 + lVar1));
          if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&this->field_0x28)) {
            puVar7 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar7 = &this->field_0x10;
            }
            if ((*(uint *)(puVar7 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar9 & 0x1f) & 1) != 0) goto LAB_142339484;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
LAB_142339484:
          lVar3 = *(longlong *)this;
          puVar7 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar7 = &this->field_0x38;
          }
          puVar8 = (uint *)(puVar7 + (longlong)*(int *)(lVar3 + lVar1 + 0x44) * 4);
          do {
            uVar2 = *puVar8;
            if (uVar2 == 0xffffffff) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
            }
            else if (uVar2 == uVar9) {
              *puVar8 = *(uint *)(lVar3 + lVar1 + 0x40);
              TSparseArray<TSparseSetElement<TTuple<FPackageId,FLoadedPackageRef>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FPackageId,FLoadedPackageRef>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)this,uVar9,1);
              TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar9,1);
              return true;
            }
            puVar8 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x48 + 0x40);
          } while( true );
        }
        uVar9 = *(uint *)(lVar1 + 0x40 + lVar3);
      } while (uVar9 != 0xffffffff);
    }
  }
  return false;
}

