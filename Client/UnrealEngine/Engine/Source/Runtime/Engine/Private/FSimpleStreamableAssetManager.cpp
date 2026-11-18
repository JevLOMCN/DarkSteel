// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 27

// AddRenderAssetElements @ 148787170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001487876dd) */
/* WARNING: Removing unreachable block (ram,0x0001487876eb) */

void __thiscall
FSimpleStreamableAssetManager::AddRenderAssetElements
          (FSimpleStreamableAssetManager *this,
          TArrayView<FStreamingRenderAssetPrimitiveInfo,int> *param_1,int param_2,bool param_3)

{
  int *piVar1;
  TArray<FSimpleStreamableAssetManager::TSimpleSparseArray<FSimpleStreamableAssetManager::FAssetBoundElement>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  float fVar3;
  UStreamableRenderAsset *pUVar4;
  uint *puVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  FStreamingRenderAssetPrimitiveInfo *pFVar15;
  TArray<FSimpleStreamableAssetManager::FAssetRecord,TSizedDefaultAllocator<32>_> *pTVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  TArray<FSimpleStreamableAssetManager::FAssetRecord,TSizedDefaultAllocator<32>_> *pTVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ForElementType<unsigned_int> FVar24;
  FStreamingRenderAssetPrimitiveInfo *pFVar25;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  undefined1 auStackY_1d8 [32];
  uint local_180;
  uint uStack_17c;
  uint uStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  FAssetRecord local_150;
  UStreamableRenderAsset *local_140;
  FStreamingRenderAssetPrimitiveInfo *local_138;
  uint local_130;
  uint local_12c;
  UStreamableRenderAsset *local_128;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_118;
  TArray<FSimpleStreamableAssetManager::FAssetRecord,TSizedDefaultAllocator<32>_> local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  uVar19 = param_1->ArrayNum;
  uVar18 = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_150.StreamableRenderAsset_ForDebug = (UStreamableRenderAsset *)this;
  if (uVar19 == 0) goto LAB_148787416;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_a8,uVar19);
  if (uVar19 < 4) {
    uVar19 = 1;
  }
  else {
    uVar22 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar20 & 0x1f);
  }
  if ((local_60 != 0) && ((int)uVar19 <= (int)local_60)) goto LAB_148787416;
  local_60 = uVar19;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
  }
  if (uVar19 != 0) {
    uVar11 = uVar19;
    if (uVar19 < 2) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_148787270;
      }
    }
    else {
LAB_148787270:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar11,4);
    }
    if (0 < (int)uVar19) {
      uVar23 = (ulonglong)uVar19;
      uVar22 = uVar18;
      do {
        FVar17.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_68.Data;
        }
        uVar13 = uVar22 & (longlong)(int)uVar19 - 1U;
        uVar22 = uVar22 + 1;
        *(undefined4 *)(FVar17.Data + uVar13 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  if (local_60 != 0) {
    local_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    local_180 = 0;
    uStack_17c = 1;
    uStack_16c = 0;
    uStack_168 = 0;
    if (local_80 != 0) {
      FVar24 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FVar24 = local_88;
      }
      uVar19 = *(uint *)FVar24;
      uVar22 = uVar18;
      while (uVar19 == 0) {
        uStack_168 = (int)uVar22 + 0x20;
        uVar22 = (ulonglong)uStack_168;
        iVar9 = (int)uVar18;
        local_180 = iVar9 + 1;
        uVar18 = (ulonglong)local_180;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_180)
        goto LAB_148787382;
        uVar19 = ((uint *)((longlong)FVar24 + 4))[iVar9];
      }
      uStack_17c = -uVar19 & uVar19;
      uVar18 = (ulonglong)uStack_17c * 2 + 1;
      lVar20 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      uStack_16c = (int)lVar20 + -1 + uStack_168;
      uVar18 = (ulonglong)uStack_16c;
      if ((int)local_80 < (int)uStack_16c) {
LAB_148787382:
        uVar18 = (ulonglong)local_80;
        uStack_16c = local_80;
      }
    }
    local_120 = (longlong *)local_a8;
    local_118.CurrentBitIndex = uStack_16c;
    local_118.UnvisitedBitMask = 0xffffffff;
    local_118._28_4_ = uStack_164;
    local_118.BaseBitIndex = uStack_168;
    local_118._padding_._0_4_ = local_180;
    local_118._padding_._4_4_ = uStack_17c;
    if ((int)uVar18 < (int)local_80) {
      do {
        lVar20 = *local_120;
        lVar14 = (longlong)(int)uVar18;
        uVar19 = local_60 - 1 & *(uint *)(lVar20 + lVar14 * 0x18);
        *(uint *)(lVar20 + 0x14 + lVar14 * 0x18) = uVar19;
        FVar17.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_68.Data;
        }
        uVar22 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar19;
        *(undefined4 *)(lVar20 + 0x10 + lVar14 * 0x18) = *(undefined4 *)(FVar17.Data + uVar22 * 4);
        *(int *)(FVar17.Data + uVar22 * 4) = (int)uVar18;
        local_118.UnvisitedBitMask = local_118.UnvisitedBitMask & ~local_118._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_118);
        uVar18 = (ulonglong)(uint)local_118.CurrentBitIndex;
      } while (local_118.CurrentBitIndex < (local_118.Array)->NumBits);
    }
  }
LAB_148787416:
  pFVar25 = param_1->DataPtr;
  pFVar15 = pFVar25 + param_1->ArrayNum;
  local_138 = pFVar15;
  if (pFVar25 != pFVar15) {
    do {
      pUVar4 = (pFVar25->RenderAsset).field0_0x0.DebugPtr;
      local_140 = pUVar4;
      if (pUVar4 != (UStreamableRenderAsset *)0x0) {
        if ((pUVar4->SimpleStreamableAssetManagerIndex).Object == (int *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        puVar5 = (uint *)(pUVar4->SimpleStreamableAssetManagerIndex).Object;
        uVar19 = *puVar5;
        if (uVar19 == 0xffffffff) {
          if (this->UsedAssetIndices == (this->AssetUsedIndices).NumBits) {
            iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                              (&this->AssetUsedIndices,0x20);
            TBitArray<FDefaultBitArrayAllocator>::SetRange(&this->AssetUsedIndices,iVar9,0x20,false)
            ;
          }
          uVar19 = TBitArray<FDefaultBitArrayAllocator>::FindAndSetFirstZeroBit
                             (&this->AssetUsedIndices,this->FreeAssetIndexHint);
          if (uVar19 == 0xffffffff) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewAssetIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                               ,0x26a,L"");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          this->FreeAssetIndexHint = uVar19 + 1;
          this->UsedAssetIndices = this->UsedAssetIndices + 1;
          *puVar5 = uVar19;
          if (uVar19 == 0xffffffff) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("AssetIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                               ,0x273,L"");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
        }
        uVar11 = (this->AssetIndexToBounds4Index).ArrayNum;
        if ((int)uVar11 <= (int)uVar19) {
          if (uVar19 != uVar11) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("AssetIndex == AssetIndexToBounds4Index.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                               ,0x277,L"");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pTVar2 = &this->AssetIndexToBounds4Index;
          local_e8 = 0;
          pFVar6 = (pTVar2->AllocatorInstance).Data;
          local_d0 = 0;
          local_c8 = 0x8000000000;
          local_c0 = 0;
          local_b8 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          if ((pFVar6 <= (FScriptContainerElement *)&local_e8) &&
             ((FScriptContainerElement *)&local_e8 <
              pFVar6 + (longlong)(this->AssetIndexToBounds4Index).ArrayMax * 0x38)) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar9 = (this->AssetIndexToBounds4Index).ArrayNum;
          piVar1 = &(this->AssetIndexToBounds4Index).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x838,&pTVar2->AllocatorInstance,piVar1);
          }
          pFVar6 = (pTVar2->AllocatorInstance).Data;
          (this->AssetIndexToBounds4Index).ArrayNum = iVar9 + 1;
          lVar20 = (longlong)iVar9 * 0x38;
          *(undefined4 *)(pFVar6 + lVar20) = (undefined4)local_e8;
          *(undefined4 *)(pFVar6 + lVar20 + 4) = local_e8._4_4_;
          *(undefined8 *)(pFVar6 + lVar20 + 0x18) = 0;
          if (local_d0 == 0) {
            memmove(pFVar6 + lVar20 + 8,&local_e0,0x10);
          }
          if (*(void **)(pFVar6 + lVar20 + 0x18) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar6 + lVar20 + 0x18));
          }
          *(longlong *)(pFVar6 + lVar20 + 0x18) = local_d0;
          *(undefined4 *)(pFVar6 + lVar20 + 0x20) = (undefined4)local_c8;
          *(undefined4 *)(pFVar6 + lVar20 + 0x24) = local_c8._4_4_;
          *(undefined8 *)(pFVar6 + lVar20 + 0x28) = 0;
          *(undefined8 *)(pFVar6 + lVar20 + 0x28) = local_c0;
          *(undefined4 *)(pFVar6 + lVar20 + 0x30) = (undefined4)local_b8;
          *(undefined4 *)(pFVar6 + lVar20 + 0x34) = local_b8._4_4_;
          local_b8 = 0;
          local_c0 = 0;
          local_c8 = 0;
          local_d0 = 0;
        }
        uVar11 = 0;
        if ((int)uVar19 < (this->AssetIndexToBounds4Index).ArrayNum) {
          uVar11 = ~uVar19 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar9 = GSimpleStreamableAssetManagerSparseArrayGrowSize;
        pFVar6 = (this->AssetIndexToBounds4Index).AllocatorInstance.Data;
        fVar3 = pFVar25->TexelFactor;
        lVar20 = (longlong)(int)uVar19 * 0x38;
        this_00 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar6 + lVar20 + 8);
        if (*(int *)(pFVar6 + lVar20 + 4) == *(int *)(pFVar6 + lVar20)) {
          if (-1 < GSimpleStreamableAssetManagerSparseArrayGrowSize) {
            iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                               (this_00,GSimpleStreamableAssetManagerSparseArrayGrowSize);
            TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar10,iVar9,false);
          }
          iVar9 = GSimpleStreamableAssetManagerSparseArrayGrowSize;
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0xc,4,GSimpleStreamableAssetManagerSparseArrayGrowSize,
                              (ForAnyElementType *)(pFVar6 + lVar20 + 0x28),
                              (int *)(pFVar6 + lVar20 + 0x30),(int *)(pFVar6 + lVar20 + 0x34));
          DefaultConstructItems<FSimpleStreamableAssetManager::FAssetBoundElement,int>
                    ((void *)(*(longlong *)(pFVar6 + lVar20 + 0x28) + (longlong)iVar10 * 0xc),iVar9)
          ;
          this = (FSimpleStreamableAssetManager *)local_150.StreamableRenderAsset_ForDebug;
        }
        uVar11 = TBitArray<FDefaultBitArrayAllocator>::FindAndSetFirstZeroBit
                           (this_00,*(int *)(pFVar6 + lVar20));
        lVar14 = (longlong)(int)uVar11;
        if (uVar11 == 0xffffffff) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\SimpleStreamableAssetManager.h"
                             ,0x135,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        *(int *)(pFVar6 + lVar20 + 4) = *(int *)(pFVar6 + lVar20 + 4) + 1;
        *(uint *)(pFVar6 + lVar20) = uVar11 + 1;
        uVar12 = 0;
        if ((int)uVar11 < *(int *)(pFVar6 + lVar20 + 0x30)) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if (uVar12 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        lVar20 = *(longlong *)(pFVar6 + lVar20 + 0x28);
        *(int *)(lVar20 + lVar14 * 0xc) = param_2;
        *(float *)(lVar20 + 4 + lVar14 * 0xc) = fVar3;
        *(uint *)(lVar20 + 8 + lVar14 * 0xc) = (uint)param_3;
        local_128 = local_140;
        local_130 = uVar19;
        local_12c = uVar11;
        TSet<FSimpleStreamableAssetManager::FAssetRecord,DefaultKeyFuncs<FSimpleStreamableAssetManager::FAssetRecord,0>,FDefaultSetAllocator>
        ::Emplace<FSimpleStreamableAssetManager::FAssetRecord>
                  ((TSet<FSimpleStreamableAssetManager::FAssetRecord,DefaultKeyFuncs<FSimpleStreamableAssetManager::FAssetRecord,0>,FDefaultSetAllocator>
                    *)local_a8,&local_150,(bool *)&local_130);
        pFVar15 = local_138;
      }
      pFVar25 = pFVar25 + 1;
    } while (pFVar25 != pFVar15);
  }
  pTVar16 = TSet<FSimpleStreamableAssetManager::FAssetRecord,DefaultKeyFuncs<FSimpleStreamableAssetManager::FAssetRecord,0>,FDefaultSetAllocator>
            ::Array((TSet<FSimpleStreamableAssetManager::FAssetRecord,DefaultKeyFuncs<FSimpleStreamableAssetManager::FAssetRecord,0>,FDefaultSetAllocator>
                     *)local_a8,&local_f8);
  uVar19 = 0;
  if (param_2 < (this->ObjectRegistrationIndexToAssetProperty).ArrayNum) {
    uVar19 = (uint)~param_2 >> 0x1f;
  }
  if (uVar19 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar21 = (TArray<FSimpleStreamableAssetManager::FAssetRecord,TSizedDefaultAllocator<32>_> *)
            ((this->ObjectRegistrationIndexToAssetProperty).AllocatorInstance.Data +
            (longlong)param_2 * 0x10);
  if (pTVar21 != pTVar16) {
    pFVar6 = (pTVar21->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar21->AllocatorInstance).Data = (pTVar16->AllocatorInstance).Data;
    (pTVar16->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar21->ArrayNum = pTVar16->ArrayNum;
    pTVar21->ArrayMax = pTVar16->ArrayMax;
    pTVar16->ArrayNum = 0;
    pTVar16->ArrayMax = 0;
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  local_60 = 0;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  TSparseArray<TSparseSetElement<FSimpleStreamableAssetManager::FAssetRecord>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FSimpleStreamableAssetManager::FAssetRecord>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FSimpleStreamableAssetManager::FAssetRecord>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  return;
}

// GetAllocatedSize @ 14879b5f0

uint __cdecl FSimpleStreamableAssetManager::GetAllocatedSize(void)

{
  int iVar1;
  code *pcVar2;
  FSimpleStreamableAssetManager *lpCriticalSection;
  FSimpleStreamableAssetManager *pFVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if (GUseSimpleStreamableAssetManager == 0) {
    return 0x1c;
  }
  if (Instance == (FSimpleStreamableAssetManager *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                       ,0x6c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  lpCriticalSection = Instance;
  bVar4 = GUseSimpleStreamableAssetManager != 0;
  if (bVar4) {
    EnterCriticalSection((LPCRITICAL_SECTION)Instance);
  }
  pFVar3 = Instance;
  iVar1 = (Instance->ObjectRegistrationIndexToAssetProperty).ArrayNum;
  pFVar6 = (Instance->ObjectRegistrationIndexToAssetProperty).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  iVar8 = ((Instance->ObjectUsedIndices).MaxBits + 0x1fU >> 5) * 4 + 0x160;
  while( true ) {
    if ((pFVar3->ObjectRegistrationIndexToAssetProperty).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArray<FSimpleStreamableAssetManager::FAssetRecord,TSizedDefaultAllocator<32>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    iVar8 = iVar8 + *(int *)(pFVar6 + 0xc) * 0x10;
    pFVar6 = pFVar6 + 0x10;
  }
  iVar1 = (pFVar3->AssetIndexToBounds4Index).ArrayNum;
  pFVar6 = (pFVar3->AssetIndexToBounds4Index).AllocatorInstance.Data;
  iVar8 = iVar8 + (((pFVar3->AssetUsedIndices).MaxBits + 0x1fU >> 5) +
                  (pFVar3->ObjectBounds4).ArrayMax * 0x54) * 4;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((pFVar3->AssetIndexToBounds4Index).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSimpleStreamableAssetManager::TSimpleSparseArray<FSimpleStreamableAssetManager::FAssetBoundElement>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar6 == pFVar7) break;
    iVar8 = iVar8 + ((*(int *)(pFVar6 + 0x24) + 0x1fU >> 5) + *(int *)(pFVar6 + 0x34) * 3) * 4 +
            0x38;
    pFVar6 = pFVar6 + 0x38;
  }
  iVar1 = (pFVar3->BoundsViewInfos).ArrayMax;
  if (bVar4) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar8 + iVar1 * 0xc + 0x1c;
}

// GetAllocatedSize_Impl @ 14879b7b0

uint __thiscall
FSimpleStreamableAssetManager::GetAllocatedSize_Impl(FSimpleStreamableAssetManager *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ObjectRegistrationIndexToAssetProperty).ArrayNum;
  pFVar2 = (this->ObjectRegistrationIndexToAssetProperty).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  iVar4 = ((this->ObjectUsedIndices).MaxBits + 0x1fU >> 5) * 4 + 0x160;
  while( true ) {
    if ((this->ObjectRegistrationIndexToAssetProperty).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArray<FSimpleStreamableAssetManager::FAssetRecord,TSizedDefaultAllocator<32>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    iVar4 = iVar4 + *(int *)(pFVar2 + 0xc) * 0x10;
    pFVar2 = pFVar2 + 0x10;
  }
  iVar1 = (this->AssetIndexToBounds4Index).ArrayNum;
  pFVar2 = (this->AssetIndexToBounds4Index).AllocatorInstance.Data;
  iVar4 = iVar4 + (((this->AssetUsedIndices).MaxBits + 0x1fU >> 5) +
                  (this->ObjectBounds4).ArrayMax * 0x54) * 4;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->AssetIndexToBounds4Index).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSimpleStreamableAssetManager::TSimpleSparseArray<FSimpleStreamableAssetManager::FAssetBoundElement>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    iVar4 = iVar4 + ((*(int *)(pFVar2 + 0x24) + 0x1fU >> 5) + *(int *)(pFVar2 + 0x34) * 3) * 4 +
            0x38;
    pFVar2 = pFVar2 + 0x38;
  }
  return iVar4 + (this->BoundsViewInfos).ArrayMax * 0xc;
}

// GetAssetReferenceBounds @ 14879bfa0

void __cdecl
FSimpleStreamableAssetManager::GetAssetReferenceBounds
          (UStreamableRenderAsset *param_1,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (Instance == (FSimpleStreamableAssetManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                       ,0x75,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GetAssetReferenceBounds_Impl(Instance,param_1,param_2);
  return;
}

// GetAssetReferenceBounds_Impl @ 14879c010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSimpleStreamableAssetManager::GetAssetReferenceBounds_Impl
          (FSimpleStreamableAssetManager *this,UStreamableRenderAsset *param_1,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  TSimpleSparseArray<FSimpleStreamableAssetManager::FAssetBoundElement> *this_00;
  FAssetBoundElement *pFVar9;
  undefined1 auStackY_118 [32];
  TArrayView<FSimpleStreamableAssetManager::FAssetBoundElement_const_,int> local_c8;
  TVector<double>_u_0 local_b8;
  double local_a0;
  double local_98;
  double local_90;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (((param_1->SimpleStreamableAssetManagerIndex).Object == (int *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Asset->SimpleStreamableAssetManagerIndex.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                         ,0xb6,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((param_1->SimpleStreamableAssetManagerIndex).Object == (int *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(param_1->SimpleStreamableAssetManagerIndex).Object;
  if (uVar2 != 0xffffffff) {
    uVar6 = 0;
    if ((int)uVar2 < (this->AssetIndexToBounds4Index).ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = (TSimpleSparseArray<FSimpleStreamableAssetManager::FAssetBoundElement> *)
              ((this->AssetIndexToBounds4Index).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x38
              );
    uVar2 = this_00->UsedElementsCount;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    piVar1 = &param_2->ArrayMax;
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar2,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
    }
    TSimpleSparseArray<FSimpleStreamableAssetManager::FAssetBoundElement>::GetSparseView
              (this_00,&local_c8);
    for (pFVar9 = local_c8.DataPtr; pFVar9 != local_c8.DataPtr + local_c8.ArrayNum;
        pFVar9 = pFVar9 + 1) {
      if (pFVar9->ObjectRegistrationIndex != -1) {
        GetBounds(this,(TBoxSphereBounds<double,double> *)&local_b8._s_0,
                  pFVar9->ObjectRegistrationIndex);
        local_80 = local_b8._s_0.X - local_a0;
        dStack_68 = local_a0 + local_b8._s_0.X;
        pFVar3 = (param_2->AllocatorInstance).Data;
        dStack_78 = local_b8._s_0.Y - local_98;
        local_50 = 1;
        local_70 = local_b8._s_0.Z - local_90;
        dStack_58 = local_90 + local_b8._s_0.Z;
        local_60 = local_98 + local_b8._s_0.Y;
        if (((pFVar3 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar3 + (longlong)*piVar1 * 0x38)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar7 + 1;
        lVar8 = (longlong)iVar7 * 0x38;
        pFVar3 = (param_2->AllocatorInstance).Data;
        *(double *)(pFVar3 + lVar8) = local_80;
        *(double *)(pFVar3 + lVar8 + 8) = dStack_78;
        *(double *)(pFVar3 + lVar8 + 0x10) = local_70;
        *(double *)(pFVar3 + lVar8 + 0x10 + 8) = dStack_68;
        *(double *)(pFVar3 + lVar8 + 0x20) = local_60;
        *(double *)(pFVar3 + lVar8 + 0x20 + 8) = dStack_58;
        *(ulonglong *)(pFVar3 + lVar8 + 0x30) = CONCAT71(uStack_4f,local_50);
      }
    }
  }
  return;
}

// GetBounds @ 14879cab0

TBoxSphereBounds<double,double> * __thiscall
FSimpleStreamableAssetManager::GetBounds
          (FSimpleStreamableAssetManager *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TBoxSphereBounds<double,double> *pTVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->SphereRadius = 0.0;
  uVar8 = param_1 >> 0x1f & 3;
  uVar6 = param_1 + uVar8;
  uVar8 = (uVar6 & 3) - uVar8;
  uVar6 = (int)uVar6 >> 2;
  lVar10 = (longlong)(int)uVar8;
  if ((param_1 < 0) || ((this->ObjectBounds4).ArrayNum <= (int)uVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("BoundsIndex >= 0 && ObjectBounds4Index < ObjectBounds4.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                       ,0x23e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
      return pTVar7;
    }
  }
  uVar9 = 0;
  if ((int)uVar6 < (this->ObjectBounds4).ArrayNum) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar3 = (this->ObjectBounds4).AllocatorInstance.Data;
  if (uVar8 < 4) {
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
         *(double *)(pFVar3 + lVar10 * 8 + (longlong)(int)uVar6 * 0x150);
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y =
         *(double *)(pFVar3 + lVar10 * 8 + (longlong)(int)uVar6 * 0x150 + 0x20);
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
         *(double *)(pFVar3 + lVar10 * 8 + (longlong)(int)uVar6 * 0x150 + 0x40);
LAB_14879cd32:
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X =
         (double)*(float *)(pFVar3 + lVar10 * 4 + (longlong)(int)uVar6 * 0x150 + 0xc0);
  }
  else {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x319,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
      return pTVar7;
    }
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
         *(double *)(pFVar3 + lVar10 * 8 + (longlong)(int)uVar6 * 0x150);
    if (uVar8 < 4) {
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y =
           *(double *)(pFVar3 + lVar10 * 8 + (longlong)(int)uVar6 * 0x150 + 0x20);
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
           *(double *)(pFVar3 + lVar10 * 8 + (longlong)(int)uVar6 * 0x150 + 0x40);
      goto LAB_14879cd32;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x319,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
      return pTVar7;
    }
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y =
         *(double *)(pFVar3 + lVar10 * 8 + (longlong)(int)uVar6 * 0x150 + 0x20);
    if (uVar8 < 4) {
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
           *(double *)(pFVar3 + lVar10 * 8 + (longlong)(int)uVar6 * 0x150 + 0x40);
      goto LAB_14879cd32;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x319,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
      return pTVar7;
    }
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
         *(double *)(pFVar3 + lVar10 * 8 + (longlong)(int)uVar6 * 0x150 + 0x40);
    if (uVar8 < 4) goto LAB_14879cd32;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x319,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
      return pTVar7;
    }
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X =
         (double)*(float *)(pFVar3 + lVar10 * 4 + (longlong)(int)uVar6 * 0x150 + 0xc0);
    if (3 < uVar8) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x319,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
        return pTVar7;
      }
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y =
           (double)*(float *)(pFVar3 + lVar10 * 4 + (longlong)(int)uVar6 * 0x150 + 0xd0);
      if (3 < uVar8) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                           ,0x319,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
          return pTVar7;
        }
      }
      goto LAB_14879cdb0;
    }
  }
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y =
       (double)*(float *)(pFVar3 + lVar10 * 4 + (longlong)(int)uVar6 * 0x150 + 0xd0);
LAB_14879cdb0:
  dVar11 = (double)*(float *)(pFVar3 + lVar10 * 4 + (longlong)(int)uVar6 * 0x150 + 0xe0);
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar11;
  dVar1 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  dVar2 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y;
  auVar12._0_8_ = dVar2 * dVar2;
  auVar12._8_8_ = 0;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar1 * dVar1 + auVar12._0_8_ + dVar11 * dVar11;
  auVar13 = sqrtpd(auVar12,auVar13);
  __return_storage_ptr__->SphereRadius = auVar13._0_8_;
  return __return_storage_ptr__;
}

// GetDistanceAndRange @ 14879d790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FSimpleStreamableAssetManager::GetDistanceAndRange
          (FUpdate *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  double dVar2;
  
  dVar2 = (double)param_1->MinDistance - (param_1->ObjectBounds).SphereRadius;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  *param_2 = (float)dVar2 * (float)dVar2;
  fVar1 = param_1->MinDistance;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *param_3 = fVar1 * fVar1;
  fVar1 = param_1->MaxDistance;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *param_4 = fVar1 * fVar1;
  return;
}

// GetRenderAssetScreenSize @ 1487a3c30

void __cdecl
FSimpleStreamableAssetManager::GetRenderAssetScreenSize
          (EStreamableRenderAssetType param_1,int param_2,float *param_3,float *param_4,int *param_5
          ,float param_6,int param_7,wchar_t *param_8)

{
  code *pcVar1;
  bool bVar2;
  
  if (Instance == (FSimpleStreamableAssetManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                       ,0x8d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GetRenderAssetScreenSize_Impl
            (Instance,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

// GetRenderAssetScreenSize_Impl @ 1487a3cf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSimpleStreamableAssetManager::GetRenderAssetScreenSize_Impl
          (FSimpleStreamableAssetManager *this,EStreamableRenderAssetType param_1,int param_2,
          float *param_3,float *param_4,int *param_5,float param_6,int param_7,wchar_t *param_8)

{
  FAssetBoundElement *pFVar1;
  FBoundsViewInfo *pFVar2;
  byte bVar3;
  float fVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  float *pfVar8;
  float fVar9;
  TArrayView<FSimpleStreamableAssetManager::FAssetBoundElement_const_,int> local_90;
  TBoxSphereBounds<double,double> local_80;
  
  if ((((param_1 != Texture) || (*param_4 <= param_6 && param_6 != *param_4)) ||
      (param_8 != (wchar_t *)0x0)) && (param_2 != -1)) {
    uVar7 = 0;
    if (param_2 < (this->AssetIndexToBounds4Index).ArrayNum) {
      uVar7 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TSimpleSparseArray<FSimpleStreamableAssetManager::FAssetBoundElement>::GetSparseView
              ((TSimpleSparseArray<FSimpleStreamableAssetManager::FAssetBoundElement> *)
               ((this->AssetIndexToBounds4Index).AllocatorInstance.Data + (longlong)param_2 * 0x38),
               &local_90);
    if (local_90.DataPtr != local_90.DataPtr + local_90.ArrayNum) {
      pfVar8 = &(local_90.DataPtr)->TexelFactor;
      do {
        fVar4 = (float)((FAssetBoundElement *)(pfVar8 + -1))->ObjectRegistrationIndex;
        if (fVar4 != -NAN) {
          uVar7 = 0;
          if ((int)fVar4 < (this->BoundsViewInfos).ArrayNum) {
            uVar7 = ~(uint)fVar4 >> 0x1f;
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
          pFVar2 = (FBoundsViewInfo *)
                   ((this->BoundsViewInfos).AllocatorInstance.Data + (longlong)(int)fVar4 * 0xc);
          if (param_1 == Texture) {
            fVar9 = pFVar2->ComponentScale * *pfVar8;
          }
          else {
            fVar9 = *pfVar8;
          }
          bVar3 = *(byte *)(pfVar8 + 1);
          FRenderAssetInstanceAsyncView::ProcessElement
                    (param_1,pFVar2,fVar9,(bool)(bVar3 & 1),param_3,param_4,param_5);
          if (param_8 == (wchar_t *)0x0) {
            if (param_6 < *param_4 || param_6 == *param_4) {
              return;
            }
            if (param_7 <= *param_5) {
              return;
            }
          }
          else {
            GetBounds(this,&local_80,(int)fVar4);
            FRenderAssetInstanceView::OutputToLog
                      (&local_80,(int)fVar4,&this->ObjectBounds4,fVar9,(bool)(bVar3 & 1),
                       pFVar2->MaxNormalizedSize,pFVar2->MaxNormalizedSize_VisibleOnly,param_8,
                       (UPrimitiveComponent *)0x0);
          }
        }
        pFVar1 = (FAssetBoundElement *)(pfVar8 + 2);
        pfVar8 = pfVar8 + 3;
      } while (pFVar1 != local_90.DataPtr + local_90.ArrayNum);
    }
  }
  return;
}

// Init @ 1487adb60

void __cdecl FSimpleStreamableAssetManager::Init(void)

{
  code *pcVar1;
  bool bVar2;
  FSimpleStreamableAssetManager *lpCriticalSection;
  
  if (Instance != (FSimpleStreamableAssetManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                       ,0x42,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lpCriticalSection = ::operator_new(0x160);
  if (lpCriticalSection != (FSimpleStreamableAssetManager *)0x0) {
    memset(lpCriticalSection,0,0x160);
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
    (lpCriticalSection->RemovedAssetsRecords).StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
    (lpCriticalSection->RemovedAssetsRecords).Shard =
         (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>)
         0x0;
    (lpCriticalSection->RemovedAssetsRecords).LockedStorage.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (lpCriticalSection->RemovedAssetsRecords).LockedStorage.ArrayNum = 0;
    (lpCriticalSection->RemovedAssetsRecords).LockedStorage.ArrayMax = 0;
    (lpCriticalSection->RegisterRecords).StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
    (lpCriticalSection->RegisterRecords).Shard =
         (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*>)0x0;
    (lpCriticalSection->RegisterRecords).LockedStorage.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (lpCriticalSection->RegisterRecords).LockedStorage.ArrayNum = 0;
    (lpCriticalSection->RegisterRecords).LockedStorage.ArrayMax = 0;
    (lpCriticalSection->UnregisterRecords).StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
    (lpCriticalSection->UnregisterRecords).Shard =
         (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*>)0x0;
    (lpCriticalSection->UnregisterRecords).LockedStorage.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (lpCriticalSection->UnregisterRecords).LockedStorage.ArrayNum = 0;
    (lpCriticalSection->UnregisterRecords).LockedStorage.ArrayMax = 0;
    (lpCriticalSection->UpdateRecords).StorageAllocatorGuard = (atomic<unsigned_int>)0x0;
    (lpCriticalSection->UpdateRecords).Shard =
         (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*>)0x0;
    (lpCriticalSection->UpdateRecords).LockedStorage.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (lpCriticalSection->UpdateRecords).LockedStorage.ArrayNum = 0;
    (lpCriticalSection->UpdateRecords).LockedStorage.ArrayMax = 0;
    (lpCriticalSection->UpdateLastRenderTimeRecords).StorageAllocatorGuard =
         (atomic<unsigned_int>)0x0;
    (lpCriticalSection->UpdateLastRenderTimeRecords).Shard =
         (atomic<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>
         )0x0;
    (lpCriticalSection->UpdateLastRenderTimeRecords).LockedStorage.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (lpCriticalSection->UpdateLastRenderTimeRecords).LockedStorage.ArrayNum = 0;
    (lpCriticalSection->UpdateLastRenderTimeRecords).LockedStorage.ArrayMax = 0;
    (lpCriticalSection->ObjectUsedIndices).AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    lpCriticalSection->RegisteredObjectCount = 0;
    lpCriticalSection->MaxObjects = 0;
    lpCriticalSection->FreeObjectIndexHint = 0;
    (lpCriticalSection->ObjectUsedIndices).NumBits = 0;
    (lpCriticalSection->ObjectUsedIndices).MaxBits = 0x80;
    (lpCriticalSection->ObjectRegistrationIndexToAssetProperty).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (lpCriticalSection->ObjectRegistrationIndexToAssetProperty).ArrayNum = 0;
    (lpCriticalSection->ObjectRegistrationIndexToAssetProperty).ArrayMax = 0;
    (lpCriticalSection->ObjectBounds4).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (lpCriticalSection->ObjectBounds4).ArrayNum = 0;
    (lpCriticalSection->ObjectBounds4).ArrayMax = 0;
    lpCriticalSection->FreeAssetIndexHint = 0;
    lpCriticalSection->UsedAssetIndices = 0;
    (lpCriticalSection->AssetUsedIndices).AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    (lpCriticalSection->AssetUsedIndices).NumBits = 0;
    (lpCriticalSection->AssetUsedIndices).MaxBits = 0x80;
    (lpCriticalSection->AssetIndexToBounds4Index).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (lpCriticalSection->AssetIndexToBounds4Index).ArrayNum = 0;
    (lpCriticalSection->AssetIndexToBounds4Index).ArrayMax = 0;
    (lpCriticalSection->BoundsViewInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (lpCriticalSection->BoundsViewInfos).ArrayNum = 0;
    (lpCriticalSection->BoundsViewInfos).ArrayMax = 0;
    Instance = lpCriticalSection;
    return;
  }
  Instance = lpCriticalSection;
  return;
}

// Process @ 1487b2860

void __cdecl FSimpleStreamableAssetManager::Process(void)

{
  code *pcVar1;
  FSimpleStreamableAssetManager *lpCriticalSection;
  bool bVar2;
  
  if (GUseSimpleStreamableAssetManager == 0) {
    return;
  }
  if ((Instance == (FSimpleStreamableAssetManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Instance != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                         ,0x50,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lpCriticalSection = Instance;
  if (GUseSimpleStreamableAssetManager == 0) {
    UpdateTask_Async(Instance);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)Instance);
  UpdateTask_Async(Instance);
                    /* WARNING: Could not recover jumptable at 0x0001487b28de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Register @ 1487b4d30

void __cdecl FSimpleStreamableAssetManager::Register(FRegister *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (Instance == (FSimpleStreamableAssetManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                       ,0x9e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRegister>::Push
            (&Instance->RegisterRecords,param_1);
  return;
}

// RegisterRecord @ 1487b5140

void __thiscall
FSimpleStreamableAssetManager::RegisterRecord
          (FSimpleStreamableAssetManager *this,FRegister *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  UClass *pUVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  FIdentityFunctor local_res10 [8];
  int local_res18;
  TArrayView<FStreamingRenderAssetPrimitiveInfo,int> local_98;
  TVector4<double>_u_0 local_88 [2];
  
  if ((param_1->_padding_ == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar6 = __real_3e45798ee0000000;
  fVar23 = __real_322bcc77;
  local_res18 = *(int *)param_1->_padding_;
  if (local_res18 != -1) {
    uVar16 = (param_1->Assets).ArrayNum;
    uVar19 = 1;
    uVar20 = 0;
    if (0 < (int)uVar16) {
      lVar17 = 0;
      do {
        uVar15 = 0;
        if ((int)uVar20 < (int)uVar16) {
          uVar15 = ~uVar20 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar18 = (param_1->Assets).AllocatorInstance.Data;
        lVar21 = *(longlong *)(pFVar18 + lVar17);
        if ((lVar21 == 0) || (*(int *)(lVar21 + 0xb8) == -1)) {
          uVar16 = 0;
          if ((int)uVar20 < (param_1->Assets).ArrayNum) {
            uVar16 = ~uVar20 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar12 = (param_1->Assets).ArrayNum;
          pFVar18 = (param_1->Assets).AllocatorInstance.Data;
          iVar14 = (iVar12 - uVar20) + -1;
          if (1 < iVar14) {
            iVar14 = 1;
          }
          if (iVar14 != 0) {
            iVar12 = iVar12 - iVar14;
LAB_1487b54a5:
            memmove(pFVar18 + (longlong)(int)uVar20 * 0x50,pFVar18 + (longlong)iVar12 * 0x50,
                    (longlong)iVar14 * 0x50);
          }
LAB_1487b54c7:
          uVar20 = uVar20 - 1;
          lVar17 = lVar17 + -0x50;
          piVar1 = &(param_1->Assets).ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
        else {
          if (*(float *)(pFVar18 + lVar17 + 0x40) <= 0.0 &&
              *(float *)(pFVar18 + lVar17 + 0x40) != 0.0) {
            pUVar13 = Z_Construct_UClass_UStaticMesh_NoRegister();
            iVar12 = (int)pUVar13->_padding_;
            if ((*(int *)(*(longlong *)(lVar21 + 0x10) + 0x38) < iVar12) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) + (longlong)iVar12 * 8) !=
                &pUVar13->_padding_)) {
              lVar21 = *(longlong *)(pFVar18 + lVar17);
              pUVar13 = Z_Construct_UClass_USkeletalMesh_NoRegister();
              iVar12 = (int)pUVar13->_padding_;
              if ((*(int *)(*(longlong *)(lVar21 + 0x10) + 0x38) < iVar12) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) + (longlong)iVar12 * 8) !=
                  &pUVar13->_padding_)) {
                lVar21 = *(longlong *)(pFVar18 + lVar17);
                pUVar13 = Z_Construct_UClass_UTexture_NoRegister();
                iVar12 = (int)pUVar13->_padding_;
                if ((((*(int *)(*(longlong *)(lVar21 + 0x10) + 0x38) < iVar12) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) + (longlong)iVar12 * 8)
                      != &pUVar13->_padding_)) ||
                    (iVar12 = (**(code **)(**(longlong **)(pFVar18 + lVar17) + 0x2b0))(),
                    iVar12 != 0x18)) &&
                   (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<_3321758604721126972>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                                        ,0x1c4,
                                        "Info.TexelFactor >= 0.f || Info.RenderAsset->IsA<UStaticMesh>() || Info.RenderAsset->IsA<USkeletalMesh>() || (Info.RenderAsset->IsA<UTexture>() && Info.RenderAsset->GetLODGroupForStreaming() == TEXTUREGROUP_Terrain_Heightmap)"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
            }
          }
          if ((*(float *)(pFVar18 + lVar17 + 0x40) <= fVar23) ||
             (*(double *)(pFVar18 + lVar17 + 0x38) <= dVar6)) {
LAB_1487b538d:
            bVar11 = false;
          }
          else {
            iVar12 = _finite((double)*(float *)(pFVar18 + lVar17 + 0x40));
            if (iVar12 == 0) {
              bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<1302599156367462>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\TextureStreamingTypes.h"
                                  ,0x66,"FMath::IsFinite(TexelFactor)");
              if (bVar11) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              goto LAB_1487b538d;
            }
            bVar11 = true;
          }
          if ((((param_1->_padding_ & 1) == 0) && (!bVar11)) &&
             (0.0 < *(float *)(pFVar18 + lVar17 + 0x40) ||
              *(float *)(pFVar18 + lVar17 + 0x40) == 0.0)) {
            uVar16 = 0;
            if ((int)uVar20 < (param_1->Assets).ArrayNum) {
              uVar16 = ~uVar20 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar12 = (param_1->Assets).ArrayNum;
            pFVar18 = (param_1->Assets).AllocatorInstance.Data;
            iVar14 = (iVar12 - uVar20) + -1;
            if (1 < iVar14) {
              iVar14 = 1;
            }
            if (iVar14 != 0) {
              iVar12 = iVar12 - iVar14;
              goto LAB_1487b54a5;
            }
            goto LAB_1487b54c7;
          }
        }
        uVar16 = (param_1->Assets).ArrayNum;
        uVar20 = uVar20 + 1;
        lVar17 = lVar17 + 0x50;
      } while ((int)uVar20 < (int)uVar16);
    }
    if (GSimpleStreamableAssetManagerEnsureAssetUniqueOnRegistration != 0) {
      if ((int)uVar16 < 1) {
        return;
      }
      AlgoImpl::
      IntroSortInternal<FStreamingRenderAssetPrimitiveInfo,int,FIdentityFunctor,TDereferenceWrapper<FStreamingRenderAssetPrimitiveInfo,_FSimpleStreamableAssetManager::RegisterRecord_::__l18::<lambda_1>_>_>
                ((FStreamingRenderAssetPrimitiveInfo *)(param_1->Assets).AllocatorInstance.Data,
                 uVar16,local_res10[0],(<lambda_1> *)local_res10);
      iVar12 = (param_1->Assets).ArrayNum;
      uVar16 = 1;
      if (1 < iVar12) {
        lVar17 = 0;
        lVar21 = 0x50;
        uVar20 = 0;
        do {
          uVar15 = 0;
          if ((int)uVar19 < iVar12) {
            uVar15 = ~uVar19 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar18 = (param_1->Assets).AllocatorInstance.Data;
          uVar15 = 0;
          if ((int)uVar20 < (param_1->Assets).ArrayNum) {
            uVar15 = ~uVar20 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(longlong *)((param_1->Assets).AllocatorInstance.Data + lVar17) ==
              *(longlong *)(pFVar18 + lVar21)) {
            uVar15 = 0;
            if ((int)uVar20 < (param_1->Assets).ArrayNum) {
              uVar15 = ~uVar20 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar18 = (param_1->Assets).AllocatorInstance.Data + lVar17 + 0x40;
            if (*(float *)pFVar18 <= 0.0 && *(float *)pFVar18 != 0.0) {
              uVar15 = 0;
              if ((int)uVar19 < (param_1->Assets).ArrayNum) {
                uVar15 = ~uVar19 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar18 = (param_1->Assets).AllocatorInstance.Data;
              uVar15 = 0;
              if ((int)uVar20 < (param_1->Assets).ArrayNum) {
                uVar15 = ~uVar20 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (*(longlong *)((param_1->Assets).AllocatorInstance.Data + lVar17) ==
                  *(longlong *)(pFVar18 + lVar21)) {
                uVar15 = 0;
                if ((int)uVar19 < (param_1->Assets).ArrayNum) {
                  uVar15 = ~uVar19 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                fVar23 = *(float *)((param_1->Assets).AllocatorInstance.Data + lVar21 + 0x40);
                uVar15 = 0;
                if ((int)uVar20 < (param_1->Assets).ArrayNum) {
                  uVar15 = ~uVar20 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                fVar22 = *(float *)((param_1->Assets).AllocatorInstance.Data + lVar17 + 0x40);
                if (fVar23 <= fVar22) {
                  fVar22 = fVar23;
                }
                uVar15 = 0;
                if ((int)uVar20 < (param_1->Assets).ArrayNum) {
                  uVar15 = ~uVar20 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                *(float *)((param_1->Assets).AllocatorInstance.Data + lVar17 + 0x40) = fVar22;
              }
            }
          }
          else {
            if (uVar16 != uVar19) {
              uVar15 = 0;
              if ((int)uVar19 < (param_1->Assets).ArrayNum) {
                uVar15 = ~uVar19 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar18 = (param_1->Assets).AllocatorInstance.Data;
              uVar15 = 0;
              if ((int)uVar16 < (param_1->Assets).ArrayNum) {
                uVar15 = ~uVar16 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = (param_1->Assets).AllocatorInstance.Data;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (*(UObject **)(pFVar18 + lVar21) != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(*(UObject **)(pFVar18 + lVar21));
              }
              *(undefined8 *)(pFVar4 + lVar17 + 0x50) = *(undefined8 *)(pFVar18 + lVar21);
              uVar10 = *(undefined8 *)(pFVar18 + lVar21 + 8 + 8);
              *(undefined8 *)(pFVar4 + lVar17 + 0x58) = *(undefined8 *)(pFVar18 + lVar21 + 8);
              *(undefined8 *)(pFVar4 + lVar17 + 0x58 + 8) = uVar10;
              uVar10 = *(undefined8 *)(pFVar18 + lVar21 + 0x18 + 8);
              *(undefined8 *)(pFVar4 + lVar17 + 0x68) = *(undefined8 *)(pFVar18 + lVar21 + 0x18);
              *(undefined8 *)(pFVar4 + lVar17 + 0x68 + 8) = uVar10;
              pFVar2 = pFVar18 + lVar21 + 0x28;
              uVar7 = *(undefined4 *)(pFVar2 + 4);
              uVar8 = *(undefined4 *)(pFVar2 + 8);
              uVar9 = *(undefined4 *)(pFVar2 + 0xc);
              pFVar3 = pFVar4 + lVar17 + 0x78;
              *(undefined4 *)pFVar3 = *(undefined4 *)pFVar2;
              *(undefined4 *)(pFVar3 + 4) = uVar7;
              *(undefined4 *)(pFVar3 + 8) = uVar8;
              *(undefined4 *)(pFVar3 + 0xc) = uVar9;
              *(undefined8 *)(pFVar4 + lVar17 + 0x88) = *(undefined8 *)(pFVar18 + lVar21 + 0x38);
              *(undefined4 *)(pFVar4 + lVar17 + 0x90) = *(undefined4 *)(pFVar18 + lVar21 + 0x40);
              *(undefined4 *)(pFVar4 + lVar17 + 0x94) = *(undefined4 *)(pFVar18 + lVar21 + 0x44);
              uVar15 = (*(uint *)(pFVar4 + lVar17 + 0x98) ^ *(uint *)(pFVar18 + lVar21 + 0x48)) & 1
                       ^ *(uint *)(pFVar4 + lVar17 + 0x98);
              *(uint *)(pFVar4 + lVar17 + 0x98) = uVar15;
              *(uint *)(pFVar4 + lVar17 + 0x98) =
                   (uVar15 ^ *(uint *)(pFVar18 + lVar21 + 0x48)) & 2 ^ uVar15;
            }
            lVar17 = lVar17 + 0x50;
            uVar16 = uVar16 + 1;
            uVar20 = uVar20 + 1;
          }
          iVar12 = (param_1->Assets).ArrayNum;
          uVar19 = uVar19 + 1;
          lVar21 = lVar21 + 0x50;
        } while ((int)uVar19 < iVar12);
      }
    }
    if (0 < (int)uVar16) {
      fVar23 = *(float *)((longlong)&param_1->_padding_ + 4);
      fVar22 = *(float *)&param_1->_padding_;
      if (fVar22 <= 0.0) {
        fVar22 = 0.0;
      }
      dVar6 = (double)fVar23;
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      dVar6 = dVar6 - (double)param_1->_padding_;
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
      local_88[0]._0_8_ = param_1->_padding_;
      local_88[0]._8_8_ = param_1->_padding_;
      local_88[0]._16_8_ = param_1->_padding_;
      local_88[0]._s_0.W = __real_3ff0000000000000;
      SetBounds(this,local_res18,(TBoxSphereBounds<double,double> *)&param_1->_padding_,0xffff0000,
                *(float *)&param_1->_padding_,*(float *)((longlong)&param_1->_padding_ + 4),
                (TVector4<double> *)&local_88[0]._s_0,(float)dVar6 * (float)dVar6,fVar23 * fVar23,
                fVar22 * fVar22);
      local_98.DataPtr =
           (FStreamingRenderAssetPrimitiveInfo *)(param_1->Assets).AllocatorInstance.Data;
      local_98.ArrayNum = uVar16;
      AddRenderAssetElements(this,&local_98,local_res18,(bool)((byte)param_1->_padding_ & 1));
    }
  }
  return;
}

// RemoveRenderAssetElements @ 1487b97e0

void __thiscall
FSimpleStreamableAssetManager::RemoveRenderAssetElements
          (FSimpleStreamableAssetManager *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ForElementType<unsigned_int> FVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  uint local_res10;
  uint local_res18;
  uint local_res20;
  
  local_res10 = param_1;
  if ((param_1 == -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectRegistrationIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                         ,0x289,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->RegisteredObjectCount = this->RegisteredObjectCount + -1;
  if (((param_1 < 0) || ((this->ObjectUsedIndices).NumBits <= param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar14 = (this->ObjectUsedIndices).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)&this->ObjectUsedIndices;
  }
  puVar11 = (uint *)((longlong)FVar14 +
                    (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar11 = *puVar11 & ~(1 << ((byte)param_1 & 0x1f));
  iVar1 = param_1;
  if (this->FreeObjectIndexHint < param_1) {
    iVar1 = this->FreeObjectIndexHint;
  }
  this->FreeObjectIndexHint = iVar1;
  uVar12 = 0;
  if (param_1 < (this->ObjectRegistrationIndexToAssetProperty).ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar13 = (this->ObjectRegistrationIndexToAssetProperty).AllocatorInstance.Data +
            (longlong)param_1 * 0x10;
  local_res20 = *(uint *)&pFVar13[8].field_0x0;
  uVar8 = (ulonglong)(int)local_res20;
  puVar11 = *(uint **)&pFVar13->field_0x0;
  puVar10 = puVar11 + uVar8 * 4;
  while( true ) {
    if (*(int *)&pFVar13[8].field_0x0 != (int)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSimpleStreamableAssetManager::FAssetRecord,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    uVar12 = local_res10;
    if (puVar11 == puVar10) break;
    if ((*puVar11 == 0xffffffff) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AssetIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                           ,0x294,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((puVar11[1] == 0xffffffff) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AssetElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                           ,0x295,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar12 = *puVar11;
    uVar6 = 0;
    if ((int)uVar12 < (this->AssetIndexToBounds4Index).ArrayNum) {
      uVar6 = ~uVar12 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->AssetIndexToBounds4Index).AllocatorInstance.Data;
    lVar16 = (longlong)(int)uVar12 * 0x38;
    uVar12 = puVar11[1];
    if ((int)uVar12 < *(int *)(pFVar2 + lVar16 + 0x20)) {
      pFVar15 = pFVar2 + lVar16 + 8;
      if (((int)uVar12 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = pFVar15;
      if (*(FScriptContainerElement **)(pFVar15 + 0x10) != (FScriptContainerElement *)0x0) {
        pFVar9 = *(FScriptContainerElement **)(pFVar15 + 0x10);
      }
      local_res18 = 1 << ((byte)uVar12 & 0x1f);
      uVar6 = uVar12;
      if ((int)uVar12 < 0) {
        uVar6 = uVar12 + 0x1f;
      }
      if ((*(uint *)(pFVar9 + (longlong)((int)uVar6 >> 5) * 4) & local_res18) != 0) {
        if ((((int)uVar12 < 0) || (*(int *)(pFVar15 + 0x18) <= (int)uVar12)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(FScriptContainerElement **)(pFVar15 + 0x10) != (FScriptContainerElement *)0x0) {
          pFVar15 = *(FScriptContainerElement **)(pFVar15 + 0x10);
        }
        *(uint *)(pFVar15 + (longlong)((int)uVar6 >> 5) * 4) =
             *(uint *)(pFVar15 + (longlong)((int)uVar6 >> 5) * 4) & ~local_res18;
        uVar6 = uVar12;
        if (*(int *)(pFVar2 + lVar16) < (int)uVar12) {
          uVar6 = *(uint *)(pFVar2 + lVar16);
        }
        *(uint *)(pFVar2 + lVar16) = uVar6;
        uVar6 = 0;
        if ((int)uVar12 < *(int *)(pFVar2 + lVar16 + 0x30)) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = *(longlong *)(pFVar2 + lVar16 + 0x28);
        *(undefined4 *)(lVar3 + (longlong)(int)uVar12 * 0xc) = 0xffffffff;
        *(undefined8 *)(lVar3 + 4 + (longlong)(int)uVar12 * 0xc) = 0;
        *(int *)(pFVar2 + lVar16 + 4) = *(int *)(pFVar2 + lVar16 + 4) + -1;
      }
    }
    puVar11 = puVar11 + 4;
    uVar8 = (ulonglong)local_res20;
  }
  iVar1 = *(int *)(pFVar13 + 0xc);
  *(undefined4 *)&pFVar13[8].field_0x0 = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)pFVar13,0,(int *)(pFVar13 + 0xc));
  }
  uVar7 = (int)(uVar12 + ((int)uVar12 >> 0x1f & 3U)) >> 2;
  uVar6 = 0;
  if ((int)uVar7 < (this->ObjectBounds4).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar13 = (this->ObjectBounds4).AllocatorInstance.Data;
  uVar12 = uVar12 & 0x80000003;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
  }
  if ((((int)uVar12 < 0) || (3 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.inl"
                         ,0x1e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar12 < 4) {
    lVar16 = (longlong)(int)uVar12;
    *(undefined8 *)(pFVar13 + lVar16 * 8 + (longlong)(int)uVar7 * 0x150) = 0;
    *(undefined8 *)(pFVar13 + lVar16 * 8 + (longlong)(int)uVar7 * 0x150 + 0x20) = 0;
    *(undefined8 *)(pFVar13 + lVar16 * 8 + (longlong)(int)uVar7 * 0x150 + 0x40) = 0;
    *(undefined8 *)(pFVar13 + lVar16 * 8 + (longlong)(int)uVar7 * 0x150 + 0x60) = 0;
    *(undefined8 *)(pFVar13 + lVar16 * 8 + (longlong)(int)uVar7 * 0x150 + 0x80) = 0;
    *(undefined8 *)(pFVar13 + lVar16 * 8 + (longlong)(int)uVar7 * 0x150 + 0xa0) = 0;
    *(undefined4 *)(pFVar13 + lVar16 * 4 + (longlong)(int)uVar7 * 0x150 + 0xc0) = 0;
    *(undefined4 *)(pFVar13 + lVar16 * 4 + (longlong)(int)uVar7 * 0x150 + 0xd0) = 0;
    *(undefined4 *)(pFVar13 + lVar16 * 4 + (longlong)(int)uVar7 * 0x150 + 0xe0) = 0;
    *(undefined4 *)(pFVar13 + lVar16 * 4 + (longlong)(int)uVar7 * 0x150 + 0xf0) = 0;
    *(undefined4 *)(pFVar13 + lVar16 * 4 + (longlong)(int)uVar7 * 0x150 + 0x100) = 0;
    *(undefined4 *)(pFVar13 + lVar16 * 4 + (longlong)(int)uVar7 * 0x150 + 0x110) = 0;
    *(undefined4 *)(pFVar13 + lVar16 * 4 + (longlong)(int)uVar7 * 0x150 + 0x120) = 0;
    *(undefined4 *)(pFVar13 + lVar16 * 4 + (longlong)(int)uVar7 * 0x150 + 0x130) = 0x7f7fffff;
    *(undefined4 *)(pFVar13 + lVar16 * 4 + (longlong)(int)uVar7 * 0x150 + 0x140) = 0xff7fffff;
    return;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                     ,0x310,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar16 = (longlong)(int)uVar12;
  *(undefined8 *)(pFVar13 + lVar16 * 8 + (longlong)(int)uVar7 * 0x150) = 0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                     ,0x310,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(pFVar13 + lVar16 * 8 + (longlong)(int)uVar7 * 0x150 + 0x20) = 0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                     ,0x310,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(pFVar13 + lVar16 * 8 + (longlong)(int)uVar7 * 0x150 + 0x40) = 0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                     ,0x310,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(pFVar13 + lVar16 * 8 + (longlong)(int)uVar7 * 0x150 + 0x60) = 0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                     ,0x310,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(pFVar13 + lVar16 * 8 + (longlong)(int)uVar7 * 0x150 + 0x80) = 0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                     ,0x310,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(pFVar13 + lVar16 * 8 + (longlong)(int)uVar7 * 0x150 + 0xa0) = 0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                     ,0x310,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(pFVar13 + lVar16 * 4 + (longlong)(int)uVar7 * 0x150 + 0xc0) = 0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                     ,0x310,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(pFVar13 + lVar16 * 4 + (longlong)(int)uVar7 * 0x150 + 0xd0) = 0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                     ,0x310,L"");
  if (!bVar5) {
    *(undefined4 *)(pFVar13 + lVar16 * 4 + (longlong)(int)uVar7 * 0x150 + 0xe0) = 0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)(pFVar13 + lVar16 * 4 + (longlong)(int)uVar7 * 0x150 + 0xf0) = 0;
    *(undefined4 *)(pFVar13 + lVar16 * 4 + (longlong)(int)uVar7 * 0x150 + 0x100) = 0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)(pFVar13 + lVar16 * 4 + (longlong)(int)uVar7 * 0x150 + 0x110) = 0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)(pFVar13 + lVar16 * 4 + (longlong)(int)uVar7 * 0x150 + 0x120) = 0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (!bVar5) {
      *(undefined4 *)(pFVar13 + lVar16 * 4 + (longlong)(int)uVar7 * 0x150 + 0x130) = __real_7f7fffff
      ;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x310,L"");
      if (!bVar5) {
        *(undefined4 *)(pFVar13 + lVar16 * 4 + (longlong)(int)uVar7 * 0x150 + 0x140) = 0xff7fffff;
        return;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// SetBounds @ 1487c16b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSimpleStreamableAssetManager::SetBounds
          (FSimpleStreamableAssetManager *this,int param_1,TBoxSphereBounds<double,double> *param_2,
          uint param_3,float param_4,float param_5,TVector4<double> *param_6,float param_7,
          float param_8,float param_9)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TArray<FBounds4,TSizedDefaultAllocator<32>_> *pTVar13;
  TVector<double>_u_0 local_188;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar7 = (int)(param_1 + (param_1 >> 0x1f & 3U)) >> 2;
  uVar12 = (this->ObjectBounds4).ArrayNum;
  if ((int)uVar12 <= (int)uVar7) {
    if ((uVar7 != uVar12) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectBounds4Index == ObjectBounds4.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                           ,0x231,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_68 = 0;
    local_168 = 0;
    uStack_160 = 0;
    pTVar13 = &this->ObjectBounds4;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    pFVar2 = (pTVar13->AllocatorInstance).Data;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_60 = 0;
    local_38 = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
    uStack_30 = _UNK_150a1c8e8;
    local_28 = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
    uStack_20 = _UNK_150af7a58;
    if (((pFVar2 <= (FScriptContainerElement *)&local_168) &&
        ((FScriptContainerElement *)&local_168 <
         pFVar2 + (longlong)(this->ObjectBounds4).ArrayMax * 0x150)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar8 = (this->ObjectBounds4).ArrayNum;
    piVar1 = &(this->ObjectBounds4).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x150,0x10,&pTVar13->AllocatorInstance,piVar1);
    }
    (this->ObjectBounds4).ArrayNum = iVar8 + 1;
    lVar10 = 2;
    puVar5 = &local_168;
    pFVar2 = (pTVar13->AllocatorInstance).Data + (longlong)iVar8 * 0x150;
    do {
      pFVar11 = pFVar2;
      puVar9 = puVar5;
      uVar4 = puVar9[1];
      *(undefined8 *)pFVar11 = *puVar9;
      *(undefined8 *)(pFVar11 + 8) = uVar4;
      uVar4 = puVar9[3];
      *(undefined8 *)(pFVar11 + 0x10) = puVar9[2];
      *(undefined8 *)(pFVar11 + 0x18) = uVar4;
      uVar4 = puVar9[5];
      *(undefined8 *)(pFVar11 + 0x20) = puVar9[4];
      *(undefined8 *)(pFVar11 + 0x28) = uVar4;
      uVar4 = puVar9[7];
      *(undefined8 *)(pFVar11 + 0x30) = puVar9[6];
      *(undefined8 *)(pFVar11 + 0x38) = uVar4;
      uVar4 = puVar9[9];
      *(undefined8 *)(pFVar11 + 0x40) = puVar9[8];
      *(undefined8 *)(pFVar11 + 0x48) = uVar4;
      uVar4 = puVar9[0xb];
      *(undefined8 *)(pFVar11 + 0x50) = puVar9[10];
      *(undefined8 *)(pFVar11 + 0x58) = uVar4;
      uVar4 = puVar9[0xd];
      *(undefined8 *)(pFVar11 + 0x60) = puVar9[0xc];
      *(undefined8 *)(pFVar11 + 0x68) = uVar4;
      uVar4 = puVar9[0xf];
      *(undefined8 *)(pFVar11 + 0x70) = puVar9[0xe];
      *(undefined8 *)(pFVar11 + 0x78) = uVar4;
      lVar10 = lVar10 + -1;
      puVar5 = puVar9 + 0x10;
      pFVar2 = pFVar11 + 0x80;
    } while (lVar10 != 0);
    uVar4 = puVar9[0x11];
    *(undefined8 *)(pFVar11 + 0x80) = puVar9[0x10];
    *(undefined8 *)(pFVar11 + 0x88) = uVar4;
    uVar4 = puVar9[0x13];
    *(undefined8 *)(pFVar11 + 0x90) = puVar9[0x12];
    *(undefined8 *)(pFVar11 + 0x98) = uVar4;
    uVar4 = puVar9[0x15];
    *(undefined8 *)(pFVar11 + 0xa0) = puVar9[0x14];
    *(undefined8 *)(pFVar11 + 0xa8) = uVar4;
    uVar4 = puVar9[0x17];
    *(undefined8 *)(pFVar11 + 0xb0) = puVar9[0x16];
    *(undefined8 *)(pFVar11 + 0xb8) = uVar4;
    uVar4 = puVar9[0x19];
    *(undefined8 *)(pFVar11 + 0xc0) = puVar9[0x18];
    *(undefined8 *)(pFVar11 + 200) = uVar4;
  }
  uVar12 = 0;
  if ((int)uVar7 < (this->ObjectBounds4).ArrayNum) {
    uVar12 = ~uVar7 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_188._s_0.X = (param_6->field0_0x0)._s_0.X;
  local_188._s_0.Y = (param_6->field0_0x0)._s_0.Y;
  local_188._s_0.Z = (param_6->field0_0x0)._s_0.Z;
  uVar12 = param_1 & 0x80000003;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
  }
  FBounds4::Set((FBounds4 *)
                ((this->ObjectBounds4).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x150),uVar12
                ,param_2,param_3,param_4,param_5,(TVector<double> *)&local_188._s_0,param_7,param_8,
                param_9);
  return;
}

// Shutdown @ 1487c3ed0

void __cdecl FSimpleStreamableAssetManager::Shutdown(void)

{
  FScriptContainerElement *pFVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  FSimpleStreamableAssetManager *lpCriticalSection;
  bool bVar4;
  
  if (Instance == (FSimpleStreamableAssetManager *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                       ,0x48,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lpCriticalSection = Instance;
  if (Instance != (FSimpleStreamableAssetManager *)0x0) {
    pFVar1 = (Instance->BoundsViewInfos).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<FSimpleStreamableAssetManager::TSimpleSparseArray<FSimpleStreamableAssetManager::FAssetBoundElement>,int>
              ((TSimpleSparseArray<FSimpleStreamableAssetManager::FAssetBoundElement> *)
               (lpCriticalSection->AssetIndexToBounds4Index).AllocatorInstance.Data,
               (lpCriticalSection->AssetIndexToBounds4Index).ArrayNum);
    pFVar1 = (lpCriticalSection->AssetIndexToBounds4Index).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    FVar2 = (lpCriticalSection->AssetUsedIndices).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    pFVar1 = (lpCriticalSection->ObjectBounds4).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<TArray<FSimpleStreamableAssetManager::FAssetRecord,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FSimpleStreamableAssetManager::FAssetRecord,TSizedDefaultAllocator<32>_> *)
               (lpCriticalSection->ObjectRegistrationIndexToAssetProperty).AllocatorInstance.Data,
               (lpCriticalSection->ObjectRegistrationIndexToAssetProperty).ArrayNum);
    pFVar1 = (lpCriticalSection->ObjectRegistrationIndexToAssetProperty).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    FVar2 = (lpCriticalSection->ObjectUsedIndices).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime>::
    ~TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime>
              (&lpCriticalSection->UpdateLastRenderTimeRecords);
    TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdate>::
    ~TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdate>
              (&lpCriticalSection->UpdateRecords);
    TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUnregister>::
    ~TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUnregister>
              (&lpCriticalSection->UnregisterRecords);
    TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRegister>::
    ~TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRegister>
              (&lpCriticalSection->RegisterRecords);
    TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord>::
    ~TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord>
              (&lpCriticalSection->RemovedAssetsRecords);
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::operator_delete(lpCriticalSection,0x160);
    return;
  }
  return;
}

// TrySetLastRenderTime @ 1487cac60

void __thiscall
FSimpleStreamableAssetManager::TrySetLastRenderTime
          (FSimpleStreamableAssetManager *this,int param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_1 >> 0x1f & 3;
  uVar4 = param_1 + uVar6;
  uVar6 = (uVar4 & 3) - uVar6;
  uVar4 = (int)uVar4 >> 2;
  if ((-1 < (int)uVar4) && ((int)uVar4 < (this->ObjectBounds4).ArrayNum)) {
    uVar5 = 0;
    if ((int)uVar4 < (this->ObjectBounds4).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->ObjectBounds4).AllocatorInstance.Data;
    if (((int)uVar6 < 0) || (3 < (int)uVar6)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.inl"
                         ,0x3c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (3 < uVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x310,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(float *)(pFVar1 + (longlong)(int)uVar6 * 4 + (longlong)(int)uVar4 * 0x150 + 0x140) = param_2;
  }
  return;
}

// Unregister @ 1487cb5c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl FSimpleStreamableAssetManager::Unregister(FUnregister *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (Instance == (FSimpleStreamableAssetManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                       ,0xa4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUnregister>::Push
            (&Instance->UnregisterRecords,param_1);
  return;
}

// UnregisterAsset @ 1487cb620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FSimpleStreamableAssetManager::UnregisterAsset(UStreamableRenderAsset *param_1)

{
  TSharedPtr<int,1> *pTVar1;
  code *pcVar2;
  FSimpleStreamableAssetManager *lpCriticalSection;
  bool bVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord> *this;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *local_48;
  FSharedReferencer<1> FStack_40;
  FRemovedAssetRecord local_38;
  
  if (GUseSimpleStreamableAssetManager != 0) {
    if ((Instance == (FSimpleStreamableAssetManager *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Instance != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                           ,0x5a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lpCriticalSection = Instance;
    bVar3 = GUseSimpleStreamableAssetManager != 0;
    if (bVar3) {
      EnterCriticalSection((LPCRITICAL_SECTION)Instance);
    }
    pTVar1 = &param_1->SimpleStreamableAssetManagerIndex;
    local_38.SimpleStreamableAssetManagerIndex.Object = pTVar1->Object;
    this = &Instance->RemovedAssetsRecords;
    local_38.SimpleStreamableAssetManagerIndex.SharedReferenceCount.ReferenceController =
         (param_1->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController;
    (param_1->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar1->Object = (int *)0x0;
    local_38.AssetElementIndex = -1;
    local_38.StreamableRenderAsset_ForDebug = param_1;
    TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord>::Push
              (this,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SimpleStreamableAssetManagerIndex.SharedReferenceCount.ReferenceController);
    pTVar5 = ::operator_new(0x18);
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      local_48 = ___xmm_00000000000000000000000000000010;
      pTVar6 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_40.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6 = pTVar5 + 1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)&___7__TIntrusiveReferenceController_H_00_SharedPointerInternals__6B_;
      *(undefined4 *)&pTVar5[1]._padding_ = 0xffffffff;
      if ((pTVar6 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      FStack_40.ReferenceController = pTVar5;
      local_48 = pTVar6;
    }
    if (pTVar1 != (TSharedPtr<int,1> *)&local_48) {
      pTVar1->Object = (int *)pTVar6;
      local_48 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->SimpleStreamableAssetManagerIndex).SharedReferenceCount,&FStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (bVar3) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// UnregisterRecord @ 1487cb800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSimpleStreamableAssetManager::UnregisterRecord
          (FSimpleStreamableAssetManager *this,FUnregister *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_1->ObjectRegistrationIndex).Object == (int *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(param_1->ObjectRegistrationIndex).Object;
  if (iVar1 != -1) {
    RemoveRenderAssetElements(this,iVar1);
    if ((param_1->ObjectRegistrationIndex).Object == (int *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(param_1->ObjectRegistrationIndex).Object = -1;
  }
  return;
}

// Update @ 1487cb8a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl FSimpleStreamableAssetManager::Update(FUpdate *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (Instance == (FSimpleStreamableAssetManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                       ,0xaa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdate>::Push
            (&Instance->UpdateRecords,param_1);
  return;
}

// Update @ 1487cb900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl FSimpleStreamableAssetManager::Update(FUpdateLastRenderTime *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (Instance == (FSimpleStreamableAssetManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                       ,0xb0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime>::Push
            (&Instance->UpdateLastRenderTimeRecords,param_1);
  return;
}

// UpdateBoundSizes @ 1487cb960

void __cdecl
FSimpleStreamableAssetManager::UpdateBoundSizes
          (TArray<FStreamingViewInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FStreamingViewInfoExtra,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2,float param_3,FRenderAssetStreamingSettings *param_4)

{
  int iVar1;
  code *pcVar2;
  FSimpleStreamableAssetManager *pFVar3;
  bool bVar4;
  bool bVar5;
  float local_48 [2];
  TArrayView<FBounds4_const_,int> local_40 [2];
  
  if ((Instance == (FSimpleStreamableAssetManager *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Instance != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                         ,0x7f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar3 = Instance;
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Silver,"FSimpleStreamableAssetManager_UpdateBounds");
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId723,"FSimpleStreamableAssetManager_UpdateBounds",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
               ,0x2d3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId723);
  }
  local_40[0].DataPtr = (FBounds4 *)(pFVar3->ObjectBounds4).AllocatorInstance.Data;
  iVar1 = (pFVar3->ObjectBounds4).ArrayNum;
  local_48[0] = 0.0;
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_40[0].ArrayNum = iVar1;
  FRenderAssetInstanceAsyncView::UpdateBoundSizes
            (param_1,param_2,param_3,__real_3f800000,param_4,local_40,&pFVar3->BoundsViewInfos,
             local_48);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// UpdateBoundSizes_Impl @ 1487cbec0

void __thiscall
FSimpleStreamableAssetManager::UpdateBoundSizes_Impl
          (FSimpleStreamableAssetManager *this,
          TArray<FStreamingViewInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FStreamingViewInfoExtra,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2,float param_3,FRenderAssetStreamingSettings *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  float local_res8 [2];
  TArrayView<FBounds4_const_,int> local_38 [2];
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Silver,"FSimpleStreamableAssetManager_UpdateBounds");
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId723,"FSimpleStreamableAssetManager_UpdateBounds",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
               ,0x2d3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId723);
  }
  local_38[0].DataPtr = (FBounds4 *)(this->ObjectBounds4).AllocatorInstance.Data;
  iVar1 = (this->ObjectBounds4).ArrayNum;
  local_res8[0] = 0.0;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_38[0].ArrayNum = iVar1;
  FRenderAssetInstanceAsyncView::UpdateBoundSizes
            (param_1,param_2,param_3,__real_3f800000,param_4,local_38,&this->BoundsViewInfos,
             local_res8);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// UpdateRecord @ 1487cf300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSimpleStreamableAssetManager::UpdateRecord(FSimpleStreamableAssetManager *this,FUpdate *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  TVector4<double>_u_0 local_28;
  
  if ((param_1->ObjectRegistrationIndex).Object == (int *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(param_1->ObjectRegistrationIndex).Object;
  if (iVar1 != -1) {
    fVar6 = param_1->MinDistance;
    fVar5 = param_1->MaxDistance;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    dVar4 = (double)fVar6 - (param_1->ObjectBounds).SphereRadius;
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
    local_28._s_0.X = (param_1->ObjectBounds).Origin.field0_0x0._s_0.X;
    local_28._s_0.Y = (param_1->ObjectBounds).Origin.field0_0x0._s_0.Y;
    local_28._s_0.Z = (param_1->ObjectBounds).Origin.field0_0x0._s_0.Z;
    local_28._s_0.W = __real_3ff0000000000000;
    SetBounds(this,iVar1,&param_1->ObjectBounds,0xffff0000,param_1->StreamingScaleFactor,
              param_1->LastRenderedTime,(TVector4<double> *)&local_28._s_0,
              (float)dVar4 * (float)dVar4,fVar6 * fVar6,fVar5 * fVar5);
  }
  return;
}

// UpdateRecord @ 1487cf400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSimpleStreamableAssetManager::UpdateRecord
          (FSimpleStreamableAssetManager *this,FUpdateLastRenderTime *param_1)

{
  float fVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (((param_1->ObjectRegistrationIndex).Object == (int *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = *(param_1->ObjectRegistrationIndex).Object;
  if (iVar2 != -1) {
    uVar8 = iVar2 >> 0x1f & 3;
    fVar1 = param_1->LastRenderedTime;
    uVar6 = iVar2 + uVar8;
    uVar8 = (uVar6 & 3) - uVar8;
    uVar6 = (int)uVar6 >> 2;
    if ((-1 < (int)uVar6) && ((int)uVar6 < (this->ObjectBounds4).ArrayNum)) {
      uVar7 = 0;
      if ((int)uVar6 < (this->ObjectBounds4).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->ObjectBounds4).AllocatorInstance.Data;
      if ((((int)uVar8 < 0) || (3 < (int)uVar8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < 4",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.inl"
                             ,0x3c,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((3 < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                             ,0x310,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(float *)(pFVar3 + (longlong)(int)uVar8 * 4 + (longlong)(int)uVar6 * 0x150 + 0x140) = fVar1;
    }
  }
  return;
}

// UpdateTask_Async @ 1487d1020

void __thiscall FSimpleStreamableAssetManager::UpdateTask_Async(FSimpleStreamableAssetManager *this)

{
  double *pdVar1;
  undefined8 *puVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  void *pvVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*,TSizedDefaultAllocator<32>_>
  *pTVar13;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*,TSizedDefaultAllocator<32>_>
  *pTVar14;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*,TSizedDefaultAllocator<32>_>
  *pTVar15;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*,TSizedDefaultAllocator<32>_>
  *pTVar16;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*,TSizedDefaultAllocator<32>_>
  *pTVar17;
  uint *puVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  FRegister *pFVar26;
  double *pdVar27;
  ForElementType<unsigned_int> FVar28;
  FScriptContainerElement *pFVar29;
  longlong *plVar30;
  FRegister *pFVar31;
  double *pdVar32;
  int iVar33;
  int iVar34;
  longlong *plVar35;
  longlong lVar36;
  bool bVar37;
  bool bVar38;
  double dVar39;
  float fVar40;
  float fVar41;
  int local_res18;
  int local_res20;
  int local_188;
  int local_184;
  int local_180;
  FScriptContainerElement *local_178;
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  FScriptContainerElement *local_160;
  FScriptContainerElement *local_148;
  TVector4<double>_u_0 local_138;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*,TSizedDefaultAllocator<32>_>
  local_118;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*,TSizedDefaultAllocator<32>_>
  local_108;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*,TSizedDefaultAllocator<32>_>
  local_f8;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*,TSizedDefaultAllocator<32>_>
  local_e8;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*,TSizedDefaultAllocator<32>_>
  local_d8;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*,TSizedDefaultAllocator<32>_>
  local_c8;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*,TSizedDefaultAllocator<32>_>
  local_b8;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*,TSizedDefaultAllocator<32>_>
  local_a8;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*,TSizedDefaultAllocator<32>_>
  local_98;
  TArray<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*,TSizedDefaultAllocator<32>_>
  local_88 [4];
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Silver,"FSimpleStreamableAssetManager_UpdateTask_Async");
  bVar37 = -1 < CpuChannel->Enabled;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId229,"FSimpleStreamableAssetManager_UpdateTask_Async",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
               ,0xe5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId229);
  }
  iVar34 = this->RegisteredObjectCount;
  iVar3 = this->UsedAssetIndices;
  local_148 = (FScriptContainerElement *)0x0;
  local_res20 = 0;
  local_160 = (FScriptContainerElement *)0x0;
  local_180 = 0;
  local_168 = (FScriptContainerElement *)0x0;
  local_res18 = 0;
  local_170 = (FScriptContainerElement *)0x0;
  local_188 = 0;
  local_178 = (FScriptContainerElement *)0x0;
  local_184 = 0;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Silver,"FSimpleStreamableAssetManager_MoveData");
  bVar38 = -1 < CpuChannel->Enabled;
  if (bVar38) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId247,"FSimpleStreamableAssetManager_MoveData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
               ,0xf7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId247);
  }
  pTVar13 = TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdate>::ExtractShards
                      (&this->UpdateRecords,&local_118);
  if (&local_c8 != pTVar13) {
    local_148 = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res20 = pTVar13->ArrayNum;
    pTVar13->ArrayNum = 0;
    pTVar13->ArrayMax = 0;
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  pTVar14 = TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime>::
            ExtractShards(&this->UpdateLastRenderTimeRecords,&local_108);
  if (&local_b8 != pTVar14) {
    local_160 = (pTVar14->AllocatorInstance).Data;
    (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_180 = pTVar14->ArrayNum;
    pTVar14->ArrayNum = 0;
    pTVar14->ArrayMax = 0;
  }
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  pTVar15 = TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRegister>::ExtractShards
                      (&this->RegisterRecords,&local_f8);
  if (&local_a8 != pTVar15) {
    local_168 = (pTVar15->AllocatorInstance).Data;
    (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res18 = pTVar15->ArrayNum;
    pTVar15->ArrayNum = 0;
    pTVar15->ArrayMax = 0;
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  pTVar16 = TLocklessGrowingStorage<FSimpleStreamableAssetManager::FUnregister>::ExtractShards
                      (&this->UnregisterRecords,&local_e8);
  if (&local_98 != pTVar16) {
    local_170 = (pTVar16->AllocatorInstance).Data;
    (pTVar16->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_188 = pTVar16->ArrayNum;
    pTVar16->ArrayNum = 0;
    pTVar16->ArrayMax = 0;
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  pTVar17 = TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord>::
            ExtractShards(&this->RemovedAssetsRecords,&local_d8);
  if (local_88 != pTVar17) {
    local_178 = (pTVar17->AllocatorInstance).Data;
    (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_184 = pTVar17->ArrayNum;
    pTVar17->ArrayNum = 0;
    pTVar17->ArrayMax = 0;
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (bVar38) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Silver,"FSimpleStreamableAssetManager_AssignObjectIndex");
  bVar38 = -1 < CpuChannel->Enabled;
  if (bVar38) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId257,"FSimpleStreamableAssetManager_AssignObjectIndex",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
               ,0x101);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId257);
  }
  pFVar20 = local_168;
  do {
    if (pFVar20 == local_168 + (longlong)local_res18 * 8) {
      if (bVar38) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Silver,"FSimpleStreamableAssetManager_Process")
      ;
      bVar38 = -1 < CpuChannel->Enabled;
      if (bVar38) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId296,"FSimpleStreamableAssetManager_Process",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                   ,0x128);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId296);
      }
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Silver,"FSimpleStreamableAssetManager_Unregister");
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&::__CpuProfilerEventSpecId299,"FSimpleStreamableAssetManager_Unregister",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                   ,299);
        FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId299);
      }
      for (pFVar20 = local_170; pFVar20 != local_170 + (longlong)local_188 * 8;
          pFVar20 = pFVar20 + 8) {
        iVar12 = *(int *)(*(longlong *)pFVar20 + 4);
        plVar30 = (longlong *)(*(longlong *)pFVar20 + 8);
        if ((iVar12 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar35 = plVar30 + (longlong)iVar12 * 3;
        for (; plVar30 != plVar35; plVar30 = plVar30 + 3) {
          if ((*plVar30 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(int *)*plVar30 != -1) {
            RemoveRenderAssetElements(this,*(int *)*plVar30);
            if ((*plVar30 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(undefined4 *)*plVar30 = 0xffffffff;
          }
        }
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Silver,"FSimpleStreamableAssetManager_Register");
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId311,"FSimpleStreamableAssetManager_Register",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                   ,0x137);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId311);
      }
      for (pFVar20 = local_168; pFVar20 != local_168 + (longlong)local_res18 * 8;
          pFVar20 = pFVar20 + 8) {
        iVar12 = *(int *)(*(longlong *)pFVar20 + 4);
        pFVar26 = (FRegister *)(*(longlong *)pFVar20 + 8);
        if ((iVar12 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar31 = pFVar26 + iVar12;
        for (; pFVar26 != pFVar31; pFVar26 = pFVar26 + 1) {
          RegisterRecord(this,pFVar26);
        }
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Silver,"FSimpleStreamableAssetManager_Update");
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId323,"FSimpleStreamableAssetManager_Update",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                   ,0x143);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId323);
      }
      dVar7 = __real_3ff0000000000000;
      for (pFVar20 = local_148; pFVar20 != local_148 + (longlong)local_res20 * 8;
          pFVar20 = pFVar20 + 8) {
        lVar36 = *(longlong *)pFVar20;
        iVar12 = *(int *)(lVar36 + 4);
        if ((iVar12 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pdVar32 = (double *)(lVar36 + 8) + (longlong)iVar12 * 0xd;
        if ((double *)(lVar36 + 8) != pdVar32) {
          pdVar27 = (double *)(lVar36 + 0x28);
          do {
            if ((pdVar27[-4] == 0.0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(int *)pdVar27[-4] != -1) {
              fVar41 = *(float *)((longlong)pdVar27 + 0x34);
              local_138._s_0.Y = pdVar27[-1];
              local_138._s_0.Z = *pdVar27;
              fVar40 = *(float *)(pdVar27 + 7);
              if (fVar40 <= 0.0) {
                fVar40 = 0.0;
              }
              local_138._s_0.W = dVar7;
              dVar39 = (double)fVar41 - pdVar27[4];
              if (fVar41 <= 0.0) {
                fVar41 = 0.0;
              }
              if (dVar39 <= 0.0) {
                dVar39 = 0.0;
              }
              local_138._s_0.X =
                   (((TBoxSphereBounds<double,double> *)(pdVar27 + -2))->Origin).field0_0x0._s_0.X;
              SetBounds(this,*(int *)pdVar27[-4],(TBoxSphereBounds<double,double> *)(pdVar27 + -2),
                        0xffff0000,*(float *)(pdVar27 + 6),*(float *)((longlong)pdVar27 + 0x3c),
                        (TVector4<double> *)&local_138._s_0,(float)dVar39 * (float)dVar39,
                        fVar41 * fVar41,fVar40 * fVar40);
            }
            pdVar1 = pdVar27 + 9;
            pdVar27 = pdVar27 + 0xd;
          } while (pdVar1 != pdVar32);
        }
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Silver,"FSimpleStreamableAssetManager_UpdateLastRenderTime");
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId335,"FSimpleStreamableAssetManager_UpdateLastRenderTime"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                   ,0x14f);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId335);
      }
      pFVar20 = local_160;
      do {
        if (pFVar20 == local_160 + (longlong)local_180 * 8) {
          if (bVar8) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          FGenericPlatformMisc::EndNamedEvent();
          FGenericPlatformMisc::BeginNamedEvent
                    (&FColor::Silver,"FSimpleStreamableAssetManager_RemoveAssets");
          bVar8 = -1 < CpuChannel->Enabled;
          if (bVar8) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId347,"FSimpleStreamableAssetManager_RemoveAssets",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                       ,0x15b);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId347);
          }
          pFVar20 = local_178;
          do {
            if (pFVar20 == local_178 + (longlong)local_184 * 8) {
              if (bVar8) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              FGenericPlatformMisc::EndNamedEvent();
              if (bVar38) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              FGenericPlatformMisc::EndNamedEvent();
              lVar36 = (longlong)this->RegisteredObjectCount;
              if (((iVar34 != this->RegisteredObjectCount) &&
                  (__GTraceCounterRegisteredObjects.Value != lVar36)) &&
                 (__GTraceCounterRegisteredObjects.Value = lVar36, -1 < CountersChannel->Enabled)) {
                if (__GTraceCounterRegisteredObjects.CounterId == (atomic<unsigned_int>)0x0) {
                  uVar10 = FCountersTrace::OutputInitCounter
                                     (__GTraceCounterRegisteredObjects.CounterName,
                                      TraceCounterType_Int,
                                      __GTraceCounterRegisteredObjects.CounterFlags & 0xf);
                  LOCK();
                  if (__GTraceCounterRegisteredObjects.CounterId == (atomic<unsigned_int>)0x0) {
                    __GTraceCounterRegisteredObjects.CounterId._2_2_ = 0;
                    __GTraceCounterRegisteredObjects.CounterId._0_2_ = uVar10;
                  }
                  UNLOCK();
                }
                FCountersTrace::OutputSetValue
                          (__GTraceCounterRegisteredObjects.CounterId._0_2_,
                           __GTraceCounterRegisteredObjects.Value);
              }
              lVar36 = (longlong)this->UsedAssetIndices;
              if (((iVar3 != this->UsedAssetIndices) &&
                  (__GTraceCounterRegisteredAssets.Value != lVar36)) &&
                 (__GTraceCounterRegisteredAssets.Value = lVar36, -1 < CountersChannel->Enabled)) {
                if (__GTraceCounterRegisteredAssets.CounterId == (atomic<unsigned_int>)0x0) {
                  uVar10 = FCountersTrace::OutputInitCounter
                                     (__GTraceCounterRegisteredAssets.CounterName,
                                      TraceCounterType_Int,
                                      __GTraceCounterRegisteredAssets.CounterFlags & 0xf);
                  LOCK();
                  if (__GTraceCounterRegisteredAssets.CounterId == (atomic<unsigned_int>)0x0) {
                    __GTraceCounterRegisteredAssets.CounterId._2_2_ = 0;
                    __GTraceCounterRegisteredAssets.CounterId._0_2_ = uVar10;
                  }
                  UNLOCK();
                }
                FCountersTrace::OutputSetValue
                          (__GTraceCounterRegisteredAssets.CounterId._0_2_,
                           __GTraceCounterRegisteredAssets.Value);
              }
              iVar34 = 0;
              pFVar20 = local_148;
              while( true ) {
                if (pFVar20 == local_148 + (longlong)local_res20 * 8) {
                  lVar36 = (longlong)iVar34;
                  if ((__GTraceCounterUpdatedObjects.Value != lVar36) &&
                     (__GTraceCounterUpdatedObjects.Value = lVar36, -1 < CountersChannel->Enabled))
                  {
                    if (__GTraceCounterUpdatedObjects.CounterId == (atomic<unsigned_int>)0x0) {
                      uVar10 = FCountersTrace::OutputInitCounter
                                         (__GTraceCounterUpdatedObjects.CounterName,
                                          TraceCounterType_Int,
                                          __GTraceCounterUpdatedObjects.CounterFlags & 0xf);
                      LOCK();
                      if (__GTraceCounterUpdatedObjects.CounterId == (atomic<unsigned_int>)0x0) {
                        __GTraceCounterUpdatedObjects.CounterId._2_2_ = 0;
                        __GTraceCounterUpdatedObjects.CounterId._0_2_ = uVar10;
                      }
                      UNLOCK();
                    }
                    FCountersTrace::OutputSetValue
                              (__GTraceCounterUpdatedObjects.CounterId._0_2_,
                               __GTraceCounterUpdatedObjects.Value);
                  }
                  iVar34 = 0;
                  pFVar20 = local_168;
                  while( true ) {
                    if (pFVar20 == local_168 + (longlong)local_res18 * 8) {
                      lVar36 = (longlong)iVar34;
                      if ((__GTraceCounterAddedObjects.Value != lVar36) &&
                         (__GTraceCounterAddedObjects.Value = lVar36, -1 < CountersChannel->Enabled)
                         ) {
                        if (__GTraceCounterAddedObjects.CounterId == (atomic<unsigned_int>)0x0) {
                          uVar10 = FCountersTrace::OutputInitCounter
                                             (__GTraceCounterAddedObjects.CounterName,
                                              TraceCounterType_Int,
                                              __GTraceCounterAddedObjects.CounterFlags & 0xf);
                          LOCK();
                          if (__GTraceCounterAddedObjects.CounterId == (atomic<unsigned_int>)0x0) {
                            __GTraceCounterAddedObjects.CounterId._2_2_ = 0;
                            __GTraceCounterAddedObjects.CounterId._0_2_ = uVar10;
                          }
                          UNLOCK();
                        }
                        FCountersTrace::OutputSetValue
                                  (__GTraceCounterAddedObjects.CounterId._0_2_,
                                   __GTraceCounterAddedObjects.Value);
                      }
                      iVar34 = 0;
                      pFVar20 = local_170;
                      while( true ) {
                        if (pFVar20 == local_170 + (longlong)local_188 * 8) {
                          lVar36 = (longlong)iVar34;
                          if ((__GTraceCounterRemovedObjects.Value != lVar36) &&
                             (__GTraceCounterRemovedObjects.Value = lVar36,
                             -1 < CountersChannel->Enabled)) {
                            if (__GTraceCounterRemovedObjects.CounterId == (atomic<unsigned_int>)0x0
                               ) {
                              uVar10 = FCountersTrace::OutputInitCounter
                                                 (__GTraceCounterRemovedObjects.CounterName,
                                                  TraceCounterType_Int,
                                                  __GTraceCounterRemovedObjects.CounterFlags & 0xf);
                              LOCK();
                              if (__GTraceCounterRemovedObjects.CounterId ==
                                  (atomic<unsigned_int>)0x0) {
                                __GTraceCounterRemovedObjects.CounterId._2_2_ = 0;
                                __GTraceCounterRemovedObjects.CounterId._0_2_ = uVar10;
                              }
                              UNLOCK();
                            }
                            FCountersTrace::OutputSetValue
                                      (__GTraceCounterRemovedObjects.CounterId._0_2_,
                                       __GTraceCounterRemovedObjects.Value);
                          }
                          for (pFVar20 = local_178; pFVar20 != local_178 + (longlong)local_184 * 8;
                              pFVar20 = pFVar20 + 8) {
                            pvVar5 = *(void **)pFVar20;
                            if (pvVar5 != (void *)0x0) {
                              lVar25 = 0x200;
                              lVar36 = (longlong)pvVar5 + 0x4010;
                              do {
                                puVar2 = (undefined8 *)(lVar36 + -0x20);
                                lVar36 = lVar36 + -0x20;
                                SharedPointerInternals::TReferenceControllerBase<1>::
                                ReleaseSharedReferenceNoInline
                                          ((TReferenceControllerBase<1> *)*puVar2);
                                lVar25 = lVar25 + -1;
                              } while (lVar25 != 0);
                              ::operator_delete(pvVar5,0x4008);
                            }
                          }
                          for (pFVar20 = local_160; pFVar20 != local_160 + (longlong)local_180 * 8;
                              pFVar20 = pFVar20 + 8) {
                            pvVar5 = *(void **)pFVar20;
                            if (pvVar5 != (void *)0x0) {
                              lVar25 = 0x200;
                              lVar36 = (longlong)pvVar5 + 0x4010;
                              do {
                                puVar2 = (undefined8 *)(lVar36 + -0x20);
                                lVar36 = lVar36 + -0x20;
                                SharedPointerInternals::TReferenceControllerBase<1>::
                                ReleaseSharedReferenceNoInline
                                          ((TReferenceControllerBase<1> *)*puVar2);
                                lVar25 = lVar25 + -1;
                              } while (lVar25 != 0);
                              ::operator_delete(pvVar5,0x4008);
                            }
                          }
                          if (local_178 != (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_178);
                          }
                          if (local_170 != (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_170);
                          }
                          if (local_168 != (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_168);
                          }
                          if (local_160 != (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_160);
                          }
                          if (local_148 != (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_148);
                          }
                          if (bVar37) {
                            FCpuProfilerTrace::OutputEndEvent();
                          }
                          FGenericPlatformMisc::EndNamedEvent();
                          return;
                        }
                        pvVar5 = *(void **)pFVar20;
                        iVar3 = *(int *)((longlong)pvVar5 + 4);
                        if ((iVar3 < 0) &&
                           (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                               ("ArrayNum >= 0",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                ,0xfe,L""), bVar38)) break;
                        iVar34 = iVar34 + iVar3;
                        if (pvVar5 != (void *)0x0) {
                          lVar25 = 0x200;
                          lVar36 = (longlong)pvVar5 + 0x3010;
                          do {
                            puVar2 = (undefined8 *)(lVar36 + -0x18);
                            lVar36 = lVar36 + -0x18;
                            SharedPointerInternals::TReferenceControllerBase<1>::
                            ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)*puVar2);
                            lVar25 = lVar25 + -1;
                          } while (lVar25 != 0);
                          ::operator_delete(pvVar5,0x3008);
                        }
                        pFVar20 = pFVar20 + 8;
                      }
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pvVar5 = *(void **)pFVar20;
                    iVar3 = *(int *)((longlong)pvVar5 + 4);
                    if ((iVar3 < 0) &&
                       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("ArrayNum >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0xfe,L""), bVar38)) break;
                    iVar34 = iVar34 + iVar3;
                    if (pvVar5 != (void *)0x0) {
                      lVar25 = 0x200;
                      lVar36 = (longlong)pvVar5 + 0xf070;
                      do {
                        lVar25 = lVar25 + -1;
                        if (*(void **)(lVar36 + -0x78) != (void *)0x0) {
                          FMemory::Free(*(void **)(lVar36 + -0x78));
                        }
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline
                                  (*(TReferenceControllerBase<1> **)(lVar36 + -0xd8));
                        lVar36 = lVar36 + -0x78;
                      } while (lVar25 != 0);
                      ::operator_delete(pvVar5,0xf008);
                    }
                    pFVar20 = pFVar20 + 8;
                  }
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pvVar5 = *(void **)pFVar20;
                iVar3 = *(int *)((longlong)pvVar5 + 4);
                if ((iVar3 < 0) &&
                   (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ArrayNum >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xfe,L""), bVar38)) break;
                iVar34 = iVar34 + iVar3;
                if (pvVar5 != (void *)0x0) {
                  lVar25 = 0x200;
                  lVar36 = (longlong)pvVar5 + 0xd010;
                  do {
                    puVar2 = (undefined8 *)(lVar36 + -0x68);
                    lVar36 = lVar36 + -0x68;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)*puVar2);
                    lVar25 = lVar25 + -1;
                  } while (lVar25 != 0);
                  ::operator_delete(pvVar5,0xd008);
                }
                pFVar20 = pFVar20 + 8;
              }
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar12 = *(int *)(*(longlong *)pFVar20 + 4);
            plVar30 = (longlong *)(*(longlong *)pFVar20 + 8);
            if ((iVar12 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar35 = plVar30 + (longlong)iVar12 * 4;
            for (; plVar30 != plVar35; plVar30 = plVar30 + 4) {
              if ((*plVar30 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x44d,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar19 = *(uint *)*plVar30;
              if (uVar19 != 0xffffffff) {
                if ((((int)uVar19 < 0) || ((this->AssetUsedIndices).NumBits <= (int)uVar19)) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                FVar4 = (this->AssetUsedIndices).AllocatorInstance.SecondaryData;
                FVar28 = (ForElementType<unsigned_int>)&this->AssetUsedIndices;
                if (FVar4 != (ForElementType<unsigned_int>)0x0) {
                  FVar28 = FVar4;
                }
                uVar22 = uVar19;
                if ((int)uVar19 < 0) {
                  uVar22 = uVar19 + 0x1f;
                }
                puVar18 = (uint *)((longlong)FVar28 + (longlong)((int)uVar22 >> 5) * 4);
                *puVar18 = *puVar18 & ~(1 << ((byte)uVar19 & 0x1f));
                this->UsedAssetIndices = this->UsedAssetIndices + -1;
                uVar22 = uVar19;
                if (this->FreeAssetIndexHint < (int)uVar19) {
                  uVar22 = this->FreeAssetIndexHint;
                }
                this->FreeAssetIndexHint = uVar22;
                uVar22 = 0;
                if ((int)uVar19 < (this->AssetIndexToBounds4Index).ArrayNum) {
                  uVar22 = ~uVar19 >> 0x1f;
                }
                if ((uVar22 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar36 = (longlong)(int)uVar19 * 0x38;
                pFVar29 = (this->AssetIndexToBounds4Index).AllocatorInstance.Data;
                *(undefined8 *)(pFVar29 + lVar36) = 0;
                pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar29 + lVar36 + 8);
                pTVar21->NumBits = 0;
                if ((pTVar21->MaxBits < 0) || (0x80 < pTVar21->MaxBits)) {
                  pTVar21->MaxBits = 0x80;
                  TBitArray<FDefaultBitArrayAllocator>::Realloc(pTVar21,0);
                }
                pFVar29 = pFVar29 + lVar36 + 0x28;
                *(undefined4 *)&pFVar29[8].field_0x0 = 0;
                if (*(int *)(pFVar29 + 0xc) != 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,0,(ForAnyElementType *)pFVar29,0,(int *)(pFVar29 + 0xc));
                }
                if ((*plVar30 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x44d,L""), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                *(undefined4 *)*plVar30 = 0xffffffff;
              }
            }
            pFVar20 = pFVar20 + 8;
          } while( true );
        }
        iVar12 = *(int *)(*(longlong *)pFVar20 + 4);
        plVar30 = (longlong *)(*(longlong *)pFVar20 + 8);
        if ((iVar12 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar35 = plVar30 + (longlong)iVar12 * 4;
        for (; plVar30 != plVar35; plVar30 = plVar30 + 4) {
          if ((*plVar30 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar19 = *(uint *)*plVar30;
          if (uVar19 != 0xffffffff) {
            lVar36 = plVar30[3];
            iVar12 = (int)(uVar19 + ((int)uVar19 >> 0x1f & 3U)) >> 2;
            if ((-1 < iVar12) && (iVar12 < (this->ObjectBounds4).ArrayNum)) {
              if (((this->ObjectBounds4).ArrayNum <= iVar12) &&
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
              pFVar29 = (this->ObjectBounds4).AllocatorInstance.Data;
              uVar19 = uVar19 & 0x80000003;
              if ((int)uVar19 < 0) {
                uVar19 = (uVar19 - 1 | 0xfffffffc) + 1;
              }
              if ((((int)uVar19 < 0) || (3 < (int)uVar19)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index >= 0 && Index < 4",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.inl"
                                     ,0x3c,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((3 < uVar19) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValidIndex(Index)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                     ,0x310,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              *(int *)(pFVar29 + (longlong)(int)uVar19 * 4 + (longlong)iVar12 * 0x150 + 0x140) =
                   (int)lVar36;
            }
          }
        }
        pFVar20 = pFVar20 + 8;
      } while( true );
    }
    iVar12 = *(int *)(*(longlong *)pFVar20 + 4);
    plVar30 = (longlong *)(*(longlong *)pFVar20 + 8);
    if ((iVar12 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar33 = (iVar12 - this->MaxObjects) + this->RegisteredObjectCount;
    if (0 < iVar33) {
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Silver,"FSimpleStreamableAssetManager_Resize");
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId265,"FSimpleStreamableAssetManager_Resize",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                   ,0x109);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId265);
      }
      iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                         (&this->ObjectUsedIndices,iVar33);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(&this->ObjectUsedIndices,iVar11,iVar33,false);
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,iVar33,
                          &(this->ObjectRegistrationIndexToAssetProperty).AllocatorInstance,
                          &(this->ObjectRegistrationIndexToAssetProperty).ArrayNum,
                          &(this->ObjectRegistrationIndexToAssetProperty).ArrayMax);
      memset((this->ObjectRegistrationIndexToAssetProperty).AllocatorInstance.Data +
             (longlong)iVar11 * 0x10,0,(longlong)iVar33 << 4);
      this->MaxObjects = this->MaxObjects + iVar33;
      uVar19 = this->MaxObjects;
      uVar22 = uVar19 & 3;
      if ((int)uVar19 < 0) {
        uVar19 = uVar19 + 3;
        uVar22 = uVar22 - 4;
      }
      iVar33 = ((uint)(uVar22 != 0) - (this->ObjectBounds4).ArrayNum) + ((int)uVar19 >> 2);
      if (0 < iVar33) {
        iVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x150,0x10,iVar33,&(this->ObjectBounds4).AllocatorInstance,
                            &(this->ObjectBounds4).ArrayNum,&(this->ObjectBounds4).ArrayMax);
        DefaultConstructItems<FBounds4,int>
                  ((this->ObjectBounds4).AllocatorInstance.Data + (longlong)iVar11 * 0x150,iVar33);
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
    plVar35 = plVar30 + (longlong)iVar12 * 0xf;
    for (; plVar30 != plVar35; plVar30 = plVar30 + 0xf) {
      if (0 < (int)plVar30[0xe]) {
        iVar12 = this->FreeObjectIndexHint;
        pTVar21 = &this->ObjectUsedIndices;
        iVar33 = (this->ObjectUsedIndices).NumBits;
        uVar19 = -1 << ((byte)iVar12 & 0x1f);
        FVar4 = (this->ObjectUsedIndices).AllocatorInstance.SecondaryData;
        FVar28 = (ForElementType<unsigned_int>)pTVar21;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar28 = FVar4;
        }
        uVar22 = iVar33 + 0x1fU >> 5;
        iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5;
        uVar23 = (ulonglong)iVar12;
        if (iVar12 < (int)uVar22) {
          puVar18 = (uint *)((longlong)FVar28 + uVar23 * 4);
LAB_1487d1560:
          iVar12 = (int)uVar23;
          if ((*puVar18 & uVar19) == uVar19) goto code_r0x0001487d156e;
          uVar19 = ~*(uint *)((longlong)FVar28 + (longlong)iVar12 * 4) & uVar19;
          iVar11 = 0;
          if (uVar19 != 0) {
            for (; (uVar19 >> iVar11 & 1) == 0; iVar11 = iVar11 + 1) {
            }
          }
          iVar24 = 0x20;
          if (uVar19 != 0) {
            iVar24 = iVar11;
          }
          iVar24 = iVar24 + iVar12 * 0x20;
          if (iVar33 <= iVar24) goto LAB_1487d157f;
          if (iVar24 == -1) goto LAB_1487d1584;
          if (((iVar24 < 0) || (iVar33 <= iVar24)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar4 = (this->ObjectUsedIndices).AllocatorInstance.SecondaryData;
          FVar28 = (ForElementType<unsigned_int>)pTVar21;
          if (FVar4 != (ForElementType<unsigned_int>)0x0) {
            FVar28 = FVar4;
          }
          iVar12 = iVar24;
          if (iVar24 < 0) {
            iVar12 = iVar24 + 0x1f;
          }
          puVar18 = (uint *)((longlong)FVar28 + (longlong)(iVar12 >> 5) * 4);
          *puVar18 = *puVar18 | 1 << ((byte)iVar24 & 0x1f);
          TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(pTVar21);
          goto LAB_1487d15aa;
        }
LAB_1487d157f:
        iVar24 = -1;
LAB_1487d1584:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                           ,0x11e,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_1487d15aa:
        this->RegisteredObjectCount = this->RegisteredObjectCount + 1;
        this->FreeObjectIndexHint = iVar24 + 1;
        if ((*plVar30 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(int *)*plVar30 = iVar24;
      }
    }
    pFVar20 = pFVar20 + 8;
  } while( true );
code_r0x0001487d156e:
  uVar23 = (ulonglong)(iVar12 + 1U);
  puVar18 = puVar18 + 1;
  uVar19 = 0xffffffff;
  if ((int)uVar22 <= (int)(iVar12 + 1U)) goto LAB_1487d157f;
  goto LAB_1487d1560;
}

