// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 7

// FindByHash<TStringView<wchar_t>_> @ 141da7100

TSharedPtr<FJsonValue,1> * __thiscall
TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
::FindByHash<TStringView<wchar_t>_>
          (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           *this,uint param_1,TStringView<wchar_t> *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      lVar1 = (longlong)iVar2 * 0x28;
      iVar6 = *(int *)(lVar1 + 8 + lVar3);
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      iVar6 = (int)*(undefined8 *)&param_2->Size;
      if (iVar6 == iVar5) {
        if ((iVar6 != 0) && (iVar5 != 0)) {
          iVar4 = iVar5;
          if (iVar6 < iVar5) {
            iVar4 = iVar6;
          }
          iVar4 = FGenericPlatformStricmp::Strnicmp
                            (param_2->DataPtr,*(wchar_t **)(lVar1 + lVar3),(longlong)iVar4);
          if (iVar4 != 0) goto LAB_141da71b7;
        }
        if (iVar6 == iVar5) {
          lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
          if (lVar1 == 0) {
            return (TSharedPtr<FJsonValue,1> *)0x0;
          }
          return (TSharedPtr<FJsonValue,1> *)(lVar1 + 0x10);
        }
      }
LAB_141da71b7:
      iVar2 = *(int *)(lVar1 + 0x20 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  return (TSharedPtr<FJsonValue,1> *)0x0;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 141da77b0

void __thiscall
TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar10 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar11 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar10,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141da7890;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar10 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_141da7890:
  TStack_40._padding_ = CONCAT44(uVar10,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar4) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_40.CurrentBitIndex * 0x28);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10),
                         (FString *)pFVar2);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 141da7a10

void __thiscall
TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           *this,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar10 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar11 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar10,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar8 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141da7af0;
      uVar5 = puVar13[lVar8 + 1];
    }
    uVar10 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_141da7af0:
  TStack_40._padding_ = CONCAT44(uVar10,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar4) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 5 + 2) * 8);
      pFVar9 = (param_1->AllocatorInstance).Data;
      if (((pFVar9 <= pFVar2) && (pFVar2 < pFVar9 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      pFVar9 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar9 = *(undefined8 *)pFVar2;
      lVar8 = *(longlong *)(pFVar2 + 8);
      *(longlong *)(pFVar9 + 8) = lVar8;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 141da7c80

void __thiscall
TMapBase<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>_>
           *this,TArray<TSharedRef<FAutomationSpecBase::FSpec,1>,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar10 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  DestructItems<TSharedRef<FAutomationSpecBase::FSpec,1>,int>
            ((TSharedRef<FAutomationSpecBase::FSpec,1> *)(param_1->AllocatorInstance).Data,
             param_1->ArrayNum);
  iVar11 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar10,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar8 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141da7d60;
      uVar5 = puVar13[lVar8 + 1];
    }
    uVar10 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_141da7d60:
  TStack_40._padding_ = CONCAT44(uVar10,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar4) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 5 + 2) * 8);
      pFVar9 = (param_1->AllocatorInstance).Data;
      if (((pFVar9 <= pFVar2) && (pFVar2 < pFVar9 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      pFVar9 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar9 = *(undefined8 *)pFVar2;
      lVar8 = *(longlong *)(pFVar2 + 8);
      *(longlong *)(pFVar9 + 8) = lVar8;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 141dd4380

TSharedPtr<FJsonValue,1> * __thiscall
TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
::Find(TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
       *this,FString *param_1)

{
  TTuple<FString,TSharedPtr<FJsonValue,1>_> *pTVar1;
  TSharedPtr<FJsonValue,1> *pTVar2;
  
  pTVar1 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  pTVar2 = (TSharedPtr<FJsonValue,1> *)0x0;
  if (pTVar1 != (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
    pTVar2 = (TSharedPtr<FJsonValue,1> *)&pTVar1->field_0x10;
  }
  return pTVar2;
}

// Find @ 141dd43b0

TSharedRef<FAutomationSpecBase::FSpec,1> * __thiscall
TMapBase<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>_>
::Find(TMapBase<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>_>
       *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  TSharedRef<FAutomationSpecBase::FSpec,1> *pTVar6;
  
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar3 = TSet<TTuple<FString,TSharedRef<FAutomationSpecBase::FSpec,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    pTVar6 = (TSharedRef<FAutomationSpecBase::FSpec,1> *)0x0;
    if (lVar1 != 0) {
      pTVar6 = (TSharedRef<FAutomationSpecBase::FSpec,1> *)(lVar1 + 0x10);
    }
    return pTVar6;
  }
  return (TSharedRef<FAutomationSpecBase::FSpec,1> *)0x0;
}

// FindChecked @ 141dd44c0

TSharedPtr<FJsonValue,1> * __thiscall
TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
::FindChecked(TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,TSharedPtr<FJsonValue,1>_> *pTVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  
  pTVar3 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  if (pTVar3 != (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
    return (TSharedPtr<FJsonValue,1> *)&pTVar3->field_0x10;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedPtr<FJsonValue,1> *)(*pcVar1)();
    return pTVar4;
  }
  return (TSharedPtr<FJsonValue,1> *)&DAT_00000010;
}

