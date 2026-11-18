// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 53

// FConsoleVariableExtendedData<int> @ 141618e30

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

FConsoleVariableExtendedData<int> * __thiscall
FConsoleVariableExtendedData<int>::FConsoleVariableExtendedData<int>
          (FConsoleVariableExtendedData<int> *this,int *param_1,wchar_t *param_2,
          EConsoleVariableFlags param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FConsoleVariableExtendedData<int> *pFVar4;
  
  this->_padding_ = (longlong)&___7FConsoleVariableBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(EConsoleVariableFlags *)&this->_padding_ = param_3;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 2;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  if (param_2 == (wchar_t *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                       ,0xd8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FConsoleVariableExtendedData<int> *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::operator=((FString *)&this->_padding_,param_2);
  uVar1 = (uint)this->_padding_;
  if ((uVar1 & 0x1040) == 0x40) {
    *(uint *)&this->_padding_ = uVar1 | 0x100;
  }
  this->_padding_ = (longlong)&___7__FConsoleVariableExtendedData_H__6B_;
  *(undefined8 *)&this->PlatformValues = 0;
  *(undefined8 *)&(this->PlatformValues).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformValues).field_0x20 = 0;
  *(undefined4 *)&(this->PlatformValues).field_0x28 = 0;
  *(undefined4 *)&(this->PlatformValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlatformValues).field_0x34 = 0;
  *(undefined4 *)&(this->PlatformValues).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PlatformValues).field_0x40 = 0;
  *(undefined4 *)&(this->PlatformValues).field_0x48 = 0;
  (this->PlatformValuesLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->PriorityHistory = (FConsoleVariableHistory<int> *)0x0;
  return this;
}

// FConsoleVariableExtendedData<float> @ 141618f40

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

FConsoleVariableExtendedData<float> * __thiscall
FConsoleVariableExtendedData<float>::FConsoleVariableExtendedData<float>
          (FConsoleVariableExtendedData<float> *this,float *param_1,wchar_t *param_2,
          EConsoleVariableFlags param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FConsoleVariableExtendedData<float> *pFVar4;
  
  this->_padding_ = (longlong)&___7FConsoleVariableBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(EConsoleVariableFlags *)&this->_padding_ = param_3;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 2;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  if (param_2 == (wchar_t *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                       ,0xd8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FConsoleVariableExtendedData<float> *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::operator=((FString *)&this->_padding_,param_2);
  uVar1 = (uint)this->_padding_;
  if ((uVar1 & 0x1040) == 0x40) {
    *(uint *)&this->_padding_ = uVar1 | 0x100;
  }
  this->_padding_ = (longlong)&___7__FConsoleVariableExtendedData_M__6B_;
  *(undefined8 *)&this->PlatformValues = 0;
  *(undefined8 *)&(this->PlatformValues).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformValues).field_0x20 = 0;
  *(undefined4 *)&(this->PlatformValues).field_0x28 = 0;
  *(undefined4 *)&(this->PlatformValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlatformValues).field_0x34 = 0;
  *(undefined4 *)&(this->PlatformValues).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PlatformValues).field_0x40 = 0;
  *(undefined4 *)&(this->PlatformValues).field_0x48 = 0;
  (this->PlatformValuesLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->PriorityHistory = (FConsoleVariableHistory<float> *)0x0;
  return this;
}

// FConsoleVariableExtendedData<FString> @ 141619050

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

FConsoleVariableExtendedData<FString> * __thiscall
FConsoleVariableExtendedData<FString>::FConsoleVariableExtendedData<FString>
          (FConsoleVariableExtendedData<FString> *this,FString *param_1,wchar_t *param_2,
          EConsoleVariableFlags param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FConsoleVariableExtendedData<FString> *pFVar4;
  
  this->_padding_ = (longlong)&___7FConsoleVariableBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(EConsoleVariableFlags *)&this->_padding_ = param_3;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 2;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  if (param_2 == (wchar_t *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                       ,0xd8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FConsoleVariableExtendedData<FString> *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::operator=((FString *)&this->_padding_,param_2);
  uVar1 = (uint)this->_padding_;
  if ((uVar1 & 0x1040) == 0x40) {
    *(uint *)&this->_padding_ = uVar1 | 0x100;
  }
  this->_padding_ = (longlong)&___7__FConsoleVariableExtendedData_VFString____6B_;
  *(undefined8 *)&this->PlatformValues = 0;
  *(undefined8 *)&(this->PlatformValues).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformValues).field_0x20 = 0;
  *(undefined4 *)&(this->PlatformValues).field_0x28 = 0;
  *(undefined4 *)&(this->PlatformValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlatformValues).field_0x34 = 0;
  *(undefined4 *)&(this->PlatformValues).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PlatformValues).field_0x40 = 0;
  *(undefined4 *)&(this->PlatformValues).field_0x48 = 0;
  (this->PlatformValuesLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->PriorityHistory = (FConsoleVariableHistory<FString> *)0x0;
  return this;
}

// FConsoleVariableExtendedData<bool> @ 141619160

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

FConsoleVariableExtendedData<bool> * __thiscall
FConsoleVariableExtendedData<bool>::FConsoleVariableExtendedData<bool>
          (FConsoleVariableExtendedData<bool> *this,bool *param_1,wchar_t *param_2,
          EConsoleVariableFlags param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FConsoleVariableExtendedData<bool> *pFVar4;
  
  this->_padding_ = (longlong)&___7FConsoleVariableBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(EConsoleVariableFlags *)&this->_padding_ = param_3;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 2;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  if (param_2 == (wchar_t *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                       ,0xd8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FConsoleVariableExtendedData<bool> *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::operator=((FString *)&this->_padding_,param_2);
  uVar1 = (uint)this->_padding_;
  if ((uVar1 & 0x1040) == 0x40) {
    *(uint *)&this->_padding_ = uVar1 | 0x100;
  }
  this->_padding_ = (longlong)&___7__FConsoleVariableExtendedData__N__6B_;
  *(undefined8 *)&this->PlatformValues = 0;
  *(undefined8 *)&(this->PlatformValues).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformValues).field_0x20 = 0;
  *(undefined4 *)&(this->PlatformValues).field_0x28 = 0;
  *(undefined4 *)&(this->PlatformValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlatformValues).field_0x34 = 0;
  *(undefined4 *)&(this->PlatformValues).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PlatformValues).field_0x40 = 0;
  *(undefined4 *)&(this->PlatformValues).field_0x48 = 0;
  (this->PlatformValuesLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->PriorityHistory = (FConsoleVariableHistory<bool> *)0x0;
  return this;
}

// ~FConsoleVariableExtendedData<int> @ 14161e880

void __thiscall
FConsoleVariableExtendedData<int>::~FConsoleVariableExtendedData<int>
          (FConsoleVariableExtendedData<int> *this)

{
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<unsigned_int> FVar3;
  FConsoleVariableHistory<int> *pFVar4;
  void *pvVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  BOOLEAN BVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar14;
  uint uVar15;
  ForElementType<unsigned_int> FVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  ulonglong uVar22;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  this->_padding_ = (longlong)&___7__FConsoleVariableExtendedData_H__6B_;
  if ((this->PriorityHistory != (FConsoleVariableHistory<int> *)0x0) &&
     (this->PriorityHistory->bHasTaggedArrayData != false)) {
    iVar18 = 0;
    iVar19 = 0;
    uVar10 = 1;
    uVar20 = UE::ConsoleManager::Private::TaggedCVars._40_4_;
    uVar11 = 0;
    if (uVar20 != 0) {
      puVar21 = (uint *)&UE::ConsoleManager::Private::TaggedCVars.field_0x10;
      if (UE::ConsoleManager::Private::TaggedCVars._32_8_ != 0) {
        puVar21 = (uint *)UE::ConsoleManager::Private::TaggedCVars._32_8_;
      }
      uVar11 = *puVar21;
      while (uVar11 == 0) {
        lVar12 = (longlong)iVar18;
        iVar19 = iVar19 + 0x20;
        iVar18 = iVar18 + 1;
        uVar11 = uVar20;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14161e95d;
        uVar11 = puVar21[lVar12 + 1];
      }
      uVar10 = -uVar11 & uVar11;
      uVar22 = (ulonglong)uVar10 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res18 = (int)lVar12;
      uVar11 = local_res18 + -1 + iVar19;
      if ((int)uVar20 < (int)uVar11) {
        uVar11 = uVar20;
      }
    }
LAB_14161e95d:
    bVar7 = UE::ConsoleManager::Private::TaggedCVars._40_1_;
    uVar15 = uVar20 & 0xffffffe0;
    uVar22 = UE::ConsoleManager::Private::TaggedCVars._40_8_ & 0xffffffff;
    TStack_70._padding_ = CONCAT44(uVar10,iVar18);
    TStack_70.CurrentBitIndex = uVar11;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar20 >> 5;
    TStack_70._28_4_ = uVar11;
    TStack_70.BaseBitIndex = iVar19;
    uStack_50 = CONCAT44(uStack_7c,
                         UE::ConsoleManager::Private::TaggedCVars._8_4_ -
                         UE::ConsoleManager::Private::TaggedCVars._52_4_);
    TStack_70.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)
         &UE::ConsoleManager::Private::TaggedCVars.field_0x10;
    local_res10 = uVar20;
    if (((int)uVar20 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar11 = UE::ConsoleManager::Private::TaggedCVars._40_4_;
    if (uVar20 != uVar11) {
      uVar22 = UE::ConsoleManager::Private::TaggedCVars._40_8_ & 0xffffffff;
      lVar12 = 0x154b76e90;
      if (UE::ConsoleManager::Private::TaggedCVars._32_8_ != 0) {
        lVar12 = UE::ConsoleManager::Private::TaggedCVars._32_8_;
      }
      uVar10 = -1 << (bVar7 & 0x1f) & *(uint *)(lVar12 + (longlong)iVar18 * 4);
      while (uVar10 == 0) {
        lVar13 = (longlong)iVar18;
        uVar15 = uVar15 + 0x20;
        iVar18 = iVar18 + 1;
        local_res10 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14161ea70;
        uVar10 = *(uint *)(lVar12 + 4 + lVar13 * 4);
      }
      uVar22 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      local_res10 = local_res20 + -1 + uVar15;
      if ((int)uVar11 < (int)local_res10) {
        local_res10 = uVar11;
      }
      uVar22 = (ulonglong)local_res10;
    }
LAB_14161ea70:
    while( true ) {
      if (UE::ConsoleManager::Private::TaggedCVars._8_4_ -
          UE::ConsoleManager::Private::TaggedCVars._52_4_ != (int)uStack_50) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_70.CurrentBitIndex == (int)uVar22) &&
         (TStack_70.Array ==
          (TBitArray<FDefaultBitArrayAllocator> *)
          &UE::ConsoleManager::Private::TaggedCVars.field_0x10)) break;
      this_00 = *(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  **)(UE::ConsoleManager::Private::TaggedCVars._0_8_ + 8 +
                     (longlong)TStack_70.CurrentBitIndex * 0x18);
      if ((this_00->Data).ArrayNum != this_00->NumFreeIndices) {
        uVar11 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) *
                 -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        pTVar1 = *(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   **)&this_00[1].Data.ArrayNum;
        pTVar14 = this_00 + 1;
        if (pTVar1 != (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)0x0) {
          pTVar14 = pTVar1;
        }
        uVar11 = *(uint *)((pTVar14->AllocationFlags).AllocatorInstance.InlineData +
                          ((longlong)*(int *)this_00[1].AllocationFlags.AllocatorInstance.InlineData
                           - 1U & (longlong)(int)(uVar11 >> 0x10 ^ uVar11)) * 4 + -0x10);
        if (uVar11 != 0xffffffff) {
          pFVar2 = (this_00->Data).AllocatorInstance.Data;
LAB_14161eb20:
          lVar12 = (longlong)(int)uVar11 * 0x10;
          if (*(FConsoleVariableExtendedData<int> **)(pFVar2 + lVar12) != this)
          goto code_r0x00014161eb31;
          if (((int)uVar11 < 0) || ((this_00->AllocationFlags).NumBits <= (int)uVar11)) {
LAB_14161eb9e:
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Elements.IsValidIndex(ElementIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2ab,
                               L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            if (((this_00->AllocationFlags).NumBits <= (int)uVar11) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar3 = (this_00->AllocationFlags).AllocatorInstance.SecondaryData;
            FVar16 = (ForElementType<unsigned_int>)&this_00->AllocationFlags;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = FVar3;
            }
            uVar10 = uVar11;
            if ((int)uVar11 < 0) {
              uVar10 = uVar11 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar16 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar11 & 0x1f) &
                1) == 0) goto LAB_14161eb9e;
          }
          pTVar1 = *(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     **)&this_00[1].Data.ArrayNum;
          pFVar2 = (this_00->Data).AllocatorInstance.Data;
          pTVar14 = this_00 + 1;
          if (pTVar1 != (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)0x0) {
            pTVar14 = pTVar1;
          }
          pFVar17 = (FScriptContainerElement *)
                    ((pTVar14->AllocationFlags).AllocatorInstance.InlineData +
                    (longlong)*(int *)(pFVar2 + lVar12 + 0xc) * 4 + -0x10);
          while( true ) {
            uVar10 = *(uint *)pFVar17;
            if ((uVar10 == 0xffffffff) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NextElementIndex != INDEX_NONE",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                   ,0x2b5,L"Corrupt hash"), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (uVar10 == uVar11) break;
            pFVar17 = (this_00->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10 + 8;
          }
          *(int *)pFVar17 = *(int *)(pFVar2 + lVar12 + 8);
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized(this_00,uVar11,1);
        }
      }
LAB_14161ec49:
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      uVar22 = (ulonglong)local_res10;
    }
    pFVar4 = this->PriorityHistory;
    if (pFVar4 != (FConsoleVariableHistory<int> *)0x0) {
      DestructItems<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>,int>
                ((TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>
                  *)(pFVar4->History).Pairs.AllocatorInstance.Data,(pFVar4->History).Pairs.ArrayNum)
      ;
      pFVar2 = (pFVar4->History).Pairs.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar4,0x18);
    }
  }
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  if (BVar9 == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  }
  *(undefined4 *)&(this->PlatformValues).field_0x48 = 0;
  pvVar5 = *(void **)&(this->PlatformValues).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PlatformValues);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IConsoleObject__6B_;
  return;
code_r0x00014161eb31:
  uVar11 = *(uint *)(pFVar2 + lVar12 + 8);
  if (uVar11 == 0xffffffff) goto LAB_14161ec49;
  goto LAB_14161eb20;
}

// ~FConsoleVariableExtendedData<float> @ 14161ed80

void __thiscall
FConsoleVariableExtendedData<float>::~FConsoleVariableExtendedData<float>
          (FConsoleVariableExtendedData<float> *this)

{
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<unsigned_int> FVar3;
  FConsoleVariableHistory<float> *pFVar4;
  void *pvVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  BOOLEAN BVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar14;
  uint uVar15;
  ForElementType<unsigned_int> FVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  ulonglong uVar22;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  this->_padding_ = (longlong)&___7__FConsoleVariableExtendedData_M__6B_;
  if ((this->PriorityHistory != (FConsoleVariableHistory<float> *)0x0) &&
     (this->PriorityHistory->bHasTaggedArrayData != false)) {
    iVar18 = 0;
    iVar19 = 0;
    uVar10 = 1;
    uVar20 = UE::ConsoleManager::Private::TaggedCVars._40_4_;
    uVar11 = 0;
    if (uVar20 != 0) {
      puVar21 = (uint *)&UE::ConsoleManager::Private::TaggedCVars.field_0x10;
      if (UE::ConsoleManager::Private::TaggedCVars._32_8_ != 0) {
        puVar21 = (uint *)UE::ConsoleManager::Private::TaggedCVars._32_8_;
      }
      uVar11 = *puVar21;
      while (uVar11 == 0) {
        lVar12 = (longlong)iVar18;
        iVar19 = iVar19 + 0x20;
        iVar18 = iVar18 + 1;
        uVar11 = uVar20;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14161ee5d;
        uVar11 = puVar21[lVar12 + 1];
      }
      uVar10 = -uVar11 & uVar11;
      uVar22 = (ulonglong)uVar10 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res18 = (int)lVar12;
      uVar11 = local_res18 + -1 + iVar19;
      if ((int)uVar20 < (int)uVar11) {
        uVar11 = uVar20;
      }
    }
LAB_14161ee5d:
    bVar7 = UE::ConsoleManager::Private::TaggedCVars._40_1_;
    uVar15 = uVar20 & 0xffffffe0;
    uVar22 = UE::ConsoleManager::Private::TaggedCVars._40_8_ & 0xffffffff;
    TStack_70._padding_ = CONCAT44(uVar10,iVar18);
    TStack_70.CurrentBitIndex = uVar11;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar20 >> 5;
    TStack_70._28_4_ = uVar11;
    TStack_70.BaseBitIndex = iVar19;
    uStack_50 = CONCAT44(uStack_7c,
                         UE::ConsoleManager::Private::TaggedCVars._8_4_ -
                         UE::ConsoleManager::Private::TaggedCVars._52_4_);
    TStack_70.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)
         &UE::ConsoleManager::Private::TaggedCVars.field_0x10;
    local_res10 = uVar20;
    if (((int)uVar20 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar11 = UE::ConsoleManager::Private::TaggedCVars._40_4_;
    if (uVar20 != uVar11) {
      uVar22 = UE::ConsoleManager::Private::TaggedCVars._40_8_ & 0xffffffff;
      lVar12 = 0x154b76e90;
      if (UE::ConsoleManager::Private::TaggedCVars._32_8_ != 0) {
        lVar12 = UE::ConsoleManager::Private::TaggedCVars._32_8_;
      }
      uVar10 = -1 << (bVar7 & 0x1f) & *(uint *)(lVar12 + (longlong)iVar18 * 4);
      while (uVar10 == 0) {
        lVar13 = (longlong)iVar18;
        uVar15 = uVar15 + 0x20;
        iVar18 = iVar18 + 1;
        local_res10 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14161ef70;
        uVar10 = *(uint *)(lVar12 + 4 + lVar13 * 4);
      }
      uVar22 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      local_res10 = local_res20 + -1 + uVar15;
      if ((int)uVar11 < (int)local_res10) {
        local_res10 = uVar11;
      }
      uVar22 = (ulonglong)local_res10;
    }
LAB_14161ef70:
    while( true ) {
      if (UE::ConsoleManager::Private::TaggedCVars._8_4_ -
          UE::ConsoleManager::Private::TaggedCVars._52_4_ != (int)uStack_50) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_70.CurrentBitIndex == (int)uVar22) &&
         (TStack_70.Array ==
          (TBitArray<FDefaultBitArrayAllocator> *)
          &UE::ConsoleManager::Private::TaggedCVars.field_0x10)) break;
      this_00 = *(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  **)(UE::ConsoleManager::Private::TaggedCVars._0_8_ + 8 +
                     (longlong)TStack_70.CurrentBitIndex * 0x18);
      if ((this_00->Data).ArrayNum != this_00->NumFreeIndices) {
        uVar11 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) *
                 -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        pTVar1 = *(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   **)&this_00[1].Data.ArrayNum;
        pTVar14 = this_00 + 1;
        if (pTVar1 != (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)0x0) {
          pTVar14 = pTVar1;
        }
        uVar11 = *(uint *)((pTVar14->AllocationFlags).AllocatorInstance.InlineData +
                          ((longlong)*(int *)this_00[1].AllocationFlags.AllocatorInstance.InlineData
                           - 1U & (longlong)(int)(uVar11 >> 0x10 ^ uVar11)) * 4 + -0x10);
        if (uVar11 != 0xffffffff) {
          pFVar2 = (this_00->Data).AllocatorInstance.Data;
LAB_14161f020:
          lVar12 = (longlong)(int)uVar11 * 0x10;
          if (*(FConsoleVariableExtendedData<float> **)(pFVar2 + lVar12) != this)
          goto code_r0x00014161f031;
          if (((int)uVar11 < 0) || ((this_00->AllocationFlags).NumBits <= (int)uVar11)) {
LAB_14161f09e:
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Elements.IsValidIndex(ElementIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2ab,
                               L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            if (((this_00->AllocationFlags).NumBits <= (int)uVar11) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar3 = (this_00->AllocationFlags).AllocatorInstance.SecondaryData;
            FVar16 = (ForElementType<unsigned_int>)&this_00->AllocationFlags;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = FVar3;
            }
            uVar10 = uVar11;
            if ((int)uVar11 < 0) {
              uVar10 = uVar11 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar16 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar11 & 0x1f) &
                1) == 0) goto LAB_14161f09e;
          }
          pTVar1 = *(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     **)&this_00[1].Data.ArrayNum;
          pFVar2 = (this_00->Data).AllocatorInstance.Data;
          pTVar14 = this_00 + 1;
          if (pTVar1 != (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)0x0) {
            pTVar14 = pTVar1;
          }
          pFVar17 = (FScriptContainerElement *)
                    ((pTVar14->AllocationFlags).AllocatorInstance.InlineData +
                    (longlong)*(int *)(pFVar2 + lVar12 + 0xc) * 4 + -0x10);
          while( true ) {
            uVar10 = *(uint *)pFVar17;
            if ((uVar10 == 0xffffffff) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NextElementIndex != INDEX_NONE",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                   ,0x2b5,L"Corrupt hash"), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (uVar10 == uVar11) break;
            pFVar17 = (this_00->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10 + 8;
          }
          *(int *)pFVar17 = *(int *)(pFVar2 + lVar12 + 8);
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized(this_00,uVar11,1);
        }
      }
LAB_14161f149:
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      uVar22 = (ulonglong)local_res10;
    }
    pFVar4 = this->PriorityHistory;
    if (pFVar4 != (FConsoleVariableHistory<float> *)0x0) {
      DestructItems<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>,int>
                ((TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>
                  *)(pFVar4->History).Pairs.AllocatorInstance.Data,(pFVar4->History).Pairs.ArrayNum)
      ;
      pFVar2 = (pFVar4->History).Pairs.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar4,0x18);
    }
  }
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  if (BVar9 == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  }
  *(undefined4 *)&(this->PlatformValues).field_0x48 = 0;
  pvVar5 = *(void **)&(this->PlatformValues).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PlatformValues);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IConsoleObject__6B_;
  return;
code_r0x00014161f031:
  uVar11 = *(uint *)(pFVar2 + lVar12 + 8);
  if (uVar11 == 0xffffffff) goto LAB_14161f149;
  goto LAB_14161f020;
}

// ~FConsoleVariableExtendedData<FString> @ 14161f280

void __thiscall
FConsoleVariableExtendedData<FString>::~FConsoleVariableExtendedData<FString>
          (FConsoleVariableExtendedData<FString> *this)

{
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<unsigned_int> FVar3;
  FConsoleVariableHistory<FString> *pFVar4;
  void *pvVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  BOOLEAN BVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar14;
  uint uVar15;
  ForElementType<unsigned_int> FVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  ulonglong uVar22;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  this->_padding_ = (longlong)&___7__FConsoleVariableExtendedData_VFString____6B_;
  if ((this->PriorityHistory != (FConsoleVariableHistory<FString> *)0x0) &&
     (this->PriorityHistory->bHasTaggedArrayData != false)) {
    iVar18 = 0;
    iVar19 = 0;
    uVar10 = 1;
    uVar20 = UE::ConsoleManager::Private::TaggedCVars._40_4_;
    uVar11 = 0;
    if (uVar20 != 0) {
      puVar21 = (uint *)&UE::ConsoleManager::Private::TaggedCVars.field_0x10;
      if (UE::ConsoleManager::Private::TaggedCVars._32_8_ != 0) {
        puVar21 = (uint *)UE::ConsoleManager::Private::TaggedCVars._32_8_;
      }
      uVar11 = *puVar21;
      while (uVar11 == 0) {
        lVar12 = (longlong)iVar18;
        iVar19 = iVar19 + 0x20;
        iVar18 = iVar18 + 1;
        uVar11 = uVar20;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14161f35d;
        uVar11 = puVar21[lVar12 + 1];
      }
      uVar10 = -uVar11 & uVar11;
      uVar22 = (ulonglong)uVar10 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res18 = (int)lVar12;
      uVar11 = local_res18 + -1 + iVar19;
      if ((int)uVar20 < (int)uVar11) {
        uVar11 = uVar20;
      }
    }
LAB_14161f35d:
    bVar7 = UE::ConsoleManager::Private::TaggedCVars._40_1_;
    uVar15 = uVar20 & 0xffffffe0;
    uVar22 = UE::ConsoleManager::Private::TaggedCVars._40_8_ & 0xffffffff;
    TStack_70._padding_ = CONCAT44(uVar10,iVar18);
    TStack_70.CurrentBitIndex = uVar11;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar20 >> 5;
    TStack_70._28_4_ = uVar11;
    TStack_70.BaseBitIndex = iVar19;
    uStack_50 = CONCAT44(uStack_7c,
                         UE::ConsoleManager::Private::TaggedCVars._8_4_ -
                         UE::ConsoleManager::Private::TaggedCVars._52_4_);
    TStack_70.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)
         &UE::ConsoleManager::Private::TaggedCVars.field_0x10;
    local_res10 = uVar20;
    if (((int)uVar20 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar11 = UE::ConsoleManager::Private::TaggedCVars._40_4_;
    if (uVar20 != uVar11) {
      uVar22 = UE::ConsoleManager::Private::TaggedCVars._40_8_ & 0xffffffff;
      lVar12 = 0x154b76e90;
      if (UE::ConsoleManager::Private::TaggedCVars._32_8_ != 0) {
        lVar12 = UE::ConsoleManager::Private::TaggedCVars._32_8_;
      }
      uVar10 = -1 << (bVar7 & 0x1f) & *(uint *)(lVar12 + (longlong)iVar18 * 4);
      while (uVar10 == 0) {
        lVar13 = (longlong)iVar18;
        uVar15 = uVar15 + 0x20;
        iVar18 = iVar18 + 1;
        local_res10 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14161f470;
        uVar10 = *(uint *)(lVar12 + 4 + lVar13 * 4);
      }
      uVar22 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      local_res10 = local_res20 + -1 + uVar15;
      if ((int)uVar11 < (int)local_res10) {
        local_res10 = uVar11;
      }
      uVar22 = (ulonglong)local_res10;
    }
LAB_14161f470:
    while( true ) {
      if (UE::ConsoleManager::Private::TaggedCVars._8_4_ -
          UE::ConsoleManager::Private::TaggedCVars._52_4_ != (int)uStack_50) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_70.CurrentBitIndex == (int)uVar22) &&
         (TStack_70.Array ==
          (TBitArray<FDefaultBitArrayAllocator> *)
          &UE::ConsoleManager::Private::TaggedCVars.field_0x10)) break;
      this_00 = *(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  **)(UE::ConsoleManager::Private::TaggedCVars._0_8_ + 8 +
                     (longlong)TStack_70.CurrentBitIndex * 0x18);
      if ((this_00->Data).ArrayNum != this_00->NumFreeIndices) {
        uVar11 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) *
                 -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        pTVar1 = *(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   **)&this_00[1].Data.ArrayNum;
        pTVar14 = this_00 + 1;
        if (pTVar1 != (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)0x0) {
          pTVar14 = pTVar1;
        }
        uVar11 = *(uint *)((pTVar14->AllocationFlags).AllocatorInstance.InlineData +
                          ((longlong)*(int *)this_00[1].AllocationFlags.AllocatorInstance.InlineData
                           - 1U & (longlong)(int)(uVar11 >> 0x10 ^ uVar11)) * 4 + -0x10);
        if (uVar11 != 0xffffffff) {
          pFVar2 = (this_00->Data).AllocatorInstance.Data;
LAB_14161f520:
          lVar12 = (longlong)(int)uVar11 * 0x10;
          if (*(FConsoleVariableExtendedData<FString> **)(pFVar2 + lVar12) != this)
          goto code_r0x00014161f531;
          if (((int)uVar11 < 0) || ((this_00->AllocationFlags).NumBits <= (int)uVar11)) {
LAB_14161f59e:
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Elements.IsValidIndex(ElementIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2ab,
                               L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            if (((this_00->AllocationFlags).NumBits <= (int)uVar11) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar3 = (this_00->AllocationFlags).AllocatorInstance.SecondaryData;
            FVar16 = (ForElementType<unsigned_int>)&this_00->AllocationFlags;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = FVar3;
            }
            uVar10 = uVar11;
            if ((int)uVar11 < 0) {
              uVar10 = uVar11 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar16 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar11 & 0x1f) &
                1) == 0) goto LAB_14161f59e;
          }
          pTVar1 = *(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     **)&this_00[1].Data.ArrayNum;
          pFVar2 = (this_00->Data).AllocatorInstance.Data;
          pTVar14 = this_00 + 1;
          if (pTVar1 != (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)0x0) {
            pTVar14 = pTVar1;
          }
          pFVar17 = (FScriptContainerElement *)
                    ((pTVar14->AllocationFlags).AllocatorInstance.InlineData +
                    (longlong)*(int *)(pFVar2 + lVar12 + 0xc) * 4 + -0x10);
          while( true ) {
            uVar10 = *(uint *)pFVar17;
            if ((uVar10 == 0xffffffff) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NextElementIndex != INDEX_NONE",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                   ,0x2b5,L"Corrupt hash"), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (uVar10 == uVar11) break;
            pFVar17 = (this_00->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10 + 8;
          }
          *(int *)pFVar17 = *(int *)(pFVar2 + lVar12 + 8);
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized(this_00,uVar11,1);
        }
      }
LAB_14161f649:
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      uVar22 = (ulonglong)local_res10;
    }
    pFVar4 = this->PriorityHistory;
    if (pFVar4 != (FConsoleVariableHistory<FString> *)0x0) {
      DestructItems<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>,int>
                ((TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>
                  *)(pFVar4->History).Pairs.AllocatorInstance.Data,(pFVar4->History).Pairs.ArrayNum)
      ;
      pFVar2 = (pFVar4->History).Pairs.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar4,0x18);
    }
  }
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  if (BVar9 == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  }
  *(undefined4 *)&(this->PlatformValues).field_0x48 = 0;
  pvVar5 = *(void **)&(this->PlatformValues).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PlatformValues);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IConsoleObject__6B_;
  return;
code_r0x00014161f531:
  uVar11 = *(uint *)(pFVar2 + lVar12 + 8);
  if (uVar11 == 0xffffffff) goto LAB_14161f649;
  goto LAB_14161f520;
}

// ~FConsoleVariableExtendedData<bool> @ 14161f780

void __thiscall
FConsoleVariableExtendedData<bool>::~FConsoleVariableExtendedData<bool>
          (FConsoleVariableExtendedData<bool> *this)

{
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<unsigned_int> FVar3;
  FConsoleVariableHistory<bool> *pFVar4;
  void *pvVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  BOOLEAN BVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar14;
  uint uVar15;
  ForElementType<unsigned_int> FVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  ulonglong uVar22;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  this->_padding_ = (longlong)&___7__FConsoleVariableExtendedData__N__6B_;
  if ((this->PriorityHistory != (FConsoleVariableHistory<bool> *)0x0) &&
     (this->PriorityHistory->bHasTaggedArrayData != false)) {
    iVar18 = 0;
    iVar19 = 0;
    uVar10 = 1;
    uVar20 = UE::ConsoleManager::Private::TaggedCVars._40_4_;
    uVar11 = 0;
    if (uVar20 != 0) {
      puVar21 = (uint *)&UE::ConsoleManager::Private::TaggedCVars.field_0x10;
      if (UE::ConsoleManager::Private::TaggedCVars._32_8_ != 0) {
        puVar21 = (uint *)UE::ConsoleManager::Private::TaggedCVars._32_8_;
      }
      uVar11 = *puVar21;
      while (uVar11 == 0) {
        lVar12 = (longlong)iVar18;
        iVar19 = iVar19 + 0x20;
        iVar18 = iVar18 + 1;
        uVar11 = uVar20;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14161f85d;
        uVar11 = puVar21[lVar12 + 1];
      }
      uVar10 = -uVar11 & uVar11;
      uVar22 = (ulonglong)uVar10 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res18 = (int)lVar12;
      uVar11 = local_res18 + -1 + iVar19;
      if ((int)uVar20 < (int)uVar11) {
        uVar11 = uVar20;
      }
    }
LAB_14161f85d:
    bVar7 = UE::ConsoleManager::Private::TaggedCVars._40_1_;
    uVar15 = uVar20 & 0xffffffe0;
    uVar22 = UE::ConsoleManager::Private::TaggedCVars._40_8_ & 0xffffffff;
    TStack_70._padding_ = CONCAT44(uVar10,iVar18);
    TStack_70.CurrentBitIndex = uVar11;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar20 >> 5;
    TStack_70._28_4_ = uVar11;
    TStack_70.BaseBitIndex = iVar19;
    uStack_50 = CONCAT44(uStack_7c,
                         UE::ConsoleManager::Private::TaggedCVars._8_4_ -
                         UE::ConsoleManager::Private::TaggedCVars._52_4_);
    TStack_70.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)
         &UE::ConsoleManager::Private::TaggedCVars.field_0x10;
    local_res10 = uVar20;
    if (((int)uVar20 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar11 = UE::ConsoleManager::Private::TaggedCVars._40_4_;
    if (uVar20 != uVar11) {
      uVar22 = UE::ConsoleManager::Private::TaggedCVars._40_8_ & 0xffffffff;
      lVar12 = 0x154b76e90;
      if (UE::ConsoleManager::Private::TaggedCVars._32_8_ != 0) {
        lVar12 = UE::ConsoleManager::Private::TaggedCVars._32_8_;
      }
      uVar10 = -1 << (bVar7 & 0x1f) & *(uint *)(lVar12 + (longlong)iVar18 * 4);
      while (uVar10 == 0) {
        lVar13 = (longlong)iVar18;
        uVar15 = uVar15 + 0x20;
        iVar18 = iVar18 + 1;
        local_res10 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14161f970;
        uVar10 = *(uint *)(lVar12 + 4 + lVar13 * 4);
      }
      uVar22 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      local_res10 = local_res20 + -1 + uVar15;
      if ((int)uVar11 < (int)local_res10) {
        local_res10 = uVar11;
      }
      uVar22 = (ulonglong)local_res10;
    }
LAB_14161f970:
    while( true ) {
      if (UE::ConsoleManager::Private::TaggedCVars._8_4_ -
          UE::ConsoleManager::Private::TaggedCVars._52_4_ != (int)uStack_50) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_70.CurrentBitIndex == (int)uVar22) &&
         (TStack_70.Array ==
          (TBitArray<FDefaultBitArrayAllocator> *)
          &UE::ConsoleManager::Private::TaggedCVars.field_0x10)) break;
      this_00 = *(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  **)(UE::ConsoleManager::Private::TaggedCVars._0_8_ + 8 +
                     (longlong)TStack_70.CurrentBitIndex * 0x18);
      if ((this_00->Data).ArrayNum != this_00->NumFreeIndices) {
        uVar11 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) *
                 -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        pTVar1 = *(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   **)&this_00[1].Data.ArrayNum;
        pTVar14 = this_00 + 1;
        if (pTVar1 != (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)0x0) {
          pTVar14 = pTVar1;
        }
        uVar11 = *(uint *)((pTVar14->AllocationFlags).AllocatorInstance.InlineData +
                          ((longlong)*(int *)this_00[1].AllocationFlags.AllocatorInstance.InlineData
                           - 1U & (longlong)(int)(uVar11 >> 0x10 ^ uVar11)) * 4 + -0x10);
        if (uVar11 != 0xffffffff) {
          pFVar2 = (this_00->Data).AllocatorInstance.Data;
LAB_14161fa20:
          lVar12 = (longlong)(int)uVar11 * 0x10;
          if (*(FConsoleVariableExtendedData<bool> **)(pFVar2 + lVar12) != this)
          goto code_r0x00014161fa31;
          if (((int)uVar11 < 0) || ((this_00->AllocationFlags).NumBits <= (int)uVar11)) {
LAB_14161fa9e:
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Elements.IsValidIndex(ElementIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2ab,
                               L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            if (((this_00->AllocationFlags).NumBits <= (int)uVar11) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar3 = (this_00->AllocationFlags).AllocatorInstance.SecondaryData;
            FVar16 = (ForElementType<unsigned_int>)&this_00->AllocationFlags;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = FVar3;
            }
            uVar10 = uVar11;
            if ((int)uVar11 < 0) {
              uVar10 = uVar11 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar16 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar11 & 0x1f) &
                1) == 0) goto LAB_14161fa9e;
          }
          pTVar1 = *(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     **)&this_00[1].Data.ArrayNum;
          pFVar2 = (this_00->Data).AllocatorInstance.Data;
          pTVar14 = this_00 + 1;
          if (pTVar1 != (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)0x0) {
            pTVar14 = pTVar1;
          }
          pFVar17 = (FScriptContainerElement *)
                    ((pTVar14->AllocationFlags).AllocatorInstance.InlineData +
                    (longlong)*(int *)(pFVar2 + lVar12 + 0xc) * 4 + -0x10);
          while( true ) {
            uVar10 = *(uint *)pFVar17;
            if ((uVar10 == 0xffffffff) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NextElementIndex != INDEX_NONE",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                   ,0x2b5,L"Corrupt hash"), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (uVar10 == uVar11) break;
            pFVar17 = (this_00->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10 + 8;
          }
          *(int *)pFVar17 = *(int *)(pFVar2 + lVar12 + 8);
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized(this_00,uVar11,1);
        }
      }
LAB_14161fb49:
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      uVar22 = (ulonglong)local_res10;
    }
    pFVar4 = this->PriorityHistory;
    if (pFVar4 != (FConsoleVariableHistory<bool> *)0x0) {
      DestructItems<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>,int>
                ((TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>
                  *)(pFVar4->History).Pairs.AllocatorInstance.Data,(pFVar4->History).Pairs.ArrayNum)
      ;
      pFVar2 = (pFVar4->History).Pairs.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar4,0x18);
    }
  }
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  if (BVar9 == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  }
  *(undefined4 *)&(this->PlatformValues).field_0x48 = 0;
  pvVar5 = *(void **)&(this->PlatformValues).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PlatformValues);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IConsoleObject__6B_;
  return;
code_r0x00014161fa31:
  uVar11 = *(uint *)(pFVar2 + lVar12 + 8);
  if (uVar11 == 0xffffffff) goto LAB_14161fb49;
  goto LAB_14161fa20;
}

// ClearPlatformVariables @ 14162e810

void __thiscall
FConsoleVariableExtendedData<int>::ClearPlatformVariables
          (FConsoleVariableExtendedData<int> *this,FName param_1)

{
  undefined1 *puVar1;
  FPlatformRWLock *SRWLock;
  int iVar2;
  bool bVar3;
  uint uVar4;
  TMap<FName,TSharedPtr<IConsoleVariable,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>_>
  *this_00;
  FName local_res8;
  FName local_res10;
  
  SRWLock = &this->PlatformValuesLock;
  local_res10 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this_00 = &this->PlatformValues;
  if (param_1 == (FName)0x0) {
    bVar3 = 1 < *(int *)&(this->PlatformValues).field_0x48;
    if (!bVar3) {
      TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->PlatformValues).field_0x8);
    puVar1 = &(this->PlatformValues).field_0xc;
    *(undefined4 *)&(this->PlatformValues).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->PlatformValues).field_0x34 = 0;
    *(undefined4 *)&(this->PlatformValues).field_0x30 = 0xffffffff;
    iVar2 = *(int *)&(this->PlatformValues).field_0x2c;
    *(undefined4 *)&(this->PlatformValues).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->PlatformValues).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PlatformValues).field_0x10,0);
    }
    if (bVar3) {
      *(undefined4 *)&(this->PlatformValues).field_0x48 = 1;
      TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                *)this_00);
                    /* WARNING: Could not recover jumptable at 0x00014162e8de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      return;
    }
  }
  else {
    local_res8 = param_1;
    if (*(int *)&(this->PlatformValues).field_0x8 != *(int *)&(this->PlatformValues).field_0x34) {
      uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
      TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                           *)this_00,local_res10.Number + uVar4,&local_res8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014162e916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// ClearPlatformVariables @ 14162e930

void __thiscall
FConsoleVariableExtendedData<float>::ClearPlatformVariables
          (FConsoleVariableExtendedData<float> *this,FName param_1)

{
  undefined1 *puVar1;
  FPlatformRWLock *SRWLock;
  int iVar2;
  bool bVar3;
  uint uVar4;
  TMap<FName,TSharedPtr<IConsoleVariable,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>_>
  *this_00;
  FName local_res8;
  FName local_res10;
  
  SRWLock = &this->PlatformValuesLock;
  local_res10 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this_00 = &this->PlatformValues;
  if (param_1 == (FName)0x0) {
    bVar3 = 1 < *(int *)&(this->PlatformValues).field_0x48;
    if (!bVar3) {
      TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->PlatformValues).field_0x8);
    puVar1 = &(this->PlatformValues).field_0xc;
    *(undefined4 *)&(this->PlatformValues).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->PlatformValues).field_0x34 = 0;
    *(undefined4 *)&(this->PlatformValues).field_0x30 = 0xffffffff;
    iVar2 = *(int *)&(this->PlatformValues).field_0x2c;
    *(undefined4 *)&(this->PlatformValues).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->PlatformValues).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PlatformValues).field_0x10,0);
    }
    if (bVar3) {
      *(undefined4 *)&(this->PlatformValues).field_0x48 = 1;
      TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                *)this_00);
                    /* WARNING: Could not recover jumptable at 0x00014162e9fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      return;
    }
  }
  else {
    local_res8 = param_1;
    if (*(int *)&(this->PlatformValues).field_0x8 != *(int *)&(this->PlatformValues).field_0x34) {
      uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
      TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                           *)this_00,local_res10.Number + uVar4,&local_res8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014162ea36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// ClearPlatformVariables @ 14162ea50

void __thiscall
FConsoleVariableExtendedData<FString>::ClearPlatformVariables
          (FConsoleVariableExtendedData<FString> *this,FName param_1)

{
  undefined1 *puVar1;
  FPlatformRWLock *SRWLock;
  int iVar2;
  bool bVar3;
  uint uVar4;
  TMap<FName,TSharedPtr<IConsoleVariable,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>_>
  *this_00;
  FName local_res8;
  FName local_res10;
  
  SRWLock = &this->PlatformValuesLock;
  local_res10 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this_00 = &this->PlatformValues;
  if (param_1 == (FName)0x0) {
    bVar3 = 1 < *(int *)&(this->PlatformValues).field_0x48;
    if (!bVar3) {
      TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->PlatformValues).field_0x8);
    puVar1 = &(this->PlatformValues).field_0xc;
    *(undefined4 *)&(this->PlatformValues).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->PlatformValues).field_0x34 = 0;
    *(undefined4 *)&(this->PlatformValues).field_0x30 = 0xffffffff;
    iVar2 = *(int *)&(this->PlatformValues).field_0x2c;
    *(undefined4 *)&(this->PlatformValues).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->PlatformValues).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PlatformValues).field_0x10,0);
    }
    if (bVar3) {
      *(undefined4 *)&(this->PlatformValues).field_0x48 = 1;
      TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                *)this_00);
                    /* WARNING: Could not recover jumptable at 0x00014162eb1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      return;
    }
  }
  else {
    local_res8 = param_1;
    if (*(int *)&(this->PlatformValues).field_0x8 != *(int *)&(this->PlatformValues).field_0x34) {
      uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
      TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                           *)this_00,local_res10.Number + uVar4,&local_res8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014162eb56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// ClearPlatformVariables @ 14162eb70

void __thiscall
FConsoleVariableExtendedData<bool>::ClearPlatformVariables
          (FConsoleVariableExtendedData<bool> *this,FName param_1)

{
  undefined1 *puVar1;
  FPlatformRWLock *SRWLock;
  int iVar2;
  bool bVar3;
  uint uVar4;
  TMap<FName,TSharedPtr<IConsoleVariable,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>_>
  *this_00;
  FName local_res8;
  FName local_res10;
  
  SRWLock = &this->PlatformValuesLock;
  local_res10 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this_00 = &this->PlatformValues;
  if (param_1 == (FName)0x0) {
    bVar3 = 1 < *(int *)&(this->PlatformValues).field_0x48;
    if (!bVar3) {
      TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->PlatformValues).field_0x8);
    puVar1 = &(this->PlatformValues).field_0xc;
    *(undefined4 *)&(this->PlatformValues).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->PlatformValues).field_0x34 = 0;
    *(undefined4 *)&(this->PlatformValues).field_0x30 = 0xffffffff;
    iVar2 = *(int *)&(this->PlatformValues).field_0x2c;
    *(undefined4 *)&(this->PlatformValues).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->PlatformValues).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PlatformValues).field_0x10,0);
    }
    if (bVar3) {
      *(undefined4 *)&(this->PlatformValues).field_0x48 = 1;
      TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                *)this_00);
                    /* WARNING: Could not recover jumptable at 0x00014162ec3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      return;
    }
  }
  else {
    local_res8 = param_1;
    if (*(int *)&(this->PlatformValues).field_0x8 != *(int *)&(this->PlatformValues).field_0x34) {
      uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
      TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                           *)this_00,local_res10.Number + uVar4,&local_res8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014162ec76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// GetDefaultTypedValue @ 141640b30

int __thiscall
FConsoleVariableExtendedData<int>::GetDefaultTypedValue(FConsoleVariableExtendedData<int> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  
  if (this->PriorityHistory == (FConsoleVariableHistory<int> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141640bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar4 = (**(code **)(this->_padding_ + 200))();
    return iVar4;
  }
  pTVar5 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&this->PriorityHistory->History,0);
  if (pTVar5 == (TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_> *)0x0)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x141,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  if (pTVar5->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar6 = 0xc;
    if (!bVar3) goto LAB_141640bdc;
  }
  lVar6 = 8;
LAB_141640bdc:
  return *(int *)(pFVar1 + lVar6);
}

// GetDefaultTypedValue @ 141640c00

float __thiscall
FConsoleVariableExtendedData<float>::GetDefaultTypedValue(FConsoleVariableExtendedData<float> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  float fVar6;
  
  if (this->PriorityHistory == (FConsoleVariableHistory<float> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141640cc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar6 = (float)(**(code **)(this->_padding_ + 0xd0))();
    return fVar6;
  }
  pTVar4 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&this->PriorityHistory->History,0);
  if (pTVar4 == (TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_> *)
                0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x141,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  if (pTVar4->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  pFVar1 = (pTVar4->AllocatorInstance).Data;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar5 = 0xc;
    if (!bVar3) goto LAB_141640cac;
  }
  lVar5 = 8;
LAB_141640cac:
  return *(float *)(pFVar1 + lVar5);
}

// GetDefaultTypedValue @ 141640cd0

FString * __thiscall
FConsoleVariableExtendedData<FString>::GetDefaultTypedValue
          (FConsoleVariableExtendedData<FString> *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_> *pTVar3;
  FString *pFVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  void *local_28 [2];
  undefined8 local_18 [2];
  
  if (this->PriorityHistory == (FConsoleVariableHistory<FString> *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 0xd8))(this,local_28);
    pFVar9 = (FScriptContainerElement *)0x0;
    iVar8 = 0;
    iVar7 = iVar8;
    if (local_18 != puVar6) {
      pFVar9 = (FScriptContainerElement *)*puVar6;
      *puVar6 = 0;
      iVar8 = *(int *)(puVar6 + 1);
      iVar7 = *(int *)((longlong)puVar6 + 0xc);
      puVar6[1] = 0;
    }
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = pFVar9;
    (__return_storage_ptr__->Data).ArrayNum = iVar8;
    (__return_storage_ptr__->Data).ArrayMax = iVar7;
    return __return_storage_ptr__;
  }
  pTVar3 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&this->PriorityHistory->History,0);
  if (pTVar3 == (TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_> *)
                0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x141,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (pTVar3->ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar9 = (pTVar3->AllocatorInstance).Data;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar5 = 0x18;
    if (!bVar2) goto LAB_141640d83;
  }
  lVar5 = 8;
LAB_141640d83:
  ::FString::FString(__return_storage_ptr__,(FString *)(pFVar9 + lVar5));
  return __return_storage_ptr__;
}

// GetDefaultTypedValue @ 141640e20

bool __thiscall
FConsoleVariableExtendedData<bool>::GetDefaultTypedValue(FConsoleVariableExtendedData<bool> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  
  if (this->PriorityHistory == (FConsoleVariableHistory<bool> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141640ee1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(this->_padding_ + 0xc0))();
    return (bool)uVar4;
  }
  pTVar5 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&this->PriorityHistory->History,0);
  if (pTVar5 == (TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x141,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (pTVar5->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar6 = 9;
    if (!bVar3) goto LAB_141640ecc;
  }
  lVar6 = 8;
LAB_141640ecc:
  return (bool)pFVar1[lVar6];
}

// GetDefaultValue @ 141640ef0

FString * __thiscall
FConsoleVariableExtendedData<int>::GetDefaultValue
          (FConsoleVariableExtendedData<int> *this,FString *__return_storage_ptr__)

{
  GetDefaultTypedValue(this);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// GetDefaultValue @ 141640f20

FString * __thiscall
FConsoleVariableExtendedData<float>::GetDefaultValue
          (FConsoleVariableExtendedData<float> *this,FString *__return_storage_ptr__)

{
  GetDefaultTypedValue(this);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
  return __return_storage_ptr__;
}

// GetDefaultValue @ 141640f60

FString * __thiscall
FConsoleVariableExtendedData<FString>::GetDefaultValue
          (FConsoleVariableExtendedData<FString> *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = GetDefaultTypedValue(this,&local_18);
  ::FString::FString(__return_storage_ptr__,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDefaultValue @ 141640fa0

FString * __thiscall
FConsoleVariableExtendedData<bool>::GetDefaultValue
          (FConsoleVariableExtendedData<bool> *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  bVar1 = GetDefaultTypedValue(this);
  pwVar2 = L"true";
  if (!bVar1) {
    pwVar2 = L"false";
  }
  ::FString::FString(__return_storage_ptr__,pwVar2);
  return __return_storage_ptr__;
}

// GetHistorySize @ 141642a10

ulong64 __thiscall
FConsoleVariableExtendedData<int>::GetHistorySize(FConsoleVariableExtendedData<int> *this)

{
  if (this->PriorityHistory != (FConsoleVariableHistory<int> *)0x0) {
    return (longlong)(this->PriorityHistory->History).Pairs.ArrayMax * 0x18;
  }
  return 0;
}

// GetHistorySize @ 141642a30

ulong64 __thiscall
FConsoleVariableExtendedData<float>::GetHistorySize(FConsoleVariableExtendedData<float> *this)

{
  if (this->PriorityHistory != (FConsoleVariableHistory<float> *)0x0) {
    return (longlong)(this->PriorityHistory->History).Pairs.ArrayMax * 0x18;
  }
  return 0;
}

// GetHistorySize @ 141642a50

ulong64 __thiscall
FConsoleVariableExtendedData<FString>::GetHistorySize(FConsoleVariableExtendedData<FString> *this)

{
  if (this->PriorityHistory != (FConsoleVariableHistory<FString> *)0x0) {
    return (longlong)(this->PriorityHistory->History).Pairs.ArrayMax * 0x18;
  }
  return 0;
}

// GetHistorySize @ 141642a70

ulong64 __thiscall
FConsoleVariableExtendedData<bool>::GetHistorySize(FConsoleVariableExtendedData<bool> *this)

{
  if (this->PriorityHistory != (FConsoleVariableHistory<bool> *)0x0) {
    return (longlong)(this->PriorityHistory->History).Pairs.ArrayMax * 0x18;
  }
  return 0;
}

// GetPlatformValueVariable @ 141644ba0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

TSharedPtr<IConsoleVariable,1> * __thiscall
FConsoleVariableExtendedData<int>::GetPlatformValueVariable
          (FConsoleVariableExtendedData<int> *this,
          TSharedPtr<IConsoleVariable,1> *__return_storage_ptr__,FName param_1,FString *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  TSharedPtr<IConsoleVariable,1> *pTVar5;
  FName FVar6;
  TTuple<FName,TSharedPtr<IConsoleVariable,1>_> *pTVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FString local_28;
  
  CheckForRemappedDP(&local_28,param_1,param_2);
  if (local_28.Data.ArrayNum == GSpecialDPNameForPremadePlatformKey.Data.ArrayNum) {
    if (local_28.Data.ArrayNum < 2) goto LAB_141644c52;
    iVar4 = StricmpImpl<wchar_t,wchar_t>
                      ((wchar_t *)local_28.Data.AllocatorInstance.Data,
                       (wchar_t *)GSpecialDPNameForPremadePlatformKey.Data.AllocatorInstance.Data);
    bVar8 = iVar4 == 0;
  }
  else {
    bVar8 = local_28.Data.ArrayNum + GSpecialDPNameForPremadePlatformKey.Data.ArrayNum == 1;
  }
  if (!bVar8) {
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar8) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TSharedPtr<IConsoleVariable,1> *)(*pcVar2)();
          return pTVar5;
        }
      }
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0x110))
              (IConsoleManager::Singleton,param_1,&local_28);
  }
LAB_141644c52:
  cVar3 = (**(code **)(this->_padding_ + 0x108))(this,param_1,&local_28);
  if (cVar3 == '\0') {
    FVar6 = MakePlatformKey((FName)local_res8,(FString *)param_1);
    FindOrCreatePlatformCVar((IConsoleVariable *)this,*(FName *)FVar6);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  FVar6 = MakePlatformKey((FName)local_res10,(FString *)param_1);
  pTVar7 = TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                   *)&this->PlatformValues,*(FName *)FVar6);
  if (pTVar7 == (TTuple<FName,TSharedPtr<IConsoleVariable,1>_> *)0x0) {
    __return_storage_ptr__->Object = (IConsoleVariable *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = *(IConsoleVariable **)&pTVar7->field_0x8;
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar7->field_0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPlatformValueVariable @ 141644d10

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

TSharedPtr<IConsoleVariable,1> * __thiscall
FConsoleVariableExtendedData<float>::GetPlatformValueVariable
          (FConsoleVariableExtendedData<float> *this,
          TSharedPtr<IConsoleVariable,1> *__return_storage_ptr__,FName param_1,FString *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  TSharedPtr<IConsoleVariable,1> *pTVar5;
  FName FVar6;
  TTuple<FName,TSharedPtr<IConsoleVariable,1>_> *pTVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FString local_28;
  
  CheckForRemappedDP(&local_28,param_1,param_2);
  if (local_28.Data.ArrayNum == GSpecialDPNameForPremadePlatformKey.Data.ArrayNum) {
    if (local_28.Data.ArrayNum < 2) goto LAB_141644dc2;
    iVar4 = StricmpImpl<wchar_t,wchar_t>
                      ((wchar_t *)local_28.Data.AllocatorInstance.Data,
                       (wchar_t *)GSpecialDPNameForPremadePlatformKey.Data.AllocatorInstance.Data);
    bVar8 = iVar4 == 0;
  }
  else {
    bVar8 = local_28.Data.ArrayNum + GSpecialDPNameForPremadePlatformKey.Data.ArrayNum == 1;
  }
  if (!bVar8) {
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar8) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TSharedPtr<IConsoleVariable,1> *)(*pcVar2)();
          return pTVar5;
        }
      }
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0x110))
              (IConsoleManager::Singleton,param_1,&local_28);
  }
LAB_141644dc2:
  cVar3 = (**(code **)(this->_padding_ + 0x108))(this,param_1,&local_28);
  if (cVar3 == '\0') {
    FVar6 = MakePlatformKey((FName)local_res8,(FString *)param_1);
    FindOrCreatePlatformCVar((IConsoleVariable *)this,*(FName *)FVar6);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  FVar6 = MakePlatformKey((FName)local_res10,(FString *)param_1);
  pTVar7 = TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                   *)&this->PlatformValues,*(FName *)FVar6);
  if (pTVar7 == (TTuple<FName,TSharedPtr<IConsoleVariable,1>_> *)0x0) {
    __return_storage_ptr__->Object = (IConsoleVariable *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = *(IConsoleVariable **)&pTVar7->field_0x8;
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar7->field_0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPlatformValueVariable @ 141644e80

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

TSharedPtr<IConsoleVariable,1> * __thiscall
FConsoleVariableExtendedData<FString>::GetPlatformValueVariable
          (FConsoleVariableExtendedData<FString> *this,
          TSharedPtr<IConsoleVariable,1> *__return_storage_ptr__,FName param_1,FString *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  TSharedPtr<IConsoleVariable,1> *pTVar5;
  FName FVar6;
  TTuple<FName,TSharedPtr<IConsoleVariable,1>_> *pTVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FString local_28;
  
  CheckForRemappedDP(&local_28,param_1,param_2);
  if (local_28.Data.ArrayNum == GSpecialDPNameForPremadePlatformKey.Data.ArrayNum) {
    if (local_28.Data.ArrayNum < 2) goto LAB_141644f32;
    iVar4 = StricmpImpl<wchar_t,wchar_t>
                      ((wchar_t *)local_28.Data.AllocatorInstance.Data,
                       (wchar_t *)GSpecialDPNameForPremadePlatformKey.Data.AllocatorInstance.Data);
    bVar8 = iVar4 == 0;
  }
  else {
    bVar8 = local_28.Data.ArrayNum + GSpecialDPNameForPremadePlatformKey.Data.ArrayNum == 1;
  }
  if (!bVar8) {
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar8) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TSharedPtr<IConsoleVariable,1> *)(*pcVar2)();
          return pTVar5;
        }
      }
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0x110))
              (IConsoleManager::Singleton,param_1,&local_28);
  }
LAB_141644f32:
  cVar3 = (**(code **)(this->_padding_ + 0x108))(this,param_1,&local_28);
  if (cVar3 == '\0') {
    FVar6 = MakePlatformKey((FName)local_res8,(FString *)param_1);
    FindOrCreatePlatformCVar((IConsoleVariable *)this,*(FName *)FVar6);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  FVar6 = MakePlatformKey((FName)local_res10,(FString *)param_1);
  pTVar7 = TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                   *)&this->PlatformValues,*(FName *)FVar6);
  if (pTVar7 == (TTuple<FName,TSharedPtr<IConsoleVariable,1>_> *)0x0) {
    __return_storage_ptr__->Object = (IConsoleVariable *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = *(IConsoleVariable **)&pTVar7->field_0x8;
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar7->field_0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPlatformValueVariable @ 141644ff0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

TSharedPtr<IConsoleVariable,1> * __thiscall
FConsoleVariableExtendedData<bool>::GetPlatformValueVariable
          (FConsoleVariableExtendedData<bool> *this,
          TSharedPtr<IConsoleVariable,1> *__return_storage_ptr__,FName param_1,FString *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  TSharedPtr<IConsoleVariable,1> *pTVar5;
  FName FVar6;
  TTuple<FName,TSharedPtr<IConsoleVariable,1>_> *pTVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FString local_28;
  
  CheckForRemappedDP(&local_28,param_1,param_2);
  if (local_28.Data.ArrayNum == GSpecialDPNameForPremadePlatformKey.Data.ArrayNum) {
    if (local_28.Data.ArrayNum < 2) goto LAB_1416450a2;
    iVar4 = StricmpImpl<wchar_t,wchar_t>
                      ((wchar_t *)local_28.Data.AllocatorInstance.Data,
                       (wchar_t *)GSpecialDPNameForPremadePlatformKey.Data.AllocatorInstance.Data);
    bVar8 = iVar4 == 0;
  }
  else {
    bVar8 = local_28.Data.ArrayNum + GSpecialDPNameForPremadePlatformKey.Data.ArrayNum == 1;
  }
  if (!bVar8) {
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar8) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TSharedPtr<IConsoleVariable,1> *)(*pcVar2)();
          return pTVar5;
        }
      }
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0x110))
              (IConsoleManager::Singleton,param_1,&local_28);
  }
LAB_1416450a2:
  cVar3 = (**(code **)(this->_padding_ + 0x108))(this,param_1,&local_28);
  if (cVar3 == '\0') {
    FVar6 = MakePlatformKey((FName)local_res8,(FString *)param_1);
    FindOrCreatePlatformCVar((IConsoleVariable *)this,*(FName *)FVar6);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  FVar6 = MakePlatformKey((FName)local_res10,(FString *)param_1);
  pTVar7 = TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                   *)&this->PlatformValues,*(FName *)FVar6);
  if (pTVar7 == (TTuple<FName,TSharedPtr<IConsoleVariable,1>_> *)0x0) {
    __return_storage_ptr__->Object = (IConsoleVariable *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = *(IConsoleVariable **)&pTVar7->field_0x8;
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar7->field_0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HasPlatformValueVariable @ 1416474b0

bool __thiscall
FConsoleVariableExtendedData<int>::HasPlatformValueVariable
          (FConsoleVariableExtendedData<int> *this,FName param_1,FString *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  undefined1 *puVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  CheckForRemappedDP(&local_18,param_1,param_2);
  AcquireSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  FVar4 = MakePlatformKey((FName)local_res8,(FString *)param_1);
  lVar1 = *(longlong *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)&(this->PlatformValues).field_0x8 != *(int *)&(this->PlatformValues).field_0x34) {
    puVar5 = *(undefined1 **)&(this->PlatformValues).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->PlatformValues).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->PlatformValues).field_0x48 - 1U &
                              (int)((ulonglong)lVar1 >> 0x20) + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&this->PlatformValues) == lVar1)
        goto LAB_14164755b;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->PlatformValues);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14164755b:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return iVar3 != -1;
}

// HasPlatformValueVariable @ 1416475a0

bool __thiscall
FConsoleVariableExtendedData<float>::HasPlatformValueVariable
          (FConsoleVariableExtendedData<float> *this,FName param_1,FString *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  undefined1 *puVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  CheckForRemappedDP(&local_18,param_1,param_2);
  AcquireSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  FVar4 = MakePlatformKey((FName)local_res8,(FString *)param_1);
  lVar1 = *(longlong *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)&(this->PlatformValues).field_0x8 != *(int *)&(this->PlatformValues).field_0x34) {
    puVar5 = *(undefined1 **)&(this->PlatformValues).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->PlatformValues).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->PlatformValues).field_0x48 - 1U &
                              (int)((ulonglong)lVar1 >> 0x20) + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&this->PlatformValues) == lVar1)
        goto LAB_14164764b;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->PlatformValues);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14164764b:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return iVar3 != -1;
}

// HasPlatformValueVariable @ 141647690

bool __thiscall
FConsoleVariableExtendedData<FString>::HasPlatformValueVariable
          (FConsoleVariableExtendedData<FString> *this,FName param_1,FString *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  undefined1 *puVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  CheckForRemappedDP(&local_18,param_1,param_2);
  AcquireSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  FVar4 = MakePlatformKey((FName)local_res8,(FString *)param_1);
  lVar1 = *(longlong *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)&(this->PlatformValues).field_0x8 != *(int *)&(this->PlatformValues).field_0x34) {
    puVar5 = *(undefined1 **)&(this->PlatformValues).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->PlatformValues).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->PlatformValues).field_0x48 - 1U &
                              (int)((ulonglong)lVar1 >> 0x20) + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&this->PlatformValues) == lVar1)
        goto LAB_14164773b;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->PlatformValues);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14164773b:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return iVar3 != -1;
}

// HasPlatformValueVariable @ 141647780

bool __thiscall
FConsoleVariableExtendedData<bool>::HasPlatformValueVariable
          (FConsoleVariableExtendedData<bool> *this,FName param_1,FString *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  undefined1 *puVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  CheckForRemappedDP(&local_18,param_1,param_2);
  AcquireSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  FVar4 = MakePlatformKey((FName)local_res8,(FString *)param_1);
  lVar1 = *(longlong *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)&(this->PlatformValues).field_0x8 != *(int *)&(this->PlatformValues).field_0x34) {
    puVar5 = *(undefined1 **)&(this->PlatformValues).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->PlatformValues).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->PlatformValues).field_0x48 - 1U &
                              (int)((ulonglong)lVar1 >> 0x20) + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&this->PlatformValues) == lVar1)
        goto LAB_14164782b;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->PlatformValues);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14164782b:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PlatformValuesLock);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return iVar3 != -1;
}

// LogHistory @ 14164cf50

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableExtendedData<int>::LogHistory
          (FConsoleVariableExtendedData<int> *this,FOutputDevice *param_1)

{
  uint uVar1;
  EConsoleVariableFlags EVar2;
  FConsoleVariableHistory<int> *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FName *this_00;
  FScriptContainerElement *pFVar10;
  FName *pFVar11;
  FScriptContainerElement *pFVar12;
  uint auStackX_18 [2];
  undefined1 auStackX_20 [8];
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  
  pFVar3 = this->PriorityHistory;
  if (pFVar3 == (FConsoleVariableHistory<int> *)0x0) {
    return;
  }
  bVar6 = false;
  bVar5 = false;
  auStackX_18[0] = 0;
  FOutputDevice::Log(param_1,L"\nHISTORY");
  uVar1 = (pFVar3->History).Pairs.ArrayNum;
  uVar8 = (ulonglong)(int)uVar1;
  pFVar10 = (pFVar3->History).Pairs.AllocatorInstance.Data;
  pFVar9 = pFVar10 + uVar8 * 0x18;
  pFVar12 = pFVar10 + 0x10;
  do {
    if ((pFVar3->History).Pairs.ArrayNum != (int)uVar8) {
      auStackX_18[0] = auStackX_18[0] & 0xffffff00;
      `TCheckedPointerIterator<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStackX_18);
    }
    if (pFVar10 == pFVar9) {
      return;
    }
    EVar2 = *(EConsoleVariableFlags *)pFVar12;
    this_00 = *(FName **)(pFVar12 + -8);
    pFVar11 = this_00 + (longlong)(int)EVar2 * 2;
    while( true ) {
      if (*(EConsoleVariableFlags *)pFVar12 != EVar2) {
        auStackX_20[0] = 0;
        `TCheckedPointerIterator<TTuple<FName,TConsoleVariableData<int>_>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(auStackX_20);
      }
      if (this_00 == pFVar11) break;
      if (*this_00 != (FName)0x0) {
        ::FName::ToString(this_00,&FStack_58);
        bVar6 = true;
        bVar5 = true;
        ::FString::PrintfImpl(&FStack_68,L" [%s]");
      }
      bVar7 = IsInParallelGameThread();
      if (((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ::FString::PrintfImpl(&FStack_78,L"%d");
      GetConsoleVariableSetByName(*(EConsoleVariableFlags *)pFVar10);
      FOutputDevice::LogfImpl(param_1,L"%s: %s%s");
      if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
      if ((bVar6) &&
         (bVar6 = false, FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      }
      this_00 = this_00 + 2;
    }
    pFVar10 = pFVar10 + 0x18;
    uVar8 = (ulonglong)uVar1;
    pFVar12 = pFVar12 + 0x18;
  } while( true );
}

// LogHistory @ 14164cf70

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableExtendedData<float>::LogHistory
          (FConsoleVariableExtendedData<float> *this,FOutputDevice *param_1)

{
  uint uVar1;
  EConsoleVariableFlags EVar2;
  FConsoleVariableHistory<float> *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FName *this_00;
  FScriptContainerElement *pFVar10;
  FName *pFVar11;
  FScriptContainerElement *pFVar12;
  uint auStackX_18 [2];
  undefined1 auStackX_20 [8];
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  
  pFVar3 = this->PriorityHistory;
  if (pFVar3 == (FConsoleVariableHistory<float> *)0x0) {
    return;
  }
  bVar6 = false;
  bVar5 = false;
  auStackX_18[0] = 0;
  FOutputDevice::Log(param_1,L"\nHISTORY");
  uVar1 = (pFVar3->History).Pairs.ArrayNum;
  uVar8 = (ulonglong)(int)uVar1;
  pFVar10 = (pFVar3->History).Pairs.AllocatorInstance.Data;
  pFVar9 = pFVar10 + uVar8 * 0x18;
  pFVar12 = pFVar10 + 0x10;
  do {
    if ((pFVar3->History).Pairs.ArrayNum != (int)uVar8) {
      auStackX_18[0] = auStackX_18[0] & 0xffffff00;
      `TCheckedPointerIterator<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStackX_18);
    }
    if (pFVar10 == pFVar9) {
      return;
    }
    EVar2 = *(EConsoleVariableFlags *)pFVar12;
    this_00 = *(FName **)(pFVar12 + -8);
    pFVar11 = this_00 + (longlong)(int)EVar2 * 2;
    while( true ) {
      if (*(EConsoleVariableFlags *)pFVar12 != EVar2) {
        auStackX_20[0] = 0;
        `TCheckedPointerIterator<TTuple<FName,TConsoleVariableData<float>_>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(auStackX_20);
      }
      if (this_00 == pFVar11) break;
      if (*this_00 != (FName)0x0) {
        ::FName::ToString(this_00,&FStack_58);
        bVar6 = true;
        bVar5 = true;
        ::FString::PrintfImpl(&FStack_68,L" [%s]");
      }
      bVar7 = IsInParallelGameThread();
      if (((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ::FString::PrintfImpl(&FStack_78,L"%f");
      GetConsoleVariableSetByName(*(EConsoleVariableFlags *)pFVar10);
      FOutputDevice::LogfImpl(param_1,L"%s: %s%s");
      if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
      if ((bVar6) &&
         (bVar6 = false, FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      }
      this_00 = this_00 + 2;
    }
    pFVar10 = pFVar10 + 0x18;
    uVar8 = (ulonglong)uVar1;
    pFVar12 = pFVar12 + 0x18;
  } while( true );
}

// LogHistory @ 14164cf90

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableExtendedData<FString>::LogHistory
          (FConsoleVariableExtendedData<FString> *this,FOutputDevice *param_1)

{
  FName _Src;
  FConsoleVariableHistory<FString> *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  ForAnyElementType _Src_00;
  uint uVar5;
  FName *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FName *this_00;
  uint auStackX_18 [2];
  undefined1 auStackX_20 [8];
  ForAnyElementType FStack_a8;
  uint uStack_a0;
  int iStack_9c;
  ForAnyElementType FStack_98;
  uint uStack_90;
  int iStack_8c;
  EConsoleVariableFlags EStack_88;
  uint uStack_84;
  FScriptContainerElement *pFStack_80;
  FName *pFStack_78;
  FScriptContainerElement *pFStack_70;
  FString FStack_68;
  FString FStack_58;
  
  pFVar1 = this->PriorityHistory;
  if (pFVar1 == (FConsoleVariableHistory<FString> *)0x0) {
    return;
  }
  bVar4 = false;
  bVar3 = false;
  auStackX_18[0] = 0;
  FOutputDevice::Log(param_1,L"\nHISTORY");
  uStack_84 = (pFVar1->History).Pairs.ArrayNum;
  uVar9 = (ulonglong)(int)uStack_84;
  pFVar11 = (pFVar1->History).Pairs.AllocatorInstance.Data;
  pFStack_70 = pFVar11 + uVar9 * 0x18;
  pFVar12 = pFVar11 + 0x10;
  do {
    pFVar7 = pFStack_70;
    pFStack_80 = pFVar11;
    if ((pFVar1->History).Pairs.ArrayNum != (int)uVar9) {
      auStackX_18[0] = auStackX_18[0] & 0xffffff00;
      `TCheckedPointerIterator<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStackX_18);
    }
    if (pFVar11 == pFVar7) {
      return;
    }
    EStack_88 = *(EConsoleVariableFlags *)pFVar12;
    uVar9 = (ulonglong)(int)EStack_88;
    this_00 = *(FName **)(pFVar12 + -8);
    pFStack_78 = this_00 + uVar9 * 5;
    while( true ) {
      pFVar6 = pFStack_78;
      if (*(EConsoleVariableFlags *)pFVar12 != (EConsoleVariableFlags)uVar9) {
        auStackX_20[0] = 0;
        `TCheckedPointerIterator<TTuple<FName,TConsoleVariableData<FString>_>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(auStackX_20);
      }
      if (this_00 == pFVar6) break;
      if (*this_00 != (FName)0x0) {
        ::FName::ToString(this_00,&FStack_58);
        bVar4 = true;
        bVar3 = true;
        ::FString::PrintfImpl(&FStack_68,L" [%s]");
      }
      bVar8 = IsInParallelGameThread();
      if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uStack_90 = this_00[2].ComparisonIndex.Value;
      lVar10 = (longlong)(int)uStack_90;
      _Src = this_00[1];
      FStack_98.Data = (FScriptContainerElement *)0x0;
      if (uStack_90 == 0) {
        iStack_8c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uStack_90,0,&FStack_98,uStack_90,&iStack_8c);
        memcpy(FStack_98.Data,(void *)_Src,lVar10 * 2);
      }
      uVar5 = uStack_90;
      _Src_00.Data = FStack_98.Data;
      FStack_a8.Data = (FScriptContainerElement *)0x0;
      uStack_a0 = uStack_90;
      if (uStack_90 == 0) {
        iStack_9c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uStack_90,0,&FStack_a8,uStack_90,&iStack_9c);
        memcpy(FStack_a8.Data,_Src_00.Data,(longlong)(int)uVar5 * 2);
      }
      GetConsoleVariableSetByName(*(EConsoleVariableFlags *)pFStack_80);
      FOutputDevice::LogfImpl(param_1,L"%s: %s%s");
      if (FStack_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_a8.Data);
      }
      if (FStack_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_98.Data);
      }
      if ((bVar3) &&
         (bVar3 = false, FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
      if ((bVar4) &&
         (bVar4 = false, FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      }
      uVar9 = (ulonglong)EStack_88;
      this_00 = this_00 + 5;
    }
    pFVar11 = pFStack_80 + 0x18;
    uVar9 = (ulonglong)uStack_84;
    pFVar12 = pFVar12 + 0x18;
  } while( true );
}

// LogHistory @ 14164cfb0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableExtendedData<bool>::LogHistory
          (FConsoleVariableExtendedData<bool> *this,FOutputDevice *param_1)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  uint uVar3;
  EConsoleVariableFlags EVar4;
  FConsoleVariableHistory<bool> *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  FName *this_00;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  uint auStackX_18 [2];
  undefined1 auStackX_20 [8];
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  
  pFVar5 = this->PriorityHistory;
  if (pFVar5 == (FConsoleVariableHistory<bool> *)0x0) {
    return;
  }
  bVar8 = false;
  bVar7 = false;
  auStackX_18[0] = 0;
  FOutputDevice::Log(param_1,L"\nHISTORY");
  uVar3 = (pFVar5->History).Pairs.ArrayNum;
  uVar10 = (ulonglong)(int)uVar3;
  pFVar12 = (pFVar5->History).Pairs.AllocatorInstance.Data;
  pFVar1 = pFVar12 + uVar10 * 0x18;
  pFVar13 = pFVar12 + 0x10;
  do {
    if ((pFVar5->History).Pairs.ArrayNum != (int)uVar10) {
      auStackX_18[0] = auStackX_18[0] & 0xffffff00;
      `TCheckedPointerIterator<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStackX_18);
    }
    if (pFVar12 == pFVar1) {
      return;
    }
    EVar4 = *(EConsoleVariableFlags *)pFVar13;
    this_00 = *(FName **)(pFVar13 + -8);
    pFVar2 = (FName *)((longlong)this_00 + (longlong)(int)EVar4 * 0xc);
    while( true ) {
      if (*(EConsoleVariableFlags *)pFVar13 != EVar4) {
        auStackX_20[0] = 0;
        `TCheckedPointerIterator<TTuple<FName,TConsoleVariableData<bool>_>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(auStackX_20);
      }
      if (this_00 == pFVar2) break;
      if (*this_00 != (FName)0x0) {
        ::FName::ToString(this_00,&FStack_58);
        bVar8 = true;
        bVar7 = true;
        ::FString::PrintfImpl(&FStack_68,L" [%s]");
      }
      bVar9 = IsInParallelGameThread();
      if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pwVar11 = L"true";
      if ((char)this_00[1].ComparisonIndex.Value == '\0') {
        pwVar11 = L"false";
      }
      ::FString::FString(&FStack_78,pwVar11);
      GetConsoleVariableSetByName(*(EConsoleVariableFlags *)pFVar12);
      FOutputDevice::LogfImpl(param_1,L"%s: %s%s");
      if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
      }
      if ((bVar7) &&
         (bVar7 = false, FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
      if ((bVar8) &&
         (bVar8 = false, FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      }
      this_00 = (FName *)&this_00[1].Number;
    }
    pFVar12 = pFVar12 + 0x18;
    uVar10 = (ulonglong)uVar3;
    pFVar13 = pFVar13 + 0x18;
  } while( true );
}

// ResolveContext @ 141658290

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FResolvedContext * __thiscall
FConsoleVariableExtendedData<int>::ResolveContext
          (FConsoleVariableExtendedData<int> *this,FResolvedContext *__return_storage_ptr__,
          FSetContext *param_1)

{
  FScriptContainerElement *pFVar1;
  EConsoleVariableFlags EVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FName FVar7;
  undefined8 *puVar8;
  FResolvedContext *pFVar9;
  IConsoleManager *pIVar10;
  uint uVar11;
  wchar_t *pwVar12;
  FName this_00;
  FName FVar13;
  EConsoleVariableFlags EVar14;
  uint uVar15;
  void *local_58 [2];
  void *local_48 [2];
  
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
  (__return_storage_ptr__->Tag).ComparisonIndex = 0;
  (__return_storage_ptr__->Tag).Number = 0;
  EVar14 = ECVF_Default;
  __return_storage_ptr__->Flags = param_1->Flags;
  __return_storage_ptr__->Tag = param_1->Tag;
  if ((param_1->PriorityMode == ReplaceCurrent) || (param_1->TagMode == ReplaceCurrent)) {
    if (this->PriorityHistory == (FConsoleVariableHistory<int> *)0x0) {
      FVar7 = (FName)::operator_new(0x18);
      this_00 = FVar13;
      if (FVar7 != (FName)0x0) {
        *(undefined8 *)FVar7 = 0;
        *(undefined8 *)((longlong)FVar7 + 8) = 0;
        *(undefined8 *)((longlong)FVar7 + 0x10) = 0;
        this_00 = FVar7;
      }
      this->PriorityHistory = (FConsoleVariableHistory<int> *)this_00;
      puVar8 = (undefined8 *)(**(code **)(this->_padding_ + 0xd8))(this,local_58);
      if (*(int *)(puVar8 + 1) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)*puVar8;
      }
      FConsoleVariableHistory<int>::Track
                ((FConsoleVariableHistory<int> *)this_00,pwVar12,ECVF_Default,(FName)0x0);
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
    }
    EVar2 = param_1->MaxPriority;
    EVar14 = param_1->MinPriority;
    iVar3 = (this->PriorityHistory->History).Pairs.ArrayNum;
    pFVar4 = (this->PriorityHistory->History).Pairs.AllocatorInstance.Data;
    while (iVar3 = iVar3 + -1, iVar3 != -1) {
      pFVar1 = pFVar4 + (longlong)iVar3 * 0x18;
      if (0 < *(int *)(pFVar4 + (longlong)iVar3 * 0x18 + 0x10)) {
        if ((*(int *)pFVar1 <= (int)EVar2) && ((int)EVar14 <= *(int *)pFVar1)) {
          uVar11 = *(int *)(pFVar1 + 0x10) - 1;
          uVar15 = 0;
          if ((int)uVar11 < *(int *)(pFVar1 + 0x10)) {
            uVar15 = ~uVar11 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FResolvedContext *)(*pcVar5)();
            return pFVar9;
          }
          EVar14 = *(EConsoleVariableFlags *)pFVar1;
          if (*(EConsoleVariableFlags *)pFVar1 == ECVF_Default) {
            EVar14 = 0x1000000;
          }
          FVar13 = *(FName *)(*(longlong *)(pFVar1 + 8) + -0x10 +
                             (longlong)*(int *)(pFVar1 + 0x10) * 0x10);
          break;
        }
        if ((iVar3 == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index != static_cast<SizeType>(-1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                               ,0x2c0,L"Incrementing an invalid iterator is illegal"), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FResolvedContext *)(*pcVar5)();
          return pFVar9;
        }
      }
    }
  }
  if (((param_1->PriorityMode == ReplaceCurrent) &&
      (__return_storage_ptr__->Flags = param_1->Flags & (ECVF_SetFlagMask|ECVF_FlagMask) | EVar14,
      EVar14 == 0x1000000)) && (3 < (byte)LogConsoleManager._0_1_)) {
    pIVar10 = IConsoleManager::Get();
    (**(code **)((longlong)*pIVar10 + 0xd0))(pIVar10,local_48,this);
    UE::Logging::Private::BasicLog<4>
              (&`public:_virtual_struct_IConsoleVariable::FResolvedContext___cdecl_FConsoleVariableExtendedData<int>::ResolveContext(IConsoleVariable::FSetContext_const&___ptr64)___ptr64'
                ::__l15::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  if (param_1->TagMode == ReplaceCurrent) {
    __return_storage_ptr__->Tag = FVar13;
  }
  if (param_1->TagMode == Replace) {
    __return_storage_ptr__->Flags = __return_storage_ptr__->Flags | ECVF_Set_ReplaceExistingTag;
  }
  return __return_storage_ptr__;
}

// ResolveContext @ 141658580

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FResolvedContext * __thiscall
FConsoleVariableExtendedData<float>::ResolveContext
          (FConsoleVariableExtendedData<float> *this,FResolvedContext *__return_storage_ptr__,
          FSetContext *param_1)

{
  FScriptContainerElement *pFVar1;
  EConsoleVariableFlags EVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FName FVar7;
  undefined8 *puVar8;
  FResolvedContext *pFVar9;
  IConsoleManager *pIVar10;
  uint uVar11;
  wchar_t *pwVar12;
  FName this_00;
  FName FVar13;
  EConsoleVariableFlags EVar14;
  uint uVar15;
  void *local_58 [2];
  void *local_48 [2];
  
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
  (__return_storage_ptr__->Tag).ComparisonIndex = 0;
  (__return_storage_ptr__->Tag).Number = 0;
  EVar14 = ECVF_Default;
  __return_storage_ptr__->Flags = param_1->Flags;
  __return_storage_ptr__->Tag = param_1->Tag;
  if ((param_1->PriorityMode == ReplaceCurrent) || (param_1->TagMode == ReplaceCurrent)) {
    if (this->PriorityHistory == (FConsoleVariableHistory<float> *)0x0) {
      FVar7 = (FName)::operator_new(0x18);
      this_00 = FVar13;
      if (FVar7 != (FName)0x0) {
        *(undefined8 *)FVar7 = 0;
        *(undefined8 *)((longlong)FVar7 + 8) = 0;
        *(undefined8 *)((longlong)FVar7 + 0x10) = 0;
        this_00 = FVar7;
      }
      this->PriorityHistory = (FConsoleVariableHistory<float> *)this_00;
      puVar8 = (undefined8 *)(**(code **)(this->_padding_ + 0xd8))(this,local_58);
      if (*(int *)(puVar8 + 1) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)*puVar8;
      }
      FConsoleVariableHistory<float>::Track
                ((FConsoleVariableHistory<float> *)this_00,pwVar12,ECVF_Default,(FName)0x0);
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
    }
    EVar2 = param_1->MaxPriority;
    EVar14 = param_1->MinPriority;
    iVar3 = (this->PriorityHistory->History).Pairs.ArrayNum;
    pFVar4 = (this->PriorityHistory->History).Pairs.AllocatorInstance.Data;
    while (iVar3 = iVar3 + -1, iVar3 != -1) {
      pFVar1 = pFVar4 + (longlong)iVar3 * 0x18;
      if (0 < *(int *)(pFVar4 + (longlong)iVar3 * 0x18 + 0x10)) {
        if ((*(int *)pFVar1 <= (int)EVar2) && ((int)EVar14 <= *(int *)pFVar1)) {
          uVar11 = *(int *)(pFVar1 + 0x10) - 1;
          uVar15 = 0;
          if ((int)uVar11 < *(int *)(pFVar1 + 0x10)) {
            uVar15 = ~uVar11 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FResolvedContext *)(*pcVar5)();
            return pFVar9;
          }
          EVar14 = *(EConsoleVariableFlags *)pFVar1;
          if (*(EConsoleVariableFlags *)pFVar1 == ECVF_Default) {
            EVar14 = 0x1000000;
          }
          FVar13 = *(FName *)(*(longlong *)(pFVar1 + 8) + -0x10 +
                             (longlong)*(int *)(pFVar1 + 0x10) * 0x10);
          break;
        }
        if ((iVar3 == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index != static_cast<SizeType>(-1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                               ,0x2c0,L"Incrementing an invalid iterator is illegal"), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FResolvedContext *)(*pcVar5)();
          return pFVar9;
        }
      }
    }
  }
  if (((param_1->PriorityMode == ReplaceCurrent) &&
      (__return_storage_ptr__->Flags = param_1->Flags & (ECVF_SetFlagMask|ECVF_FlagMask) | EVar14,
      EVar14 == 0x1000000)) && (3 < (byte)LogConsoleManager._0_1_)) {
    pIVar10 = IConsoleManager::Get();
    (**(code **)((longlong)*pIVar10 + 0xd0))(pIVar10,local_48,this);
    UE::Logging::Private::BasicLog<4>
              (&`public:_virtual_struct_IConsoleVariable::FResolvedContext___cdecl_FConsoleVariableExtendedData<float>::ResolveContext(IConsoleVariable::FSetContext_const&___ptr64)___ptr64'
                ::__l15::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  if (param_1->TagMode == ReplaceCurrent) {
    __return_storage_ptr__->Tag = FVar13;
  }
  if (param_1->TagMode == Replace) {
    __return_storage_ptr__->Flags = __return_storage_ptr__->Flags | ECVF_Set_ReplaceExistingTag;
  }
  return __return_storage_ptr__;
}

// ResolveContext @ 141658870

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FResolvedContext * __thiscall
FConsoleVariableExtendedData<FString>::ResolveContext
          (FConsoleVariableExtendedData<FString> *this,FResolvedContext *__return_storage_ptr__,
          FSetContext *param_1)

{
  FScriptContainerElement *pFVar1;
  EConsoleVariableFlags EVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FName FVar7;
  undefined8 *puVar8;
  FResolvedContext *pFVar9;
  IConsoleManager *pIVar10;
  uint uVar11;
  wchar_t *pwVar12;
  FName this_00;
  FName FVar13;
  EConsoleVariableFlags EVar14;
  uint uVar15;
  void *local_58 [2];
  void *local_48 [2];
  
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
  (__return_storage_ptr__->Tag).ComparisonIndex = 0;
  (__return_storage_ptr__->Tag).Number = 0;
  EVar14 = ECVF_Default;
  __return_storage_ptr__->Flags = param_1->Flags;
  __return_storage_ptr__->Tag = param_1->Tag;
  if ((param_1->PriorityMode == ReplaceCurrent) || (param_1->TagMode == ReplaceCurrent)) {
    if (this->PriorityHistory == (FConsoleVariableHistory<FString> *)0x0) {
      FVar7 = (FName)::operator_new(0x18);
      this_00 = FVar13;
      if (FVar7 != (FName)0x0) {
        *(undefined8 *)FVar7 = 0;
        *(undefined8 *)((longlong)FVar7 + 8) = 0;
        *(undefined8 *)((longlong)FVar7 + 0x10) = 0;
        this_00 = FVar7;
      }
      this->PriorityHistory = (FConsoleVariableHistory<FString> *)this_00;
      puVar8 = (undefined8 *)(**(code **)(this->_padding_ + 0xd8))(this,local_58);
      if (*(int *)(puVar8 + 1) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)*puVar8;
      }
      FConsoleVariableHistory<FString>::Track
                ((FConsoleVariableHistory<FString> *)this_00,pwVar12,ECVF_Default,(FName)0x0);
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
    }
    EVar2 = param_1->MaxPriority;
    EVar14 = param_1->MinPriority;
    iVar3 = (this->PriorityHistory->History).Pairs.ArrayNum;
    pFVar4 = (this->PriorityHistory->History).Pairs.AllocatorInstance.Data;
    while (iVar3 = iVar3 + -1, iVar3 != -1) {
      pFVar1 = pFVar4 + (longlong)iVar3 * 0x18;
      if (0 < *(int *)(pFVar4 + (longlong)iVar3 * 0x18 + 0x10)) {
        if ((*(int *)pFVar1 <= (int)EVar2) && ((int)EVar14 <= *(int *)pFVar1)) {
          uVar11 = *(int *)(pFVar1 + 0x10) - 1;
          uVar15 = 0;
          if ((int)uVar11 < *(int *)(pFVar1 + 0x10)) {
            uVar15 = ~uVar11 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FResolvedContext *)(*pcVar5)();
            return pFVar9;
          }
          EVar14 = *(EConsoleVariableFlags *)pFVar1;
          if (*(EConsoleVariableFlags *)pFVar1 == ECVF_Default) {
            EVar14 = 0x1000000;
          }
          FVar13 = *(FName *)(*(longlong *)(pFVar1 + 8) + -0x28 +
                             (longlong)*(int *)(pFVar1 + 0x10) * 0x28);
          break;
        }
        if ((iVar3 == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index != static_cast<SizeType>(-1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                               ,0x2c0,L"Incrementing an invalid iterator is illegal"), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FResolvedContext *)(*pcVar5)();
          return pFVar9;
        }
      }
    }
  }
  if (((param_1->PriorityMode == ReplaceCurrent) &&
      (__return_storage_ptr__->Flags = param_1->Flags & (ECVF_SetFlagMask|ECVF_FlagMask) | EVar14,
      EVar14 == 0x1000000)) && (3 < (byte)LogConsoleManager._0_1_)) {
    pIVar10 = IConsoleManager::Get();
    (**(code **)((longlong)*pIVar10 + 0xd0))(pIVar10,local_48,this);
    UE::Logging::Private::BasicLog<4>
              (&`public:_virtual_struct_IConsoleVariable::FResolvedContext___cdecl_FConsoleVariableExtendedData<FString>::ResolveContext(IConsoleVariable::FSetContext_const&___ptr64)___ptr64'
                ::__l15::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  if (param_1->TagMode == ReplaceCurrent) {
    __return_storage_ptr__->Tag = FVar13;
  }
  if (param_1->TagMode == Replace) {
    __return_storage_ptr__->Flags = __return_storage_ptr__->Flags | ECVF_Set_ReplaceExistingTag;
  }
  return __return_storage_ptr__;
}

// ResolveContext @ 141658b60

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FResolvedContext * __thiscall
FConsoleVariableExtendedData<bool>::ResolveContext
          (FConsoleVariableExtendedData<bool> *this,FResolvedContext *__return_storage_ptr__,
          FSetContext *param_1)

{
  FScriptContainerElement *pFVar1;
  EConsoleVariableFlags EVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FName FVar7;
  undefined8 *puVar8;
  FResolvedContext *pFVar9;
  IConsoleManager *pIVar10;
  uint uVar11;
  wchar_t *pwVar12;
  FName this_00;
  FName FVar13;
  EConsoleVariableFlags EVar14;
  uint uVar15;
  void *local_58 [2];
  void *local_48 [2];
  
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
  (__return_storage_ptr__->Tag).ComparisonIndex = 0;
  (__return_storage_ptr__->Tag).Number = 0;
  EVar14 = ECVF_Default;
  __return_storage_ptr__->Flags = param_1->Flags;
  __return_storage_ptr__->Tag = param_1->Tag;
  if ((param_1->PriorityMode == ReplaceCurrent) || (param_1->TagMode == ReplaceCurrent)) {
    if (this->PriorityHistory == (FConsoleVariableHistory<bool> *)0x0) {
      FVar7 = (FName)::operator_new(0x18);
      this_00 = FVar13;
      if (FVar7 != (FName)0x0) {
        *(undefined8 *)FVar7 = 0;
        *(undefined8 *)((longlong)FVar7 + 8) = 0;
        *(undefined8 *)((longlong)FVar7 + 0x10) = 0;
        this_00 = FVar7;
      }
      this->PriorityHistory = (FConsoleVariableHistory<bool> *)this_00;
      puVar8 = (undefined8 *)(**(code **)(this->_padding_ + 0xd8))(this,local_58);
      if (*(int *)(puVar8 + 1) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)*puVar8;
      }
      FConsoleVariableHistory<bool>::Track
                ((FConsoleVariableHistory<bool> *)this_00,pwVar12,ECVF_Default,(FName)0x0);
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
    }
    EVar2 = param_1->MaxPriority;
    EVar14 = param_1->MinPriority;
    iVar3 = (this->PriorityHistory->History).Pairs.ArrayNum;
    pFVar4 = (this->PriorityHistory->History).Pairs.AllocatorInstance.Data;
    while (iVar3 = iVar3 + -1, iVar3 != -1) {
      pFVar1 = pFVar4 + (longlong)iVar3 * 0x18;
      if (0 < *(int *)(pFVar4 + (longlong)iVar3 * 0x18 + 0x10)) {
        if ((*(int *)pFVar1 <= (int)EVar2) && ((int)EVar14 <= *(int *)pFVar1)) {
          uVar11 = *(int *)(pFVar1 + 0x10) - 1;
          uVar15 = 0;
          if ((int)uVar11 < *(int *)(pFVar1 + 0x10)) {
            uVar15 = ~uVar11 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FResolvedContext *)(*pcVar5)();
            return pFVar9;
          }
          EVar14 = *(EConsoleVariableFlags *)pFVar1;
          if (*(EConsoleVariableFlags *)pFVar1 == ECVF_Default) {
            EVar14 = 0x1000000;
          }
          FVar13 = *(FName *)(*(longlong *)(pFVar1 + 8) + -0xc +
                             (longlong)*(int *)(pFVar1 + 0x10) * 0xc);
          break;
        }
        if ((iVar3 == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index != static_cast<SizeType>(-1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                               ,0x2c0,L"Incrementing an invalid iterator is illegal"), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FResolvedContext *)(*pcVar5)();
          return pFVar9;
        }
      }
    }
  }
  if (((param_1->PriorityMode == ReplaceCurrent) &&
      (__return_storage_ptr__->Flags = param_1->Flags & (ECVF_SetFlagMask|ECVF_FlagMask) | EVar14,
      EVar14 == 0x1000000)) && (3 < (byte)LogConsoleManager._0_1_)) {
    pIVar10 = IConsoleManager::Get();
    (**(code **)((longlong)*pIVar10 + 0xd0))(pIVar10,local_48,this);
    UE::Logging::Private::BasicLog<4>
              (&`public:_virtual_struct_IConsoleVariable::FResolvedContext___cdecl_FConsoleVariableExtendedData<bool>::ResolveContext(IConsoleVariable::FSetContext_const&___ptr64)___ptr64'
                ::__l15::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  if (param_1->TagMode == ReplaceCurrent) {
    __return_storage_ptr__->Tag = FVar13;
  }
  if (param_1->TagMode == Replace) {
    __return_storage_ptr__->Flags = __return_storage_ptr__->Flags | ECVF_Set_ReplaceExistingTag;
  }
  return __return_storage_ptr__;
}

// SetInternalAndUpdateState @ 14165da60

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableExtendedData<FString>::SetInternalAndUpdateState
          (FConsoleVariableExtendedData<FString> *this,FString *param_1,
          EConsoleVariableFlags param_2)

{
  (**(code **)(this->_padding_ + 0x138))();
                    /* WARNING: Could not recover jumptable at 0x00014165da8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x128))(this,param_2,1);
  return;
}

// SetOtherPlatformValue @ 14165e1e0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableExtendedData<int>::SetOtherPlatformValue
          (FConsoleVariableExtendedData<int> *this,wchar_t *param_1,EConsoleVariableFlags param_2,
          FName param_3)

{
  longlong lVar1;
  bool bVar2;
  EConsoleVariableFlags EVar3;
  wchar_t *_Str;
  int local_18 [4];
  
  bVar2 = TrackHistory(this,param_1,param_2,param_3);
  if (bVar2) {
    EVar3 = (**(code **)(this->_padding_ + 0x18))(this);
    if ((EVar3 & ECVF_SetByMask) <= (param_2 & ECVF_SetByMask)) {
      _Str = UE::ConfigUtilities::ConvertValueFromHumanFriendlyValue(param_1);
      local_18[0] = _wtoi(_Str);
      (**(code **)(this->_padding_ + 0x138))(this,local_18,param_2 | ECVF_Set_SetOnly_Unsafe);
      (**(code **)(this->_padding_ + 0x128))(this,param_2 | ECVF_Set_SetOnly_Unsafe,1);
      lVar1 = this->_padding_;
      EVar3 = (**(code **)(lVar1 + 0x18))(this);
      (**(code **)(lVar1 + 0x20))
                (this,EVar3 & (ECVF_SetFlagMask|ECVF_FlagMask) | param_2 & ECVF_SetByMask);
    }
  }
  return;
}

// SetOtherPlatformValue @ 14165e2a0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableExtendedData<float>::SetOtherPlatformValue
          (FConsoleVariableExtendedData<float> *this,wchar_t *param_1,EConsoleVariableFlags param_2,
          FName param_3)

{
  longlong lVar1;
  bool bVar2;
  EConsoleVariableFlags EVar3;
  wchar_t *_Str;
  double dVar4;
  float local_28 [2];
  char **local_20;
  char *local_18;
  undefined8 local_10;
  
  bVar2 = TrackHistory(this,param_1,param_2,param_3);
  if (bVar2) {
    EVar3 = (**(code **)(this->_padding_ + 0x18))(this);
    if ((EVar3 & ECVF_SetByMask) <= (param_2 & ECVF_SetByMask)) {
      _Str = UE::ConfigUtilities::ConvertValueFromHumanFriendlyValue(param_1);
      local_18 = (char *)0x0;
      local_10 = 0;
      local_20 = &local_18;
      `UE::ConsoleManager::Private::FConsoleManagerLocaleScope::FConsoleManagerLocaleScope'::__l2::
      <lambda_2>::operator()(&local_20);
      dVar4 = _wtof(_Str);
      local_28[0] = (float)dVar4;
      setlocale(4,local_18);
      if (local_18 != (char *)0x0) {
        FMemory::Free(local_18);
      }
      (**(code **)(this->_padding_ + 0x138))(this,local_28,param_2 | ECVF_Set_SetOnly_Unsafe);
      (**(code **)(this->_padding_ + 0x128))(this,param_2 | ECVF_Set_SetOnly_Unsafe,1);
      lVar1 = this->_padding_;
      EVar3 = (**(code **)(lVar1 + 0x18))(this);
      (**(code **)(lVar1 + 0x20))
                (this,EVar3 & (ECVF_SetFlagMask|ECVF_FlagMask) | param_2 & ECVF_SetByMask);
    }
  }
  return;
}

// SetOtherPlatformValue @ 14165e3b0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableExtendedData<FString>::SetOtherPlatformValue
          (FConsoleVariableExtendedData<FString> *this,wchar_t *param_1,
          EConsoleVariableFlags param_2,FName param_3)

{
  longlong lVar1;
  bool bVar2;
  EConsoleVariableFlags EVar3;
  wchar_t *pwVar4;
  FString local_18;
  
  bVar2 = TrackHistory(this,param_1,param_2,param_3);
  if (bVar2) {
    EVar3 = (**(code **)(this->_padding_ + 0x18))(this);
    if ((EVar3 & ECVF_SetByMask) <= (param_2 & ECVF_SetByMask)) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      pwVar4 = UE::ConfigUtilities::ConvertValueFromHumanFriendlyValue(param_1);
      ::FString::operator=(&local_18,pwVar4);
      (**(code **)(this->_padding_ + 0x138))(this,&local_18,param_2 | ECVF_Set_SetOnly_Unsafe);
      (**(code **)(this->_padding_ + 0x128))(this,param_2 | ECVF_Set_SetOnly_Unsafe,1);
      lVar1 = this->_padding_;
      EVar3 = (**(code **)(lVar1 + 0x18))(this);
      (**(code **)(lVar1 + 0x20))
                (this,EVar3 & (ECVF_SetFlagMask|ECVF_FlagMask) | param_2 & ECVF_SetByMask);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetOtherPlatformValue @ 14165e480

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableExtendedData<bool>::SetOtherPlatformValue
          (FConsoleVariableExtendedData<bool> *this,wchar_t *param_1,EConsoleVariableFlags param_2,
          FName param_3)

{
  longlong lVar1;
  bool bVar2;
  EConsoleVariableFlags EVar3;
  wchar_t *pwVar4;
  undefined1 local_18 [16];
  
  bVar2 = TrackHistory(this,param_1,param_2,param_3);
  if (bVar2) {
    EVar3 = (**(code **)(this->_padding_ + 0x18))(this);
    if ((EVar3 & ECVF_SetByMask) <= (param_2 & ECVF_SetByMask)) {
      pwVar4 = UE::ConfigUtilities::ConvertValueFromHumanFriendlyValue(param_1);
      local_18[0] = FToBoolHelper::FromCStringWide(pwVar4);
      (**(code **)(this->_padding_ + 0x138))(this,local_18,param_2 | ECVF_Set_SetOnly_Unsafe);
      (**(code **)(this->_padding_ + 0x128))(this,param_2 | ECVF_Set_SetOnly_Unsafe,1);
      lVar1 = this->_padding_;
      EVar3 = (**(code **)(lVar1 + 0x18))(this);
      (**(code **)(lVar1 + 0x20))
                (this,EVar3 & (ECVF_SetFlagMask|ECVF_FlagMask) | param_2 & ECVF_SetByMask);
    }
  }
  return;
}

// TrackHistory @ 141665370

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

bool __thiscall
FConsoleVariableExtendedData<int>::TrackHistory
          (FConsoleVariableExtendedData<int> *this,wchar_t *param_1,EConsoleVariableFlags param_2,
          FName param_3)

{
  bool bVar1;
  FConsoleVariableHistory<int> *pFVar2;
  undefined8 *puVar3;
  TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>
  *pTVar4;
  FConsoleVariableHistory<int> *pFVar5;
  FConsoleVariableHistory<int> *pFVar6;
  TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator> *this_00;
  wchar_t *pwVar7;
  FName local_res8;
  FName local_res20;
  FConsoleVariableHistory<int> *local_38;
  FConsoleVariableExtendedData<int> *local_30;
  FConsoleVariableHistory<int> **local_28;
  
  pFVar6 = (FConsoleVariableHistory<int> *)0x0;
  local_res20 = param_3;
  if (this->PriorityHistory == (FConsoleVariableHistory<int> *)0x0) {
    pFVar2 = ::operator_new(0x18);
    pFVar5 = pFVar6;
    if (pFVar2 != (FConsoleVariableHistory<int> *)0x0) {
      (pFVar2->History).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar2->History).Pairs.ArrayNum = 0;
      (pFVar2->History).Pairs.ArrayMax = 0;
      *(undefined8 *)&pFVar2->bHasTaggedArrayData = 0;
      pFVar5 = pFVar2;
    }
    this->PriorityHistory = pFVar5;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    puVar3 = (undefined8 *)(**(code **)(this->_padding_ + 0xd8))(this,&local_30);
    if (*(int *)(puVar3 + 1) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)*puVar3;
    }
    FConsoleVariableHistory<int>::Track(pFVar5,pwVar7,ECVF_Default,local_res8);
    if (local_30 != (FConsoleVariableExtendedData<int> *)0x0) {
      FMemory::Free(local_30);
    }
  }
  bVar1 = FConsoleVariableHistory<int>::Track(this->PriorityHistory,param_1,param_2,local_res20);
  if (bVar1) {
    if (local_res20 != (FName)0x0) {
      pTVar4 = TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
                       *)&UE::ConsoleManager::Private::TaggedCVars,local_res20);
      if ((pTVar4 == (TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>
                      *)0x0) ||
         (this_00 = *(TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>
                      **)&pTVar4->field_0x8,
         this_00 ==
         (TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator> *)0x0)
         ) {
        pFVar5 = ::operator_new(0x50);
        if (pFVar5 != (FConsoleVariableHistory<int> *)0x0) {
          *(undefined8 *)&pFVar5->bHasTaggedArrayData = 0;
          pFVar5[1].History.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar5[2].History.Pairs.ArrayNum = 0;
          pFVar5[2].History.Pairs.ArrayMax = 0;
          pFVar5[3].History.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar5->History).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar5->History).Pairs.ArrayNum = 0;
          (pFVar5->History).Pairs.ArrayMax = 0;
          pFVar5[1].History.Pairs.ArrayNum = 0;
          pFVar5[1].History.Pairs.ArrayMax = 0;
          *(undefined4 *)&pFVar5[1].bHasTaggedArrayData = 0;
          *(undefined4 *)&pFVar5[1].field_0x14 = 0x80;
          *(undefined4 *)&pFVar5[2].History.Pairs.AllocatorInstance.Data = 0xffffffff;
          *(undefined4 *)((longlong)&pFVar5[2].History.Pairs.AllocatorInstance.Data + 4) = 0;
          *(undefined8 *)&pFVar5[2].bHasTaggedArrayData = 0;
          pFVar6 = pFVar5;
        }
        local_30 = (FConsoleVariableExtendedData<int> *)&local_res20;
        local_28 = &local_38;
        local_38 = pFVar6;
        TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FName_const_&,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*_&&>_>
                  ((TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
                    *)&UE::ConsoleManager::Private::TaggedCVars,
                   (TPairInitializer<FName_const_&,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*_&&>
                    *)&local_res8,(bool *)&local_30);
        this_00 = *(TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>
                    **)(UE::ConsoleManager::Private::TaggedCVars._0_8_ + 8 +
                       (longlong)(int)local_res8.ComparisonIndex.Value * 0x18);
      }
      local_30 = this;
      TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>::
      Emplace<IConsoleVariable_*>(this_00,(IConsoleVariable **)&local_res8,(bool *)&local_30);
      this->PriorityHistory->bHasTaggedArrayData = true;
    }
    return true;
  }
  return false;
}

// TrackHistory @ 141665540

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

bool __thiscall
FConsoleVariableExtendedData<float>::TrackHistory
          (FConsoleVariableExtendedData<float> *this,wchar_t *param_1,EConsoleVariableFlags param_2,
          FName param_3)

{
  bool bVar1;
  FConsoleVariableHistory<float> *pFVar2;
  undefined8 *puVar3;
  TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>
  *pTVar4;
  FConsoleVariableHistory<float> *pFVar5;
  FConsoleVariableHistory<float> *pFVar6;
  TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator> *this_00;
  wchar_t *pwVar7;
  FName local_res8;
  FName local_res20;
  FConsoleVariableHistory<float> *local_38;
  FConsoleVariableExtendedData<float> *local_30;
  FConsoleVariableHistory<float> **local_28;
  
  pFVar6 = (FConsoleVariableHistory<float> *)0x0;
  local_res20 = param_3;
  if (this->PriorityHistory == (FConsoleVariableHistory<float> *)0x0) {
    pFVar2 = ::operator_new(0x18);
    pFVar5 = pFVar6;
    if (pFVar2 != (FConsoleVariableHistory<float> *)0x0) {
      (pFVar2->History).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar2->History).Pairs.ArrayNum = 0;
      (pFVar2->History).Pairs.ArrayMax = 0;
      *(undefined8 *)&pFVar2->bHasTaggedArrayData = 0;
      pFVar5 = pFVar2;
    }
    this->PriorityHistory = pFVar5;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    puVar3 = (undefined8 *)(**(code **)(this->_padding_ + 0xd8))(this,&local_30);
    if (*(int *)(puVar3 + 1) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)*puVar3;
    }
    FConsoleVariableHistory<float>::Track(pFVar5,pwVar7,ECVF_Default,local_res8);
    if (local_30 != (FConsoleVariableExtendedData<float> *)0x0) {
      FMemory::Free(local_30);
    }
  }
  bVar1 = FConsoleVariableHistory<float>::Track(this->PriorityHistory,param_1,param_2,local_res20);
  if (bVar1) {
    if (local_res20 != (FName)0x0) {
      pTVar4 = TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
                       *)&UE::ConsoleManager::Private::TaggedCVars,local_res20);
      if ((pTVar4 == (TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>
                      *)0x0) ||
         (this_00 = *(TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>
                      **)&pTVar4->field_0x8,
         this_00 ==
         (TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator> *)0x0)
         ) {
        pFVar5 = ::operator_new(0x50);
        if (pFVar5 != (FConsoleVariableHistory<float> *)0x0) {
          *(undefined8 *)&pFVar5->bHasTaggedArrayData = 0;
          pFVar5[1].History.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar5[2].History.Pairs.ArrayNum = 0;
          pFVar5[2].History.Pairs.ArrayMax = 0;
          pFVar5[3].History.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar5->History).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar5->History).Pairs.ArrayNum = 0;
          (pFVar5->History).Pairs.ArrayMax = 0;
          pFVar5[1].History.Pairs.ArrayNum = 0;
          pFVar5[1].History.Pairs.ArrayMax = 0;
          *(undefined4 *)&pFVar5[1].bHasTaggedArrayData = 0;
          *(undefined4 *)&pFVar5[1].field_0x14 = 0x80;
          *(undefined4 *)&pFVar5[2].History.Pairs.AllocatorInstance.Data = 0xffffffff;
          *(undefined4 *)((longlong)&pFVar5[2].History.Pairs.AllocatorInstance.Data + 4) = 0;
          *(undefined8 *)&pFVar5[2].bHasTaggedArrayData = 0;
          pFVar6 = pFVar5;
        }
        local_30 = (FConsoleVariableExtendedData<float> *)&local_res20;
        local_28 = &local_38;
        local_38 = pFVar6;
        TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FName_const_&,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*_&&>_>
                  ((TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
                    *)&UE::ConsoleManager::Private::TaggedCVars,
                   (TPairInitializer<FName_const_&,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*_&&>
                    *)&local_res8,(bool *)&local_30);
        this_00 = *(TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>
                    **)(UE::ConsoleManager::Private::TaggedCVars._0_8_ + 8 +
                       (longlong)(int)local_res8.ComparisonIndex.Value * 0x18);
      }
      local_30 = this;
      TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>::
      Emplace<IConsoleVariable_*>(this_00,(IConsoleVariable **)&local_res8,(bool *)&local_30);
      this->PriorityHistory->bHasTaggedArrayData = true;
    }
    return true;
  }
  return false;
}

// TrackHistory @ 141665710

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

bool __thiscall
FConsoleVariableExtendedData<FString>::TrackHistory
          (FConsoleVariableExtendedData<FString> *this,wchar_t *param_1,
          EConsoleVariableFlags param_2,FName param_3)

{
  bool bVar1;
  FConsoleVariableHistory<FString> *pFVar2;
  undefined8 *puVar3;
  TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>
  *pTVar4;
  FConsoleVariableHistory<FString> *pFVar5;
  FConsoleVariableHistory<FString> *pFVar6;
  TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator> *this_00;
  wchar_t *pwVar7;
  FName local_res8;
  FName local_res20;
  FConsoleVariableHistory<FString> *local_38;
  FConsoleVariableExtendedData<FString> *local_30;
  FConsoleVariableHistory<FString> **local_28;
  
  pFVar6 = (FConsoleVariableHistory<FString> *)0x0;
  local_res20 = param_3;
  if (this->PriorityHistory == (FConsoleVariableHistory<FString> *)0x0) {
    pFVar2 = ::operator_new(0x18);
    pFVar5 = pFVar6;
    if (pFVar2 != (FConsoleVariableHistory<FString> *)0x0) {
      (pFVar2->History).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar2->History).Pairs.ArrayNum = 0;
      (pFVar2->History).Pairs.ArrayMax = 0;
      *(undefined8 *)&pFVar2->bHasTaggedArrayData = 0;
      pFVar5 = pFVar2;
    }
    this->PriorityHistory = pFVar5;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    puVar3 = (undefined8 *)(**(code **)(this->_padding_ + 0xd8))(this,&local_30);
    if (*(int *)(puVar3 + 1) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)*puVar3;
    }
    FConsoleVariableHistory<FString>::Track(pFVar5,pwVar7,ECVF_Default,local_res8);
    if (local_30 != (FConsoleVariableExtendedData<FString> *)0x0) {
      FMemory::Free(local_30);
    }
  }
  bVar1 = FConsoleVariableHistory<FString>::Track(this->PriorityHistory,param_1,param_2,local_res20)
  ;
  if (bVar1) {
    if (local_res20 != (FName)0x0) {
      pTVar4 = TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
                       *)&UE::ConsoleManager::Private::TaggedCVars,local_res20);
      if ((pTVar4 == (TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>
                      *)0x0) ||
         (this_00 = *(TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>
                      **)&pTVar4->field_0x8,
         this_00 ==
         (TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator> *)0x0)
         ) {
        pFVar5 = ::operator_new(0x50);
        if (pFVar5 != (FConsoleVariableHistory<FString> *)0x0) {
          *(undefined8 *)&pFVar5->bHasTaggedArrayData = 0;
          pFVar5[1].History.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar5[2].History.Pairs.ArrayNum = 0;
          pFVar5[2].History.Pairs.ArrayMax = 0;
          pFVar5[3].History.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar5->History).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar5->History).Pairs.ArrayNum = 0;
          (pFVar5->History).Pairs.ArrayMax = 0;
          pFVar5[1].History.Pairs.ArrayNum = 0;
          pFVar5[1].History.Pairs.ArrayMax = 0;
          *(undefined4 *)&pFVar5[1].bHasTaggedArrayData = 0;
          *(undefined4 *)&pFVar5[1].field_0x14 = 0x80;
          *(undefined4 *)&pFVar5[2].History.Pairs.AllocatorInstance.Data = 0xffffffff;
          *(undefined4 *)((longlong)&pFVar5[2].History.Pairs.AllocatorInstance.Data + 4) = 0;
          *(undefined8 *)&pFVar5[2].bHasTaggedArrayData = 0;
          pFVar6 = pFVar5;
        }
        local_30 = (FConsoleVariableExtendedData<FString> *)&local_res20;
        local_28 = &local_38;
        local_38 = pFVar6;
        TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FName_const_&,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*_&&>_>
                  ((TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
                    *)&UE::ConsoleManager::Private::TaggedCVars,
                   (TPairInitializer<FName_const_&,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*_&&>
                    *)&local_res8,(bool *)&local_30);
        this_00 = *(TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>
                    **)(UE::ConsoleManager::Private::TaggedCVars._0_8_ + 8 +
                       (longlong)(int)local_res8.ComparisonIndex.Value * 0x18);
      }
      local_30 = this;
      TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>::
      Emplace<IConsoleVariable_*>(this_00,(IConsoleVariable **)&local_res8,(bool *)&local_30);
      this->PriorityHistory->bHasTaggedArrayData = true;
    }
    return true;
  }
  return false;
}

// TrackHistory @ 1416658e0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

bool __thiscall
FConsoleVariableExtendedData<bool>::TrackHistory
          (FConsoleVariableExtendedData<bool> *this,wchar_t *param_1,EConsoleVariableFlags param_2,
          FName param_3)

{
  bool bVar1;
  FConsoleVariableHistory<bool> *pFVar2;
  undefined8 *puVar3;
  TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>
  *pTVar4;
  FConsoleVariableHistory<bool> *pFVar5;
  FConsoleVariableHistory<bool> *pFVar6;
  TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator> *this_00;
  wchar_t *pwVar7;
  FName local_res8;
  FName local_res20;
  FConsoleVariableHistory<bool> *local_38;
  FConsoleVariableExtendedData<bool> *local_30;
  FConsoleVariableHistory<bool> **local_28;
  
  pFVar6 = (FConsoleVariableHistory<bool> *)0x0;
  local_res20 = param_3;
  if (this->PriorityHistory == (FConsoleVariableHistory<bool> *)0x0) {
    pFVar2 = ::operator_new(0x18);
    pFVar5 = pFVar6;
    if (pFVar2 != (FConsoleVariableHistory<bool> *)0x0) {
      (pFVar2->History).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar2->History).Pairs.ArrayNum = 0;
      (pFVar2->History).Pairs.ArrayMax = 0;
      *(undefined8 *)&pFVar2->bHasTaggedArrayData = 0;
      pFVar5 = pFVar2;
    }
    this->PriorityHistory = pFVar5;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    puVar3 = (undefined8 *)(**(code **)(this->_padding_ + 0xd8))(this,&local_30);
    if (*(int *)(puVar3 + 1) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)*puVar3;
    }
    FConsoleVariableHistory<bool>::Track(pFVar5,pwVar7,ECVF_Default,local_res8);
    if (local_30 != (FConsoleVariableExtendedData<bool> *)0x0) {
      FMemory::Free(local_30);
    }
  }
  bVar1 = FConsoleVariableHistory<bool>::Track(this->PriorityHistory,param_1,param_2,local_res20);
  if (bVar1) {
    if (local_res20 != (FName)0x0) {
      pTVar4 = TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
                       *)&UE::ConsoleManager::Private::TaggedCVars,local_res20);
      if ((pTVar4 == (TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>
                      *)0x0) ||
         (this_00 = *(TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>
                      **)&pTVar4->field_0x8,
         this_00 ==
         (TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator> *)0x0)
         ) {
        pFVar5 = ::operator_new(0x50);
        if (pFVar5 != (FConsoleVariableHistory<bool> *)0x0) {
          *(undefined8 *)&pFVar5->bHasTaggedArrayData = 0;
          pFVar5[1].History.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar5[2].History.Pairs.ArrayNum = 0;
          pFVar5[2].History.Pairs.ArrayMax = 0;
          pFVar5[3].History.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar5->History).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar5->History).Pairs.ArrayNum = 0;
          (pFVar5->History).Pairs.ArrayMax = 0;
          pFVar5[1].History.Pairs.ArrayNum = 0;
          pFVar5[1].History.Pairs.ArrayMax = 0;
          *(undefined4 *)&pFVar5[1].bHasTaggedArrayData = 0;
          *(undefined4 *)&pFVar5[1].field_0x14 = 0x80;
          *(undefined4 *)&pFVar5[2].History.Pairs.AllocatorInstance.Data = 0xffffffff;
          *(undefined4 *)((longlong)&pFVar5[2].History.Pairs.AllocatorInstance.Data + 4) = 0;
          *(undefined8 *)&pFVar5[2].bHasTaggedArrayData = 0;
          pFVar6 = pFVar5;
        }
        local_30 = (FConsoleVariableExtendedData<bool> *)&local_res20;
        local_28 = &local_38;
        local_38 = pFVar6;
        TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FName_const_&,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*_&&>_>
                  ((TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
                    *)&UE::ConsoleManager::Private::TaggedCVars,
                   (TPairInitializer<FName_const_&,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*_&&>
                    *)&local_res8,(bool *)&local_30);
        this_00 = *(TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>
                    **)(UE::ConsoleManager::Private::TaggedCVars._0_8_ + 8 +
                       (longlong)(int)local_res8.ComparisonIndex.Value * 0x18);
      }
      local_30 = this;
      TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>::
      Emplace<IConsoleVariable_*>(this_00,(IConsoleVariable **)&local_res8,(bool *)&local_30);
      this->PriorityHistory->bHasTaggedArrayData = true;
    }
    return true;
  }
  return false;
}

// Unset @ 141667020

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleVariableExtendedData<int>::Unset
          (FConsoleVariableExtendedData<int> *this,EConsoleVariableFlags param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  IConsoleManager *pIVar8;
  uint uVar9;
  uint uVar10;
  TConsoleVariableData<int> *pTVar11;
  uint uVar12;
  int local_res8 [2];
  FString local_38;
  void *local_28 [2];
  
  if (this->PriorityHistory != (FConsoleVariableHistory<int> *)0x0) {
    uVar12 = 0xff000000;
    if (param_1 == ECVF_SetByMask) {
      (**(code **)(this->_padding_ + 0xb8))(this,0);
      (**(code **)(this->_padding_ + 0xb8))(this,0x2000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x3000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x4000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x5000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x6000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x7000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x8000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x9000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xa000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xb000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xc000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xd000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xe000000,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014166717e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0xb8))(this,0xf000000,param_2);
      return;
    }
    bVar6 = FConsoleVariableHistory<int>::Unset(this->PriorityHistory,param_1,param_2);
    if ((bVar6) &&
       (((EConsoleVariableFlags)this->_padding_ & ECVF_SetByMask) <= (param_1 & ECVF_SetByMask))) {
      pFVar3 = (this->PriorityHistory->History).Pairs.AllocatorInstance.Data;
      iVar2 = (this->PriorityHistory->History).Pairs.ArrayNum;
      while (iVar2 = iVar2 + -1, iVar2 != -1) {
        pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
        if (0 < *(int *)(pFVar3 + (longlong)iVar2 * 0x18 + 0x10)) {
          uVar12 = *(uint *)pFVar1;
          uVar10 = *(int *)(pFVar1 + 0x10) - 1;
          uVar9 = 0;
          if ((int)uVar10 < *(int *)(pFVar1 + 0x10)) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar11 = (TConsoleVariableData<int> *)
                    (*(longlong *)(pFVar1 + 8) + (longlong)(*(int *)(pFVar1 + 0x10) + -1) * 0x10 + 8
                    );
          goto LAB_14166724b;
        }
        if ((iVar2 == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index != static_cast<SizeType>(-1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                               ,0x2c0,L"Incrementing an invalid iterator is illegal"), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_class_TConsoleVariableData<int>_const&___ptr64___cdecl_FConsoleVariableHistory<int>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_class_TConsoleVariableData<int>_const&___ptr64___cdecl_FConsoleVariableHistory<int>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_class_TConsoleVariableData<int>_const&___ptr64___cdecl_FConsoleVariableHistory<int>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        `public:_class_TConsoleVariableData<int>_const&___ptr64___cdecl_FConsoleVariableHistory<int>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
        ::__l2::Default.ShadowedValue[0] = 0;
        `public:_class_TConsoleVariableData<int>_const&___ptr64___cdecl_FConsoleVariableHistory<int>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
        ::__l2::Default.ShadowedValue[1] = 0;
        _Init_thread_footer(&`public:_class_TConsoleVariableData<int>_const&___ptr64___cdecl_FConsoleVariableHistory<int>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      pTVar11 = &`public:_class_TConsoleVariableData<int>_const&___ptr64___cdecl_FConsoleVariableHistory<int>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
                 ::__l2::Default;
LAB_14166724b:
      uVar4 = *(undefined8 *)pTVar11->ShadowedValue;
      uVar7 = (**(code **)(this->_padding_ + 0x18))(this);
      uVar9 = uVar12 | 0x20000;
      if ((uVar7 & 0x80) == 0) {
        uVar9 = uVar12;
      }
      if (5 < (byte)LogConsoleManager._0_1_) {
        bVar6 = IsInParallelGameThread();
        if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ::FString::PrintfImpl(&local_38,L"%d");
        pIVar8 = IConsoleManager::Get();
        (**(code **)((longlong)*pIVar8 + 0xd0))(pIVar8,local_28,this);
        UE::Logging::Private::BasicLog<6>
                  (&`protected:_virtual_void___cdecl_FConsoleVariableExtendedData<int>::Unset(EConsoleVariableFlags,FName)___ptr64'
                    ::__l18::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
        if (local_28[0] != (void *)0x0) {
          FMemory::Free(local_28[0]);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      bVar6 = IsInParallelGameThread();
      if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_res8[0] = (int)uVar4;
      (**(code **)(this->_padding_ + 0x138))(this,local_res8,uVar9);
      (**(code **)(this->_padding_ + 0x128))(this,uVar9,1);
    }
  }
  return;
}

// Unset @ 141667460

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleVariableExtendedData<float>::Unset
          (FConsoleVariableExtendedData<float> *this,EConsoleVariableFlags param_1,FName param_2)

{
  float fVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  IConsoleManager *pIVar9;
  uint uVar10;
  TConsoleVariableData<float> *pTVar11;
  uint uVar12;
  float local_res8 [2];
  FString local_48;
  void *local_38 [4];
  
  if (this->PriorityHistory != (FConsoleVariableHistory<float> *)0x0) {
    uVar12 = 0xff000000;
    if (param_1 == ECVF_SetByMask) {
      (**(code **)(this->_padding_ + 0xb8))(this,0);
      (**(code **)(this->_padding_ + 0xb8))(this,0x2000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x3000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x4000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x5000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x6000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x7000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x8000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x9000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xa000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xb000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xc000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xd000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xe000000,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001416675c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0xb8))(this,0xf000000,param_2);
      return;
    }
    bVar5 = FConsoleVariableHistory<float>::Unset(this->PriorityHistory,param_1,param_2);
    if ((bVar5) &&
       (((EConsoleVariableFlags)this->_padding_ & ECVF_SetByMask) <= (param_1 & ECVF_SetByMask))) {
      iVar2 = (this->PriorityHistory->History).Pairs.ArrayNum;
      pFVar3 = (this->PriorityHistory->History).Pairs.AllocatorInstance.Data;
      while (iVar2 = iVar2 + -1, iVar2 != -1) {
        lVar7 = (longlong)iVar2;
        if (0 < *(int *)(pFVar3 + lVar7 * 0x18 + 0x10)) {
          uVar12 = *(uint *)(pFVar3 + lVar7 * 0x18);
          uVar10 = *(int *)(pFVar3 + lVar7 * 0x18 + 0x10) - 1;
          uVar6 = 0;
          if ((int)uVar10 < *(int *)(pFVar3 + lVar7 * 0x18 + 0x10)) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar11 = (TConsoleVariableData<float> *)
                    (*(longlong *)(pFVar3 + lVar7 * 0x18 + 8) +
                    (longlong)(*(int *)(pFVar3 + lVar7 * 0x18 + 0x10) + -1) * 0x10 + 8);
          goto LAB_141667687;
        }
        if ((iVar2 == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index != static_cast<SizeType>(-1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                               ,0x2c0,L"Incrementing an invalid iterator is illegal"), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_class_TConsoleVariableData<float>_const&___ptr64___cdecl_FConsoleVariableHistory<float>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_class_TConsoleVariableData<float>_const&___ptr64___cdecl_FConsoleVariableHistory<float>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_class_TConsoleVariableData<float>_const&___ptr64___cdecl_FConsoleVariableHistory<float>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        `public:_class_TConsoleVariableData<float>_const&___ptr64___cdecl_FConsoleVariableHistory<float>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
        ::__l2::Default.ShadowedValue[0] = 0.0;
        `public:_class_TConsoleVariableData<float>_const&___ptr64___cdecl_FConsoleVariableHistory<float>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
        ::__l2::Default.ShadowedValue[1] = 0.0;
        _Init_thread_footer(&`public:_class_TConsoleVariableData<float>_const&___ptr64___cdecl_FConsoleVariableHistory<float>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      pTVar11 = &`public:_class_TConsoleVariableData<float>_const&___ptr64___cdecl_FConsoleVariableHistory<float>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
                 ::__l2::Default;
LAB_141667687:
      fVar1 = pTVar11->ShadowedValue[0];
      uVar8 = (**(code **)(this->_padding_ + 0x18))(this);
      uVar6 = uVar12 | 0x20000;
      if ((uVar8 & 0x80) == 0) {
        uVar6 = uVar12;
      }
      if (5 < (byte)LogConsoleManager._0_1_) {
        bVar5 = IsInParallelGameThread();
        if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        ::FString::PrintfImpl(&local_48,L"%f");
        pIVar9 = IConsoleManager::Get();
        (**(code **)((longlong)*pIVar9 + 0xd0))(pIVar9,local_38,this);
        UE::Logging::Private::BasicLog<6>
                  (&`protected:_virtual_void___cdecl_FConsoleVariableExtendedData<float>::Unset(EConsoleVariableFlags,FName)___ptr64'
                    ::__l18::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
        if (local_38[0] != (void *)0x0) {
          FMemory::Free(local_38[0]);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      bVar5 = IsInParallelGameThread();
      if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_res8[0] = fVar1;
      (**(code **)(this->_padding_ + 0x138))(this,local_res8,uVar6);
      (**(code **)(this->_padding_ + 0x128))(this,uVar6,1);
    }
  }
  return;
}

// Unset @ 1416678b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleVariableExtendedData<FString>::Unset
          (FConsoleVariableExtendedData<FString> *this,EConsoleVariableFlags param_1,FName param_2)

{
  ulonglong *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  code *pcVar6;
  EConsoleVariableFlags EVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  uint uVar10;
  ulonglong uVar11;
  IConsoleManager *pIVar12;
  uint uVar13;
  longlong lVar14;
  TConsoleVariableData<class_FString> *pTVar15;
  ulonglong *puVar16;
  EConsoleVariableFlags EVar17;
  longlong lVar18;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  FString local_98;
  undefined8 local_88;
  undefined8 local_80;
  void *local_78 [2];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (this->PriorityHistory != (FConsoleVariableHistory<FString> *)0x0) {
    EVar17 = ECVF_SetByMask;
    if (param_1 == ECVF_SetByMask) {
      (**(code **)(this->_padding_ + 0xb8))(this,0);
      (**(code **)(this->_padding_ + 0xb8))(this,0x2000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x3000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x4000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x5000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x6000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x7000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x8000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x9000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xa000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xb000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xc000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xd000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xe000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xf000000,param_2);
    }
    else {
      bVar9 = FConsoleVariableHistory<FString>::Unset(this->PriorityHistory,param_1,param_2);
      if ((bVar9) &&
         (((EConsoleVariableFlags)this->_padding_ & ECVF_SetByMask) <= (param_1 & ECVF_SetByMask)))
      {
        pFVar4 = (this->PriorityHistory->History).Pairs.AllocatorInstance.Data;
        iVar3 = (this->PriorityHistory->History).Pairs.ArrayNum;
        while (iVar3 = iVar3 + -1, iVar3 != -1) {
          pFVar2 = pFVar4 + (longlong)iVar3 * 0x18;
          if (0 < *(int *)(pFVar4 + (longlong)iVar3 * 0x18 + 0x10)) {
            EVar17 = *(EConsoleVariableFlags *)pFVar2;
            uVar13 = *(EConsoleVariableFlags *)(pFVar2 + 0x10) - ECVF_Cheat;
            uVar10 = 0;
            if ((int)uVar13 < (int)*(EConsoleVariableFlags *)(pFVar2 + 0x10)) {
              uVar10 = ~uVar13 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar15 = (TConsoleVariableData<class_FString> *)
                      (*(undefined8 *)(pFVar2 + 8) +
                      ((longlong)(int)(*(EConsoleVariableFlags *)(pFVar2 + 0x10) - ECVF_Cheat) * 5 +
                      1) * 8);
            goto LAB_141667afc;
          }
          if ((iVar3 == -1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index != static_cast<SizeType>(-1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                                 ,0x2c0,L"Incrementing an invalid iterator is illegal"), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_class_TConsoleVariableData<FString>_const&___ptr64___cdecl_FConsoleVariableHistory<FString>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_class_TConsoleVariableData<FString>_const&___ptr64___cdecl_FConsoleVariableHistory<FString>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_class_TConsoleVariableData<FString>_const&___ptr64___cdecl_FConsoleVariableHistory<FString>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          local_88 = 0;
          local_80 = 0;
          _Default = 0;
          DAT_154ea82a8 = 0;
          _DAT_154ea82a0 = 0;
          _DAT_154ea82b0 = 0;
          atexit(`FConsoleVariableHistory<FString>::GetMaxValue'::__l2::
                 _dynamic_atexit_destructor_for__Default__);
          _Init_thread_footer(&`public:_class_TConsoleVariableData<FString>_const&___ptr64___cdecl_FConsoleVariableHistory<FString>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        pTVar15 = &`public:_class_TConsoleVariableData<FString>_const&___ptr64___cdecl_FConsoleVariableHistory<FString>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
                   ::__l2::Default;
LAB_141667afc:
        local_68.Data = (FScriptContainerElement *)0x0;
        lVar14 = 2;
        local_60 = *(int *)(pTVar15 + 8);
        lVar18 = (longlong)local_60;
        pvVar5 = *(void **)pTVar15;
        if (local_60 == 0) {
          local_5c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_60,0,&local_68,local_60,&local_5c);
          memcpy(local_68.Data,pvVar5,lVar18 * 2);
        }
        local_58.Data = (FScriptContainerElement *)0x0;
        local_50 = *(int *)(pTVar15 + 0x18);
        lVar18 = (longlong)local_50;
        pvVar5 = *(void **)(pTVar15 + 0x10);
        if (local_50 == 0) {
          local_4c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_50,0,&local_58,local_50,&local_4c);
          memcpy(local_58.Data,pvVar5,lVar18 * 2);
        }
        uVar11 = (**(code **)(this->_padding_ + 0x18))(this);
        EVar7 = EVar17 | ECVF_Set_SetOnly_Unsafe;
        if ((uVar11 & 0x80) == 0) {
          EVar7 = EVar17;
        }
        if (5 < (byte)LogConsoleManager._0_1_) {
          bVar9 = IsInParallelGameThread();
          if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
             (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<6409875433831007945>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                 ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar8.Data = local_68.Data;
          lVar18 = (longlong)local_60;
          local_a8.Data = (FScriptContainerElement *)0x0;
          local_a0 = local_60;
          if (local_60 == 0) {
            local_9c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_60,0,&local_a8,local_60,&local_9c);
            memcpy(local_a8.Data,FVar8.Data,lVar18 * 2);
          }
          iVar3 = local_a0;
          FVar8.Data = local_a8.Data;
          local_b8.Data = (FScriptContainerElement *)0x0;
          local_b0 = local_a0;
          if (local_a0 == 0) {
            local_ac = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_a0,0,&local_b8,local_a0,&local_ac);
            memcpy(local_b8.Data,FVar8.Data,(longlong)iVar3 * 2);
          }
          pIVar12 = IConsoleManager::Get();
          (**(code **)((longlong)*pIVar12 + 0xd0))(pIVar12,local_78,this);
          UE::Logging::Private::BasicLog<6>
                    (&`protected:_virtual_void___cdecl_FConsoleVariableExtendedData<FString>::Unset(EConsoleVariableFlags,FName)___ptr64'
                      ::__l18::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
          if (local_78[0] != (void *)0x0) {
            FMemory::Free(local_78[0]);
          }
          if (local_b8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data);
          }
          if (local_a8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data);
          }
        }
        bVar9 = IsInParallelGameThread();
        if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
           (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar8.Data = local_68.Data;
        lVar18 = (longlong)local_60;
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.Data.ArrayNum = local_60;
        if (local_60 == 0) {
          local_98.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_60,0,(ForAnyElementType *)&local_98,local_60,&local_98.Data.ArrayMax)
          ;
          memcpy(local_98.Data.AllocatorInstance.Data,FVar8.Data,lVar18 * 2);
        }
        SetInternalAndUpdateState(this,&local_98,EVar7);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        puVar16 = local_48;
        do {
          puVar1 = puVar16 + -2;
          puVar16 = puVar16 + -2;
          lVar14 = lVar14 + -1;
          if ((void *)*puVar1 != (void *)0x0) {
            FMemory::Free((void *)*puVar1);
          }
        } while (lVar14 != 0);
      }
    }
  }
  return;
}

// Unset @ 141667f10

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleVariableExtendedData<bool>::Unset
          (FConsoleVariableExtendedData<bool> *this,EConsoleVariableFlags param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  undefined2 uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  IConsoleManager *pIVar9;
  uint uVar10;
  wchar_t *pwVar11;
  char cVar12;
  TConsoleVariableData<bool> *pTVar13;
  uint uVar14;
  char local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  if (this->PriorityHistory != (FConsoleVariableHistory<bool> *)0x0) {
    uVar14 = 0xff000000;
    if (param_1 == ECVF_SetByMask) {
      (**(code **)(this->_padding_ + 0xb8))(this,0);
      (**(code **)(this->_padding_ + 0xb8))(this,0x2000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x3000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x4000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x5000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x6000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x7000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x8000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0x9000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xa000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xb000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xc000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xd000000,param_2);
      (**(code **)(this->_padding_ + 0xb8))(this,0xe000000,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014166806e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0xb8))(this,0xf000000,param_2);
      return;
    }
    bVar6 = FConsoleVariableHistory<bool>::Unset(this->PriorityHistory,param_1,param_2);
    if ((bVar6) &&
       (((EConsoleVariableFlags)this->_padding_ & ECVF_SetByMask) <= (param_1 & ECVF_SetByMask))) {
      pFVar4 = (this->PriorityHistory->History).Pairs.AllocatorInstance.Data;
      iVar3 = (this->PriorityHistory->History).Pairs.ArrayNum;
      while (iVar3 = iVar3 + -1, iVar3 != -1) {
        pFVar1 = pFVar4 + (longlong)iVar3 * 0x18;
        if (0 < *(int *)(pFVar4 + (longlong)iVar3 * 0x18 + 0x10)) {
          uVar14 = *(uint *)pFVar1;
          uVar10 = *(int *)(pFVar1 + 0x10) - 1;
          uVar7 = 0;
          if ((int)uVar10 < *(int *)(pFVar1 + 0x10)) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar13 = (TConsoleVariableData<bool> *)
                    (*(longlong *)(pFVar1 + 8) +
                    ((longlong)(*(int *)(pFVar1 + 0x10) + -1) * 3 + 2) * 4);
          goto LAB_14166813b;
        }
        if ((iVar3 == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index != static_cast<SizeType>(-1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                               ,0x2c0,L"Incrementing an invalid iterator is illegal"), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_class_TConsoleVariableData<bool>_const&___ptr64___cdecl_FConsoleVariableHistory<bool>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_class_TConsoleVariableData<bool>_const&___ptr64___cdecl_FConsoleVariableHistory<bool>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_class_TConsoleVariableData<bool>_const&___ptr64___cdecl_FConsoleVariableHistory<bool>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        `public:_class_TConsoleVariableData<bool>_const&___ptr64___cdecl_FConsoleVariableHistory<bool>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
        ::__l2::Default.ShadowedValue[0] = false;
        `public:_class_TConsoleVariableData<bool>_const&___ptr64___cdecl_FConsoleVariableHistory<bool>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
        ::__l2::Default.ShadowedValue[1] = false;
        _Init_thread_footer(&`public:_class_TConsoleVariableData<bool>_const&___ptr64___cdecl_FConsoleVariableHistory<bool>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      pTVar13 = &`public:_class_TConsoleVariableData<bool>_const&___ptr64___cdecl_FConsoleVariableHistory<bool>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
                 ::__l2::Default;
LAB_14166813b:
      uVar2 = *(undefined2 *)pTVar13->ShadowedValue;
      uVar8 = (**(code **)(this->_padding_ + 0x18))(this);
      uVar7 = uVar14 | 0x20000;
      if ((uVar8 & 0x80) == 0) {
        uVar7 = uVar14;
      }
      cVar12 = (char)uVar2;
      if (5 < (byte)LogConsoleManager._0_1_) {
        bVar6 = IsInParallelGameThread();
        if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pwVar11 = L"true";
        if (cVar12 == '\0') {
          pwVar11 = L"false";
        }
        ::FString::FString(&local_38,pwVar11);
        pIVar9 = IConsoleManager::Get();
        (**(code **)((longlong)*pIVar9 + 0xd0))(pIVar9,local_28,this);
        UE::Logging::Private::BasicLog<6>
                  (&`protected:_virtual_void___cdecl_FConsoleVariableExtendedData<bool>::Unset(EConsoleVariableFlags,FName)___ptr64'
                    ::__l18::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
        if (local_28[0] != (void *)0x0) {
          FMemory::Free(local_28[0]);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      bVar6 = IsInParallelGameThread();
      if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_res8[0] = cVar12;
      (**(code **)(this->_padding_ + 0x138))(this,local_res8,uVar7);
      (**(code **)(this->_padding_ + 0x128))(this,uVar7,1);
    }
  }
  return;
}

