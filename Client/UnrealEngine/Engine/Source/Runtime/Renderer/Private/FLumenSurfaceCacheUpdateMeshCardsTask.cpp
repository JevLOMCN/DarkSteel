// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FLumenSurfaceCacheUpdateMeshCardsTask @ 144d419c0

FLumenSurfaceCacheUpdateMeshCardsTask * __thiscall
FLumenSurfaceCacheUpdateMeshCardsTask::FLumenSurfaceCacheUpdateMeshCardsTask
          (FLumenSurfaceCacheUpdateMeshCardsTask *this,TSparseSpanArray<FLumenMeshCards> *param_1,
          TSparseSpanArray<FLumenCard> *param_2,
          TArray<UE::Math::TVector<double>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_3,bool param_4,float param_5,float param_6,float param_7,int param_8,int param_9)

{
  int *piVar1;
  code *pcVar2;
  TConsoleVariableData<float> *pTVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FLumenSurfaceCacheUpdateMeshCardsTask *pFVar7;
  ForElementType<UE::Math::TVector<double>_> FVar8;
  float fVar9;
  
  (this->SurfaceCacheRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SurfaceCacheRequests).ArrayNum = 0;
  (this->SurfaceCacheRequests).ArrayMax = 0;
  (this->CardsToHide).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CardsToHide).ArrayNum = 0;
  (this->CardsToHide).ArrayMax = 0;
  this->Histogram[0] = 0;
  this->Histogram[1] = 0;
  this->Histogram[2] = 0;
  this->Histogram[3] = 0;
  this->Histogram[4] = 0;
  this->Histogram[5] = 0;
  this->Histogram[6] = 0;
  this->Histogram[7] = 0;
  this->Histogram[8] = 0;
  this->Histogram[9] = 0;
  this->Histogram[10] = 0;
  this->Histogram[0xb] = 0;
  this->Histogram[0xc] = 0;
  this->Histogram[0xd] = 0;
  this->Histogram[0xe] = 0;
  this->Histogram[0xf] = 0;
  (this->ViewOrigins).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TVector<double>_>)0x0;
  this->LumenMeshCards = param_1;
  this->LumenCards = param_2;
  FVar8 = (param_3->AllocatorInstance).SecondaryData;
  iVar5 = param_3->ArrayNum;
  (this->ViewOrigins).ArrayNum = iVar5;
  if (FVar8 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
    param_3 = (TArray<UE::Math::TVector<double>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
               *)FVar8;
  }
  piVar1 = &(this->ViewOrigins).ArrayMax;
  if (iVar5 == 0) {
    *piVar1 = 2;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
              (0x18,8,iVar5,0,&(this->ViewOrigins).AllocatorInstance,iVar5,piVar1);
    FVar8 = (this->ViewOrigins).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar8 = (ForElementType<UE::Math::TVector<double>_>)&this->ViewOrigins;
    }
    memcpy((void *)FVar8,param_3,(longlong)iVar5 * 0x18);
  }
  this->LumenSceneDetail = param_6;
  this->FirstMeshCardsIndex = param_8;
  this->MaxDistanceFromCamera = param_7;
  this->bOrthographicCamera = param_4;
  this->NumMeshCardsPerPacket = param_9;
  fVar9 = LumenScene::GetCardTexelDensity();
  this->TexelDensityScale = fVar9 * param_5;
  this->MaxTexelDensity = GLumenSceneCardMaxTexelDensity;
  iVar5 = LumenScene::GetCardMinResolution(param_4);
  iVar6 = (int)ROUND(((float)iVar5 + (float)iVar5) / this->LumenSceneDetail + __real_3f000000) >> 1;
  iVar5 = 0x400;
  if (iVar6 < 0x400) {
    iVar5 = iVar6;
  }
  iVar6 = 1;
  if (1 < iVar5) {
    iVar6 = iVar5;
  }
  this->MinCardResolution = iVar6;
  pTVar3 = CVarLumenSceneFarFieldDistance.Ref;
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FLumenSurfaceCacheUpdateMeshCardsTask *)(*pcVar2)();
      return pFVar7;
    }
  }
  this->FarFieldCardMaxDistance = pTVar3->ShadowedValue[1];
  pTVar3 = CVarLumenSceneFarFieldTexelDensity.Ref;
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FLumenSurfaceCacheUpdateMeshCardsTask *)(*pcVar2)();
      return pFVar7;
    }
  }
  this->FarFieldCardTexelDensity = pTVar3->ShadowedValue[1];
  return this;
}

// AnyThreadTask @ 144d594c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLumenSurfaceCacheUpdateMeshCardsTask::AnyThreadTask(FLumenSurfaceCacheUpdateMeshCardsTask *this)

{
  int *piVar1;
  double dVar2;
  TSparseSpanArray<FLumenMeshCards> *pTVar3;
  ForElementType<unsigned_int> FVar4;
  TSparseSpanArray<FLumenCard> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  byte bVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  double dVar14;
  undefined4 uVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  FName *pFVar21;
  TStatIdData *pTVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  ForElementType<UE::Math::TVector<double>_> FVar26;
  FName FVar27;
  ulonglong uVar28;
  ForElementType<unsigned_int> FVar29;
  ForElementType<UE::Math::TVector<double>_> FVar30;
  double dVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  float fVar43;
  uint uVar44;
  uint uVar45;
  undefined1 local_res10 [8];
  ForElementType<UE::Math::TVector<double>_> local_res18;
  uint local_res20;
  uint local_188 [2];
  uint local_180;
  undefined2 uStack_17c;
  short sStack_17a;
  float local_178;
  int local_170;
  uint local_16c;
  longlong local_168;
  FColor_u_0 local_160;
  uint local_15c;
  FName local_158;
  longlong local_150;
  FName local_148;
  FName local_140;
  undefined4 local_130;
  FScriptContainerElement *local_128;
  FName local_120;
  FName local_118 [4];
  double local_f8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_FLumenSurfaceCacheUpdateMeshCardsTask::AnyThreadTask(void)___ptr64'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FLumenSurfaceCacheUpdateMeshCardsTask::AnyThreadTask(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FLumenSurfaceCacheUpdateMeshCardsTask::AnyThreadTask(void)___ptr64'::__l2
     ::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_LumenSurfaceCacheUpdateMeshCardsTask = (TStatIdData *)0x0;
    pFVar21 = ::FName::FName(&local_120,"LumenSurfaceCacheUpdateMeshCardsTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FLumenSurfaceCacheUpdateMeshCardsTask::AnyThreadTask(void)___ptr64'
                ::__l2::StatPtr_LumenSurfaceCacheUpdateMeshCardsTask,*pFVar21,
               L"LumenSurfaceCacheUpdateMeshCardsTask","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
               ,true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FLumenSurfaceCacheUpdateMeshCardsTask::AnyThreadTask(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar22 = _StatPtr_LumenSurfaceCacheUpdateMeshCardsTask;
  if (_StatPtr_LumenSurfaceCacheUpdateMeshCardsTask == (TStatIdData *)0x0) {
    pFVar21 = ::FName::FName(local_118,"LumenSurfaceCacheUpdateMeshCardsTask");
    pTVar22 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_void___cdecl_FLumenSurfaceCacheUpdateMeshCardsTask::AnyThreadTask(void)___ptr64'
                          ::__l2::StatPtr_LumenSurfaceCacheUpdateMeshCardsTask,*pFVar21,
                         L"LumenSurfaceCacheUpdateMeshCardsTask","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)&pTVar22->Name;
  bVar12 = false;
  bVar11 = false;
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  bVar18 = false;
  bVar17 = false;
  if ((FVar27.ComparisonIndex.Value.Value != 0) || (FVar27.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_160.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_160._s_0,(pTVar22->StatDescriptionAnsi).Ptr);
      bVar12 = false;
      bVar11 = true;
      bVar18 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_158.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_158.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_158,(pTVar22->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneRendering.cpp"
                   ,0x2c6);
        bVar12 = true;
        bVar11 = true;
        bVar18 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_148 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar17 = true;
      goto LAB_144d59655;
    }
  }
  bVar12 = bVar18;
  bVar11 = bVar17;
  bVar17 = false;
  local_148 = local_140;
  FVar27 = local_140;
LAB_144d59655:
  dVar14 = __real_4059000000000000;
  fVar13 = __real_3f800000;
  local_16c = this->FirstMeshCardsIndex;
  uVar28 = (ulonglong)(int)local_16c;
  lVar23 = 0x38;
  if ((this->LumenMeshCards->SpanAllocator).bGrowOnly == false) {
    lVar23 = 0x34;
  }
  iVar20 = *(int *)((this->LumenMeshCards->AllocatedElementsBitArray).AllocatorInstance.InlineData +
                   lVar23 + -0x10);
  iVar25 = this->NumMeshCardsPerPacket + local_16c;
  if (iVar25 < iVar20) {
    iVar20 = iVar25;
  }
  local_170 = GLumenSceneCardMaxResolution;
  if (GLumenFastCameraMode != 0) {
    local_170 = GLumenSceneCardMaxResolution / 2;
  }
  if ((longlong)uVar28 < (longlong)iVar20) {
    lVar23 = uVar28 * 400;
    uVar44 = (uint)__xmm_80000000000000008000000000000000;
    uVar45 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    bVar9 = (byte)local_16c & 0x1f;
    local_res20 = 1 << bVar9 | 1U >> 0x20 - bVar9;
    local_168 = (longlong)iVar20 - uVar28;
    fVar43 = __real_7f7fffff;
    do {
      uVar39 = (uint)uVar28;
      pTVar3 = this->LumenMeshCards;
      lVar24 = 0x38;
      if ((pTVar3->SpanAllocator).bGrowOnly == false) {
        lVar24 = 0x34;
      }
      if ((int)uVar39 <
          *(int *)((pTVar3->AllocatedElementsBitArray).AllocatorInstance.InlineData + lVar24 + -0x10
                  )) {
        local_150 = lVar23;
        if ((((int)uVar39 < 0) || ((pTVar3->AllocatedElementsBitArray).NumBits <= (int)uVar39)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar18)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar4 = (pTVar3->AllocatedElementsBitArray).AllocatorInstance.SecondaryData;
        FVar29 = (ForElementType<unsigned_int>)&pTVar3->AllocatedElementsBitArray;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar29 = FVar4;
        }
        uVar19 = uVar39;
        if ((int)uVar39 < 0) {
          uVar19 = uVar39 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar29 + (longlong)((int)uVar19 >> 5) * 4) & local_res20) != 0) {
          pTVar3 = this->LumenMeshCards;
          uVar19 = 0;
          if ((int)uVar39 < (pTVar3->Elements).ArrayNum) {
            uVar19 = ~uVar39 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_128 = (pTVar3->Elements).AllocatorInstance.Data;
          if (local_128[lVar23 + 0x14f] == (FScriptContainerElement)0x0) {
            local_res18._0_4_ = this->MinCardResolution;
          }
          else {
            local_res18._0_4_ = 1;
          }
          uVar19 = *(uint *)(local_128 + lVar23 + 0x150);
          if (uVar19 < *(int *)(local_128 + lVar23 + 0x154) + uVar19) {
            uVar15 = local_res18._0_4_;
            do {
              pTVar5 = this->LumenCards;
              uVar39 = 0;
              if ((int)uVar19 < (pTVar5->Elements).ArrayNum) {
                uVar39 = ~uVar19 >> 0x1f;
              }
              if ((uVar39 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar30 = (ForElementType<UE::Math::TVector<double>_>)&this->ViewOrigins;
              FVar26 = (this->ViewOrigins).AllocatorInstance.SecondaryData;
              iVar20 = (this->ViewOrigins).ArrayNum;
              pFVar6 = (pTVar5->Elements).AllocatorInstance.Data;
              if (FVar26 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
                FVar30 = FVar26;
              }
              FVar26 = (ForElementType<UE::Math::TVector<double>_>)
                       ((longlong)FVar30 + (longlong)iVar20 * 0x18);
              local_res18 = FVar26;
              while( true ) {
                if ((this->ViewOrigins).ArrayNum != iVar20) {
                  local_res10[0] = 0;
                  `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_res10);
                  FVar26 = local_res18;
                }
                pFVar16 = local_128;
                lVar23 = local_150;
                if (FVar30 == FVar26) break;
                local_f8 = *(double *)((longlong)FVar30 + 0x10);
                dVar32 = *(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0xb0);
                dVar35 = *(double *)FVar30 -
                         *(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0x40);
                dVar36 = local_f8 - *(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0x50);
                dVar37 = *(double *)((longlong)FVar30 + 8) -
                         *(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0x48);
                uVar41 = SUB84(dVar32,0) ^ uVar44;
                uVar42 = (uint)((ulonglong)dVar32 >> 0x20) ^ uVar45;
                dVar10 = dVar37 * *(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0x60) +
                         dVar35 * *(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0x58) +
                         dVar36 * *(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0x68);
                dVar31 = 0.0;
                dVar38 = dVar37 * *(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0x78) +
                         dVar35 * *(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0x70) +
                         dVar36 * *(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0x80);
                dVar2 = *(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0xa0);
                dVar37 = dVar37 * *(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0x90) +
                         dVar35 * *(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0x88) +
                         dVar36 * *(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0x98);
                dVar35 = *(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0xa8);
                uVar39 = SUB84(dVar2,0) ^ uVar44;
                uVar40 = (uint)((ulonglong)dVar2 >> 0x20) ^ uVar45;
                dVar36 = (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) ^ uVar45,
                                          SUB84(dVar35,0) ^ uVar44);
                if ((double)CONCAT44(uVar40,uVar39) <= dVar10) {
                  if (dVar2 < dVar10) goto LAB_144d59a4c;
                }
                else {
                  dVar2 = (double)CONCAT44(uVar40,uVar39);
LAB_144d59a4c:
                  dVar31 = (dVar10 - dVar2) * (dVar10 - dVar2);
                }
                if ((dVar38 < dVar36) || (dVar36 = dVar35, dVar35 < dVar38)) {
                  dVar31 = dVar31 + (dVar38 - dVar36) * (dVar38 - dVar36);
                }
                if ((double)CONCAT44(uVar42,uVar41) <= dVar37) {
                  if (dVar32 < dVar37) goto LAB_144d59a88;
                }
                else {
                  dVar32 = (double)CONCAT44(uVar42,uVar41);
LAB_144d59a88:
                  dVar31 = dVar31 + (dVar37 - dVar32) * (dVar37 - dVar32);
                }
                FVar30 = (ForElementType<UE::Math::TVector<double>_>)((longlong)FVar30 + 0x18);
                dVar32 = SQRT(dVar31);
                if (SQRT(dVar31) <= dVar14) {
                  dVar32 = dVar14;
                }
                if ((double)fVar43 <= dVar32) {
                  dVar32 = (double)fVar43;
                }
                fVar43 = (float)dVar32;
              }
              dVar32 = *(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0xa0);
              if (*(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0xa0) <=
                  *(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0xa8)) {
                dVar32 = *(double *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0xa8);
              }
              fVar34 = (float)dVar32;
              if (local_128[local_150 + 0x14c] == (FScriptContainerElement)0x0) {
                lVar24 = 0xc0;
                fVar33 = (fVar34 * this->TexelDensityScale *
                         *(float *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0x174)) / fVar43;
                if (fVar34 * GLumenSceneCardMaxTexelDensity <= fVar33) {
                  fVar33 = fVar34 * GLumenSceneCardMaxTexelDensity;
                }
              }
              else {
                lVar24 = 0xd0;
                fVar33 = fVar34 * this->FarFieldCardTexelDensity *
                         *(float *)(pFVar6 + (longlong)(int)uVar19 * 400 + 0x174);
              }
              if (0.0 < GLumenSceneCardFixedDebugResolution) {
                fVar33 = GLumenSceneCardFixedDebugResolution;
              }
              iVar20 = local_170;
              if ((int)fVar33 < local_170) {
                iVar20 = (int)fVar33;
              }
              iVar25 = 1;
              if (iVar20 != 0) {
                iVar25 = iVar20;
              }
              uVar28 = (ulonglong)(iVar25 - 1) * 2 + 1;
              lVar7 = 0x3f;
              if (uVar28 != 0) {
                for (; uVar28 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                }
              }
              uVar39 = 1 << ((byte)lVar7 & 0x1f);
              local_130 = (undefined4)lVar7;
              if ((*(float *)((longlong)this->Histogram + lVar24 + -0x20) <= fVar43) ||
                 ((int)uVar39 < (int)uVar15)) {
                uVar40 = 8;
                if (8 < uVar39) {
                  uVar40 = uVar39;
                }
                local_15c = 0x1f;
                if (uVar40 != 0) {
                  for (; uVar40 >> local_15c == 0; local_15c = local_15c - 1) {
                  }
                }
                if (pFVar6[(longlong)(int)uVar19 * 400 + 0xf4] != (FScriptContainerElement)0x0) {
                  pFVar6 = (this->CardsToHide).AllocatorInstance.Data;
                  local_188[0] = uVar19;
                  if (((pFVar6 <= (FScriptContainerElement *)local_188) &&
                      ((FScriptContainerElement *)local_188 <
                       pFVar6 + (longlong)(this->CardsToHide).ArrayMax * 4)) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar18)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar20 = (this->CardsToHide).ArrayNum;
                  piVar1 = &(this->CardsToHide).ArrayMax;
                  if (iVar20 == *piVar1) {
                    iVar20 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&(this->CardsToHide).AllocatorInstance,piVar1);
                  }
                  (this->CardsToHide).ArrayNum = iVar20 + 1;
                  *(uint *)((this->CardsToHide).AllocatorInstance.Data + (longlong)iVar20 * 4) =
                       local_188[0];
                }
              }
              else {
                uVar40 = 8;
                if (8 < uVar39) {
                  uVar40 = uVar39;
                }
                local_15c = 0x1f;
                if (uVar40 != 0) {
                  for (; uVar40 >> local_15c == 0; local_15c = local_15c - 1) {
                  }
                }
                uVar39 = 0;
                if (uVar40 != 0) {
                  uVar39 = local_15c;
                }
                if (uVar39 != (byte)pFVar6[(longlong)(int)uVar19 * 400 + 0xfa]) {
                  if (pFVar6[(longlong)(int)uVar19 * 400 + 0xf4] != (FScriptContainerElement)0x0) {
                    iVar25 = (byte)pFVar6[(longlong)(int)uVar19 * 400 + 0xfa] - uVar39;
                    iVar20 = -iVar25;
                    if (iVar20 < 0) {
                      iVar20 = iVar25;
                    }
                    fVar34 = ((float)iVar20 + fVar13) * __real_3eaaaaab;
                    if (fVar13 <= fVar34) {
                      fVar34 = fVar13;
                    }
                    if (fVar34 <= 0.0) {
                      fVar34 = 0.0;
                    }
                    fVar43 = (fVar13 - fVar34) * __real_451c4000 + fVar43;
                  }
                  uStack_17c = (undefined2)uVar39;
                  pFVar6 = (this->SurfaceCacheRequests).AllocatorInstance.Data;
                  sStack_17a = -1;
                  local_180 = uVar19;
                  local_178 = fVar43;
                  if (((pFVar6 <= (FScriptContainerElement *)&local_180) &&
                      ((FScriptContainerElement *)&local_180 <
                       pFVar6 + (longlong)(this->SurfaceCacheRequests).ArrayMax * 0xc)) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar18)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar20 = (this->SurfaceCacheRequests).ArrayNum;
                  piVar1 = &(this->SurfaceCacheRequests).ArrayMax;
                  if (iVar20 == *piVar1) {
                    iVar20 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,(ForAnyElementType *)this,piVar1);
                  }
                  (this->SurfaceCacheRequests).ArrayNum = iVar20 + 1;
                  pFVar6 = (this->SurfaceCacheRequests).AllocatorInstance.Data;
                  *(ulonglong *)(pFVar6 + (longlong)iVar20 * 0xc) =
                       CONCAT26(sStack_17a,CONCAT24(uStack_17c,local_180));
                  *(float *)(pFVar6 + (longlong)iVar20 * 0xc + 8) = local_178;
                  uVar39 = Lumen::GetMeshCardDistanceBin(fVar43);
                  this->Histogram[(int)uVar39] = this->Histogram[(int)uVar39] + 1;
                  if ((sStack_17a != -1) &&
                     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<2869725649143071505>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneRendering.cpp"
                                          ,0x311,"Request.IsLockedMip()"), bVar18)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
              }
              uVar19 = uVar19 + 1;
              fVar43 = __real_7f7fffff;
              uVar39 = local_16c;
            } while (uVar19 < (uint)(*(int *)(pFVar16 + lVar23 + 0x154) +
                                    *(int *)(pFVar16 + lVar23 + 0x150)));
          }
        }
      }
      local_16c = uVar39 + 1;
      uVar28 = (ulonglong)local_16c;
      local_res20 = local_res20 << 1 | (uint)((int)local_res20 < 0);
      lVar23 = lVar23 + 400;
      local_168 = local_168 + -1;
    } while (local_168 != 0);
    local_168 = 0;
    FVar27 = local_148;
    local_150 = lVar23;
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
  }
  return;
}

