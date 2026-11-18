// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// FChannelResultTask @ 146807c10

FChannelResultTask * __thiscall
`UMovieScenePiecewiseDoubleBlenderSystem::DispatchDecomposeTask'::__l2::FChannelResultTask::
FChannelResultTask(void *this,FValueDecompositionParams *param_1,FAlignedDecomposedValue *param_2)

{
  int iVar1;
  FMovieSceneEntityID *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FBuiltInComponentTypes *pFVar5;
  FChannelResultTask *pFVar6;
  void *pvVar7;
  
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(int *)((longlong)this + 0x18) = 0;
  *(int *)((longlong)this + 0x1c) = 8;
  *(FAlignedDecomposedValue **)((longlong)this + 0x20) = param_2;
  *(ushort *)((longlong)this + 0x28) = param_1->DecomposeBlendChannel;
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  *(ushort *)((longlong)this + 0x2a) = (pFVar5->Tags).AdditiveBlend.Value;
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  *(ushort *)((longlong)this + 0x2c) = (pFVar5->Tags).AdditiveFromBaseBlend.Value;
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  *(ushort *)((longlong)this + 0x2e) = (pFVar5->Tags).OverrideBlend.Value;
  iVar1 = (param_1->Query).Entities.ArrayNum;
  _Src = (param_1->Query).Entities.DataPtr;
  if ((_Src == (FMovieSceneEntityID *)0x0) && (iVar1 != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FChannelResultTask *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
                    (2,2,iVar1,this,(int *)((longlong)this + 0x18),(int *)((longlong)this + 0x1c));
  pvVar7 = this;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    pvVar7 = *(void **)((longlong)this + 0x10);
  }
  if (iVar1 != 0) {
    memcpy((void *)((longlong)pvVar7 + (longlong)iVar4 * 2),_Src,(longlong)iVar1 * 2);
  }
  return this;
}

// ForEachAllocation @ 14682f1d0

void __thiscall
`UMovieScenePiecewiseDoubleBlenderSystem::DispatchDecomposeTask'::__l2::FChannelResultTask::
ForEachAllocation(void *this,FEntityAllocation *param_1,
                 TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
                 TRead<FMovieSceneBlendChannelID> param_3,TRead<double> param_4,
                 TReadOptional<int> param_5,TReadOptional<double> param_6,
                 TReadOptional<double> param_7)

{
  double *pdVar1;
  short *psVar2;
  undefined8 *puVar3;
  double dVar4;
  short sVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  ulonglong uVar9;
  bool bVar10;
  int iVar11;
  FComponentHeader *pFVar12;
  longlong lVar13;
  UClass *this_00;
  UMovieSceneBlenderSystem *pUVar14;
  ushort uVar15;
  short *psVar16;
  FComponentHeader *pFVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  bool local_res10;
  undefined1 local_1b8 [8];
  TReadOptional<double> local_1b0;
  FComponentHeader *local_1a8;
  longlong local_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined8 uStack_180;
  FComponentHeader *local_178;
  FComponentHeader *local_170;
  int local_168;
  longlong local_160;
  longlong local_158;
  ulonglong local_150;
  double local_148;
  float fStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  int iStack_130;
  undefined4 uStack_12c;
  short local_128;
  undefined6 uStack_126;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  short local_100;
  undefined6 uStack_fe;
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  short local_d8;
  undefined6 uStack_d6;
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  short local_b0;
  undefined6 uStack_ae;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    this_00 = UMovieScenePiecewiseDoubleBlenderSystem::StaticClass();
    pUVar14 = UClass::GetDefaultObject<UMovieSceneBlenderSystem>(this_00);
    if ((pUVar14 == (UMovieSceneBlenderSystem *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("DefaultObject",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneBlenderSystem.h"
                            ,0x41,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    BlenderSystemID.Value = (pUVar14->SystemID).Value;
    _Init_thread_footer(&::_TSS0);
  }
  local_178 = param_1->ComponentHeaders;
  pFVar12 = local_178 + param_1->NumComponents;
  local_1a0 = 0;
  for (pFVar17 = local_178; local_1a8 = local_178, pFVar17 != pFVar12; pFVar17 = pFVar17 + 1) {
    if ((pFVar17->ComponentType).Value == *(ushort *)((longlong)this + 0x2e)) {
      uVar15 = *(ushort *)((longlong)this + 0x2a);
      local_170 = pFVar17;
      goto LAB_14682f290;
    }
  }
  uVar15 = *(ushort *)((longlong)this + 0x2a);
  local_170 = (FComponentHeader *)0x0;
  pFVar17 = (FComponentHeader *)0x0;
  for (; local_1a8 != pFVar12; local_1a8 = local_1a8 + 1) {
LAB_14682f290:
    if ((local_1a8->ComponentType).Value == uVar15) {
      uVar15 = *(ushort *)((longlong)this + 0x2c);
      local_res10 = local_1a8 != (FComponentHeader *)0x0;
      goto LAB_14682f2c0;
    }
  }
  uVar15 = *(ushort *)((longlong)this + 0x2c);
  local_res10 = false;
  local_1a8 = (FComponentHeader *)0x0;
  for (; local_178 != pFVar12; local_178 = local_178 + 1) {
LAB_14682f2c0:
    if ((local_178->ComponentType).Value == uVar15) goto LAB_14682f2d8;
  }
  local_178 = (FComponentHeader *)0x0;
LAB_14682f2d8:
  local_150 = (ulonglong)param_1->Size;
  if (local_150 != 0) {
    local_158 = (longlong)param_5 - (longlong)param_3;
    uVar23 = (undefined4)__real_3ff0000000000000;
    uVar9 = (ulonglong)__real_3ff0000000000000 >> 0x20;
    local_160 = (longlong)param_7 - (longlong)param_6;
    local_1b0 = param_6;
    do {
      if (*(uchar *)param_3 != BlenderSystemID.Value) {
        local_1b8[0] = 0;
        ``UMovieScenePiecewiseDoubleBlenderSystem::DispatchDecomposeTask'::__l2::FChannelResultTask
        ::ForEachAllocation'::__l4::<lambda_1>::operator()(local_1b8);
      }
      if (*(short *)((longlong)param_3 + 2) == *(short *)((longlong)this + 0x28)) {
        sVar5 = *(short *)((longlong)param_2 + local_1a0 * 2);
        dVar4 = *(double *)(((longlong)param_4 - (longlong)param_6) + (longlong)local_1b0);
        if (param_6 == (TReadOptional<double>)0x0) {
          uVar21 = 0;
          uVar22 = 0;
        }
        else {
          uVar21 = (undefined4)*(undefined8 *)local_1b0;
          uVar22 = (undefined4)((ulonglong)*(undefined8 *)local_1b0 >> 0x20);
        }
        uVar18 = uVar23;
        uVar19 = (int)uVar9;
        if (param_7 != (TReadOptional<double>)0x0) {
          uVar18 = (int)*(undefined8 *)(local_160 + (longlong)local_1b0);
          uVar19 = (int)((ulonglong)*(undefined8 *)(local_160 + (longlong)local_1b0) >> 0x20);
        }
        fVar20 = (float)(double)CONCAT44(uVar19,uVar18);
        if (param_5 == (TReadOptional<int>)0x0) {
          iVar11 = -1;
        }
        else {
          local_168 = *(int *)(local_158 + (longlong)param_3);
          iVar11 = local_168;
          if ((local_168 != -1) &&
             ((local_1a8 != (FComponentHeader *)0x0 || (pFVar17 != (FComponentHeader *)0x0)))) {
            lVar6 = *(longlong *)((longlong)this + 0x20);
            uStack_12c = CONCAT31(uStack_12c._1_3_,local_res10);
            local_138 = 0;
            local_148 = dVar4;
            fStack_140 = fVar20;
            iStack_130 = local_168;
            if ((*(double **)(lVar6 + 0x18) <= &local_148) &&
               ((&local_148 < *(double **)(lVar6 + 0x18) + (longlong)*(int *)(lVar6 + 0x24) * 4 &&
                (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)))) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar11 = *(int *)(lVar6 + 0x20);
            if (iVar11 == *(int *)(lVar6 + 0x24)) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,(ForAnyElementType *)(lVar6 + 0x18),(int *)(lVar6 + 0x24));
            }
            *(int *)(lVar6 + 0x20) = iVar11 + 1;
            lVar6 = *(longlong *)(lVar6 + 0x18);
            pdVar1 = (double *)((longlong)iVar11 * 0x20 + lVar6);
            *pdVar1 = local_148;
            pdVar1[1] = (double)CONCAT44(uStack_13c,fStack_140);
            puVar3 = (undefined8 *)((longlong)iVar11 * 0x20 + 0x10 + lVar6);
            *puVar3 = local_138;
            puVar3[1] = CONCAT44(uStack_12c,iStack_130);
            iVar11 = local_168;
          }
        }
        psVar16 = this;
        if (*(short **)((longlong)this + 0x10) != (short *)0x0) {
          psVar16 = *(short **)((longlong)this + 0x10);
        }
        psVar2 = psVar16 + *(int *)((longlong)this + 0x18);
        for (; psVar16 != psVar2; psVar16 = psVar16 + 1) {
          if (*psVar16 == sVar5) {
            if ((iVar11 == -1) ||
               ((local_1a8 == (FComponentHeader *)0x0 && (local_170 == (FComponentHeader *)0x0)))) {
              lVar6 = *(longlong *)((longlong)this + 0x20);
              uStack_180 = CONCAT35(uStack_180._5_3_,0x1ffffffff);
              local_198._8_4_ = fVar20;
              local_198._0_8_ = dVar4;
              if (local_1a8 == (FComponentHeader *)0x0) {
                if (local_178 == (FComponentHeader *)0x0) {
                  auStack_a8._8_4_ = fVar20;
                  auStack_a8._0_8_ = dVar4;
                  auStack_a8._12_4_ = local_198._12_4_;
                  uStack_98 = 0;
                  uStack_90 = uStack_180;
                  local_188 = 0;
                  local_b0 = sVar5;
                  if (((*(short **)(lVar6 + 0x28) <= &local_b0) &&
                      (&local_b0 <
                       *(short **)(lVar6 + 0x28) + (longlong)*(int *)(lVar6 + 0x34) * 0x14)) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar11 = *(int *)(lVar6 + 0x30);
                  if (iVar11 == *(int *)(lVar6 + 0x34)) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x828,(ForAnyElementType *)(lVar6 + 0x28),
                                        (int *)(lVar6 + 0x34));
                  }
                  *(int *)(lVar6 + 0x30) = iVar11 + 1;
                  lVar13 = (longlong)iVar11;
                  lVar6 = *(longlong *)(lVar6 + 0x28);
                  puVar3 = (undefined8 *)(lVar6 + lVar13 * 0x28);
                  *puVar3 = CONCAT62(uStack_ae,local_b0);
                  puVar3[1] = auStack_a8._0_8_;
                  puVar3 = (undefined8 *)(lVar6 + 0x10 + lVar13 * 0x28);
                  *puVar3 = auStack_a8._8_8_;
                  puVar3[1] = uStack_98;
                  *(undefined8 *)(lVar6 + 0x20 + lVar13 * 0x28) = uStack_90;
                }
                else {
                  auStack_d0._8_4_ = fVar20;
                  auStack_d0._0_8_ = dVar4;
                  auStack_d0._12_4_ = local_198._12_4_;
                  uStack_b8 = 0xffffffff;
                  uStack_b4 = uStack_180._4_4_;
                  local_188 = CONCAT44(uVar22,uVar21);
                  uStack_180 = CONCAT44(uStack_180._4_4_,0xffffffff);
                  local_d8 = sVar5;
                  uStack_c0 = uVar21;
                  uStack_bc = uVar22;
                  if (((*(short **)(lVar6 + 0x38) <= &local_d8) &&
                      (&local_d8 <
                       *(short **)(lVar6 + 0x38) + (longlong)*(int *)(lVar6 + 0x44) * 0x14)) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar11 = *(int *)(lVar6 + 0x40);
                  if (iVar11 == *(int *)(lVar6 + 0x44)) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x828,(ForAnyElementType *)(lVar6 + 0x38),
                                        (int *)(lVar6 + 0x44));
                  }
                  *(int *)(lVar6 + 0x40) = iVar11 + 1;
                  lVar13 = (longlong)iVar11;
                  lVar6 = *(longlong *)(lVar6 + 0x38);
                  puVar3 = (undefined8 *)(lVar6 + lVar13 * 0x28);
                  *puVar3 = CONCAT62(uStack_d6,local_d8);
                  puVar3[1] = auStack_d0._0_8_;
                  puVar3 = (undefined8 *)(lVar6 + 0x10 + lVar13 * 0x28);
                  *puVar3 = auStack_d0._8_8_;
                  puVar3[1] = CONCAT44(uStack_bc,uStack_c0);
                  *(ulonglong *)(lVar6 + 0x20 + lVar13 * 0x28) = CONCAT44(uStack_b4,uStack_b8);
                }
              }
              else {
                auStack_f8._8_4_ = fVar20;
                auStack_f8._0_8_ = dVar4;
                auStack_f8._12_4_ = local_198._12_4_;
                uStack_e8 = 0;
                uStack_e0 = uStack_180;
                local_188 = 0;
                local_100 = sVar5;
                if (((*(short **)(lVar6 + 0x38) <= &local_100) &&
                    (&local_100 <
                     *(short **)(lVar6 + 0x38) + (longlong)*(int *)(lVar6 + 0x44) * 0x14)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar11 = *(int *)(lVar6 + 0x40);
                if (iVar11 == *(int *)(lVar6 + 0x44)) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x828,(ForAnyElementType *)(lVar6 + 0x38),
                                      (int *)(lVar6 + 0x44));
                }
                *(int *)(lVar6 + 0x40) = iVar11 + 1;
                lVar13 = (longlong)iVar11;
                lVar6 = *(longlong *)(lVar6 + 0x38);
                puVar3 = (undefined8 *)(lVar6 + lVar13 * 0x28);
                *puVar3 = CONCAT62(uStack_fe,local_100);
                puVar3[1] = auStack_f8._0_8_;
                puVar3 = (undefined8 *)(lVar6 + 0x10 + lVar13 * 0x28);
                *puVar3 = auStack_f8._8_8_;
                puVar3[1] = uStack_e8;
                *(undefined8 *)(lVar6 + 0x20 + lVar13 * 0x28) = uStack_e0;
              }
            }
            else {
              lVar6 = *(longlong *)((longlong)this + 0x20);
              uStack_180._0_5_ = CONCAT14(local_res10,iVar11);
              auStack_120._8_4_ = fVar20;
              auStack_120._0_8_ = dVar4;
              auStack_120._12_4_ = local_198._12_4_;
              local_198._8_4_ = fVar20;
              local_198._0_8_ = dVar4;
              uStack_110 = 0;
              uStack_108 = uStack_180;
              local_188 = 0;
              local_128 = sVar5;
              if (((*(short **)(lVar6 + 0x48) <= &local_128) &&
                  (&local_128 < *(short **)(lVar6 + 0x48) + (longlong)*(int *)(lVar6 + 0x54) * 0x14)
                  ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar11 = *(int *)(lVar6 + 0x50);
              if (iVar11 == *(int *)(lVar6 + 0x54)) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x828,(ForAnyElementType *)(lVar6 + 0x48),(int *)(lVar6 + 0x54))
                ;
              }
              *(int *)(lVar6 + 0x50) = iVar11 + 1;
              lVar13 = (longlong)iVar11;
              lVar6 = *(longlong *)(lVar6 + 0x48);
              puVar3 = (undefined8 *)(lVar6 + lVar13 * 0x28);
              *puVar3 = CONCAT62(uStack_126,local_128);
              puVar3[1] = auStack_120._0_8_;
              puVar3 = (undefined8 *)(lVar6 + 0x10 + lVar13 * 0x28);
              *puVar3 = auStack_120._8_8_;
              puVar3[1] = uStack_110;
              *(undefined8 *)(lVar6 + 0x20 + lVar13 * 0x28) = uStack_108;
            }
            goto LAB_14682f9bb;
          }
        }
        pdVar1 = *(double **)((longlong)this + 0x20);
        dVar8 = (double)fVar20;
        if (local_1a8 == (FComponentHeader *)0x0) {
          if (local_178 == (FComponentHeader *)0x0) {
            *pdVar1 = dVar8 * dVar4 + *pdVar1;
            *(float *)(*(longlong *)((longlong)this + 0x20) + 8) =
                 fVar20 + *(float *)(*(longlong *)((longlong)this + 0x20) + 8);
          }
          else {
            pdVar1[2] = (dVar4 - (double)CONCAT44(uVar22,uVar21)) * dVar8 + pdVar1[2];
          }
        }
        else {
          pdVar1[2] = dVar8 * dVar4 + pdVar1[2];
        }
      }
LAB_14682f9bb:
      local_1a0 = local_1a0 + 1;
      local_1b0 = (TReadOptional<double>)((longlong)local_1b0 + 8);
      param_3 = (TRead<FMovieSceneBlendChannelID>)((longlong)param_3 + 4);
      pFVar17 = local_170;
    } while (local_1a0 < (longlong)local_150);
  }
  return;
}

// operator() @ 1504f4680

bool __thiscall
``UMovieScenePiecewiseDoubleBlenderSystem::DispatchDecomposeTask'::__l2::FChannelResultTask::
ForEachAllocation'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2203290773712010116>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2203290773712010116>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

