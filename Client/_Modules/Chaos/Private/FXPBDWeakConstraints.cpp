// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> @ 143a35c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> * __thiscall
Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::
FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>
          (FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_6,
          FDeformableXPBDWeakConstraintParams *param_7)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  undefined3 uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> *pFVar10;
  ulonglong uVar11;
  ulong64 uVar12;
  ForElementType<unsigned_int> FVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar22;
  ulonglong uVar23;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_01;
  uint *puVar24;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198;
  undefined1 local_197 [3];
  uint local_194;
  uint local_190;
  FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> *local_188;
  float local_180 [2];
  longlong local_178;
  int local_170;
  uint uStack_16c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_168;
  undefined4 local_160;
  int iStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  int local_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_148;
  undefined4 local_140;
  int iStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  int local_12c;
  undefined4 local_124;
  int local_120;
  longlong local_118;
  FSolverParticles *local_110;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_100;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d8;
  FSparseArrayAllocationInfo local_b8;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a8;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_01 = &this->Indices;
  this->_padding_ =
       (longlong)&___7__FXPBDWeakConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
  (this_01->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_188 = this;
  local_110 = param_1;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<TArray<int,TSizedDefaultAllocator<32>_>,int>
            (this_01,(TArray<int,TSizedDefaultAllocator<32>_> *)(param_2->AllocatorInstance).Data,
             param_2->ArrayNum,0);
  (this->Weights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<TArray<float,TSizedDefaultAllocator<32>_>,int>
            (&this->Weights,
             (TArray<float,TSizedDefaultAllocator<32>_> *)(param_3->AllocatorInstance).Data,
             param_3->ArrayNum,0);
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  (this->SecondIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_00 = &this->SecondIndices;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<TArray<int,TSizedDefaultAllocator<32>_>,int>
            (this_00,(TArray<int,TSizedDefaultAllocator<32>_> *)(param_5->AllocatorInstance).Data,
             param_5->ArrayNum,0);
  (this->SecondWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<TArray<float,TSizedDefaultAllocator<32>_>,int>
            (&this->SecondWeights,
             (TArray<float,TSizedDefaultAllocator<32>_> *)(param_6->AllocatorInstance).Data,
             param_6->ArrayNum,0);
  (this->Stiffness).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<float,TSizedDefaultAllocator<32>_>::CopyToEmpty<float,int>
            (&this->Stiffness,(float *)(param_4->AllocatorInstance).Data,param_4->ArrayNum,0);
  (this->ConstraintsPerColor).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColor).ArrayNum = 0;
  (this->ConstraintsPerColor).ArrayMax = 0;
  (this->LambdaArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LambdaArray).ArrayNum = 0;
  (this->LambdaArray).ArrayMax = 0;
  this->VisualizeBindings = false;
  fVar4 = param_7->DebugParticleWidth;
  (this->DebugDrawParams).DebugLineWidth = param_7->DebugLineWidth;
  (this->DebugDrawParams).DebugParticleWidth = fVar4;
  uVar5 = *(undefined3 *)&param_7->field_0x9;
  (this->DebugDrawParams).bVisualizeBindings = param_7->bVisualizeBindings;
  *(undefined3 *)&(this->DebugDrawParams).field_0x9 = uVar5;
  if ((this->Indices).ArrayNum != (this->SecondIndices).ArrayNum) {
    local_198 = 0;
    `Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::
    FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>::operator()
              (&local_198);
  }
  local_190 = 0;
  if (0 < (this->Indices).ArrayNum) {
    local_178 = 0;
    do {
      lVar18 = local_178;
      uVar16 = local_190;
      local_194 = ~local_190 >> 0x1f;
      uVar15 = 0;
      if ((int)local_190 < this_01->ArrayNum) {
        uVar15 = local_194;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar3)();
        return pFVar10;
      }
      pFVar2 = (this_01->AllocatorInstance).Data;
      local_118 = lVar18 * 0x10;
      uVar15 = *(uint *)(pFVar2 + local_118 + 8);
      puVar24 = *(uint **)(pFVar2 + local_118);
      if (((int)uVar15 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar3)();
        return pFVar10;
      }
      local_a8.AllocationFlags.MaxBits = 0x80;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      local_a8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_a8.AllocationFlags.NumBits = 0;
      local_a8.FirstFreeIndex = -1;
      local_a8.NumFreeIndices = 0;
      local_68.Data = (FScriptContainerElement *)0x0;
      local_60 = 0;
      if (uVar15 != 0) {
        if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve(&local_a8,uVar15);
        uVar19 = 1;
        if (3 < uVar15) {
          uVar17 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_130 = (undefined4)lVar18;
          uVar19 = 1 << ((byte)lVar18 & 0x1f);
        }
        if ((local_60 == 0) || ((int)local_60 < (int)uVar19)) {
          local_60 = uVar19;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
          }
          if (uVar19 != 0) {
            uVar22 = uVar19;
            if (uVar19 < 2) {
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                uVar22 = 0;
                goto LAB_143a35ebc;
              }
            }
            else {
LAB_143a35ebc:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_68,0,uVar22,4);
            }
            if (0 < (int)uVar19) {
              uVar23 = (ulonglong)uVar19;
              uVar17 = 0;
              do {
                FVar14.Data = local_70;
                if (local_68.Data != (FScriptContainerElement *)0x0) {
                  FVar14.Data = local_68.Data;
                }
                uVar11 = uVar17 & (longlong)(int)uVar19 - 1U;
                uVar17 = uVar17 + 1;
                *(undefined4 *)(FVar14.Data + uVar11 * 4) = 0xffffffff;
                uVar23 = uVar23 - 1;
              } while (uVar23 != 0);
            }
          }
          if (local_60 != 0) {
            pTStack_168 = &local_a8.AllocationFlags;
            local_170 = 0;
            uStack_16c = 1;
            iStack_15c = 0;
            iStack_158 = 0;
            if (local_a8.AllocationFlags.NumBits != 0) {
              FVar13 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
              if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar13 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              uVar19 = *(uint *)FVar13;
              iStack_158 = 0;
              local_170 = 0;
              while (uVar19 == 0) {
                iStack_158 = iStack_158 + 0x20;
                lVar18 = (longlong)local_170;
                local_170 = local_170 + 1;
                if ((int)(local_a8.AllocationFlags.NumBits + -1 +
                         (local_a8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_170)
                goto LAB_143a35fc2;
                uVar19 = *(uint *)((uchar *)((longlong)FVar13 + 4) + lVar18 * 4);
              }
              uStack_16c = -uVar19 & uVar19;
              uVar17 = (ulonglong)uStack_16c * 2 + 1;
              lVar18 = 0x3f;
              if (uVar17 != 0) {
                for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              local_12c = (int)lVar18;
              iStack_15c = iStack_158 + -1 + local_12c;
              if (local_a8.AllocationFlags.NumBits < iStack_15c) {
LAB_143a35fc2:
                iStack_15c = local_a8.AllocationFlags.NumBits;
              }
            }
            local_160 = 0xffffffff;
            local_108 = &local_a8;
            local_100._padding_ = CONCAT44(uStack_16c,local_170);
            local_100.CurrentBitIndex = iStack_15c;
            local_100.UnvisitedBitMask = 0xffffffff;
            local_100._28_4_ = uStack_154;
            local_100.BaseBitIndex = iStack_158;
            iVar8 = iStack_15c;
            local_100.Array = pTStack_168;
            if (iStack_15c < local_a8.AllocationFlags.NumBits) {
              do {
                pFVar2 = (local_108->Data).AllocatorInstance.Data;
                lVar18 = (longlong)iVar8;
                uVar19 = local_60 - 1 & *(uint *)(pFVar2 + lVar18 * 0xc);
                *(uint *)(pFVar2 + lVar18 * 0xc + 8) = uVar19;
                FVar14.Data = local_70;
                if (local_68.Data != (FScriptContainerElement *)0x0) {
                  FVar14.Data = local_68.Data;
                }
                uVar17 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar19;
                *(undefined4 *)(pFVar2 + lVar18 * 0xc + 4) =
                     *(undefined4 *)(FVar14.Data + uVar17 * 4);
                *(int *)(FVar14.Data + uVar17 * 4) = iVar8;
                local_100.UnvisitedBitMask = local_100.UnvisitedBitMask & ~local_100._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_100);
                iVar8 = local_100.CurrentBitIndex;
              } while (local_100.CurrentBitIndex < (local_100.Array)->NumBits);
            }
          }
        }
      }
      puVar1 = puVar24 + (int)uVar15;
      iVar8 = local_a8.FirstFreeIndex;
      for (; local_a8.FirstFreeIndex = iVar8, puVar24 != puVar1; puVar24 = puVar24 + 1) {
        if (local_a8.NumFreeIndices == 0) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,1,(ForAnyElementType *)&local_a8,&local_a8.Data.ArrayNum,
                             &local_a8.Data.ArrayMax);
          iVar6 = local_a8.AllocationFlags.NumBits;
          if (local_a8.AllocationFlags.NumBits == 0) {
            iVar20 = 0;
LAB_143a360ef:
            if (local_a8.AllocationFlags.MaxBits < local_a8.AllocationFlags.NumBits + 1) {
              uVar16 = local_a8.AllocationFlags.MaxBits + 0x1fU >> 5;
              uVar15 = local_a8.AllocationFlags.NumBits + 0x20U >> 5;
              if (uVar15 < 5) {
                local_a8.AllocationFlags.MaxBits = 4;
              }
              else {
                uVar17 = (ulonglong)uVar15;
                if (uVar16 < 5) {
                  uVar16 = 0;
                }
                if (uVar16 == 0) {
                  uVar23 = 4;
                  if (4 < uVar17) {
                    uVar23 = uVar17;
                  }
                }
                else {
                  uVar23 = ((ulonglong)uVar15 * 3 >> 3) + 0x10 + uVar17;
                }
                uVar12 = FMemory::QuantizeSize(uVar23 * 4,0);
                local_a8.AllocationFlags.MaxBits = (int)(uVar12 >> 2);
                if (local_a8.AllocationFlags.MaxBits < (int)uVar15) {
                  local_a8.AllocationFlags.MaxBits = 0x7fffffff;
                }
              }
              local_a8.AllocationFlags.MaxBits = local_a8.AllocationFlags.MaxBits << 5;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        (&local_a8.AllocationFlags,local_a8.AllocationFlags.NumBits);
            }
            local_a8.AllocationFlags.NumBits = local_a8.AllocationFlags.NumBits + 1;
            uVar15 = local_a8.AllocationFlags.NumBits >> 0x1f & 0x1f;
            uVar16 = local_a8.AllocationFlags.NumBits + uVar15;
            iVar9 = (uVar16 & 0x1f) - uVar15;
            if (iVar9 != 0) {
              FVar13 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
              if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar13 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              puVar21 = (uint *)((longlong)FVar13 + (longlong)((int)uVar16 >> 5) * 4);
              *puVar21 = *puVar21 & 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
            }
          }
          else {
            iVar20 = (int)(local_a8.AllocationFlags.NumBits +
                          (local_a8.AllocationFlags.NumBits >> 0x1f & 0x1fU)) >> 5;
            if (iVar20 != (int)((local_a8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU) +
                               local_a8.AllocationFlags.NumBits + -1) >> 5) goto LAB_143a360ef;
            local_a8.AllocationFlags.NumBits = local_a8.AllocationFlags.NumBits + 1;
          }
          FVar13 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
          if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar13 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          puVar21 = (uint *)((longlong)FVar13 + (longlong)iVar20 * 4);
          *puVar21 = *puVar21 & ~(1 << ((byte)iVar6 & 0x1f));
        }
        else {
          local_a8.FirstFreeIndex =
               *(int *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar8 * 0xc + 4);
          local_a8.NumFreeIndices = local_a8.NumFreeIndices + -1;
          if (local_a8.NumFreeIndices != 0) {
            *(undefined4 *)
             (local_a8.Data.AllocatorInstance.Data + (longlong)local_a8.FirstFreeIndex * 0xc) =
                 0xffffffff;
          }
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex(&local_a8,&local_b8,iVar8);
        if (local_b8.Pointer == (uint *)0x0) {
          puVar21 = (uint *)0x0;
        }
        else {
          *(uint *)local_b8.Pointer = *puVar24;
          *(uint *)((longlong)local_b8.Pointer + 4) = 0xffffffff;
          puVar21 = local_b8.Pointer;
        }
        uVar16 = *puVar21;
        if ((local_a8.Data.ArrayNum - local_a8.NumFreeIndices != 1) &&
           (local_a8.Data.ArrayNum != local_a8.NumFreeIndices)) {
          FVar14.Data = local_70;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FVar14.Data = local_68.Data;
          }
          for (iVar8 = *(int *)(FVar14.Data + (ulonglong)(local_60 - 1 & uVar16) * 4); iVar8 != -1;
              iVar8 = *(int *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar8 * 0xc + 4)) {
            if (*(uint *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar8 * 0xc) == uVar16) {
              if (iVar8 != -1) {
                *(uint *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar8 * 0xc) = uVar16;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized(&local_a8,local_b8.Index,1);
                goto LAB_143a364f9;
              }
              break;
            }
          }
        }
        uVar19 = 1;
        uVar15 = local_a8.Data.ArrayNum - local_a8.NumFreeIndices;
        if (3 < uVar15) {
          uVar17 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_124 = (undefined4)lVar18;
          uVar19 = 1 << ((byte)lVar18 & 0x1f);
        }
        if (((int)uVar15 < 1) || ((int)uVar19 <= (int)local_60)) {
          uVar16 = local_60 - 1 & uVar16;
          puVar21[2] = uVar16;
          FVar14.Data = local_70;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FVar14.Data = local_68.Data;
          }
          uVar17 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar16;
          puVar21[1] = *(uint *)(FVar14.Data + uVar17 * 4);
          *(int *)(FVar14.Data + uVar17 * 4) = local_b8.Index;
        }
        else {
          local_60 = uVar19;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
          }
          if (uVar19 != 0) {
            uVar16 = uVar19;
            if (uVar19 < 2) {
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                uVar16 = 0;
                goto LAB_143a3632f;
              }
            }
            else {
LAB_143a3632f:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_68,0,uVar16,4);
            }
            if (0 < (int)uVar19) {
              uVar23 = (ulonglong)uVar19;
              uVar17 = 0;
              do {
                FVar14.Data = local_70;
                if (local_68.Data != (FScriptContainerElement *)0x0) {
                  FVar14.Data = local_68.Data;
                }
                uVar11 = uVar17 & (longlong)(int)uVar19 - 1U;
                uVar17 = uVar17 + 1;
                *(undefined4 *)(FVar14.Data + uVar11 * 4) = 0xffffffff;
                uVar23 = uVar23 - 1;
              } while (uVar23 != 0);
            }
          }
          if (local_60 != 0) {
            pTStack_148 = &local_a8.AllocationFlags;
            local_150 = 0;
            uStack_14c = 1;
            iStack_13c = 0;
            iStack_138 = 0;
            if (local_a8.AllocationFlags.NumBits != 0) {
              FVar13 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
              if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar13 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              uVar16 = *(uint *)FVar13;
              iStack_138 = 0;
              local_150 = 0;
              while (uVar16 == 0) {
                iStack_138 = iStack_138 + 0x20;
                lVar18 = (longlong)local_150;
                local_150 = local_150 + 1;
                if ((int)(local_a8.AllocationFlags.NumBits + -1 +
                         (local_a8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_150)
                goto LAB_143a3642f;
                uVar16 = *(uint *)((uchar *)((longlong)FVar13 + 4) + lVar18 * 4);
              }
              uStack_14c = -uVar16 & uVar16;
              uVar17 = (ulonglong)uStack_14c * 2 + 1;
              lVar18 = 0x3f;
              if (uVar17 != 0) {
                for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              local_120 = (int)lVar18;
              iStack_13c = iStack_138 + -1 + local_120;
              if (local_a8.AllocationFlags.NumBits < iStack_13c) {
LAB_143a3642f:
                iStack_13c = local_a8.AllocationFlags.NumBits;
              }
            }
            local_140 = 0xffffffff;
            local_e0 = &local_a8;
            local_d8._padding_ = CONCAT44(uStack_14c,local_150);
            local_d8.CurrentBitIndex = iStack_13c;
            local_d8.UnvisitedBitMask = 0xffffffff;
            local_d8._28_4_ = uStack_134;
            local_d8.BaseBitIndex = iStack_138;
            iVar8 = iStack_13c;
            local_d8.Array = pTStack_148;
            if (iStack_13c < local_a8.AllocationFlags.NumBits) {
              do {
                pFVar2 = (local_e0->Data).AllocatorInstance.Data;
                lVar18 = (longlong)iVar8;
                uVar16 = local_60 - 1 & *(uint *)(pFVar2 + lVar18 * 0xc);
                *(uint *)(pFVar2 + lVar18 * 0xc + 8) = uVar16;
                FVar14.Data = local_70;
                if (local_68.Data != (FScriptContainerElement *)0x0) {
                  FVar14.Data = local_68.Data;
                }
                uVar17 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar16;
                *(undefined4 *)(pFVar2 + lVar18 * 0xc + 4) =
                     *(undefined4 *)(FVar14.Data + uVar17 * 4);
                *(int *)(FVar14.Data + uVar17 * 4) = iVar8;
                local_d8.UnvisitedBitMask = local_d8.UnvisitedBitMask & ~local_d8._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d8);
                iVar8 = local_d8.CurrentBitIndex;
              } while (local_d8.CurrentBitIndex < (local_d8.Array)->NumBits);
            }
          }
        }
LAB_143a364f9:
        this = local_188;
        uVar16 = local_190;
        iVar8 = local_a8.FirstFreeIndex;
      }
      uVar23 = 0;
      uVar17 = uVar23;
      while( true ) {
        lVar18 = local_178;
        this_00 = &this->SecondIndices;
        uVar15 = 0;
        if ((int)uVar16 < (this->SecondIndices).ArrayNum) {
          uVar15 = local_194;
        }
        if ((uVar15 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar3)();
          return pFVar10;
        }
        uVar15 = (uint)uVar23;
        if (*(int *)((this_00->AllocatorInstance).Data + local_118 + 8) <= (int)uVar15) break;
        uVar19 = 0;
        if ((int)uVar16 < (this->SecondIndices).ArrayNum) {
          uVar19 = local_194;
        }
        if ((uVar19 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar3)();
          return pFVar10;
        }
        pFVar2 = (this_00->AllocatorInstance).Data;
        uVar19 = 0;
        if ((int)uVar15 < *(int *)(pFVar2 + (longlong)(int)uVar16 * 0x10 + 8)) {
          uVar19 = ~uVar15 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar3)();
          return pFVar10;
        }
        uVar19 = *(uint *)(uVar17 + *(longlong *)(pFVar2 + (longlong)(int)uVar16 * 0x10));
        if (local_a8.Data.ArrayNum != local_a8.NumFreeIndices) {
          FVar14.Data = local_70;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FVar14.Data = local_68.Data;
          }
          for (iVar8 = *(int *)(FVar14.Data + (ulonglong)(local_60 - 1 & uVar19) * 4); iVar8 != -1;
              iVar8 = *(int *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar8 * 0xc + 4)) {
            if (*(uint *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar8 * 0xc) == uVar19) {
              local_197[0] = 0;
              `Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::
              FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>'::__l6::<lambda_2>::
              operator()(local_197);
              break;
            }
          }
        }
        uVar23 = (ulonglong)(uVar15 + 1);
        uVar17 = uVar17 + 4;
        this = local_188;
      }
      local_60 = 0;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_a8);
      local_190 = uVar16 + 1;
      local_178 = lVar18 + 1;
      this_01 = &local_188->Indices;
      this = local_188;
    } while ((int)local_190 < (local_188->Indices).ArrayNum);
  }
  ComputeWeakConstraintsColoring<float>
            (this_01,this_00,(TDynamicParticles<float,3> *)local_110,&this->ConstraintsPerColor);
  local_180[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->LambdaArray,local_180,(this->Indices).ArrayNum * 3);
  return this;
}

// ~FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> @ 143a38e20

void __thiscall
Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::
~FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>
          (FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)&___7__FXPBDWeakConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
  pFVar1 = (this->LambdaArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->ConstraintsPerColor).AllocatorInstance.Data,(this->ConstraintsPerColor).ArrayNum
            );
  pFVar1 = (this->ConstraintsPerColor).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Stiffness).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (this->SecondWeights).AllocatorInstance.Data,(this->SecondWeights).ArrayNum);
  pFVar1 = (this->SecondWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(this->SecondIndices).AllocatorInstance.Data
             ,(this->SecondIndices).ArrayNum);
  pFVar1 = (this->SecondIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Constraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)(this->Weights).AllocatorInstance.Data,
             (this->Weights).ArrayNum);
  pFVar1 = (this->Weights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(this->Indices).AllocatorInstance.Data,
             (this->Indices).ArrayNum);
  pFVar1 = (this->Indices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 143a416c0

void __thiscall
`Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel'::__l10::
<lambda_1>::operator()(void *this,int param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  lVar2 = *(longlong *)this;
  uVar1 = **(uint **)((longlong)this + 8);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x70)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x68);
  uVar5 = 0;
  if (param_1 < *(int *)(lVar2 + 8 + (longlong)(int)uVar1 * 0x10)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::
  ApplySingleConstraintWithoutSelfTarget
            (*(FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> **)this,
             *(FSolverParticles **)((longlong)this + 0x10),**(float **)((longlong)this + 0x18),
             *(int *)(*(longlong *)(lVar2 + (longlong)(int)uVar1 * 0x10) + (longlong)param_1 * 4),
             __real_38d1b717);
  return;
}

// operator() @ 143a43d50

void __thiscall
`Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel'::__l14::
<lambda_2>::operator()(void *this,int param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  lVar2 = *(longlong *)this;
  uVar1 = **(uint **)((longlong)this + 8);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x70)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x68);
  uVar5 = 0;
  if (param_1 < *(int *)(lVar2 + 8 + (longlong)(int)uVar1 * 0x10)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::
  ApplySingleConstraintWithSelfTarget
            (*(FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> **)this,
             *(FSolverParticles **)((longlong)this + 0x10),**(float **)((longlong)this + 0x18),
             *(int *)(*(longlong *)(lVar2 + (longlong)(int)uVar1 * 0x10) + (longlong)param_1 * 4),
             __real_38d1b717);
  return;
}

// ApplyInParallel @ 143a4ec10

void __thiscall
Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel
          (FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,float param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  uint local_res8 [2];
  float local_res18 [2];
  uint local_res20 [2];
  code *local_88;
  FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> **local_80;
  code *local_78;
  FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> **local_70;
  FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> *local_68;
  uint *local_60;
  FSolverParticles *local_58;
  float *local_50;
  FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> *local_48;
  uint *local_40;
  FSolverParticles *local_38;
  float *local_30;
  
  bVar5 = -1 < CpuChannel->Enabled;
  local_res18[0] = param_2;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId83,"STAT_ChaosXPBDWeakConstraintApply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDWeakConstraints.h"
               ,0x53);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId83);
  }
  if (0 < (this->ConstraintsPerColor).ArrayNum) {
    if ((this->SecondIndices).ArrayNum == 0) {
      local_res8[0] = 0;
      do {
        uVar2 = local_res8[0];
        local_60 = local_res8;
        local_50 = local_res18;
        local_80 = &local_68;
        local_88 = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel'::__l10::<lambda_1>,void,int>
                   ::Call;
        uVar4 = 0;
        if ((int)local_res8[0] < (this->ConstraintsPerColor).ArrayNum) {
          uVar4 = ~local_res8[0] >> 0x1f;
        }
        local_68 = this;
        local_58 = param_1;
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        PhysicsParallelFor(*(int *)((this->ConstraintsPerColor).AllocatorInstance.Data +
                                   (longlong)(int)uVar2 * 0x10 + 8),
                           (TFunctionRef<void___cdecl(int)> *)&local_88,false);
        local_res8[0] = local_res8[0] + 1;
      } while ((int)local_res8[0] < (this->ConstraintsPerColor).ArrayNum);
    }
    else {
      local_res20[0] = 0;
      do {
        uVar2 = local_res20[0];
        local_40 = local_res20;
        local_30 = local_res18;
        local_70 = &local_48;
        local_78 = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel'::__l14::<lambda_2>,void,int>
                   ::Call;
        uVar4 = 0;
        if ((int)local_res20[0] < (this->ConstraintsPerColor).ArrayNum) {
          uVar4 = ~local_res20[0] >> 0x1f;
        }
        local_48 = this;
        local_38 = param_1;
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        PhysicsParallelFor(*(int *)((this->ConstraintsPerColor).AllocatorInstance.Data +
                                   (longlong)(int)uVar2 * 0x10 + 8),
                           (TFunctionRef<void___cdecl(int)> *)&local_78,false);
        local_res20[0] = local_res20[0] + 1;
      } while ((int)local_res20[0] < (this->ConstraintsPerColor).ArrayNum);
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplySingleConstraintWithSelfTarget @ 143a51230

void __thiscall
Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::
ApplySingleConstraintWithSelfTarget
          (FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,float param_2,int param_3,float param_4)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  longlong local_b0;
  float local_98 [24];
  
  uVar17 = (ulonglong)param_3;
  uVar22 = (uint)~param_3 >> 0x1f;
  uVar12 = 0;
  if (param_3 < (this->Stiffness).ArrayNum) {
    uVar12 = uVar22;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar1 = (this->Stiffness).AllocatorInstance.Data + uVar17 * 4;
  if (param_4 < *(float *)pFVar1 || param_4 == *(float *)pFVar1) {
    if (((this->SecondIndices).ArrayNum < 1) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3444621641781346115>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDWeakConstraints.h"
                           ,0xbd,"SecondIndices.Num() > 0"), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar12 = 0;
    if (param_3 < (this->Stiffness).ArrayNum) {
      uVar12 = uVar22;
    }
    if ((uVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar12 = 0;
    if (param_3 < (this->Stiffness).ArrayNum) {
      uVar12 = uVar22;
    }
    fVar25 = __real_40000000 /
             (param_2 * *(float *)((this->Stiffness).AllocatorInstance.Data + uVar17 * 4) * param_2)
    ;
    if ((uVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (__real_56b5e621 < *(float *)((this->Stiffness).AllocatorInstance.Data + uVar17 * 4)) {
      fVar25 = 0.0;
    }
    local_98[0] = 0.0;
    local_98[1] = 0.0;
    lVar21 = uVar17 * 0x10;
    uVar12 = 0;
    lVar19 = 0;
    local_98[2] = 0.0;
    while( true ) {
      uVar8 = 0;
      if ((int)uVar17 < (this->Indices).ArrayNum) {
        uVar8 = uVar22;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(int *)((this->Indices).AllocatorInstance.Data + lVar21 + 8) <= (int)uVar12) break;
      lVar15 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar17 < (this->Weights).ArrayNum) {
          uVar8 = uVar22;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar1 = (this->Weights).AllocatorInstance.Data;
        uVar8 = 0;
        if ((int)uVar17 < (this->Indices).ArrayNum) {
          uVar8 = uVar22;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->Indices).AllocatorInstance.Data;
        uVar8 = 0;
        if ((int)uVar12 < *(int *)(pFVar4 + lVar21 + 8)) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar8 = *(uint *)(lVar19 + *(longlong *)(pFVar4 + lVar21));
        uVar13 = 0;
        if ((int)uVar8 < *(int *)&(param_1->MPAndInvM).field_0x10) {
          uVar13 = ~uVar8 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar16 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
        uVar13 = 0;
        if ((int)uVar12 < *(int *)(pFVar1 + lVar21 + 8)) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar17 = (ulonglong)param_3;
        *(float *)((longlong)local_98 + lVar15) =
             *(float *)(lVar15 + (longlong)(int)uVar8 * 0x10 + lVar16) *
             *(float *)(lVar19 + *(longlong *)(pFVar1 + lVar21)) +
             *(float *)((longlong)local_98 + lVar15);
        lVar15 = lVar15 + 4;
      } while (lVar15 < 0xc);
      uVar17 = (ulonglong)(uint)param_3;
      uVar12 = uVar12 + 1;
      lVar19 = lVar19 + 4;
    }
    uVar12 = 0;
    lVar19 = 0;
    while( true ) {
      uVar8 = 0;
      if ((int)uVar17 < (this->SecondIndices).ArrayNum) {
        uVar8 = uVar22;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(int *)((this->SecondIndices).AllocatorInstance.Data + lVar21 + 8) <= (int)uVar12) break;
      uVar8 = 0;
      if ((int)uVar17 < (this->SecondIndices).ArrayNum) {
        uVar8 = uVar22;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar1 = (this->SecondIndices).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar12 < *(int *)(pFVar1 + lVar21 + 8)) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar8 = *(uint *)(lVar19 + *(longlong *)(pFVar1 + lVar21));
      uVar13 = 0;
      if ((int)uVar8 < *(int *)&(param_1->MPAndInvM).field_0x10) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pfVar18 = (float *)((longlong)(int)uVar8 * 0x10 + *(longlong *)&(param_1->MPAndInvM).field_0x8
                         );
      uVar8 = 0;
      if (param_3 < (this->SecondWeights).ArrayNum) {
        uVar8 = uVar22;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar1 = (this->SecondWeights).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar12 < *(int *)(pFVar1 + lVar21 + 8)) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar12 = uVar12 + 1;
      fVar24 = *(float *)(lVar19 + *(longlong *)(pFVar1 + lVar21));
      lVar19 = lVar19 + 4;
      uVar17 = (ulonglong)(uint)param_3;
      local_98[1] = local_98[1] - fVar24 * pfVar18[1];
      local_98[0] = local_98[0] - fVar24 * *pfVar18;
      local_98[2] = local_98[2] - fVar24 * pfVar18[2];
    }
    uVar12 = 0;
    lVar19 = 0;
    fVar24 = fVar25;
    while( true ) {
      uVar8 = 0;
      if (param_3 < (this->Indices).ArrayNum) {
        uVar8 = uVar22;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(int *)((this->Indices).AllocatorInstance.Data + lVar21 + 8) <= (int)uVar12) break;
      uVar8 = 0;
      if (param_3 < (this->Weights).ArrayNum) {
        uVar8 = uVar22;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar1 = (this->Weights).AllocatorInstance.Data;
      uVar8 = 0;
      if (param_3 < (this->Weights).ArrayNum) {
        uVar8 = uVar22;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->Weights).AllocatorInstance.Data;
      uVar8 = 0;
      if (param_3 < (this->Indices).ArrayNum) {
        uVar8 = uVar22;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->Indices).AllocatorInstance.Data;
      uVar13 = ~uVar12 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < *(int *)(pFVar5 + lVar21 + 8)) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar8 = *(uint *)(*(longlong *)(pFVar5 + lVar21) + lVar19 * 4);
      uVar9 = 0;
      if ((int)uVar8 < (int)param_1->_padding_) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar15 = param_1->_padding_;
      uVar9 = 0;
      if ((int)uVar12 < *(int *)(pFVar1 + lVar21 + 8)) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar16 = *(longlong *)(pFVar1 + lVar21);
      uVar9 = 0;
      if ((int)uVar12 < *(int *)(pFVar4 + lVar21 + 8)) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar12 = uVar12 + 1;
      lVar20 = lVar19 * 4;
      lVar11 = lVar19 * 4;
      lVar19 = lVar19 + 1;
      fVar24 = fVar24 + *(float *)(*(longlong *)(pFVar4 + lVar21) + lVar20) *
                        *(float *)(lVar16 + lVar11) * *(float *)(lVar15 + (longlong)(int)uVar8 * 4);
    }
    uVar12 = 0;
    lVar19 = 0;
    while( true ) {
      uVar8 = 0;
      if (param_3 < (this->SecondIndices).ArrayNum) {
        uVar8 = uVar22;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar8 = __xmm_80000000800000008000000080000000;
      if (*(int *)((this->SecondIndices).AllocatorInstance.Data + lVar21 + 8) <= (int)uVar12) break;
      uVar8 = 0;
      if (param_3 < (this->SecondWeights).ArrayNum) {
        uVar8 = uVar22;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar1 = (this->SecondWeights).AllocatorInstance.Data;
      uVar8 = 0;
      if (param_3 < (this->SecondWeights).ArrayNum) {
        uVar8 = uVar22;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->SecondWeights).AllocatorInstance.Data;
      uVar8 = 0;
      if (param_3 < (this->SecondIndices).ArrayNum) {
        uVar8 = uVar22;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->SecondIndices).AllocatorInstance.Data;
      uVar13 = ~uVar12 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < *(int *)(pFVar4 + lVar21 + 8)) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar15 = *(longlong *)(pFVar4 + lVar21);
      uVar8 = 0;
      if ((int)uVar12 < *(int *)(pFVar1 + lVar21 + 8)) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar16 = *(longlong *)(pFVar1 + lVar21);
      uVar8 = 0;
      if ((int)uVar12 < *(int *)(pFVar5 + lVar21 + 8)) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar8 = *(uint *)(*(longlong *)(pFVar5 + lVar21) + lVar19 * 4);
      uVar13 = 0;
      if ((int)uVar8 < (int)param_1->_padding_) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar11 = lVar19 * 4;
      uVar12 = uVar12 + 1;
      lVar20 = lVar19 * 4;
      lVar19 = lVar19 + 1;
      fVar24 = fVar24 + *(float *)(lVar15 + lVar11) * *(float *)(lVar16 + lVar20) *
                        *(float *)(param_1->_padding_ + (longlong)(int)uVar8 * 4);
    }
    lVar15 = (longlong)param_3 * 0xc;
    local_b0 = 0;
    uVar12 = param_3 * 3;
    lVar19 = lVar15;
    do {
      uVar13 = *(uint *)((longlong)local_98 + lVar19 + (longlong)param_3 * -0xc);
      uVar9 = 0;
      if ((int)uVar12 < (this->LambdaArray).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar16 = lVar15 + local_b0;
      uVar9 = 0;
      if ((int)uVar12 < (this->LambdaArray).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      fVar23 = ((float)(uVar13 ^ uVar8) -
               fVar25 * *(float *)((this->LambdaArray).AllocatorInstance.Data + lVar16)) / fVar24;
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar1 = (this->LambdaArray).AllocatorInstance.Data;
      uVar13 = 0;
      lVar20 = 0;
      *(float *)(pFVar1 + lVar16) = fVar23 + *(float *)(pFVar1 + lVar16);
      while( true ) {
        uVar9 = 0;
        if (param_3 < (this->Indices).ArrayNum) {
          uVar9 = uVar22;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)((this->Indices).AllocatorInstance.Data + lVar21 + 8) <= (int)uVar13) break;
        uVar9 = 0;
        if (param_3 < (this->Weights).ArrayNum) {
          uVar9 = uVar22;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar1 = (this->Weights).AllocatorInstance.Data;
        uVar9 = 0;
        if (param_3 < (this->Indices).ArrayNum) {
          uVar9 = uVar22;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->Indices).AllocatorInstance.Data;
        uVar14 = ~uVar13 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar13 < *(int *)(pFVar4 + lVar21 + 8)) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar9 = *(uint *)(lVar20 + *(longlong *)(pFVar4 + lVar21));
        uVar10 = 0;
        if ((int)uVar9 < (int)param_1->_padding_) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar16 = param_1->_padding_;
        uVar10 = 0;
        if ((int)uVar13 < *(int *)(pFVar1 + lVar21 + 8)) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar2 = *(float *)(lVar20 + *(longlong *)(pFVar1 + lVar21));
        fVar3 = *(float *)(lVar16 + (longlong)(int)uVar9 * 4);
        uVar9 = 0;
        if (param_3 < (this->Indices).ArrayNum) {
          uVar9 = uVar22;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar1 = (this->Indices).AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar13 < *(int *)(pFVar1 + lVar21 + 8)) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar9 = *(uint *)(lVar20 + *(longlong *)(pFVar1 + lVar21));
        uVar14 = 0;
        if ((int)uVar9 < *(int *)&(param_1->MPAndInvM).field_0x10) {
          uVar14 = ~uVar9 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar16 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
        uVar13 = uVar13 + 1;
        lVar11 = (longlong)(int)uVar9 * 0x10 + local_b0;
        lVar20 = lVar20 + 4;
        *(float *)(lVar11 + lVar16) = fVar23 * fVar2 * fVar3 + *(float *)(lVar11 + lVar16);
      }
      uVar13 = 0;
      lVar16 = 0;
      while( true ) {
        uVar9 = 0;
        if (param_3 < (this->SecondIndices).ArrayNum) {
          uVar9 = uVar22;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)((this->SecondIndices).AllocatorInstance.Data + lVar21 + 8) <= (int)uVar13)
        break;
        uVar9 = 0;
        if (param_3 < (this->SecondWeights).ArrayNum) {
          uVar9 = uVar22;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar1 = (this->SecondWeights).AllocatorInstance.Data;
        uVar9 = 0;
        if (param_3 < (this->SecondIndices).ArrayNum) {
          uVar9 = uVar22;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->SecondIndices).AllocatorInstance.Data;
        uVar14 = ~uVar13 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar13 < *(int *)(pFVar4 + lVar21 + 8)) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar9 = *(uint *)(lVar16 + *(longlong *)(pFVar4 + lVar21));
        uVar10 = 0;
        if ((int)uVar9 < (int)param_1->_padding_) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar20 = param_1->_padding_;
        uVar10 = 0;
        if ((int)uVar13 < *(int *)(pFVar1 + lVar21 + 8)) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar2 = *(float *)(*(longlong *)(pFVar1 + lVar21) + lVar16);
        fVar3 = *(float *)(lVar20 + (longlong)(int)uVar9 * 4);
        uVar9 = 0;
        if (param_3 < (this->SecondIndices).ArrayNum) {
          uVar9 = uVar22;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar1 = (this->SecondIndices).AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar13 < *(int *)(pFVar1 + lVar21 + 8)) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar9 = *(uint *)(lVar16 + *(longlong *)(pFVar1 + lVar21));
        uVar14 = 0;
        if ((int)uVar9 < *(int *)&(param_1->MPAndInvM).field_0x10) {
          uVar14 = ~uVar9 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar20 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
        uVar13 = uVar13 + 1;
        lVar11 = (longlong)(int)uVar9 * 0x10 + local_b0;
        lVar16 = lVar16 + 4;
        *(float *)(lVar11 + lVar20) = *(float *)(lVar11 + lVar20) - fVar23 * fVar2 * fVar3;
      }
      local_b0 = local_b0 + 4;
      uVar12 = uVar12 + 1;
      lVar19 = lVar19 + 4;
    } while (local_b0 < 0xc);
  }
  return;
}

// ApplySingleConstraintWithoutSelfTarget @ 143a52620

void __thiscall
Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::
ApplySingleConstraintWithoutSelfTarget
          (FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,float param_2,int param_3,float param_4)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  longlong local_b0;
  longlong local_a8;
  float local_a0 [26];
  
  uVar21 = (ulonglong)param_3;
  uVar23 = (uint)~param_3 >> 0x1f;
  uVar14 = 0;
  if (param_3 < (this->Stiffness).ArrayNum) {
    uVar14 = uVar23;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar2 = (this->Stiffness).AllocatorInstance.Data + uVar21 * 4;
  if (param_4 < *(float *)pFVar2 || param_4 == *(float *)pFVar2) {
    uVar14 = 0;
    if (param_3 < (this->Stiffness).ArrayNum) {
      uVar14 = uVar23;
    }
    if ((uVar14 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar14 = 0;
    if (param_3 < (this->Stiffness).ArrayNum) {
      uVar14 = uVar23;
    }
    fVar26 = __real_40000000 /
             (param_2 * *(float *)((this->Stiffness).AllocatorInstance.Data + uVar21 * 4) * param_2)
    ;
    if ((uVar14 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (__real_56b5e621 < *(float *)((this->Stiffness).AllocatorInstance.Data + uVar21 * 4)) {
      fVar26 = 0.0;
    }
    local_a0[0] = 0.0;
    local_a0[1] = 0.0;
    lVar19 = uVar21 * 0x10;
    uVar14 = 0;
    lVar18 = 0;
    local_a0[2] = 0.0;
    uVar22 = uVar21;
    while( true ) {
      uVar10 = 0;
      if ((int)uVar22 < (this->Indices).ArrayNum) {
        uVar10 = uVar23;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(int *)((this->Indices).AllocatorInstance.Data + lVar19 + 8) <= (int)uVar14) break;
      lVar15 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar22 < (this->Weights).ArrayNum) {
          uVar10 = uVar23;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar2 = (this->Weights).AllocatorInstance.Data;
        uVar10 = 0;
        if (param_3 < (this->Indices).ArrayNum) {
          uVar10 = uVar23;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (this->Indices).AllocatorInstance.Data;
        uVar10 = 0;
        if ((int)uVar14 < *(int *)(pFVar6 + lVar19 + 8)) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar10 = *(uint *)(lVar18 + *(longlong *)(pFVar6 + lVar19));
        uVar16 = 0;
        if ((int)uVar10 < *(int *)&(param_1->MPAndInvM).field_0x10) {
          uVar16 = ~uVar10 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar13 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
        uVar16 = 0;
        if ((int)uVar14 < *(int *)(pFVar2 + lVar19 + 8)) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar22 = (ulonglong)(uint)param_3;
        *(float *)((longlong)local_a0 + lVar15) =
             *(float *)(*(longlong *)(pFVar2 + lVar19) + lVar18) *
             *(float *)(lVar15 + (longlong)(int)uVar10 * 0x10 + lVar13) +
             *(float *)((longlong)local_a0 + lVar15);
        lVar15 = lVar15 + 4;
      } while (lVar15 < 0xc);
      uVar14 = uVar14 + 1;
      lVar18 = lVar18 + 4;
    }
    uVar14 = 0;
    if ((int)uVar22 < (this->Constraints).ArrayNum) {
      uVar14 = uVar23;
    }
    if ((uVar14 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_a8 = uVar21 * 0xc;
    pFVar2 = (this->Constraints).AllocatorInstance.Data;
    uVar14 = 0;
    lVar18 = 0;
    local_a0[1] = local_a0[1] - *(float *)(pFVar2 + local_a8 + 4);
    local_a0[0] = local_a0[0] - *(float *)(pFVar2 + local_a8);
    local_a0[2] = local_a0[2] - *(float *)(pFVar2 + local_a8 + 8);
    fVar25 = fVar26;
    while( true ) {
      iVar20 = (int)uVar22;
      uVar10 = 0;
      if (iVar20 < (this->Indices).ArrayNum) {
        uVar10 = uVar23;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar10 = __xmm_80000000800000008000000080000000;
      if (*(int *)((this->Indices).AllocatorInstance.Data + lVar19 + 8) <= (int)uVar14) break;
      uVar10 = 0;
      if (iVar20 < (this->Weights).ArrayNum) {
        uVar10 = uVar23;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar2 = (this->Weights).AllocatorInstance.Data;
      uVar10 = 0;
      if (iVar20 < (this->Weights).ArrayNum) {
        uVar10 = uVar23;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (this->Weights).AllocatorInstance.Data;
      uVar10 = 0;
      if (param_3 < (this->Indices).ArrayNum) {
        uVar10 = uVar23;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (this->Indices).AllocatorInstance.Data;
      uVar16 = ~uVar14 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar14 < *(int *)(pFVar6 + lVar19 + 8)) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar15 = *(longlong *)(pFVar6 + lVar19);
      uVar10 = 0;
      if ((int)uVar14 < *(int *)(pFVar2 + lVar19 + 8)) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar13 = *(longlong *)(pFVar2 + lVar19);
      uVar10 = 0;
      if ((int)uVar14 < *(int *)(pFVar7 + lVar19 + 8)) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar10 = *(uint *)(*(longlong *)(pFVar7 + lVar19) + lVar18 * 4);
      uVar16 = 0;
      if ((int)uVar10 < (int)param_1->_padding_) {
        uVar16 = ~uVar10 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar3 = lVar18 * 4;
      uVar14 = uVar14 + 1;
      lVar1 = lVar18 * 4;
      lVar18 = lVar18 + 1;
      uVar22 = (ulonglong)(uint)param_3;
      fVar25 = fVar25 + *(float *)(lVar15 + lVar3) * *(float *)(lVar13 + lVar1) *
                        *(float *)(param_1->_padding_ + (longlong)(int)uVar10 * 4);
    }
    uVar14 = iVar20 * 3;
    local_b0 = 0;
    do {
      uVar16 = *(uint *)((longlong)local_a0 + local_b0);
      uVar11 = 0;
      if ((int)uVar14 < (this->LambdaArray).ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar11 = 0;
      if ((int)uVar14 < (this->LambdaArray).ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      fVar24 = ((float)(uVar16 ^ uVar10) -
               fVar26 * *(float *)((this->LambdaArray).AllocatorInstance.Data + local_a8)) / fVar25;
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar2 = (this->LambdaArray).AllocatorInstance.Data;
      uVar16 = 0;
      *(float *)(pFVar2 + local_a8) = fVar24 + *(float *)(pFVar2 + local_a8);
      lVar18 = 0;
      while( true ) {
        iVar20 = (int)uVar22;
        uVar11 = 0;
        if (iVar20 < (this->Indices).ArrayNum) {
          uVar11 = uVar23;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(int *)((this->Indices).AllocatorInstance.Data + lVar19 + 8) <= (int)uVar16) break;
        uVar11 = 0;
        if (iVar20 < (this->Weights).ArrayNum) {
          uVar11 = uVar23;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar2 = (this->Weights).AllocatorInstance.Data;
        uVar11 = 0;
        if (iVar20 < (this->Indices).ArrayNum) {
          uVar11 = uVar23;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (this->Indices).AllocatorInstance.Data;
        uVar17 = ~uVar16 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar16 < *(int *)(pFVar2 + lVar19 + 8)) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar15 = *(longlong *)(pFVar2 + lVar19);
        uVar11 = 0;
        if ((int)uVar16 < *(int *)(pFVar6 + lVar19 + 8)) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar11 = *(uint *)(*(longlong *)(pFVar6 + lVar19) + lVar18 * 4);
        uVar12 = 0;
        if ((int)uVar11 < (int)param_1->_padding_) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar4 = *(float *)(lVar15 + lVar18 * 4);
        uVar22 = (ulonglong)param_3;
        fVar5 = *(float *)(param_1->_padding_ + (longlong)(int)uVar11 * 4);
        uVar11 = 0;
        if (param_3 < (this->Indices).ArrayNum) {
          uVar11 = uVar23;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar2 = (this->Indices).AllocatorInstance.Data;
        uVar11 = 0;
        if ((int)uVar16 < *(int *)(pFVar2 + lVar19 + 8)) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar11 = *(uint *)(*(longlong *)(pFVar2 + lVar19) + lVar18 * 4);
        uVar17 = 0;
        if ((int)uVar11 < *(int *)&(param_1->MPAndInvM).field_0x10) {
          uVar17 = ~uVar11 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar15 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
        uVar16 = uVar16 + 1;
        lVar13 = (longlong)(int)uVar11 * 0x10 + local_b0;
        lVar18 = lVar18 + 1;
        *(float *)(lVar13 + lVar15) = fVar24 * fVar4 * fVar5 + *(float *)(lVar13 + lVar15);
      }
      local_b0 = local_b0 + 4;
      uVar14 = uVar14 + 1;
      local_a8 = local_a8 + 4;
    } while (local_b0 < 0xc);
  }
  return;
}

// operator() @ 1504a4850

bool __thiscall
`Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::
FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3444621641781346240>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3444621641781346240>,
                       &`public:___cdecl_`public:___cdecl_Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64,TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FDeformableXPBDWeakConstraintParams_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a53f0

bool __thiscall
`Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::
FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>'::__l6::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3444621641781346233>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3444621641781346233>,
                       &`public:___cdecl_`public:___cdecl_Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64,TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FDeformableXPBDWeakConstraintParams_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

