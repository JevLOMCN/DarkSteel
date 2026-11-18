// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 4

// Emplace<TPairInitializer<FGuid_const_&,FLevelSequenceLegacyObjectReference_const_&>_> @ 146c4aad0

FSetElementId __thiscall
TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FGuid_const_&,FLevelSequenceLegacyObjectReference_const_&>_>
          (TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FGuid_const_&,FLevelSequenceLegacyObjectReference_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar7 * 0x38 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar7);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FGuid,FLevelSequenceLegacyObjectReference>_> *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    uVar5 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar5;
    uVar5 = puVar4[1];
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *puVar4;
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = uVar5;
    ::FString::FString((FString *)((longlong)local_38.Pointer + 0x20),(FString *)(puVar4 + 2));
    *(undefined4 *)((longlong)local_38.Pointer + 0x30) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar8 = CityHash64(local_38.Pointer,0x10);
  bVar6 = TryReplaceExisting(this,(uint)uVar8,local_38.Pointer,local_res8,in_R9);
  if (!bVar6) {
    uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & (uint)uVar8;
      *(uint *)((longlong)local_38.Pointer + 0x34) = uVar10;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)local_38.Pointer + 0x30) =
           *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// operator= @ 146c4f3a0

TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
  *pTVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar7 = *(int *)&(param_1->Elements).field_0x8;
  lVar12 = (longlong)iVar7;
  TSparseArray<TSparseSetElement<TTuple<FGuid,FLevelSequenceLegacyObjectReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar7);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,iVar7,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar3 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar3 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar3,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar13 = 0;
  if (0 < iVar7) {
    uVar11 = 1;
    puVar10 = (undefined8 *)(*(longlong *)&this->Elements + 0x10);
    lVar14 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if ((iVar13 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar13)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
                    *)(*pcVar4)();
          return pTVar8;
        }
      }
      puVar3 = *(undefined1 **)&(param_1->Elements).field_0x20;
      puVar9 = puVar1;
      if (puVar3 != (undefined1 *)0x0) {
        puVar9 = puVar3;
      }
      iVar7 = iVar13;
      if (iVar13 < 0) {
        iVar7 = iVar13 + 0x1f;
      }
      if ((*(uint *)(puVar9 + (longlong)(iVar7 >> 5) * 4) & uVar11) == 0) {
        *(undefined4 *)(puVar10 + -2) = *(undefined4 *)((longlong)puVar10 + lVar14 + -0x10);
        *(undefined4 *)((longlong)puVar10 + -0xc) =
             *(undefined4 *)((longlong)puVar10 + lVar14 + -0xc);
      }
      else {
        puVar2 = (undefined8 *)((longlong)puVar10 + lVar14 + -0x10);
        uVar5 = puVar2[1];
        puVar10[-2] = *puVar2;
        puVar10[-1] = uVar5;
        uVar5 = ((undefined8 *)((longlong)puVar10 + lVar14))[1];
        *puVar10 = *(undefined8 *)((longlong)puVar10 + lVar14);
        puVar10[1] = uVar5;
        ::FString::FString((FString *)(puVar10 + 2),(FString *)(lVar14 + 0x10 + (longlong)puVar10));
        *(undefined4 *)(puVar10 + 4) = *(undefined4 *)((longlong)puVar10 + lVar14 + 0x20);
        *(undefined4 *)((longlong)puVar10 + 0x24) =
             *(undefined4 *)((longlong)puVar10 + lVar14 + 0x24);
      }
      iVar13 = iVar13 + 1;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      puVar10 = puVar10 + 7;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return this;
}

// Rehash @ 146c58820

void __thiscall
TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  ulong64 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar9 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146c588f7;
        uVar9 = puVar10[lVar5 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_146c588f7:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pcVar8 = (char *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x38);
        uVar4 = CityHash64(pcVar8,0x10);
        uVar9 = *piVar1 - 1U & (uint)uVar4;
        *(uint *)(pcVar8 + 0x34) = uVar9;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pcVar8 + 0x30) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// TryReplaceExisting @ 146c5d0d0

bool __thiscall
TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FGuid,FLevelSequenceLegacyObjectReference>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  ForElementType<FSetElementId> FVar13;
  int *piVar14;
  int iVar15;
  void *_Dst;
  uint uVar16;
  bool bVar17;
  
  iVar15 = *(int *)&(this->Elements).field_0x8;
  bVar17 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar15 - iVar3 != 1) && (iVar15 != iVar3)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar15 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar15 != -1) {
      do {
        piVar14 = (int *)((longlong)iVar15 * 0x38 + *(longlong *)&this->Elements);
        if (((*(int *)&param_2->field_0xc == piVar14[3] && *(int *)&param_2->field_0x8 == piVar14[2]
             ) && *(int *)&param_2->field_0x4 == piVar14[1]) && *(int *)param_2 == *piVar14) {
          bVar17 = iVar15 != -1;
          if (bVar17) {
            _Dst = (void *)((longlong)iVar15 * 0x38 + *(longlong *)&this->Elements);
            pvVar4 = *(void **)((longlong)_Dst + 0x20);
            if (pvVar4 != (void *)0x0) {
              FMemory::Free(pvVar4);
            }
            memmove(_Dst,param_2,0x30);
            iVar3 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar5 = *(longlong *)&this->Elements;
            bVar7 = (byte)iVar3 & 0x1f;
            uVar16 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            if (((*(uint *)(puVar11 + lVar2) & uVar16) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x38 + lVar5) = iVar3;
            }
            uVar10 = 0xffffffff;
            puVar12 = (undefined4 *)((longlong)iVar3 * 0x38 + lVar5);
            *puVar12 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar12[1] = uVar10;
            puVar11 = &(this->Elements).field_0x34;
            *(int *)puVar11 = *(int *)puVar11 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            *(uint *)(puVar11 + lVar2) = *(uint *)(puVar11 + lVar2) & ~uVar16;
            *param_3 = iVar15;
          }
          goto LAB_146c5d178;
        }
        iVar15 = piVar14[0xc];
      } while (iVar15 != -1);
    }
    bVar17 = false;
  }
LAB_146c5d178:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar17;
  }
  return bVar17;
}

