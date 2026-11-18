// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 12

// FDefaultXRLoadingScreen @ 14cf7d610

FDefaultXRLoadingScreen * __thiscall
FDefaultXRLoadingScreen::FDefaultXRLoadingScreen
          (FDefaultXRLoadingScreen *this,IXRTrackingSystem *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  FDefaultXRLoadingScreen *pFVar7;
  longlong *plVar8;
  LARGE_INTEGER local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  *(undefined ***)this = &___7IXRLoadingScreen__6B_;
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->field_0x8,NewObject);
  *(undefined ***)this = &TXRLoadingScreenBase<FSplashData>::_vftable__for__IXRLoadingScreen__;
  *(undefined ***)&this->field_0x8 =
       &TXRLoadingScreenBase<FSplashData>::_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(IXRTrackingSystem **)&this->field_0x20 = param_1;
  uVar5 = UE::Math::TQuat<double>::Identity.Y._4_4_;
  uVar4 = UE::Math::TQuat<double>::Identity.Y._0_4_;
  uVar3 = UE::Math::TQuat<double>::Identity.X._4_4_;
  *(undefined4 *)&this->field_0x30 = UE::Math::TQuat<double>::Identity.X._0_4_;
  *(undefined4 *)&this->field_0x34 = uVar3;
  *(undefined4 *)&this->field_0x38 = uVar4;
  *(undefined4 *)&this->field_0x3c = uVar5;
  uVar5 = UE::Math::TQuat<double>::Identity.W._4_4_;
  uVar4 = UE::Math::TQuat<double>::Identity.W._0_4_;
  uVar3 = UE::Math::TQuat<double>::Identity.Z._4_4_;
  *(undefined4 *)&this->field_0x40 = UE::Math::TQuat<double>::Identity.Z._0_4_;
  *(undefined4 *)&this->field_0x44 = uVar3;
  *(undefined4 *)&this->field_0x48 = uVar4;
  *(undefined4 *)&this->field_0x4c = uVar5;
  this->field_0x50 = 0;
  *(undefined4 *)&this->field_0x54 = 0x3c360b61;
  QueryPerformanceCounter(&local_res8);
  *(double *)&this->field_0x58 =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TrackingSystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Public\\XRLoadingScreenBase.h"
                       ,0x1a,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FDefaultXRLoadingScreen *)(*pcVar2)();
      return pFVar7;
    }
  }
  *(undefined2 *)&this->field_0x68 = 0;
  *(undefined ***)&this->field_0x60 = &___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)&this->field_0x60);
  *(undefined ***)this = &_vftable__for__IXRLoadingScreen__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__FTickableGameObject__;
  *(undefined ***)&this->field_0x60 = &___7FDefaultXRLoadingScreen__6B_;
  plVar8 = (longlong *)
           (**(code **)(**(longlong **)&this->field_0x20 + 0x120))
                     (*(longlong **)&this->field_0x20,local_18);
  lVar1 = *plVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if (lVar1 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TrackingSystem->GetStereoRenderingDevice().IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultXRLoadingScreen.cpp"
                       ,0xe,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FDefaultXRLoadingScreen *)(*pcVar2)();
      return pFVar7;
    }
  }
  return this;
}

// AddReferencedObjects @ 14cf81bc0

void __thiscall
FDefaultXRLoadingScreen::AddReferencedObjects
          (FDefaultXRLoadingScreen *this,FReferenceCollector *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)&this[-1].field_0x28;
  lVar2 = *(longlong *)&this[-1].field_0x20;
  lVar3 = (longlong)iVar1 * 0x100 + lVar2;
  while( true ) {
    if (*(int *)&this[-1].field_0x28 != iVar1) {
      `TCheckedPointerIterator<FSplashData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (lVar2 == lVar3) break;
    FReferenceCollector::AddReferencedObject
              (param_1,(FWeakObjectPtr *)(lVar2 + 0xc4),(UObject *)0x0,(FProperty *)0x0);
    FReferenceCollector::AddReferencedObject
              (param_1,(FWeakObjectPtr *)(lVar2 + 0xd8),(UObject *)0x0,(FProperty *)0x0);
    lVar2 = lVar2 + 0x100;
  }
  return;
}

// ApplyDeltaRotation @ 14cf82be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDefaultXRLoadingScreen::ApplyDeltaRotation(FDefaultXRLoadingScreen *this,FSplashData *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  IStereoLayers *pIVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auStack_178 [32];
  FLayerDesc local_158;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_178;
  if ((this->field_0x50 != '\0') && (param_1->LayerId != 0)) {
    auVar32._8_8_ =
         -(ulonglong)(UE::Math::TQuat<double>::Identity.W == (param_1->Desc).DeltaRotation.W);
    auVar32._0_8_ =
         -(ulonglong)(UE::Math::TQuat<double>::Identity.Z == (param_1->Desc).DeltaRotation.Z);
    auVar28._8_8_ =
         -(ulonglong)(UE::Math::TQuat<double>::Identity.Y == (param_1->Desc).DeltaRotation.Y);
    auVar28._0_8_ =
         -(ulonglong)(UE::Math::TQuat<double>::Identity.X == (param_1->Desc).DeltaRotation.X);
    iVar14 = movmskpd((int)param_1,auVar32);
    uVar12 = movmskpd((int)local_68,auVar28);
    if ((iVar14 << 2 | uVar12) != 0xf) {
      pIVar13 = GetStereoLayers(this);
      IStereoLayers::FLayerDesc::FLayerDesc(&local_158);
      (**(code **)(pIVar13->_padding_ + 0x50))(pIVar13,param_1->LayerId,&local_158);
      dVar8 = (param_1->Desc).DeltaRotation.Z;
      dVar9 = (param_1->Desc).DeltaRotation.W;
      dVar10 = (param_1->Desc).DeltaRotation.X;
      dVar11 = (param_1->Desc).DeltaRotation.Y;
      dVar33 = local_158.Transform.Rotation.ZW.m128d_f64[1];
      dVar6 = local_158.Transform.Rotation.XY.m128d_f64[0];
      dVar25 = local_158.Transform.Rotation.XY.m128d_f64[1];
      auVar26._8_4_ = local_158.Transform.Rotation.XY.m128d_f64[1]._0_4_;
      auVar26._0_8_ = dVar25;
      auVar26._12_4_ = local_158.Transform.Rotation.XY.m128d_f64[1]._4_4_;
      auVar31._8_8_ = dVar10;
      auVar31._0_8_ = dVar11;
      auVar19._8_4_ = local_158.Transform.Rotation.ZW.m128d_f64[1]._0_4_;
      auVar19._0_8_ = dVar33;
      auVar19._12_4_ = local_158.Transform.Rotation.ZW.m128d_f64[1]._4_4_;
      dVar30 = local_158.Transform.Rotation.ZW.m128d_f64[0];
      auVar20._8_4_ = local_158.Transform.Rotation.ZW.m128d_f64[0]._0_4_;
      auVar20._0_8_ = dVar30;
      auVar20._12_4_ = local_158.Transform.Rotation.ZW.m128d_f64[0]._4_4_;
      dVar3 = dVar6 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
              dVar33 * dVar10 +
              dVar25 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
              dVar30 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar4 = dVar6 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              auVar19._8_8_ * dVar11 +
              auVar26._8_8_ * dVar9 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              auVar20._8_8_ * dVar10 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      auVar21._8_4_ = SUB84(dVar4,0);
      auVar21._0_8_ = dVar3;
      auVar21._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      dVar5 = dVar6 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
              dVar33 * dVar8 +
              dVar25 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              dVar30 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar6 = dVar6 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar33 * dVar9 +
              dVar25 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar30 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      auVar27._8_4_ = SUB84(dVar6,0);
      auVar27._0_8_ = dVar5;
      auVar27._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      dVar25 = dVar5 * dVar5 + dVar3 * dVar3;
      dVar30 = auVar27._8_8_ * dVar6 + auVar21._8_8_ * dVar4;
      auVar22._8_4_ = SUB84(dVar30,0);
      auVar22._0_8_ = dVar25;
      auVar22._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
      auVar23._0_8_ = auVar22._8_8_ + dVar25;
      auVar23._8_8_ = dVar25 + dVar30;
      auVar32 = sqrtpd(auVar31,auVar23);
      uVar15 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar23._0_8_)
      ;
      uVar17 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar23._8_8_)
      ;
      uVar16 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar23._0_8_)
      ;
      uVar18 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar23._8_8_)
      ;
      auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar32);
      auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar32);
      auVar29._0_8_ = uVar15 & (ulonglong)(auVar28._0_8_ * dVar3);
      uVar7 = uVar17 & (ulonglong)(auVar28._8_8_ * dVar4);
      auVar29._8_4_ = (undefined4)uVar7;
      auVar29._12_4_ = (undefined4)(uVar7 >> 0x20);
      auVar24._0_8_ = uVar16 & (ulonglong)(auVar32._0_8_ * dVar5);
      uVar7 = uVar18 & (ulonglong)(auVar32._8_8_ * dVar6);
      auVar24._8_4_ = (undefined4)uVar7;
      auVar24._12_4_ = (undefined4)(uVar7 >> 0x20);
      auVar1._4_4_ = ~(uint)(uVar15 >> 0x20) &
                     GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar1._0_4_ = ~(uint)uVar15 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar1._8_4_ = ~(uint)uVar17 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar1._12_4_ =
           ~(uint)(uVar17 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      local_158.Transform.Rotation.XY.m128d_f64 = (double  [2])(auVar29 | auVar1);
      auVar2._4_4_ = ~(uint)(uVar16 >> 0x20) &
                     GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar2._0_4_ = ~(uint)uVar16 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar2._8_4_ = ~(uint)uVar18 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar2._12_4_ =
           ~(uint)(uVar18 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      local_158.Transform.Rotation.ZW.m128d_f64 = (double  [2])(auVar24 | auVar2);
      (**(code **)(pIVar13->_padding_ + 0x48))(pIVar13,param_1->LayerId,&local_158);
      if (local_158.Shape.Wrapped.Ptr != (IStereoLayerShape *)0x0) {
        (**(code **)((longlong)*(IStereoLayerShape *)local_158.Shape.Wrapped.Ptr + 0x10))
                  (local_158.Shape.Wrapped.Ptr,1);
      }
      if (local_158.LeftTexture.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_158.LeftTexture.Reference);
      }
      if (local_158.Texture.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_158.Texture.Reference);
      }
    }
  }
  return;
}

// DoAddSplash @ 14cf87a60

void __thiscall
FDefaultXRLoadingScreen::DoAddSplash(FDefaultXRLoadingScreen *this,FSplashData *param_1)

{
  return;
}

// DoDeleteSplash @ 14cf87a70

void __thiscall
FDefaultXRLoadingScreen::DoDeleteSplash(FDefaultXRLoadingScreen *this,FSplashData *param_1)

{
  code *pcVar1;
  bool bVar2;
  IStereoLayers *pIVar3;
  
  pIVar3 = GetStereoLayers(this);
  if (pIVar3 == (IStereoLayers *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StereoLayers",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultXRLoadingScreen.cpp"
                       ,0x9d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->LayerId != 0) {
    (**(code **)(pIVar3->_padding_ + 0x10))(pIVar3);
    param_1->LayerId = 0;
  }
  return;
}

// DoHideSplash @ 14cf87ae0

void __thiscall
FDefaultXRLoadingScreen::DoHideSplash(FDefaultXRLoadingScreen *this,FSplashData *param_1)

{
  param_1->LayerId = 0;
  return;
}

// DoShowSplash @ 14cf87b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FDefaultXRLoadingScreen::DoShowSplash(FDefaultXRLoadingScreen *this,FSplashData *param_1)

{
  int iVar1;
  IStereoLayerShape IVar2;
  FRHITexture *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  TRefCountPtr<FRHITexture> TVar7;
  FShapeWrapper FVar8;
  TUniquePtr<IStereoLayerShape,TDefaultDelete<IStereoLayerShape>_> TVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  IStereoLayers *pIVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  FName *pFVar16;
  IStereoLayerShape *pIVar17;
  TUniquePtr<IStereoLayerShape,TDefaultDelete<IStereoLayerShape>_> TVar18;
  float fVar19;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [16];
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  FLayerDesc local_198;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  IStereoLayers::FLayerDesc::FLayerDesc(&local_198);
  uVar12 = param_1->LayerId;
  pIVar13 = GetStereoLayers(this);
  fVar19 = (float)(**(code **)(**(longlong **)&this->field_0x20 + 0x98))();
  if (uVar12 != 0) {
    (**(code **)(pIVar13->_padding_ + 0x50))(pIVar13,param_1->LayerId,&local_198);
  }
  local_198.Transform.Rotation.ZW.m128d_f64[0] = (param_1->Desc).Transform.Rotation.ZW.m128d_f64[0];
  local_198.Transform.Rotation.ZW.m128d_f64[1] = (param_1->Desc).Transform.Rotation.ZW.m128d_f64[1];
  local_198.Transform.Rotation.XY.m128d_f64[0] = (param_1->Desc).Transform.Rotation.XY.m128d_f64[0];
  local_198.Transform.Rotation.XY.m128d_f64[1] = (param_1->Desc).Transform.Rotation.XY.m128d_f64[1];
  local_198.Transform.Scale3D.XY.m128d_f64[0] = (param_1->Desc).Transform.Scale3D.XY.m128d_f64[0];
  local_198.Transform.Scale3D.XY.m128d_f64[1] = (param_1->Desc).Transform.Scale3D.XY.m128d_f64[1];
  local_198.Transform.Scale3D.ZW.m128d_f64[0] = (param_1->Desc).Transform.Scale3D.ZW.m128d_f64[0];
  local_198.Transform.Scale3D.ZW.m128d_f64[1] = (param_1->Desc).Transform.Scale3D.ZW.m128d_f64[1];
  dVar6 = (double)fVar19;
  local_a8.Rotation.ZW.m128d_f64[0] = *(double *)&this->field_0x40;
  local_a8.Rotation.ZW.m128d_f64[1] = *(double *)&this->field_0x48;
  dVar5 = (param_1->Desc).Transform.Translation.XY.m128d_f64[1] * dVar6;
  local_1c8._8_4_ = SUB84(dVar6,0);
  local_1c8._0_8_ = dVar6;
  local_1c8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_198.Transform.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar5,0);
  local_198.Transform.Translation.XY.m128d_f64[0] =
       (param_1->Desc).Transform.Translation.XY.m128d_f64[0] * dVar6;
  local_198.Transform.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dVar5 = (param_1->Desc).Transform.Translation.ZW.m128d_f64[1] * 0.0;
  local_198.Transform.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar5,0);
  local_198.Transform.Translation.ZW.m128d_f64[0] =
       dVar6 * (param_1->Desc).Transform.Translation.ZW.m128d_f64[0];
  local_198.Transform.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_a8.Rotation.XY.m128d_f64[0] = *(double *)&this->field_0x30;
  local_a8.Rotation.XY.m128d_f64[1] = *(double *)&this->field_0x38;
  local_a8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_a8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_1b8 = dVar6;
  UE::Math::TTransform<double>::Multiply(&local_198.Transform,&local_198.Transform,&local_a8);
  local_198.UVRect.Max.field0_0x0._s_0.X = (param_1->Desc).UVRect.Max.field0_0x0._s_0.X;
  local_198.UVRect.Max.field0_0x0._s_0.Y = (param_1->Desc).UVRect.Max.field0_0x0._s_0.Y;
  local_198.PositionType = TrackerLocked;
  local_1b0 = (param_1->Desc).Transform.Translation.XY.m128d_f64[0];
  dStack_1a8 = (param_1->Desc).Transform.Translation.XY.m128d_f64[1];
  dVar5 = (param_1->Desc).QuadSize.field0_0x0._s_0.Y * dVar6;
  local_198.QuadSize.field0_0x0._8_4_ = SUB84(dVar5,0);
  local_198.QuadSize.field0_0x0._s_0.X = (param_1->Desc).QuadSize.field0_0x0._s_0.X * dVar6;
  local_198.QuadSize.field0_0x0._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_198.UVRect.Min.field0_0x0._s_0.X = (param_1->Desc).UVRect.Min.field0_0x0._s_0.X;
  local_198.UVRect.Min.field0_0x0._s_0.Y = (param_1->Desc).UVRect.Min.field0_0x0._s_0.Y;
  local_198.UVRect.bIsValid = (param_1->Desc).UVRect.bIsValid;
  local_198.UVRect._33_7_ = *(undefined7 *)&(param_1->Desc).UVRect.field_0x21;
  local_198.Priority = 0x7fffffff - (int)(local_1b0 * __real_408f400000000000);
  local_1a0 = (param_1->Desc).Transform.Translation.ZW.m128d_f64[0];
  pUVar14 = FWeakObjectPtr::Get(&(param_1->Desc).TextureObj.WeakPtr);
  TVar18.Ptr = (IStereoLayerShape *)0x0;
  if (pUVar14 == (UObject *)0x0) {
LAB_14cf87d3c:
    if ((local_198.Shape.Wrapped.Ptr == (IStereoLayerShape *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shape.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\IStereoLayers.h"
                            ,0x8c,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar16 = (FName *)(**(code **)*(IStereoLayerShape *)local_198.Shape.Wrapped.Ptr)
                                 (local_198.Shape.Wrapped.Ptr,local_1d0);
    TVar9 = local_198.Shape.Wrapped.Ptr;
    if (*pFVar16 == FQuadLayer::ShapeName) goto LAB_14cf87dbb;
    pIVar17 = ::operator_new(8);
    if (pIVar17 != (IStereoLayerShape *)0x0) {
      *pIVar17 = (IStereoLayerShape)&___7FQuadLayer__6B_;
      TVar18.Ptr = pIVar17;
    }
  }
  else {
    pUVar15 = Z_Construct_UClass_UTextureCube_NoRegister();
    iVar1 = (int)pUVar15->_padding_;
    if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar15->_padding_)) goto LAB_14cf87d3c;
    if ((local_198.Shape.Wrapped.Ptr == (IStereoLayerShape *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shape.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\IStereoLayers.h"
                            ,0x8c,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar16 = (FName *)(**(code **)*(IStereoLayerShape *)local_198.Shape.Wrapped.Ptr)
                                 (local_198.Shape.Wrapped.Ptr,local_1d8);
    TVar9 = local_198.Shape.Wrapped.Ptr;
    if (*pFVar16 == FCubemapLayer::ShapeName) goto LAB_14cf87dbb;
    pIVar17 = ::operator_new(8);
    if (pIVar17 != (IStereoLayerShape *)0x0) {
      *pIVar17 = (IStereoLayerShape)&___7FCubemapLayer__6B_;
      TVar18.Ptr = pIVar17;
    }
  }
  FVar8.Wrapped.Ptr = local_198.Shape.Wrapped.Ptr;
  TVar9.Ptr = TVar18.Ptr;
  if (local_198.Shape.Wrapped.Ptr != (IStereoLayerShape *)0x0) {
    IVar2 = *(IStereoLayerShape *)local_198.Shape.Wrapped.Ptr;
    local_198.Shape.Wrapped.Ptr =
         (TUniquePtr<IStereoLayerShape,TDefaultDelete<IStereoLayerShape>_>)
         (TUniquePtr<IStereoLayerShape,TDefaultDelete<IStereoLayerShape>_>)TVar18.Ptr;
    (**(code **)((longlong)IVar2 + 0x10))(FVar8.Wrapped.Ptr,1);
    TVar9 = local_198.Shape.Wrapped.Ptr;
  }
LAB_14cf87dbb:
  local_198.Shape.Wrapped.Ptr =
       (TUniquePtr<IStereoLayerShape,TDefaultDelete<IStereoLayerShape>_>)
       (TUniquePtr<IStereoLayerShape,TDefaultDelete<IStereoLayerShape>_>)TVar9.Ptr;
  TVar7.Reference = local_198.Texture.Reference;
  local_198.TextureObj.WeakPtr = (param_1->Desc).TextureObj.WeakPtr;
  pFVar3 = (param_1->Desc).Texture.Reference;
  local_198.LeftTextureObj.WeakPtr = (param_1->Desc).LeftTextureObj.WeakPtr;
  if (local_198.Texture.Reference != pFVar3) {
    local_198.Texture.Reference = pFVar3;
    if (pFVar3 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar3);
    }
    if (TVar7.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)TVar7.Reference);
    }
  }
  TVar7.Reference = local_198.LeftTexture.Reference;
  pFVar3 = (param_1->Desc).LeftTexture.Reference;
  if (local_198.LeftTexture.Reference != pFVar3) {
    local_198.LeftTexture.Reference = pFVar3;
    if (pFVar3 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar3);
    }
    if (TVar7.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)TVar7.Reference);
    }
  }
  uVar11 = 4;
  if ((param_1->Desc).bIgnoreAlpha != false) {
    uVar11 = 6;
  }
  local_198.Flags =
       -(uint)((param_1->Desc).bIsExternal != false) & 0x10 | uVar11 |
       (uint)((param_1->Desc).bIsDynamic != false);
  if (uVar12 == 0) {
    uVar12 = (**(code **)(pIVar13->_padding_ + 8))(pIVar13,&local_198);
    param_1->LayerId = uVar12;
  }
  else {
    (**(code **)(pIVar13->_padding_ + 0x48))(pIVar13,param_1->LayerId,&local_198);
  }
  if (local_198.Shape.Wrapped.Ptr != (IStereoLayerShape *)0x0) {
    (**(code **)((longlong)*(IStereoLayerShape *)local_198.Shape.Wrapped.Ptr + 0x10))
              (local_198.Shape.Wrapped.Ptr,1);
  }
  if (local_198.LeftTexture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_198.LeftTexture.Reference);
  }
  if (local_198.Texture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_198.Texture.Reference);
  }
  return;
}

// GetReferencerName @ 14cf90a80

FString * __thiscall
FDefaultXRLoadingScreen::GetReferencerName
          (FDefaultXRLoadingScreen *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FDefaultXRLoadingScreen");
  return __return_storage_ptr__;
}

// GetStereoLayers @ 14cf910e0

/* WARNING: Enum "Type": Some values do not have unique names */

IStereoLayers * __thiscall FDefaultXRLoadingScreen::GetStereoLayers(FDefaultXRLoadingScreen *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  IStereoLayers *pIVar4;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  (**(code **)(**(longlong **)&this->field_0x20 + 0x120))(*(longlong **)&this->field_0x20,&local_18)
  ;
  pIVar4 = (IStereoLayers *)0x0;
  if (local_18 != (longlong *)0x0) {
    if ((local_18 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IStereoLayers *)(*pcVar1)();
      return pIVar4;
    }
    pIVar4 = (IStereoLayers *)(**(code **)(*local_18 + 0x88))();
    if ((pIVar4 == (IStereoLayers *)0x0) ||
       (cVar3 = (**(code **)(pIVar4->_padding_ + 0x28))(pIVar4), cVar3 == '\0')) {
      pIVar4 = (IStereoLayers *)0x0;
      if (2 < (byte)LogHMD._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
        pIVar4 = (IStereoLayers *)0x0;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return pIVar4;
}

// HideLoadingScreen @ 14cf92620

void __thiscall FDefaultXRLoadingScreen::HideLoadingScreen(FDefaultXRLoadingScreen *this)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  IStereoLayers *pIVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  if (this->field_0x50 != '\0') {
    iVar1 = *(int *)&this->field_0x18;
    lVar4 = *(longlong *)&this->field_0x10;
    lVar3 = (longlong)iVar1 * 0x100 + lVar4;
    while( true ) {
      if (*(int *)&this->field_0x18 != iVar1) {
        `TCheckedPointerIterator<FSplashData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (lVar4 == lVar3) break;
      (**(code **)(*(longlong *)this + 0x40))(this,lVar4);
      lVar4 = lVar4 + 0x100;
    }
    FTickableGameObject::SetTickableTickType((FTickableGameObject *)&this->field_0x8,Never);
    this->field_0x50 = 0;
    pIVar2 = GetStereoLayers(this);
    if (pIVar2 != (IStereoLayers *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(pIVar2->_padding_ + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00014cf926b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(pIVar2,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  return;
}

// IsPlayingLoadingMovie @ 14cf93110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FDefaultXRLoadingScreen::IsPlayingLoadingMovie(FDefaultXRLoadingScreen *this)

{
  int iVar1;
  bool bVar2;
  FSplashDesc *pFVar3;
  FSplashDesc *pFVar4;
  undefined1 auStack_148 [32];
  undefined1 local_128 [16];
  FSplashDesc local_118;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  if (this->field_0x50 == '\0') {
LAB_14cf931d0:
    bVar2 = false;
  }
  else {
    iVar1 = *(int *)&this->field_0x18;
    pFVar3 = *(FSplashDesc **)&this->field_0x10;
    pFVar4 = (FSplashDesc *)((longlong)iVar1 * 0x100 + (longlong)pFVar3);
    while( true ) {
      if (*(int *)&this->field_0x18 != iVar1) {
        `TCheckedPointerIterator<FSplashData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_128);
      }
      if (pFVar3 == pFVar4) goto LAB_14cf931d0;
      IXRLoadingScreen::FSplashDesc::FSplashDesc(&local_118,pFVar3);
      if (local_118.bIsDynamic != false) break;
      if (local_118.LeftTexture.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_118.LeftTexture.Reference);
      }
      if (local_118.Texture.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_118.Texture.Reference);
      }
      pFVar3 = (FSplashDesc *)&pFVar3[1].Transform.Rotation.ZW;
    }
    if (local_118.LeftTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_118.LeftTexture.Reference);
    }
    if (local_118.Texture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_118.Texture.Reference);
    }
    bVar2 = true;
  }
  return bVar2;
}

// ShowLoadingScreen @ 14cf9be40

void __thiscall FDefaultXRLoadingScreen::ShowLoadingScreen(FDefaultXRLoadingScreen *this)

{
  IStereoLayers *pIVar1;
  
  pIVar1 = GetStereoLayers(this);
  if (pIVar1 != (IStereoLayers *)0x0) {
    if (this->field_0x50 == '\0') {
      (**(code **)(pIVar1->_padding_ + 0x18))(pIVar1,0);
      (**(code **)(pIVar1->_padding_ + 0x30))(pIVar1);
    }
    TXRLoadingScreenBase<FSplashData>::ShowLoadingScreen((TXRLoadingScreenBase<FSplashData> *)this);
  }
  return;
}

