// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 8

// <lambda_1> @ 14dd69a20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

<lambda_1> * __thiscall
`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>::
<lambda_1>(void *this,<lambda_1> *param_1)

{
  double dVar1;
  undefined8 uVar2;
  FPanoramicPane *pFVar3;
  double *pdVar4;
  FPanoramicPane *pFVar5;
  longlong lVar6;
  double *pdVar7;
  
  *(FMoviePipelinePanoramicBlenderBase **)this = param_1->__this;
  lVar6 = 2;
  pFVar3 = &param_1->Pane;
  pdVar4 = (double *)((longlong)this + 8);
  do {
    pdVar7 = pdVar4;
    pFVar5 = pFVar3;
    dVar1 = (pFVar5->OriginalCameraLocation).field0_0x0._s_0.Y;
    *pdVar7 = (pFVar5->OriginalCameraLocation).field0_0x0._s_0.X;
    pdVar7[1] = dVar1;
    dVar1 = (pFVar5->PrevOriginalCameraLocation).field0_0x0._s_0.X;
    pdVar7[2] = (pFVar5->OriginalCameraLocation).field0_0x0._s_0.Z;
    pdVar7[3] = dVar1;
    dVar1 = (pFVar5->PrevOriginalCameraLocation).field0_0x0._s_0.Z;
    pdVar7[4] = (pFVar5->PrevOriginalCameraLocation).field0_0x0._s_0.Y;
    pdVar7[5] = dVar1;
    dVar1 = (pFVar5->OriginalCameraRotation).Yaw;
    pdVar7[6] = (pFVar5->OriginalCameraRotation).Pitch;
    pdVar7[7] = dVar1;
    dVar1 = (pFVar5->PrevOriginalCameraRotation).Pitch;
    pdVar7[8] = (pFVar5->OriginalCameraRotation).Roll;
    pdVar7[9] = dVar1;
    dVar1 = (pFVar5->PrevOriginalCameraRotation).Roll;
    pdVar7[10] = (pFVar5->PrevOriginalCameraRotation).Yaw;
    pdVar7[0xb] = dVar1;
    dVar1 = *(double *)&pFVar5->EyeConvergenceDistance;
    pdVar7[0xc] = *(double *)&pFVar5->NearClippingPlane;
    pdVar7[0xd] = dVar1;
    dVar1 = *(double *)((longlong)&(pFVar5->Resolution).field0_0x0 + 4);
    pdVar7[0xe] = *(double *)&pFVar5->VerticalFieldOfView;
    pdVar7[0xf] = dVar1;
    lVar6 = lVar6 + -1;
    pFVar3 = (FPanoramicPane *)&pFVar5->CameraLocation;
    pdVar4 = pdVar7 + 0x10;
  } while (lVar6 != 0);
  dVar1 = (pFVar5->CameraLocation).field0_0x0._s_0.Y;
  pdVar7[0x10] = (pFVar5->CameraLocation).field0_0x0._s_0.X;
  pdVar7[0x11] = dVar1;
  pdVar7[0x12] = (pFVar5->CameraLocation).field0_0x0._s_0.Z;
  *(FImagePixelData **)((longlong)this + 0x120) = (param_1->InData).Ptr;
  (param_1->InData).Ptr = (FImagePixelData *)0x0;
  *(undefined8 *)((longlong)this + 0x130) = *(undefined8 *)&param_1->OnDebugSampleAvailable;
  *(undefined8 *)((longlong)this + 0x158) =
       *(undefined8 *)&(param_1->OnDebugSampleAvailable).field_0x28;
  *(undefined8 *)&(param_1->OnDebugSampleAvailable).field_0x28 = 0;
  uVar2 = *(undefined8 *)&(param_1->OnDebugSampleAvailable).field_0x18;
  *(undefined8 *)((longlong)this + 0x140) =
       *(undefined8 *)&(param_1->OnDebugSampleAvailable).field_0x10;
  *(undefined8 *)((longlong)this + 0x148) = uVar2;
  *(undefined8 *)((longlong)this + 0x150) =
       *(undefined8 *)&(param_1->OnDebugSampleAvailable).field_0x20;
  if (*(longlong *)((longlong)this + 0x130) != 0) {
    *(undefined8 *)&param_1->OnDebugSampleAvailable = 0;
  }
  return this;
}

// operator() @ 14dd6d210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>::
operator()(void *this,uint param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_MoviePipeline_PanoBlend> FVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  FNameEntryId FVar18;
  FName FVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  LPCRITICAL_SECTION p_Var22;
  longlong lVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  double dVar27;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  double dVar28;
  double dVar29;
  double dVar30;
  float _X;
  float fVar31;
  float fVar32;
  undefined1 auStackY_348 [32];
  <lambda_1> local_2e8 [8];
  uint local_2e0;
  uint uStack_2dc;
  undefined1 *local_2d8;
  undefined8 *local_2d0;
  FColor_u_0 local_2c8;
  int local_2c4;
  undefined8 local_2c0;
  longlong local_2b8;
  FName local_2b0;
  int local_2a8;
  int iStack_2a4;
  int local_2a0;
  int iStack_29c;
  FName local_298;
  longlong local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  TArrayView<std::nullptr_t,int> local_260;
  code *local_250;
  undefined8 *local_248;
  undefined8 local_240;
  undefined1 *local_238;
  TArrayView<std::nullptr_t,int> local_230;
  code *local_220;
  undefined8 *local_218;
  undefined8 local_210;
  int local_208;
  undefined4 local_204;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined8 local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  float local_1bc;
  double *local_1b8;
  double *local_1b0;
  undefined8 *local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined1 *local_190;
  FName local_188;
  LARGE_INTEGER local_180;
  double local_178;
  double dStack_170;
  undefined8 local_168;
  double local_158 [6];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_348;
  puVar21 = (undefined1 *)0x0;
  iVar24 = 0;
  FVar10 = UE::MoviePipeline::StatPtr_STAT_MoviePipeline_PanoBlend;
  if (UE::MoviePipeline::StatPtr_STAT_MoviePipeline_PanoBlend ==
      (FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_MoviePipeline_PanoBlend>)0x0) {
    pFVar9 = ::FName::FName(&local_188,"STAT_MoviePipeline_PanoBlend");
    FVar10 = (FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_MoviePipeline_PanoBlend>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &UE::MoviePipeline::StatPtr_STAT_MoviePipeline_PanoBlend,*pFVar9,
                        L"STAT_MoviePipeline_PanoBlend","STATGROUP_MoviePipeline","STATCAT_Advanced"
                        ,L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_298.ComparisonIndex.Value = 0;
  local_298.Number = 0;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar14 = FVar19.Number;
  if ((FVar18.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2c8._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2b0.ComparisonIndex.Value = FVar18.Value;
        local_2b0.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2b0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelinePanoramicBlenderBase.cpp"
                   ,0xdc);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2e0 = FVar18.Value;
      uStack_2dc = uVar14;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar6 = true;
      goto LAB_14dd6d3a3;
    }
  }
  bVar6 = false;
  FVar19 = local_298;
LAB_14dd6d3a3:
  QueryPerformanceCounter(&local_180);
  fVar31 = *(float *)((longlong)this + 0x74) * __real_3f000000;
  uVar13 = *(undefined8 *)((longlong)this + 0x7c);
  lVar11 = 0xd0;
  if (*(char *)((longlong)this + 0x100) == '\0') {
    lVar11 = 0xb8;
  }
  fVar32 = *(float *)((longlong)this + 0x78) * __real_3f000000;
  _X = fVar31 * __real_3c8efa35;
  local_168 = *(undefined8 *)(lVar11 + 0x10 + (longlong)this);
  dVar2 = *(double *)(lVar11 + (longlong)this);
  dVar4 = ((double *)(lVar11 + (longlong)this))[1];
  local_2c0 = uVar13;
  local_178 = dVar2;
  dStack_170 = dVar4;
  fVar25 = cosf(_X);
  fVar26 = cosf(fVar32 * __real_3c8efa35);
  __libm_sse2_sincosf4_();
  local_268 = (double)extraout_XMM0_Da;
  local_270 = (double)extraout_XMM0_Db;
  local_280 = (double)extraout_XMM0_Dd;
  local_278 = (double)extraout_XMM0_Dc;
  dVar27 = tan((double)_X);
  local_158[0] = __real_3ff0000000000000 / dVar27;
  local_158[2] = 0.0;
  local_158[3] = 0.0;
  local_158[1] = 0.0;
  local_128 = 0;
  uStack_120 = 0;
  local_108 = ___xmm_3ff00000000000000000000000000000;
  uStack_100 = _UNK_15061cbc8;
  local_158[5] = (double)(int)uVar13 / ((double)(int)((ulonglong)uVar13 >> 0x20) * dVar27);
  local_158[4] = 0.0;
  local_118 = 0;
  uStack_110 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  lVar11 = *(longlong *)this;
  local_e8 = (double)*(float *)((longlong)this + 0x68);
  dVar28 = (double)fVar31;
  dVar29 = dVar28 + dVar4;
  local_e0 = 0;
  iStack_29c = *(int *)(lVar11 + 0x8c);
  lVar23 = (longlong)iStack_29c;
  dVar27 = __real_4076800000000000 / (double)*(int *)(lVar11 + 0x88);
  dVar3 = __real_4066800000000000 / (double)iStack_29c;
  dVar30 = (double)fVar32;
  local_2a0 = (int)((longlong)
                    ROUND((dVar29 + dVar29 + __real_4076800000000000) / dVar27 -
                          __real_3fe0000000000000) >> 1);
  dVar29 = dVar30 + dVar2;
  if (__real_4056800000000000 <= dVar29) {
    dVar29 = __real_4056800000000000;
  }
  dVar2 = dVar2 - dVar30;
  if (dVar2 <= __real_c056800000000000) {
    dVar2 = __real_c056800000000000;
  }
  local_288 = (longlong)
              ROUND(((dVar4 - dVar28) + __real_4066800000000000) *
                    (__real_4000000000000000 / dVar27) - __real_3fe0000000000000) >> 1;
  local_2a8 = (int)local_288;
  lVar15 = lVar23 - ((longlong)
                     ROUND((double)((float)dVar29 + __real_42b40000) *
                           (__real_4000000000000000 / dVar3) - __real_3fe0000000000000) >> 1);
  if (0 < lVar15) {
    iVar24 = (int)lVar15;
  }
  lVar15 = lVar23 - ((longlong)
                     ROUND(((double)((float)dVar2 + __real_42b40000) +
                           (double)((float)dVar2 + __real_42b40000)) / dVar3 -
                           __real_3fe0000000000000) >> 1);
  if (lVar15 < lVar23) {
    iStack_29c = (int)lVar15;
  }
  local_2e0 = local_2a0 - local_2a8;
  uStack_2dc = iStack_29c - iVar24;
  p_Var22 = (LPCRITICAL_SECTION)(lVar11 + 0x20);
  local_2c4 = iVar24;
  iStack_2a4 = iVar24;
  if (p_Var22 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(p_Var22);
    lVar11 = *(longlong *)this;
    local_2b8 = *(longlong *)(lVar11 + 0x10);
    puVar20 = *(undefined8 **)(lVar11 + 8);
    local_2d0 = puVar20 + local_2b8;
    while( true ) {
      if (*(longlong *)(lVar11 + 0x10) != local_2b8) {
        local_2e8[0] = (<lambda_1>)0x0;
        `TCheckedPointerIterator<TUniquePtr<UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::FPoolEntry,TDefaultDelete<UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::FPoolEntry>_>,__int64,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_2e8);
      }
      if (puVar20 == local_2d0) goto LAB_14dd6d74b;
      if (*(char *)*puVar20 == '\0') break;
      puVar20 = puVar20 + 1;
    }
    puVar12 = (undefined1 *)*puVar20;
    if ((undefined1 *)*puVar20 == (undefined1 *)0x0) {
LAB_14dd6d74b:
      puVar12 = ::operator_new(0x38);
      if (puVar12 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar12 + 1) = 0;
        *(undefined2 *)(puVar12 + 5) = 0;
        puVar12[7] = 0;
        *(undefined8 *)(puVar12 + 0x20) = 0;
        *(undefined8 *)(puVar12 + 0x28) = 0;
        *(undefined8 *)(puVar12 + 0x30) = 0;
        *puVar12 = 0;
        *(undefined8 *)(puVar12 + 8) = 0;
        *(undefined8 *)(puVar12 + 0x10) = 0;
        *(undefined8 *)(puVar12 + 0x18) = 0;
        puVar21 = puVar12;
      }
      lVar11 = *(longlong *)this;
      local_2d8 = puVar21;
      if (((*(undefined1 ***)(lVar11 + 8) <= &local_2d8) &&
          (&local_2d8 < *(undefined1 ***)(lVar11 + 8) + *(longlong *)(lVar11 + 0x18))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar23 = *(longlong *)(lVar11 + 0x10);
      if (lVar23 == *(long64 *)(lVar11 + 0x18)) {
        lVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)(lVar11 + 8),(long64 *)(lVar11 + 0x18));
      }
      *(longlong *)(lVar11 + 0x10) = lVar23 + 1;
      *(undefined1 **)(*(longlong *)(lVar11 + 8) + lVar23 * 8) = local_2d8;
      local_2d8 = (undefined1 *)0x0;
      puVar12 = puVar21;
    }
    LOCK();
    *puVar12 = 1;
    UNLOCK();
    *(ulonglong *)(puVar12 + 0x20) = CONCAT44(uStack_2dc,local_2e0);
    *(ulonglong *)(puVar12 + 0x28) = CONCAT44(iStack_2a4,local_2a8);
    *(ulonglong *)(puVar12 + 0x30) = CONCAT44(iStack_29c,local_2a0);
    LeaveCriticalSection(p_Var22);
    iVar24 = *(int *)(puVar12 + 0x24);
    if (*(int *)(puVar12 + 0x24) < local_2c0._4_4_) {
      iVar24 = local_2c0._4_4_;
    }
    iVar17 = *(int *)(puVar12 + 0x20);
    if (*(int *)(puVar12 + 0x20) < (int)local_2c0) {
      iVar17 = (int)local_2c0;
    }
    TArray<FLinearColor,TSizedDefaultAllocator<64>_>::SetNumUninitialized
              ((TArray<FLinearColor,TSizedDefaultAllocator<64>_> *)(puVar12 + 8),
               (longlong)(iVar24 * iVar17),No);
    memset(*(void **)(puVar12 + 8),0,*(longlong *)(puVar12 + 0x10) << 4);
    local_210 = *(undefined8 *)this;
    local_208 = local_2c4;
    local_204 = (undefined4)local_288;
    local_1b8 = &local_178;
    local_1b0 = local_158;
    local_1a8 = &local_2c0;
    local_1a0 = (longlong)this + 8;
    local_198 = *(undefined8 *)((longlong)this + 0x120);
    local_250 = UE::Core::Private::Function::
                TFunctionRefCaller<``UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
                ::Call;
    local_248 = &local_210;
    local_1f0 = local_280;
    local_1e0 = local_278;
    local_1e8 = 0;
    local_1d8 = local_270;
    local_1d0 = local_268;
    local_1c8 = 0;
    local_260.DataPtr = (void **)0x0;
    local_260.ArrayNum = 0;
    local_200 = dVar27;
    local_1f8 = dVar3;
    local_1c0 = fVar25;
    local_1bc = fVar26;
    local_190 = puVar12;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",uStack_2dc,1,(TFunctionRef<void___cdecl(int)> *)&local_250,
               local_2e8[0],None,&local_260);
    if (*(void **)((longlong)this + 0x130) != (void *)0x0) {
      local_2d0 = *(undefined8 **)(puVar12 + 8);
      local_2b8 = *(longlong *)(puVar12 + 0x20);
      UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x130));
      pcVar1 = *(code **)((longlong)this + 0x130);
      plVar16 = (longlong *)((longlong)this + 0x140);
      if (*(longlong **)((longlong)this + 0x158) != (longlong *)0x0) {
        plVar16 = *(longlong **)((longlong)this + 0x158);
      }
      uVar13 = (**(code **)(*plVar16 + 8))();
      (*pcVar1)(uVar13,&local_2d0,&local_2b8);
    }
    p_Var22 = (LPCRITICAL_SECTION)(*(longlong *)this + 0x48);
    if (p_Var22 != (LPCRITICAL_SECTION)0x0) {
      EnterCriticalSection(p_Var22);
      local_240 = *(undefined8 *)this;
      local_220 = UE::Core::Private::Function::
                  TFunctionRefCaller<``UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>::operator()'::__l24::<lambda_2>,void,int>
                  ::Call;
      local_218 = &local_240;
      local_230.DataPtr = (void **)0x0;
      local_230.ArrayNum = 0;
      local_238 = puVar12;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",*(int *)(puVar12 + 0x24),1,
                 (TFunctionRef<void___cdecl(int)> *)&local_220,local_2e8[0],None,&local_230);
      LeaveCriticalSection(p_Var22);
      LOCK();
      *puVar12 = 0;
      UNLOCK();
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar6) {
        FThreadStats::AddMessage(FVar19,CycleScopeEnd);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator() @ 14dd6e100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::FetchFinalPixelDataHalfFloat'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  float *pfVar1;
  longlong *plVar2;
  code *pcVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  bool bVar37;
  uint uVar38;
  longlong lVar39;
  int iVar40;
  longlong lVar41;
  uint uVar42;
  longlong lVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined2 local_res8;
  undefined2 uStackX_a;
  undefined2 uStackX_c;
  undefined2 uStackX_e;
  
  iVar36 = _UNK_1508be50c;
  iVar35 = _UNK_1508be508;
  iVar34 = _UNK_1508be504;
  iVar33 = ___xmm_c8000fffc8000fffc8000fffc8000fff;
  iVar32 = _UNK_1508be4ec;
  iVar31 = _UNK_1508be4e8;
  iVar30 = _UNK_1508be4e4;
  iVar29 = ___xmm_47800000478000004780000047800000;
  iVar28 = _UNK_1508be4bc;
  iVar27 = _UNK_1508be4b8;
  iVar26 = _UNK_1508be4b4;
  iVar25 = ___xmm_38800000388000003880000038800000;
  uVar24 = _UNK_1508be48c;
  uVar23 = _UNK_1508be488;
  uVar22 = _UNK_1508be484;
  uVar21 = ___xmm_00000200000002000000020000000200;
  uVar20 = _UNK_1508be47c;
  uVar19 = _UNK_1508be478;
  uVar18 = _UNK_1508be474;
  uVar17 = ___xmm_000001ff000001ff000001ff000001ff;
  fVar16 = _UNK_15068962c;
  fVar15 = _UNK_150689628;
  fVar14 = _UNK_150689624;
  fVar13 = ___xmm_3f0000003f0000003f0000003f000000;
  uVar12 = _UNK_15068959c;
  uVar11 = _UNK_150689598;
  uVar10 = _UNK_150689594;
  uVar9 = ___xmm_00007c0000007c0000007c0000007c00;
  uVar8 = _UNK_15065157c;
  uVar7 = _UNK_150651578;
  uVar6 = _UNK_150651574;
  uVar5 = __xmm_80000000800000008000000080000000;
  fVar4 = __real_3f800000;
  lVar41 = *(longlong *)this;
  iVar40 = 0;
  if (0 < *(int *)(lVar41 + 0x88)) {
    lVar43 = 0;
    do {
      lVar39 = (longlong)*(int *)(lVar41 + 0x88) * (longlong)param_1 + lVar43;
      uVar42 = (uint)((ulonglong)lVar39 >> 0x3f) ^ 1;
      uVar38 = 0;
      if (lVar39 < *(longlong *)(lVar41 + 0x78)) {
        uVar38 = uVar42;
      }
      if ((uVar38 == 0) &&
         (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar37)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar2 = *(longlong **)((longlong)this + 8);
      pfVar1 = (float *)(*(longlong *)(lVar41 + 0x70) + lVar39 * 0x10);
      uVar38 = 0;
      if (lVar39 < plVar2[1]) {
        uVar38 = uVar42;
      }
      fVar46 = fVar4 / pfVar1[3];
      fVar48 = (float)(~uVar5 & (uint)(fVar46 * *pfVar1));
      fVar49 = (float)(~uVar6 & (uint)(fVar46 * pfVar1[1]));
      fVar50 = (float)(~uVar7 & (uint)(fVar46 * pfVar1[2]));
      fVar51 = (float)(~uVar8 & 0x3f800000);
      auVar44._0_4_ =
           (~-(uint)((int)fVar48 < iVar25) &
            (uint)((iVar33 + (int)fVar48) - (((int)fVar48 << 0x12) >> 0x1f)) >> 0xd |
           (int)(fVar48 + fVar13) - (int)fVar13 & -(uint)((int)fVar48 < iVar25)) &
           -(uint)((int)fVar48 < iVar29);
      auVar44._4_4_ =
           (~-(uint)((int)fVar49 < iVar26) &
            (uint)((iVar34 + (int)fVar49) - (((int)fVar49 << 0x12) >> 0x1f)) >> 0xd |
           (int)(fVar49 + fVar14) - (int)fVar14 & -(uint)((int)fVar49 < iVar26)) &
           -(uint)((int)fVar49 < iVar30);
      auVar44._8_4_ =
           (~-(uint)((int)fVar50 < iVar27) &
            (uint)((iVar35 + (int)fVar50) - (((int)fVar50 << 0x12) >> 0x1f)) >> 0xd |
           (int)(fVar50 + fVar15) - (int)fVar15 & -(uint)((int)fVar50 < iVar27)) &
           -(uint)((int)fVar50 < iVar31);
      auVar44._12_4_ =
           (~-(uint)((int)fVar51 < iVar28) & (uint)(iVar36 + (int)fVar51) >> 0xd |
           (int)(fVar51 + fVar16) - (int)fVar16 & -(uint)((int)fVar51 < iVar28)) &
           -(uint)((int)fVar51 < iVar32);
      auVar47._0_4_ =
           ~-(uint)((int)fVar48 < iVar29) &
           (((uint)fVar48 >> 0xd & uVar17 | uVar21) & -(uint)NAN(fVar48) | uVar9);
      auVar47._4_4_ =
           ~-(uint)((int)fVar49 < iVar30) &
           (((uint)fVar49 >> 0xd & uVar18 | uVar22) & -(uint)NAN(fVar49) | uVar10);
      auVar47._8_4_ =
           ~-(uint)((int)fVar50 < iVar31) &
           (((uint)fVar50 >> 0xd & uVar19 | uVar23) & -(uint)NAN(fVar50) | uVar11);
      auVar47._12_4_ =
           ~-(uint)((int)fVar51 < iVar32) &
           (((uint)fVar51 >> 0xd & uVar20 | uVar24) & -(uint)NAN(fVar51) | uVar12);
      auVar45._0_4_ = (int)(uVar5 & (uint)(fVar46 * *pfVar1)) >> 0x10;
      auVar45._4_4_ = (int)(uVar6 & (uint)(fVar46 * pfVar1[1])) >> 0x10;
      auVar45._8_4_ = (int)(uVar7 & (uint)(fVar46 * pfVar1[2])) >> 0x10;
      auVar45._12_4_ = (int)(uVar8 & 0x3f800000) >> 0x10;
      auVar45 = auVar44 | auVar47 | auVar45;
      auVar45 = packssdw(auVar45,auVar45);
      if ((uVar38 == 0) &&
         (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar37)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar41 = *plVar2;
      iVar40 = iVar40 + 1;
      local_res8 = auVar45._0_2_;
      lVar43 = lVar43 + 1;
      *(undefined2 *)(lVar41 + lVar39 * 8) = local_res8;
      uStackX_a = auVar45._2_2_;
      *(undefined2 *)(lVar41 + 2 + lVar39 * 8) = uStackX_a;
      uStackX_c = auVar45._4_2_;
      *(undefined2 *)(lVar41 + 4 + lVar39 * 8) = uStackX_c;
      uStackX_e = auVar45._6_2_;
      *(undefined2 *)(lVar41 + 6 + lVar39 * 8) = uStackX_e;
      lVar41 = *(longlong *)this;
    } while (iVar40 < *(int *)(lVar41 + 0x88));
  }
  return;
}

// operator() @ 14dd6e430

void __thiscall
`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::FetchFinalPixelDataLinearColor'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  
  fVar8 = __real_3f800000;
  lVar13 = *(longlong *)this;
  iVar12 = 0;
  if (0 < *(int *)(lVar13 + 0x88)) {
    lVar15 = 0;
    do {
      lVar14 = (longlong)*(int *)(lVar13 + 0x88) * (longlong)param_1 + lVar15;
      uVar11 = (uint)((ulonglong)lVar14 >> 0x3f) ^ 1;
      uVar10 = 0;
      if (lVar14 < *(longlong *)(lVar13 + 0x78)) {
        uVar10 = uVar11;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)((longlong)this + 8);
      pfVar1 = (float *)(*(longlong *)(lVar13 + 0x70) + lVar14 * 0x10);
      fVar5 = *pfVar1;
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      uVar10 = 0;
      if (lVar14 < plVar3[1]) {
        uVar10 = uVar11;
      }
      fVar16 = fVar8 / pfVar1[3];
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar12 = iVar12 + 1;
      lVar15 = lVar15 + 1;
      puVar2 = (undefined8 *)(*plVar3 + lVar14 * 0x10);
      *puVar2 = CONCAT44(fVar16 * fVar6,fVar16 * fVar5);
      puVar2[1] = CONCAT44(0x3f800000,fVar16 * fVar7);
      lVar13 = *(longlong *)this;
    } while (iVar12 < *(int *)(lVar13 + 0x88));
  }
  return;
}

// BlendSample_AnyThread @ 14dd77d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread
          (FMoviePipelinePanoramicBlenderBase *this,
          TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1,
          FPanoramicPane *param_2,
          TUniqueFunction<void___cdecl(FLinearColor_*,UE::Math::TIntPoint<int>)> *param_3)

{
  FTaskConcurrencyLimiter *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  double *pdVar7;
  longlong lVar8;
  longlong *plVar9;
  FPanoramicPane *pFVar10;
  undefined1 auStack_198 [32];
  undefined1 local_178 [288];
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> local_58;
  longlong local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  pFVar1 = (this->TaskConcurrencyLimiter).Ptr;
  lVar8 = 2;
  pdVar6 = (double *)(local_178 + 8);
  do {
    pFVar10 = param_2;
    pdVar7 = pdVar6;
    dVar2 = (pFVar10->OriginalCameraLocation).field0_0x0._s_0.Y;
    dVar3 = (pFVar10->OriginalCameraLocation).field0_0x0._s_0.Z;
    dVar4 = (pFVar10->PrevOriginalCameraLocation).field0_0x0._s_0.X;
    *pdVar7 = (pFVar10->OriginalCameraLocation).field0_0x0._s_0.X;
    pdVar7[1] = dVar2;
    dVar2 = (pFVar10->PrevOriginalCameraLocation).field0_0x0._s_0.Y;
    dVar5 = (pFVar10->PrevOriginalCameraLocation).field0_0x0._s_0.Z;
    pdVar7[2] = dVar3;
    pdVar7[3] = dVar4;
    dVar3 = (pFVar10->OriginalCameraRotation).Pitch;
    dVar4 = (pFVar10->OriginalCameraRotation).Yaw;
    pdVar7[4] = dVar2;
    pdVar7[5] = dVar5;
    dVar2 = (pFVar10->OriginalCameraRotation).Roll;
    dVar5 = (pFVar10->PrevOriginalCameraRotation).Pitch;
    pdVar7[6] = dVar3;
    pdVar7[7] = dVar4;
    dVar3 = (pFVar10->PrevOriginalCameraRotation).Yaw;
    dVar4 = (pFVar10->PrevOriginalCameraRotation).Roll;
    pdVar7[8] = dVar2;
    pdVar7[9] = dVar5;
    dVar2 = *(double *)&pFVar10->NearClippingPlane;
    dVar5 = *(double *)&pFVar10->EyeConvergenceDistance;
    pdVar7[10] = dVar3;
    pdVar7[0xb] = dVar4;
    dVar3 = *(double *)&pFVar10->VerticalFieldOfView;
    dVar4 = *(double *)((longlong)&(pFVar10->Resolution).field0_0x0 + 4);
    pdVar7[0xc] = dVar2;
    pdVar7[0xd] = dVar5;
    pdVar7[0xe] = dVar3;
    pdVar7[0xf] = dVar4;
    lVar8 = lVar8 + -1;
    pdVar6 = pdVar7 + 0x10;
    param_2 = (FPanoramicPane *)&pFVar10->CameraLocation;
  } while (lVar8 != 0);
  dVar3 = (pFVar10->CameraLocation).field0_0x0._s_0.Y;
  dVar2 = (pFVar10->CameraLocation).field0_0x0._s_0.Z;
  pdVar7[0x10] = (pFVar10->CameraLocation).field0_0x0._s_0.X;
  pdVar7[0x11] = dVar3;
  pdVar7[0x12] = dVar2;
  local_58 = (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)param_1->Ptr;
  param_1->Ptr = (FImagePixelData *)0x0;
  local_48 = *(longlong *)param_3;
  local_20 = *(longlong **)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  local_38[2] = *(longlong *)&param_3->field_0x20;
  local_38[0] = *(longlong *)&param_3->field_0x10;
  local_38[1] = *(longlong *)&param_3->field_0x18;
  if (local_48 != 0) {
    *(undefined8 *)param_3 = 0;
  }
  local_178._0_8_ = this;
  Tasks::TaskConcurrencyLimiter_Private::FPimpl::
  Push<_UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread_::__l2::<lambda_1>_>
            ((pFVar1->Pimpl).Object,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelinePanoramicBlenderBase.cpp(214)"
             ,(<lambda_1> *)local_178);
  if (local_48 != 0) {
    plVar9 = (longlong *)(local_178 + 0x140);
    if (local_20 != (longlong *)0x0) {
      plVar9 = local_20;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_58.Ptr != (FImagePixelData *)0x0) {
    (**(code **)(local_58.Ptr)->_padding_)(local_58.Ptr,1);
  }
  if (*(longlong *)param_3 != 0) {
    plVar9 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// FetchFinalPixelDataHalfFloat @ 14dd81610

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::FetchFinalPixelDataHalfFloat
          (FMoviePipelinePanoramicBlenderBase *this,
          TArray<FFloat16Color,TSizedDefaultAllocator<64>_> *param_1)

{
  <lambda_1> local_res8;
  FMoviePipelinePanoramicBlenderBase *local_38;
  TArray<FFloat16Color,TSizedDefaultAllocator<64>_> *local_30;
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FMoviePipelinePanoramicBlenderBase **local_10;
  
  TArray<FFloat16Color,TSizedDefaultAllocator<64>_>::SetNumUninitialized
            (param_1,(this->OutputEquirectangularMap).ArrayNum,Default);
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::FetchFinalPixelDataHalfFloat'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = &local_38;
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  local_38 = this;
  local_30 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->OutputEquirectangularMapSize).field0_0x0._s_0.Y,1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,local_res8,None,&local_28);
  return;
}

// FetchFinalPixelDataLinearColor @ 14dd81d20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::FetchFinalPixelDataLinearColor
          (FMoviePipelinePanoramicBlenderBase *this,
          TArray<FLinearColor,TSizedDefaultAllocator<64>_> *param_1)

{
  <lambda_1> local_res8;
  FMoviePipelinePanoramicBlenderBase *local_38;
  TArray<FLinearColor,TSizedDefaultAllocator<64>_> *local_30;
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FMoviePipelinePanoramicBlenderBase **local_10;
  
  TArray<FLinearColor,TSizedDefaultAllocator<64>_>::SetNumUninitialized
            (param_1,(this->OutputEquirectangularMap).ArrayNum,Default);
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::FetchFinalPixelDataLinearColor'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = &local_38;
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  local_38 = this;
  local_30 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->OutputEquirectangularMapSize).field0_0x0._s_0.Y,1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,local_res8,None,&local_28);
  return;
}

// Initialize @ 14dd8f4a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::Initialize
          (FMoviePipelinePanoramicBlenderBase *this,TIntPoint<int> param_1)

{
  uint uVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  FTaskConcurrencyLimiter *pFVar4;
  FTaskConcurrencyLimiter *pFVar5;
  uint uVar6;
  
  (this->OutputEquirectangularMapSize).field0_0x0._s_0 = (TIntPoint<int>_u_0_s_0)param_1.field0_0x0;
  TArray<FLinearColor,TSizedDefaultAllocator<64>_>::SetNumUninitialized
            (&this->OutputEquirectangularMap,
             (longlong)(param_1.field0_0x0._4_4_ * param_1.field0_0x0._0_4_),Default);
  memset((this->OutputEquirectangularMap).AllocatorInstance.Data,0,
         (this->OutputEquirectangularMap).ArrayNum << 4);
  pTVar2 = CVarMoviePipelinePanoramicMaxPoolsPerFrame.Ref;
  bVar3 = IsInParallelGameThread();
  pFVar5 = (FTaskConcurrencyLimiter *)0x0;
  if (!bVar3) {
    bVar3 = IsInGameThread();
    pFVar4 = (FTaskConcurrencyLimiter *)&DAT_00000004;
    if (!bVar3) goto LAB_14dd8f508;
  }
  pFVar4 = pFVar5;
LAB_14dd8f508:
  uVar1 = *(uint *)((longlong)pTVar2->ShadowedValue + (longlong)&pFVar4->Pimpl);
  pFVar4 = ::operator_new(0x10);
  if (pFVar4 != (FTaskConcurrencyLimiter *)0x0) {
    uVar6 = 1;
    if (1 < (int)uVar1) {
      uVar6 = uVar1;
    }
    pFVar5 = Tasks::FTaskConcurrencyLimiter::FTaskConcurrencyLimiter(pFVar4,uVar6,Default);
  }
  if (this == (FMoviePipelinePanoramicBlenderBase *)&stack0xffffffffffffffe8) {
    if (pFVar5 == (FTaskConcurrencyLimiter *)0x0) {
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar5->Pimpl).SharedReferenceCount.ReferenceController);
  }
  else {
    pFVar4 = (this->TaskConcurrencyLimiter).Ptr;
    (this->TaskConcurrencyLimiter).Ptr = pFVar5;
    if (pFVar4 == (FTaskConcurrencyLimiter *)0x0) {
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar4->Pimpl).SharedReferenceCount.ReferenceController);
    pFVar5 = pFVar4;
  }
  ::operator_delete(pFVar5,0x10);
  return;
}

