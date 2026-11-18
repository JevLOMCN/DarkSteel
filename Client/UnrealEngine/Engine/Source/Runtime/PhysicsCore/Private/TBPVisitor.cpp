// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 128

// Visit<2> @ 1441636c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Visit<2>(TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
          FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  TVector<double,3> *pTVar7;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *pFVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TGeometryParticle<double,3> *pTVar16;
  int iVar17;
  bool bVar18;
  undefined1 uVar19;
  byte bVar20;
  uint uVar21;
  uint *puVar22;
  FChaosVDThreadContext *pFVar23;
  FChaosVDContext *pFVar24;
  int iVar25;
  uint uVar26;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar27;
  longlong lVar28;
  undefined1 auStack_328 [32];
  longlong local_308;
  longlong local_300;
  undefined1 local_2f8;
  undefined1 local_2f7;
  undefined1 local_2f6;
  undefined1 local_2f5;
  undefined1 local_2f4 [4];
  TGeometryParticle<double,3> *local_2f0;
  FChaosVDContext local_2e8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  TGeometryParticle<double,3> *local_2b0 [2];
  undefined4 local_2a0;
  undefined4 uStack_29c;
  double dStack_298;
  double dStack_290;
  double dStack_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  code *local_278;
  undefined1 *local_270;
  code *local_268;
  undefined1 *local_260;
  code *local_258;
  undefined1 *local_250;
  code *local_248;
  undefined1 *local_240;
  FChaosVDOptionalDataChannel *local_238;
  TReferenceControllerBase<1> *pTStack_230;
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
  
  dVar15 = _UNK_150689688;
  dVar14 = ___xmm_3ff00000000000003ff0000000000000;
  dVar13 = _UNK_150689518;
  dVar12 = ___xmm_00000000000000003ff0000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_328;
  local_2e8.CurrentDataChannel.Object =
       *(FChaosVDOptionalDataChannel **)&(param_1->Payload).CachedUniqueIdx;
  local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&(param_1->Payload).UnionQueryFilterData.Word1;
  local_2c8 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  uStack_2c0._0_4_ = (param_1->Payload).UnionSimFilterData.Word1;
  uStack_2c0._4_4_ = (param_1->Payload).UnionSimFilterData.Word2;
  local_2f8 = 1;
  local_2b8 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  local_2f0 = (param_1->Payload).ExternalGeometryParticle;
  if (local_2f0 == (TGeometryParticle<double,3> *)0x0) {
    local_2f8 = 1;
  }
  else {
    uVar26 = 0;
    local_2a0 = 0xffffffff;
    dStack_288 = 0.0;
    dStack_298 = 0.0;
    dStack_290 = 0.0;
    local_280 = 0xffffffff;
    iVar25 = (local_2f0->MShapesArray).ArrayNum;
    if (0 < iVar25) {
      iVar17 = (int)local_2e8.CurrentDataChannel.Object;
      lVar28 = 0;
      local_2b0[0] = local_2f0;
      do {
        pTVar16 = local_2f0;
        FVar27 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&local_2f0->MShapesArray;
        uVar21 = 0;
        if ((int)uVar26 < iVar25) {
          uVar21 = ~uVar26 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_300 = (longlong)iVar25;
          local_308 = (longlong)(int)uVar26;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar9 = (code *)swi(3);
            uVar19 = (*pcVar9)();
            return (bool)uVar19;
          }
        }
        FVar6 = (pTVar16->MShapesArray).AllocatorInstance.SecondaryData;
        if (FVar6 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar27 = FVar6;
        }
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_270 = &local_2f7;
        local_278 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_278,puVar22);
        pFVar24 = FChaosVDThreadContext::GetCurrentContext(pFVar23);
        if (pFVar24 != (FChaosVDContext *)0x0) {
          local_2e8.OwnerID = pFVar24->OwnerID;
          local_2e8.Id = pFVar24->Id;
          local_2e8.Type = pFVar24->Type;
          local_2e8.Attributes = pFVar24->Attributes;
          local_238 = (pFVar24->CurrentDataChannel).Object;
          pTStack_230 = (pFVar24->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_230 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_230->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_230->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_2e8.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
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
                    (pTStack_230);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_260 = &local_2f6;
          local_268 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_268,puVar22);
          FChaosVDThreadContext::PushContext(pFVar23,&local_2e8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        pTVar16 = local_2f0;
        fVar1 = *(float *)&(local_2f0->MXR).Property.MR;
        fVar2 = *(float *)&(local_2f0->MXR).Property.MR.field_0x4;
        fVar3 = *(float *)&(local_2f0->MXR).Property.MR.field_0x8;
        dVar4 = *(double *)&(local_2f0->MXR).Property.MX.field_0x10;
        local_158 = local_158 & 0xf8;
        local_228._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_228._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_1a8 = &___7FChaosVDQueryFastData__6B_;
        local_228[8] = 0;
        local_228._16_4_ = -1;
        local_228._20_4_ = Invalid;
        local_228._24_4_ = 0;
        local_228._28_4_ = -1;
        local_1a0 = 0;
        local_150 = None;
        local_140 = 0;
        local_148 = &___7FChaosVDQueryHitData__6B_;
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
        uVar5 = *(undefined8 *)&(local_2f0->MXR).Property.MX.field_0x8;
        auVar11 = *(undefined1 (*) [12])&(local_2f0->MXR).Property.MX;
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
        dVar10 = (double)*(float *)&(local_2f0->MXR).Property.MR.field_0xc;
        bVar18 = FChaosVisualDebuggerTrace::IsTracing();
        if (bVar18) {
          local_228._56_4_ = SUB84(dVar10,0);
          local_228._48_8_ = (double)fVar3;
          local_228._60_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1e8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
          local_1e8.m128d_f64._0_12_ = auVar11;
          dStack_1d0 = 0.0;
          local_1c8.m128d_f64[1] = dVar15;
          local_1c8.m128d_f64[0] = dVar14;
          local_1b8 = dVar12;
          dStack_1b0 = dVar13;
          local_228._28_4_ = iVar17;
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
          local_1d8 = dVar4;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar20 = 2;
LAB_144163c13:
          local_2b0[1] = *(TGeometryParticle<double,3> **)((longlong)FVar27 + lVar28);
          pFVar8 = this->HitBuffer;
          *(TGeometryParticle<double,3> **)&pFVar8->CurrentBlockingHit = local_2b0[0];
          *(TGeometryParticle<double,3> **)&(pFVar8->CurrentBlockingHit).field_0x8 = local_2b0[1];
          *(ulonglong *)&(pFVar8->CurrentBlockingHit).field_0x10 = CONCAT44(uStack_29c,local_2a0);
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x18 = dStack_298;
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x20 = dStack_290;
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x28 = dStack_288;
          *(ulonglong *)&(pFVar8->CurrentBlockingHit).field_0x30 = CONCAT44(uStack_27c,local_280);
          pFVar8->bHasBlockingHit = true;
LAB_144163c46:
          bVar18 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar18) {
            local_f8._s_0.X = dStack_298;
            local_f8._s_0.Y = dStack_290;
            local_f8._s_0.Z = dStack_288;
            local_150 = (EChaosVDCollisionQueryHitType)bVar20;
            local_140 = 1;
          }
          local_2f8 = this->bAnyHit == false;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_240 = local_2f4;
          local_248 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_248,puVar22);
          FChaosVDThreadContext::PopContext(pFVar23);
          return (bool)local_2f8;
        }
        bVar20 = (**(code **)((longlong)*this->QueryCallback + 0x20))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)((longlong)FVar27 + lVar28),pTVar16);
        if (bVar20 != 0) {
          if (((bVar20 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            local_2b0[1] = *(TGeometryParticle<double,3> **)((longlong)FVar27 + lVar28);
            ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::AddTouchingHit
                      (this->HitBuffer,(FOverlapHit *)local_2b0);
            goto LAB_144163c46;
          }
          goto LAB_144163c13;
        }
        local_e0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_250 = &local_2f5;
        local_258 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_258,puVar22);
        FChaosVDThreadContext::PopContext(pFVar23);
        uVar26 = uVar26 + 1;
        lVar28 = lVar28 + 8;
        iVar25 = (local_2f0->MShapesArray).ArrayNum;
      } while ((int)uVar26 < iVar25);
    }
  }
  return (bool)local_2f8;
}

// Visit<2> @ 144163d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Visit<2>(TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
          FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  undefined1 uVar17;
  byte bVar18;
  uint uVar19;
  uint *puVar20;
  FChaosVDThreadContext *pFVar21;
  FChaosVDContext *pFVar22;
  TVector<double,3> *pTVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar27;
  longlong *plVar28;
  longlong lVar29;
  undefined1 auStackY_358 [32];
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324 [4];
  longlong local_320;
  longlong *local_318;
  FChaosVDContext local_310;
  longlong local_2f0;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> local_2e8;
  code *local_2e0;
  undefined1 *local_2d8;
  code *local_2d0;
  undefined1 *local_2c8;
  code *local_2c0;
  undefined1 *local_2b8;
  code *local_2b0;
  undefined1 *local_2a8;
  TGeometryParticleHandleImp<double,3,1> *local_2a0 [2];
  undefined4 local_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined4 local_270;
  TGeometryParticle<double,3> *local_268;
  TGeometryParticleHandleImp<double,3,1> *pTStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  FChaosVDOptionalDataChannel *local_230;
  TReferenceControllerBase<1> *pTStack_228;
  undefined1 local_218 [64];
  __m128d local_1d8;
  double local_1c8;
  double dStack_1c0;
  __m128d local_1b8;
  double local_1a8;
  double dStack_1a0;
  undefined **local_198;
  undefined1 local_190;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  double dStack_158;
  double dStack_150;
  byte local_148;
  EChaosVDCollisionQueryHitType local_140;
  undefined **local_138;
  undefined1 local_130;
  float local_128;
  int local_124;
  ushort local_120;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  EChaosVDSQVisitRejectReason local_d0;
  int local_cc;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_258._0_4_ = (param_1->Payload).CachedUniqueIdx.Idx;
  local_258._4_4_ = (param_1->Payload).UnionQueryFilterData.Word0;
  uStack_250._0_4_ = (param_1->Payload).UnionQueryFilterData.Word1;
  uStack_250._4_4_ = (param_1->Payload).UnionQueryFilterData.Word2;
  pTVar6 = (param_1->Payload).GeometryParticleHandle;
  local_268 = (param_1->Payload).ExternalGeometryParticle;
  pTStack_260 = (param_1->Payload).GeometryParticleHandle;
  local_248 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  uStack_240._0_4_ = (param_1->Payload).UnionSimFilterData.Word1;
  uStack_240._4_4_ = (param_1->Payload).UnionSimFilterData.Word2;
  local_238 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  if (pTVar6 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1732238023615054426>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                        ,0x25a,"bGTData");
    if (bVar16) {
      pcVar9 = (code *)swi(3);
      uVar17 = (*pcVar9)();
      return (bool)uVar17;
    }
  }
  else {
    local_318 = &pTVar6->_padding_;
    local_2e8 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )Chaos::TGeometryParticlesImp<double,3,0>::ShapesArray
                            ((TGeometryParticlesImp<double,3,0> *)pTVar6->_padding_,
                             (int)pTVar6->_padding_);
    dVar15 = _UNK_150689688;
    dVar14 = ___xmm_3ff00000000000003ff0000000000000;
    dVar13 = _UNK_150689518;
    dVar12 = ___xmm_00000000000000003ff0000000000000;
    uVar26 = 0;
    local_290 = 0xffffffff;
    local_270 = 0xffffffff;
    local_278 = 0.0;
    local_288 = 0.0;
    dStack_280 = 0.0;
    iVar25 = *(int *)((longlong)local_2e8 + 0x10);
    if (0 < iVar25) {
      local_320 = 0;
      plVar28 = &pTVar6->_padding_;
      local_2a0[0] = pTVar6;
      do {
        FVar27 = local_2e8;
        uVar19 = 0;
        if ((int)uVar26 < iVar25) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          uVar17 = (*pcVar9)();
          return (bool)uVar17;
        }
        FVar7 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  *)((longlong)FVar27 + 8);
        if (FVar7 != (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                      )0x0) {
          FVar27 = FVar7;
        }
        puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2d8 = &local_327;
        local_2e0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar21 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2e0,puVar20);
        pFVar22 = FChaosVDThreadContext::GetCurrentContext(pFVar21);
        if (pFVar22 != (FChaosVDContext *)0x0) {
          local_310.OwnerID = pFVar22->OwnerID;
          local_310.Id = pFVar22->Id;
          local_310.Type = pFVar22->Type;
          local_310.Attributes = pFVar22->Attributes;
          local_230 = (pFVar22->CurrentDataChannel).Object;
          pTStack_228 = (pFVar22->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_228 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_228->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_228->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_310.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_310.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
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
                    (pTStack_228);
          puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2c8 = &local_326;
          local_2d0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar21 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2d0,puVar20);
          FChaosVDThreadContext::PushContext(pFVar21,&local_310);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_310.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        local_148 = local_148 & 0xf8;
        local_218._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_218._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_198 = &___7FChaosVDQueryFastData__6B_;
        local_218._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_138 = &___7FChaosVDQueryHitData__6B_;
        local_218[8] = 0;
        local_218._16_4_ = -1;
        local_218._20_4_ = Invalid;
        local_218._24_4_ = 0;
        local_218._28_4_ = -1;
        local_190 = 0;
        local_140 = None;
        local_130 = 0;
        local_128 = 0.0;
        local_124 = -1;
        local_120 = 0;
        local_d0 = None;
        local_218._56_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_218._48_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_1c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_cc = -1;
        local_1d8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0)
        ;
        local_1d8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1d8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_1a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1b8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0)
        ;
        local_1b8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1b8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        dStack_158 = 0.0;
        dStack_150 = 0.0;
        local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_170._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_170._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_170._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_118._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_118._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_118._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_100._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_100._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_100._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pTVar23 = Chaos::TParticles<double,3>::GetX
                            ((TParticles<double,3> *)pTVar6->_padding_,(uint)*plVar28);
        local_2f0 = pTVar6->_padding_;
        uVar19 = (uint)*local_318;
        lVar29 = (longlong)(int)uVar19;
        uVar24 = 0;
        if ((int)uVar19 < *(int *)(local_2f0 + 0x50)) {
          uVar24 = ~uVar19 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          uVar17 = (*pcVar9)();
          return (bool)uVar17;
        }
        uVar3 = *(undefined8 *)&pTVar23->field_0x8;
        auVar11 = *(undefined1 (*) [12])pTVar23;
        dVar4 = *(double *)&pTVar23->field_0x10;
        lVar8 = *(longlong *)(local_2f0 + 0x48);
        fVar1 = *(float *)(lVar8 + lVar29 * 0x10);
        fVar2 = *(float *)(lVar8 + 4 + lVar29 * 0x10);
        uVar5 = *(undefined8 *)(lVar8 + 8 + lVar29 * 0x10);
        dVar10 = (double)(float)((ulonglong)uVar5 >> 0x20);
        bVar16 = FChaosVisualDebuggerTrace::IsTracing();
        lVar29 = local_320;
        if (bVar16) {
          local_218._56_4_ = SUB84(dVar10,0);
          local_218._48_8_ = (double)(float)uVar5;
          local_218._60_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1d8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
          local_1d8.m128d_f64._0_12_ = auVar11;
          dStack_1c0 = 0.0;
          local_1b8.m128d_f64[1] = dVar15;
          local_1b8.m128d_f64[0] = dVar14;
          local_1a8 = dVar12;
          dStack_1a0 = dVar13;
          local_218._28_4_ = (int)local_258;
          local_218._24_4_ = uVar26;
          local_218._20_4_ = BroadPhase;
          if (param_2 != (FQueryFastData *)0x0) {
            pTVar23 = param_2->Dir;
            local_188._s_0.X = (double)*(undefined8 *)pTVar23;
            local_188._s_0.Y = (double)*(undefined8 *)&pTVar23->field_0x8;
            local_188._s_0.Z = (double)*(undefined8 *)&pTVar23->field_0x10;
            local_170._s_0.X = (double)*(undefined8 *)&param_2->InvDir;
            local_170._s_0.Y = (double)*(undefined8 *)&(param_2->InvDir).field_0x8;
            local_190 = 1;
            local_170._s_0.Z = (double)*(undefined8 *)&(param_2->InvDir).field_0x10;
            dStack_158 = param_2->CurrentLength;
            local_148 = ((param_2->bParallel[2] & 1U) * '\x02' | param_2->bParallel[1] & 1U) *
                        '\x02' | param_2->bParallel[0] & 1U | local_148 & 0xf8;
            dStack_150 = param_2->InvCurrentLength;
          }
          local_218[8] = 1;
          local_218._32_8_ = (double)fVar1;
          local_218._40_8_ = (double)fVar2;
          local_1c8 = dVar4;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar18 = 2;
LAB_14416435c:
          bVar16 = true;
LAB_14416435f:
          local_2a0[1] = *(TGeometryParticleHandleImp<double,3,1> **)((longlong)FVar27 + lVar29);
          ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::InsertHit
                    (this->HitBuffer,(FPTOverlapHit *)local_2a0,bVar16);
          bVar16 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar16) {
            local_e8._s_0.X = local_288;
            local_e8._s_0.Y = dStack_280;
            local_e8._s_0.Z = local_278;
            local_140 = (EChaosVDCollisionQueryHitType)bVar18;
            local_130 = 1;
          }
          bVar16 = this->bAnyHit;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_218);
          puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2a8 = local_324;
          local_2b0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar21 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b0,puVar20);
          FChaosVDThreadContext::PopContext(pFVar21);
          return bVar16 == false;
        }
        bVar18 = (**(code **)((longlong)*this->QueryCallback + 0x18))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)((longlong)FVar27 + local_320),pTVar6);
        if (bVar18 != 0) {
          if (((bVar18 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            bVar16 = false;
            goto LAB_14416435f;
          }
          goto LAB_14416435c;
        }
        local_d0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_218);
        puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2b8 = &local_325;
        local_2c0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar21 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2c0,puVar20);
        FChaosVDThreadContext::PopContext(pFVar21);
        local_320 = lVar29 + 8;
        uVar26 = uVar26 + 1;
        iVar25 = *(int *)((longlong)local_2e8 + 0x10);
        plVar28 = local_318;
      } while ((int)uVar26 < iVar25);
    }
  }
  return true;
}

// Visit<2> @ 144164480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Visit<2>(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
          FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  TVector<double,3> *pTVar7;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *pFVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TGeometryParticle<double,3> *pTVar16;
  int iVar17;
  bool bVar18;
  undefined1 uVar19;
  byte bVar20;
  uint uVar21;
  uint *puVar22;
  FChaosVDThreadContext *pFVar23;
  FChaosVDContext *pFVar24;
  int iVar25;
  uint uVar26;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar27;
  longlong lVar28;
  undefined1 auStack_328 [32];
  longlong local_308;
  longlong local_300;
  undefined1 local_2f8;
  undefined1 local_2f7;
  undefined1 local_2f6;
  undefined1 local_2f5;
  undefined1 local_2f4 [4];
  TGeometryParticle<double,3> *local_2f0;
  FChaosVDContext local_2e8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  TGeometryParticle<double,3> *local_2b0 [2];
  undefined4 local_2a0;
  undefined4 uStack_29c;
  double dStack_298;
  double dStack_290;
  double dStack_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  code *local_278;
  undefined1 *local_270;
  code *local_268;
  undefined1 *local_260;
  code *local_258;
  undefined1 *local_250;
  code *local_248;
  undefined1 *local_240;
  FChaosVDOptionalDataChannel *local_238;
  TReferenceControllerBase<1> *pTStack_230;
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
  
  dVar15 = _UNK_150689688;
  dVar14 = ___xmm_3ff00000000000003ff0000000000000;
  dVar13 = _UNK_150689518;
  dVar12 = ___xmm_00000000000000003ff0000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_328;
  local_2e8.CurrentDataChannel.Object =
       *(FChaosVDOptionalDataChannel **)&(param_1->Payload).CachedUniqueIdx;
  local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&(param_1->Payload).UnionQueryFilterData.Word1;
  local_2c8 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  uStack_2c0._0_4_ = (param_1->Payload).UnionSimFilterData.Word1;
  uStack_2c0._4_4_ = (param_1->Payload).UnionSimFilterData.Word2;
  local_2f8 = 1;
  local_2b8 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  local_2f0 = (param_1->Payload).ExternalGeometryParticle;
  if (local_2f0 == (TGeometryParticle<double,3> *)0x0) {
    local_2f8 = 1;
  }
  else {
    uVar26 = 0;
    local_2a0 = 0xffffffff;
    dStack_288 = 0.0;
    dStack_298 = 0.0;
    dStack_290 = 0.0;
    local_280 = 0xffffffff;
    iVar25 = (local_2f0->MShapesArray).ArrayNum;
    if (0 < iVar25) {
      iVar17 = (int)local_2e8.CurrentDataChannel.Object;
      lVar28 = 0;
      local_2b0[0] = local_2f0;
      do {
        pTVar16 = local_2f0;
        FVar27 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&local_2f0->MShapesArray;
        uVar21 = 0;
        if ((int)uVar26 < iVar25) {
          uVar21 = ~uVar26 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_300 = (longlong)iVar25;
          local_308 = (longlong)(int)uVar26;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar9 = (code *)swi(3);
            uVar19 = (*pcVar9)();
            return (bool)uVar19;
          }
        }
        FVar6 = (pTVar16->MShapesArray).AllocatorInstance.SecondaryData;
        if (FVar6 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar27 = FVar6;
        }
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_270 = &local_2f7;
        local_278 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_278,puVar22);
        pFVar24 = FChaosVDThreadContext::GetCurrentContext(pFVar23);
        if (pFVar24 != (FChaosVDContext *)0x0) {
          local_2e8.OwnerID = pFVar24->OwnerID;
          local_2e8.Id = pFVar24->Id;
          local_2e8.Type = pFVar24->Type;
          local_2e8.Attributes = pFVar24->Attributes;
          local_238 = (pFVar24->CurrentDataChannel).Object;
          pTStack_230 = (pFVar24->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_230 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_230->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_230->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_2e8.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
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
                    (pTStack_230);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_260 = &local_2f6;
          local_268 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_268,puVar22);
          FChaosVDThreadContext::PushContext(pFVar23,&local_2e8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        pTVar16 = local_2f0;
        fVar1 = *(float *)&(local_2f0->MXR).Property.MR;
        fVar2 = *(float *)&(local_2f0->MXR).Property.MR.field_0x4;
        fVar3 = *(float *)&(local_2f0->MXR).Property.MR.field_0x8;
        dVar4 = *(double *)&(local_2f0->MXR).Property.MX.field_0x10;
        local_158 = local_158 & 0xf8;
        local_228._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_228._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_1a8 = &___7FChaosVDQueryFastData__6B_;
        local_228[8] = 0;
        local_228._16_4_ = -1;
        local_228._20_4_ = Invalid;
        local_228._24_4_ = 0;
        local_228._28_4_ = -1;
        local_1a0 = 0;
        local_150 = None;
        local_140 = 0;
        local_148 = &___7FChaosVDQueryHitData__6B_;
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
        uVar5 = *(undefined8 *)&(local_2f0->MXR).Property.MX.field_0x8;
        auVar11 = *(undefined1 (*) [12])&(local_2f0->MXR).Property.MX;
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
        dVar10 = (double)*(float *)&(local_2f0->MXR).Property.MR.field_0xc;
        bVar18 = FChaosVisualDebuggerTrace::IsTracing();
        if (bVar18) {
          local_228._56_4_ = SUB84(dVar10,0);
          local_228._48_8_ = (double)fVar3;
          local_228._60_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1e8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
          local_1e8.m128d_f64._0_12_ = auVar11;
          dStack_1d0 = 0.0;
          local_1c8.m128d_f64[1] = dVar15;
          local_1c8.m128d_f64[0] = dVar14;
          local_1b8 = dVar12;
          dStack_1b0 = dVar13;
          local_228._28_4_ = iVar17;
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
          local_1d8 = dVar4;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar20 = 2;
LAB_1441649d3:
          local_2b0[1] = *(TGeometryParticle<double,3> **)((longlong)FVar27 + lVar28);
          pFVar8 = this->HitBuffer;
          *(TGeometryParticle<double,3> **)&pFVar8->CurrentBlockingHit = local_2b0[0];
          *(TGeometryParticle<double,3> **)&(pFVar8->CurrentBlockingHit).field_0x8 = local_2b0[1];
          *(ulonglong *)&(pFVar8->CurrentBlockingHit).field_0x10 = CONCAT44(uStack_29c,local_2a0);
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x18 = dStack_298;
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x20 = dStack_290;
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x28 = dStack_288;
          *(ulonglong *)&(pFVar8->CurrentBlockingHit).field_0x30 = CONCAT44(uStack_27c,local_280);
          pFVar8->bHasBlockingHit = true;
LAB_144164a06:
          bVar18 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar18) {
            local_f8._s_0.X = dStack_298;
            local_f8._s_0.Y = dStack_290;
            local_f8._s_0.Z = dStack_288;
            local_150 = (EChaosVDCollisionQueryHitType)bVar20;
            local_140 = 1;
          }
          local_2f8 = this->bAnyHit == false;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_240 = local_2f4;
          local_248 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_248,puVar22);
          FChaosVDThreadContext::PopContext(pFVar23);
          return (bool)local_2f8;
        }
        bVar20 = (**(code **)((longlong)*this->QueryCallback + 0x20))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)((longlong)FVar27 + lVar28),pTVar16);
        if (bVar20 != 0) {
          if (((bVar20 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            local_2b0[1] = *(TGeometryParticle<double,3> **)((longlong)FVar27 + lVar28);
            ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::AddTouchingHit
                      (this->HitBuffer,(FOverlapHit *)local_2b0);
            goto LAB_144164a06;
          }
          goto LAB_1441649d3;
        }
        local_e0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_250 = &local_2f5;
        local_258 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_258,puVar22);
        FChaosVDThreadContext::PopContext(pFVar23);
        uVar26 = uVar26 + 1;
        lVar28 = lVar28 + 8;
        iVar25 = (local_2f0->MShapesArray).ArrayNum;
      } while ((int)uVar26 < iVar25);
    }
  }
  return (bool)local_2f8;
}

// Visit<2> @ 144164b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Visit<2>(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
          FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  undefined1 uVar17;
  byte bVar18;
  uint uVar19;
  uint *puVar20;
  FChaosVDThreadContext *pFVar21;
  FChaosVDContext *pFVar22;
  TVector<double,3> *pTVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar27;
  longlong *plVar28;
  longlong lVar29;
  undefined1 auStackY_358 [32];
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324 [4];
  longlong local_320;
  longlong *local_318;
  FChaosVDContext local_310;
  longlong local_2f0;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> local_2e8;
  code *local_2e0;
  undefined1 *local_2d8;
  code *local_2d0;
  undefined1 *local_2c8;
  code *local_2c0;
  undefined1 *local_2b8;
  code *local_2b0;
  undefined1 *local_2a8;
  TGeometryParticleHandleImp<double,3,1> *local_2a0 [2];
  undefined4 local_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined4 local_270;
  TGeometryParticle<double,3> *local_268;
  TGeometryParticleHandleImp<double,3,1> *pTStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  FChaosVDOptionalDataChannel *local_230;
  TReferenceControllerBase<1> *pTStack_228;
  undefined1 local_218 [64];
  __m128d local_1d8;
  double local_1c8;
  double dStack_1c0;
  __m128d local_1b8;
  double local_1a8;
  double dStack_1a0;
  undefined **local_198;
  undefined1 local_190;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  double dStack_158;
  double dStack_150;
  byte local_148;
  EChaosVDCollisionQueryHitType local_140;
  undefined **local_138;
  undefined1 local_130;
  float local_128;
  int local_124;
  ushort local_120;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  EChaosVDSQVisitRejectReason local_d0;
  int local_cc;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_258._0_4_ = (param_1->Payload).CachedUniqueIdx.Idx;
  local_258._4_4_ = (param_1->Payload).UnionQueryFilterData.Word0;
  uStack_250._0_4_ = (param_1->Payload).UnionQueryFilterData.Word1;
  uStack_250._4_4_ = (param_1->Payload).UnionQueryFilterData.Word2;
  pTVar6 = (param_1->Payload).GeometryParticleHandle;
  local_268 = (param_1->Payload).ExternalGeometryParticle;
  pTStack_260 = (param_1->Payload).GeometryParticleHandle;
  local_248 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  uStack_240._0_4_ = (param_1->Payload).UnionSimFilterData.Word1;
  uStack_240._4_4_ = (param_1->Payload).UnionSimFilterData.Word2;
  local_238 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  if (pTVar6 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1732238023615054426>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                        ,0x25a,"bGTData");
    if (bVar16) {
      pcVar9 = (code *)swi(3);
      uVar17 = (*pcVar9)();
      return (bool)uVar17;
    }
  }
  else {
    local_318 = &pTVar6->_padding_;
    local_2e8 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )Chaos::TGeometryParticlesImp<double,3,0>::ShapesArray
                            ((TGeometryParticlesImp<double,3,0> *)pTVar6->_padding_,
                             (int)pTVar6->_padding_);
    dVar15 = _UNK_150689688;
    dVar14 = ___xmm_3ff00000000000003ff0000000000000;
    dVar13 = _UNK_150689518;
    dVar12 = ___xmm_00000000000000003ff0000000000000;
    uVar26 = 0;
    local_290 = 0xffffffff;
    local_270 = 0xffffffff;
    local_278 = 0.0;
    local_288 = 0.0;
    dStack_280 = 0.0;
    iVar25 = *(int *)((longlong)local_2e8 + 0x10);
    if (0 < iVar25) {
      local_320 = 0;
      plVar28 = &pTVar6->_padding_;
      local_2a0[0] = pTVar6;
      do {
        FVar27 = local_2e8;
        uVar19 = 0;
        if ((int)uVar26 < iVar25) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          uVar17 = (*pcVar9)();
          return (bool)uVar17;
        }
        FVar7 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  *)((longlong)FVar27 + 8);
        if (FVar7 != (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                      )0x0) {
          FVar27 = FVar7;
        }
        puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2d8 = &local_327;
        local_2e0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar21 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2e0,puVar20);
        pFVar22 = FChaosVDThreadContext::GetCurrentContext(pFVar21);
        if (pFVar22 != (FChaosVDContext *)0x0) {
          local_310.OwnerID = pFVar22->OwnerID;
          local_310.Id = pFVar22->Id;
          local_310.Type = pFVar22->Type;
          local_310.Attributes = pFVar22->Attributes;
          local_230 = (pFVar22->CurrentDataChannel).Object;
          pTStack_228 = (pFVar22->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_228 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_228->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_228->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_310.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_310.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
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
                    (pTStack_228);
          puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2c8 = &local_326;
          local_2d0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar21 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2d0,puVar20);
          FChaosVDThreadContext::PushContext(pFVar21,&local_310);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_310.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        local_148 = local_148 & 0xf8;
        local_218._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_218._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_198 = &___7FChaosVDQueryFastData__6B_;
        local_218._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_138 = &___7FChaosVDQueryHitData__6B_;
        local_218[8] = 0;
        local_218._16_4_ = -1;
        local_218._20_4_ = Invalid;
        local_218._24_4_ = 0;
        local_218._28_4_ = -1;
        local_190 = 0;
        local_140 = None;
        local_130 = 0;
        local_128 = 0.0;
        local_124 = -1;
        local_120 = 0;
        local_d0 = None;
        local_218._56_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_218._48_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_1c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_cc = -1;
        local_1d8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0)
        ;
        local_1d8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1d8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_1a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1b8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0)
        ;
        local_1b8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1b8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        dStack_158 = 0.0;
        dStack_150 = 0.0;
        local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_170._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_170._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_170._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_118._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_118._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_118._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_100._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_100._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_100._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pTVar23 = Chaos::TParticles<double,3>::GetX
                            ((TParticles<double,3> *)pTVar6->_padding_,(uint)*plVar28);
        local_2f0 = pTVar6->_padding_;
        uVar19 = (uint)*local_318;
        lVar29 = (longlong)(int)uVar19;
        uVar24 = 0;
        if ((int)uVar19 < *(int *)(local_2f0 + 0x50)) {
          uVar24 = ~uVar19 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          uVar17 = (*pcVar9)();
          return (bool)uVar17;
        }
        uVar3 = *(undefined8 *)&pTVar23->field_0x8;
        auVar11 = *(undefined1 (*) [12])pTVar23;
        dVar4 = *(double *)&pTVar23->field_0x10;
        lVar8 = *(longlong *)(local_2f0 + 0x48);
        fVar1 = *(float *)(lVar8 + lVar29 * 0x10);
        fVar2 = *(float *)(lVar8 + 4 + lVar29 * 0x10);
        uVar5 = *(undefined8 *)(lVar8 + 8 + lVar29 * 0x10);
        dVar10 = (double)(float)((ulonglong)uVar5 >> 0x20);
        bVar16 = FChaosVisualDebuggerTrace::IsTracing();
        lVar29 = local_320;
        if (bVar16) {
          local_218._56_4_ = SUB84(dVar10,0);
          local_218._48_8_ = (double)(float)uVar5;
          local_218._60_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1d8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
          local_1d8.m128d_f64._0_12_ = auVar11;
          dStack_1c0 = 0.0;
          local_1b8.m128d_f64[1] = dVar15;
          local_1b8.m128d_f64[0] = dVar14;
          local_1a8 = dVar12;
          dStack_1a0 = dVar13;
          local_218._28_4_ = (int)local_258;
          local_218._24_4_ = uVar26;
          local_218._20_4_ = BroadPhase;
          if (param_2 != (FQueryFastData *)0x0) {
            pTVar23 = param_2->Dir;
            local_188._s_0.X = (double)*(undefined8 *)pTVar23;
            local_188._s_0.Y = (double)*(undefined8 *)&pTVar23->field_0x8;
            local_188._s_0.Z = (double)*(undefined8 *)&pTVar23->field_0x10;
            local_170._s_0.X = (double)*(undefined8 *)&param_2->InvDir;
            local_170._s_0.Y = (double)*(undefined8 *)&(param_2->InvDir).field_0x8;
            local_190 = 1;
            local_170._s_0.Z = (double)*(undefined8 *)&(param_2->InvDir).field_0x10;
            dStack_158 = param_2->CurrentLength;
            local_148 = ((param_2->bParallel[2] & 1U) * '\x02' | param_2->bParallel[1] & 1U) *
                        '\x02' | param_2->bParallel[0] & 1U | local_148 & 0xf8;
            dStack_150 = param_2->InvCurrentLength;
          }
          local_218[8] = 1;
          local_218._32_8_ = (double)fVar1;
          local_218._40_8_ = (double)fVar2;
          local_1c8 = dVar4;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar18 = 2;
LAB_14416511c:
          bVar16 = true;
LAB_14416511f:
          local_2a0[1] = *(TGeometryParticleHandleImp<double,3,1> **)((longlong)FVar27 + lVar29);
          ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::InsertHit
                    (this->HitBuffer,(FPTOverlapHit *)local_2a0,bVar16);
          bVar16 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar16) {
            local_e8._s_0.X = local_288;
            local_e8._s_0.Y = dStack_280;
            local_e8._s_0.Z = local_278;
            local_140 = (EChaosVDCollisionQueryHitType)bVar18;
            local_130 = 1;
          }
          bVar16 = this->bAnyHit;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_218);
          puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2a8 = local_324;
          local_2b0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar21 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b0,puVar20);
          FChaosVDThreadContext::PopContext(pFVar21);
          return bVar16 == false;
        }
        bVar18 = (**(code **)((longlong)*this->QueryCallback + 0x18))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)((longlong)FVar27 + local_320),pTVar6);
        if (bVar18 != 0) {
          if (((bVar18 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            bVar16 = false;
            goto LAB_14416511f;
          }
          goto LAB_14416511c;
        }
        local_d0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_218);
        puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2b8 = &local_325;
        local_2c0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar21 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2c0,puVar20);
        FChaosVDThreadContext::PopContext(pFVar21);
        local_320 = lVar29 + 8;
        uVar26 = uVar26 + 1;
        iVar25 = *(int *)((longlong)local_2e8 + 0x10);
        plVar28 = local_318;
      } while ((int)uVar26 < iVar25);
    }
  }
  return true;
}

// Visit<2> @ 144165240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Visit<2>(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
          FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  TVector<double,3> *pTVar7;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *pFVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TGeometryParticle<double,3> *pTVar16;
  int iVar17;
  bool bVar18;
  undefined1 uVar19;
  byte bVar20;
  uint uVar21;
  uint *puVar22;
  FChaosVDThreadContext *pFVar23;
  FChaosVDContext *pFVar24;
  int iVar25;
  uint uVar26;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar27;
  longlong lVar28;
  undefined1 auStack_328 [32];
  longlong local_308;
  longlong local_300;
  undefined1 local_2f8;
  undefined1 local_2f7;
  undefined1 local_2f6;
  undefined1 local_2f5;
  undefined1 local_2f4 [4];
  TGeometryParticle<double,3> *local_2f0;
  FChaosVDContext local_2e8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  TGeometryParticle<double,3> *local_2b0 [2];
  undefined4 local_2a0;
  undefined4 uStack_29c;
  double dStack_298;
  double dStack_290;
  double dStack_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  code *local_278;
  undefined1 *local_270;
  code *local_268;
  undefined1 *local_260;
  code *local_258;
  undefined1 *local_250;
  code *local_248;
  undefined1 *local_240;
  FChaosVDOptionalDataChannel *local_238;
  TReferenceControllerBase<1> *pTStack_230;
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
  
  dVar15 = _UNK_150689688;
  dVar14 = ___xmm_3ff00000000000003ff0000000000000;
  dVar13 = _UNK_150689518;
  dVar12 = ___xmm_00000000000000003ff0000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_328;
  local_2e8.CurrentDataChannel.Object =
       *(FChaosVDOptionalDataChannel **)&(param_1->Payload).CachedUniqueIdx;
  local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&(param_1->Payload).UnionQueryFilterData.Word1;
  local_2c8 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  uStack_2c0._0_4_ = (param_1->Payload).UnionSimFilterData.Word1;
  uStack_2c0._4_4_ = (param_1->Payload).UnionSimFilterData.Word2;
  local_2f8 = 1;
  local_2b8 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  local_2f0 = (param_1->Payload).ExternalGeometryParticle;
  if (local_2f0 == (TGeometryParticle<double,3> *)0x0) {
    local_2f8 = 1;
  }
  else {
    uVar26 = 0;
    local_2a0 = 0xffffffff;
    dStack_288 = 0.0;
    dStack_298 = 0.0;
    dStack_290 = 0.0;
    local_280 = 0xffffffff;
    iVar25 = (local_2f0->MShapesArray).ArrayNum;
    if (0 < iVar25) {
      iVar17 = (int)local_2e8.CurrentDataChannel.Object;
      lVar28 = 0;
      local_2b0[0] = local_2f0;
      do {
        pTVar16 = local_2f0;
        FVar27 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&local_2f0->MShapesArray;
        uVar21 = 0;
        if ((int)uVar26 < iVar25) {
          uVar21 = ~uVar26 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_300 = (longlong)iVar25;
          local_308 = (longlong)(int)uVar26;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar9 = (code *)swi(3);
            uVar19 = (*pcVar9)();
            return (bool)uVar19;
          }
        }
        FVar6 = (pTVar16->MShapesArray).AllocatorInstance.SecondaryData;
        if (FVar6 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar27 = FVar6;
        }
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_270 = &local_2f7;
        local_278 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_278,puVar22);
        pFVar24 = FChaosVDThreadContext::GetCurrentContext(pFVar23);
        if (pFVar24 != (FChaosVDContext *)0x0) {
          local_2e8.OwnerID = pFVar24->OwnerID;
          local_2e8.Id = pFVar24->Id;
          local_2e8.Type = pFVar24->Type;
          local_2e8.Attributes = pFVar24->Attributes;
          local_238 = (pFVar24->CurrentDataChannel).Object;
          pTStack_230 = (pFVar24->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_230 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_230->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_230->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_2e8.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
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
                    (pTStack_230);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_260 = &local_2f6;
          local_268 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_268,puVar22);
          FChaosVDThreadContext::PushContext(pFVar23,&local_2e8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        pTVar16 = local_2f0;
        fVar1 = *(float *)&(local_2f0->MXR).Property.MR;
        fVar2 = *(float *)&(local_2f0->MXR).Property.MR.field_0x4;
        fVar3 = *(float *)&(local_2f0->MXR).Property.MR.field_0x8;
        dVar4 = *(double *)&(local_2f0->MXR).Property.MX.field_0x10;
        local_158 = local_158 & 0xf8;
        local_228._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_228._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_1a8 = &___7FChaosVDQueryFastData__6B_;
        local_228[8] = 0;
        local_228._16_4_ = -1;
        local_228._20_4_ = Invalid;
        local_228._24_4_ = 0;
        local_228._28_4_ = -1;
        local_1a0 = 0;
        local_150 = None;
        local_140 = 0;
        local_148 = &___7FChaosVDQueryHitData__6B_;
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
        uVar5 = *(undefined8 *)&(local_2f0->MXR).Property.MX.field_0x8;
        auVar11 = *(undefined1 (*) [12])&(local_2f0->MXR).Property.MX;
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
        dVar10 = (double)*(float *)&(local_2f0->MXR).Property.MR.field_0xc;
        bVar18 = FChaosVisualDebuggerTrace::IsTracing();
        if (bVar18) {
          local_228._56_4_ = SUB84(dVar10,0);
          local_228._48_8_ = (double)fVar3;
          local_228._60_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1e8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
          local_1e8.m128d_f64._0_12_ = auVar11;
          dStack_1d0 = 0.0;
          local_1c8.m128d_f64[1] = dVar15;
          local_1c8.m128d_f64[0] = dVar14;
          local_1b8 = dVar12;
          dStack_1b0 = dVar13;
          local_228._28_4_ = iVar17;
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
          local_1d8 = dVar4;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar20 = 2;
LAB_144165793:
          local_2b0[1] = *(TGeometryParticle<double,3> **)((longlong)FVar27 + lVar28);
          pFVar8 = this->HitBuffer;
          *(TGeometryParticle<double,3> **)&pFVar8->CurrentBlockingHit = local_2b0[0];
          *(TGeometryParticle<double,3> **)&(pFVar8->CurrentBlockingHit).field_0x8 = local_2b0[1];
          *(ulonglong *)&(pFVar8->CurrentBlockingHit).field_0x10 = CONCAT44(uStack_29c,local_2a0);
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x18 = dStack_298;
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x20 = dStack_290;
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x28 = dStack_288;
          *(ulonglong *)&(pFVar8->CurrentBlockingHit).field_0x30 = CONCAT44(uStack_27c,local_280);
          pFVar8->bHasBlockingHit = true;
LAB_1441657c6:
          bVar18 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar18) {
            local_f8._s_0.X = dStack_298;
            local_f8._s_0.Y = dStack_290;
            local_f8._s_0.Z = dStack_288;
            local_150 = (EChaosVDCollisionQueryHitType)bVar20;
            local_140 = 1;
          }
          local_2f8 = this->bAnyHit == false;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_240 = local_2f4;
          local_248 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_248,puVar22);
          FChaosVDThreadContext::PopContext(pFVar23);
          return (bool)local_2f8;
        }
        bVar20 = (**(code **)((longlong)*this->QueryCallback + 0x20))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)((longlong)FVar27 + lVar28),pTVar16);
        if (bVar20 != 0) {
          if (((bVar20 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            local_2b0[1] = *(TGeometryParticle<double,3> **)((longlong)FVar27 + lVar28);
            ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::AddTouchingHit
                      (this->HitBuffer,(FOverlapHit *)local_2b0);
            goto LAB_1441657c6;
          }
          goto LAB_144165793;
        }
        local_e0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_250 = &local_2f5;
        local_258 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_258,puVar22);
        FChaosVDThreadContext::PopContext(pFVar23);
        uVar26 = uVar26 + 1;
        lVar28 = lVar28 + 8;
        iVar25 = (local_2f0->MShapesArray).ArrayNum;
      } while ((int)uVar26 < iVar25);
    }
  }
  return (bool)local_2f8;
}

// Visit<2> @ 1441658e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Visit<2>(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
          FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  undefined1 uVar17;
  byte bVar18;
  uint uVar19;
  uint *puVar20;
  FChaosVDThreadContext *pFVar21;
  FChaosVDContext *pFVar22;
  TVector<double,3> *pTVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar27;
  longlong *plVar28;
  longlong lVar29;
  undefined1 auStackY_358 [32];
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324 [4];
  longlong local_320;
  longlong *local_318;
  FChaosVDContext local_310;
  longlong local_2f0;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> local_2e8;
  code *local_2e0;
  undefined1 *local_2d8;
  code *local_2d0;
  undefined1 *local_2c8;
  code *local_2c0;
  undefined1 *local_2b8;
  code *local_2b0;
  undefined1 *local_2a8;
  TGeometryParticleHandleImp<double,3,1> *local_2a0 [2];
  undefined4 local_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined4 local_270;
  TGeometryParticle<double,3> *local_268;
  TGeometryParticleHandleImp<double,3,1> *pTStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  FChaosVDOptionalDataChannel *local_230;
  TReferenceControllerBase<1> *pTStack_228;
  undefined1 local_218 [64];
  __m128d local_1d8;
  double local_1c8;
  double dStack_1c0;
  __m128d local_1b8;
  double local_1a8;
  double dStack_1a0;
  undefined **local_198;
  undefined1 local_190;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  double dStack_158;
  double dStack_150;
  byte local_148;
  EChaosVDCollisionQueryHitType local_140;
  undefined **local_138;
  undefined1 local_130;
  float local_128;
  int local_124;
  ushort local_120;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  EChaosVDSQVisitRejectReason local_d0;
  int local_cc;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_258._0_4_ = (param_1->Payload).CachedUniqueIdx.Idx;
  local_258._4_4_ = (param_1->Payload).UnionQueryFilterData.Word0;
  uStack_250._0_4_ = (param_1->Payload).UnionQueryFilterData.Word1;
  uStack_250._4_4_ = (param_1->Payload).UnionQueryFilterData.Word2;
  pTVar6 = (param_1->Payload).GeometryParticleHandle;
  local_268 = (param_1->Payload).ExternalGeometryParticle;
  pTStack_260 = (param_1->Payload).GeometryParticleHandle;
  local_248 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  uStack_240._0_4_ = (param_1->Payload).UnionSimFilterData.Word1;
  uStack_240._4_4_ = (param_1->Payload).UnionSimFilterData.Word2;
  local_238 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  if (pTVar6 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1732238023615054426>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                        ,0x25a,"bGTData");
    if (bVar16) {
      pcVar9 = (code *)swi(3);
      uVar17 = (*pcVar9)();
      return (bool)uVar17;
    }
  }
  else {
    local_318 = &pTVar6->_padding_;
    local_2e8 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )Chaos::TGeometryParticlesImp<double,3,0>::ShapesArray
                            ((TGeometryParticlesImp<double,3,0> *)pTVar6->_padding_,
                             (int)pTVar6->_padding_);
    dVar15 = _UNK_150689688;
    dVar14 = ___xmm_3ff00000000000003ff0000000000000;
    dVar13 = _UNK_150689518;
    dVar12 = ___xmm_00000000000000003ff0000000000000;
    uVar26 = 0;
    local_290 = 0xffffffff;
    local_270 = 0xffffffff;
    local_278 = 0.0;
    local_288 = 0.0;
    dStack_280 = 0.0;
    iVar25 = *(int *)((longlong)local_2e8 + 0x10);
    if (0 < iVar25) {
      local_320 = 0;
      plVar28 = &pTVar6->_padding_;
      local_2a0[0] = pTVar6;
      do {
        FVar27 = local_2e8;
        uVar19 = 0;
        if ((int)uVar26 < iVar25) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          uVar17 = (*pcVar9)();
          return (bool)uVar17;
        }
        FVar7 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  *)((longlong)FVar27 + 8);
        if (FVar7 != (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                      )0x0) {
          FVar27 = FVar7;
        }
        puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2d8 = &local_327;
        local_2e0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar21 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2e0,puVar20);
        pFVar22 = FChaosVDThreadContext::GetCurrentContext(pFVar21);
        if (pFVar22 != (FChaosVDContext *)0x0) {
          local_310.OwnerID = pFVar22->OwnerID;
          local_310.Id = pFVar22->Id;
          local_310.Type = pFVar22->Type;
          local_310.Attributes = pFVar22->Attributes;
          local_230 = (pFVar22->CurrentDataChannel).Object;
          pTStack_228 = (pFVar22->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_228 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_228->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_228->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_310.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_310.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
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
                    (pTStack_228);
          puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2c8 = &local_326;
          local_2d0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar21 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2d0,puVar20);
          FChaosVDThreadContext::PushContext(pFVar21,&local_310);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_310.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        local_148 = local_148 & 0xf8;
        local_218._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_218._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_198 = &___7FChaosVDQueryFastData__6B_;
        local_218._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_138 = &___7FChaosVDQueryHitData__6B_;
        local_218[8] = 0;
        local_218._16_4_ = -1;
        local_218._20_4_ = Invalid;
        local_218._24_4_ = 0;
        local_218._28_4_ = -1;
        local_190 = 0;
        local_140 = None;
        local_130 = 0;
        local_128 = 0.0;
        local_124 = -1;
        local_120 = 0;
        local_d0 = None;
        local_218._56_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_218._48_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_1c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_cc = -1;
        local_1d8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0)
        ;
        local_1d8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1d8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_1a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1b8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0)
        ;
        local_1b8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1b8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        dStack_158 = 0.0;
        dStack_150 = 0.0;
        local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_170._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_170._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_170._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_118._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_118._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_118._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_100._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_100._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_100._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pTVar23 = Chaos::TParticles<double,3>::GetX
                            ((TParticles<double,3> *)pTVar6->_padding_,(uint)*plVar28);
        local_2f0 = pTVar6->_padding_;
        uVar19 = (uint)*local_318;
        lVar29 = (longlong)(int)uVar19;
        uVar24 = 0;
        if ((int)uVar19 < *(int *)(local_2f0 + 0x50)) {
          uVar24 = ~uVar19 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          uVar17 = (*pcVar9)();
          return (bool)uVar17;
        }
        uVar3 = *(undefined8 *)&pTVar23->field_0x8;
        auVar11 = *(undefined1 (*) [12])pTVar23;
        dVar4 = *(double *)&pTVar23->field_0x10;
        lVar8 = *(longlong *)(local_2f0 + 0x48);
        fVar1 = *(float *)(lVar8 + lVar29 * 0x10);
        fVar2 = *(float *)(lVar8 + 4 + lVar29 * 0x10);
        uVar5 = *(undefined8 *)(lVar8 + 8 + lVar29 * 0x10);
        dVar10 = (double)(float)((ulonglong)uVar5 >> 0x20);
        bVar16 = FChaosVisualDebuggerTrace::IsTracing();
        lVar29 = local_320;
        if (bVar16) {
          local_218._56_4_ = SUB84(dVar10,0);
          local_218._48_8_ = (double)(float)uVar5;
          local_218._60_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1d8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
          local_1d8.m128d_f64._0_12_ = auVar11;
          dStack_1c0 = 0.0;
          local_1b8.m128d_f64[1] = dVar15;
          local_1b8.m128d_f64[0] = dVar14;
          local_1a8 = dVar12;
          dStack_1a0 = dVar13;
          local_218._28_4_ = (int)local_258;
          local_218._24_4_ = uVar26;
          local_218._20_4_ = BroadPhase;
          if (param_2 != (FQueryFastData *)0x0) {
            pTVar23 = param_2->Dir;
            local_188._s_0.X = (double)*(undefined8 *)pTVar23;
            local_188._s_0.Y = (double)*(undefined8 *)&pTVar23->field_0x8;
            local_188._s_0.Z = (double)*(undefined8 *)&pTVar23->field_0x10;
            local_170._s_0.X = (double)*(undefined8 *)&param_2->InvDir;
            local_170._s_0.Y = (double)*(undefined8 *)&(param_2->InvDir).field_0x8;
            local_190 = 1;
            local_170._s_0.Z = (double)*(undefined8 *)&(param_2->InvDir).field_0x10;
            dStack_158 = param_2->CurrentLength;
            local_148 = ((param_2->bParallel[2] & 1U) * '\x02' | param_2->bParallel[1] & 1U) *
                        '\x02' | param_2->bParallel[0] & 1U | local_148 & 0xf8;
            dStack_150 = param_2->InvCurrentLength;
          }
          local_218[8] = 1;
          local_218._32_8_ = (double)fVar1;
          local_218._40_8_ = (double)fVar2;
          local_1c8 = dVar4;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar18 = 2;
LAB_144165edc:
          bVar16 = true;
LAB_144165edf:
          local_2a0[1] = *(TGeometryParticleHandleImp<double,3,1> **)((longlong)FVar27 + lVar29);
          ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::InsertHit
                    (this->HitBuffer,(FPTOverlapHit *)local_2a0,bVar16);
          bVar16 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar16) {
            local_e8._s_0.X = local_288;
            local_e8._s_0.Y = dStack_280;
            local_e8._s_0.Z = local_278;
            local_140 = (EChaosVDCollisionQueryHitType)bVar18;
            local_130 = 1;
          }
          bVar16 = this->bAnyHit;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_218);
          puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2a8 = local_324;
          local_2b0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar21 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b0,puVar20);
          FChaosVDThreadContext::PopContext(pFVar21);
          return bVar16 == false;
        }
        bVar18 = (**(code **)((longlong)*this->QueryCallback + 0x18))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)((longlong)FVar27 + local_320),pTVar6);
        if (bVar18 != 0) {
          if (((bVar18 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            bVar16 = false;
            goto LAB_144165edf;
          }
          goto LAB_144165edc;
        }
        local_d0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_218);
        puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2b8 = &local_325;
        local_2c0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar21 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2c0,puVar20);
        FChaosVDThreadContext::PopContext(pFVar21);
        local_320 = lVar29 + 8;
        uVar26 = uVar26 + 1;
        iVar25 = *(int *)((longlong)local_2e8 + 0x10);
        plVar28 = local_318;
      } while ((int)uVar26 < iVar25);
    }
  }
  return true;
}

// Visit<2> @ 144166000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Visit<2>(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
          FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  TVector<double,3> *pTVar7;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *pFVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TGeometryParticle<double,3> *pTVar16;
  int iVar17;
  bool bVar18;
  undefined1 uVar19;
  byte bVar20;
  uint uVar21;
  uint *puVar22;
  FChaosVDThreadContext *pFVar23;
  FChaosVDContext *pFVar24;
  int iVar25;
  uint uVar26;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar27;
  longlong lVar28;
  undefined1 auStack_328 [32];
  longlong local_308;
  longlong local_300;
  undefined1 local_2f8;
  undefined1 local_2f7;
  undefined1 local_2f6;
  undefined1 local_2f5;
  undefined1 local_2f4 [4];
  TGeometryParticle<double,3> *local_2f0;
  FChaosVDContext local_2e8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  TGeometryParticle<double,3> *local_2b0 [2];
  undefined4 local_2a0;
  undefined4 uStack_29c;
  double dStack_298;
  double dStack_290;
  double dStack_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  code *local_278;
  undefined1 *local_270;
  code *local_268;
  undefined1 *local_260;
  code *local_258;
  undefined1 *local_250;
  code *local_248;
  undefined1 *local_240;
  FChaosVDOptionalDataChannel *local_238;
  TReferenceControllerBase<1> *pTStack_230;
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
  
  dVar15 = _UNK_150689688;
  dVar14 = ___xmm_3ff00000000000003ff0000000000000;
  dVar13 = _UNK_150689518;
  dVar12 = ___xmm_00000000000000003ff0000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_328;
  local_2e8.CurrentDataChannel.Object =
       *(FChaosVDOptionalDataChannel **)&(param_1->Payload).CachedUniqueIdx;
  local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&(param_1->Payload).UnionQueryFilterData.Word1;
  local_2c8 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  uStack_2c0._0_4_ = (param_1->Payload).UnionSimFilterData.Word1;
  uStack_2c0._4_4_ = (param_1->Payload).UnionSimFilterData.Word2;
  local_2f8 = 1;
  local_2b8 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  local_2f0 = (param_1->Payload).ExternalGeometryParticle;
  if (local_2f0 == (TGeometryParticle<double,3> *)0x0) {
    local_2f8 = 1;
  }
  else {
    uVar26 = 0;
    local_2a0 = 0xffffffff;
    dStack_288 = 0.0;
    dStack_298 = 0.0;
    dStack_290 = 0.0;
    local_280 = 0xffffffff;
    iVar25 = (local_2f0->MShapesArray).ArrayNum;
    if (0 < iVar25) {
      iVar17 = (int)local_2e8.CurrentDataChannel.Object;
      lVar28 = 0;
      local_2b0[0] = local_2f0;
      do {
        pTVar16 = local_2f0;
        FVar27 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&local_2f0->MShapesArray;
        uVar21 = 0;
        if ((int)uVar26 < iVar25) {
          uVar21 = ~uVar26 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_300 = (longlong)iVar25;
          local_308 = (longlong)(int)uVar26;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar9 = (code *)swi(3);
            uVar19 = (*pcVar9)();
            return (bool)uVar19;
          }
        }
        FVar6 = (pTVar16->MShapesArray).AllocatorInstance.SecondaryData;
        if (FVar6 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar27 = FVar6;
        }
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_270 = &local_2f7;
        local_278 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_278,puVar22);
        pFVar24 = FChaosVDThreadContext::GetCurrentContext(pFVar23);
        if (pFVar24 != (FChaosVDContext *)0x0) {
          local_2e8.OwnerID = pFVar24->OwnerID;
          local_2e8.Id = pFVar24->Id;
          local_2e8.Type = pFVar24->Type;
          local_2e8.Attributes = pFVar24->Attributes;
          local_238 = (pFVar24->CurrentDataChannel).Object;
          pTStack_230 = (pFVar24->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_230 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_230->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_230->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_2e8.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
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
                    (pTStack_230);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_260 = &local_2f6;
          local_268 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_268,puVar22);
          FChaosVDThreadContext::PushContext(pFVar23,&local_2e8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        pTVar16 = local_2f0;
        fVar1 = *(float *)&(local_2f0->MXR).Property.MR;
        fVar2 = *(float *)&(local_2f0->MXR).Property.MR.field_0x4;
        fVar3 = *(float *)&(local_2f0->MXR).Property.MR.field_0x8;
        dVar4 = *(double *)&(local_2f0->MXR).Property.MX.field_0x10;
        local_158 = local_158 & 0xf8;
        local_228._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_228._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_1a8 = &___7FChaosVDQueryFastData__6B_;
        local_228[8] = 0;
        local_228._16_4_ = -1;
        local_228._20_4_ = Invalid;
        local_228._24_4_ = 0;
        local_228._28_4_ = -1;
        local_1a0 = 0;
        local_150 = None;
        local_140 = 0;
        local_148 = &___7FChaosVDQueryHitData__6B_;
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
        uVar5 = *(undefined8 *)&(local_2f0->MXR).Property.MX.field_0x8;
        auVar11 = *(undefined1 (*) [12])&(local_2f0->MXR).Property.MX;
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
        dVar10 = (double)*(float *)&(local_2f0->MXR).Property.MR.field_0xc;
        bVar18 = FChaosVisualDebuggerTrace::IsTracing();
        if (bVar18) {
          local_228._56_4_ = SUB84(dVar10,0);
          local_228._48_8_ = (double)fVar3;
          local_228._60_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1e8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
          local_1e8.m128d_f64._0_12_ = auVar11;
          dStack_1d0 = 0.0;
          local_1c8.m128d_f64[1] = dVar15;
          local_1c8.m128d_f64[0] = dVar14;
          local_1b8 = dVar12;
          dStack_1b0 = dVar13;
          local_228._28_4_ = iVar17;
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
          local_1d8 = dVar4;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar20 = 2;
LAB_144166553:
          local_2b0[1] = *(TGeometryParticle<double,3> **)((longlong)FVar27 + lVar28);
          pFVar8 = this->HitBuffer;
          *(TGeometryParticle<double,3> **)&pFVar8->CurrentBlockingHit = local_2b0[0];
          *(TGeometryParticle<double,3> **)&(pFVar8->CurrentBlockingHit).field_0x8 = local_2b0[1];
          *(ulonglong *)&(pFVar8->CurrentBlockingHit).field_0x10 = CONCAT44(uStack_29c,local_2a0);
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x18 = dStack_298;
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x20 = dStack_290;
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x28 = dStack_288;
          *(ulonglong *)&(pFVar8->CurrentBlockingHit).field_0x30 = CONCAT44(uStack_27c,local_280);
          pFVar8->bHasBlockingHit = true;
LAB_144166586:
          bVar18 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar18) {
            local_f8._s_0.X = dStack_298;
            local_f8._s_0.Y = dStack_290;
            local_f8._s_0.Z = dStack_288;
            local_150 = (EChaosVDCollisionQueryHitType)bVar20;
            local_140 = 1;
          }
          local_2f8 = this->bAnyHit == false;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_240 = local_2f4;
          local_248 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_248,puVar22);
          FChaosVDThreadContext::PopContext(pFVar23);
          return (bool)local_2f8;
        }
        bVar20 = (**(code **)((longlong)*this->QueryCallback + 0x20))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)((longlong)FVar27 + lVar28),pTVar16);
        if (bVar20 != 0) {
          if (((bVar20 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            local_2b0[1] = *(TGeometryParticle<double,3> **)((longlong)FVar27 + lVar28);
            ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::AddTouchingHit
                      (this->HitBuffer,(FOverlapHit *)local_2b0);
            goto LAB_144166586;
          }
          goto LAB_144166553;
        }
        local_e0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_250 = &local_2f5;
        local_258 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_258,puVar22);
        FChaosVDThreadContext::PopContext(pFVar23);
        uVar26 = uVar26 + 1;
        lVar28 = lVar28 + 8;
        iVar25 = (local_2f0->MShapesArray).ArrayNum;
      } while ((int)uVar26 < iVar25);
    }
  }
  return (bool)local_2f8;
}

// Visit<2> @ 1441666a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Visit<2>(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
          FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  undefined1 uVar17;
  byte bVar18;
  uint uVar19;
  uint *puVar20;
  FChaosVDThreadContext *pFVar21;
  FChaosVDContext *pFVar22;
  TVector<double,3> *pTVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar27;
  longlong *plVar28;
  longlong lVar29;
  undefined1 auStackY_358 [32];
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324 [4];
  longlong local_320;
  longlong *local_318;
  FChaosVDContext local_310;
  longlong local_2f0;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> local_2e8;
  code *local_2e0;
  undefined1 *local_2d8;
  code *local_2d0;
  undefined1 *local_2c8;
  code *local_2c0;
  undefined1 *local_2b8;
  code *local_2b0;
  undefined1 *local_2a8;
  TGeometryParticleHandleImp<double,3,1> *local_2a0 [2];
  undefined4 local_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined4 local_270;
  TGeometryParticle<double,3> *local_268;
  TGeometryParticleHandleImp<double,3,1> *pTStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  FChaosVDOptionalDataChannel *local_230;
  TReferenceControllerBase<1> *pTStack_228;
  undefined1 local_218 [64];
  __m128d local_1d8;
  double local_1c8;
  double dStack_1c0;
  __m128d local_1b8;
  double local_1a8;
  double dStack_1a0;
  undefined **local_198;
  undefined1 local_190;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  double dStack_158;
  double dStack_150;
  byte local_148;
  EChaosVDCollisionQueryHitType local_140;
  undefined **local_138;
  undefined1 local_130;
  float local_128;
  int local_124;
  ushort local_120;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  EChaosVDSQVisitRejectReason local_d0;
  int local_cc;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_258._0_4_ = (param_1->Payload).CachedUniqueIdx.Idx;
  local_258._4_4_ = (param_1->Payload).UnionQueryFilterData.Word0;
  uStack_250._0_4_ = (param_1->Payload).UnionQueryFilterData.Word1;
  uStack_250._4_4_ = (param_1->Payload).UnionQueryFilterData.Word2;
  pTVar6 = (param_1->Payload).GeometryParticleHandle;
  local_268 = (param_1->Payload).ExternalGeometryParticle;
  pTStack_260 = (param_1->Payload).GeometryParticleHandle;
  local_248 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  uStack_240._0_4_ = (param_1->Payload).UnionSimFilterData.Word1;
  uStack_240._4_4_ = (param_1->Payload).UnionSimFilterData.Word2;
  local_238 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  if (pTVar6 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1732238023615054426>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                        ,0x25a,"bGTData");
    if (bVar16) {
      pcVar9 = (code *)swi(3);
      uVar17 = (*pcVar9)();
      return (bool)uVar17;
    }
  }
  else {
    local_318 = &pTVar6->_padding_;
    local_2e8 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )Chaos::TGeometryParticlesImp<double,3,0>::ShapesArray
                            ((TGeometryParticlesImp<double,3,0> *)pTVar6->_padding_,
                             (int)pTVar6->_padding_);
    dVar15 = _UNK_150689688;
    dVar14 = ___xmm_3ff00000000000003ff0000000000000;
    dVar13 = _UNK_150689518;
    dVar12 = ___xmm_00000000000000003ff0000000000000;
    uVar26 = 0;
    local_290 = 0xffffffff;
    local_270 = 0xffffffff;
    local_278 = 0.0;
    local_288 = 0.0;
    dStack_280 = 0.0;
    iVar25 = *(int *)((longlong)local_2e8 + 0x10);
    if (0 < iVar25) {
      local_320 = 0;
      plVar28 = &pTVar6->_padding_;
      local_2a0[0] = pTVar6;
      do {
        FVar27 = local_2e8;
        uVar19 = 0;
        if ((int)uVar26 < iVar25) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          uVar17 = (*pcVar9)();
          return (bool)uVar17;
        }
        FVar7 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  *)((longlong)FVar27 + 8);
        if (FVar7 != (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                      )0x0) {
          FVar27 = FVar7;
        }
        puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2d8 = &local_327;
        local_2e0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar21 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2e0,puVar20);
        pFVar22 = FChaosVDThreadContext::GetCurrentContext(pFVar21);
        if (pFVar22 != (FChaosVDContext *)0x0) {
          local_310.OwnerID = pFVar22->OwnerID;
          local_310.Id = pFVar22->Id;
          local_310.Type = pFVar22->Type;
          local_310.Attributes = pFVar22->Attributes;
          local_230 = (pFVar22->CurrentDataChannel).Object;
          pTStack_228 = (pFVar22->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_228 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_228->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_228->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_310.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_310.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
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
                    (pTStack_228);
          puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2c8 = &local_326;
          local_2d0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar21 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2d0,puVar20);
          FChaosVDThreadContext::PushContext(pFVar21,&local_310);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_310.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        local_148 = local_148 & 0xf8;
        local_218._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_218._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_198 = &___7FChaosVDQueryFastData__6B_;
        local_218._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_138 = &___7FChaosVDQueryHitData__6B_;
        local_218[8] = 0;
        local_218._16_4_ = -1;
        local_218._20_4_ = Invalid;
        local_218._24_4_ = 0;
        local_218._28_4_ = -1;
        local_190 = 0;
        local_140 = None;
        local_130 = 0;
        local_128 = 0.0;
        local_124 = -1;
        local_120 = 0;
        local_d0 = None;
        local_218._56_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_218._48_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_1c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_cc = -1;
        local_1d8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0)
        ;
        local_1d8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1d8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_1a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1b8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0)
        ;
        local_1b8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1b8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        dStack_158 = 0.0;
        dStack_150 = 0.0;
        local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_170._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_170._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_170._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_118._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_118._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_118._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_100._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_100._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_100._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pTVar23 = Chaos::TParticles<double,3>::GetX
                            ((TParticles<double,3> *)pTVar6->_padding_,(uint)*plVar28);
        local_2f0 = pTVar6->_padding_;
        uVar19 = (uint)*local_318;
        lVar29 = (longlong)(int)uVar19;
        uVar24 = 0;
        if ((int)uVar19 < *(int *)(local_2f0 + 0x50)) {
          uVar24 = ~uVar19 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          uVar17 = (*pcVar9)();
          return (bool)uVar17;
        }
        uVar3 = *(undefined8 *)&pTVar23->field_0x8;
        auVar11 = *(undefined1 (*) [12])pTVar23;
        dVar4 = *(double *)&pTVar23->field_0x10;
        lVar8 = *(longlong *)(local_2f0 + 0x48);
        fVar1 = *(float *)(lVar8 + lVar29 * 0x10);
        fVar2 = *(float *)(lVar8 + 4 + lVar29 * 0x10);
        uVar5 = *(undefined8 *)(lVar8 + 8 + lVar29 * 0x10);
        dVar10 = (double)(float)((ulonglong)uVar5 >> 0x20);
        bVar16 = FChaosVisualDebuggerTrace::IsTracing();
        lVar29 = local_320;
        if (bVar16) {
          local_218._56_4_ = SUB84(dVar10,0);
          local_218._48_8_ = (double)(float)uVar5;
          local_218._60_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1d8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
          local_1d8.m128d_f64._0_12_ = auVar11;
          dStack_1c0 = 0.0;
          local_1b8.m128d_f64[1] = dVar15;
          local_1b8.m128d_f64[0] = dVar14;
          local_1a8 = dVar12;
          dStack_1a0 = dVar13;
          local_218._28_4_ = (int)local_258;
          local_218._24_4_ = uVar26;
          local_218._20_4_ = BroadPhase;
          if (param_2 != (FQueryFastData *)0x0) {
            pTVar23 = param_2->Dir;
            local_188._s_0.X = (double)*(undefined8 *)pTVar23;
            local_188._s_0.Y = (double)*(undefined8 *)&pTVar23->field_0x8;
            local_188._s_0.Z = (double)*(undefined8 *)&pTVar23->field_0x10;
            local_170._s_0.X = (double)*(undefined8 *)&param_2->InvDir;
            local_170._s_0.Y = (double)*(undefined8 *)&(param_2->InvDir).field_0x8;
            local_190 = 1;
            local_170._s_0.Z = (double)*(undefined8 *)&(param_2->InvDir).field_0x10;
            dStack_158 = param_2->CurrentLength;
            local_148 = ((param_2->bParallel[2] & 1U) * '\x02' | param_2->bParallel[1] & 1U) *
                        '\x02' | param_2->bParallel[0] & 1U | local_148 & 0xf8;
            dStack_150 = param_2->InvCurrentLength;
          }
          local_218[8] = 1;
          local_218._32_8_ = (double)fVar1;
          local_218._40_8_ = (double)fVar2;
          local_1c8 = dVar4;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar18 = 2;
LAB_144166c9c:
          bVar16 = true;
LAB_144166c9f:
          local_2a0[1] = *(TGeometryParticleHandleImp<double,3,1> **)((longlong)FVar27 + lVar29);
          ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::InsertHit
                    (this->HitBuffer,(FPTOverlapHit *)local_2a0,bVar16);
          bVar16 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar16) {
            local_e8._s_0.X = local_288;
            local_e8._s_0.Y = dStack_280;
            local_e8._s_0.Z = local_278;
            local_140 = (EChaosVDCollisionQueryHitType)bVar18;
            local_130 = 1;
          }
          bVar16 = this->bAnyHit;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_218);
          puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2a8 = local_324;
          local_2b0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar21 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b0,puVar20);
          FChaosVDThreadContext::PopContext(pFVar21);
          return bVar16 == false;
        }
        bVar18 = (**(code **)((longlong)*this->QueryCallback + 0x18))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)((longlong)FVar27 + local_320),pTVar6);
        if (bVar18 != 0) {
          if (((bVar18 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            bVar16 = false;
            goto LAB_144166c9f;
          }
          goto LAB_144166c9c;
        }
        local_d0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_218);
        puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2b8 = &local_325;
        local_2c0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar21 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2c0,puVar20);
        FChaosVDThreadContext::PopContext(pFVar21);
        local_320 = lVar29 + 8;
        uVar26 = uVar26 + 1;
        iVar25 = *(int *)((longlong)local_2e8 + 0x10);
        plVar28 = local_318;
      } while ((int)uVar26 < iVar25);
    }
  }
  return true;
}

// Visit<2> @ 144166dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Visit<2>(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
          FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  TVector<double,3> *pTVar7;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *pFVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TGeometryParticle<double,3> *pTVar16;
  int iVar17;
  bool bVar18;
  undefined1 uVar19;
  byte bVar20;
  uint uVar21;
  uint *puVar22;
  FChaosVDThreadContext *pFVar23;
  FChaosVDContext *pFVar24;
  int iVar25;
  uint uVar26;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar27;
  longlong lVar28;
  undefined1 auStack_328 [32];
  longlong local_308;
  longlong local_300;
  undefined1 local_2f8;
  undefined1 local_2f7;
  undefined1 local_2f6;
  undefined1 local_2f5;
  undefined1 local_2f4 [4];
  TGeometryParticle<double,3> *local_2f0;
  FChaosVDContext local_2e8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  TGeometryParticle<double,3> *local_2b0 [2];
  undefined4 local_2a0;
  undefined4 uStack_29c;
  double dStack_298;
  double dStack_290;
  double dStack_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  code *local_278;
  undefined1 *local_270;
  code *local_268;
  undefined1 *local_260;
  code *local_258;
  undefined1 *local_250;
  code *local_248;
  undefined1 *local_240;
  FChaosVDOptionalDataChannel *local_238;
  TReferenceControllerBase<1> *pTStack_230;
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
  
  dVar15 = _UNK_150689688;
  dVar14 = ___xmm_3ff00000000000003ff0000000000000;
  dVar13 = _UNK_150689518;
  dVar12 = ___xmm_00000000000000003ff0000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_328;
  local_2e8.CurrentDataChannel.Object =
       *(FChaosVDOptionalDataChannel **)&(param_1->Payload).CachedUniqueIdx;
  local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&(param_1->Payload).UnionQueryFilterData.Word1;
  local_2c8 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  uStack_2c0._0_4_ = (param_1->Payload).UnionSimFilterData.Word1;
  uStack_2c0._4_4_ = (param_1->Payload).UnionSimFilterData.Word2;
  local_2f8 = 1;
  local_2b8 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  local_2f0 = (param_1->Payload).ExternalGeometryParticle;
  if (local_2f0 == (TGeometryParticle<double,3> *)0x0) {
    local_2f8 = 1;
  }
  else {
    uVar26 = 0;
    local_2a0 = 0xffffffff;
    dStack_288 = 0.0;
    dStack_298 = 0.0;
    dStack_290 = 0.0;
    local_280 = 0xffffffff;
    iVar25 = (local_2f0->MShapesArray).ArrayNum;
    if (0 < iVar25) {
      iVar17 = (int)local_2e8.CurrentDataChannel.Object;
      lVar28 = 0;
      local_2b0[0] = local_2f0;
      do {
        pTVar16 = local_2f0;
        FVar27 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&local_2f0->MShapesArray;
        uVar21 = 0;
        if ((int)uVar26 < iVar25) {
          uVar21 = ~uVar26 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_300 = (longlong)iVar25;
          local_308 = (longlong)(int)uVar26;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar9 = (code *)swi(3);
            uVar19 = (*pcVar9)();
            return (bool)uVar19;
          }
        }
        FVar6 = (pTVar16->MShapesArray).AllocatorInstance.SecondaryData;
        if (FVar6 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar27 = FVar6;
        }
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_270 = &local_2f7;
        local_278 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_278,puVar22);
        pFVar24 = FChaosVDThreadContext::GetCurrentContext(pFVar23);
        if (pFVar24 != (FChaosVDContext *)0x0) {
          local_2e8.OwnerID = pFVar24->OwnerID;
          local_2e8.Id = pFVar24->Id;
          local_2e8.Type = pFVar24->Type;
          local_2e8.Attributes = pFVar24->Attributes;
          local_238 = (pFVar24->CurrentDataChannel).Object;
          pTStack_230 = (pFVar24->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_230 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_230->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_230->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_2e8.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
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
                    (pTStack_230);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_260 = &local_2f6;
          local_268 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_268,puVar22);
          FChaosVDThreadContext::PushContext(pFVar23,&local_2e8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        pTVar16 = local_2f0;
        fVar1 = *(float *)&(local_2f0->MXR).Property.MR;
        fVar2 = *(float *)&(local_2f0->MXR).Property.MR.field_0x4;
        fVar3 = *(float *)&(local_2f0->MXR).Property.MR.field_0x8;
        dVar4 = *(double *)&(local_2f0->MXR).Property.MX.field_0x10;
        local_158 = local_158 & 0xf8;
        local_228._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_228._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_1a8 = &___7FChaosVDQueryFastData__6B_;
        local_228[8] = 0;
        local_228._16_4_ = -1;
        local_228._20_4_ = Invalid;
        local_228._24_4_ = 0;
        local_228._28_4_ = -1;
        local_1a0 = 0;
        local_150 = None;
        local_140 = 0;
        local_148 = &___7FChaosVDQueryHitData__6B_;
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
        uVar5 = *(undefined8 *)&(local_2f0->MXR).Property.MX.field_0x8;
        auVar11 = *(undefined1 (*) [12])&(local_2f0->MXR).Property.MX;
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
        dVar10 = (double)*(float *)&(local_2f0->MXR).Property.MR.field_0xc;
        bVar18 = FChaosVisualDebuggerTrace::IsTracing();
        if (bVar18) {
          local_228._56_4_ = SUB84(dVar10,0);
          local_228._48_8_ = (double)fVar3;
          local_228._60_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1e8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
          local_1e8.m128d_f64._0_12_ = auVar11;
          dStack_1d0 = 0.0;
          local_1c8.m128d_f64[1] = dVar15;
          local_1c8.m128d_f64[0] = dVar14;
          local_1b8 = dVar12;
          dStack_1b0 = dVar13;
          local_228._28_4_ = iVar17;
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
          local_1d8 = dVar4;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar20 = 2;
LAB_144167313:
          local_2b0[1] = *(TGeometryParticle<double,3> **)((longlong)FVar27 + lVar28);
          pFVar8 = this->HitBuffer;
          *(TGeometryParticle<double,3> **)&pFVar8->CurrentBlockingHit = local_2b0[0];
          *(TGeometryParticle<double,3> **)&(pFVar8->CurrentBlockingHit).field_0x8 = local_2b0[1];
          *(ulonglong *)&(pFVar8->CurrentBlockingHit).field_0x10 = CONCAT44(uStack_29c,local_2a0);
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x18 = dStack_298;
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x20 = dStack_290;
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x28 = dStack_288;
          *(ulonglong *)&(pFVar8->CurrentBlockingHit).field_0x30 = CONCAT44(uStack_27c,local_280);
          pFVar8->bHasBlockingHit = true;
LAB_144167346:
          bVar18 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar18) {
            local_f8._s_0.X = dStack_298;
            local_f8._s_0.Y = dStack_290;
            local_f8._s_0.Z = dStack_288;
            local_150 = (EChaosVDCollisionQueryHitType)bVar20;
            local_140 = 1;
          }
          local_2f8 = this->bAnyHit == false;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_240 = local_2f4;
          local_248 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_248,puVar22);
          FChaosVDThreadContext::PopContext(pFVar23);
          return (bool)local_2f8;
        }
        bVar20 = (**(code **)((longlong)*this->QueryCallback + 0x20))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)((longlong)FVar27 + lVar28),pTVar16);
        if (bVar20 != 0) {
          if (((bVar20 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            local_2b0[1] = *(TGeometryParticle<double,3> **)((longlong)FVar27 + lVar28);
            ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::AddTouchingHit
                      (this->HitBuffer,(FOverlapHit *)local_2b0);
            goto LAB_144167346;
          }
          goto LAB_144167313;
        }
        local_e0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_250 = &local_2f5;
        local_258 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_258,puVar22);
        FChaosVDThreadContext::PopContext(pFVar23);
        uVar26 = uVar26 + 1;
        lVar28 = lVar28 + 8;
        iVar25 = (local_2f0->MShapesArray).ArrayNum;
      } while ((int)uVar26 < iVar25);
    }
  }
  return (bool)local_2f8;
}

// Visit<2> @ 144167460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Visit<2>(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
          FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  undefined1 uVar17;
  byte bVar18;
  uint uVar19;
  uint *puVar20;
  FChaosVDThreadContext *pFVar21;
  FChaosVDContext *pFVar22;
  TVector<double,3> *pTVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar27;
  longlong *plVar28;
  longlong lVar29;
  undefined1 auStackY_358 [32];
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324 [4];
  longlong local_320;
  longlong *local_318;
  FChaosVDContext local_310;
  longlong local_2f0;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> local_2e8;
  code *local_2e0;
  undefined1 *local_2d8;
  code *local_2d0;
  undefined1 *local_2c8;
  code *local_2c0;
  undefined1 *local_2b8;
  code *local_2b0;
  undefined1 *local_2a8;
  TGeometryParticleHandleImp<double,3,1> *local_2a0 [2];
  undefined4 local_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined4 local_270;
  TGeometryParticle<double,3> *local_268;
  TGeometryParticleHandleImp<double,3,1> *pTStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  FChaosVDOptionalDataChannel *local_230;
  TReferenceControllerBase<1> *pTStack_228;
  undefined1 local_218 [64];
  __m128d local_1d8;
  double local_1c8;
  double dStack_1c0;
  __m128d local_1b8;
  double local_1a8;
  double dStack_1a0;
  undefined **local_198;
  undefined1 local_190;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  double dStack_158;
  double dStack_150;
  byte local_148;
  EChaosVDCollisionQueryHitType local_140;
  undefined **local_138;
  undefined1 local_130;
  float local_128;
  int local_124;
  ushort local_120;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  EChaosVDSQVisitRejectReason local_d0;
  int local_cc;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_258._0_4_ = (param_1->Payload).CachedUniqueIdx.Idx;
  local_258._4_4_ = (param_1->Payload).UnionQueryFilterData.Word0;
  uStack_250._0_4_ = (param_1->Payload).UnionQueryFilterData.Word1;
  uStack_250._4_4_ = (param_1->Payload).UnionQueryFilterData.Word2;
  pTVar6 = (param_1->Payload).GeometryParticleHandle;
  local_268 = (param_1->Payload).ExternalGeometryParticle;
  pTStack_260 = (param_1->Payload).GeometryParticleHandle;
  local_248 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  uStack_240._0_4_ = (param_1->Payload).UnionSimFilterData.Word1;
  uStack_240._4_4_ = (param_1->Payload).UnionSimFilterData.Word2;
  local_238 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  if (pTVar6 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1732238023615054426>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                        ,0x25a,"bGTData");
    if (bVar16) {
      pcVar9 = (code *)swi(3);
      uVar17 = (*pcVar9)();
      return (bool)uVar17;
    }
  }
  else {
    local_318 = &pTVar6->_padding_;
    local_2e8 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )Chaos::TGeometryParticlesImp<double,3,0>::ShapesArray
                            ((TGeometryParticlesImp<double,3,0> *)pTVar6->_padding_,
                             (int)pTVar6->_padding_);
    dVar15 = _UNK_150689688;
    dVar14 = ___xmm_3ff00000000000003ff0000000000000;
    dVar13 = _UNK_150689518;
    dVar12 = ___xmm_00000000000000003ff0000000000000;
    uVar26 = 0;
    local_290 = 0xffffffff;
    local_270 = 0xffffffff;
    local_278 = 0.0;
    local_288 = 0.0;
    dStack_280 = 0.0;
    iVar25 = *(int *)((longlong)local_2e8 + 0x10);
    if (0 < iVar25) {
      local_320 = 0;
      plVar28 = &pTVar6->_padding_;
      local_2a0[0] = pTVar6;
      do {
        FVar27 = local_2e8;
        uVar19 = 0;
        if ((int)uVar26 < iVar25) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          uVar17 = (*pcVar9)();
          return (bool)uVar17;
        }
        FVar7 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  *)((longlong)FVar27 + 8);
        if (FVar7 != (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                      )0x0) {
          FVar27 = FVar7;
        }
        puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2d8 = &local_327;
        local_2e0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar21 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2e0,puVar20);
        pFVar22 = FChaosVDThreadContext::GetCurrentContext(pFVar21);
        if (pFVar22 != (FChaosVDContext *)0x0) {
          local_310.OwnerID = pFVar22->OwnerID;
          local_310.Id = pFVar22->Id;
          local_310.Type = pFVar22->Type;
          local_310.Attributes = pFVar22->Attributes;
          local_230 = (pFVar22->CurrentDataChannel).Object;
          pTStack_228 = (pFVar22->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_228 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_228->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_228->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_310.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_310.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
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
                    (pTStack_228);
          puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2c8 = &local_326;
          local_2d0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar21 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2d0,puVar20);
          FChaosVDThreadContext::PushContext(pFVar21,&local_310);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_310.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        local_148 = local_148 & 0xf8;
        local_218._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_218._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_198 = &___7FChaosVDQueryFastData__6B_;
        local_218._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_138 = &___7FChaosVDQueryHitData__6B_;
        local_218[8] = 0;
        local_218._16_4_ = -1;
        local_218._20_4_ = Invalid;
        local_218._24_4_ = 0;
        local_218._28_4_ = -1;
        local_190 = 0;
        local_140 = None;
        local_130 = 0;
        local_128 = 0.0;
        local_124 = -1;
        local_120 = 0;
        local_d0 = None;
        local_218._56_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_218._48_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_1c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_cc = -1;
        local_1d8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0)
        ;
        local_1d8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1d8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_1a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1b8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0)
        ;
        local_1b8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1b8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        dStack_158 = 0.0;
        dStack_150 = 0.0;
        local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_170._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_170._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_170._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_118._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_118._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_118._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_100._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_100._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_100._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pTVar23 = Chaos::TParticles<double,3>::GetX
                            ((TParticles<double,3> *)pTVar6->_padding_,(uint)*plVar28);
        local_2f0 = pTVar6->_padding_;
        uVar19 = (uint)*local_318;
        lVar29 = (longlong)(int)uVar19;
        uVar24 = 0;
        if ((int)uVar19 < *(int *)(local_2f0 + 0x50)) {
          uVar24 = ~uVar19 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          uVar17 = (*pcVar9)();
          return (bool)uVar17;
        }
        uVar3 = *(undefined8 *)&pTVar23->field_0x8;
        auVar11 = *(undefined1 (*) [12])pTVar23;
        dVar4 = *(double *)&pTVar23->field_0x10;
        lVar8 = *(longlong *)(local_2f0 + 0x48);
        fVar1 = *(float *)(lVar8 + lVar29 * 0x10);
        fVar2 = *(float *)(lVar8 + 4 + lVar29 * 0x10);
        uVar5 = *(undefined8 *)(lVar8 + 8 + lVar29 * 0x10);
        dVar10 = (double)(float)((ulonglong)uVar5 >> 0x20);
        bVar16 = FChaosVisualDebuggerTrace::IsTracing();
        lVar29 = local_320;
        if (bVar16) {
          local_218._56_4_ = SUB84(dVar10,0);
          local_218._48_8_ = (double)(float)uVar5;
          local_218._60_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1d8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
          local_1d8.m128d_f64._0_12_ = auVar11;
          dStack_1c0 = 0.0;
          local_1b8.m128d_f64[1] = dVar15;
          local_1b8.m128d_f64[0] = dVar14;
          local_1a8 = dVar12;
          dStack_1a0 = dVar13;
          local_218._28_4_ = (int)local_258;
          local_218._24_4_ = uVar26;
          local_218._20_4_ = BroadPhase;
          if (param_2 != (FQueryFastData *)0x0) {
            pTVar23 = param_2->Dir;
            local_188._s_0.X = (double)*(undefined8 *)pTVar23;
            local_188._s_0.Y = (double)*(undefined8 *)&pTVar23->field_0x8;
            local_188._s_0.Z = (double)*(undefined8 *)&pTVar23->field_0x10;
            local_170._s_0.X = (double)*(undefined8 *)&param_2->InvDir;
            local_170._s_0.Y = (double)*(undefined8 *)&(param_2->InvDir).field_0x8;
            local_190 = 1;
            local_170._s_0.Z = (double)*(undefined8 *)&(param_2->InvDir).field_0x10;
            dStack_158 = param_2->CurrentLength;
            local_148 = ((param_2->bParallel[2] & 1U) * '\x02' | param_2->bParallel[1] & 1U) *
                        '\x02' | param_2->bParallel[0] & 1U | local_148 & 0xf8;
            dStack_150 = param_2->InvCurrentLength;
          }
          local_218[8] = 1;
          local_218._32_8_ = (double)fVar1;
          local_218._40_8_ = (double)fVar2;
          local_1c8 = dVar4;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar18 = 2;
LAB_144167a5c:
          bVar16 = true;
LAB_144167a5f:
          local_2a0[1] = *(TGeometryParticleHandleImp<double,3,1> **)((longlong)FVar27 + lVar29);
          ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::InsertHit
                    (this->HitBuffer,(FPTOverlapHit *)local_2a0,bVar16);
          bVar16 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar16) {
            local_e8._s_0.X = local_288;
            local_e8._s_0.Y = dStack_280;
            local_e8._s_0.Z = local_278;
            local_140 = (EChaosVDCollisionQueryHitType)bVar18;
            local_130 = 1;
          }
          bVar16 = this->bAnyHit;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_218);
          puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2a8 = local_324;
          local_2b0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar21 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b0,puVar20);
          FChaosVDThreadContext::PopContext(pFVar21);
          return bVar16 == false;
        }
        bVar18 = (**(code **)((longlong)*this->QueryCallback + 0x18))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)((longlong)FVar27 + local_320),pTVar6);
        if (bVar18 != 0) {
          if (((bVar18 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            bVar16 = false;
            goto LAB_144167a5f;
          }
          goto LAB_144167a5c;
        }
        local_d0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_218);
        puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2b8 = &local_325;
        local_2c0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar21 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2c0,puVar20);
        FChaosVDThreadContext::PopContext(pFVar21);
        local_320 = lVar29 + 8;
        uVar26 = uVar26 + 1;
        iVar25 = *(int *)((longlong)local_2e8 + 0x10);
        plVar28 = local_318;
      } while ((int)uVar26 < iVar25);
    }
  }
  return true;
}

// Visit<2> @ 144167b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Visit<2>(TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
          FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  TVector<double,3> *pTVar7;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *pFVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TGeometryParticle<double,3> *pTVar16;
  int iVar17;
  bool bVar18;
  undefined1 uVar19;
  byte bVar20;
  uint uVar21;
  uint *puVar22;
  FChaosVDThreadContext *pFVar23;
  FChaosVDContext *pFVar24;
  int iVar25;
  uint uVar26;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar27;
  longlong lVar28;
  undefined1 auStack_328 [32];
  longlong local_308;
  longlong local_300;
  undefined1 local_2f8;
  undefined1 local_2f7;
  undefined1 local_2f6;
  undefined1 local_2f5;
  undefined1 local_2f4 [4];
  TGeometryParticle<double,3> *local_2f0;
  FChaosVDContext local_2e8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  TGeometryParticle<double,3> *local_2b0 [2];
  undefined4 local_2a0;
  undefined4 uStack_29c;
  double dStack_298;
  double dStack_290;
  double dStack_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  code *local_278;
  undefined1 *local_270;
  code *local_268;
  undefined1 *local_260;
  code *local_258;
  undefined1 *local_250;
  code *local_248;
  undefined1 *local_240;
  FChaosVDOptionalDataChannel *local_238;
  TReferenceControllerBase<1> *pTStack_230;
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
  
  dVar15 = _UNK_150689688;
  dVar14 = ___xmm_3ff00000000000003ff0000000000000;
  dVar13 = _UNK_150689518;
  dVar12 = ___xmm_00000000000000003ff0000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_328;
  local_2e8.CurrentDataChannel.Object =
       *(FChaosVDOptionalDataChannel **)&(param_1->Payload).CachedUniqueIdx;
  local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&(param_1->Payload).UnionQueryFilterData.Word1;
  local_2c8 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  uStack_2c0._0_4_ = (param_1->Payload).UnionSimFilterData.Word1;
  uStack_2c0._4_4_ = (param_1->Payload).UnionSimFilterData.Word2;
  local_2f8 = 1;
  local_2b8 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  local_2f0 = (param_1->Payload).ExternalGeometryParticle;
  if (local_2f0 == (TGeometryParticle<double,3> *)0x0) {
    local_2f8 = 1;
  }
  else {
    uVar26 = 0;
    local_2a0 = 0xffffffff;
    dStack_288 = 0.0;
    dStack_298 = 0.0;
    dStack_290 = 0.0;
    local_280 = 0xffffffff;
    iVar25 = (local_2f0->MShapesArray).ArrayNum;
    if (0 < iVar25) {
      iVar17 = (int)local_2e8.CurrentDataChannel.Object;
      lVar28 = 0;
      local_2b0[0] = local_2f0;
      do {
        pTVar16 = local_2f0;
        FVar27 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&local_2f0->MShapesArray;
        uVar21 = 0;
        if ((int)uVar26 < iVar25) {
          uVar21 = ~uVar26 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_300 = (longlong)iVar25;
          local_308 = (longlong)(int)uVar26;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar9 = (code *)swi(3);
            uVar19 = (*pcVar9)();
            return (bool)uVar19;
          }
        }
        FVar6 = (pTVar16->MShapesArray).AllocatorInstance.SecondaryData;
        if (FVar6 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar27 = FVar6;
        }
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_270 = &local_2f7;
        local_278 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_278,puVar22);
        pFVar24 = FChaosVDThreadContext::GetCurrentContext(pFVar23);
        if (pFVar24 != (FChaosVDContext *)0x0) {
          local_2e8.OwnerID = pFVar24->OwnerID;
          local_2e8.Id = pFVar24->Id;
          local_2e8.Type = pFVar24->Type;
          local_2e8.Attributes = pFVar24->Attributes;
          local_238 = (pFVar24->CurrentDataChannel).Object;
          pTStack_230 = (pFVar24->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_230 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_230->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_230->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_2e8.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
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
                    (pTStack_230);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_260 = &local_2f6;
          local_268 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_268,puVar22);
          FChaosVDThreadContext::PushContext(pFVar23,&local_2e8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        pTVar16 = local_2f0;
        fVar1 = *(float *)&(local_2f0->MXR).Property.MR;
        fVar2 = *(float *)&(local_2f0->MXR).Property.MR.field_0x4;
        fVar3 = *(float *)&(local_2f0->MXR).Property.MR.field_0x8;
        dVar4 = *(double *)&(local_2f0->MXR).Property.MX.field_0x10;
        local_158 = local_158 & 0xf8;
        local_228._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_228._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_1a8 = &___7FChaosVDQueryFastData__6B_;
        local_228[8] = 0;
        local_228._16_4_ = -1;
        local_228._20_4_ = Invalid;
        local_228._24_4_ = 0;
        local_228._28_4_ = -1;
        local_1a0 = 0;
        local_150 = None;
        local_140 = 0;
        local_148 = &___7FChaosVDQueryHitData__6B_;
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
        uVar5 = *(undefined8 *)&(local_2f0->MXR).Property.MX.field_0x8;
        auVar11 = *(undefined1 (*) [12])&(local_2f0->MXR).Property.MX;
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
        dVar10 = (double)*(float *)&(local_2f0->MXR).Property.MR.field_0xc;
        bVar18 = FChaosVisualDebuggerTrace::IsTracing();
        if (bVar18) {
          local_228._56_4_ = SUB84(dVar10,0);
          local_228._48_8_ = (double)fVar3;
          local_228._60_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1e8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
          local_1e8.m128d_f64._0_12_ = auVar11;
          dStack_1d0 = 0.0;
          local_1c8.m128d_f64[1] = dVar15;
          local_1c8.m128d_f64[0] = dVar14;
          local_1b8 = dVar12;
          dStack_1b0 = dVar13;
          local_228._28_4_ = iVar17;
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
          local_1d8 = dVar4;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar20 = 2;
LAB_1441680d3:
          local_2b0[1] = *(TGeometryParticle<double,3> **)((longlong)FVar27 + lVar28);
          pFVar8 = this->HitBuffer;
          *(TGeometryParticle<double,3> **)&pFVar8->CurrentBlockingHit = local_2b0[0];
          *(TGeometryParticle<double,3> **)&(pFVar8->CurrentBlockingHit).field_0x8 = local_2b0[1];
          *(ulonglong *)&(pFVar8->CurrentBlockingHit).field_0x10 = CONCAT44(uStack_29c,local_2a0);
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x18 = dStack_298;
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x20 = dStack_290;
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x28 = dStack_288;
          *(ulonglong *)&(pFVar8->CurrentBlockingHit).field_0x30 = CONCAT44(uStack_27c,local_280);
          pFVar8->bHasBlockingHit = true;
LAB_144168106:
          bVar18 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar18) {
            local_f8._s_0.X = dStack_298;
            local_f8._s_0.Y = dStack_290;
            local_f8._s_0.Z = dStack_288;
            local_150 = (EChaosVDCollisionQueryHitType)bVar20;
            local_140 = 1;
          }
          local_2f8 = this->bAnyHit == false;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_240 = local_2f4;
          local_248 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_248,puVar22);
          FChaosVDThreadContext::PopContext(pFVar23);
          return (bool)local_2f8;
        }
        bVar20 = (**(code **)((longlong)*this->QueryCallback + 0x20))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)((longlong)FVar27 + lVar28),pTVar16);
        if (bVar20 != 0) {
          if (((bVar20 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            local_2b0[1] = *(TGeometryParticle<double,3> **)((longlong)FVar27 + lVar28);
            ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::AddTouchingHit
                      (this->HitBuffer,(FOverlapHit *)local_2b0);
            goto LAB_144168106;
          }
          goto LAB_1441680d3;
        }
        local_e0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_250 = &local_2f5;
        local_258 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_258,puVar22);
        FChaosVDThreadContext::PopContext(pFVar23);
        uVar26 = uVar26 + 1;
        lVar28 = lVar28 + 8;
        iVar25 = (local_2f0->MShapesArray).ArrayNum;
      } while ((int)uVar26 < iVar25);
    }
  }
  return (bool)local_2f8;
}

// Visit<2> @ 144168220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Visit<2>(TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
          FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  undefined1 uVar17;
  byte bVar18;
  uint uVar19;
  uint *puVar20;
  FChaosVDThreadContext *pFVar21;
  FChaosVDContext *pFVar22;
  TVector<double,3> *pTVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar27;
  longlong *plVar28;
  longlong lVar29;
  undefined1 auStackY_358 [32];
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324 [4];
  longlong local_320;
  longlong *local_318;
  FChaosVDContext local_310;
  longlong local_2f0;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> local_2e8;
  code *local_2e0;
  undefined1 *local_2d8;
  code *local_2d0;
  undefined1 *local_2c8;
  code *local_2c0;
  undefined1 *local_2b8;
  code *local_2b0;
  undefined1 *local_2a8;
  TGeometryParticleHandleImp<double,3,1> *local_2a0 [2];
  undefined4 local_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined4 local_270;
  TGeometryParticle<double,3> *local_268;
  TGeometryParticleHandleImp<double,3,1> *pTStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  FChaosVDOptionalDataChannel *local_230;
  TReferenceControllerBase<1> *pTStack_228;
  undefined1 local_218 [64];
  __m128d local_1d8;
  double local_1c8;
  double dStack_1c0;
  __m128d local_1b8;
  double local_1a8;
  double dStack_1a0;
  undefined **local_198;
  undefined1 local_190;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  double dStack_158;
  double dStack_150;
  byte local_148;
  EChaosVDCollisionQueryHitType local_140;
  undefined **local_138;
  undefined1 local_130;
  float local_128;
  int local_124;
  ushort local_120;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  EChaosVDSQVisitRejectReason local_d0;
  int local_cc;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_258._0_4_ = (param_1->Payload).CachedUniqueIdx.Idx;
  local_258._4_4_ = (param_1->Payload).UnionQueryFilterData.Word0;
  uStack_250._0_4_ = (param_1->Payload).UnionQueryFilterData.Word1;
  uStack_250._4_4_ = (param_1->Payload).UnionQueryFilterData.Word2;
  pTVar6 = (param_1->Payload).GeometryParticleHandle;
  local_268 = (param_1->Payload).ExternalGeometryParticle;
  pTStack_260 = (param_1->Payload).GeometryParticleHandle;
  local_248 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  uStack_240._0_4_ = (param_1->Payload).UnionSimFilterData.Word1;
  uStack_240._4_4_ = (param_1->Payload).UnionSimFilterData.Word2;
  local_238 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  if (pTVar6 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1732238023615054426>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                        ,0x25a,"bGTData");
    if (bVar16) {
      pcVar9 = (code *)swi(3);
      uVar17 = (*pcVar9)();
      return (bool)uVar17;
    }
  }
  else {
    local_318 = &pTVar6->_padding_;
    local_2e8 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )Chaos::TGeometryParticlesImp<double,3,0>::ShapesArray
                            ((TGeometryParticlesImp<double,3,0> *)pTVar6->_padding_,
                             (int)pTVar6->_padding_);
    dVar15 = _UNK_150689688;
    dVar14 = ___xmm_3ff00000000000003ff0000000000000;
    dVar13 = _UNK_150689518;
    dVar12 = ___xmm_00000000000000003ff0000000000000;
    uVar26 = 0;
    local_290 = 0xffffffff;
    local_270 = 0xffffffff;
    local_278 = 0.0;
    local_288 = 0.0;
    dStack_280 = 0.0;
    iVar25 = *(int *)((longlong)local_2e8 + 0x10);
    if (0 < iVar25) {
      local_320 = 0;
      plVar28 = &pTVar6->_padding_;
      local_2a0[0] = pTVar6;
      do {
        FVar27 = local_2e8;
        uVar19 = 0;
        if ((int)uVar26 < iVar25) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          uVar17 = (*pcVar9)();
          return (bool)uVar17;
        }
        FVar7 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  *)((longlong)FVar27 + 8);
        if (FVar7 != (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                      )0x0) {
          FVar27 = FVar7;
        }
        puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2d8 = &local_327;
        local_2e0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar21 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2e0,puVar20);
        pFVar22 = FChaosVDThreadContext::GetCurrentContext(pFVar21);
        if (pFVar22 != (FChaosVDContext *)0x0) {
          local_310.OwnerID = pFVar22->OwnerID;
          local_310.Id = pFVar22->Id;
          local_310.Type = pFVar22->Type;
          local_310.Attributes = pFVar22->Attributes;
          local_230 = (pFVar22->CurrentDataChannel).Object;
          pTStack_228 = (pFVar22->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_228 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_228->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_228->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_310.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_310.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
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
                    (pTStack_228);
          puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2c8 = &local_326;
          local_2d0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar21 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2d0,puVar20);
          FChaosVDThreadContext::PushContext(pFVar21,&local_310);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_310.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        local_148 = local_148 & 0xf8;
        local_218._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_218._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_198 = &___7FChaosVDQueryFastData__6B_;
        local_218._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_138 = &___7FChaosVDQueryHitData__6B_;
        local_218[8] = 0;
        local_218._16_4_ = -1;
        local_218._20_4_ = Invalid;
        local_218._24_4_ = 0;
        local_218._28_4_ = -1;
        local_190 = 0;
        local_140 = None;
        local_130 = 0;
        local_128 = 0.0;
        local_124 = -1;
        local_120 = 0;
        local_d0 = None;
        local_218._56_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_218._48_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_1c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_cc = -1;
        local_1d8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0)
        ;
        local_1d8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1d8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_1a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1b8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0)
        ;
        local_1b8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1b8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        dStack_158 = 0.0;
        dStack_150 = 0.0;
        local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_170._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_170._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_170._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_118._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_118._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_118._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_100._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_100._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_100._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pTVar23 = Chaos::TParticles<double,3>::GetX
                            ((TParticles<double,3> *)pTVar6->_padding_,(uint)*plVar28);
        local_2f0 = pTVar6->_padding_;
        uVar19 = (uint)*local_318;
        lVar29 = (longlong)(int)uVar19;
        uVar24 = 0;
        if ((int)uVar19 < *(int *)(local_2f0 + 0x50)) {
          uVar24 = ~uVar19 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          uVar17 = (*pcVar9)();
          return (bool)uVar17;
        }
        uVar3 = *(undefined8 *)&pTVar23->field_0x8;
        auVar11 = *(undefined1 (*) [12])pTVar23;
        dVar4 = *(double *)&pTVar23->field_0x10;
        lVar8 = *(longlong *)(local_2f0 + 0x48);
        fVar1 = *(float *)(lVar8 + lVar29 * 0x10);
        fVar2 = *(float *)(lVar8 + 4 + lVar29 * 0x10);
        uVar5 = *(undefined8 *)(lVar8 + 8 + lVar29 * 0x10);
        dVar10 = (double)(float)((ulonglong)uVar5 >> 0x20);
        bVar16 = FChaosVisualDebuggerTrace::IsTracing();
        lVar29 = local_320;
        if (bVar16) {
          local_218._56_4_ = SUB84(dVar10,0);
          local_218._48_8_ = (double)(float)uVar5;
          local_218._60_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1d8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
          local_1d8.m128d_f64._0_12_ = auVar11;
          dStack_1c0 = 0.0;
          local_1b8.m128d_f64[1] = dVar15;
          local_1b8.m128d_f64[0] = dVar14;
          local_1a8 = dVar12;
          dStack_1a0 = dVar13;
          local_218._28_4_ = (int)local_258;
          local_218._24_4_ = uVar26;
          local_218._20_4_ = BroadPhase;
          if (param_2 != (FQueryFastData *)0x0) {
            pTVar23 = param_2->Dir;
            local_188._s_0.X = (double)*(undefined8 *)pTVar23;
            local_188._s_0.Y = (double)*(undefined8 *)&pTVar23->field_0x8;
            local_188._s_0.Z = (double)*(undefined8 *)&pTVar23->field_0x10;
            local_170._s_0.X = (double)*(undefined8 *)&param_2->InvDir;
            local_170._s_0.Y = (double)*(undefined8 *)&(param_2->InvDir).field_0x8;
            local_190 = 1;
            local_170._s_0.Z = (double)*(undefined8 *)&(param_2->InvDir).field_0x10;
            dStack_158 = param_2->CurrentLength;
            local_148 = ((param_2->bParallel[2] & 1U) * '\x02' | param_2->bParallel[1] & 1U) *
                        '\x02' | param_2->bParallel[0] & 1U | local_148 & 0xf8;
            dStack_150 = param_2->InvCurrentLength;
          }
          local_218[8] = 1;
          local_218._32_8_ = (double)fVar1;
          local_218._40_8_ = (double)fVar2;
          local_1c8 = dVar4;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar18 = 2;
LAB_14416881c:
          bVar16 = true;
LAB_14416881f:
          local_2a0[1] = *(TGeometryParticleHandleImp<double,3,1> **)((longlong)FVar27 + lVar29);
          ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::InsertHit
                    (this->HitBuffer,(FPTOverlapHit *)local_2a0,bVar16);
          bVar16 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar16) {
            local_e8._s_0.X = local_288;
            local_e8._s_0.Y = dStack_280;
            local_e8._s_0.Z = local_278;
            local_140 = (EChaosVDCollisionQueryHitType)bVar18;
            local_130 = 1;
          }
          bVar16 = this->bAnyHit;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_218);
          puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2a8 = local_324;
          local_2b0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar21 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b0,puVar20);
          FChaosVDThreadContext::PopContext(pFVar21);
          return bVar16 == false;
        }
        bVar18 = (**(code **)((longlong)*this->QueryCallback + 0x18))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)((longlong)FVar27 + local_320),pTVar6);
        if (bVar18 != 0) {
          if (((bVar18 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            bVar16 = false;
            goto LAB_14416881f;
          }
          goto LAB_14416881c;
        }
        local_d0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_218);
        puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2b8 = &local_325;
        local_2c0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar21 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2c0,puVar20);
        FChaosVDThreadContext::PopContext(pFVar21);
        local_320 = lVar29 + 8;
        uVar26 = uVar26 + 1;
        iVar25 = *(int *)((longlong)local_2e8 + 0x10);
        plVar28 = local_318;
      } while ((int)uVar26 < iVar25);
    }
  }
  return true;
}

// Visit<2> @ 144168940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::
Visit<2>(TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
         *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
        FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  TVector<double,3> *pTVar7;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *pFVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TGeometryParticle<double,3> *pTVar16;
  int iVar17;
  bool bVar18;
  undefined1 uVar19;
  byte bVar20;
  uint uVar21;
  uint *puVar22;
  FChaosVDThreadContext *pFVar23;
  FChaosVDContext *pFVar24;
  int iVar25;
  uint uVar26;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar27;
  longlong lVar28;
  undefined1 auStack_328 [32];
  longlong local_308;
  longlong local_300;
  undefined1 local_2f8;
  undefined1 local_2f7;
  undefined1 local_2f6;
  undefined1 local_2f5;
  undefined1 local_2f4 [4];
  TGeometryParticle<double,3> *local_2f0;
  FChaosVDContext local_2e8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  TGeometryParticle<double,3> *local_2b0 [2];
  undefined4 local_2a0;
  undefined4 uStack_29c;
  double dStack_298;
  double dStack_290;
  double dStack_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  code *local_278;
  undefined1 *local_270;
  code *local_268;
  undefined1 *local_260;
  code *local_258;
  undefined1 *local_250;
  code *local_248;
  undefined1 *local_240;
  FChaosVDOptionalDataChannel *local_238;
  TReferenceControllerBase<1> *pTStack_230;
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
  
  dVar15 = _UNK_150689688;
  dVar14 = ___xmm_3ff00000000000003ff0000000000000;
  dVar13 = _UNK_150689518;
  dVar12 = ___xmm_00000000000000003ff0000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_328;
  local_2e8.CurrentDataChannel.Object =
       *(FChaosVDOptionalDataChannel **)&(param_1->Payload).CachedUniqueIdx;
  local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&(param_1->Payload).UnionQueryFilterData.Word1;
  local_2c8 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  uStack_2c0._0_4_ = (param_1->Payload).UnionSimFilterData.Word1;
  uStack_2c0._4_4_ = (param_1->Payload).UnionSimFilterData.Word2;
  local_2f8 = 1;
  local_2b8 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  local_2f0 = (param_1->Payload).ExternalGeometryParticle;
  if (local_2f0 == (TGeometryParticle<double,3> *)0x0) {
    local_2f8 = 1;
  }
  else {
    uVar26 = 0;
    local_2a0 = 0xffffffff;
    dStack_288 = 0.0;
    dStack_298 = 0.0;
    dStack_290 = 0.0;
    local_280 = 0xffffffff;
    iVar25 = (local_2f0->MShapesArray).ArrayNum;
    if (0 < iVar25) {
      iVar17 = (int)local_2e8.CurrentDataChannel.Object;
      lVar28 = 0;
      local_2b0[0] = local_2f0;
      do {
        pTVar16 = local_2f0;
        FVar27 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&local_2f0->MShapesArray;
        uVar21 = 0;
        if ((int)uVar26 < iVar25) {
          uVar21 = ~uVar26 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_300 = (longlong)iVar25;
          local_308 = (longlong)(int)uVar26;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar9 = (code *)swi(3);
            uVar19 = (*pcVar9)();
            return (bool)uVar19;
          }
        }
        FVar6 = (pTVar16->MShapesArray).AllocatorInstance.SecondaryData;
        if (FVar6 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar27 = FVar6;
        }
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_270 = &local_2f7;
        local_278 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_278,puVar22);
        pFVar24 = FChaosVDThreadContext::GetCurrentContext(pFVar23);
        if (pFVar24 != (FChaosVDContext *)0x0) {
          local_2e8.OwnerID = pFVar24->OwnerID;
          local_2e8.Id = pFVar24->Id;
          local_2e8.Type = pFVar24->Type;
          local_2e8.Attributes = pFVar24->Attributes;
          local_238 = (pFVar24->CurrentDataChannel).Object;
          pTStack_230 = (pFVar24->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_230 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_230->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_230->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_2e8.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
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
                    (pTStack_230);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_260 = &local_2f6;
          local_268 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_268,puVar22);
          FChaosVDThreadContext::PushContext(pFVar23,&local_2e8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        pTVar16 = local_2f0;
        fVar1 = *(float *)&(local_2f0->MXR).Property.MR;
        fVar2 = *(float *)&(local_2f0->MXR).Property.MR.field_0x4;
        fVar3 = *(float *)&(local_2f0->MXR).Property.MR.field_0x8;
        dVar4 = *(double *)&(local_2f0->MXR).Property.MX.field_0x10;
        local_158 = local_158 & 0xf8;
        local_228._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_228._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_1a8 = &___7FChaosVDQueryFastData__6B_;
        local_228[8] = 0;
        local_228._16_4_ = -1;
        local_228._20_4_ = Invalid;
        local_228._24_4_ = 0;
        local_228._28_4_ = -1;
        local_1a0 = 0;
        local_150 = None;
        local_140 = 0;
        local_148 = &___7FChaosVDQueryHitData__6B_;
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
        uVar5 = *(undefined8 *)&(local_2f0->MXR).Property.MX.field_0x8;
        auVar11 = *(undefined1 (*) [12])&(local_2f0->MXR).Property.MX;
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
        dVar10 = (double)*(float *)&(local_2f0->MXR).Property.MR.field_0xc;
        bVar18 = FChaosVisualDebuggerTrace::IsTracing();
        if (bVar18) {
          local_228._56_4_ = SUB84(dVar10,0);
          local_228._48_8_ = (double)fVar3;
          local_228._60_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1e8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
          local_1e8.m128d_f64._0_12_ = auVar11;
          dStack_1d0 = 0.0;
          local_1c8.m128d_f64[1] = dVar15;
          local_1c8.m128d_f64[0] = dVar14;
          local_1b8 = dVar12;
          dStack_1b0 = dVar13;
          local_228._28_4_ = iVar17;
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
          local_1d8 = dVar4;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar20 = 2;
LAB_144168e93:
          local_2b0[1] = *(TGeometryParticle<double,3> **)((longlong)FVar27 + lVar28);
          pFVar8 = this->HitBuffer;
          *(TGeometryParticle<double,3> **)&pFVar8->CurrentBlockingHit = local_2b0[0];
          *(TGeometryParticle<double,3> **)&(pFVar8->CurrentBlockingHit).field_0x8 = local_2b0[1];
          *(ulonglong *)&(pFVar8->CurrentBlockingHit).field_0x10 = CONCAT44(uStack_29c,local_2a0);
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x18 = dStack_298;
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x20 = dStack_290;
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x28 = dStack_288;
          *(ulonglong *)&(pFVar8->CurrentBlockingHit).field_0x30 = CONCAT44(uStack_27c,local_280);
          pFVar8->bHasBlockingHit = true;
LAB_144168ec6:
          bVar18 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar18) {
            local_f8._s_0.X = dStack_298;
            local_f8._s_0.Y = dStack_290;
            local_f8._s_0.Z = dStack_288;
            local_150 = (EChaosVDCollisionQueryHitType)bVar20;
            local_140 = 1;
          }
          local_2f8 = this->bAnyHit == false;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_240 = local_2f4;
          local_248 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_248,puVar22);
          FChaosVDThreadContext::PopContext(pFVar23);
          return (bool)local_2f8;
        }
        bVar20 = (**(code **)((longlong)*this->QueryCallback + 0x20))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)((longlong)FVar27 + lVar28),pTVar16);
        if (bVar20 != 0) {
          if (((bVar20 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            local_2b0[1] = *(TGeometryParticle<double,3> **)((longlong)FVar27 + lVar28);
            ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::AddTouchingHit
                      (this->HitBuffer,(FOverlapHit *)local_2b0);
            goto LAB_144168ec6;
          }
          goto LAB_144168e93;
        }
        local_e0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_250 = &local_2f5;
        local_258 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_258,puVar22);
        FChaosVDThreadContext::PopContext(pFVar23);
        uVar26 = uVar26 + 1;
        lVar28 = lVar28 + 8;
        iVar25 = (local_2f0->MShapesArray).ArrayNum;
      } while ((int)uVar26 < iVar25);
    }
  }
  return (bool)local_2f8;
}

// Visit<2> @ 144168fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
Visit<2>(TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
         *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
        FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  undefined1 uVar17;
  byte bVar18;
  uint uVar19;
  uint *puVar20;
  FChaosVDThreadContext *pFVar21;
  FChaosVDContext *pFVar22;
  TVector<double,3> *pTVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar27;
  longlong *plVar28;
  longlong lVar29;
  undefined1 auStackY_358 [32];
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324 [4];
  longlong local_320;
  longlong *local_318;
  FChaosVDContext local_310;
  longlong local_2f0;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> local_2e8;
  code *local_2e0;
  undefined1 *local_2d8;
  code *local_2d0;
  undefined1 *local_2c8;
  code *local_2c0;
  undefined1 *local_2b8;
  code *local_2b0;
  undefined1 *local_2a8;
  TGeometryParticleHandleImp<double,3,1> *local_2a0 [2];
  undefined4 local_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined4 local_270;
  TGeometryParticle<double,3> *local_268;
  TGeometryParticleHandleImp<double,3,1> *pTStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  FChaosVDOptionalDataChannel *local_230;
  TReferenceControllerBase<1> *pTStack_228;
  undefined1 local_218 [64];
  __m128d local_1d8;
  double local_1c8;
  double dStack_1c0;
  __m128d local_1b8;
  double local_1a8;
  double dStack_1a0;
  undefined **local_198;
  undefined1 local_190;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  double dStack_158;
  double dStack_150;
  byte local_148;
  EChaosVDCollisionQueryHitType local_140;
  undefined **local_138;
  undefined1 local_130;
  float local_128;
  int local_124;
  ushort local_120;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  EChaosVDSQVisitRejectReason local_d0;
  int local_cc;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_258._0_4_ = (param_1->Payload).CachedUniqueIdx.Idx;
  local_258._4_4_ = (param_1->Payload).UnionQueryFilterData.Word0;
  uStack_250._0_4_ = (param_1->Payload).UnionQueryFilterData.Word1;
  uStack_250._4_4_ = (param_1->Payload).UnionQueryFilterData.Word2;
  pTVar6 = (param_1->Payload).GeometryParticleHandle;
  local_268 = (param_1->Payload).ExternalGeometryParticle;
  pTStack_260 = (param_1->Payload).GeometryParticleHandle;
  local_248 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  uStack_240._0_4_ = (param_1->Payload).UnionSimFilterData.Word1;
  uStack_240._4_4_ = (param_1->Payload).UnionSimFilterData.Word2;
  local_238 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  if (pTVar6 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1732238023615054426>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                        ,0x25a,"bGTData");
    if (bVar16) {
      pcVar9 = (code *)swi(3);
      uVar17 = (*pcVar9)();
      return (bool)uVar17;
    }
  }
  else {
    local_318 = &pTVar6->_padding_;
    local_2e8 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )Chaos::TGeometryParticlesImp<double,3,0>::ShapesArray
                            ((TGeometryParticlesImp<double,3,0> *)pTVar6->_padding_,
                             (int)pTVar6->_padding_);
    dVar15 = _UNK_150689688;
    dVar14 = ___xmm_3ff00000000000003ff0000000000000;
    dVar13 = _UNK_150689518;
    dVar12 = ___xmm_00000000000000003ff0000000000000;
    uVar26 = 0;
    local_290 = 0xffffffff;
    local_270 = 0xffffffff;
    local_278 = 0.0;
    local_288 = 0.0;
    dStack_280 = 0.0;
    iVar25 = *(int *)((longlong)local_2e8 + 0x10);
    if (0 < iVar25) {
      local_320 = 0;
      plVar28 = &pTVar6->_padding_;
      local_2a0[0] = pTVar6;
      do {
        FVar27 = local_2e8;
        uVar19 = 0;
        if ((int)uVar26 < iVar25) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          uVar17 = (*pcVar9)();
          return (bool)uVar17;
        }
        FVar7 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  *)((longlong)FVar27 + 8);
        if (FVar7 != (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                      )0x0) {
          FVar27 = FVar7;
        }
        puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2d8 = &local_327;
        local_2e0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar21 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2e0,puVar20);
        pFVar22 = FChaosVDThreadContext::GetCurrentContext(pFVar21);
        if (pFVar22 != (FChaosVDContext *)0x0) {
          local_310.OwnerID = pFVar22->OwnerID;
          local_310.Id = pFVar22->Id;
          local_310.Type = pFVar22->Type;
          local_310.Attributes = pFVar22->Attributes;
          local_230 = (pFVar22->CurrentDataChannel).Object;
          pTStack_228 = (pFVar22->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_228 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_228->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_228->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_310.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_310.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
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
                    (pTStack_228);
          puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2c8 = &local_326;
          local_2d0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar21 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2d0,puVar20);
          FChaosVDThreadContext::PushContext(pFVar21,&local_310);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_310.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        local_148 = local_148 & 0xf8;
        local_218._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_218._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_198 = &___7FChaosVDQueryFastData__6B_;
        local_218._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_138 = &___7FChaosVDQueryHitData__6B_;
        local_218[8] = 0;
        local_218._16_4_ = -1;
        local_218._20_4_ = Invalid;
        local_218._24_4_ = 0;
        local_218._28_4_ = -1;
        local_190 = 0;
        local_140 = None;
        local_130 = 0;
        local_128 = 0.0;
        local_124 = -1;
        local_120 = 0;
        local_d0 = None;
        local_218._56_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_218._48_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_1c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_cc = -1;
        local_1d8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0)
        ;
        local_1d8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1d8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_1a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1b8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0)
        ;
        local_1b8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1b8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        dStack_158 = 0.0;
        dStack_150 = 0.0;
        local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_170._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_170._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_170._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_118._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_118._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_118._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_100._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_100._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_100._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pTVar23 = Chaos::TParticles<double,3>::GetX
                            ((TParticles<double,3> *)pTVar6->_padding_,(uint)*plVar28);
        local_2f0 = pTVar6->_padding_;
        uVar19 = (uint)*local_318;
        lVar29 = (longlong)(int)uVar19;
        uVar24 = 0;
        if ((int)uVar19 < *(int *)(local_2f0 + 0x50)) {
          uVar24 = ~uVar19 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          uVar17 = (*pcVar9)();
          return (bool)uVar17;
        }
        uVar3 = *(undefined8 *)&pTVar23->field_0x8;
        auVar11 = *(undefined1 (*) [12])pTVar23;
        dVar4 = *(double *)&pTVar23->field_0x10;
        lVar8 = *(longlong *)(local_2f0 + 0x48);
        fVar1 = *(float *)(lVar8 + lVar29 * 0x10);
        fVar2 = *(float *)(lVar8 + 4 + lVar29 * 0x10);
        uVar5 = *(undefined8 *)(lVar8 + 8 + lVar29 * 0x10);
        dVar10 = (double)(float)((ulonglong)uVar5 >> 0x20);
        bVar16 = FChaosVisualDebuggerTrace::IsTracing();
        lVar29 = local_320;
        if (bVar16) {
          local_218._56_4_ = SUB84(dVar10,0);
          local_218._48_8_ = (double)(float)uVar5;
          local_218._60_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1d8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
          local_1d8.m128d_f64._0_12_ = auVar11;
          dStack_1c0 = 0.0;
          local_1b8.m128d_f64[1] = dVar15;
          local_1b8.m128d_f64[0] = dVar14;
          local_1a8 = dVar12;
          dStack_1a0 = dVar13;
          local_218._28_4_ = (int)local_258;
          local_218._24_4_ = uVar26;
          local_218._20_4_ = BroadPhase;
          if (param_2 != (FQueryFastData *)0x0) {
            pTVar23 = param_2->Dir;
            local_188._s_0.X = (double)*(undefined8 *)pTVar23;
            local_188._s_0.Y = (double)*(undefined8 *)&pTVar23->field_0x8;
            local_188._s_0.Z = (double)*(undefined8 *)&pTVar23->field_0x10;
            local_170._s_0.X = (double)*(undefined8 *)&param_2->InvDir;
            local_170._s_0.Y = (double)*(undefined8 *)&(param_2->InvDir).field_0x8;
            local_190 = 1;
            local_170._s_0.Z = (double)*(undefined8 *)&(param_2->InvDir).field_0x10;
            dStack_158 = param_2->CurrentLength;
            local_148 = ((param_2->bParallel[2] & 1U) * '\x02' | param_2->bParallel[1] & 1U) *
                        '\x02' | param_2->bParallel[0] & 1U | local_148 & 0xf8;
            dStack_150 = param_2->InvCurrentLength;
          }
          local_218[8] = 1;
          local_218._32_8_ = (double)fVar1;
          local_218._40_8_ = (double)fVar2;
          local_1c8 = dVar4;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar18 = 2;
LAB_1441695dc:
          bVar16 = true;
LAB_1441695df:
          local_2a0[1] = *(TGeometryParticleHandleImp<double,3,1> **)((longlong)FVar27 + lVar29);
          ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::InsertHit
                    (this->HitBuffer,(FPTOverlapHit *)local_2a0,bVar16);
          bVar16 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar16) {
            local_e8._s_0.X = local_288;
            local_e8._s_0.Y = dStack_280;
            local_e8._s_0.Z = local_278;
            local_140 = (EChaosVDCollisionQueryHitType)bVar18;
            local_130 = 1;
          }
          bVar16 = this->bAnyHit;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_218);
          puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2a8 = local_324;
          local_2b0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar21 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b0,puVar20);
          FChaosVDThreadContext::PopContext(pFVar21);
          return bVar16 == false;
        }
        bVar18 = (**(code **)((longlong)*this->QueryCallback + 0x18))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)((longlong)FVar27 + local_320),pTVar6);
        if (bVar18 != 0) {
          if (((bVar18 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            bVar16 = false;
            goto LAB_1441695df;
          }
          goto LAB_1441695dc;
        }
        local_d0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_218);
        puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2b8 = &local_325;
        local_2c0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar21 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2c0,puVar20);
        FChaosVDThreadContext::PopContext(pFVar21);
        local_320 = lVar29 + 8;
        uVar26 = uVar26 + 1;
        iVar25 = *(int *)((longlong)local_2e8 + 0x10);
        plVar28 = local_318;
      } while ((int)uVar26 < iVar25);
    }
  }
  return true;
}

// Visit<2> @ 144169700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::
Visit<2>(TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
         *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
        FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar6;
  TVector<double,3> *pTVar7;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *pFVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TGeometryParticle<double,3> *pTVar16;
  int iVar17;
  bool bVar18;
  undefined1 uVar19;
  byte bVar20;
  uint uVar21;
  uint *puVar22;
  FChaosVDThreadContext *pFVar23;
  FChaosVDContext *pFVar24;
  int iVar25;
  uint uVar26;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar27;
  longlong lVar28;
  undefined1 auStack_328 [32];
  longlong local_308;
  longlong local_300;
  undefined1 local_2f8;
  undefined1 local_2f7;
  undefined1 local_2f6;
  undefined1 local_2f5;
  undefined1 local_2f4 [4];
  TGeometryParticle<double,3> *local_2f0;
  FChaosVDContext local_2e8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  TGeometryParticle<double,3> *local_2b0 [2];
  undefined4 local_2a0;
  undefined4 uStack_29c;
  double dStack_298;
  double dStack_290;
  double dStack_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  code *local_278;
  undefined1 *local_270;
  code *local_268;
  undefined1 *local_260;
  code *local_258;
  undefined1 *local_250;
  code *local_248;
  undefined1 *local_240;
  FChaosVDOptionalDataChannel *local_238;
  TReferenceControllerBase<1> *pTStack_230;
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
  
  dVar15 = _UNK_150689688;
  dVar14 = ___xmm_3ff00000000000003ff0000000000000;
  dVar13 = _UNK_150689518;
  dVar12 = ___xmm_00000000000000003ff0000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_328;
  local_2e8.CurrentDataChannel.Object =
       *(FChaosVDOptionalDataChannel **)&(param_1->Payload).CachedUniqueIdx;
  local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&(param_1->Payload).UnionQueryFilterData.Word1;
  local_2c8 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  uStack_2c0._0_4_ = (param_1->Payload).UnionSimFilterData.Word1;
  uStack_2c0._4_4_ = (param_1->Payload).UnionSimFilterData.Word2;
  local_2f8 = 1;
  local_2b8 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  local_2f0 = (param_1->Payload).ExternalGeometryParticle;
  if (local_2f0 == (TGeometryParticle<double,3> *)0x0) {
    local_2f8 = 1;
  }
  else {
    uVar26 = 0;
    local_2a0 = 0xffffffff;
    dStack_288 = 0.0;
    dStack_298 = 0.0;
    dStack_290 = 0.0;
    local_280 = 0xffffffff;
    iVar25 = (local_2f0->MShapesArray).ArrayNum;
    if (0 < iVar25) {
      iVar17 = (int)local_2e8.CurrentDataChannel.Object;
      lVar28 = 0;
      local_2b0[0] = local_2f0;
      do {
        pTVar16 = local_2f0;
        FVar27 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&local_2f0->MShapesArray;
        uVar21 = 0;
        if ((int)uVar26 < iVar25) {
          uVar21 = ~uVar26 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_300 = (longlong)iVar25;
          local_308 = (longlong)(int)uVar26;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar9 = (code *)swi(3);
            uVar19 = (*pcVar9)();
            return (bool)uVar19;
          }
        }
        FVar6 = (pTVar16->MShapesArray).AllocatorInstance.SecondaryData;
        if (FVar6 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar27 = FVar6;
        }
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_270 = &local_2f7;
        local_278 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_278,puVar22);
        pFVar24 = FChaosVDThreadContext::GetCurrentContext(pFVar23);
        if (pFVar24 != (FChaosVDContext *)0x0) {
          local_2e8.OwnerID = pFVar24->OwnerID;
          local_2e8.Id = pFVar24->Id;
          local_2e8.Type = pFVar24->Type;
          local_2e8.Attributes = pFVar24->Attributes;
          local_238 = (pFVar24->CurrentDataChannel).Object;
          pTStack_230 = (pFVar24->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_230 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_230->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_230->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_2e8.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
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
                    (pTStack_230);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_260 = &local_2f6;
          local_268 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_268,puVar22);
          FChaosVDThreadContext::PushContext(pFVar23,&local_2e8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2e8.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        pTVar16 = local_2f0;
        fVar1 = *(float *)&(local_2f0->MXR).Property.MR;
        fVar2 = *(float *)&(local_2f0->MXR).Property.MR.field_0x4;
        fVar3 = *(float *)&(local_2f0->MXR).Property.MR.field_0x8;
        dVar4 = *(double *)&(local_2f0->MXR).Property.MX.field_0x10;
        local_158 = local_158 & 0xf8;
        local_228._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_228._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_1a8 = &___7FChaosVDQueryFastData__6B_;
        local_228[8] = 0;
        local_228._16_4_ = -1;
        local_228._20_4_ = Invalid;
        local_228._24_4_ = 0;
        local_228._28_4_ = -1;
        local_1a0 = 0;
        local_150 = None;
        local_140 = 0;
        local_148 = &___7FChaosVDQueryHitData__6B_;
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
        uVar5 = *(undefined8 *)&(local_2f0->MXR).Property.MX.field_0x8;
        auVar11 = *(undefined1 (*) [12])&(local_2f0->MXR).Property.MX;
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
        dVar10 = (double)*(float *)&(local_2f0->MXR).Property.MR.field_0xc;
        bVar18 = FChaosVisualDebuggerTrace::IsTracing();
        if (bVar18) {
          local_228._56_4_ = SUB84(dVar10,0);
          local_228._48_8_ = (double)fVar3;
          local_228._60_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1e8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
          local_1e8.m128d_f64._0_12_ = auVar11;
          dStack_1d0 = 0.0;
          local_1c8.m128d_f64[1] = dVar15;
          local_1c8.m128d_f64[0] = dVar14;
          local_1b8 = dVar12;
          dStack_1b0 = dVar13;
          local_228._28_4_ = iVar17;
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
          local_1d8 = dVar4;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar20 = 2;
LAB_144169c53:
          local_2b0[1] = *(TGeometryParticle<double,3> **)((longlong)FVar27 + lVar28);
          pFVar8 = this->HitBuffer;
          *(TGeometryParticle<double,3> **)&pFVar8->CurrentBlockingHit = local_2b0[0];
          *(TGeometryParticle<double,3> **)&(pFVar8->CurrentBlockingHit).field_0x8 = local_2b0[1];
          *(ulonglong *)&(pFVar8->CurrentBlockingHit).field_0x10 = CONCAT44(uStack_29c,local_2a0);
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x18 = dStack_298;
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x20 = dStack_290;
          *(double *)&(pFVar8->CurrentBlockingHit).field_0x28 = dStack_288;
          *(ulonglong *)&(pFVar8->CurrentBlockingHit).field_0x30 = CONCAT44(uStack_27c,local_280);
          pFVar8->bHasBlockingHit = true;
LAB_144169c86:
          bVar18 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar18) {
            local_f8._s_0.X = dStack_298;
            local_f8._s_0.Y = dStack_290;
            local_f8._s_0.Z = dStack_288;
            local_150 = (EChaosVDCollisionQueryHitType)bVar20;
            local_140 = 1;
          }
          local_2f8 = this->bAnyHit == false;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
          puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_240 = local_2f4;
          local_248 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar23 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_248,puVar22);
          FChaosVDThreadContext::PopContext(pFVar23);
          return (bool)local_2f8;
        }
        bVar20 = (**(code **)((longlong)*this->QueryCallback + 0x20))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)((longlong)FVar27 + lVar28),pTVar16);
        if (bVar20 != 0) {
          if (((bVar20 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            local_2b0[1] = *(TGeometryParticle<double,3> **)((longlong)FVar27 + lVar28);
            ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::AddTouchingHit
                      (this->HitBuffer,(FOverlapHit *)local_2b0);
            goto LAB_144169c86;
          }
          goto LAB_144169c53;
        }
        local_e0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_228);
        puVar22 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_250 = &local_2f5;
        local_258 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar23 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_258,puVar22);
        FChaosVDThreadContext::PopContext(pFVar23);
        uVar26 = uVar26 + 1;
        lVar28 = lVar28 + 8;
        iVar25 = (local_2f0->MShapesArray).ArrayNum;
      } while ((int)uVar26 < iVar25);
    }
  }
  return (bool)local_2f8;
}

// Visit<2> @ 144169da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
Visit<2>(TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
         *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
        FQueryFastData *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  undefined1 uVar17;
  byte bVar18;
  uint uVar19;
  uint *puVar20;
  FChaosVDThreadContext *pFVar21;
  FChaosVDContext *pFVar22;
  TVector<double,3> *pTVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar27;
  longlong *plVar28;
  longlong lVar29;
  undefined1 auStackY_358 [32];
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324 [4];
  longlong local_320;
  longlong *local_318;
  FChaosVDContext local_310;
  longlong local_2f0;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> local_2e8;
  code *local_2e0;
  undefined1 *local_2d8;
  code *local_2d0;
  undefined1 *local_2c8;
  code *local_2c0;
  undefined1 *local_2b8;
  code *local_2b0;
  undefined1 *local_2a8;
  TGeometryParticleHandleImp<double,3,1> *local_2a0 [2];
  undefined4 local_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined4 local_270;
  TGeometryParticle<double,3> *local_268;
  TGeometryParticleHandleImp<double,3,1> *pTStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  FChaosVDOptionalDataChannel *local_230;
  TReferenceControllerBase<1> *pTStack_228;
  undefined1 local_218 [64];
  __m128d local_1d8;
  double local_1c8;
  double dStack_1c0;
  __m128d local_1b8;
  double local_1a8;
  double dStack_1a0;
  undefined **local_198;
  undefined1 local_190;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  double dStack_158;
  double dStack_150;
  byte local_148;
  EChaosVDCollisionQueryHitType local_140;
  undefined **local_138;
  undefined1 local_130;
  float local_128;
  int local_124;
  ushort local_120;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  EChaosVDSQVisitRejectReason local_d0;
  int local_cc;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_258._0_4_ = (param_1->Payload).CachedUniqueIdx.Idx;
  local_258._4_4_ = (param_1->Payload).UnionQueryFilterData.Word0;
  uStack_250._0_4_ = (param_1->Payload).UnionQueryFilterData.Word1;
  uStack_250._4_4_ = (param_1->Payload).UnionQueryFilterData.Word2;
  pTVar6 = (param_1->Payload).GeometryParticleHandle;
  local_268 = (param_1->Payload).ExternalGeometryParticle;
  pTStack_260 = (param_1->Payload).GeometryParticleHandle;
  local_248 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  uStack_240._0_4_ = (param_1->Payload).UnionSimFilterData.Word1;
  uStack_240._4_4_ = (param_1->Payload).UnionSimFilterData.Word2;
  local_238 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  if (pTVar6 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1732238023615054426>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                        ,0x25a,"bGTData");
    if (bVar16) {
      pcVar9 = (code *)swi(3);
      uVar17 = (*pcVar9)();
      return (bool)uVar17;
    }
  }
  else {
    local_318 = &pTVar6->_padding_;
    local_2e8 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )Chaos::TGeometryParticlesImp<double,3,0>::ShapesArray
                            ((TGeometryParticlesImp<double,3,0> *)pTVar6->_padding_,
                             (int)pTVar6->_padding_);
    dVar15 = _UNK_150689688;
    dVar14 = ___xmm_3ff00000000000003ff0000000000000;
    dVar13 = _UNK_150689518;
    dVar12 = ___xmm_00000000000000003ff0000000000000;
    uVar26 = 0;
    local_290 = 0xffffffff;
    local_270 = 0xffffffff;
    local_278 = 0.0;
    local_288 = 0.0;
    dStack_280 = 0.0;
    iVar25 = *(int *)((longlong)local_2e8 + 0x10);
    if (0 < iVar25) {
      local_320 = 0;
      plVar28 = &pTVar6->_padding_;
      local_2a0[0] = pTVar6;
      do {
        FVar27 = local_2e8;
        uVar19 = 0;
        if ((int)uVar26 < iVar25) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          uVar17 = (*pcVar9)();
          return (bool)uVar17;
        }
        FVar7 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  *)((longlong)FVar27 + 8);
        if (FVar7 != (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                      )0x0) {
          FVar27 = FVar7;
        }
        puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2d8 = &local_327;
        local_2e0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar21 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2e0,puVar20);
        pFVar22 = FChaosVDThreadContext::GetCurrentContext(pFVar21);
        if (pFVar22 != (FChaosVDContext *)0x0) {
          local_310.OwnerID = pFVar22->OwnerID;
          local_310.Id = pFVar22->Id;
          local_310.Type = pFVar22->Type;
          local_310.Attributes = pFVar22->Attributes;
          local_230 = (pFVar22->CurrentDataChannel).Object;
          pTStack_228 = (pFVar22->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          if (pTStack_228 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_228->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_228->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_310.CurrentDataChannel.SharedReferenceCount.ReferenceController =
               CVDDC_SceneQueries.SharedReferenceCount.ReferenceController;
          local_310.CurrentDataChannel.Object = CVDDC_SceneQueries.Object;
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
                    (pTStack_228);
          puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2c8 = &local_326;
          local_2d0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar21 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2d0,puVar20);
          FChaosVDThreadContext::PushContext(pFVar21,&local_310);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_310.CurrentDataChannel.SharedReferenceCount.ReferenceController);
        }
        local_148 = local_148 & 0xf8;
        local_218._32_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_218._40_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_198 = &___7FChaosVDQueryFastData__6B_;
        local_218._0_8_ = &___7FChaosVDQueryVisitStep__6B_;
        local_138 = &___7FChaosVDQueryHitData__6B_;
        local_218[8] = 0;
        local_218._16_4_ = -1;
        local_218._20_4_ = Invalid;
        local_218._24_4_ = 0;
        local_218._28_4_ = -1;
        local_190 = 0;
        local_140 = None;
        local_130 = 0;
        local_128 = 0.0;
        local_124 = -1;
        local_120 = 0;
        local_d0 = None;
        local_218._56_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_218._48_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_1c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_cc = -1;
        local_1d8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0)
        ;
        local_1d8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1d8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_1a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1b8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0)
        ;
        local_1b8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1b8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        dStack_158 = 0.0;
        dStack_150 = 0.0;
        local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_170._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_170._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_170._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_118._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_118._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_118._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_100._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_100._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_100._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pTVar23 = Chaos::TParticles<double,3>::GetX
                            ((TParticles<double,3> *)pTVar6->_padding_,(uint)*plVar28);
        local_2f0 = pTVar6->_padding_;
        uVar19 = (uint)*local_318;
        lVar29 = (longlong)(int)uVar19;
        uVar24 = 0;
        if ((int)uVar19 < *(int *)(local_2f0 + 0x50)) {
          uVar24 = ~uVar19 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          uVar17 = (*pcVar9)();
          return (bool)uVar17;
        }
        uVar3 = *(undefined8 *)&pTVar23->field_0x8;
        auVar11 = *(undefined1 (*) [12])pTVar23;
        dVar4 = *(double *)&pTVar23->field_0x10;
        lVar8 = *(longlong *)(local_2f0 + 0x48);
        fVar1 = *(float *)(lVar8 + lVar29 * 0x10);
        fVar2 = *(float *)(lVar8 + 4 + lVar29 * 0x10);
        uVar5 = *(undefined8 *)(lVar8 + 8 + lVar29 * 0x10);
        dVar10 = (double)(float)((ulonglong)uVar5 >> 0x20);
        bVar16 = FChaosVisualDebuggerTrace::IsTracing();
        lVar29 = local_320;
        if (bVar16) {
          local_218._56_4_ = SUB84(dVar10,0);
          local_218._48_8_ = (double)(float)uVar5;
          local_218._60_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1d8.m128d_f64[1]._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
          local_1d8.m128d_f64._0_12_ = auVar11;
          dStack_1c0 = 0.0;
          local_1b8.m128d_f64[1] = dVar15;
          local_1b8.m128d_f64[0] = dVar14;
          local_1a8 = dVar12;
          dStack_1a0 = dVar13;
          local_218._28_4_ = (int)local_258;
          local_218._24_4_ = uVar26;
          local_218._20_4_ = BroadPhase;
          if (param_2 != (FQueryFastData *)0x0) {
            pTVar23 = param_2->Dir;
            local_188._s_0.X = (double)*(undefined8 *)pTVar23;
            local_188._s_0.Y = (double)*(undefined8 *)&pTVar23->field_0x8;
            local_188._s_0.Z = (double)*(undefined8 *)&pTVar23->field_0x10;
            local_170._s_0.X = (double)*(undefined8 *)&param_2->InvDir;
            local_170._s_0.Y = (double)*(undefined8 *)&(param_2->InvDir).field_0x8;
            local_190 = 1;
            local_170._s_0.Z = (double)*(undefined8 *)&(param_2->InvDir).field_0x10;
            dStack_158 = param_2->CurrentLength;
            local_148 = ((param_2->bParallel[2] & 1U) * '\x02' | param_2->bParallel[1] & 1U) *
                        '\x02' | param_2->bParallel[0] & 1U | local_148 & 0xf8;
            dStack_150 = param_2->InvCurrentLength;
          }
          local_218[8] = 1;
          local_218._32_8_ = (double)fVar1;
          local_218._40_8_ = (double)fVar2;
          local_1c8 = dVar4;
        }
        if (((this->QueryFilterData->flags).mBits & 4) == 0) {
          bVar18 = 2;
LAB_14416a39c:
          bVar16 = true;
LAB_14416a39f:
          local_2a0[1] = *(TGeometryParticleHandleImp<double,3,1> **)((longlong)FVar27 + lVar29);
          ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::InsertHit
                    (this->HitBuffer,(FPTOverlapHit *)local_2a0,bVar16);
          bVar16 = FChaosVisualDebuggerTrace::IsTracing();
          if (bVar16) {
            local_e8._s_0.X = local_288;
            local_e8._s_0.Y = dStack_280;
            local_e8._s_0.Z = local_278;
            local_140 = (EChaosVDCollisionQueryHitType)bVar18;
            local_130 = 1;
          }
          bVar16 = this->bAnyHit;
          FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_218);
          puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2a8 = local_324;
          local_2b0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar21 = (FChaosVDThreadContext *)
                    FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b0,puVar20);
          FChaosVDThreadContext::PopContext(pFVar21);
          return bVar16 == false;
        }
        bVar18 = (**(code **)((longlong)*this->QueryCallback + 0x18))
                           (this->QueryCallback,&this->QueryFilterDataConcrete,
                            *(undefined8 *)((longlong)FVar27 + local_320),pTVar6);
        if (bVar18 != 0) {
          if (((bVar18 != 2) && (this->bAnyHit == false)) &&
             (this->HitBuffer->bSingleResult == false)) {
            bVar16 = false;
            goto LAB_14416a39f;
          }
          goto LAB_14416a39c;
        }
        local_d0 = PreFilter;
        FChaosVisualDebuggerTrace::TraceSceneQueryVisit((FChaosVDQueryVisitStep *)local_218);
        puVar20 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_2b8 = &local_325;
        local_2c0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar21 = (FChaosVDThreadContext *)
                  FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2c0,puVar20);
        FChaosVDThreadContext::PopContext(pFVar21);
        local_320 = lVar29 + 8;
        uVar26 = uVar26 + 1;
        iVar25 = *(int *)((longlong)local_2e8 + 0x10);
        plVar28 = local_318;
      } while ((int)uVar26 < iVar25);
    }
  }
  return true;
}

// ~TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1> @ 1441a0e20

void __thiscall
TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::
~TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          (TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TBox_N_02_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0> @ 1441a0e40

void __thiscall
TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::
~TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          (TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TBox_N_02_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1> @ 1441a0e60

void __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::
~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0> @ 1441a0e80

void __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::
~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1> @ 1441a0ea0

void __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::
~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0> @ 1441a0ec0

void __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::
~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1> @ 1441a0ee0

void __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::
~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0> @ 1441a0f00

void __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::
~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1> @ 1441a0f20

void __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::
~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0> @ 1441a0f40

void __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::
~TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1> @ 1441a0f60

void __thiscall
TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::
~TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          (TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0> @ 1441a0f80

void __thiscall
TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::
~TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          (TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1> @ 1441a0fa0

void __thiscall
TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::
~TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          (TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_VFCapsule_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0> @ 1441a0fc0

void __thiscall
TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
~TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          (TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_VFCapsule_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1> @ 1441a0fe0

void __thiscall
TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::
~TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          (TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_VFConvex_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  return;
}

// ~TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0> @ 1441a1000

void __thiscall
TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
~TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          (TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_VFConvex_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  return;
}

// GetQueryData @ 1441af5a0

void * __thiscall
TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::GetQueryData(TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 1441af5b0

void * __thiscall
TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::GetQueryData(TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 1441af5c0

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::GetQueryData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 1441af5d0

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::GetQueryData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 1441af5e0

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::GetQueryData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 1441af5f0

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::GetQueryData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 1441af600

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::GetQueryData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 1441af610

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::GetQueryData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 1441af620

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::GetQueryData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 1441af630

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::GetQueryData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 1441af640

void * __thiscall
TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::GetQueryData(TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 1441af650

void * __thiscall
TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::GetQueryData(TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
               *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 1441af660

void * __thiscall
TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::
GetQueryData(TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
             *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 1441af670

void * __thiscall
TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
GetQueryData(TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
             *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 1441af680

void * __thiscall
TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::
GetQueryData(TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
             *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryData @ 1441af690

void * __thiscall
TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
GetQueryData(TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
             *this)

{
  return &this->QueryFilterDataConcrete;
}

// GetQueryPayload @ 1441af980

void * __thiscall
TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::GetQueryPayload(TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 1441af990

void * __thiscall
TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::GetQueryPayload(TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 1441af9a0

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::GetQueryPayload(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 1441af9b0

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::GetQueryPayload(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 1441af9c0

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::GetQueryPayload(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 1441af9d0

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::GetQueryPayload(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 1441af9e0

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::GetQueryPayload(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 1441af9f0

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::GetQueryPayload(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 1441afa00

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::GetQueryPayload(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 1441afa10

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::GetQueryPayload(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 1441afa20

void * __thiscall
TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::GetQueryPayload(TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 1441afa30

void * __thiscall
TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::GetQueryPayload(TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
                  *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 1441afa40

void * __thiscall
TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::
GetQueryPayload(TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
                *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 1441afa50

void * __thiscall
TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
GetQueryPayload(TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
                *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 1441afa60

void * __thiscall
TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::
GetQueryPayload(TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
                *this)

{
  return (void *)0x0;
}

// GetQueryPayload @ 1441afa70

void * __thiscall
TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
GetQueryPayload(TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
                *this)

{
  return (void *)0x0;
}

// GetSimData @ 1441afee0

void * __thiscall
TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::GetSimData(TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 1441afef0

void * __thiscall
TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::GetSimData(TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 1441aff00

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::GetSimData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 1441aff10

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::GetSimData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 1441aff20

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::GetSimData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 1441aff30

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::GetSimData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 1441aff40

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::GetSimData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 1441aff50

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::GetSimData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 1441aff60

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::GetSimData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 1441aff70

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::GetSimData(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 1441aff80

void * __thiscall
TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::GetSimData(TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 1441aff90

void * __thiscall
TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::GetSimData(TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
             *this)

{
  return (void *)0x0;
}

// GetSimData @ 1441affa0

void * __thiscall
TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::
GetSimData(TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this)

{
  return (void *)0x0;
}

// GetSimData @ 1441affb0

void * __thiscall
TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
GetSimData(TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  return (void *)0x0;
}

// GetSimData @ 1441affc0

void * __thiscall
TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::
GetSimData(TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this)

{
  return (void *)0x0;
}

// GetSimData @ 1441affd0

void * __thiscall
TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
GetSimData(TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this)

{
  return (void *)0x0;
}

// Overlap @ 1441b2130

bool __thiscall
TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Overlap(TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 1441b2140

bool __thiscall
TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Overlap(TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 1441b2150

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Overlap(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 1441b2160

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Overlap(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 1441b2170

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Overlap(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 1441b2180

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Overlap(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 1441b2190

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Overlap(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 1441b21a0

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Overlap(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 1441b21b0

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Overlap(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 1441b21c0

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Overlap(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 1441b21d0

bool __thiscall
TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Overlap(TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 1441b21e0

bool __thiscall
TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Overlap(TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 1441b21f0

bool __thiscall
TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::
Overlap(TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 1441b2200

bool __thiscall
TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
Overlap(TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 1441b2210

bool __thiscall
TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::
Overlap(TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Overlap @ 1441b2220

bool __thiscall
TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
Overlap(TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  bool bVar1;
  
  bVar1 = Visit<2>(this,param_1,(FQueryFastData *)0x0);
  return bVar1;
}

// Raycast @ 1441b3440

bool __thiscall
TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Raycast(TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Raycast @ 1441b3480

bool __thiscall
TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Raycast(TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Raycast @ 1441b34c0

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Raycast(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Raycast @ 1441b3500

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Raycast(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Raycast @ 1441b3540

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Raycast(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Raycast @ 1441b3580

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Raycast(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Raycast @ 1441b35c0

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Raycast(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Raycast @ 1441b3600

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Raycast(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Raycast @ 1441b3640

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Raycast(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Raycast @ 1441b3680

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Raycast(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Raycast @ 1441b36c0

bool __thiscall
TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Raycast(TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Raycast @ 1441b3700

bool __thiscall
TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Raycast(TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
          *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Raycast @ 1441b3740

bool __thiscall
TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::
Raycast(TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Raycast @ 1441b3780

bool __thiscall
TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
Raycast(TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Raycast @ 1441b37c0

bool __thiscall
TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::
Raycast(TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Raycast @ 1441b3800

bool __thiscall
TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
Raycast(TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Sweep @ 1441baa10

bool __thiscall
TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Sweep(TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Sweep @ 1441baa50

bool __thiscall
TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Sweep(TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Sweep @ 1441baa90

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Sweep(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Sweep @ 1441baad0

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Sweep(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Sweep @ 1441bab10

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Sweep(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Sweep @ 1441bab50

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Sweep(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Sweep @ 1441bab90

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Sweep(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Sweep @ 1441babd0

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Sweep(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Sweep @ 1441bac10

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Sweep(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Sweep @ 1441bac50

bool __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Sweep(TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Sweep @ 1441bac90

bool __thiscall
TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::Sweep(TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Sweep @ 1441bacd0

bool __thiscall
TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::Sweep(TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
        *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Sweep @ 1441bad10

bool __thiscall
TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::Sweep
          (TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Sweep @ 1441bad50

bool __thiscall
TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
Sweep(TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
      *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Sweep @ 1441bad90

bool __thiscall
TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::Sweep
          (TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

// Sweep @ 1441badd0

bool __thiscall
TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
Sweep(TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
      *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
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

