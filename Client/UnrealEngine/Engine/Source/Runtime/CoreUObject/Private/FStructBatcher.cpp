// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// FStructBatcher @ 142011cc0

FStructBatcher * __thiscall
UE::GC::FStructBatcher::FStructBatcher(FStructBatcher *this,FWorkerContext *param_1)

{
  int iVar1;
  FStructArrayBlock *pFVar2;
  
  (this->UnvalidatedSparseStructArrays).Num = 0;
  memset((this->UnvalidatedSparseStructArrays).Entries,0,0x300);
  (this->UnvalidatedStructArrays).Num = 0;
  memset((this->UnvalidatedStructArrays).Entries,0,0x300);
  iVar1 = (param_1->ObjectsToSerialize).WorkerIndex;
  (this->ValidatedStructArrays).WorkerIndex = iVar1;
  pFVar2 = (param_1->IncrementalStructs).Wip;
  if (pFVar2 != (FStructArrayBlock *)0x0) {
    (this->ValidatedStructArrays).Wip = pFVar2;
    (this->ValidatedStructArrays).WipIt = (param_1->IncrementalStructs).WipIt;
    (param_1->IncrementalStructs).Wip = (FStructArrayBlock *)0x0;
    (param_1->IncrementalStructs).WipIt = (FStructArray *)0x0;
    return this;
  }
  pFVar2 = FPageAllocator::AllocatePage(&GScratchPages,iVar1);
  (this->ValidatedStructArrays).Wip = pFVar2;
  pFVar2->NextFull = (FStructArrayBlock *)0x0;
  (this->ValidatedStructArrays).WipIt = ((this->ValidatedStructArrays).Wip)->Data;
  return this;
}

// ~FStructBatcher @ 142013750

void __thiscall UE::GC::FStructBatcher::~FStructBatcher(FStructBatcher *this)

{
  code *pcVar1;
  bool bVar2;
  
  FStructBlockifier::~FStructBlockifier(&this->ValidatedStructArrays);
  if ((this->UnvalidatedStructArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->UnvalidatedSparseStructArrays).Num != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x58a,L"Failed to flush");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// DrainSparseStructArraysFull @ 142029a50

void __thiscall UE::GC::FStructBatcher::DrainSparseStructArraysFull(FStructBatcher *this)

{
  ulonglong uVar1;
  uint uVar2;
  FStructArray *pFVar3;
  FStructArrayBlock *pFVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  ulong64 uVar7;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  uint uVar10;
  FStructArrayBlock *pFVar11;
  FSparseStructArray *pFVar12;
  uint uVar13;
  ForElementType<unsigned_int> FVar14;
  int iVar15;
  uchar *puVar16;
  uint uVar17;
  uchar *puStack_60;
  int local_58;
  int local_40;
  
  pFVar12 = (this->UnvalidatedSparseStructArrays).Entries;
  if (pFVar12 == (FSparseStructArray *)&this->field_0x308) {
    (this->UnvalidatedSparseStructArrays).Num = 0;
    return;
  }
  do {
    uVar1._0_4_ = pFVar12->Num;
    uVar1._4_4_ = pFVar12->Stride;
    uVar7 = (pFVar12->Schema).Handle;
    pTVar8 = pFVar12->Array;
    if ((undefined4)uVar1 != 0) {
      puVar16 = (uchar *)(pTVar8->Elements).Data._padding_;
      if ((pTVar8->Elements).NumFreeIndices == 0) {
        pFVar3 = (this->ValidatedStructArrays).WipIt;
        (pFVar3->Schema).Handle = uVar7;
        pFVar3->Data = puVar16;
        pFVar3->Num = (undefined4)uVar1;
        pFVar3->Stride = uVar1._4_4_;
        pFVar4 = (this->ValidatedStructArrays).Wip;
        (this->ValidatedStructArrays).WipIt = (this->ValidatedStructArrays).WipIt + 1;
        if ((this->ValidatedStructArrays).WipIt == pFVar4->Data + 0xa8) {
          pFVar11 = FPageAllocator::AllocatePage
                              (&GScratchPages,(this->ValidatedStructArrays).WorkerIndex);
          (this->ValidatedStructArrays).Wip = pFVar11;
          pFVar11->NextFull = pFVar4;
          (this->ValidatedStructArrays).WipIt = ((this->ValidatedStructArrays).Wip)->Data;
        }
      }
      else {
        uVar2 = (pTVar8->Elements).Data.ArrayNum;
        iVar15 = 0;
        uVar13 = 0;
        local_58 = 0;
        if (uVar2 != 0) {
          uVar17 = 1;
          puStack_60 = puVar16;
          do {
            if (((int)uVar13 < 0) || ((pTVar8->Elements).AllocationFlags.NumBits <= (int)uVar13)) {
LAB_142029beb:
              if (0 < iVar15) {
                pFVar3 = (this->ValidatedStructArrays).WipIt;
                (pFVar3->Schema).Handle = uVar7;
                pFVar3->Data = puStack_60;
                pFVar3->Num = local_58;
                pFVar3->Stride = uVar1._4_4_;
                pFVar4 = (this->ValidatedStructArrays).Wip;
                (this->ValidatedStructArrays).WipIt = (this->ValidatedStructArrays).WipIt + 1;
                if ((this->ValidatedStructArrays).WipIt == pFVar4->Data + 0xa8) {
                  pFVar11 = FPageAllocator::AllocatePage
                                      (&GScratchPages,(this->ValidatedStructArrays).WorkerIndex);
                  (this->ValidatedStructArrays).Wip = pFVar11;
                  pFVar11->NextFull = pFVar4;
                  (this->ValidatedStructArrays).WipIt = ((this->ValidatedStructArrays).Wip)->Data;
                }
                puVar16 = puVar16 + (uint)(uVar1._4_4_ * iVar15);
                iVar15 = 0;
                local_58 = 0;
              }
              puVar16 = puVar16 + (uVar1 >> 0x20);
              puStack_60 = puVar16;
            }
            else {
              if (((pTVar8->Elements).AllocationFlags.NumBits <= (int)uVar13) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValidIndex(Index)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x8c4,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FVar5 = (pTVar8->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
              FVar14 = (ForElementType<unsigned_int>)&(pTVar8->Elements).AllocationFlags;
              if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                FVar14 = FVar5;
              }
              uVar10 = uVar13;
              if ((int)uVar13 < 0) {
                uVar10 = uVar13 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar10 >> 5) * 4) & uVar17) == 0)
              goto LAB_142029beb;
              local_58 = iVar15 + 1;
              iVar15 = local_58;
            }
            uVar13 = uVar13 + 1;
            uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
          } while (uVar13 < uVar2);
          if (0 < iVar15) {
            pFVar3 = (this->ValidatedStructArrays).WipIt;
            (pFVar3->Schema).Handle = uVar7;
            pFVar3->Data = puStack_60;
            pFVar3->Num = local_58;
            pFVar3->Stride = uVar1._4_4_;
            pFVar4 = (this->ValidatedStructArrays).Wip;
            (this->ValidatedStructArrays).WipIt = (this->ValidatedStructArrays).WipIt + 1;
            if ((this->ValidatedStructArrays).WipIt == pFVar4->Data + 0xa8) {
              pFVar11 = FPageAllocator::AllocatePage
                                  (&GScratchPages,(this->ValidatedStructArrays).WorkerIndex);
              (this->ValidatedStructArrays).Wip = pFVar11;
              pFVar11->NextFull = pFVar4;
              (this->ValidatedStructArrays).WipIt = ((this->ValidatedStructArrays).Wip)->Data;
            }
          }
        }
      }
    }
    pFVar12 = pFVar12 + 1;
    if (pFVar12 == (FSparseStructArray *)&this->field_0x308) {
      (this->UnvalidatedSparseStructArrays).Num = 0;
      return;
    }
  } while( true );
}

// DrainStructArraysFull @ 14202f0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::GC::FStructBatcher::DrainStructArraysFull(FStructBatcher *this)

{
  FStructBlockifier *this_00;
  FStructArrayWithoutStride *pFVar1;
  FStructArrayBlock *pFVar2;
  code *pcVar3;
  uint uVar4;
  uchar *puVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FStructArrayBlock *pFVar9;
  FStructArray *pFVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int iVar15;
  FStructArray *pFVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  undefined1 auStack_128 [32];
  longlong local_108;
  FStructArrayWithoutStride local_f8;
  FStructArray local_d8;
  uint local_b8 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_b8[0] = 0;
  lVar11 = 0;
  lVar8 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[0].Num) {
    lVar8 = 4;
  }
  if (0 < (this->UnvalidatedStructArrays).Entries[1].Num) {
    lVar11 = 4;
  }
  puVar12 = (undefined4 *)(lVar11 + (longlong)local_b8 + lVar8);
  *(undefined4 *)((longlong)local_b8 + lVar8) = 1;
  lVar8 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[2].Num) {
    lVar8 = 4;
  }
  *puVar12 = 2;
  puVar12 = (undefined4 *)(lVar8 + (longlong)puVar12);
  lVar8 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[3].Num) {
    lVar8 = 4;
  }
  puVar13 = (undefined4 *)(lVar8 + (longlong)puVar12);
  *puVar12 = 3;
  uVar17 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[4].Num) {
    uVar17 = 4;
  }
  *puVar13 = 4;
  puVar13 = (undefined4 *)((ulonglong)uVar17 + (longlong)puVar13);
  lVar8 = 0;
  uVar17 = 4;
  if (0 < (this->UnvalidatedStructArrays).Entries[5].Num) {
    lVar8 = 4;
  }
  puVar12 = (undefined4 *)(lVar8 + (longlong)puVar13);
  *puVar13 = 5;
  uVar4 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[6].Num) {
    uVar4 = uVar17;
  }
  *puVar12 = 6;
  puVar12 = (undefined4 *)((ulonglong)uVar4 + (longlong)puVar12);
  lVar8 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[7].Num) {
    lVar8 = 4;
  }
  puVar13 = (undefined4 *)(lVar8 + (longlong)puVar12);
  *puVar12 = 7;
  uVar4 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[8].Num) {
    uVar4 = uVar17;
  }
  *puVar13 = 8;
  puVar13 = (undefined4 *)((ulonglong)uVar4 + (longlong)puVar13);
  lVar8 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[9].Num) {
    lVar8 = 4;
  }
  puVar12 = (undefined4 *)(lVar8 + (longlong)puVar13);
  *puVar13 = 9;
  uVar4 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[10].Num) {
    uVar4 = uVar17;
  }
  *puVar12 = 10;
  puVar12 = (undefined4 *)((ulonglong)uVar4 + (longlong)puVar12);
  lVar8 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[0xb].Num) {
    lVar8 = 4;
  }
  puVar13 = (undefined4 *)(lVar8 + (longlong)puVar12);
  *puVar12 = 0xb;
  uVar4 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[0xc].Num) {
    uVar4 = uVar17;
  }
  *puVar13 = 0xc;
  puVar13 = (undefined4 *)((ulonglong)uVar4 + (longlong)puVar13);
  lVar8 = 0;
  uVar17 = 4;
  if (0 < (this->UnvalidatedStructArrays).Entries[0xd].Num) {
    lVar8 = 4;
  }
  puVar12 = (undefined4 *)(lVar8 + (longlong)puVar13);
  *puVar13 = 0xd;
  iVar15 = (this->UnvalidatedStructArrays).Entries[0xe].Num;
  *puVar12 = 0xe;
  uVar4 = 0;
  if (0 < iVar15) {
    uVar4 = uVar17;
  }
  puVar12 = (undefined4 *)((ulonglong)uVar4 + (longlong)puVar12);
  lVar8 = 0;
  *puVar12 = 0xf;
  if (0 < (this->UnvalidatedStructArrays).Entries[0xf].Num) {
    lVar8 = 4;
  }
  puVar12 = (undefined4 *)(lVar8 + (longlong)puVar12);
  lVar8 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[0x10].Num) {
    lVar8 = 4;
  }
  puVar13 = (undefined4 *)(lVar8 + (longlong)puVar12);
  *puVar12 = 0x10;
  uVar4 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[0x11].Num) {
    uVar4 = uVar17;
  }
  *puVar13 = 0x11;
  puVar13 = (undefined4 *)((ulonglong)uVar4 + (longlong)puVar13);
  lVar8 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[0x12].Num) {
    lVar8 = 4;
  }
  puVar12 = (undefined4 *)(lVar8 + (longlong)puVar13);
  *puVar13 = 0x12;
  uVar4 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[0x13].Num) {
    uVar4 = uVar17;
  }
  *puVar12 = 0x13;
  puVar12 = (undefined4 *)((ulonglong)uVar4 + (longlong)puVar12);
  lVar8 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[0x14].Num) {
    lVar8 = 4;
  }
  puVar13 = (undefined4 *)(lVar8 + (longlong)puVar12);
  *puVar12 = 0x14;
  uVar4 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[0x15].Num) {
    uVar4 = uVar17;
  }
  *puVar13 = 0x15;
  puVar13 = (undefined4 *)((ulonglong)uVar4 + (longlong)puVar13);
  lVar8 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[0x16].Num) {
    lVar8 = 4;
  }
  puVar12 = (undefined4 *)(lVar8 + (longlong)puVar13);
  *puVar13 = 0x16;
  uVar4 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[0x17].Num) {
    uVar4 = uVar17;
  }
  *puVar12 = 0x17;
  puVar12 = (undefined4 *)((ulonglong)uVar4 + (longlong)puVar12);
  lVar8 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[0x18].Num) {
    lVar8 = 4;
  }
  puVar13 = (undefined4 *)(lVar8 + (longlong)puVar12);
  *puVar12 = 0x18;
  uVar4 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[0x19].Num) {
    uVar4 = uVar17;
  }
  *puVar13 = 0x19;
  puVar13 = (undefined4 *)((ulonglong)uVar4 + (longlong)puVar13);
  lVar8 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[0x1a].Num) {
    lVar8 = 4;
  }
  puVar12 = (undefined4 *)(lVar8 + (longlong)puVar13);
  *puVar13 = 0x1a;
  uVar4 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[0x1b].Num) {
    uVar4 = uVar17;
  }
  *puVar12 = 0x1b;
  puVar12 = (undefined4 *)((ulonglong)uVar4 + (longlong)puVar12);
  lVar8 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[0x1c].Num) {
    lVar8 = 4;
  }
  puVar13 = (undefined4 *)(lVar8 + (longlong)puVar12);
  *puVar12 = 0x1c;
  iVar15 = (this->UnvalidatedStructArrays).Entries[0x1d].Num;
  *puVar13 = 0x1d;
  lVar8 = 0;
  if (0 < iVar15) {
    lVar8 = 4;
  }
  puVar13 = (undefined4 *)(lVar8 + (longlong)puVar13);
  lVar8 = 0;
  if (0 < (this->UnvalidatedStructArrays).Entries[0x1e].Num) {
    lVar8 = 4;
  }
  puVar12 = (undefined4 *)(lVar8 + (longlong)puVar13);
  *puVar13 = 0x1e;
  iVar15 = (this->UnvalidatedStructArrays).Entries[0x1f].Num;
  *puVar12 = 0x1f;
  uVar17 = 0;
  if (0 < iVar15) {
    uVar17 = 4;
  }
  puVar18 = (uint *)((ulonglong)uVar17 + (longlong)puVar12);
  puVar14 = local_b8;
  if (local_b8 == puVar18) {
    (this->UnvalidatedStructArrays).Num = 0;
  }
  else {
    this_00 = &this->ValidatedStructArrays;
    do {
      lVar8 = ((longlong)(this->ValidatedStructArrays).Wip + (0xfc0 - (longlong)this_00->WipIt)) /
              0x18;
      if (lVar8 != (int)lVar8) {
        local_108 = lVar8;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      puVar19 = puVar18;
      if (puVar14 + (int)lVar8 < puVar18) {
        puVar19 = puVar14 + (int)lVar8;
      }
      iVar15 = (int)((longlong)puVar19 - (longlong)puVar14 >> 2);
      if (iVar15 < 1) {
LAB_14202f4a0:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Num > 0 && Num <= GetSlack()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x730,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        iVar7 = FStructBlockifier::GetSlack(this_00);
        if (iVar7 < iVar15) goto LAB_14202f4a0;
      }
      pFVar16 = this_00->WipIt;
      pFVar2 = (this->ValidatedStructArrays).Wip;
      this_00->WipIt = pFVar16 + iVar15;
      if (pFVar16 + iVar15 == pFVar2->Data + 0xa8) {
        pFVar9 = FPageAllocator::AllocatePage
                           (&GScratchPages,(this->ValidatedStructArrays).WorkerIndex);
        (this->ValidatedStructArrays).Wip = pFVar9;
        pFVar9->NextFull = pFVar2;
        this_00->WipIt = ((this->ValidatedStructArrays).Wip)->Data;
      }
      do {
        uVar17 = *puVar14;
        puVar14 = puVar14 + 1;
        pFVar1 = (this->UnvalidatedStructArrays).Entries + uVar17;
        local_f8.Schema.Handle = (pFVar1->Schema).Handle;
        local_f8.Data = pFVar1->Data;
        local_f8._16_8_ =
             *(undefined8 *)
              ((longlong)(&this->UnvalidatedSparseStructArrays + 1) +
              (ulonglong)uVar17 * 0x18 + 0x50);
        pFVar10 = CopyAndLoadStride(&local_d8,&local_f8);
        iVar15 = pFVar10->Num;
        uVar17 = pFVar10->Stride;
        puVar5 = pFVar10->Data;
        (pFVar16->Schema).Handle = (pFVar10->Schema).Handle;
        pFVar16->Data = puVar5;
        pFVar16->Num = iVar15;
        pFVar16->Stride = uVar17;
        pFVar16 = pFVar16 + 1;
      } while (puVar14 != puVar19);
    } while (puVar14 != puVar18);
    (this->UnvalidatedStructArrays).Num = 0;
  }
  return;
}

// Suspend @ 142090760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSuspendedStructBatch * __thiscall
UE::GC::FStructBatcher::Suspend(FStructBatcher *this,FSuspendedStructBatch *__return_storage_ptr__)

{
  FStructBlockifier *this_00;
  FStructArrayWithoutStride *pFVar1;
  FStructArrayBlock *pFVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FSuspendedStructBatch *pFVar9;
  FStructArrayBlock *pFVar10;
  longlong lVar11;
  FStructArray *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  int *piVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  FSparseStructArray *pFVar19;
  FStructArray *pFVar20;
  uint *puVar21;
  ForElementType<unsigned_int> FVar22;
  FSparseStructArray *pFVar23;
  uchar *puVar24;
  uint *puVar25;
  undefined1 auStack_198 [32];
  longlong local_178;
  uint local_168;
  ulonglong local_160;
  FSparseStructArray *local_158;
  ulong64 local_150;
  uchar *puStack_148;
  int local_140;
  uint uStack_13c;
  FSparseStructArray *local_138;
  FSuspendedStructBatch *local_130;
  ulong64 local_128;
  TScriptSparseSet<FDefaultSetAllocator> *pTStack_120;
  ulonglong local_118;
  FStructArrayWithoutStride local_108;
  FStructArray local_e8;
  uint local_c8 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  uVar17 = (this->UnvalidatedSparseStructArrays).Num;
  local_130 = __return_storage_ptr__;
  if (uVar17 < 0x21) {
    if (uVar17 != 0) goto LAB_1420907ca;
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num <= ArrayBatchSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x7d1,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FSuspendedStructBatch *)(*pcVar4)();
      return pFVar9;
    }
LAB_1420907ca:
    local_138 = (this->UnvalidatedSparseStructArrays).Entries;
    if (((int)uVar17 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FSuspendedStructBatch *)(*pcVar4)();
      return pFVar9;
    }
    pFVar19 = (this->UnvalidatedSparseStructArrays).Entries;
    pFVar23 = pFVar19 + (int)uVar17;
    local_158 = pFVar23;
    if (pFVar19 != pFVar23) {
      do {
        local_118._0_4_ = pFVar19->Num;
        local_118._4_4_ = pFVar19->Stride;
        local_128 = (pFVar19->Schema).Handle;
        pTVar5 = pFVar19->Array;
        pTStack_120 = pTVar5;
        if ((undefined4)local_118 != 0) {
          uVar14 = local_118 >> 0x20;
          local_140 = (undefined4)local_118;
          puVar24 = (uchar *)(pTVar5->Elements).Data._padding_;
          local_160 = uVar14;
          local_150 = local_128;
          puStack_148 = puVar24;
          uStack_13c = local_118._4_4_;
          if ((pTVar5->Elements).NumFreeIndices == 0) {
            pFVar20 = (this->ValidatedStructArrays).WipIt;
            (pFVar20->Schema).Handle = local_128;
            pFVar20->Data = puVar24;
            pFVar20->Num = (undefined4)local_118;
            pFVar20->Stride = local_118._4_4_;
            pFVar2 = (this->ValidatedStructArrays).Wip;
            (this->ValidatedStructArrays).WipIt = (this->ValidatedStructArrays).WipIt + 1;
            if ((this->ValidatedStructArrays).WipIt == pFVar2->Data + 0xa8) {
              pFVar10 = FPageAllocator::AllocatePage
                                  (&GScratchPages,(this->ValidatedStructArrays).WorkerIndex);
              (this->ValidatedStructArrays).Wip = pFVar10;
              pFVar10->NextFull = pFVar2;
              (this->ValidatedStructArrays).WipIt = ((this->ValidatedStructArrays).Wip)->Data;
            }
          }
          else {
            local_168 = (pTVar5->Elements).Data.ArrayNum;
            iVar18 = 0;
            uVar17 = 0;
            local_140 = 0;
            if (local_168 != 0) {
              uVar13 = 1;
              do {
                if (((int)uVar17 < 0) || ((pTVar5->Elements).AllocationFlags.NumBits <= (int)uVar17)
                   ) {
LAB_14209096d:
                  if (0 < iVar18) {
                    pFVar20 = (this->ValidatedStructArrays).WipIt;
                    (pFVar20->Schema).Handle = local_150;
                    pFVar20->Data = puStack_148;
                    pFVar20->Num = local_140;
                    pFVar20->Stride = uStack_13c;
                    pFVar2 = (this->ValidatedStructArrays).Wip;
                    (this->ValidatedStructArrays).WipIt = (this->ValidatedStructArrays).WipIt + 1;
                    if ((this->ValidatedStructArrays).WipIt == pFVar2->Data + 0xa8) {
                      pFVar10 = FPageAllocator::AllocatePage
                                          (&GScratchPages,(this->ValidatedStructArrays).WorkerIndex)
                      ;
                      (this->ValidatedStructArrays).Wip = pFVar10;
                      pFVar10->NextFull = pFVar2;
                      (this->ValidatedStructArrays).WipIt =
                           ((this->ValidatedStructArrays).Wip)->Data;
                      uVar14 = local_160;
                    }
                    puVar24 = puVar24 + (uint)((int)uVar14 * iVar18);
                    iVar18 = 0;
                    local_140 = 0;
                  }
                  puVar24 = puVar24 + (uVar14 & 0xffffffff);
                  puStack_148 = puVar24;
                }
                else {
                  if (((pTVar5->Elements).AllocationFlags.NumBits <= (int)uVar17) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValidIndex(Index)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x8c4,L""), uVar14 = local_160, bVar6)) {
                    pcVar4 = (code *)swi(3);
                    pFVar9 = (FSuspendedStructBatch *)(*pcVar4)();
                    return pFVar9;
                  }
                  FVar3 = (pTVar5->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                  FVar22 = (ForElementType<unsigned_int>)&(pTVar5->Elements).AllocationFlags;
                  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
                    FVar22 = FVar3;
                  }
                  uVar7 = uVar17;
                  if ((int)uVar17 < 0) {
                    uVar7 = uVar17 + 0x1f;
                  }
                  if ((*(uint *)((longlong)FVar22 + (longlong)((int)uVar7 >> 5) * 4) & uVar13) == 0)
                  goto LAB_14209096d;
                  local_140 = iVar18 + 1;
                  iVar18 = local_140;
                }
                uVar17 = uVar17 + 1;
                uVar13 = uVar13 << 1 | (uint)((int)uVar13 < 0);
              } while (uVar17 < local_168);
              pFVar23 = local_158;
              if (0 < iVar18) {
                pFVar20 = (this->ValidatedStructArrays).WipIt;
                (pFVar20->Schema).Handle = local_150;
                pFVar20->Data = puStack_148;
                pFVar20->Num = local_140;
                pFVar20->Stride = uStack_13c;
                pFVar2 = (this->ValidatedStructArrays).Wip;
                (this->ValidatedStructArrays).WipIt = (this->ValidatedStructArrays).WipIt + 1;
                if ((this->ValidatedStructArrays).WipIt == pFVar2->Data + 0xa8) {
                  pFVar10 = FPageAllocator::AllocatePage
                                      (&GScratchPages,(this->ValidatedStructArrays).WorkerIndex);
                  (this->ValidatedStructArrays).Wip = pFVar10;
                  pFVar10->NextFull = pFVar2;
                  (this->ValidatedStructArrays).WipIt = ((this->ValidatedStructArrays).Wip)->Data;
                  pFVar23 = local_158;
                }
              }
            }
          }
        }
        pFVar19 = local_138 + 1;
        local_138 = pFVar19;
      } while (pFVar19 != pFVar23);
    }
    (this->UnvalidatedSparseStructArrays).Num = 0;
  }
  uVar17 = (this->UnvalidatedStructArrays).Num;
  if (uVar17 < 0x21) {
    if (uVar17 == 0) goto LAB_142090c8b;
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num <= UnvalidatedStructArrays.Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x80a,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FSuspendedStructBatch *)(*pcVar4)();
      return pFVar9;
    }
  }
  uVar13 = 0;
  puVar16 = local_c8;
  if (uVar17 != 0) {
    piVar15 = &(this->UnvalidatedStructArrays).Entries[0].Num;
    do {
      lVar11 = 0;
      *puVar16 = uVar13;
      iVar18 = *piVar15;
      piVar15 = piVar15 + 6;
      if (0 < iVar18) {
        lVar11 = 4;
      }
      uVar13 = uVar13 + 1;
      puVar16 = (uint *)((longlong)puVar16 + lVar11);
    } while (uVar13 < uVar17);
  }
  puVar25 = local_c8;
  if (local_c8 != puVar16) {
    this_00 = &this->ValidatedStructArrays;
    do {
      lVar11 = ((longlong)(this->ValidatedStructArrays).Wip + (0xfc0 - (longlong)this_00->WipIt)) /
               0x18;
      if ((lVar11 != (int)lVar11) &&
         (local_178 = lVar11,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6)
         ) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FSuspendedStructBatch *)(*pcVar4)();
        return pFVar9;
      }
      puVar21 = puVar16;
      if (puVar25 + (int)lVar11 < puVar16) {
        puVar21 = puVar25 + (int)lVar11;
      }
      iVar18 = (int)((longlong)puVar21 - (longlong)puVar25 >> 2);
      if (((iVar18 < 1) || (iVar8 = FStructBlockifier::GetSlack(this_00), iVar8 < iVar18)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Num > 0 && Num <= GetSlack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x730,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FSuspendedStructBatch *)(*pcVar4)();
        return pFVar9;
      }
      pFVar20 = this_00->WipIt;
      pFVar2 = (this->ValidatedStructArrays).Wip;
      this_00->WipIt = pFVar20 + iVar18;
      if (pFVar20 + iVar18 == pFVar2->Data + 0xa8) {
        pFVar10 = FPageAllocator::AllocatePage
                            (&GScratchPages,(this->ValidatedStructArrays).WorkerIndex);
        (this->ValidatedStructArrays).Wip = pFVar10;
        pFVar10->NextFull = pFVar2;
        this_00->WipIt = ((this->ValidatedStructArrays).Wip)->Data;
      }
      do {
        uVar17 = *puVar25;
        puVar25 = puVar25 + 1;
        pFVar1 = (this->UnvalidatedStructArrays).Entries + uVar17;
        local_108.Schema.Handle = (pFVar1->Schema).Handle;
        local_108.Data = pFVar1->Data;
        local_108._16_8_ =
             *(undefined8 *)
              ((longlong)(&this->UnvalidatedSparseStructArrays + 1) +
              (ulonglong)uVar17 * 0x18 + 0x50);
        pFVar12 = CopyAndLoadStride(&local_e8,&local_108);
        iVar18 = pFVar12->Num;
        uVar17 = pFVar12->Stride;
        puVar24 = pFVar12->Data;
        (pFVar20->Schema).Handle = (pFVar12->Schema).Handle;
        pFVar20->Data = puVar24;
        pFVar20->Num = iVar18;
        pFVar20->Stride = uVar17;
        pFVar20 = pFVar20 + 1;
      } while (puVar25 != puVar21);
    } while (puVar25 != puVar16);
  }
  (this->UnvalidatedStructArrays).Num = 0;
LAB_142090c8b:
  local_130->Wip = (this->ValidatedStructArrays).Wip;
  local_130->WipIt = (this->ValidatedStructArrays).WipIt;
  (this->ValidatedStructArrays).Wip = (FStructArrayBlock *)0x0;
  (this->ValidatedStructArrays).WipIt = (FStructArray *)0x0;
  return local_130;
}

