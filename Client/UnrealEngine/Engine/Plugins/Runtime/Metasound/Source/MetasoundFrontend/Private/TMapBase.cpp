// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 9

// GetKeys<TSizedDefaultAllocator<32>_> @ 14ad87b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  uint *puVar19;
  longlong lVar20;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar9 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar12 == 0) goto LAB_14ad87db6;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar12);
  uVar13 = 1;
  if (3 < uVar12) {
    uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_120 = (undefined4)lVar10;
    uVar13 = 1 << ((byte)lVar10 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar13 <= (int)local_50)) goto LAB_14ad87db6;
  local_50 = uVar13;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar13 != 0) {
    uVar12 = uVar13;
    if (uVar13 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_14ad87c15;
      }
    }
    else {
LAB_14ad87c15:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,4);
    }
    if (0 < (int)uVar13) {
      uVar16 = (ulonglong)uVar13;
      uVar11 = uVar9;
      do {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = uVar11 & (longlong)(int)uVar13 - 1U;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    if (local_70 != 0) {
      FVar18 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_78;
      }
      uVar12 = *(uint *)FVar18;
      uVar11 = uVar9;
      while (uVar12 == 0) {
        uStack_150 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_150;
        iVar17 = (int)uVar9;
        local_168 = iVar17 + 1;
        uVar9 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_14ad87d12;
        uVar12 = ((uint *)((longlong)FVar18 + 4))[iVar17];
      }
      uStack_164 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_164 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_11c = (int)lVar10;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar9 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_14ad87d12:
        uVar9 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar9 < (int)local_70) {
      do {
        puVar15 = (undefined8 *)((longlong)(int)uVar9 * 0x10 + *(longlong *)local_114._4_8_);
        uVar3 = *puVar15;
        uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar12 = local_50 - 1 & uVar12 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar15 + 0xc) = uVar12;
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar11 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar8.Data + uVar11 * 4);
        *(int *)(FVar8.Data + uVar11 * 4) = (int)uVar9;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar9 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14ad87db6:
  iVar17 = 0;
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (*piVar1 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar12,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  local_c8 = iVar17;
  iStack_cc = 0;
  uStack_dc = 1;
  if (iVar2 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_140.Array;
    }
    uVar12 = *puVar19;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar17;
      local_c8 = local_c8 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_cc = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ad87e5e;
      uVar12 = puVar19[lVar10 + 1];
    }
    uStack_dc = -uVar12 & uVar12;
    uVar9 = (ulonglong)uStack_dc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_118 = (int)lVar10;
    iStack_cc = local_c8 + -1 + local_118;
    if (iVar2 < iStack_cc) {
      iStack_cc = iVar2;
    }
  }
LAB_14ad87e5e:
  uStack_d0 = 0xffffffff;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,iVar17);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  iStack_e0 = iVar17;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = iStack_cc;
  if (iStack_cc < iVar2) {
    do {
      lVar20 = (longlong)TStack_140.CurrentBitIndex;
      lVar10 = *(longlong *)
                ((longlong)TStack_140.CurrentBitIndex * 0x20 + *(longlong *)&(this->Pairs).Elements)
      ;
      uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar10);
      if (local_98._8_4_ != local_64) {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        for (iVar17 = *(int *)(FVar8.Data +
                              (ulonglong)(local_50 - 1 & (int)((ulonglong)lVar10 >> 0x20) + uVar12)
                              * 4); iVar17 != -1;
            iVar17 = *(int *)(local_98._0_8_ + (longlong)iVar17 * 0x10 + 8)) {
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar17 * 0x10) == lVar10) goto LAB_14ad87fd9;
        }
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar14 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar20 * 0x20);
      if (((pFVar4 <= pFVar14) && (pFVar14 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar17 = (*pcVar5)();
        return iVar17;
      }
      iVar17 = param_1->ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar17 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar17 * 8) =
           *(undefined8 *)pFVar14;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                 (FName *)local_114,
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x20 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_14ad87fd9:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar17 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar17;
}

// Find @ 14adb87a0

FName * __thiscall
TMapBase<UClass_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,FName,0>_>
::Find(TMapBase<UClass_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,FName,0>_>
       *this,UClass *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FName *pFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UClass **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar5 = (FName *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FName *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FName *)0x0;
}

// Find @ 14adb8850

TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1> * __thiscall
TMapBase<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>_>
::Find(TMapBase<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1> *pTVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pTVar4 = (TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1> *)0x0;
}

// Find @ 14adb88f0

TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>
* __thiscall
TMapBase<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>,0>_>
::Find(TMapBase<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>
  *pTVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          pTVar5 = (TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>
                    *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>
                      *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>
          *)0x0;
}

// Find @ 14adb8990

TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>
* __thiscall
TMapBase<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>,0>_>
::Find(TMapBase<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>
  *pTVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>
              *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>
                *)(lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>
          *)0x0;
}

// FindChecked @ 14ae32070

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
              *this,FMetasoundFrontendVertexHandle *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  
  uVar1 = (param_1->NodeID).A;
  iVar4 = TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMetasoundFrontendVertexHandle>
                    (&this->Pairs,
                     (param_1->VertexID).D + 0x9e3779b9 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1,
                     param_1);
  if ((iVar4 != -1) &&
     (lVar6 = (longlong)iVar4 * 0x38 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x20);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar3) {
    return (TArray<int,TSizedDefaultAllocator<32>_> *)&DAT_00000020;
  }
  pcVar2 = (code *)swi(3);
  pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar5;
}

// FindOrAddImpl<Metasound::Frontend::FNodeClassRegistryKey_const_&> @ 14ae4fef0

TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>
* __thiscall
TMapBase<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<Metasound::Frontend::FNodeClassRegistryKey_const_&>
          (TMapBase<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FNodeClassRegistryKey *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FNodeClassRegistryKey *local_res20;
  
  iVar1 = TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey>
                    (&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>
            *)(lVar2 + 0x28);
  }
  local_res20 = param_2;
  TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&> *)
             (ulonglong)param_1,(bool *)&local_res20);
  return (TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 0x28);
}

// Find @ 14ae712b0

TSharedPtr<Audio::IProxyData,1> * __thiscall
TMapBase<void_const_*,TSharedPtr<Audio::IProxyData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>_>
::Find(TMapBase<void_const_*,TSharedPtr<Audio::IProxyData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>_>
       *this,void *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<Audio::IProxyData,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((void *)*plVar2 == param_1) {
          pTVar4 = (TSharedPtr<Audio::IProxyData,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<Audio::IProxyData,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<Audio::IProxyData,1> *)0x0;
}

// FindChecked @ 14ae71790

FConverterNodeClassRegistryValue * __thiscall
TMapBase<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,0>_>
::FindChecked(TMapBase<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,0>_>
              *this,FConverterNodeClassRegistryKey *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FConverterNodeClassRegistryValue *pFVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  
  uVar5 = Metasound::Frontend::GetTypeHash(param_1);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar7 = *(int *)((longlong)FVar8 + (ulonglong)((this->Pairs).HashSize - 1U & uVar5) * 4);
    if (iVar7 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar7 * 0x28;
        if ((*(FName *)(lVar2 + (longlong)iVar7 * 0x28) == param_1->FromDataType) &&
           (*(FName *)(lVar1 + 8) == param_1->ToDataType)) {
          if ((iVar7 != -1) && (lVar1 != 0)) {
            return (FConverterNodeClassRegistryValue *)(lVar1 + 0x10);
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x20);
      } while (iVar7 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FConverterNodeClassRegistryValue *)&DAT_00000010;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FConverterNodeClassRegistryValue *)(*pcVar3)();
  return pFVar6;
}

