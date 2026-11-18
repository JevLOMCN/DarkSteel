// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// operator() @ 14322cf20

bool __thiscall
``BuildPatchServices::DiffHelpers::CalculateInstallTimeCoefficient'::__l2::FInstallTimeSim::
EvaluateDestruction'::__l5::<lambda_1>::operator()(void *this,FGuid *param_1)

{
  longlong lVar1;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this_00;
  int iVar2;
  ulong64 uVar3;
  
  lVar1 = *(longlong *)this;
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                    ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(lVar1 + 0x50),
                     (uint)uVar3,param_1);
  if (iVar2 == -1) {
    this_00 = *(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> **)((longlong)this + 8);
    uVar3 = CityHash64((char *)param_1,0x10);
    iVar2 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                      (this_00,(uint)uVar3,param_1);
    if (iVar2 != -1) {
      return true;
    }
  }
  return false;
}

// operator() @ 14322e100

bool __thiscall
``BuildPatchServices::DiffHelpers::CalculateInstallTimeCoefficient'::__l2::FInstallTimeSim::
TickDownloads'::__l7::<lambda_3>::operator()(void *this,FGuid *param_1)

{
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this_00;
  longlong lVar1;
  int iVar2;
  ulong64 uVar3;
  
  this_00 = *(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> **)this;
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                    (this_00,(uint)uVar3,param_1);
  if (iVar2 == -1) {
    lVar1 = *(longlong *)((longlong)this + 8);
    uVar3 = CityHash64((char *)param_1,0x10);
    iVar2 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                      ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(lVar1 + 0x50),
                       (uint)uVar3,param_1);
    if (iVar2 == -1) {
      lVar1 = *(longlong *)((longlong)this + 8);
      uVar3 = CityHash64((char *)param_1,0x10);
      iVar2 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                        ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(lVar1 + 0xa0)
                         ,(uint)uVar3,param_1);
      if (iVar2 == -1) {
        return false;
      }
    }
  }
  return true;
}

// EvaluateDestruction @ 14324c800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`BuildPatchServices::DiffHelpers::CalculateInstallTimeCoefficient'::__l2::FInstallTimeSim::
EvaluateDestruction(void *this,FFileManifest *param_1)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar13;
  byte bVar14;
  ForAnyElementType FVar15;
  undefined ***pppuVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  bool *pbVar20;
  bool *pbVar21;
  ForElementType<unsigned_int> FVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [4];
  undefined1 local_154 [20];
  undefined4 local_140;
  int iStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  bool *local_130 [2];
  undefined8 *local_120;
  FSparseArrayAllocationInfo local_118;
  undefined1 local_108 [32];
  ForElementType<unsigned_int> local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined1 local_d0 [8];
  ForAnyElementType local_c8;
  uint local_c0;
  code *local_b8 [2];
  undefined **local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined ***local_90;
  longlong *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_80;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*(int *)((longlong)this + 0x18) == 1) {
    iVar10 = (param_1->ChunkParts).ArrayNum;
    pFVar25 = (param_1->ChunkParts).AllocatorInstance.Data;
    local_108._0_8_ = (FScriptContainerElement *)0x0;
    local_108._8_8_ = 0;
    local_e8 = (ForElementType<unsigned_int>)0x0;
    pFVar1 = pFVar25 + (longlong)iVar10 * 0x18;
    local_e0 = 0;
    local_dc = 0x80;
    local_d8 = -1;
    local_d4 = 0;
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_c0 = 0;
    local_120 = this;
    while( true ) {
      if ((param_1->ChunkParts).ArrayNum != iVar10) {
        `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_158);
      }
      puVar5 = local_120;
      if (pFVar25 == pFVar1) break;
      if (local_d4 == 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,4,1,(ForAnyElementType *)local_108,(int *)(local_108 + 8),
                           (int *)(local_108 + 0xc));
        iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),1);
        FVar22 = (ForElementType<unsigned_int>)((longlong)local_108 + 0x10);
        if (local_e8 != (ForElementType<unsigned_int>)0x0) {
          FVar22 = local_e8;
        }
        bVar14 = (byte)iVar9 & 0x1f;
        if (iVar9 < 0) {
          iVar9 = iVar9 + 0x1f;
          bVar14 = bVar14 - 0x20;
        }
        puVar2 = (uint *)((longlong)FVar22 + (longlong)(iVar9 >> 5) * 4);
        *puVar2 = *puVar2 & ~(1 << (bVar14 & 0x1f));
        iVar9 = local_d8;
      }
      else {
        local_d4 = local_d4 + -1;
        iVar9 = *(int *)(local_108._0_8_ + (longlong)local_d8 * 0x18 + 4);
        iVar8 = local_d8;
        if (local_d4 != 0) {
          *(undefined4 *)(local_108._0_8_ + (longlong)iVar9 * 0x18) = 0xffffffff;
        }
      }
      local_d8 = iVar9;
      TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_108,&local_118,iVar8);
      pvVar6 = local_118.Pointer;
      if (local_118.Pointer != (TSparseSetElement<FGuid> *)0x0) {
        uVar4 = *(undefined8 *)(pFVar25 + 8);
        *(undefined8 *)local_118.Pointer = *(undefined8 *)pFVar25;
        *(undefined8 *)((longlong)local_118.Pointer + 8) = uVar4;
        *(undefined4 *)((longlong)local_118.Pointer + 0x10) = 0xffffffff;
      }
      local_154._0_4_ = local_118.Index;
      uVar11 = CityHash64(local_118.Pointer,0x10);
      bVar7 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::TryReplaceExisting
                        ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_108,
                         (uint)uVar11,pvVar6,(int *)local_154,(bool *)0x0);
      if (!bVar7) {
        uVar19 = 1;
        uVar17 = local_108._8_4_ - local_d4;
        if (3 < uVar17) {
          uVar23 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar19 = 1 << ((byte)lVar18 & 0x1f);
        }
        if (((int)uVar17 < 1) || ((int)uVar19 <= (int)local_c0)) {
          uVar17 = local_c0 - 1 & (uint)uVar11;
          *(uint *)((longlong)pvVar6 + 0x14) = uVar17;
          FVar15.Data = (FScriptContainerElement *)local_d0;
          if ((ForElementType<FSetElementId>)local_c8.Data != (ForElementType<FSetElementId>)0x0) {
            FVar15.Data = local_c8.Data;
          }
          uVar23 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar17;
          *(undefined4 *)((longlong)pvVar6 + 0x10) =
               *(undefined4 *)((longlong)FVar15.Data + uVar23 * 4);
          *(undefined4 *)((longlong)FVar15.Data + uVar23 * 4) = local_154._0_4_;
        }
        else {
          local_c0 = uVar19;
          if ((ForElementType<FSetElementId>)local_c8.Data != (ForElementType<FSetElementId>)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,4);
          }
          if (uVar19 != 0) {
            uVar17 = uVar19;
            if (uVar19 < 2) {
              if ((ForElementType<FSetElementId>)local_c8.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                uVar17 = 0;
                goto LAB_14324ca10;
              }
            }
            else {
LAB_14324ca10:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_c8,0,uVar17,4);
            }
            if (0 < (int)uVar19) {
              uVar23 = 0;
              uVar24 = (ulonglong)uVar19;
              do {
                FVar15.Data = (FScriptContainerElement *)local_d0;
                if ((ForElementType<FSetElementId>)local_c8.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar15.Data = local_c8.Data;
                }
                uVar12 = (longlong)(int)uVar19 - 1U & uVar23;
                uVar23 = uVar23 + 1;
                *(undefined4 *)((longlong)FVar15.Data + uVar12 * 4) = 0xffffffff;
                uVar24 = uVar24 - 1;
              } while (uVar24 != 0);
            }
          }
          if (local_c0 != 0) {
            local_154._12_8_ = local_108 + 0x10;
            local_154._8_4_ = 1;
            local_154._4_4_ = 0;
            iStack_13c = 0;
            iStack_138 = 0;
            if (local_e0 != 0) {
              FVar22 = (ForElementType<unsigned_int>)((longlong)local_108 + 0x10);
              if (local_e8 != (ForElementType<unsigned_int>)0x0) {
                FVar22 = local_e8;
              }
              uVar17 = *(uint *)FVar22;
              iStack_138 = 0;
              local_154._4_4_ = 0;
              while (uVar17 == 0) {
                iStack_138 = iStack_138 + 0x20;
                lVar18 = (longlong)(int)local_154._4_4_;
                local_154._4_4_ = local_154._4_4_ + 1;
                if ((int)(local_e0 + -1 + (local_e0 + -1 >> 0x1f & 0x1fU)) >> 5 <
                    (int)local_154._4_4_) goto LAB_14324cb1c;
                uVar17 = ((uint *)((longlong)FVar22 + 4))[lVar18];
              }
              local_154._8_4_ = -uVar17 & uVar17;
              uVar23 = (ulonglong)(uint)local_154._8_4_ * 2 + 1;
              lVar18 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iStack_13c = (int)lVar18 + -1 + iStack_138;
              if (local_e0 < iStack_13c) {
LAB_14324cb1c:
                iStack_13c = local_e0;
              }
            }
            local_140 = 0xffffffff;
            local_88 = (longlong *)local_108;
            local_80._padding_ = CONCAT44(local_154._8_4_,local_154._4_4_);
            local_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_154._12_8_;
            local_80.UnvisitedBitMask = 0xffffffff;
            local_80.CurrentBitIndex = iStack_13c;
            local_80.BaseBitIndex = iStack_138;
            local_80._28_4_ = uStack_134;
            iVar8 = iStack_13c;
            if (iStack_13c < local_e0) {
              do {
                pcVar3 = (char *)(*local_88 + (longlong)iVar8 * 0x18);
                uVar11 = CityHash64(pcVar3,0x10);
                uVar17 = local_c0 - 1 & (uint)uVar11;
                *(uint *)(pcVar3 + 0x14) = uVar17;
                FVar15.Data = (FScriptContainerElement *)local_d0;
                if ((ForElementType<FSetElementId>)local_c8.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar15.Data = local_c8.Data;
                }
                uVar23 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar17;
                *(undefined4 *)(pcVar3 + 0x10) = *(undefined4 *)((longlong)FVar15.Data + uVar23 * 4)
                ;
                uVar17 = ~local_80._padding_._4_4_;
                *(int *)((longlong)FVar15.Data + uVar23 * 4) = iVar8;
                local_80.UnvisitedBitMask = local_80.UnvisitedBitMask & uVar17;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_80);
                iVar8 = local_80.CurrentBitIndex;
              } while (local_80.CurrentBitIndex < (local_80.Array)->NumBits);
            }
          }
        }
      }
      pFVar25 = pFVar25 + 0x18;
    }
    pTVar13 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Intersect
                        ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_108,
                         (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)&local_88,
                         (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_120[2]);
    if ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_108 != pTVar13) {
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
      Move<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
                ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_108,pTVar13);
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_88);
    local_a8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<``BuildPatchServices::DiffHelpers::CalculateInstallTimeCoefficient'::`2'::FInstallTimeSim::EvaluateDestruction'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_98 = local_108;
    local_90 = (undefined ***)0x0;
    local_a0 = puVar5;
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``BuildPatchServices::DiffHelpers::CalculateInstallTimeCoefficient'::__l2::FInstallTimeSim::EvaluateDestruction'::__l5::<lambda_1>,bool,FGuid_const_&>
                  ::Call;
    (**(code **)(*(longlong *)*puVar5 + 0x20))((longlong *)*puVar5,local_130,0x7fffffff,local_b8);
    iVar10 = (int)local_130[1];
    pbVar21 = local_130[0] + (longlong)iVar10 * 0x10;
    pbVar20 = local_130[0];
    while( true ) {
      if ((int)local_130[1] != iVar10) {
        `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_158);
      }
      if (pbVar20 == pbVar21) break;
      lVar18 = (**(code **)(*(longlong *)puVar5[1] + 0x218))((longlong *)puVar5[1],pbVar20);
      puVar5[9] = (double)*(uint *)(lVar18 + 0x30) / (double)puVar5[7] + (double)puVar5[9];
      lVar18 = (**(code **)(*(longlong *)puVar5[1] + 0x218))((longlong *)puVar5[1],pbVar20);
      puVar5[9] = (double)*(longlong *)(lVar18 + 0x38) / (double)puVar5[7] + (double)puVar5[9];
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(puVar5 + 0x14),
                 (FGuid *)local_154,pbVar20);
      pbVar20 = pbVar20 + 0x10;
    }
    if (local_130[0] != (bool *)0x0) {
      FMemory::Free(local_130[0]);
    }
    if (local_b8[0] != (code *)0x0) {
      pppuVar16 = &local_a8;
      if (local_90 != (undefined ***)0x0) {
        pppuVar16 = local_90;
      }
      (*(code *)(*pppuVar16)[2])();
    }
    local_c0 = 0;
    if ((ForElementType<FSetElementId>)local_c8.Data != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free(local_c8.Data);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_108);
  }
  return;
}

// TickDownloads @ 14326a250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`BuildPatchServices::DiffHelpers::CalculateInstallTimeCoefficient'::__l2::FInstallTimeSim::
TickDownloads(void *this)

{
  int *piVar1;
  uint *puVar2;
  char *pcVar3;
  double dVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong64 uVar14;
  ulonglong uVar15;
  void *pvVar16;
  byte bVar17;
  ForAnyElementType FVar18;
  undefined ***pppuVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  FGuid *pFVar23;
  TSparseSetElement<FGuid> *pTVar24;
  FGuid *pFVar25;
  ForElementType<unsigned_int> FVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  FScriptContainerElement *pFVar30;
  FScriptContainerElement *pFVar31;
  ForAnyElementType *pFVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStackY_1c8 [32];
  undefined1 local_197;
  undefined1 local_196 [6];
  FScriptContainerElement *local_190;
  int local_188;
  int local_184;
  FGuid *local_180;
  int local_178;
  int local_170;
  uint uStack_16c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_168;
  undefined4 local_160;
  int iStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  undefined8 *local_150;
  FGuid local_148;
  ForAnyElementType *local_138;
  longlong *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  FSparseArrayAllocationInfo local_108;
  undefined1 local_f8 [32];
  ForElementType<unsigned_int> local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined1 local_c0 [8];
  ForAnyElementType local_b8;
  uint local_b0;
  code *local_a8;
  undefined **local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined ***local_80;
  code *local_78 [2];
  undefined **local_68;
  undefined8 *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_150 = this;
  if (0 < *(int *)((longlong)this + 0xf8)) {
    pFVar32 = (ForAnyElementType *)((longlong)this + 0xf0);
    do {
      if ((*(int *)((longlong)this + 0xf8) < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(double *)((longlong)this + 0x48) < *(double *)pFVar32->Data) break;
      if ((*(int *)((longlong)this + 0xf8) < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
                 ((longlong)this + 0x50),&local_148,(bool *)(pFVar32->Data + 8));
      if ((*(int *)((longlong)this + 0xf8) < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = *(int *)((longlong)this + 0xf8) + -1;
      if (iVar11 != 0) {
        memmove(pFVar32->Data,pFVar32->Data + 0x18,(longlong)iVar11 * 0x18);
      }
      *(int *)((longlong)this + 0xf8) = *(int *)((longlong)this + 0xf8) + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,pFVar32,*(int *)((longlong)this + 0xf8),(int *)((longlong)this + 0xfc));
    } while (0 < *(int *)((longlong)this + 0xf8));
  }
  iVar11 = *(int *)((longlong)this + 0xf8);
  if (iVar11 < 0x32) {
    pFVar32 = (ForAnyElementType *)((longlong)this + 0xf0);
    pFVar31 = pFVar32->Data;
    local_f8._0_8_ = (FScriptContainerElement *)0x0;
    local_f8._8_8_ = 0;
    local_190 = pFVar31 + (longlong)iVar11 * 0x18;
    local_d8 = (ForElementType<unsigned_int>)0x0;
    pFVar30 = pFVar31 + 8;
    local_d0 = 0;
    local_cc = 0x80;
    local_c8 = -1;
    local_c4 = 0;
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = 0;
    local_138 = pFVar32;
    while( true ) {
      pFVar8 = local_190;
      pTVar24 = (TSparseSetElement<FGuid> *)0x0;
      if (*(int *)((longlong)this + 0xf8) != iVar11) {
        local_197 = 0;
        `TCheckedPointerIterator<TTuple<double,FGuid>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_197);
      }
      puVar29 = local_150;
      if (pFVar31 == pFVar8) break;
      uVar6 = *(undefined8 *)pFVar30;
      uVar7 = *(undefined8 *)(pFVar30 + 8);
      if (local_c4 == 0) {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x18,4,1,(ForAnyElementType *)local_f8,(int *)(local_f8 + 8),
                            (int *)(local_f8 + 0xc));
        iVar13 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),1);
        FVar26 = (ForElementType<unsigned_int>)((longlong)local_f8 + 0x10);
        if (local_d8 != (ForElementType<unsigned_int>)0x0) {
          FVar26 = local_d8;
        }
        bVar17 = (byte)iVar13 & 0x1f;
        if (iVar13 < 0) {
          iVar13 = iVar13 + 0x1f;
          bVar17 = bVar17 - 0x20;
        }
        puVar2 = (uint *)((longlong)FVar26 + (longlong)(iVar13 >> 5) * 4);
        *puVar2 = *puVar2 & ~(1 << (bVar17 & 0x1f));
        iVar13 = local_c8;
      }
      else {
        local_c4 = local_c4 + -1;
        iVar13 = *(int *)(local_f8._0_8_ + (longlong)local_c8 * 0x18 + 4);
        iVar12 = local_c8;
        if (local_c4 != 0) {
          *(undefined4 *)(local_f8._0_8_ + (longlong)iVar13 * 0x18) = 0xffffffff;
        }
      }
      local_c8 = iVar13;
      TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_f8,&local_108,iVar12);
      if (local_108.Pointer != (TSparseSetElement<FGuid> *)0x0) {
        *(undefined8 *)local_108.Pointer = uVar6;
        *(undefined8 *)((longlong)local_108.Pointer + 8) = uVar7;
        *(undefined4 *)((longlong)local_108.Pointer + 0x10) = 0xffffffff;
        pTVar24 = local_108.Pointer;
      }
      local_188 = local_108.Index;
      uVar14 = CityHash64((char *)pTVar24,0x10);
      bVar9 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::TryReplaceExisting
                        ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_f8,
                         (uint)uVar14,pTVar24,&local_188,(bool *)0x0);
      if (!bVar9) {
        uVar22 = 1;
        uVar20 = local_f8._8_4_ - local_c4;
        if (3 < uVar20) {
          uVar27 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
          lVar21 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          local_148.B = (uint)lVar21;
          uVar22 = 1 << ((byte)lVar21 & 0x1f);
        }
        if (((int)uVar20 < 1) || ((int)uVar22 <= (int)local_b0)) {
          uVar20 = local_b0 - 1 & (uint)uVar14;
          *(uint *)&pTVar24->field_0x14 = uVar20;
          FVar18.Data = (FScriptContainerElement *)local_c0;
          if ((ForElementType<FSetElementId>)local_b8.Data != (ForElementType<FSetElementId>)0x0) {
            FVar18.Data = local_b8.Data;
          }
          uVar27 = (longlong)(int)local_b0 - 1U & (longlong)(int)uVar20;
          *(undefined4 *)&pTVar24->field_0x10 = *(undefined4 *)((longlong)FVar18.Data + uVar27 * 4);
          *(int *)((longlong)FVar18.Data + uVar27 * 4) = local_188;
        }
        else {
          local_b0 = uVar22;
          if ((ForElementType<FSetElementId>)local_b8.Data != (ForElementType<FSetElementId>)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,0,4);
          }
          if (uVar22 != 0) {
            uVar20 = uVar22;
            if (uVar22 < 2) {
              if ((ForElementType<FSetElementId>)local_b8.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                uVar20 = 0;
                goto LAB_14326a5ce;
              }
            }
            else {
LAB_14326a5ce:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_b8,0,uVar20,4);
            }
            if (0 < (int)uVar22) {
              uVar28 = (ulonglong)uVar22;
              uVar27 = 0;
              do {
                FVar18.Data = (FScriptContainerElement *)local_c0;
                if ((ForElementType<FSetElementId>)local_b8.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar18.Data = local_b8.Data;
                }
                uVar15 = uVar27 & (longlong)(int)uVar22 - 1U;
                uVar27 = uVar27 + 1;
                *(undefined4 *)((longlong)FVar18.Data + uVar15 * 4) = 0xffffffff;
                uVar28 = uVar28 - 1;
              } while (uVar28 != 0);
            }
          }
          if (local_b0 != 0) {
            pTStack_168 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
            uStack_16c = 1;
            local_170 = 0;
            iStack_15c = 0;
            iStack_158 = 0;
            if (local_d0 != 0) {
              FVar26 = (ForElementType<unsigned_int>)((longlong)local_f8 + 0x10);
              if (local_d8 != (ForElementType<unsigned_int>)0x0) {
                FVar26 = local_d8;
              }
              uVar20 = *(uint *)FVar26;
              iStack_158 = 0;
              local_170 = 0;
              while (uVar20 == 0) {
                iStack_158 = iStack_158 + 0x20;
                lVar21 = (longlong)local_170;
                local_170 = local_170 + 1;
                if ((int)(local_d0 + -1 + (local_d0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_170)
                goto LAB_14326a6e0;
                uVar20 = ((uint *)((longlong)FVar26 + 4))[lVar21];
              }
              uStack_16c = -uVar20 & uVar20;
              uVar27 = (ulonglong)uStack_16c * 2 + 1;
              lVar21 = 0x3f;
              if (uVar27 != 0) {
                for (; uVar27 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              local_148.C = (uint)lVar21;
              iStack_15c = (local_148.C - 1) + iStack_158;
              if (local_d0 < iStack_15c) {
LAB_14326a6e0:
                iStack_15c = local_d0;
              }
            }
            local_160 = 0xffffffff;
            local_130 = (longlong *)local_f8;
            local_128._padding_ = CONCAT44(uStack_16c,local_170);
            local_128.CurrentBitIndex = iStack_15c;
            local_128.UnvisitedBitMask = 0xffffffff;
            local_128._28_4_ = uStack_154;
            local_128.BaseBitIndex = iStack_158;
            iVar12 = iStack_15c;
            local_128.Array = pTStack_168;
            if (iStack_15c < local_d0) {
              do {
                pcVar3 = (char *)(*local_130 + (longlong)iVar12 * 0x18);
                uVar14 = CityHash64(pcVar3,0x10);
                uVar20 = local_b0 - 1 & (uint)uVar14;
                *(uint *)(pcVar3 + 0x14) = uVar20;
                FVar18.Data = (FScriptContainerElement *)local_c0;
                if ((ForElementType<FSetElementId>)local_b8.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar18.Data = local_b8.Data;
                }
                uVar27 = (longlong)(int)local_b0 - 1U & (longlong)(int)uVar20;
                *(undefined4 *)(pcVar3 + 0x10) = *(undefined4 *)((longlong)FVar18.Data + uVar27 * 4)
                ;
                *(int *)((longlong)FVar18.Data + uVar27 * 4) = iVar12;
                local_128.UnvisitedBitMask = local_128.UnvisitedBitMask & ~local_128._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_128);
                iVar12 = local_128.CurrentBitIndex;
              } while (local_128.CurrentBitIndex < (local_128.Array)->NumBits);
            }
          }
        }
      }
      pFVar31 = pFVar31 + 0x18;
      pFVar30 = pFVar30 + 0x18;
    }
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<``BuildPatchServices::DiffHelpers::CalculateInstallTimeCoefficient'::`2'::FInstallTimeSim::TickDownloads'::`7'::<lambda_2>,0,0>
                ::_vftable_;
    local_50 = (undefined ***)0x0;
    local_60 = local_150;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``BuildPatchServices::DiffHelpers::CalculateInstallTimeCoefficient'::__l2::FInstallTimeSim::TickDownloads'::__l7::<lambda_2>,bool,FGuid_const_&>
                  ::Call;
    (**(code **)(*(longlong *)*local_150 + 0x28))((longlong *)*local_150,&local_180,100,local_78);
    pFVar23 = local_180;
    local_98 = &UE::Core::Private::Function::
                TFunction_OwnedObject<``BuildPatchServices::DiffHelpers::CalculateInstallTimeCoefficient'::`2'::FInstallTimeSim::TickDownloads'::`7'::<lambda_3>,0,0>
                ::_vftable_;
    local_90 = local_f8;
    local_80 = (undefined ***)0x0;
    local_88 = puVar29;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<``BuildPatchServices::DiffHelpers::CalculateInstallTimeCoefficient'::__l2::FInstallTimeSim::TickDownloads'::__l7::<lambda_3>,bool,FGuid_const_&>
               ::Call;
    if (local_178 != 0) {
      local_190 = (FScriptContainerElement *)((ulonglong)local_190 & 0xffffffff00000000);
      iVar11 = 0;
      UE::Core::Private::Function::CheckCallable
                (UE::Core::Private::Function::
                 TFunctionRefCaller<``BuildPatchServices::DiffHelpers::CalculateInstallTimeCoefficient'::__l2::FInstallTimeSim::TickDownloads'::__l7::<lambda_3>,bool,FGuid_const_&>
                 ::Call);
      pcVar5 = local_a8;
      pppuVar19 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar19 = local_80;
      }
      pvVar16 = (void *)(*(code *)(*pppuVar19)[1])();
      if (pcVar5 == UE::Core::Private::Function::
                    TFunctionRefCaller<``BuildPatchServices::DiffHelpers::CalculateInstallTimeCoefficient'::__l2::FInstallTimeSim::TickDownloads'::__l7::<lambda_3>,bool,FGuid_const_&>
                    ::Call) {
        cVar10 = ``BuildPatchServices::DiffHelpers::CalculateInstallTimeCoefficient'::__l2::
                 FInstallTimeSim::TickDownloads'::__l7::<lambda_3>::operator()(pvVar16,pFVar23);
      }
      else {
        cVar10 = (*pcVar5)();
      }
      bVar9 = cVar10 == '\0';
      do {
        iVar12 = iVar11 + 1;
        local_184 = iVar11;
        if (iVar12 < local_178) {
          do {
            UE::Core::Private::Function::CheckCallable(local_a8);
            pcVar5 = local_a8;
            pppuVar19 = &local_98;
            if (local_80 != (undefined ***)0x0) {
              pppuVar19 = local_80;
            }
            pvVar16 = (void *)(*(code *)(*pppuVar19)[1])();
            if (pcVar5 == UE::Core::Private::Function::
                          TFunctionRefCaller<``BuildPatchServices::DiffHelpers::CalculateInstallTimeCoefficient'::__l2::FInstallTimeSim::TickDownloads'::__l7::<lambda_3>,bool,FGuid_const_&>
                          ::Call) {
              cVar10 = ``BuildPatchServices::DiffHelpers::CalculateInstallTimeCoefficient'::__l2::
                       FInstallTimeSim::TickDownloads'::__l7::<lambda_3>::operator()
                                 (pvVar16,pFVar23 + iVar12);
            }
            else {
              cVar10 = (*pcVar5)();
            }
          } while ((bVar9 == (cVar10 == '\0')) && (iVar12 = iVar12 + 1, iVar12 < local_178));
          pTVar24 = (TSparseSetElement<FGuid> *)((ulonglong)local_190 & 0xffffffff);
        }
        iVar11 = iVar12;
        iVar12 = iVar11 - local_184;
        if (bVar9 != false) {
          iVar13 = (int)pTVar24;
          if (iVar13 != local_184) {
            memmove(pFVar23 + iVar13,pFVar23 + local_184,(longlong)iVar12 << 4);
          }
          uVar20 = iVar13 + iVar12;
          pTVar24 = (TSparseSetElement<FGuid> *)(ulonglong)uVar20;
          local_190 = (FScriptContainerElement *)CONCAT44(local_190._4_4_,uVar20);
        }
        bVar9 = (bool)(bVar9 ^ 1);
      } while (iVar11 < local_178);
      local_178 = (int)pTVar24;
      puVar29 = local_150;
      pFVar32 = local_138;
    }
    iVar11 = *(int *)(puVar29 + 0x1f);
    dVar4 = (double)puVar29[9];
    if (iVar11 < 1) {
      uVar33 = 0;
      uVar34 = 0;
    }
    else {
      uVar20 = 0;
      if ((int)(iVar11 - 1U) < iVar11) {
        uVar20 = ~(iVar11 - 1U) >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar33 = (undefined4)
               *(undefined8 *)(pFVar32->Data + (longlong)*(int *)&pFVar32[1].Data * 0x18 + -0x18);
      uVar34 = (undefined4)
               ((ulonglong)
                *(undefined8 *)(pFVar32->Data + (longlong)*(int *)&pFVar32[1].Data * 0x18 + -0x18)
               >> 0x20);
    }
    iVar11 = local_178;
    uVar35 = SUB84(dVar4,0);
    uVar36 = (int)((ulonglong)dVar4 >> 0x20);
    if (dVar4 <= (double)CONCAT44(uVar34,uVar33)) {
      uVar35 = uVar33;
      uVar36 = uVar34;
    }
    dVar4 = (double)CONCAT44(uVar36,uVar35);
    pFVar25 = local_180 + local_178;
    pFVar23 = local_180;
    while( true ) {
      if (local_178 != iVar11) {
        `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_196);
      }
      if (pFVar23 == pFVar25) break;
      lVar21 = (**(code **)(*(longlong *)puVar29[1] + 0x218))((longlong *)puVar29[1],pFVar23);
      piVar1 = (int *)((longlong)&pFVar32[1].Data + 4);
      iVar12 = *(int *)&pFVar32[1].Data;
      dVar4 = dVar4 + (double)*(longlong *)(lVar21 + 0x38) / (double)puVar29[4];
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,pFVar32,piVar1);
      }
      *(int *)&pFVar32[1].Data = iVar12 + 1;
      pFVar30 = pFVar32->Data;
      *(double *)(pFVar30 + (longlong)iVar12 * 0x18) = dVar4;
      uVar6 = *(undefined8 *)pFVar23;
      uVar7 = *(undefined8 *)&pFVar23->C;
      pFVar23 = pFVar23 + 1;
      pFVar30 = pFVar30 + (longlong)iVar12 * 0x18 + 8;
      *(undefined8 *)pFVar30 = uVar6;
      *(undefined8 *)(pFVar30 + 8) = uVar7;
    }
    if (local_a8 != (code *)0x0) {
      pppuVar19 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar19 = local_80;
      }
      (*(code *)(*pppuVar19)[2])();
    }
    if (local_180 != (FGuid *)0x0) {
      FMemory::Free(local_180);
    }
    if (local_78[0] != (code *)0x0) {
      pppuVar19 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar19 = local_50;
      }
      (*(code *)(*pppuVar19)[2])();
    }
    local_b0 = 0;
    if ((ForElementType<FSetElementId>)local_b8.Data != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free(local_b8.Data);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_f8);
  }
  return;
}

