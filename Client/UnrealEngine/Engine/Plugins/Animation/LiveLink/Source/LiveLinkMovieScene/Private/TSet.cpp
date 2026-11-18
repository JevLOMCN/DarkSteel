// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 4

// Emplace<TPairInitializer<FLiveLinkStructPropertyBindings::FPropertyNameKey_&&,FLiveLinkStructPropertyBindings::FPropertyWrapper_const_&>_> @ 14d09a130

FSetElementId __thiscall
TSet<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>,TDefaultMapHashableKeyFuncs<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FLiveLinkStructPropertyBindings::FPropertyNameKey_&&,FLiveLinkStructPropertyBindings::FPropertyWrapper_const_&>_>
          (TSet<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>,TDefaultMapHashableKeyFuncs<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FLiveLinkStructPropertyBindings::FPropertyNameKey_&&,FLiveLinkStructPropertyBindings::FPropertyWrapper_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  TWeakFieldPtr<FProperty> *pTVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_48;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0x48);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar7);
  if (local_48.Pointer !=
      (TSparseSetElement<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>_>
       *)0x0) {
    pTVar4 = *(TWeakFieldPtr<FProperty> **)(param_2 + 8);
    uVar5 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar5;
    TWeakFieldPtr<FProperty>::TWeakFieldPtr<FProperty>
              ((TWeakFieldPtr<FProperty> *)((longlong)local_48.Pointer + 0x10),pTVar4);
    *(FWeakObjectPtr *)((longlong)local_48.Pointer + 0x38) = pTVar4[1].Owner.WeakPtr;
    *(undefined4 *)((longlong)local_48.Pointer + 0x40) = 0xffffffff;
  }
  local_res8[0] = local_48.Index;
  uVar8 = ::GetTypeHash(local_48.Pointer);
  bVar6 = TryReplaceExisting(this,uVar8,local_48.Pointer,local_res8,in_R9);
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
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)local_48.Pointer + 0x44) = uVar8;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)((longlong)local_48.Pointer + 0x40) =
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

// Find @ 14d0aeb40

TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>
* __thiscall
TSet<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>,TDefaultMapHashableKeyFuncs<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>,TDefaultMapHashableKeyFuncs<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper,0>,FDefaultSetAllocator>
       *this,FPropertyNameKey *param_1)

{
  TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>
  *pTVar1;
  FName FVar2;
  uint uVar3;
  TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>
  *pTVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1);
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & uVar3) * 4);
    if (iVar5 != -1) {
      do {
        pTVar1 = (TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>
                  *)(*(longlong *)&this->Elements + (longlong)iVar5 * 0x48);
        if ((*(FName *)(*(longlong *)&this->Elements + (longlong)iVar5 * 0x48) ==
             param_1->StructName) &&
           (FVar2.ComparisonIndex.Value = *(uint *)&pTVar1->field_0x8,
           FVar2.Number = *(uint *)&pTVar1->field_0xc, FVar2 == param_1->PropertyName)) {
          pTVar4 = (TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>
                    *)0x0;
          if (iVar5 != -1) {
            pTVar4 = pTVar1;
          }
          return pTVar4;
        }
        iVar5 = *(int *)(pTVar1 + 1);
      } while (iVar5 != -1);
    }
  }
  return (TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>
          *)0x0;
}

// Rehash @ 14d0b5f30

void __thiscall
TSet<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>,TDefaultMapHashableKeyFuncs<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>,TDefaultMapHashableKeyFuncs<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  FPropertyNameKey *pFVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
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
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar5 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d0b6007;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_14d0b6007:
        iStack_44 = iVar3;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        iVar3 = local_30.CurrentBitIndex;
        pFVar2 = (FPropertyNameKey *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x48);
        uVar5 = ::GetTypeHash(pFVar2);
        uVar5 = *piVar1 - 1U & uVar5;
        pFVar2[4].StructName.Number = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        pFVar2[4].StructName.ComparisonIndex.Value = *(uint *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar3;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// TryReplaceExisting @ 14d0b8120

bool __thiscall
TSet<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>,TDefaultMapHashableKeyFuncs<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>,TDefaultMapHashableKeyFuncs<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  iVar14 = *(int *)&(this->Elements).field_0x8;
  bVar16 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar14 - iVar3 != 1) && (iVar14 != iVar3)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar14 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar14 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        lVar11 = (longlong)iVar14;
        if ((*(longlong *)(lVar4 + lVar11 * 0x48) == *(longlong *)param_2) &&
           (*(longlong *)(lVar4 + 8 + lVar11 * 0x48) == *(longlong *)&param_2->field_0x8)) {
          bVar16 = iVar14 != -1;
          if (bVar16) {
            pvVar5 = *(void **)(lVar4 + 0x28 + (longlong)iVar14 * 0x48);
            if (pvVar5 != (void *)0x0) {
              FMemory::Free(pvVar5);
            }
            memmove((void *)(lVar4 + (longlong)iVar14 * 0x48),param_2,0x40);
            iVar3 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar4 = *(longlong *)&this->Elements;
            bVar7 = (byte)iVar3 & 0x1f;
            uVar15 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar11 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            if (((*(uint *)(puVar12 + lVar11) & uVar15) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar4 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x48) = iVar3;
            }
            puVar2 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x48);
            uVar10 = 0xffffffff;
            *puVar2 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar2[1] = uVar10;
            puVar12 = &(this->Elements).field_0x34;
            *(int *)puVar12 = *(int *)puVar12 + 1;
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
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            *(uint *)(puVar12 + lVar11) = *(uint *)(puVar12 + lVar11) & ~uVar15;
            *param_3 = iVar14;
          }
          break;
        }
        iVar14 = *(int *)(lVar4 + 0x40 + lVar11 * 0x48);
      } while (iVar14 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar16;
  }
  return bVar16;
}

