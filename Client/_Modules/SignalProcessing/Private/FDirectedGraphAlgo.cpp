// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 7

// BreadthFirstTraversal @ 1444b6270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Audio::FDirectedGraphAlgo::BreadthFirstTraversal
          (int param_1,
          TMap<int,UE::MathCore::Graph::FDirectedTreeElement,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::FDirectedTreeElement,0>_>
          *param_2,TFunctionRef<bool___cdecl(int)> *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint *puVar8;
  byte bVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  ForElementType<unsigned_int> FVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  uint uVar16;
  TSparseSetElement<int> *pTVar17;
  ForAnyElementType *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auStackY_168 [32];
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  int local_118 [2];
  uint local_110 [2];
  int local_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_100;
  undefined4 local_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e4;
  int local_e0;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  FSparseArrayAllocationInfo local_b0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_128,1,&local_11c);
  *(int *)local_128.Data = param_1;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
joined_r0x0001444b6317:
  do {
    if (local_120 < 1) {
      local_50 = 0;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_58.Data);
      }
      bVar3 = local_98._12_4_ != 0;
      local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
      if (bVar3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_64 = 0;
      local_70 = 0;
      local_68 = -1;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data);
      }
      return;
    }
    uVar1 = *(uint *)local_128.Data;
    if ((local_120 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_120 + -1 != 0) {
      memmove(local_128.Data,local_128.Data + 4,(longlong)(local_120 + -1) << 2);
    }
    local_120 = local_120 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&local_128,local_120,&local_11c);
    if (local_98._8_4_ != local_64) {
      FVar10.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar10.Data = local_58.Data;
      }
      for (iVar6 = *(int *)((longlong)FVar10.Data + (ulonglong)(local_50 - 1 & uVar1) * 4);
          iVar6 != -1; iVar6 = *(int *)(local_98._0_8_ + (longlong)iVar6 * 0xc + 4)) {
        if (*(uint *)(local_98._0_8_ + (longlong)iVar6 * 0xc) == uVar1) goto joined_r0x0001444b6317;
      }
    }
    local_110[0] = uVar1;
    cVar4 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_110);
    if (local_64 == 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                         (int *)(local_98 + 0xc));
      iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
      FVar12 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_78;
      }
      bVar9 = (byte)iVar5 & 0x1f;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0x1f;
        bVar9 = bVar9 - 0x20;
      }
      puVar8 = (uint *)((longlong)FVar12 + (longlong)(iVar5 >> 5) * 4);
      *puVar8 = *puVar8 & ~(1 << (bVar9 & 0x1f));
      iVar5 = local_68;
    }
    else {
      local_64 = local_64 + -1;
      iVar5 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0xc + 4);
      iVar6 = local_68;
      if (local_64 != 0) {
        *(undefined4 *)(local_98._0_8_ + (longlong)iVar5 * 0xc) = 0xffffffff;
      }
    }
    local_68 = iVar5;
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,&local_b0,iVar6);
    pTVar17 = (TSparseSetElement<int> *)0x0;
    if (local_b0.Pointer != (TSparseSetElement<int> *)0x0) {
      *(uint *)local_b0.Pointer = uVar1;
      *(undefined4 *)((longlong)local_b0.Pointer + 4) = 0xffffffff;
      pTVar17 = local_b0.Pointer;
    }
    uVar19 = *(uint *)pTVar17;
    local_118[0] = local_b0.Index;
    bVar3 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::TryReplaceExisting
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,uVar19,
                       pTVar17,local_118,(bool *)0x0);
    if (!bVar3) {
      uVar16 = 1;
      uVar11 = local_98._8_4_ - local_64;
      if (3 < uVar11) {
        uVar13 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_e4 = (undefined4)lVar14;
        uVar16 = 1 << ((byte)lVar14 & 0x1f);
      }
      if (((int)uVar11 < 1) || ((int)uVar16 <= (int)local_50)) {
        uVar19 = local_50 - 1 & uVar19;
        *(uint *)&pTVar17->field_0x8 = uVar19;
        FVar10.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_58.Data;
        }
        uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar19;
        *(undefined4 *)&pTVar17->field_0x4 = *(undefined4 *)((longlong)FVar10.Data + uVar13 * 4);
        *(int *)((longlong)FVar10.Data + uVar13 * 4) = local_118[0];
      }
      else {
        local_50 = uVar16;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
        }
        if (uVar16 != 0) {
          uVar19 = uVar16;
          if (uVar16 < 2) {
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              uVar19 = 0;
              goto LAB_1444b658d;
            }
          }
          else {
LAB_1444b658d:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_58,0,uVar19,4);
          }
          if (0 < (int)uVar16) {
            uVar20 = (ulonglong)uVar16;
            uVar13 = 0;
            do {
              FVar10.Data = (FScriptContainerElement *)local_60;
              if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar10.Data = local_58.Data;
              }
              uVar7 = uVar13 & (longlong)(int)uVar16 - 1U;
              uVar13 = uVar13 + 1;
              *(undefined4 *)((longlong)FVar10.Data + uVar7 * 4) = 0xffffffff;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
        }
        if (local_50 != 0) {
          pTStack_100 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
          local_108 = 0;
          uStack_104 = 1;
          iStack_f4 = 0;
          iStack_f0 = 0;
          if (local_70 != 0) {
            FVar12 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar12 = local_78;
            }
            uVar19 = *(uint *)FVar12;
            local_108 = 0;
            iStack_f0 = 0;
            while (uVar19 == 0) {
              iStack_f0 = iStack_f0 + 0x20;
              lVar14 = (longlong)local_108;
              local_108 = local_108 + 1;
              if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_108)
              goto LAB_1444b6692;
              uVar19 = ((uint *)((longlong)FVar12 + 4))[lVar14];
            }
            uStack_104 = -uVar19 & uVar19;
            uVar13 = (ulonglong)uStack_104 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            local_e0 = (int)lVar14;
            iStack_f4 = local_e0 + -1 + iStack_f0;
            if (local_70 < iStack_f4) {
LAB_1444b6692:
              iStack_f4 = local_70;
            }
          }
          local_f8 = 0xffffffff;
          local_d8 = (longlong *)local_98;
          local_d0._padding_ = CONCAT44(uStack_104,local_108);
          local_d0.CurrentBitIndex = iStack_f4;
          local_d0.UnvisitedBitMask = 0xffffffff;
          local_d0._28_4_ = uStack_ec;
          local_d0.BaseBitIndex = iStack_f0;
          iVar6 = iStack_f4;
          local_d0.Array = pTStack_100;
          if (iStack_f4 < local_70) {
            do {
              uVar19 = local_50 - 1 & *(uint *)(*local_d8 + (longlong)iVar6 * 0xc);
              lVar14 = *local_d8 + (longlong)iVar6 * 0xc;
              *(uint *)(lVar14 + 8) = uVar19;
              FVar10.Data = (FScriptContainerElement *)local_60;
              if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar10.Data = local_58.Data;
              }
              uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar19;
              *(undefined4 *)(lVar14 + 4) = *(undefined4 *)((longlong)FVar10.Data + uVar13 * 4);
              *(int *)((longlong)FVar10.Data + uVar13 * 4) = iVar6;
              local_d0.UnvisitedBitMask = local_d0.UnvisitedBitMask & ~local_d0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d0);
              iVar6 = local_d0.CurrentBitIndex;
            } while (local_d0.CurrentBitIndex < (local_d0.Array)->NumBits);
          }
        }
      }
    }
    if ((cVar4 != '\0') && (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34)) {
      puVar15 = &param_2->field_0x38;
      if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
        puVar15 = *(undefined1 **)&param_2->field_0x40;
      }
      uVar19 = *(uint *)(puVar15 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & uVar1) * 4);
      if (uVar19 != 0xffffffff) {
        do {
          puVar8 = (uint *)((longlong)(int)uVar19 * 0x20 + *(longlong *)param_2);
          if (*puVar8 == uVar1) {
            pFVar18 = (ForAnyElementType *)(puVar8 + 2);
            if (puVar8 == (uint *)0x0) {
              pFVar18 = (ForAnyElementType *)0x0;
            }
            if (pFVar18 != (ForAnyElementType *)0x0) {
              if ((&local_128 == pFVar18) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(void*)this != (void*)&Source",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x96e,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar1 = *(uint *)&pFVar18[1].Data;
              if (uVar1 != 0) {
                iVar6 = UE::Core::Private::
                        ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (4,4,uVar1,&local_128,&local_120,&local_11c);
                memcpy(local_128.Data + (longlong)iVar6 * 4,pFVar18->Data,(longlong)(int)uVar1 << 2)
                ;
              }
            }
            break;
          }
          uVar19 = puVar8[6];
        } while (uVar19 != 0xffffffff);
      }
    }
  } while( true );
}

// BuildDirectedTree @ 1444b71e0

void __cdecl
Audio::FDirectedGraphAlgo::BuildDirectedTree
          (TArrayView<TTuple<int,int>_const_,int> *param_1,
          TMap<int,UE::MathCore::Graph::FDirectedTreeElement,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::FDirectedTreeElement,0>_>
          *param_2)

{
  TTuple<int,int> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this;
  TTuple<int,int> *pTVar2;
  
  pTVar2 = param_1->DataPtr;
  pTVar1 = pTVar2 + param_1->ArrayNum;
  for (; pTVar2 != pTVar1; pTVar2 = pTVar2 + 1) {
    this = &TMapBase<int,UE::MathCore::Graph::FDirectedTreeElement,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::FDirectedTreeElement,0>_>
            ::FindOrAddImpl<int_const_&>
                      ((TMapBase<int,UE::MathCore::Graph::FDirectedTreeElement,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::FDirectedTreeElement,0>_>
                        *)param_2,*(uint *)pTVar2,(int *)pTVar2)->Children;
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
              (this,(int *)&pTVar2->field_0x4);
  }
  return;
}

// BuildTransposeDirectedTree @ 1444b7240

void __cdecl
Audio::FDirectedGraphAlgo::BuildTransposeDirectedTree
          (TArrayView<TTuple<int,int>_const_,int> *param_1,
          TMap<int,UE::MathCore::Graph::FDirectedTreeElement,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::FDirectedTreeElement,0>_>
          *param_2)

{
  TTuple<int,int> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this;
  TTuple<int,int> *pTVar2;
  
  pTVar2 = param_1->DataPtr;
  pTVar1 = pTVar2 + param_1->ArrayNum;
  for (; pTVar2 != pTVar1; pTVar2 = pTVar2 + 1) {
    this = &TMapBase<int,UE::MathCore::Graph::FDirectedTreeElement,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::FDirectedTreeElement,0>_>
            ::FindOrAddImpl<int_const_&>
                      ((TMapBase<int,UE::MathCore::Graph::FDirectedTreeElement,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::FDirectedTreeElement,0>_>
                        *)param_2,*(uint *)&pTVar2->field_0x4,(int *)&pTVar2->field_0x4)->Children;
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(this,(int *)pTVar2);
  }
  return;
}

// DepthFirstTopologicalSort @ 1444bac70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Audio::FDirectedGraphAlgo::DepthFirstTopologicalSort
          (TArrayView<int_const_,int> *param_1,TArrayView<TTuple<int,int>_const_,int> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  TTuple<int,int> *pTVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  int *piVar17;
  TTuple<int,int> *pTVar18;
  uint *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  ForElementType<unsigned_int> FVar24;
  undefined1 auStackY_158 [32];
  int local_108 [2];
  uint local_100;
  uint uStack_fc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_f8;
  undefined4 local_f0;
  uint uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  int local_dc;
  TKeyInitializer<int_const_&> local_d8;
  int *local_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
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
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar4 = param_1->ArrayNum;
  pFVar15 = (FScriptContainerElement *)0x0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (uVar4 == 0) goto LAB_1444baee9;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar4);
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar4);
  uVar16 = 1;
  if (3 < uVar4) {
    uVar22 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_e0 = (undefined4)lVar6;
    uVar16 = 1 << ((byte)lVar6 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar16 <= (int)local_50)) goto LAB_1444baee9;
  local_50 = uVar16;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar16 != 0) {
    uVar21 = uVar16;
    if (uVar16 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar21 = 0;
        goto LAB_1444bad4f;
      }
    }
    else {
LAB_1444bad4f:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar21,4);
    }
    if (0 < (int)uVar16) {
      uVar22 = (ulonglong)uVar16;
      pFVar14 = pFVar15;
      do {
        FVar13.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_58.Data;
        }
        uVar12 = (longlong)(int)uVar16 - 1U & (ulonglong)pFVar14;
        pFVar14 = pFVar14 + 1;
        *(undefined4 *)(FVar13.Data + uVar12 * 4) = 0xffffffff;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_100 = 0;
    uStack_fc = 1;
    uStack_ec = 0;
    uStack_e8 = 0;
    pFVar14 = pFVar15;
    if (local_70 != 0) {
      FVar24 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar24 = local_78;
      }
      uVar16 = *(uint *)FVar24;
      pFVar23 = pFVar15;
      while (uVar16 == 0) {
        uStack_e8 = (int)pFVar23 + 0x20;
        pFVar23 = (FScriptContainerElement *)(ulonglong)uStack_e8;
        iVar11 = (int)pFVar14;
        local_100 = iVar11 + 1;
        pFVar14 = (FScriptContainerElement *)(ulonglong)local_100;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_100)
        goto LAB_1444bae53;
        uVar16 = ((uint *)((longlong)FVar24 + 4))[iVar11];
      }
      uStack_fc = -uVar16 & uVar16;
      uVar22 = (ulonglong)uStack_fc * 2 + 1;
      lVar6 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_dc = (int)lVar6;
      uStack_ec = local_dc + -1 + uStack_e8;
      pFVar14 = (FScriptContainerElement *)(ulonglong)uStack_ec;
      if ((int)local_70 < (int)uStack_ec) {
LAB_1444bae53:
        pFVar14 = (FScriptContainerElement *)(ulonglong)local_70;
        uStack_ec = local_70;
      }
    }
    local_f0 = 0xffffffff;
    local_c8 = (longlong *)local_98;
    local_c0._padding_ = CONCAT44(uStack_fc,local_100);
    local_c0.CurrentBitIndex = uStack_ec;
    local_c0.UnvisitedBitMask = 0xffffffff;
    local_c0._28_4_ = uStack_e4;
    local_c0.BaseBitIndex = uStack_e8;
    local_c0.Array = pTStack_f8;
    if ((int)pFVar14 < (int)local_70) {
      do {
        iVar11 = (int)pFVar14;
        uVar16 = local_50 - 1 & *(uint *)(*local_c8 + (longlong)iVar11 * 0x28);
        lVar6 = *local_c8 + (longlong)iVar11 * 0x28;
        *(uint *)(lVar6 + 0x24) = uVar16;
        FVar13.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_58.Data;
        }
        uVar22 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar16;
        *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(FVar13.Data + uVar22 * 4);
        *(int *)(FVar13.Data + uVar22 * 4) = iVar11;
        local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
        pFVar14 = (FScriptContainerElement *)(ulonglong)(uint)local_c0.CurrentBitIndex;
      } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
    }
  }
LAB_1444baee9:
  uVar16 = param_3->ArrayNum + uVar4;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if (param_3->ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
  }
  piVar17 = param_1->DataPtr;
  piVar1 = piVar17 + (int)uVar4;
  if (piVar17 != piVar1) {
    local_d0 = local_108;
    do {
      local_108[0] = *piVar17;
      TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,0>,FDefaultSetAllocator>
                  *)local_98,&local_d8,(bool *)&local_d0);
      piVar17 = piVar17 + 1;
    } while (piVar17 != piVar1);
  }
  pTVar18 = param_2->DataPtr;
  pTVar2 = pTVar18 + param_2->ArrayNum;
  if (pTVar18 != pTVar2) {
    puVar20 = (undefined4 *)&pTVar18->field_0x4;
    do {
      pFVar14 = pFVar15;
      if (local_98._8_4_ != local_64) {
        FVar13.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_58.Data;
        }
        iVar11 = *(int *)(FVar13.Data + (ulonglong)(local_50 - 1 & *(uint *)pTVar18) * 4);
        while (pFVar14 = pFVar15, iVar11 != -1) {
          pFVar14 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar11 * 0x28);
          if (*(uint *)(local_98._0_8_ + (longlong)iVar11 * 0x28) == *(uint *)pTVar18) {
            if (pFVar14 != (FScriptContainerElement *)0x0) goto LAB_1444baff9;
            break;
          }
          iVar11 = *(int *)(pFVar14 + 0x20);
        }
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
LAB_1444baff9:
      if (((*(undefined4 **)(pFVar14 + 0x10) <= puVar20) &&
          (puVar20 < *(undefined4 **)(pFVar14 + 0x10) + *(int *)(pFVar14 + 0x1c))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      iVar11 = *(int *)(pFVar14 + 0x18);
      if (iVar11 == *(int *)(pFVar14 + 0x1c)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(pFVar14 + 0x10),(int *)(pFVar14 + 0x1c));
      }
      *(int *)(pFVar14 + 0x18) = iVar11 + 1;
      pTVar18 = pTVar18 + 1;
      uVar5 = *puVar20;
      puVar20 = puVar20 + 2;
      *(undefined4 *)(*(longlong *)(pFVar14 + 0x10) + (longlong)iVar11 * 4) = uVar5;
    } while (pTVar18 != pTVar2);
  }
  puVar19 = (uint *)param_1->DataPtr;
  bVar8 = true;
  puVar3 = puVar19 + param_1->ArrayNum;
  for (; puVar19 != puVar3; puVar19 = puVar19 + 1) {
    uVar4 = *puVar19;
    pFVar14 = pFVar15;
    if (local_98._8_4_ != local_64) {
      pFVar14 = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        pFVar14 = local_58.Data;
      }
      iVar11 = *(int *)(pFVar14 + (ulonglong)(local_50 - 1 & uVar4) * 4);
      while (pFVar14 = pFVar15, iVar11 != -1) {
        pFVar14 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar11 * 0x28);
        if (*(uint *)(local_98._0_8_ + (longlong)iVar11 * 0x28) == uVar4) {
          if (pFVar14 != (FScriptContainerElement *)0x0) goto LAB_1444bb128;
          break;
        }
        iVar11 = *(int *)(pFVar14 + 0x20);
      }
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Pair != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                        ,0x288,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
LAB_1444bb128:
    if (((pFVar14[8] == (FScriptContainerElement)0x0) &&
        (pFVar14[9] == (FScriptContainerElement)0x0)) &&
       (bVar8 = DirectedGraphAlgoPrivate::DepthFirstTopologicalSortVisit
                          (uVar4,(TMap<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,0>_>
                                  *)local_98,param_3), !bVar8)) break;
  }
  pFVar14 = (param_3->AllocatorInstance).Data;
  iVar11 = param_3->ArrayNum / 2;
  if (0 < iVar11) {
    pFVar23 = pFVar14 + (longlong)(param_3->ArrayNum + -1) * 4;
    do {
      uVar5 = *(undefined4 *)(pFVar14 + (longlong)pFVar15 * 4);
      *(undefined4 *)(pFVar14 + (longlong)pFVar15 * 4) = *(undefined4 *)pFVar23;
      pFVar15 = pFVar15 + 1;
      *(undefined4 *)pFVar23 = uVar5;
      pFVar23 = pFVar23 + -4;
    } while ((longlong)pFVar15 < (longlong)iVar11);
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return bVar8;
}

// DepthFirstTraversal @ 1444bb390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Audio::FDirectedGraphAlgo::DepthFirstTraversal
          (int param_1,
          TMap<int,UE::MathCore::Graph::FDirectedTreeElement,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::FDirectedTreeElement,0>_>
          *param_2,TFunctionRef<bool___cdecl(int)> *param_3)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint *puVar7;
  byte bVar8;
  ForAnyElementType FVar9;
  int iVar10;
  uint uVar11;
  ForElementType<unsigned_int> FVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  uint uVar16;
  TSparseSetElement<int> *pTVar17;
  ForAnyElementType *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auStackY_168 [32];
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  int local_118 [2];
  uint local_110 [2];
  int local_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_100;
  undefined4 local_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e4;
  int local_e0;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  FSparseArrayAllocationInfo local_b0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_128,1,&local_11c);
  *(int *)local_128.Data = param_1;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
joined_r0x0001444bb439:
  do {
    if (local_120 < 1) {
      local_50 = 0;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_58.Data);
      }
      bVar4 = local_98._12_4_ != 0;
      local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
      if (bVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_64 = 0;
      local_70 = 0;
      local_68 = -1;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data);
      }
      return;
    }
    iVar10 = local_120 + -1;
    uVar1 = *(uint *)(local_128.Data + (longlong)iVar10 * 4);
    iVar5 = (local_120 - iVar10) + -1;
    if (iVar5 != 0) {
      memmove(local_128.Data + (longlong)iVar10 * 4,local_128.Data + (longlong)iVar10 * 4 + 4,
              (longlong)iVar5 << 2);
    }
    local_120 = local_120 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&local_128,local_120,&local_11c);
    if (local_98._8_4_ != local_64) {
      FVar9.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar9.Data = local_58.Data;
      }
      for (iVar5 = *(int *)((longlong)FVar9.Data + (ulonglong)(local_50 - 1 & uVar1) * 4);
          iVar5 != -1; iVar5 = *(int *)(local_98._0_8_ + (longlong)iVar5 * 0xc + 4)) {
        if (*(uint *)(local_98._0_8_ + (longlong)iVar5 * 0xc) == uVar1) goto joined_r0x0001444bb439;
      }
    }
    local_110[0] = uVar1;
    cVar3 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_110);
    if (local_64 == 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                         (int *)(local_98 + 0xc));
      iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                         ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
      FVar12 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_78;
      }
      bVar8 = (byte)iVar10 & 0x1f;
      if (iVar10 < 0) {
        iVar10 = iVar10 + 0x1f;
        bVar8 = bVar8 - 0x20;
      }
      puVar7 = (uint *)((longlong)FVar12 + (longlong)(iVar10 >> 5) * 4);
      *puVar7 = *puVar7 & ~(1 << (bVar8 & 0x1f));
      iVar10 = local_68;
    }
    else {
      local_64 = local_64 + -1;
      iVar10 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0xc + 4);
      iVar5 = local_68;
      if (local_64 != 0) {
        *(undefined4 *)(local_98._0_8_ + (longlong)iVar10 * 0xc) = 0xffffffff;
      }
    }
    local_68 = iVar10;
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,&local_b0,iVar5);
    pTVar17 = (TSparseSetElement<int> *)0x0;
    if (local_b0.Pointer != (TSparseSetElement<int> *)0x0) {
      *(uint *)local_b0.Pointer = uVar1;
      *(undefined4 *)((longlong)local_b0.Pointer + 4) = 0xffffffff;
      pTVar17 = local_b0.Pointer;
    }
    uVar19 = *(uint *)pTVar17;
    local_118[0] = local_b0.Index;
    bVar4 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::TryReplaceExisting
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,uVar19,
                       pTVar17,local_118,(bool *)0x0);
    if (!bVar4) {
      uVar16 = 1;
      uVar11 = local_98._8_4_ - local_64;
      if (3 < uVar11) {
        uVar13 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_e4 = (undefined4)lVar14;
        uVar16 = 1 << ((byte)lVar14 & 0x1f);
      }
      if (((int)uVar11 < 1) || ((int)uVar16 <= (int)local_50)) {
        uVar19 = local_50 - 1 & uVar19;
        *(uint *)&pTVar17->field_0x8 = uVar19;
        FVar9.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar19;
        *(undefined4 *)&pTVar17->field_0x4 = *(undefined4 *)((longlong)FVar9.Data + uVar13 * 4);
        *(int *)((longlong)FVar9.Data + uVar13 * 4) = local_118[0];
      }
      else {
        local_50 = uVar16;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
        }
        if (uVar16 != 0) {
          uVar19 = uVar16;
          if (uVar16 < 2) {
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              uVar19 = 0;
              goto LAB_1444bb67c;
            }
          }
          else {
LAB_1444bb67c:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_58,0,uVar19,4);
          }
          if (0 < (int)uVar16) {
            uVar20 = (ulonglong)uVar16;
            uVar13 = 0;
            do {
              FVar9.Data = (FScriptContainerElement *)local_60;
              if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar9.Data = local_58.Data;
              }
              uVar6 = uVar13 & (longlong)(int)uVar16 - 1U;
              uVar13 = uVar13 + 1;
              *(undefined4 *)((longlong)FVar9.Data + uVar6 * 4) = 0xffffffff;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
        }
        if (local_50 != 0) {
          pTStack_100 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
          local_108 = 0;
          uStack_104 = 1;
          iStack_f4 = 0;
          iStack_f0 = 0;
          if (local_70 != 0) {
            FVar12 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar12 = local_78;
            }
            uVar19 = *(uint *)FVar12;
            iStack_f0 = 0;
            local_108 = 0;
            while (uVar19 == 0) {
              iStack_f0 = iStack_f0 + 0x20;
              lVar14 = (longlong)local_108;
              local_108 = local_108 + 1;
              if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_108)
              goto LAB_1444bb782;
              uVar19 = ((uint *)((longlong)FVar12 + 4))[lVar14];
            }
            uStack_104 = -uVar19 & uVar19;
            uVar13 = (ulonglong)uStack_104 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            local_e0 = (int)lVar14;
            iStack_f4 = local_e0 + -1 + iStack_f0;
            if (local_70 < iStack_f4) {
LAB_1444bb782:
              iStack_f4 = local_70;
            }
          }
          local_f8 = 0xffffffff;
          local_d8 = (longlong *)local_98;
          local_d0._padding_ = CONCAT44(uStack_104,local_108);
          local_d0.CurrentBitIndex = iStack_f4;
          local_d0.UnvisitedBitMask = 0xffffffff;
          local_d0._28_4_ = uStack_ec;
          local_d0.BaseBitIndex = iStack_f0;
          iVar5 = iStack_f4;
          local_d0.Array = pTStack_100;
          if (iStack_f4 < local_70) {
            do {
              uVar19 = local_50 - 1 & *(uint *)(*local_d8 + (longlong)iVar5 * 0xc);
              lVar14 = *local_d8 + (longlong)iVar5 * 0xc;
              *(uint *)(lVar14 + 8) = uVar19;
              FVar9.Data = (FScriptContainerElement *)local_60;
              if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar9.Data = local_58.Data;
              }
              uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar19;
              *(undefined4 *)(lVar14 + 4) = *(undefined4 *)((longlong)FVar9.Data + uVar13 * 4);
              *(int *)((longlong)FVar9.Data + uVar13 * 4) = iVar5;
              local_d0.UnvisitedBitMask = local_d0.UnvisitedBitMask & ~local_d0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d0);
              iVar5 = local_d0.CurrentBitIndex;
            } while (local_d0.CurrentBitIndex < (local_d0.Array)->NumBits);
          }
        }
      }
    }
    if ((cVar3 != '\0') && (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34)) {
      puVar15 = &param_2->field_0x38;
      if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
        puVar15 = *(undefined1 **)&param_2->field_0x40;
      }
      uVar19 = *(uint *)(puVar15 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & uVar1) * 4);
      if (uVar19 != 0xffffffff) {
        do {
          puVar7 = (uint *)((longlong)(int)uVar19 * 0x20 + *(longlong *)param_2);
          if (*puVar7 == uVar1) {
            pFVar18 = (ForAnyElementType *)(puVar7 + 2);
            if (puVar7 == (uint *)0x0) {
              pFVar18 = (ForAnyElementType *)0x0;
            }
            if (pFVar18 != (ForAnyElementType *)0x0) {
              if ((&local_128 == pFVar18) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(void*)this != (void*)&Source",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x96e,L""), bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar1 = *(uint *)&pFVar18[1].Data;
              if (uVar1 != 0) {
                iVar5 = UE::Core::Private::
                        ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (4,4,uVar1,&local_128,&local_120,&local_11c);
                memcpy(local_128.Data + (longlong)iVar5 * 4,pFVar18->Data,(longlong)(int)uVar1 << 2)
                ;
              }
            }
            break;
          }
          uVar19 = puVar7[6];
        } while (uVar19 != 0xffffffff);
      }
    }
  } while( true );
}

// KahnTopologicalSort @ 1444c4160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Audio::FDirectedGraphAlgo::KahnTopologicalSort
          (TArrayView<int_const_,int> *param_1,TArrayView<TTuple<int,int>_const_,int> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  TTuple<int,int> *pTVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int *_Src;
  code *pcVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong *plVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint *puVar14;
  ForAnyElementType FVar15;
  ForElementType<FSetElementId> FVar16;
  int iVar17;
  TTuple<int,int> *pTVar18;
  longlong lVar19;
  uint *puVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  uint *puVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  ForAnyElementType FVar29;
  FScriptContainerElement *pFVar30;
  FScriptContainerElement *pFVar31;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8 [8];
  ForAnyElementType local_1f0;
  uint local_1e8;
  int local_1e4;
  uint local_1e0 [2];
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  int local_1c8;
  undefined1 local_1c4 [20];
  FScriptContainerElement *local_1b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1a8;
  FScriptContainerElement *local_1a0;
  longlong *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  uint local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  undefined1 *local_138;
  TTuple<int,int> *local_130;
  uint *local_128;
  uint *local_120;
  TArray<int,TSizedDefaultAllocator<32>_> local_118 [2];
  undefined4 local_ec;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pTVar18 = param_2->DataPtr;
  pFVar13 = (FScriptContainerElement *)0x0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  pTVar1 = pTVar18 + param_2->ArrayNum;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  pFVar27 = pFVar13;
  local_1a8 = param_3;
  if (pTVar18 != pTVar1) {
    do {
      local_138 = &pTVar18->field_0x4;
      local_130 = pTVar18;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                  *)local_e8,(TPairInitializer<int_const_&,int_const_&> *)local_1c4,
                 (bool *)&local_138);
      pTVar18 = pTVar18 + 1;
    } while (pTVar18 != pTVar1);
    pFVar27 = (FScriptContainerElement *)(ulonglong)local_c0;
  }
  local_1e8 = param_1->ArrayNum;
  lVar19 = (longlong)(int)local_1e8;
  _Src = param_1->DataPtr;
  local_1f0.Data = (FScriptContainerElement *)0x0;
  if ((int)local_1e8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_1e8);
  }
  if ((_Src == (int *)0x0) && (local_1e8 != 0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x2d3,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    pFVar27 = (FScriptContainerElement *)(ulonglong)local_c0;
  }
  if (local_1e8 == 0) {
    local_1e4 = 0;
    uVar21 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_1e8,0,&local_1f0,local_1e8,&local_1e4);
    memcpy(local_1f0.Data,_Src,lVar19 << 2);
    pFVar27 = (FScriptContainerElement *)(ulonglong)local_c0;
    uVar21 = local_1e8;
  }
  if (0 < (int)uVar21) {
    do {
      pFVar31 = (FScriptContainerElement *)0x0;
      local_1d8.Data = (FScriptContainerElement *)0x0;
      uVar28 = 0;
      local_1c8 = 0;
      pFVar2 = local_1f0.Data + (longlong)(int)uVar21 * 4;
      local_1d0 = 0;
      FVar22.Data = local_1f0.Data;
      pFVar24 = (FScriptContainerElement *)local_e8._0_8_;
      FVar29.Data = pFVar31;
      pFVar30 = pFVar31;
      uVar21 = (uint)pFVar27;
      if (local_1f0.Data != pFVar2) {
        do {
          uVar21 = *(uint *)FVar22.Data;
          if (local_a0 != 0) {
            FVar15.Data = (FScriptContainerElement *)local_b0;
            if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar15.Data = local_a8.Data;
            }
            iVar11 = *(int *)((longlong)FVar15.Data + (longlong)(int)(local_a0 - 1 & uVar21) * 4);
            do {
              iVar17 = iVar11;
              iVar11 = iVar17;
              if (iVar17 == -1) break;
              iVar11 = *(int *)(pFVar24 + (longlong)iVar17 * 0x10 + 8);
            } while (*(uint *)(pFVar24 + (longlong)iVar17 * 0x10) != uVar21);
            pFVar27 = pFVar31;
            if (iVar17 != -1) {
              do {
                uVar25 = (int)pFVar27 + 1;
                pFVar27 = (FScriptContainerElement *)(ulonglong)uVar25;
                do {
                  if (iVar11 == -1) {
                    if (uVar25 == 0) goto LAB_1444c43af;
                    goto LAB_1444c4454;
                  }
                  lVar19 = (longlong)iVar11;
                  iVar11 = *(int *)(pFVar24 + lVar19 * 0x10 + 8);
                } while (*(uint *)(pFVar24 + lVar19 * 0x10) != uVar21);
              } while( true );
            }
          }
LAB_1444c43af:
          iVar11 = (int)pFVar30;
          if ((FVar29.Data <= FVar22.Data) &&
             (FVar22.Data < FVar29.Data + (longlong)local_1d0._4_4_ * 4)) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            FVar29.Data = local_1d8.Data;
            iVar11 = (int)local_1d0;
          }
          if (iVar11 == local_1d0._4_4_) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_1d8,(int *)((longlong)&local_1d0 + 4));
            FVar29.Data = local_1d8.Data;
          }
          local_1d0 = CONCAT44(local_1d0._4_4_,iVar11 + 1U);
          *(uint *)(FVar29.Data + (longlong)iVar11 * 4) = *(uint *)FVar22.Data;
          pFVar30 = (FScriptContainerElement *)(ulonglong)(iVar11 + 1U);
          pFVar24 = (FScriptContainerElement *)local_e8._0_8_;
          FVar29.Data = local_1d8.Data;
LAB_1444c4454:
          FVar22.Data = FVar22.Data + 4;
        } while (FVar22.Data != pFVar2);
        local_1c8 = (int)pFVar30;
        uVar21 = local_c0;
      }
      iVar11 = (int)pFVar30;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
        local_1c8 = (int)local_1d0;
        FVar29.Data = local_1d8.Data;
        iVar11 = (int)local_1d0;
        uVar21 = local_c0;
      }
      local_1d8.Data = (FScriptContainerElement *)0x0;
      local_1d0 = 0;
      local_1a0 = FVar29.Data;
      if (iVar11 == 0) {
        bVar8 = false;
        goto LAB_1444c4bc0;
      }
      local_98._0_8_ = (void *)0x0;
      local_98._8_8_ = 0;
      local_78 = 0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      pFVar13 = pFVar31;
      uStack_18c = 1;
      uStack_17c = uVar28;
      if (uVar21 != 0) {
        puVar20 = (uint *)(local_e8 + 0x10);
        if (local_c8 != (uint *)0x0) {
          puVar20 = local_c8;
        }
        uStack_18c = *puVar20;
        pFVar27 = pFVar31;
        while (uVar28 = (uint)pFVar27, uStack_18c == 0) {
          iVar17 = (int)pFVar13;
          uVar28 = uVar28 + 0x20;
          pFVar27 = (FScriptContainerElement *)(ulonglong)uVar28;
          uVar25 = iVar17 + 1;
          pFVar13 = (FScriptContainerElement *)(ulonglong)uVar25;
          uStack_18c = 1;
          uStack_17c = uVar21;
          if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar25)
          goto LAB_1444c456f;
          uStack_18c = (puVar20 + 1)[iVar17];
        }
        uStack_18c = -uStack_18c & uStack_18c;
        uVar3 = (ulonglong)uStack_18c * 2 + 1;
        lVar19 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_1c4._4_4_ = (undefined4)lVar19;
        uStack_17c = (uVar28 - 1) + local_1c4._4_4_;
        if ((int)uVar21 < (int)uStack_17c) {
          uStack_17c = uVar21;
        }
      }
LAB_1444c456f:
      local_198 = (longlong *)local_e8;
      uStack_174 = local_ec;
      local_188 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
      uVar25 = uVar21 & 0xffffffe0;
      iStack_170 = local_e8._8_4_ - local_b4;
      uStack_190 = SUB84(pFVar13,0);
      TStack_160._padding_ = CONCAT44(uStack_18c,uStack_190);
      uStack_180 = 0xffffffff;
      TStack_160.CurrentBitIndex = uStack_17c;
      TStack_160.UnvisitedBitMask = 0xffffffff;
      iVar17 = (int)uVar21 >> 5;
      TStack_160._28_4_ = local_ec;
      TStack_160.BaseBitIndex = uVar28;
      uStack_140 = CONCAT44(uStack_16c,iStack_170);
      uVar26 = uVar21;
      local_178 = uVar28;
      local_168 = local_198;
      TStack_160.Array = local_188;
      if ((int)uVar21 < 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        pFVar31 = (FScriptContainerElement *)(ulonglong)local_50;
        uVar26 = local_c0;
      }
      if (uVar21 != uVar26) {
        puVar20 = (uint *)(local_e8 + 0x10);
        if (local_c8 != (uint *)0x0) {
          puVar20 = local_c8;
        }
        uVar21 = -1 << ((byte)uVar21 & 0x1f) & puVar20[iVar17];
        while (uVar21 == 0) {
          lVar19 = (longlong)iVar17;
          uVar25 = uVar25 + 0x20;
          iVar17 = iVar17 + 1;
          uVar21 = uVar26;
          if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_1444c4684;
          uVar21 = (puVar20 + 1)[lVar19];
        }
        uVar3 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_1c4._8_4_ = (undefined4)lVar19;
        uVar21 = (uVar25 - 1) + local_1c4._8_4_;
        if ((int)uVar26 < (int)uVar21) {
          uVar21 = uVar26;
        }
      }
LAB_1444c4684:
      while( true ) {
        plVar6 = local_168;
        uVar28 = (uint)pFVar31;
        if ((int)local_168[1] - *(int *)((longlong)local_168 + 0x34) != (int)uStack_140) {
          local_1f8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1f8);
          uVar28 = local_50;
        }
        if (((TStack_160.CurrentBitIndex == uVar21) &&
            (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
           (plVar6 == (longlong *)local_e8)) break;
        puVar23 = (uint *)((longlong)TStack_160.CurrentBitIndex * 0x10 + *plVar6);
        puVar20 = puVar23 + 1;
        if (FVar29.Data != FVar29.Data + (longlong)iVar11 * 4) {
          pFVar13 = FVar29.Data;
          do {
            if (*(uint *)pFVar13 == *puVar20) goto LAB_1444c4811;
            pFVar13 = pFVar13 + 4;
          } while (pFVar13 != FVar29.Data + (longlong)iVar11 * 4);
        }
        uVar25 = *puVar23;
        if (uVar28 == 0) {
LAB_1444c47f2:
          local_128 = puVar23;
          local_120 = puVar20;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                      *)local_98,(TPairInitializer<int_const_&,int_const_&> *)(local_1c4 + 0xc),
                     (bool *)&local_128);
        }
        else {
          FVar16 = (ForElementType<FSetElementId>)local_60;
          if (local_58 != (ForElementType<FSetElementId>)0x0) {
            FVar16 = local_58;
          }
          iVar17 = *(int *)((longlong)FVar16 + (longlong)(int)(uVar28 - 1 & uVar25) * 4);
          do {
            iVar12 = iVar17;
            iVar17 = iVar12;
            if (iVar12 == -1) break;
            iVar17 = *(int *)(local_98._0_8_ + (longlong)iVar12 * 0x10 + 8);
          } while (*(uint *)(local_98._0_8_ + (longlong)iVar12 * 0x10) != uVar25);
          if (iVar12 == -1) goto LAB_1444c47f2;
          while (puVar14 = (uint *)((longlong)iVar12 * 0x10 + 4 + local_98._0_8_),
                *puVar14 != *puVar20) {
            do {
              iVar12 = iVar17;
              if (iVar12 == -1) goto LAB_1444c47f2;
              iVar17 = *(int *)(local_98._0_8_ + (longlong)iVar12 * 0x10 + 8);
            } while (*(uint *)(local_98._0_8_ + (longlong)iVar12 * 0x10) != uVar25);
          }
          if (puVar14 == (uint *)0x0) goto LAB_1444c47f2;
        }
LAB_1444c4811:
        TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
        pFVar31 = (FScriptContainerElement *)(ulonglong)local_50;
      }
      uVar21 = uVar28;
      if (uVar28 < 2) {
        if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0) {
          uVar21 = 0;
          goto LAB_1444c484d;
        }
      }
      else {
LAB_1444c484d:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar21,4);
      }
      FVar16 = (ForElementType<FSetElementId>)local_60;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FVar16 = local_58;
      }
      FVar22.Data = (FScriptContainerElement *)local_b0;
      if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0) {
        FVar22.Data = local_a8.Data;
      }
      if (uVar28 != 0) {
        memcpy(FVar22.Data,(void *)FVar16,(longlong)(int)uVar28 << 2);
      }
      uVar7 = local_98._8_4_;
      lVar19 = (longlong)(int)local_98._8_4_;
      local_a0 = uVar28;
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_e8,local_98._8_4_);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar7,(ForAnyElementType *)local_e8,(int *)(local_e8 + 8),
                 (int *)(local_e8 + 0xc));
      local_b8 = local_68;
      local_b4 = local_64;
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),
                 (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10));
      if (uVar7 != 0) {
        memcpy((void *)local_e8._0_8_,(void *)local_98._0_8_,lVar19 << 4);
      }
      pFVar13 = FVar29.Data + (longlong)iVar11 * 4;
      uVar21 = local_1e8;
      local_1b0 = pFVar13;
      for (; pTVar5 = local_1a8, FVar29.Data != pFVar13; FVar29.Data = FVar29.Data + 4) {
        local_1e0[0] = *(uint *)FVar29.Data;
        if (((local_1f0.Data <= (FScriptContainerElement *)local_1e0) &&
            ((FScriptContainerElement *)local_1e0 < local_1f0.Data + (longlong)local_1e4 * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), uVar21 = local_1e8, bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        bVar8 = false;
        uVar28 = 0;
        if (0 < (int)uVar21) {
          lVar19 = 0;
          do {
            uVar25 = 0;
            if ((int)uVar28 < (int)uVar21) {
              uVar25 = ~uVar28 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar21 = local_1e8, bVar10)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            uVar25 = uVar28;
            if (*(uint *)(local_1f0.Data + lVar19) == local_1e0[0]) {
              lVar19 = lVar19 + -4;
              uVar25 = uVar28 - 1;
              bVar8 = true;
              uVar26 = 0;
              if ((int)uVar28 < (int)uVar21) {
                uVar26 = ~uVar28 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , uVar21 = local_1e8, bVar10)) {
                pcVar4 = (code *)swi(3);
                uVar9 = (*pcVar4)();
                return (bool)uVar9;
              }
              iVar11 = (uVar21 - uVar28) + -1;
              if (1 < iVar11) {
                iVar11 = 1;
              }
              if (iVar11 != 0) {
                memmove(local_1f0.Data + (longlong)(int)uVar28 * 4,
                        local_1f0.Data + (longlong)(int)(uVar21 - iVar11) * 4,(longlong)iVar11 << 2)
                ;
                uVar21 = local_1e8;
              }
              uVar21 = uVar21 - 1;
              local_1e8 = uVar21;
            }
            pFVar13 = local_1b0;
            uVar28 = uVar25 + 1;
            lVar19 = lVar19 + 4;
          } while ((int)uVar28 < (int)uVar21);
          if (bVar8) {
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,&local_1f0,uVar21,&local_1e4);
            uVar21 = local_1e8;
          }
        }
      }
      if ((local_1a8 == local_118) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      lVar19 = (longlong)local_1c8;
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,local_1c8,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,
                          &pTVar5->ArrayMax);
      pFVar13 = local_1a0;
      memcpy((pTVar5->AllocatorInstance).Data + (longlong)iVar11 * 4,local_1a0,lVar19 << 2);
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      if ((int)local_1e8 < 1) break;
      pFVar27 = (FScriptContainerElement *)(ulonglong)local_c0;
      uVar21 = local_1e8;
    } while( true );
  }
  bVar8 = true;
  FVar29.Data = pFVar13;
LAB_1444c4bc0:
  if (FVar29.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar29.Data);
  }
  if (local_1f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data);
  }
  local_a0 = 0;
  if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_a8.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  return bVar8;
}

// TarjanStronglyConnectedComponents @ 1444e5fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
Audio::FDirectedGraphAlgo::TarjanStronglyConnectedComponents
          (TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator> *param_1,
          TArray<Audio::FStronglyConnectedComponent,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [8];
  undefined1 local_80 [32];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_40;
  undefined4 local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_88._4_4_ = 0;
  local_80._0_8_ = (FScriptContainerElement *)0x0;
  local_80._8_8_ = 0;
  local_60 = (void *)0x0;
  local_58 = ___xmm_00000000ffffffff0000008000000000;
  uStack_50 = _UNK_150631d98;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28._0_4_ = 0;
  local_28._4_4_ = 0;
  local_88[0] = param_3;
  bVar3 = DirectedGraphAlgoPrivate::FTarjanAlgoImpl::FindStronglyConnectedComponents
                    ((FTarjanAlgoImpl *)local_88,param_1,param_2);
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  local_38 = 0;
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  TSparseArray<TSparseSetElement<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_80,0,local_80._8_4_);
  iVar1 = SUB84(local_80._8_8_,4);
  local_80._8_8_ = local_80._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_80,0,(int *)(local_80 + 0xc));
  }
  uVar2 = local_58._4_4_;
  uStack_50 = 0xffffffff;
  local_58 = (ulonglong)local_58._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_58 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_80 + 0x10),0);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if ((FScriptContainerElement *)local_80._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_80._0_8_);
  }
  return bVar3;
}

