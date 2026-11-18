// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 4

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 145fe3130

void __thiscall
TMapBase<FName,`FSlateRHIResourceManager::CreateTextures'::__l2::FLoadTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,`FSlateRHIResourceManager::CreateTextures'::__l2::FLoadTextureInfo,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (void *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)((longlong)this + 0x28);
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = TStack_40.Array;
    }
    uVar4 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_145fe3212;
      uVar4 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
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
LAB_145fe3212:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)((longlong)this + 0x28)) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x38 + *(longlong *)this);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 8)) &&
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
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           *(undefined8 *)pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// FindChecked @ 146008590

FLoadTextureInfo * __thiscall
TMapBase<FName,`FSlateRHIResourceManager::CreateTextures'::__l2::FLoadTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,`FSlateRHIResourceManager::CreateTextures'::__l2::FLoadTextureInfo,0>_>
::FindChecked(void *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLoadTextureInfo *pFVar4;
  longlong lVar5;
  FName *pFVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    uVar3 = *(uint *)(lVar5 + (ulonglong)
                              (*(int *)((longlong)this + 0x48) - 1U & param_1.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar3 * 0x38 + *(longlong *)this);
        if (*pFVar6 == param_1) {
          if (pFVar6 != (FName *)0x0) {
            return (FLoadTextureInfo *)(pFVar6 + 1);
          }
          break;
        }
        uVar3 = pFVar6[6].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FLoadTextureInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FLoadTextureInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 146008650

FSlatePostSettings * __thiscall
TMapBase<enum_ESlatePostRT,FSlatePostSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>_>
::FindChecked(void *this,ESlatePostRT param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FSlatePostSettings *pFVar4;
  ESlatePostRT *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (ESlatePostRT *)((longlong)(int)uVar3 * 0x40 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (ESlatePostRT *)0x0) {
            return (FSlatePostSettings *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x38);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FSlatePostSettings *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FSlatePostSettings *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 1460086f0

FSlatePostSettings * __thiscall
TMapBase<enum_ESlatePostRT,FSlatePostSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>_>
::FindChecked(void *this,ESlatePostRT param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FSlatePostSettings *pFVar4;
  ESlatePostRT *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (ESlatePostRT *)((longlong)(int)uVar3 * 0x40 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (ESlatePostRT *)0x0) {
            return (FSlatePostSettings *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x38);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FSlatePostSettings *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FSlatePostSettings *)(*pcVar1)();
  return pFVar4;
}

