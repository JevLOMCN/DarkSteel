// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 120

// Visit<2> @ 1477c8c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Visit<2>(TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
           *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
          FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  TVector<double,3> *pTVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [12];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TGeometryParticle<double,3> *pTVar15;
  bool bVar16;
  undefined1 uVar17;
  byte bVar18;
  uint uVar19;
  FUniqueIdx FVar20;
  TGeometryParticle<double,3> *pTVar21;
  uint *puVar22;
  FChaosVDThreadContext *pFVar23;
  FChaosVDContext *pFVar24;
  undefined4 extraout_var;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar28;
  undefined1 auStack_338 [32];
  longlong local_318;
  longlong local_310;
  undefined1 local_308;
  undefined1 local_307;
  undefined1 local_306;
  undefined1 local_305;
  undefined1 local_304 [4];
  int local_300;
  FChaosVDContext local_2f8;
  TGeometryParticle<double,3> *local_2d0;
  code *local_2c8;
  undefined1 *local_2c0;
  code *local_2b8;
  undefined1 *local_2b0;
  FExternalSpatialAccelerationPayload local_2a8;
  code *local_298;
  undefined1 *local_290;
  code *local_288;
  undefined1 *local_280;
  TGeometryParticle<double,3> *local_278 [2];
  undefined4 local_268;
  double local_260;
  double dStack_258;
  double local_250;
  undefined4 local_248;
  FChaosVDOptionalDataChannel *local_240;
  TReferenceControllerBase<1> *pTStack_238;
  undefined1 local_228 [64];
  __m128d local_1e8;
  double local_1d8;
  double dStack_1d0;
  __m128d local_1c8;
  double local_1b8;
  double dStack_1b0;
  undefined **local_1a8;
  undefined1 local_1a0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  double dStack_168;
  double dStack_160;
  byte local_158;
  EChaosVDCollisionQueryHitType local_150;
  undefined **local_148;
  undefined1 local_140;
  float local_138;
  int local_134;
  ushort local_130;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  EChaosVDSQVisitRejectReason local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2a8.Component.ObjectKey = (param_1->Payload).Component.ObjectKey;
  local_2a8.BoneId = (param_1->Payload).BoneId;
  local_2a8.CachedUniqueIdx.Idx = (param_1->Payload).CachedUniqueIdx.Idx;
  local_308 = 1;
  pTVar21 = FExternalSpatialAccelerationPayload::GetExternalGeometryParticle_ExternalThread
                      (&local_2a8);
  dVar14 = _UNK_150689688;
  dVar13 = ___xmm_3ff00000000000003ff0000000000000;
  dVar12 = _UNK_150689518;
  dVar11 = ___xmm_00000000000000003ff0000000000000;
  if (pTVar21 == (TGeometryParticle<double,3> *)0x0) {
    local_308 = 1;
  }
  else {
    uVar26 = 0;
    local_268 = 0xffffffff;
    local_250 = 0.0;
    local_260 = 0.0;
    dStack_258 = 0.0;
    local_248 = 0xffffffff;
    iVar25 = (pTVar21->MShapesArray).ArrayNum;
    if (0 < iVar25) {
      lVar27 = 0;
      local_2d0 = pTVar21;
      local_278[0] = pTVar21;
      do {
        pTVar15 = local_2d0;
        uVar19 = 0;
        if ((int)uVar26 < iVar25) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if (uVar19 == 0) {
          local_310 = (longlong)iVar25;
          local_318 = (longlong)(int)uVar26;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar8 = (code *)swi(3);
            uVar17 = (*pcVar8)();
            return (bool)uVar17;
          }
        }
        FVar6 = (pTVar21->MShapesArray).AllocatorInstance.SecondaryData;
        FVar28 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&pTVar21->MShapesArray;
        if (FVar6 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar28 = FVar6;
        }
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2c0 = &local_307;
        local_2c8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2c8,puVar22);
        pFVar24 = FChaosVDThreadContext::GetCurrentContext(pFVar23);
        if (pFVar24 != (FChaosVDContext *)0x0) {
          local_2f8.OwnerID = pFVar24->OwnerID;
          local_2f8.Id = pFVar24->Id;
          local_2f8.Type = pFVar24->Type;
          local_2f8.Attributes = pFVar24->Attributes;
          local_240 = (pFVar24->CurrentDataChannel).Object;
          pTStack_238 = (pFVar24->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_238 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_238->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_238->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2f8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_2f8.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
          if (CVDDC_SceneQueries.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (CVDDC_SceneQueries.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(CVDDC_SceneQueries.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_238);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2b0 = &local_306;
          local_2b8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b8,puVar22);
          FChaosVDThreadContext::PushContext(pFVar23,&local_2f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2f8.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        local_158 = local_158 & 0xf8;
        local_228._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1a8 = &___7FChaosVDQueryFastData__6B_;
        local_228._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_148 = &___7FChaosVDQueryHitData__6B_;
        local_228[8] = 0;
        local_228._16_4_ = -1;
        local_228._20_4_ = Invalid;
        local_228._24_4_ = 0;
        local_228._28_4_ = -1;
        local_1a0 = 0;
        local_150 = None;
        local_140 = 0;
        local_138 = 0.0;
        local_134 = -1;
        local_130 = 0;
        local_e0 = None;
        local_dc = -1;
        local_228._56_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_228._48_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_1d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_1e8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0)
        ;
        local_1e8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1e8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_1b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1c8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0)
        ;
        local_1c8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1c8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        dStack_168 = 0.0;
        dStack_160 = 0.0;
        local_198._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_198._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_198._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_180._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_180._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_180._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_128._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_128._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_128._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_110._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_110._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_110._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        FVar20 = FExternalSpatialAccelerationPayload::UniqueIdx(&local_2a8);
        uVar4 = *(undefined8 *)&(pTVar15->MXR).Property.MX.field_0x8;
        auVar10 = *(undefined1 (*) [12])&(pTVar15->MXR).Property.MX;
        fVar1 = *(float *)&(pTVar15->MXR).Property.MR;
        fVar2 = *(float *)&(pTVar15->MXR).Property.MR.field_0x4;
        fVar3 = *(float *)&(pTVar15->MXR).Property.MR.field_0x8;
        dVar5 = *(double *)&(pTVar15->MXR).Property.MX.field_0x10;
        local_300 = *(int *)CONCAT44(extraout_var,FVar20.Idx);
        dVar9 = (double)*(float *)&(pTVar15->MXR).Property.MR.field_0xc;
        bVar16 = FChaosVisualDebuggerTrace::IsTracing();
        if (bVar16) {
          local_228._56_4_ = SUB84(dVar9,0);
          local_228._48_8_ = (double)fVar3;
          local_228._60_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_1e8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
          local_1e8.m128d_f64._0_12_ = auVar10;
          dStack_1d0 = 0.0;
          local_1c8.m128d_f64[1] = dVar14;
          local_1c8.m128d_f64[0] = dVar13;
          local_1b8 = dVar11;
          dStack_1b0 = dVar12;
          local_228._28_4_ = local_300;
          local_228._24_4_ = uVar26;
          local_228._20_4_ = BroadPhase;
          if (param_2 != (FQueryFastData *)0x0) {
            pTVar7 = param_2->Dir;
            local_198._s_0.X = (double)*(undefined8 *)pTVar7;
            local_198._s_0.Y = (double)*(undefined8 *)&pTVar7->field_0x8;
            local_198._s_0.Z = (double)*(undefined8 *)&pTVar7->field_0x10;
            local_180._s_0.X = (double)*(undefined8 *)&param_2->InvDir;
            local_180._s_0.Y = (double)*(undefined8 *)&(param_2->InvDir).field_0x8;
            local_1a0 = 1;
            local_180._s_0.Z = (double)*(undefined8 *)&(param_2->InvDir).field_0x10;
            dStack_168 = param_2->CurrentLength;
            local_158 = ((param_2->bParallel[2] & 1U) * '\x02' | param_2->bParallel[1] & 1U) *
                        '\x02' | param_2->bParallel[0] & 1U | local_158 & 0xf8;
            dStack_160 = param_2->InvCurrentLength;
          }
          local_228[8] = 1;
          local_228._32_8_ = (double)fVar1;
          local_228._40_8_ = (double)fVar2;
          local_1d8 = dVar5;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar18 = 2;
LAB_1477c91b2:
          bVar16 = true;
LAB_1477c91b5:
          local_278[1] = *(TGeometryParticle<double,3> **)(lVar27 + (longlong)FVar28);
          ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::InsertHit
                    (this->HitBuffer,(FOverlapHit *)local_278,bVar16);
          bVar16 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar16) {
            local_f8._s_0.X = local_260;
            local_f8._s_0.Y = dStack_258;
            local_f8._s_0.Z = local_250;
            local_150 = (EChaosVDCollisionQueryHitType)bVar18;
            local_140 = 1;
          }
          local_308 = this->bAnyHit == false;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_280 = local_304;
          local_288 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_288,puVar22);
          FChaosVDThreadContext::PopContext(pFVar23);
          return (bool)local_308;
        }
        bVar18 = (**(code **)((longlong)*this->QueryCallback + 0x20))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)(lVar27 + (longlong)FVar28),pTVar15);
        if (bVar18 != 0) {
          if (((bVar18 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            bVar16 = false;
            goto LAB_1477c91b5;
          }
          goto LAB_1477c91b2;
        }
        local_e0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_290 = &local_305;
        local_298 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_298,puVar22);
        FChaosVDThreadContext::PopContext(pFVar23);
        iVar25 = (pTVar21->MShapesArray).ArrayNum;
        uVar26 = uVar26 + 1;
        lVar27 = lVar27 + 8;
      } while ((int)uVar26 < iVar25);
    }
  }
  return (bool)local_308;
}

// Visit<2> @ 1477c92e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Visit<2>(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
           *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
          FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  TVector<double,3> *pTVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [12];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TGeometryParticle<double,3> *pTVar15;
  bool bVar16;
  undefined1 uVar17;
  byte bVar18;
  uint uVar19;
  FUniqueIdx FVar20;
  TGeometryParticle<double,3> *pTVar21;
  uint *puVar22;
  FChaosVDThreadContext *pFVar23;
  FChaosVDContext *pFVar24;
  undefined4 extraout_var;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar28;
  undefined1 auStack_338 [32];
  longlong local_318;
  longlong local_310;
  undefined1 local_308;
  undefined1 local_307;
  undefined1 local_306;
  undefined1 local_305;
  undefined1 local_304 [4];
  int local_300;
  FChaosVDContext local_2f8;
  TGeometryParticle<double,3> *local_2d0;
  code *local_2c8;
  undefined1 *local_2c0;
  code *local_2b8;
  undefined1 *local_2b0;
  FExternalSpatialAccelerationPayload local_2a8;
  code *local_298;
  undefined1 *local_290;
  code *local_288;
  undefined1 *local_280;
  TGeometryParticle<double,3> *local_278 [2];
  undefined4 local_268;
  double local_260;
  double dStack_258;
  double local_250;
  undefined4 local_248;
  FChaosVDOptionalDataChannel *local_240;
  TReferenceControllerBase<1> *pTStack_238;
  undefined1 local_228 [64];
  __m128d local_1e8;
  double local_1d8;
  double dStack_1d0;
  __m128d local_1c8;
  double local_1b8;
  double dStack_1b0;
  undefined **local_1a8;
  undefined1 local_1a0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  double dStack_168;
  double dStack_160;
  byte local_158;
  EChaosVDCollisionQueryHitType local_150;
  undefined **local_148;
  undefined1 local_140;
  float local_138;
  int local_134;
  ushort local_130;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  EChaosVDSQVisitRejectReason local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2a8.Component.ObjectKey = (param_1->Payload).Component.ObjectKey;
  local_2a8.BoneId = (param_1->Payload).BoneId;
  local_2a8.CachedUniqueIdx.Idx = (param_1->Payload).CachedUniqueIdx.Idx;
  local_308 = 1;
  pTVar21 = FExternalSpatialAccelerationPayload::GetExternalGeometryParticle_ExternalThread
                      (&local_2a8);
  dVar14 = _UNK_150689688;
  dVar13 = ___xmm_3ff00000000000003ff0000000000000;
  dVar12 = _UNK_150689518;
  dVar11 = ___xmm_00000000000000003ff0000000000000;
  if (pTVar21 == (TGeometryParticle<double,3> *)0x0) {
    local_308 = 1;
  }
  else {
    uVar26 = 0;
    local_268 = 0xffffffff;
    local_250 = 0.0;
    local_260 = 0.0;
    dStack_258 = 0.0;
    local_248 = 0xffffffff;
    iVar25 = (pTVar21->MShapesArray).ArrayNum;
    if (0 < iVar25) {
      lVar27 = 0;
      local_2d0 = pTVar21;
      local_278[0] = pTVar21;
      do {
        pTVar15 = local_2d0;
        uVar19 = 0;
        if ((int)uVar26 < iVar25) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if (uVar19 == 0) {
          local_310 = (longlong)iVar25;
          local_318 = (longlong)(int)uVar26;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar8 = (code *)swi(3);
            uVar17 = (*pcVar8)();
            return (bool)uVar17;
          }
        }
        FVar6 = (pTVar21->MShapesArray).AllocatorInstance.SecondaryData;
        FVar28 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&pTVar21->MShapesArray;
        if (FVar6 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar28 = FVar6;
        }
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2c0 = &local_307;
        local_2c8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2c8,puVar22);
        pFVar24 = FChaosVDThreadContext::GetCurrentContext(pFVar23);
        if (pFVar24 != (FChaosVDContext *)0x0) {
          local_2f8.OwnerID = pFVar24->OwnerID;
          local_2f8.Id = pFVar24->Id;
          local_2f8.Type = pFVar24->Type;
          local_2f8.Attributes = pFVar24->Attributes;
          local_240 = (pFVar24->CurrentDataChannel).Object;
          pTStack_238 = (pFVar24->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_238 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_238->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_238->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2f8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_2f8.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
          if (CVDDC_SceneQueries.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (CVDDC_SceneQueries.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(CVDDC_SceneQueries.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_238);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2b0 = &local_306;
          local_2b8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b8,puVar22);
          FChaosVDThreadContext::PushContext(pFVar23,&local_2f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2f8.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        local_158 = local_158 & 0xf8;
        local_228._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1a8 = &___7FChaosVDQueryFastData__6B_;
        local_228._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_148 = &___7FChaosVDQueryHitData__6B_;
        local_228[8] = 0;
        local_228._16_4_ = -1;
        local_228._20_4_ = Invalid;
        local_228._24_4_ = 0;
        local_228._28_4_ = -1;
        local_1a0 = 0;
        local_150 = None;
        local_140 = 0;
        local_138 = 0.0;
        local_134 = -1;
        local_130 = 0;
        local_e0 = None;
        local_dc = -1;
        local_228._56_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_228._48_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_1d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_1e8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0)
        ;
        local_1e8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1e8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_1b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1c8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0)
        ;
        local_1c8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1c8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        dStack_168 = 0.0;
        dStack_160 = 0.0;
        local_198._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_198._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_198._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_180._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_180._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_180._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_128._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_128._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_128._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_110._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_110._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_110._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        FVar20 = FExternalSpatialAccelerationPayload::UniqueIdx(&local_2a8);
        uVar4 = *(undefined8 *)&(pTVar15->MXR).Property.MX.field_0x8;
        auVar10 = *(undefined1 (*) [12])&(pTVar15->MXR).Property.MX;
        fVar1 = *(float *)&(pTVar15->MXR).Property.MR;
        fVar2 = *(float *)&(pTVar15->MXR).Property.MR.field_0x4;
        fVar3 = *(float *)&(pTVar15->MXR).Property.MR.field_0x8;
        dVar5 = *(double *)&(pTVar15->MXR).Property.MX.field_0x10;
        local_300 = *(int *)CONCAT44(extraout_var,FVar20.Idx);
        dVar9 = (double)*(float *)&(pTVar15->MXR).Property.MR.field_0xc;
        bVar16 = FChaosVisualDebuggerTrace::IsTracing();
        if (bVar16) {
          local_228._56_4_ = SUB84(dVar9,0);
          local_228._48_8_ = (double)fVar3;
          local_228._60_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_1e8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
          local_1e8.m128d_f64._0_12_ = auVar10;
          dStack_1d0 = 0.0;
          local_1c8.m128d_f64[1] = dVar14;
          local_1c8.m128d_f64[0] = dVar13;
          local_1b8 = dVar11;
          dStack_1b0 = dVar12;
          local_228._28_4_ = local_300;
          local_228._24_4_ = uVar26;
          local_228._20_4_ = BroadPhase;
          if (param_2 != (FQueryFastData *)0x0) {
            pTVar7 = param_2->Dir;
            local_198._s_0.X = (double)*(undefined8 *)pTVar7;
            local_198._s_0.Y = (double)*(undefined8 *)&pTVar7->field_0x8;
            local_198._s_0.Z = (double)*(undefined8 *)&pTVar7->field_0x10;
            local_180._s_0.X = (double)*(undefined8 *)&param_2->InvDir;
            local_180._s_0.Y = (double)*(undefined8 *)&(param_2->InvDir).field_0x8;
            local_1a0 = 1;
            local_180._s_0.Z = (double)*(undefined8 *)&(param_2->InvDir).field_0x10;
            dStack_168 = param_2->CurrentLength;
            local_158 = ((param_2->bParallel[2] & 1U) * '\x02' | param_2->bParallel[1] & 1U) *
                        '\x02' | param_2->bParallel[0] & 1U | local_158 & 0xf8;
            dStack_160 = param_2->InvCurrentLength;
          }
          local_228[8] = 1;
          local_228._32_8_ = (double)fVar1;
          local_228._40_8_ = (double)fVar2;
          local_1d8 = dVar5;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar18 = 2;
LAB_1477c9822:
          bVar16 = true;
LAB_1477c9825:
          local_278[1] = *(TGeometryParticle<double,3> **)(lVar27 + (longlong)FVar28);
          ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::InsertHit
                    (this->HitBuffer,(FOverlapHit *)local_278,bVar16);
          bVar16 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar16) {
            local_f8._s_0.X = local_260;
            local_f8._s_0.Y = dStack_258;
            local_f8._s_0.Z = local_250;
            local_150 = (EChaosVDCollisionQueryHitType)bVar18;
            local_140 = 1;
          }
          local_308 = this->bAnyHit == false;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_280 = local_304;
          local_288 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_288,puVar22);
          FChaosVDThreadContext::PopContext(pFVar23);
          return (bool)local_308;
        }
        bVar18 = (**(code **)((longlong)*this->QueryCallback + 0x20))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)(lVar27 + (longlong)FVar28),pTVar15);
        if (bVar18 != 0) {
          if (((bVar18 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            bVar16 = false;
            goto LAB_1477c9825;
          }
          goto LAB_1477c9822;
        }
        local_e0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_290 = &local_305;
        local_298 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_298,puVar22);
        FChaosVDThreadContext::PopContext(pFVar23);
        iVar25 = (pTVar21->MShapesArray).ArrayNum;
        uVar26 = uVar26 + 1;
        lVar27 = lVar27 + 8;
      } while ((int)uVar26 < iVar25);
    }
  }
  return (bool)local_308;
}

// Visit<2> @ 1477c9950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Visit<2>(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
           *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
          FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  TVector<double,3> *pTVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [12];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TGeometryParticle<double,3> *pTVar15;
  bool bVar16;
  undefined1 uVar17;
  byte bVar18;
  uint uVar19;
  FUniqueIdx FVar20;
  TGeometryParticle<double,3> *pTVar21;
  uint *puVar22;
  FChaosVDThreadContext *pFVar23;
  FChaosVDContext *pFVar24;
  undefined4 extraout_var;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar28;
  undefined1 auStack_338 [32];
  longlong local_318;
  longlong local_310;
  undefined1 local_308;
  undefined1 local_307;
  undefined1 local_306;
  undefined1 local_305;
  undefined1 local_304 [4];
  int local_300;
  FChaosVDContext local_2f8;
  TGeometryParticle<double,3> *local_2d0;
  code *local_2c8;
  undefined1 *local_2c0;
  code *local_2b8;
  undefined1 *local_2b0;
  FExternalSpatialAccelerationPayload local_2a8;
  code *local_298;
  undefined1 *local_290;
  code *local_288;
  undefined1 *local_280;
  TGeometryParticle<double,3> *local_278 [2];
  undefined4 local_268;
  double local_260;
  double dStack_258;
  double local_250;
  undefined4 local_248;
  FChaosVDOptionalDataChannel *local_240;
  TReferenceControllerBase<1> *pTStack_238;
  undefined1 local_228 [64];
  __m128d local_1e8;
  double local_1d8;
  double dStack_1d0;
  __m128d local_1c8;
  double local_1b8;
  double dStack_1b0;
  undefined **local_1a8;
  undefined1 local_1a0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  double dStack_168;
  double dStack_160;
  byte local_158;
  EChaosVDCollisionQueryHitType local_150;
  undefined **local_148;
  undefined1 local_140;
  float local_138;
  int local_134;
  ushort local_130;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  EChaosVDSQVisitRejectReason local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2a8.Component.ObjectKey = (param_1->Payload).Component.ObjectKey;
  local_2a8.BoneId = (param_1->Payload).BoneId;
  local_2a8.CachedUniqueIdx.Idx = (param_1->Payload).CachedUniqueIdx.Idx;
  local_308 = 1;
  pTVar21 = FExternalSpatialAccelerationPayload::GetExternalGeometryParticle_ExternalThread
                      (&local_2a8);
  dVar14 = _UNK_150689688;
  dVar13 = ___xmm_3ff00000000000003ff0000000000000;
  dVar12 = _UNK_150689518;
  dVar11 = ___xmm_00000000000000003ff0000000000000;
  if (pTVar21 == (TGeometryParticle<double,3> *)0x0) {
    local_308 = 1;
  }
  else {
    uVar26 = 0;
    local_268 = 0xffffffff;
    local_250 = 0.0;
    local_260 = 0.0;
    dStack_258 = 0.0;
    local_248 = 0xffffffff;
    iVar25 = (pTVar21->MShapesArray).ArrayNum;
    if (0 < iVar25) {
      lVar27 = 0;
      local_2d0 = pTVar21;
      local_278[0] = pTVar21;
      do {
        pTVar15 = local_2d0;
        uVar19 = 0;
        if ((int)uVar26 < iVar25) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if (uVar19 == 0) {
          local_310 = (longlong)iVar25;
          local_318 = (longlong)(int)uVar26;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar8 = (code *)swi(3);
            uVar17 = (*pcVar8)();
            return (bool)uVar17;
          }
        }
        FVar6 = (pTVar21->MShapesArray).AllocatorInstance.SecondaryData;
        FVar28 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&pTVar21->MShapesArray;
        if (FVar6 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar28 = FVar6;
        }
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2c0 = &local_307;
        local_2c8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2c8,puVar22);
        pFVar24 = FChaosVDThreadContext::GetCurrentContext(pFVar23);
        if (pFVar24 != (FChaosVDContext *)0x0) {
          local_2f8.OwnerID = pFVar24->OwnerID;
          local_2f8.Id = pFVar24->Id;
          local_2f8.Type = pFVar24->Type;
          local_2f8.Attributes = pFVar24->Attributes;
          local_240 = (pFVar24->CurrentDataChannel).Object;
          pTStack_238 = (pFVar24->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_238 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_238->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_238->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2f8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_2f8.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
          if (CVDDC_SceneQueries.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (CVDDC_SceneQueries.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(CVDDC_SceneQueries.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_238);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2b0 = &local_306;
          local_2b8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b8,puVar22);
          FChaosVDThreadContext::PushContext(pFVar23,&local_2f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2f8.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        local_158 = local_158 & 0xf8;
        local_228._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1a8 = &___7FChaosVDQueryFastData__6B_;
        local_228._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_148 = &___7FChaosVDQueryHitData__6B_;
        local_228[8] = 0;
        local_228._16_4_ = -1;
        local_228._20_4_ = Invalid;
        local_228._24_4_ = 0;
        local_228._28_4_ = -1;
        local_1a0 = 0;
        local_150 = None;
        local_140 = 0;
        local_138 = 0.0;
        local_134 = -1;
        local_130 = 0;
        local_e0 = None;
        local_dc = -1;
        local_228._56_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_228._48_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_1d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_1e8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0)
        ;
        local_1e8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1e8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_1b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1c8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0)
        ;
        local_1c8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1c8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        dStack_168 = 0.0;
        dStack_160 = 0.0;
        local_198._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_198._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_198._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_180._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_180._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_180._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_128._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_128._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_128._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_110._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_110._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_110._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        FVar20 = FExternalSpatialAccelerationPayload::UniqueIdx(&local_2a8);
        uVar4 = *(undefined8 *)&(pTVar15->MXR).Property.MX.field_0x8;
        auVar10 = *(undefined1 (*) [12])&(pTVar15->MXR).Property.MX;
        fVar1 = *(float *)&(pTVar15->MXR).Property.MR;
        fVar2 = *(float *)&(pTVar15->MXR).Property.MR.field_0x4;
        fVar3 = *(float *)&(pTVar15->MXR).Property.MR.field_0x8;
        dVar5 = *(double *)&(pTVar15->MXR).Property.MX.field_0x10;
        local_300 = *(int *)CONCAT44(extraout_var,FVar20.Idx);
        dVar9 = (double)*(float *)&(pTVar15->MXR).Property.MR.field_0xc;
        bVar16 = FChaosVisualDebuggerTrace::IsTracing();
        if (bVar16) {
          local_228._56_4_ = SUB84(dVar9,0);
          local_228._48_8_ = (double)fVar3;
          local_228._60_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_1e8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
          local_1e8.m128d_f64._0_12_ = auVar10;
          dStack_1d0 = 0.0;
          local_1c8.m128d_f64[1] = dVar14;
          local_1c8.m128d_f64[0] = dVar13;
          local_1b8 = dVar11;
          dStack_1b0 = dVar12;
          local_228._28_4_ = local_300;
          local_228._24_4_ = uVar26;
          local_228._20_4_ = BroadPhase;
          if (param_2 != (FQueryFastData *)0x0) {
            pTVar7 = param_2->Dir;
            local_198._s_0.X = (double)*(undefined8 *)pTVar7;
            local_198._s_0.Y = (double)*(undefined8 *)&pTVar7->field_0x8;
            local_198._s_0.Z = (double)*(undefined8 *)&pTVar7->field_0x10;
            local_180._s_0.X = (double)*(undefined8 *)&param_2->InvDir;
            local_180._s_0.Y = (double)*(undefined8 *)&(param_2->InvDir).field_0x8;
            local_1a0 = 1;
            local_180._s_0.Z = (double)*(undefined8 *)&(param_2->InvDir).field_0x10;
            dStack_168 = param_2->CurrentLength;
            local_158 = ((param_2->bParallel[2] & 1U) * '\x02' | param_2->bParallel[1] & 1U) *
                        '\x02' | param_2->bParallel[0] & 1U | local_158 & 0xf8;
            dStack_160 = param_2->InvCurrentLength;
          }
          local_228[8] = 1;
          local_228._32_8_ = (double)fVar1;
          local_228._40_8_ = (double)fVar2;
          local_1d8 = dVar5;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar18 = 2;
LAB_1477c9e92:
          bVar16 = true;
LAB_1477c9e95:
          local_278[1] = *(TGeometryParticle<double,3> **)(lVar27 + (longlong)FVar28);
          ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::InsertHit
                    (this->HitBuffer,(FOverlapHit *)local_278,bVar16);
          bVar16 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar16) {
            local_f8._s_0.X = local_260;
            local_f8._s_0.Y = dStack_258;
            local_f8._s_0.Z = local_250;
            local_150 = (EChaosVDCollisionQueryHitType)bVar18;
            local_140 = 1;
          }
          local_308 = this->bAnyHit == false;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_280 = local_304;
          local_288 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_288,puVar22);
          FChaosVDThreadContext::PopContext(pFVar23);
          return (bool)local_308;
        }
        bVar18 = (**(code **)((longlong)*this->QueryCallback + 0x20))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)(lVar27 + (longlong)FVar28),pTVar15);
        if (bVar18 != 0) {
          if (((bVar18 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            bVar16 = false;
            goto LAB_1477c9e95;
          }
          goto LAB_1477c9e92;
        }
        local_e0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_290 = &local_305;
        local_298 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_298,puVar22);
        FChaosVDThreadContext::PopContext(pFVar23);
        iVar25 = (pTVar21->MShapesArray).ArrayNum;
        uVar26 = uVar26 + 1;
        lVar27 = lVar27 + 8;
      } while ((int)uVar26 < iVar25);
    }
  }
  return (bool)local_308;
}

// Visit<2> @ 1477c9fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Visit<2>(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
           *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
          FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  TVector<double,3> *pTVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [12];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TGeometryParticle<double,3> *pTVar15;
  bool bVar16;
  undefined1 uVar17;
  byte bVar18;
  uint uVar19;
  FUniqueIdx FVar20;
  TGeometryParticle<double,3> *pTVar21;
  uint *puVar22;
  FChaosVDThreadContext *pFVar23;
  FChaosVDContext *pFVar24;
  undefined4 extraout_var;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar28;
  undefined1 auStack_338 [32];
  longlong local_318;
  longlong local_310;
  undefined1 local_308;
  undefined1 local_307;
  undefined1 local_306;
  undefined1 local_305;
  undefined1 local_304 [4];
  int local_300;
  FChaosVDContext local_2f8;
  TGeometryParticle<double,3> *local_2d0;
  code *local_2c8;
  undefined1 *local_2c0;
  code *local_2b8;
  undefined1 *local_2b0;
  FExternalSpatialAccelerationPayload local_2a8;
  code *local_298;
  undefined1 *local_290;
  code *local_288;
  undefined1 *local_280;
  TGeometryParticle<double,3> *local_278 [2];
  undefined4 local_268;
  double local_260;
  double dStack_258;
  double local_250;
  undefined4 local_248;
  FChaosVDOptionalDataChannel *local_240;
  TReferenceControllerBase<1> *pTStack_238;
  undefined1 local_228 [64];
  __m128d local_1e8;
  double local_1d8;
  double dStack_1d0;
  __m128d local_1c8;
  double local_1b8;
  double dStack_1b0;
  undefined **local_1a8;
  undefined1 local_1a0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  double dStack_168;
  double dStack_160;
  byte local_158;
  EChaosVDCollisionQueryHitType local_150;
  undefined **local_148;
  undefined1 local_140;
  float local_138;
  int local_134;
  ushort local_130;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  EChaosVDSQVisitRejectReason local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2a8.Component.ObjectKey = (param_1->Payload).Component.ObjectKey;
  local_2a8.BoneId = (param_1->Payload).BoneId;
  local_2a8.CachedUniqueIdx.Idx = (param_1->Payload).CachedUniqueIdx.Idx;
  local_308 = 1;
  pTVar21 = FExternalSpatialAccelerationPayload::GetExternalGeometryParticle_ExternalThread
                      (&local_2a8);
  dVar14 = _UNK_150689688;
  dVar13 = ___xmm_3ff00000000000003ff0000000000000;
  dVar12 = _UNK_150689518;
  dVar11 = ___xmm_00000000000000003ff0000000000000;
  if (pTVar21 == (TGeometryParticle<double,3> *)0x0) {
    local_308 = 1;
  }
  else {
    uVar26 = 0;
    local_268 = 0xffffffff;
    local_250 = 0.0;
    local_260 = 0.0;
    dStack_258 = 0.0;
    local_248 = 0xffffffff;
    iVar25 = (pTVar21->MShapesArray).ArrayNum;
    if (0 < iVar25) {
      lVar27 = 0;
      local_2d0 = pTVar21;
      local_278[0] = pTVar21;
      do {
        pTVar15 = local_2d0;
        uVar19 = 0;
        if ((int)uVar26 < iVar25) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if (uVar19 == 0) {
          local_310 = (longlong)iVar25;
          local_318 = (longlong)(int)uVar26;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar8 = (code *)swi(3);
            uVar17 = (*pcVar8)();
            return (bool)uVar17;
          }
        }
        FVar6 = (pTVar21->MShapesArray).AllocatorInstance.SecondaryData;
        FVar28 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&pTVar21->MShapesArray;
        if (FVar6 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar28 = FVar6;
        }
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2c0 = &local_307;
        local_2c8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2c8,puVar22);
        pFVar24 = FChaosVDThreadContext::GetCurrentContext(pFVar23);
        if (pFVar24 != (FChaosVDContext *)0x0) {
          local_2f8.OwnerID = pFVar24->OwnerID;
          local_2f8.Id = pFVar24->Id;
          local_2f8.Type = pFVar24->Type;
          local_2f8.Attributes = pFVar24->Attributes;
          local_240 = (pFVar24->CurrentDataChannel).Object;
          pTStack_238 = (pFVar24->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_238 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_238->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_238->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2f8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_2f8.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
          if (CVDDC_SceneQueries.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (CVDDC_SceneQueries.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(CVDDC_SceneQueries.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_238);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2b0 = &local_306;
          local_2b8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b8,puVar22);
          FChaosVDThreadContext::PushContext(pFVar23,&local_2f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2f8.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        local_158 = local_158 & 0xf8;
        local_228._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1a8 = &___7FChaosVDQueryFastData__6B_;
        local_228._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_148 = &___7FChaosVDQueryHitData__6B_;
        local_228[8] = 0;
        local_228._16_4_ = -1;
        local_228._20_4_ = Invalid;
        local_228._24_4_ = 0;
        local_228._28_4_ = -1;
        local_1a0 = 0;
        local_150 = None;
        local_140 = 0;
        local_138 = 0.0;
        local_134 = -1;
        local_130 = 0;
        local_e0 = None;
        local_dc = -1;
        local_228._56_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_228._48_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_1d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_1e8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0)
        ;
        local_1e8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1e8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_1b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1c8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0)
        ;
        local_1c8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1c8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        dStack_168 = 0.0;
        dStack_160 = 0.0;
        local_198._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_198._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_198._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_180._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_180._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_180._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_128._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_128._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_128._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_110._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_110._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_110._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        FVar20 = FExternalSpatialAccelerationPayload::UniqueIdx(&local_2a8);
        uVar4 = *(undefined8 *)&(pTVar15->MXR).Property.MX.field_0x8;
        auVar10 = *(undefined1 (*) [12])&(pTVar15->MXR).Property.MX;
        fVar1 = *(float *)&(pTVar15->MXR).Property.MR;
        fVar2 = *(float *)&(pTVar15->MXR).Property.MR.field_0x4;
        fVar3 = *(float *)&(pTVar15->MXR).Property.MR.field_0x8;
        dVar5 = *(double *)&(pTVar15->MXR).Property.MX.field_0x10;
        local_300 = *(int *)CONCAT44(extraout_var,FVar20.Idx);
        dVar9 = (double)*(float *)&(pTVar15->MXR).Property.MR.field_0xc;
        bVar16 = FChaosVisualDebuggerTrace::IsTracing();
        if (bVar16) {
          local_228._56_4_ = SUB84(dVar9,0);
          local_228._48_8_ = (double)fVar3;
          local_228._60_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_1e8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
          local_1e8.m128d_f64._0_12_ = auVar10;
          dStack_1d0 = 0.0;
          local_1c8.m128d_f64[1] = dVar14;
          local_1c8.m128d_f64[0] = dVar13;
          local_1b8 = dVar11;
          dStack_1b0 = dVar12;
          local_228._28_4_ = local_300;
          local_228._24_4_ = uVar26;
          local_228._20_4_ = BroadPhase;
          if (param_2 != (FQueryFastData *)0x0) {
            pTVar7 = param_2->Dir;
            local_198._s_0.X = (double)*(undefined8 *)pTVar7;
            local_198._s_0.Y = (double)*(undefined8 *)&pTVar7->field_0x8;
            local_198._s_0.Z = (double)*(undefined8 *)&pTVar7->field_0x10;
            local_180._s_0.X = (double)*(undefined8 *)&param_2->InvDir;
            local_180._s_0.Y = (double)*(undefined8 *)&(param_2->InvDir).field_0x8;
            local_1a0 = 1;
            local_180._s_0.Z = (double)*(undefined8 *)&(param_2->InvDir).field_0x10;
            dStack_168 = param_2->CurrentLength;
            local_158 = ((param_2->bParallel[2] & 1U) * '\x02' | param_2->bParallel[1] & 1U) *
                        '\x02' | param_2->bParallel[0] & 1U | local_158 & 0xf8;
            dStack_160 = param_2->InvCurrentLength;
          }
          local_228[8] = 1;
          local_228._32_8_ = (double)fVar1;
          local_228._40_8_ = (double)fVar2;
          local_1d8 = dVar5;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar18 = 2;
LAB_1477ca502:
          bVar16 = true;
LAB_1477ca505:
          local_278[1] = *(TGeometryParticle<double,3> **)(lVar27 + (longlong)FVar28);
          ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::InsertHit
                    (this->HitBuffer,(FOverlapHit *)local_278,bVar16);
          bVar16 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar16) {
            local_f8._s_0.X = local_260;
            local_f8._s_0.Y = dStack_258;
            local_f8._s_0.Z = local_250;
            local_150 = (EChaosVDCollisionQueryHitType)bVar18;
            local_140 = 1;
          }
          local_308 = this->bAnyHit == false;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_280 = local_304;
          local_288 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_288,puVar22);
          FChaosVDThreadContext::PopContext(pFVar23);
          return (bool)local_308;
        }
        bVar18 = (**(code **)((longlong)*this->QueryCallback + 0x20))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)(lVar27 + (longlong)FVar28),pTVar15);
        if (bVar18 != 0) {
          if (((bVar18 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            bVar16 = false;
            goto LAB_1477ca505;
          }
          goto LAB_1477ca502;
        }
        local_e0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_290 = &local_305;
        local_298 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_298,puVar22);
        FChaosVDThreadContext::PopContext(pFVar23);
        iVar25 = (pTVar21->MShapesArray).ArrayNum;
        uVar26 = uVar26 + 1;
        lVar27 = lVar27 + 8;
      } while ((int)uVar26 < iVar25);
    }
  }
  return (bool)local_308;
}

// Visit<2> @ 1477ca630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Visit<2>(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
           *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
          FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  TVector<double,3> *pTVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [12];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TGeometryParticle<double,3> *pTVar15;
  bool bVar16;
  undefined1 uVar17;
  byte bVar18;
  uint uVar19;
  FUniqueIdx FVar20;
  TGeometryParticle<double,3> *pTVar21;
  uint *puVar22;
  FChaosVDThreadContext *pFVar23;
  FChaosVDContext *pFVar24;
  undefined4 extraout_var;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar28;
  undefined1 auStack_338 [32];
  longlong local_318;
  longlong local_310;
  undefined1 local_308;
  undefined1 local_307;
  undefined1 local_306;
  undefined1 local_305;
  undefined1 local_304 [4];
  int local_300;
  FChaosVDContext local_2f8;
  TGeometryParticle<double,3> *local_2d0;
  code *local_2c8;
  undefined1 *local_2c0;
  code *local_2b8;
  undefined1 *local_2b0;
  FExternalSpatialAccelerationPayload local_2a8;
  code *local_298;
  undefined1 *local_290;
  code *local_288;
  undefined1 *local_280;
  TGeometryParticle<double,3> *local_278 [2];
  undefined4 local_268;
  double local_260;
  double dStack_258;
  double local_250;
  undefined4 local_248;
  FChaosVDOptionalDataChannel *local_240;
  TReferenceControllerBase<1> *pTStack_238;
  undefined1 local_228 [64];
  __m128d local_1e8;
  double local_1d8;
  double dStack_1d0;
  __m128d local_1c8;
  double local_1b8;
  double dStack_1b0;
  undefined **local_1a8;
  undefined1 local_1a0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  double dStack_168;
  double dStack_160;
  byte local_158;
  EChaosVDCollisionQueryHitType local_150;
  undefined **local_148;
  undefined1 local_140;
  float local_138;
  int local_134;
  ushort local_130;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  EChaosVDSQVisitRejectReason local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2a8.Component.ObjectKey = (param_1->Payload).Component.ObjectKey;
  local_2a8.BoneId = (param_1->Payload).BoneId;
  local_2a8.CachedUniqueIdx.Idx = (param_1->Payload).CachedUniqueIdx.Idx;
  local_308 = 1;
  pTVar21 = FExternalSpatialAccelerationPayload::GetExternalGeometryParticle_ExternalThread
                      (&local_2a8);
  dVar14 = _UNK_150689688;
  dVar13 = ___xmm_3ff00000000000003ff0000000000000;
  dVar12 = _UNK_150689518;
  dVar11 = ___xmm_00000000000000003ff0000000000000;
  if (pTVar21 == (TGeometryParticle<double,3> *)0x0) {
    local_308 = 1;
  }
  else {
    uVar26 = 0;
    local_268 = 0xffffffff;
    local_250 = 0.0;
    local_260 = 0.0;
    dStack_258 = 0.0;
    local_248 = 0xffffffff;
    iVar25 = (pTVar21->MShapesArray).ArrayNum;
    if (0 < iVar25) {
      lVar27 = 0;
      local_2d0 = pTVar21;
      local_278[0] = pTVar21;
      do {
        pTVar15 = local_2d0;
        uVar19 = 0;
        if ((int)uVar26 < iVar25) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if (uVar19 == 0) {
          local_310 = (longlong)iVar25;
          local_318 = (longlong)(int)uVar26;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar8 = (code *)swi(3);
            uVar17 = (*pcVar8)();
            return (bool)uVar17;
          }
        }
        FVar6 = (pTVar21->MShapesArray).AllocatorInstance.SecondaryData;
        FVar28 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&pTVar21->MShapesArray;
        if (FVar6 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar28 = FVar6;
        }
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2c0 = &local_307;
        local_2c8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2c8,puVar22);
        pFVar24 = FChaosVDThreadContext::GetCurrentContext(pFVar23);
        if (pFVar24 != (FChaosVDContext *)0x0) {
          local_2f8.OwnerID = pFVar24->OwnerID;
          local_2f8.Id = pFVar24->Id;
          local_2f8.Type = pFVar24->Type;
          local_2f8.Attributes = pFVar24->Attributes;
          local_240 = (pFVar24->CurrentDataChannel).Object;
          pTStack_238 = (pFVar24->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_238 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_238->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_238->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2f8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_2f8.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
          if (CVDDC_SceneQueries.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (CVDDC_SceneQueries.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(CVDDC_SceneQueries.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_238);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2b0 = &local_306;
          local_2b8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b8,puVar22);
          FChaosVDThreadContext::PushContext(pFVar23,&local_2f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2f8.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        local_158 = local_158 & 0xf8;
        local_228._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1a8 = &___7FChaosVDQueryFastData__6B_;
        local_228._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_148 = &___7FChaosVDQueryHitData__6B_;
        local_228[8] = 0;
        local_228._16_4_ = -1;
        local_228._20_4_ = Invalid;
        local_228._24_4_ = 0;
        local_228._28_4_ = -1;
        local_1a0 = 0;
        local_150 = None;
        local_140 = 0;
        local_138 = 0.0;
        local_134 = -1;
        local_130 = 0;
        local_e0 = None;
        local_dc = -1;
        local_228._56_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_228._48_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_1d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_1e8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0)
        ;
        local_1e8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1e8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_1b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1c8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0)
        ;
        local_1c8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1c8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        dStack_168 = 0.0;
        dStack_160 = 0.0;
        local_198._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_198._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_198._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_180._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_180._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_180._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_128._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_128._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_128._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_110._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_110._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_110._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        FVar20 = FExternalSpatialAccelerationPayload::UniqueIdx(&local_2a8);
        uVar4 = *(undefined8 *)&(pTVar15->MXR).Property.MX.field_0x8;
        auVar10 = *(undefined1 (*) [12])&(pTVar15->MXR).Property.MX;
        fVar1 = *(float *)&(pTVar15->MXR).Property.MR;
        fVar2 = *(float *)&(pTVar15->MXR).Property.MR.field_0x4;
        fVar3 = *(float *)&(pTVar15->MXR).Property.MR.field_0x8;
        dVar5 = *(double *)&(pTVar15->MXR).Property.MX.field_0x10;
        local_300 = *(int *)CONCAT44(extraout_var,FVar20.Idx);
        dVar9 = (double)*(float *)&(pTVar15->MXR).Property.MR.field_0xc;
        bVar16 = FChaosVisualDebuggerTrace::IsTracing();
        if (bVar16) {
          local_228._56_4_ = SUB84(dVar9,0);
          local_228._48_8_ = (double)fVar3;
          local_228._60_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_1e8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
          local_1e8.m128d_f64._0_12_ = auVar10;
          dStack_1d0 = 0.0;
          local_1c8.m128d_f64[1] = dVar14;
          local_1c8.m128d_f64[0] = dVar13;
          local_1b8 = dVar11;
          dStack_1b0 = dVar12;
          local_228._28_4_ = local_300;
          local_228._24_4_ = uVar26;
          local_228._20_4_ = BroadPhase;
          if (param_2 != (FQueryFastData *)0x0) {
            pTVar7 = param_2->Dir;
            local_198._s_0.X = (double)*(undefined8 *)pTVar7;
            local_198._s_0.Y = (double)*(undefined8 *)&pTVar7->field_0x8;
            local_198._s_0.Z = (double)*(undefined8 *)&pTVar7->field_0x10;
            local_180._s_0.X = (double)*(undefined8 *)&param_2->InvDir;
            local_180._s_0.Y = (double)*(undefined8 *)&(param_2->InvDir).field_0x8;
            local_1a0 = 1;
            local_180._s_0.Z = (double)*(undefined8 *)&(param_2->InvDir).field_0x10;
            dStack_168 = param_2->CurrentLength;
            local_158 = ((param_2->bParallel[2] & 1U) * '\x02' | param_2->bParallel[1] & 1U) *
                        '\x02' | param_2->bParallel[0] & 1U | local_158 & 0xf8;
            dStack_160 = param_2->InvCurrentLength;
          }
          local_228[8] = 1;
          local_228._32_8_ = (double)fVar1;
          local_228._40_8_ = (double)fVar2;
          local_1d8 = dVar5;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar18 = 2;
LAB_1477cab72:
          bVar16 = true;
LAB_1477cab75:
          local_278[1] = *(TGeometryParticle<double,3> **)(lVar27 + (longlong)FVar28);
          ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::InsertHit
                    (this->HitBuffer,(FOverlapHit *)local_278,bVar16);
          bVar16 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar16) {
            local_f8._s_0.X = local_260;
            local_f8._s_0.Y = dStack_258;
            local_f8._s_0.Z = local_250;
            local_150 = (EChaosVDCollisionQueryHitType)bVar18;
            local_140 = 1;
          }
          local_308 = this->bAnyHit == false;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_280 = local_304;
          local_288 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_288,puVar22);
          FChaosVDThreadContext::PopContext(pFVar23);
          return (bool)local_308;
        }
        bVar18 = (**(code **)((longlong)*this->QueryCallback + 0x20))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)(lVar27 + (longlong)FVar28),pTVar15);
        if (bVar18 != 0) {
          if (((bVar18 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            bVar16 = false;
            goto LAB_1477cab75;
          }
          goto LAB_1477cab72;
        }
        local_e0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_290 = &local_305;
        local_298 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_298,puVar22);
        FChaosVDThreadContext::PopContext(pFVar23);
        iVar25 = (pTVar21->MShapesArray).ArrayNum;
        uVar26 = uVar26 + 1;
        lVar27 = lVar27 + 8;
      } while ((int)uVar26 < iVar25);
    }
  }
  return (bool)local_308;
}

// Visit<2> @ 1477caca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Visit<2>(TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
           *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
          FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  TVector<double,3> *pTVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [12];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TGeometryParticle<double,3> *pTVar15;
  bool bVar16;
  undefined1 uVar17;
  byte bVar18;
  uint uVar19;
  FUniqueIdx FVar20;
  TGeometryParticle<double,3> *pTVar21;
  uint *puVar22;
  FChaosVDThreadContext *pFVar23;
  FChaosVDContext *pFVar24;
  undefined4 extraout_var;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar28;
  undefined1 auStack_338 [32];
  longlong local_318;
  longlong local_310;
  undefined1 local_308;
  undefined1 local_307;
  undefined1 local_306;
  undefined1 local_305;
  undefined1 local_304 [4];
  int local_300;
  FChaosVDContext local_2f8;
  TGeometryParticle<double,3> *local_2d0;
  code *local_2c8;
  undefined1 *local_2c0;
  code *local_2b8;
  undefined1 *local_2b0;
  FExternalSpatialAccelerationPayload local_2a8;
  code *local_298;
  undefined1 *local_290;
  code *local_288;
  undefined1 *local_280;
  TGeometryParticle<double,3> *local_278 [2];
  undefined4 local_268;
  double local_260;
  double dStack_258;
  double local_250;
  undefined4 local_248;
  FChaosVDOptionalDataChannel *local_240;
  TReferenceControllerBase<1> *pTStack_238;
  undefined1 local_228 [64];
  __m128d local_1e8;
  double local_1d8;
  double dStack_1d0;
  __m128d local_1c8;
  double local_1b8;
  double dStack_1b0;
  undefined **local_1a8;
  undefined1 local_1a0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  double dStack_168;
  double dStack_160;
  byte local_158;
  EChaosVDCollisionQueryHitType local_150;
  undefined **local_148;
  undefined1 local_140;
  float local_138;
  int local_134;
  ushort local_130;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  EChaosVDSQVisitRejectReason local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2a8.Component.ObjectKey = (param_1->Payload).Component.ObjectKey;
  local_2a8.BoneId = (param_1->Payload).BoneId;
  local_2a8.CachedUniqueIdx.Idx = (param_1->Payload).CachedUniqueIdx.Idx;
  local_308 = 1;
  pTVar21 = FExternalSpatialAccelerationPayload::GetExternalGeometryParticle_ExternalThread
                      (&local_2a8);
  dVar14 = _UNK_150689688;
  dVar13 = ___xmm_3ff00000000000003ff0000000000000;
  dVar12 = _UNK_150689518;
  dVar11 = ___xmm_00000000000000003ff0000000000000;
  if (pTVar21 == (TGeometryParticle<double,3> *)0x0) {
    local_308 = 1;
  }
  else {
    uVar26 = 0;
    local_268 = 0xffffffff;
    local_250 = 0.0;
    local_260 = 0.0;
    dStack_258 = 0.0;
    local_248 = 0xffffffff;
    iVar25 = (pTVar21->MShapesArray).ArrayNum;
    if (0 < iVar25) {
      lVar27 = 0;
      local_2d0 = pTVar21;
      local_278[0] = pTVar21;
      do {
        pTVar15 = local_2d0;
        uVar19 = 0;
        if ((int)uVar26 < iVar25) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if (uVar19 == 0) {
          local_310 = (longlong)iVar25;
          local_318 = (longlong)(int)uVar26;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar8 = (code *)swi(3);
            uVar17 = (*pcVar8)();
            return (bool)uVar17;
          }
        }
        FVar6 = (pTVar21->MShapesArray).AllocatorInstance.SecondaryData;
        FVar28 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&pTVar21->MShapesArray;
        if (FVar6 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar28 = FVar6;
        }
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2c0 = &local_307;
        local_2c8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2c8,puVar22);
        pFVar24 = FChaosVDThreadContext::GetCurrentContext(pFVar23);
        if (pFVar24 != (FChaosVDContext *)0x0) {
          local_2f8.OwnerID = pFVar24->OwnerID;
          local_2f8.Id = pFVar24->Id;
          local_2f8.Type = pFVar24->Type;
          local_2f8.Attributes = pFVar24->Attributes;
          local_240 = (pFVar24->CurrentDataChannel).Object;
          pTStack_238 = (pFVar24->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_238 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_238->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_238->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2f8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_2f8.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
          if (CVDDC_SceneQueries.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (CVDDC_SceneQueries.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(CVDDC_SceneQueries.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_238);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2b0 = &local_306;
          local_2b8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b8,puVar22);
          FChaosVDThreadContext::PushContext(pFVar23,&local_2f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2f8.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        local_158 = local_158 & 0xf8;
        local_228._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1a8 = &___7FChaosVDQueryFastData__6B_;
        local_228._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_148 = &___7FChaosVDQueryHitData__6B_;
        local_228[8] = 0;
        local_228._16_4_ = -1;
        local_228._20_4_ = Invalid;
        local_228._24_4_ = 0;
        local_228._28_4_ = -1;
        local_1a0 = 0;
        local_150 = None;
        local_140 = 0;
        local_138 = 0.0;
        local_134 = -1;
        local_130 = 0;
        local_e0 = None;
        local_dc = -1;
        local_228._56_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_228._48_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_1d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_1e8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0)
        ;
        local_1e8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1e8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_1b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1c8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0)
        ;
        local_1c8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1c8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        dStack_168 = 0.0;
        dStack_160 = 0.0;
        local_198._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_198._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_198._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_180._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_180._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_180._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_128._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_128._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_128._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_110._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_110._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_110._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        FVar20 = FExternalSpatialAccelerationPayload::UniqueIdx(&local_2a8);
        uVar4 = *(undefined8 *)&(pTVar15->MXR).Property.MX.field_0x8;
        auVar10 = *(undefined1 (*) [12])&(pTVar15->MXR).Property.MX;
        fVar1 = *(float *)&(pTVar15->MXR).Property.MR;
        fVar2 = *(float *)&(pTVar15->MXR).Property.MR.field_0x4;
        fVar3 = *(float *)&(pTVar15->MXR).Property.MR.field_0x8;
        dVar5 = *(double *)&(pTVar15->MXR).Property.MX.field_0x10;
        local_300 = *(int *)CONCAT44(extraout_var,FVar20.Idx);
        dVar9 = (double)*(float *)&(pTVar15->MXR).Property.MR.field_0xc;
        bVar16 = FChaosVisualDebuggerTrace::IsTracing();
        if (bVar16) {
          local_228._56_4_ = SUB84(dVar9,0);
          local_228._48_8_ = (double)fVar3;
          local_228._60_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_1e8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
          local_1e8.m128d_f64._0_12_ = auVar10;
          dStack_1d0 = 0.0;
          local_1c8.m128d_f64[1] = dVar14;
          local_1c8.m128d_f64[0] = dVar13;
          local_1b8 = dVar11;
          dStack_1b0 = dVar12;
          local_228._28_4_ = local_300;
          local_228._24_4_ = uVar26;
          local_228._20_4_ = BroadPhase;
          if (param_2 != (FQueryFastData *)0x0) {
            pTVar7 = param_2->Dir;
            local_198._s_0.X = (double)*(undefined8 *)pTVar7;
            local_198._s_0.Y = (double)*(undefined8 *)&pTVar7->field_0x8;
            local_198._s_0.Z = (double)*(undefined8 *)&pTVar7->field_0x10;
            local_180._s_0.X = (double)*(undefined8 *)&param_2->InvDir;
            local_180._s_0.Y = (double)*(undefined8 *)&(param_2->InvDir).field_0x8;
            local_1a0 = 1;
            local_180._s_0.Z = (double)*(undefined8 *)&(param_2->InvDir).field_0x10;
            dStack_168 = param_2->CurrentLength;
            local_158 = ((param_2->bParallel[2] & 1U) * '\x02' | param_2->bParallel[1] & 1U) *
                        '\x02' | param_2->bParallel[0] & 1U | local_158 & 0xf8;
            dStack_160 = param_2->InvCurrentLength;
          }
          local_228[8] = 1;
          local_228._32_8_ = (double)fVar1;
          local_228._40_8_ = (double)fVar2;
          local_1d8 = dVar5;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar18 = 2;
LAB_1477cb1e2:
          bVar16 = true;
LAB_1477cb1e5:
          local_278[1] = *(TGeometryParticle<double,3> **)(lVar27 + (longlong)FVar28);
          ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::InsertHit
                    (this->HitBuffer,(FOverlapHit *)local_278,bVar16);
          bVar16 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar16) {
            local_f8._s_0.X = local_260;
            local_f8._s_0.Y = dStack_258;
            local_f8._s_0.Z = local_250;
            local_150 = (EChaosVDCollisionQueryHitType)bVar18;
            local_140 = 1;
          }
          local_308 = this->bAnyHit == false;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_280 = local_304;
          local_288 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_288,puVar22);
          FChaosVDThreadContext::PopContext(pFVar23);
          return (bool)local_308;
        }
        bVar18 = (**(code **)((longlong)*this->QueryCallback + 0x20))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)(lVar27 + (longlong)FVar28),pTVar15);
        if (bVar18 != 0) {
          if (((bVar18 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            bVar16 = false;
            goto LAB_1477cb1e5;
          }
          goto LAB_1477cb1e2;
        }
        local_e0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_290 = &local_305;
        local_298 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_298,puVar22);
        FChaosVDThreadContext::PopContext(pFVar23);
        iVar25 = (pTVar21->MShapesArray).ArrayNum;
        uVar26 = uVar26 + 1;
        lVar27 = lVar27 + 8;
      } while ((int)uVar26 < iVar25);
    }
  }
  return (bool)local_308;
}

// Visit<2> @ 1477cb310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>::
Visit<2>(TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
         *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
        FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  TVector<double,3> *pTVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [12];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TGeometryParticle<double,3> *pTVar15;
  bool bVar16;
  undefined1 uVar17;
  byte bVar18;
  uint uVar19;
  FUniqueIdx FVar20;
  TGeometryParticle<double,3> *pTVar21;
  uint *puVar22;
  FChaosVDThreadContext *pFVar23;
  FChaosVDContext *pFVar24;
  undefined4 extraout_var;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar28;
  undefined1 auStack_338 [32];
  longlong local_318;
  longlong local_310;
  undefined1 local_308;
  undefined1 local_307;
  undefined1 local_306;
  undefined1 local_305;
  undefined1 local_304 [4];
  int local_300;
  FChaosVDContext local_2f8;
  TGeometryParticle<double,3> *local_2d0;
  code *local_2c8;
  undefined1 *local_2c0;
  code *local_2b8;
  undefined1 *local_2b0;
  FExternalSpatialAccelerationPayload local_2a8;
  code *local_298;
  undefined1 *local_290;
  code *local_288;
  undefined1 *local_280;
  TGeometryParticle<double,3> *local_278 [2];
  undefined4 local_268;
  double local_260;
  double dStack_258;
  double local_250;
  undefined4 local_248;
  FChaosVDOptionalDataChannel *local_240;
  TReferenceControllerBase<1> *pTStack_238;
  undefined1 local_228 [64];
  __m128d local_1e8;
  double local_1d8;
  double dStack_1d0;
  __m128d local_1c8;
  double local_1b8;
  double dStack_1b0;
  undefined **local_1a8;
  undefined1 local_1a0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  double dStack_168;
  double dStack_160;
  byte local_158;
  EChaosVDCollisionQueryHitType local_150;
  undefined **local_148;
  undefined1 local_140;
  float local_138;
  int local_134;
  ushort local_130;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  EChaosVDSQVisitRejectReason local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2a8.Component.ObjectKey = (param_1->Payload).Component.ObjectKey;
  local_2a8.BoneId = (param_1->Payload).BoneId;
  local_2a8.CachedUniqueIdx.Idx = (param_1->Payload).CachedUniqueIdx.Idx;
  local_308 = 1;
  pTVar21 = FExternalSpatialAccelerationPayload::GetExternalGeometryParticle_ExternalThread
                      (&local_2a8);
  dVar14 = _UNK_150689688;
  dVar13 = ___xmm_3ff00000000000003ff0000000000000;
  dVar12 = _UNK_150689518;
  dVar11 = ___xmm_00000000000000003ff0000000000000;
  if (pTVar21 == (TGeometryParticle<double,3> *)0x0) {
    local_308 = 1;
  }
  else {
    uVar26 = 0;
    local_268 = 0xffffffff;
    local_250 = 0.0;
    local_260 = 0.0;
    dStack_258 = 0.0;
    local_248 = 0xffffffff;
    iVar25 = (pTVar21->MShapesArray).ArrayNum;
    if (0 < iVar25) {
      lVar27 = 0;
      local_2d0 = pTVar21;
      local_278[0] = pTVar21;
      do {
        pTVar15 = local_2d0;
        uVar19 = 0;
        if ((int)uVar26 < iVar25) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if (uVar19 == 0) {
          local_310 = (longlong)iVar25;
          local_318 = (longlong)(int)uVar26;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar8 = (code *)swi(3);
            uVar17 = (*pcVar8)();
            return (bool)uVar17;
          }
        }
        FVar6 = (pTVar21->MShapesArray).AllocatorInstance.SecondaryData;
        FVar28 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&pTVar21->MShapesArray;
        if (FVar6 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar28 = FVar6;
        }
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2c0 = &local_307;
        local_2c8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2c8,puVar22);
        pFVar24 = FChaosVDThreadContext::GetCurrentContext(pFVar23);
        if (pFVar24 != (FChaosVDContext *)0x0) {
          local_2f8.OwnerID = pFVar24->OwnerID;
          local_2f8.Id = pFVar24->Id;
          local_2f8.Type = pFVar24->Type;
          local_2f8.Attributes = pFVar24->Attributes;
          local_240 = (pFVar24->CurrentDataChannel).Object;
          pTStack_238 = (pFVar24->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_238 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_238->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_238->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2f8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_2f8.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
          if (CVDDC_SceneQueries.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (CVDDC_SceneQueries.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(CVDDC_SceneQueries.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_238);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2b0 = &local_306;
          local_2b8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b8,puVar22);
          FChaosVDThreadContext::PushContext(pFVar23,&local_2f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2f8.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        local_158 = local_158 & 0xf8;
        local_228._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1a8 = &___7FChaosVDQueryFastData__6B_;
        local_228._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_148 = &___7FChaosVDQueryHitData__6B_;
        local_228[8] = 0;
        local_228._16_4_ = -1;
        local_228._20_4_ = Invalid;
        local_228._24_4_ = 0;
        local_228._28_4_ = -1;
        local_1a0 = 0;
        local_150 = None;
        local_140 = 0;
        local_138 = 0.0;
        local_134 = -1;
        local_130 = 0;
        local_e0 = None;
        local_dc = -1;
        local_228._56_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_228._48_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_1d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_1e8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0)
        ;
        local_1e8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1e8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_1b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1c8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0)
        ;
        local_1c8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1c8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        dStack_168 = 0.0;
        dStack_160 = 0.0;
        local_198._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_198._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_198._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_180._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_180._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_180._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_128._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_128._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_128._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_110._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_110._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_110._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        FVar20 = FExternalSpatialAccelerationPayload::UniqueIdx(&local_2a8);
        uVar4 = *(undefined8 *)&(pTVar15->MXR).Property.MX.field_0x8;
        auVar10 = *(undefined1 (*) [12])&(pTVar15->MXR).Property.MX;
        fVar1 = *(float *)&(pTVar15->MXR).Property.MR;
        fVar2 = *(float *)&(pTVar15->MXR).Property.MR.field_0x4;
        fVar3 = *(float *)&(pTVar15->MXR).Property.MR.field_0x8;
        dVar5 = *(double *)&(pTVar15->MXR).Property.MX.field_0x10;
        local_300 = *(int *)CONCAT44(extraout_var,FVar20.Idx);
        dVar9 = (double)*(float *)&(pTVar15->MXR).Property.MR.field_0xc;
        bVar16 = FChaosVisualDebuggerTrace::IsTracing();
        if (bVar16) {
          local_228._56_4_ = SUB84(dVar9,0);
          local_228._48_8_ = (double)fVar3;
          local_228._60_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_1e8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
          local_1e8.m128d_f64._0_12_ = auVar10;
          dStack_1d0 = 0.0;
          local_1c8.m128d_f64[1] = dVar14;
          local_1c8.m128d_f64[0] = dVar13;
          local_1b8 = dVar11;
          dStack_1b0 = dVar12;
          local_228._28_4_ = local_300;
          local_228._24_4_ = uVar26;
          local_228._20_4_ = BroadPhase;
          if (param_2 != (FQueryFastData *)0x0) {
            pTVar7 = param_2->Dir;
            local_198._s_0.X = (double)*(undefined8 *)pTVar7;
            local_198._s_0.Y = (double)*(undefined8 *)&pTVar7->field_0x8;
            local_198._s_0.Z = (double)*(undefined8 *)&pTVar7->field_0x10;
            local_180._s_0.X = (double)*(undefined8 *)&param_2->InvDir;
            local_180._s_0.Y = (double)*(undefined8 *)&(param_2->InvDir).field_0x8;
            local_1a0 = 1;
            local_180._s_0.Z = (double)*(undefined8 *)&(param_2->InvDir).field_0x10;
            dStack_168 = param_2->CurrentLength;
            local_158 = ((param_2->bParallel[2] & 1U) * '\x02' | param_2->bParallel[1] & 1U) *
                        '\x02' | param_2->bParallel[0] & 1U | local_158 & 0xf8;
            dStack_160 = param_2->InvCurrentLength;
          }
          local_228[8] = 1;
          local_228._32_8_ = (double)fVar1;
          local_228._40_8_ = (double)fVar2;
          local_1d8 = dVar5;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar18 = 2;
LAB_1477cb852:
          bVar16 = true;
LAB_1477cb855:
          local_278[1] = *(TGeometryParticle<double,3> **)(lVar27 + (longlong)FVar28);
          ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::InsertHit
                    (this->HitBuffer,(FOverlapHit *)local_278,bVar16);
          bVar16 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar16) {
            local_f8._s_0.X = local_260;
            local_f8._s_0.Y = dStack_258;
            local_f8._s_0.Z = local_250;
            local_150 = (EChaosVDCollisionQueryHitType)bVar18;
            local_140 = 1;
          }
          local_308 = this->bAnyHit == false;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_280 = local_304;
          local_288 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_288,puVar22);
          FChaosVDThreadContext::PopContext(pFVar23);
          return (bool)local_308;
        }
        bVar18 = (**(code **)((longlong)*this->QueryCallback + 0x20))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)(lVar27 + (longlong)FVar28),pTVar15);
        if (bVar18 != 0) {
          if (((bVar18 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            bVar16 = false;
            goto LAB_1477cb855;
          }
          goto LAB_1477cb852;
        }
        local_e0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_290 = &local_305;
        local_298 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_298,puVar22);
        FChaosVDThreadContext::PopContext(pFVar23);
        iVar25 = (pTVar21->MShapesArray).ArrayNum;
        uVar26 = uVar26 + 1;
        lVar27 = lVar27 + 8;
      } while ((int)uVar26 < iVar25);
    }
  }
  return (bool)local_308;
}

// Visit<2> @ 1477cb980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>::
Visit<2>(TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
         *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
        FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  TVector<double,3> *pTVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [12];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TGeometryParticle<double,3> *pTVar15;
  bool bVar16;
  undefined1 uVar17;
  byte bVar18;
  uint uVar19;
  FUniqueIdx FVar20;
  TGeometryParticle<double,3> *pTVar21;
  uint *puVar22;
  FChaosVDThreadContext *pFVar23;
  FChaosVDContext *pFVar24;
  undefined4 extraout_var;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar28;
  undefined1 auStack_338 [32];
  longlong local_318;
  longlong local_310;
  undefined1 local_308;
  undefined1 local_307;
  undefined1 local_306;
  undefined1 local_305;
  undefined1 local_304 [4];
  int local_300;
  FChaosVDContext local_2f8;
  TGeometryParticle<double,3> *local_2d0;
  code *local_2c8;
  undefined1 *local_2c0;
  code *local_2b8;
  undefined1 *local_2b0;
  FExternalSpatialAccelerationPayload local_2a8;
  code *local_298;
  undefined1 *local_290;
  code *local_288;
  undefined1 *local_280;
  TGeometryParticle<double,3> *local_278 [2];
  undefined4 local_268;
  double local_260;
  double dStack_258;
  double local_250;
  undefined4 local_248;
  FChaosVDOptionalDataChannel *local_240;
  TReferenceControllerBase<1> *pTStack_238;
  undefined1 local_228 [64];
  __m128d local_1e8;
  double local_1d8;
  double dStack_1d0;
  __m128d local_1c8;
  double local_1b8;
  double dStack_1b0;
  undefined **local_1a8;
  undefined1 local_1a0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  double dStack_168;
  double dStack_160;
  byte local_158;
  EChaosVDCollisionQueryHitType local_150;
  undefined **local_148;
  undefined1 local_140;
  float local_138;
  int local_134;
  ushort local_130;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  EChaosVDSQVisitRejectReason local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2a8.Component.ObjectKey = (param_1->Payload).Component.ObjectKey;
  local_2a8.BoneId = (param_1->Payload).BoneId;
  local_2a8.CachedUniqueIdx.Idx = (param_1->Payload).CachedUniqueIdx.Idx;
  local_308 = 1;
  pTVar21 = FExternalSpatialAccelerationPayload::GetExternalGeometryParticle_ExternalThread
                      (&local_2a8);
  dVar14 = _UNK_150689688;
  dVar13 = ___xmm_3ff00000000000003ff0000000000000;
  dVar12 = _UNK_150689518;
  dVar11 = ___xmm_00000000000000003ff0000000000000;
  if (pTVar21 == (TGeometryParticle<double,3> *)0x0) {
    local_308 = 1;
  }
  else {
    uVar26 = 0;
    local_268 = 0xffffffff;
    local_250 = 0.0;
    local_260 = 0.0;
    dStack_258 = 0.0;
    local_248 = 0xffffffff;
    iVar25 = (pTVar21->MShapesArray).ArrayNum;
    if (0 < iVar25) {
      lVar27 = 0;
      local_2d0 = pTVar21;
      local_278[0] = pTVar21;
      do {
        pTVar15 = local_2d0;
        uVar19 = 0;
        if ((int)uVar26 < iVar25) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if (uVar19 == 0) {
          local_310 = (longlong)iVar25;
          local_318 = (longlong)(int)uVar26;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar8 = (code *)swi(3);
            uVar17 = (*pcVar8)();
            return (bool)uVar17;
          }
        }
        FVar6 = (pTVar21->MShapesArray).AllocatorInstance.SecondaryData;
        FVar28 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&pTVar21->MShapesArray;
        if (FVar6 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar28 = FVar6;
        }
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2c0 = &local_307;
        local_2c8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2c8,puVar22);
        pFVar24 = FChaosVDThreadContext::GetCurrentContext(pFVar23);
        if (pFVar24 != (FChaosVDContext *)0x0) {
          local_2f8.OwnerID = pFVar24->OwnerID;
          local_2f8.Id = pFVar24->Id;
          local_2f8.Type = pFVar24->Type;
          local_2f8.Attributes = pFVar24->Attributes;
          local_240 = (pFVar24->CurrentDataChannel).Object;
          pTStack_238 = (pFVar24->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_238 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_238->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_238->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2f8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_2f8.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
          if (CVDDC_SceneQueries.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (CVDDC_SceneQueries.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(CVDDC_SceneQueries.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_238);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2b0 = &local_306;
          local_2b8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b8,puVar22);
          FChaosVDThreadContext::PushContext(pFVar23,&local_2f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2f8.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        local_158 = local_158 & 0xf8;
        local_228._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1a8 = &___7FChaosVDQueryFastData__6B_;
        local_228._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_148 = &___7FChaosVDQueryHitData__6B_;
        local_228[8] = 0;
        local_228._16_4_ = -1;
        local_228._20_4_ = Invalid;
        local_228._24_4_ = 0;
        local_228._28_4_ = -1;
        local_1a0 = 0;
        local_150 = None;
        local_140 = 0;
        local_138 = 0.0;
        local_134 = -1;
        local_130 = 0;
        local_e0 = None;
        local_dc = -1;
        local_228._56_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_228._48_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_1d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_1e8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0)
        ;
        local_1e8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1e8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_1b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1c8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0)
        ;
        local_1c8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1c8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        dStack_168 = 0.0;
        dStack_160 = 0.0;
        local_198._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_198._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_198._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_180._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_180._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_180._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_128._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_128._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_128._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_110._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_110._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_110._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        FVar20 = FExternalSpatialAccelerationPayload::UniqueIdx(&local_2a8);
        uVar4 = *(undefined8 *)&(pTVar15->MXR).Property.MX.field_0x8;
        auVar10 = *(undefined1 (*) [12])&(pTVar15->MXR).Property.MX;
        fVar1 = *(float *)&(pTVar15->MXR).Property.MR;
        fVar2 = *(float *)&(pTVar15->MXR).Property.MR.field_0x4;
        fVar3 = *(float *)&(pTVar15->MXR).Property.MR.field_0x8;
        dVar5 = *(double *)&(pTVar15->MXR).Property.MX.field_0x10;
        local_300 = *(int *)CONCAT44(extraout_var,FVar20.Idx);
        dVar9 = (double)*(float *)&(pTVar15->MXR).Property.MR.field_0xc;
        bVar16 = FChaosVisualDebuggerTrace::IsTracing();
        if (bVar16) {
          local_228._56_4_ = SUB84(dVar9,0);
          local_228._48_8_ = (double)fVar3;
          local_228._60_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_1e8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
          local_1e8.m128d_f64._0_12_ = auVar10;
          dStack_1d0 = 0.0;
          local_1c8.m128d_f64[1] = dVar14;
          local_1c8.m128d_f64[0] = dVar13;
          local_1b8 = dVar11;
          dStack_1b0 = dVar12;
          local_228._28_4_ = local_300;
          local_228._24_4_ = uVar26;
          local_228._20_4_ = BroadPhase;
          if (param_2 != (FQueryFastData *)0x0) {
            pTVar7 = param_2->Dir;
            local_198._s_0.X = (double)*(undefined8 *)pTVar7;
            local_198._s_0.Y = (double)*(undefined8 *)&pTVar7->field_0x8;
            local_198._s_0.Z = (double)*(undefined8 *)&pTVar7->field_0x10;
            local_180._s_0.X = (double)*(undefined8 *)&param_2->InvDir;
            local_180._s_0.Y = (double)*(undefined8 *)&(param_2->InvDir).field_0x8;
            local_1a0 = 1;
            local_180._s_0.Z = (double)*(undefined8 *)&(param_2->InvDir).field_0x10;
            dStack_168 = param_2->CurrentLength;
            local_158 = ((param_2->bParallel[2] & 1U) * '\x02' | param_2->bParallel[1] & 1U) *
                        '\x02' | param_2->bParallel[0] & 1U | local_158 & 0xf8;
            dStack_160 = param_2->InvCurrentLength;
          }
          local_228[8] = 1;
          local_228._32_8_ = (double)fVar1;
          local_228._40_8_ = (double)fVar2;
          local_1d8 = dVar5;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar18 = 2;
LAB_1477cbec2:
          bVar16 = true;
LAB_1477cbec5:
          local_278[1] = *(TGeometryParticle<double,3> **)(lVar27 + (longlong)FVar28);
          ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::InsertHit
                    (this->HitBuffer,(FOverlapHit *)local_278,bVar16);
          bVar16 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar16) {
            local_f8._s_0.X = local_260;
            local_f8._s_0.Y = dStack_258;
            local_f8._s_0.Z = local_250;
            local_150 = (EChaosVDCollisionQueryHitType)bVar18;
            local_140 = 1;
          }
          local_308 = this->bAnyHit == false;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_280 = local_304;
          local_288 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_288,puVar22);
          FChaosVDThreadContext::PopContext(pFVar23);
          return (bool)local_308;
        }
        bVar18 = (**(code **)((longlong)*this->QueryCallback + 0x20))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)(lVar27 + (longlong)FVar28),pTVar15);
        if (bVar18 != 0) {
          if (((bVar18 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            bVar16 = false;
            goto LAB_1477cbec5;
          }
          goto LAB_1477cbec2;
        }
        local_e0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_290 = &local_305;
        local_298 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_298,puVar22);
        FChaosVDThreadContext::PopContext(pFVar23);
        iVar25 = (pTVar21->MShapesArray).ArrayNum;
        uVar26 = uVar26 + 1;
        lVar27 = lVar27 + 8;
      } while ((int)uVar26 < iVar25);
    }
  }
  return (bool)local_308;
}

// ~TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1> @ 1477f1f10

void __thiscall
TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::
~TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          (TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TBox_N_02_Chaos__UFExternalSpatialAccelerationPayload__UFOverlapHit_ChaosInterface___00__6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0> @ 1477f1f30

void __thiscall
TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::
~TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          (TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TBox_N_02_Chaos__UFExternalSpatialAccelerationPayload__UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1> @ 1477f1f50

void __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::
~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__UFExternalSpatialAccelerationPayload__UFOverlapHit_ChaosInterface___00__6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0> @ 1477f1f70

void __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::
~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__UFExternalSpatialAccelerationPayload__UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1> @ 1477f1f90

void __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::
~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__UFExternalSpatialAccelerationPayload__UFOverlapHit_ChaosInterface___00__6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0> @ 1477f1fb0

void __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::
~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__UFExternalSpatialAccelerationPayload__UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1> @ 1477f1fd0

void __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::
~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__UFExternalSpatialAccelerationPayload__UFOverlapHit_ChaosInterface___00__6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0> @ 1477f1ff0

void __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::
~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__UFExternalSpatialAccelerationPayload__UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1> @ 1477f2010

void __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::
~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__UFExternalSpatialAccelerationPayload__UFOverlapHit_ChaosInterface___00__6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0> @ 1477f2030

void __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::
~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__UFExternalSpatialAccelerationPayload__UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1> @ 1477f2050

void __thiscall
TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::
~TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          (TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TSphere_N_02_Chaos__UFExternalSpatialAccelerationPayload__UFOverlapHit_ChaosInterface___00__6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0> @ 1477f2070

void __thiscall
TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::
~TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          (TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TSphere_N_02_Chaos__UFExternalSpatialAccelerationPayload__UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1> @ 1477f2090

void __thiscall
TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>::
~TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          (TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_VFCapsule_Chaos__UFExternalSpatialAccelerationPayload__UFOverlapHit_ChaosInterface___00__6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0> @ 1477f20b0

void __thiscall
TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>::
~TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          (TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_VFCapsule_Chaos__UFExternalSpatialAccelerationPayload__UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1> @ 1477f20d0

void __thiscall
TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>::
~TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          (TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_VFConvex_Chaos__UFExternalSpatialAccelerationPayload__UFOverlapHit_ChaosInterface___00__6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0> @ 1477f20f0

void __thiscall
TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>::
~TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          (TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_VFConvex_Chaos__UFExternalSpatialAccelerationPayload__UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  return;
}

// GetQueryData @ 14783c910

void * __thiscall
TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::GetQueryData(TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 14783c920

void * __thiscall
TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::GetQueryData(TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 14783c930

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::GetQueryData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 14783c940

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::GetQueryData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 14783c950

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::GetQueryData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 14783c960

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::GetQueryData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 14783c970

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::GetQueryData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 14783c980

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::GetQueryData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 14783c990

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::GetQueryData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 14783c9a0

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::GetQueryData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 14783c9b0

void * __thiscall
TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::GetQueryData(TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 14783c9c0

void * __thiscall
TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::GetQueryData(TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 14783c9d0

void * __thiscall
TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>::
GetQueryData(TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
             *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 14783c9e0

void * __thiscall
TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>::
GetQueryData(TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
             *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 14783c9f0

void * __thiscall
TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>::
GetQueryData(TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
             *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 14783ca00

void * __thiscall
TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>::
GetQueryData(TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
             *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryPayload @ 14783cc40

void * __thiscall
TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::GetQueryPayload(TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 14783cc50

void * __thiscall
TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::GetQueryPayload(TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 14783cc60

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::GetQueryPayload(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 14783cc70

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::GetQueryPayload(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 14783cc80

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::GetQueryPayload(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 14783cc90

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::GetQueryPayload(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 14783cca0

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::GetQueryPayload(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 14783ccb0

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::GetQueryPayload(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 14783ccc0

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::GetQueryPayload(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 14783ccd0

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::GetQueryPayload(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 14783cce0

void * __thiscall
TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::GetQueryPayload(TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 14783ccf0

void * __thiscall
TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::GetQueryPayload(TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 14783cd00

void * __thiscall
TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>::
GetQueryPayload(TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
                *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 14783cd10

void * __thiscall
TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>::
GetQueryPayload(TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
                *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 14783cd20

void * __thiscall
TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>::
GetQueryPayload(TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
                *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 14783cd30

void * __thiscall
TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>::
GetQueryPayload(TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
                *this)

{
  return (void *)0x0;
}

// GetSimData @ 14783d910

void * __thiscall
TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::GetSimData(TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 14783d920

void * __thiscall
TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::GetSimData(TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 14783d930

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::GetSimData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 14783d940

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::GetSimData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 14783d950

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::GetSimData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 14783d960

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::GetSimData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 14783d970

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::GetSimData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 14783d980

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::GetSimData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 14783d990

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::GetSimData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 14783d9a0

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::GetSimData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 14783d9b0

void * __thiscall
TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::GetSimData(TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 14783d9c0

void * __thiscall
TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::GetSimData(TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 14783d9d0

void * __thiscall
TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>::
GetSimData(TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
           *this)

{
  return (void *)0x0;
}

// GetSimData @ 14783d9e0

void * __thiscall
TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>::
GetSimData(TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  return (void *)0x0;
}

// GetSimData @ 14783d9f0

void * __thiscall
TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>::
GetSimData(TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
           *this)

{
  return (void *)0x0;
}

// GetSimData @ 14783da00

void * __thiscall
TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>::
GetSimData(TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  return (void *)0x0;
}

// Overlap @ 147847ef0

bool __thiscall
TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Overlap(TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 147847f00

bool __thiscall
TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::Overlap(TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054426>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x25a,"bGTData");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return true;
}

// Overlap @ 147847f40

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Overlap(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 147847f50

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::Overlap(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054426>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x25a,"bGTData");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return true;
}

// Overlap @ 147847f90

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Overlap(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 147847fa0

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::Overlap(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054426>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x25a,"bGTData");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return true;
}

// Overlap @ 147847fe0

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Overlap(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 147847ff0

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::Overlap(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054426>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x25a,"bGTData");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return true;
}

// Overlap @ 147848030

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Overlap(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 147848040

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::Overlap(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054426>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x25a,"bGTData");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return true;
}

// Overlap @ 147848080

bool __thiscall
TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Overlap(TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 147848090

bool __thiscall
TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::Overlap(TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054426>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x25a,"bGTData");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return true;
}

// Overlap @ 1478480d0

bool __thiscall
TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>::
Overlap(TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 1478480e0

bool __thiscall
TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>::
Overlap(TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054426>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x25a,"bGTData");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return true;
}

// Overlap @ 147848120

bool __thiscall
TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>::
Overlap(TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 147848130

bool __thiscall
TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>::
Overlap(TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054426>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x25a,"bGTData");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return true;
}

// Raycast @ 147857920

bool __thiscall
TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Raycast(TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
         FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054363>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x21b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Raycast @ 147857960

bool __thiscall
TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::Raycast(TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
         FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054363>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x21b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Raycast @ 1478579a0

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Raycast(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
         FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054363>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x21b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Raycast @ 1478579e0

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::Raycast(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
         FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054363>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x21b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Raycast @ 147857a20

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Raycast(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
         FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054363>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x21b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Raycast @ 147857a60

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::Raycast(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
         FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054363>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x21b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Raycast @ 147857aa0

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Raycast(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
         FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054363>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x21b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Raycast @ 147857ae0

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::Raycast(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
         FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054363>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x21b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Raycast @ 147857b20

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Raycast(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
         FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054363>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x21b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Raycast @ 147857b60

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::Raycast(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
         FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054363>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x21b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Raycast @ 147857ba0

bool __thiscall
TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Raycast(TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
         FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054363>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x21b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Raycast @ 147857be0

bool __thiscall
TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::Raycast(TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
         FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054363>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x21b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Raycast @ 147857c20

bool __thiscall
TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>::
Raycast(TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
       FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054363>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x21b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Raycast @ 147857c60

bool __thiscall
TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>::
Raycast(TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
       FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054363>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x21b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Raycast @ 147857ca0

bool __thiscall
TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>::
Raycast(TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
       FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054363>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x21b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Raycast @ 147857ce0

bool __thiscall
TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>::
Raycast(TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
       FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054363>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x21b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Sweep @ 147876c80

bool __thiscall
TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Sweep(TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
       FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054369>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x221,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Sweep @ 147876cc0

bool __thiscall
TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::Sweep(TBPVisitor<Chaos::TBox<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
       FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054369>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x221,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Sweep @ 147876d00

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Sweep(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
       FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054369>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x221,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Sweep @ 147876d40

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::Sweep(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
       FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054369>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x221,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Sweep @ 147876d80

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Sweep(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
       FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054369>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x221,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Sweep @ 147876dc0

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::Sweep(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
       FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054369>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x221,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Sweep @ 147876e00

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Sweep(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
       FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054369>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x221,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Sweep @ 147876e40

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::Sweep(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
       FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054369>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x221,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Sweep @ 147876e80

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Sweep(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
       FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054369>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x221,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Sweep @ 147876ec0

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::Sweep(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
       FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054369>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x221,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Sweep @ 147876f00

bool __thiscall
TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
::Sweep(TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
       FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054369>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x221,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Sweep @ 147876f40

bool __thiscall
TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
::Sweep(TBPVisitor<Chaos::TSphere<double,3>,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
       FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054369>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x221,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Sweep @ 147876f80

bool __thiscall
TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>::Sweep
          (TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
           *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
          FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054369>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x221,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Sweep @ 147876fc0

bool __thiscall
TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>::
Sweep(TBPVisitor<Chaos::FCapsule,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
      *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
     FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054369>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x221,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Sweep @ 147877000

bool __thiscall
TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>::Sweep
          (TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FOverlapHit,1>
           *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
          FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054369>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x221,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Sweep @ 147877040

bool __thiscall
TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>::
Sweep(TBPVisitor<Chaos::FConvex,FExternalSpatialAccelerationPayload,ChaosInterface::FPTOverlapHit,0>
      *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1,
     FQueryFastData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054369>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x221,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

