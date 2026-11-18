// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 8

// FindOrAddImpl<FGameplayTag_const_&> @ 146ac55e0

int * __thiscall
TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>::
FindOrAddImpl<FGameplayTag_const_&>
          (TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
           *this,uint param_1,FGameplayTag *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FGameplayTag *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x14;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x14) == param_2->TagName) {
          if (lVar3 != 0) goto LAB_146ac5672;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0xc);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FGameplayTag_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FGameplayTag_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x14;
LAB_146ac5672:
  return (int *)(lVar3 + 8);
}

// FindOrAddImpl<FString_const_&> @ 146ac5690

FGameplayTagSearchPathInfo * __thiscall
TMapBase<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,FGameplayTagSearchPathInfo>,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FGameplayTagSearchPathInfo *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,FGameplayTagSearchPathInfo>,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FGameplayTagSearchPathInfo *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 0x10);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 146ac5720

void __thiscall
TMapBase<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
           *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar9 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar10 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar9,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar9 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146ac5800;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar9 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_146ac5800:
  TStack_40._padding_ = CONCAT44(uVar9,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar3) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x40 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 0x10)) &&
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
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10),
                         (FString *)pFVar11);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 146ac5980

void __thiscall
TMapBase<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>_>
           *this,TArray<TSharedPtr<FGameplayTagNode,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar9 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  DestructItems<TSharedPtr<FGameplayTagNode,1>,int>
            ((TSharedPtr<FGameplayTagNode,1> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar10 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar9,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar9 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146ac5a60;
      uVar4 = puVar13[lVar7 + 1];
    }
    uVar9 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar7 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_146ac5a60:
  TStack_40._padding_ = CONCAT44(uVar9,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar3) {
    do {
      pFVar8 = (param_1->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                (*(longlong *)&(this->Pairs).Elements + 8 +
                (longlong)TStack_40.CurrentBitIndex * 0x20);
      if (((pFVar8 <= pFVar11) && (pFVar11 < pFVar8 + (longlong)*piVar1 * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      pFVar8 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)pFVar8 = *(undefined8 *)pFVar11;
      lVar7 = *(longlong *)(pFVar11 + 8);
      *(longlong *)(pFVar8 + 8) = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 146ad9410

TSharedPtr<FGameplayTagNode,1> * __thiscall
TMapBase<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>_>
::Find(TMapBase<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>_>
       *this,FGameplayTag *param_1)

{
  FName FVar1;
  uint uVar2;
  TSharedPtr<FGameplayTagNode,1> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  FName *pFVar5;
  
  FVar1 = param_1->TagName;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar2 = *(uint *)((longlong)FVar4 +
                     (ulonglong)((this->Pairs).HashSize - 1U & FVar1.Number + uVar2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar5 == param_1->TagName) {
          pTVar3 = (TSharedPtr<FGameplayTagNode,1> *)0x0;
          if (pFVar5 != (FName *)0x0) {
            pTVar3 = (TSharedPtr<FGameplayTagNode,1> *)(pFVar5 + 1);
          }
          return pTVar3;
        }
        uVar2 = pFVar5[3].ComparisonIndex.Value;
      } while (uVar2 != 0xffffffff);
    }
  }
  return (TSharedPtr<FGameplayTagNode,1> *)0x0;
}

// Find @ 146ad94c0

FGameplayTag * __thiscall
TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
::Find(TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FGameplayTag *pFVar5;
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
          pFVar5 = (FGameplayTag *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FGameplayTag *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FGameplayTag *)0x0;
}

// Find @ 146ad9560

FGameplayTagSource * __thiscall
TMapBase<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
::Find(TMapBase<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FGameplayTagSource *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
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
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FGameplayTagSource *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FGameplayTagSource *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[5].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FGameplayTagSource *)0x0;
}

// Find @ 146ad9600

FGameplayTagSearchPathInfo * __thiscall
TMapBase<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
::Find(TMapBase<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FGameplayTagSearchPathInfo *pFVar6;
  
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
  iVar2 = TSet<TTuple<FString,FGameplayTagSearchPathInfo>,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x40 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FGameplayTagSearchPathInfo *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FGameplayTagSearchPathInfo *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FGameplayTagSearchPathInfo *)0x0;
}

