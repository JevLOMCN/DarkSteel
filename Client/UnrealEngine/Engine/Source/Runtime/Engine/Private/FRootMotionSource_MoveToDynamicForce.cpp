// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticStruct @ 147b9bbe0

UScriptStruct * __cdecl FRootMotionSource_MoveToDynamicForce::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRootMotionSource_MoveToDynamicForce.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRootMotionSource_MoveToDynamicForce.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce,
                         (UObject *)pUVar1,L"RootMotionSource_MoveToDynamicForce");
  }
  return Z_Registration_Info_UScriptStruct_FRootMotionSource_MoveToDynamicForce.OuterSingleton;
}

// Clone @ 147b9bce0

/* WARNING: Type propagation algorithm not settling */

FRootMotionSource * __thiscall
FRootMotionSource_MoveToDynamicForce::Clone(FRootMotionSource_MoveToDynamicForce *this)

{
  UCurveVector *pUVar1;
  UCurveFloat *pUVar2;
  double dVar3;
  FRootMotionSource *this_00;
  
  this_00 = ::operator_new(0x120);
  if (this_00 != (FRootMotionSource *)0x0) {
    FRootMotionSource::FRootMotionSource(this_00,(FRootMotionSource *)this);
    this_00->_padding_ = (longlong)&___7FRootMotionSource_MoveToDynamicForce__6B_;
    dVar3 = (this->StartLocation).field0_0x0._s_0.Y;
    this_00[1]._padding_ = (longlong)(this->StartLocation).field0_0x0._s_0.X;
    *(double *)&this_00[1].Priority = dVar3;
    *(double *)&this_00[1].InstanceName.Number = (this->StartLocation).field0_0x0._s_0.Z;
    dVar3 = (this->InitialTargetLocation).field0_0x0._s_0.Y;
    *(double *)&this_00[1].CurrentTime = (this->InitialTargetLocation).field0_0x0._s_0.X;
    *(double *)&this_00[1].Duration = dVar3;
    *(double *)&this_00[1].bNeedsSimulatedCatchup = (this->InitialTargetLocation).field0_0x0._s_0.Z;
    dVar3 = (this->TargetLocation).field0_0x0._s_0.Y;
    *(double *)&this_00[1].RootMotionParams = (this->TargetLocation).field0_0x0._s_0.X;
    this_00[1].RootMotionParams._padding_ = (longlong)dVar3;
    this_00[1].RootMotionParams.RootMotionTransform.Rotation.XY.m128d_f64[0] =
         (this->TargetLocation).field0_0x0._s_0.Z;
    *(bool *)(this_00[1].RootMotionParams.RootMotionTransform.Rotation.XY.m128d_f64 + 1) =
         this->bRestrictSpeedToExpected;
    pUVar1 = (this->PathOffsetCurve).field0_0x0.DebugPtr;
    this_00[1].RootMotionParams.RootMotionTransform.Rotation.ZW.m128d_f64[0] = (double)pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveVector *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar2 = (this->TimeMappingCurve).field0_0x0.DebugPtr;
    this_00[1].RootMotionParams.RootMotionTransform.Rotation.ZW.m128d_f64[1] = (double)pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    return this_00;
  }
  return (FRootMotionSource *)0x0;
}

// Matches @ 147b9be40

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FRootMotionSource_MoveToDynamicForce::Matches
          (FRootMotionSource_MoveToDynamicForce *this,FRootMotionSource *param_1)

{
  bool bVar1;
  
  bVar1 = FRootMotionSource::Matches((FRootMotionSource *)this,param_1);
  if ((((bVar1) &&
       (this->bRestrictSpeedToExpected ==
        (bool)*(char *)(param_1[1].RootMotionParams.RootMotionTransform.Rotation.XY.m128d_f64 + 1)))
      && ((this->PathOffsetCurve).field0_0x0.DebugPtr ==
          (UCurveVector *)param_1[1].RootMotionParams.RootMotionTransform.Rotation.ZW.m128d_f64[0]))
     && ((this->TimeMappingCurve).field0_0x0.DebugPtr ==
         (UCurveFloat *)param_1[1].RootMotionParams.RootMotionTransform.Rotation.ZW.m128d_f64[1])) {
    return true;
  }
  return false;
}

// MatchesAndHasSameState @ 147b9beb0

bool __thiscall
FRootMotionSource_MoveToDynamicForce::MatchesAndHasSameState
          (FRootMotionSource_MoveToDynamicForce *this,FRootMotionSource *param_1)

{
  char cVar1;
  double dVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x18))();
  if (((cVar1 != '\0') && (*(uchar *)((longlong)&this->_padding_ + 4) == (param_1->Status).Flags))
     && (param_1->CurrentTime == *(float *)&this->_padding_)) {
    dVar2 = (this->StartLocation).field0_0x0._s_0.X - (double)param_1[1]._padding_;
    if (((((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3f1a36e2e0000000) &&
         (dVar2 = (this->StartLocation).field0_0x0._s_0.Y - *(double *)&param_1[1].Priority,
         (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000)) &&
        ((dVar2 = (this->StartLocation).field0_0x0._s_0.Z -
                  *(double *)&param_1[1].InstanceName.Number,
         (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000 &&
         ((dVar2 = (this->TargetLocation).field0_0x0._s_0.X -
                   *(double *)&param_1[1].RootMotionParams,
          (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000 &&
          (dVar2 = (this->TargetLocation).field0_0x0._s_0.Y -
                   (double)param_1[1].RootMotionParams._padding_,
          (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000)))))) &&
       (dVar2 = (this->TargetLocation).field0_0x0._s_0.Z -
                param_1[1].RootMotionParams.RootMotionTransform.Rotation.XY.m128d_f64[0],
       (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000)) {
      return true;
    }
  }
  return false;
}

// UpdateStateFrom @ 147b9c060

bool __thiscall
FRootMotionSource_MoveToDynamicForce::UpdateStateFrom
          (FRootMotionSource_MoveToDynamicForce *this,FRootMotionSource *param_1,bool param_2)

{
  double dVar1;
  bool bVar2;
  
  bVar2 = FRootMotionSource::UpdateStateFrom((FRootMotionSource *)this,param_1,param_2);
  if (!bVar2) {
    return false;
  }
  dVar1 = *(double *)&param_1[1].Priority;
  (this->StartLocation).field0_0x0._s_0.X = (double)param_1[1]._padding_;
  (this->StartLocation).field0_0x0._s_0.Y = dVar1;
  (this->StartLocation).field0_0x0._s_0.Z = *(double *)&param_1[1].InstanceName.Number;
  dVar1 = (double)param_1[1].RootMotionParams._padding_;
  (this->TargetLocation).field0_0x0._s_0.X = *(double *)&param_1[1].RootMotionParams;
  (this->TargetLocation).field0_0x0._s_0.Y = dVar1;
  (this->TargetLocation).field0_0x0._s_0.Z =
       param_1[1].RootMotionParams.RootMotionTransform.Rotation.XY.m128d_f64[0];
  return true;
}

// SetTime @ 147b9c0e0

void __thiscall
FRootMotionSource_MoveToDynamicForce::SetTime
          (FRootMotionSource_MoveToDynamicForce *this,float param_1)

{
  *(int *)((longlong)&this->_padding_ + 4) = (int)this->_padding_;
  *(float *)&this->_padding_ = param_1;
                    /* WARNING: Could not recover jumptable at 0x000147b9c0ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x40))();
  return;
}

// PrepareRootMotion @ 147b9c110

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
FRootMotionSource_MoveToDynamicForce::PrepareRootMotion
          (FRootMotionSource_MoveToDynamicForce *this,float param_1,float param_2,
          ACharacter *param_3,UCharacterMovementComponent *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  UCurveFloat *pUVar11;
  longlong lVar12;
  code *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  __m128 _Var22;
  undefined8 uVar23;
  undefined8 uVar24;
  TConsoleVariableData<int> *pTVar25;
  TConsoleVariableData<float> *pTVar26;
  bool bVar27;
  TVector<double> *pTVar28;
  UWorld *pUVar29;
  undefined4 uVar30;
  double dVar31;
  undefined4 uVar33;
  undefined1 auVar32 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  float fVar37;
  float local_res8 [2];
  float local_res10;
  TVector<double>_u_0 local_1f8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0 [2];
  double local_1c8;
  TVector<double>_u_0 local_1c0;
  TVector<double>_u_0 local_1a8;
  undefined1 local_190 [4];
  undefined1 local_18c [4];
  undefined1 local_188 [4];
  undefined1 local_184 [4];
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  double local_130;
  double dStack_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  TVector<double> local_100;
  TVector<double> local_e8 [8];
  
  fVar37 = __real_322bcc77;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  local_res10 = param_1;
  if (*(float *)&this->_padding_ <= fVar37) {
    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                       ("Duration > (1.e-8f)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\RootMotionSource.cpp"
                        ,0x3f2,
                        L"FRootMotionSource_MoveToDynamicForce prepared with invalid duration.");
    if (bVar27) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  else if (fVar37 < param_2) {
    pUVar11 = (this->TimeMappingCurve).field0_0x0.DebugPtr;
    fVar37 = (param_1 + *(float *)&this->_padding_) / *(float *)&this->_padding_;
    if (pUVar11 != (UCurveFloat *)0x0) {
      fVar37 = EvaluateFloatCurveAtFraction(pUVar11,fVar37);
    }
    dVar1 = (this->StartLocation).field0_0x0._s_0.Y;
    dVar2 = (this->StartLocation).field0_0x0._s_0.X;
    dVar3 = (this->StartLocation).field0_0x0._s_0.Z;
    dVar4 = (this->TargetLocation).field0_0x0._s_0.Y;
    dVar5 = (this->TargetLocation).field0_0x0._s_0.X;
    dVar31 = (this->TargetLocation).field0_0x0._s_0.Z;
    dVar34 = (double)fVar37;
    pTVar28 = GetPathOffsetInWorldSpace(this,&local_100,fVar37);
    dVar2 = (dVar5 - dVar2) * dVar34 + dVar2 + (pTVar28->field0_0x0)._s_0.X;
    dVar1 = (dVar4 - dVar1) * dVar34 + dVar1 + (pTVar28->field0_0x0)._s_0.Y;
    dVar3 = (dVar31 - dVar3) * dVar34 + dVar3 + (pTVar28->field0_0x0)._s_0.Z;
    lVar12 = *(longlong *)&param_3->field_0x1b8;
    if (lVar12 == 0) {
      uVar30 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar33 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      local_1a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1c0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_1c0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    else {
      local_1a8._s_0.Z = *(double *)(lVar12 + 0x220);
      local_130 = *(double *)(lVar12 + 0x210);
      dStack_128 = *(double *)(lVar12 + 0x218);
      uVar30 = SUB84(local_1a8._s_0.Z,0);
      uVar33 = (undefined4)((ulonglong)local_1a8._s_0.Z >> 0x20);
      local_1c0._s_0.X = local_130;
      local_1c0._s_0.Y = dStack_128;
      local_120 = local_1a8._s_0.Z;
    }
    dVar34 = __real_3ff0000000000000 / (double)param_2;
    dVar4 = (dVar2 - local_1c0._s_0.X) * dVar34;
    local_1c0._s_0.Z = (double)CONCAT44(uVar33,uVar30);
    dVar31 = (dVar3 - local_1a8._s_0.Z) * dVar34;
    dVar5 = (dVar1 - local_1c0._s_0.Y) * dVar34;
    local_1f8._s_0.X = dVar4;
    local_1f8._s_0.Y = dVar5;
    local_1f8._s_0.Z = dVar31;
    if (this->bRestrictSpeedToExpected != false) {
      if (((__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
          (__real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
         (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        pUVar11 = (this->TimeMappingCurve).field0_0x0.DebugPtr;
        fVar37 = *(float *)&this->_padding_ / *(float *)&this->_padding_;
        if (pUVar11 != (UCurveFloat *)0x0) {
          fVar37 = EvaluateFloatCurveAtFraction(pUVar11,fVar37);
        }
        dVar6 = (this->StartLocation).field0_0x0._s_0.X;
        dVar35 = (this->StartLocation).field0_0x0._s_0.Y;
        dVar7 = (this->StartLocation).field0_0x0._s_0.Z;
        dVar8 = (this->TargetLocation).field0_0x0._s_0.X;
        dVar9 = (this->TargetLocation).field0_0x0._s_0.Y;
        dVar10 = (this->TargetLocation).field0_0x0._s_0.Z;
        dVar19 = (double)fVar37;
        pTVar28 = GetPathOffsetInWorldSpace(this,local_e8,fVar37);
        dVar6 = (dVar2 - ((dVar8 - dVar6) * dVar19 + dVar6 + (pTVar28->field0_0x0)._s_0.X)) * dVar34
        ;
        dVar35 = (dVar1 - ((dVar9 - dVar35) * dVar19 + dVar35 + (pTVar28->field0_0x0)._s_0.Y)) *
                 dVar34;
        dVar34 = (dVar3 - ((dVar10 - dVar7) * dVar19 + dVar7 + (pTVar28->field0_0x0)._s_0.Z)) *
                 dVar34;
        auVar32._0_8_ = dVar34 * dVar34;
        auVar32._8_8_ = 0;
        auVar36._0_8_ = dVar35 * dVar35 + dVar6 * dVar6 + auVar32._0_8_;
        auVar36._8_8_ = 0;
        auVar32 = sqrtpd(auVar32,auVar36);
        fVar37 = (float)auVar32._0_8_ + __real_3f000000;
        if (fVar37 * fVar37 < (float)(dVar4 * dVar4 + dVar5 * dVar5 + dVar31 * dVar31)) {
          UE::Math::TVector<double>::Normalize
                    ((TVector<double> *)&local_1f8._s_0,__real_3e45798ee0000000);
          dVar31 = (double)(float)auVar32._0_8_;
          dVar4 = local_1f8._s_0.X * dVar31;
          dVar5 = local_1f8._s_0.Y * dVar31;
          dVar31 = local_1f8._s_0.Z * dVar31;
          local_1f8._s_0.X = dVar4;
          local_1f8._s_0.Y = dVar5;
          local_1f8._s_0.Z = dVar31;
        }
      }
    }
    pTVar25 = RootMotionSourceDebug::CVarDebugRootMotionSources.Ref;
    bVar27 = IsInParallelGameThread();
    if (!bVar27) {
      bVar27 = IsInGameThread();
      if (!bVar27) {
        bVar27 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0");
        if (bVar27) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
    }
    pTVar26 = CVarDebugRootMotionSourcesLifetime.Ref;
    if (pTVar25->ShadowedValue[0] != 0) {
      lVar12 = *(longlong *)&param_4->field_0xc0;
      local_118 = *(double *)(lVar12 + 0x210);
      dStack_110 = *(double *)(lVar12 + 0x218);
      local_108 = *(double *)(lVar12 + 0x220);
      local_1c8 = local_118 - local_1c0._s_0.X;
      dVar34 = dStack_110 - local_1c0._s_0.Y;
      dVar6 = local_108 - local_1c0._s_0.Z;
      bVar27 = IsInParallelGameThread();
      if (!bVar27) {
        bVar27 = IsInGameThread();
        if (!bVar27) {
          bVar27 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0");
          if (bVar27) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
      }
      fVar37 = pTVar26->ShadowedValue[0];
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,local_res8,local_190);
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,local_18c,&local_1e0);
      lVar12 = *(longlong *)&param_4->field_0xc0;
      local_148._s_0.X = *(double *)(lVar12 + 0x210);
      local_148._s_0.Y = *(double *)(lVar12 + 0x218);
      local_148._s_0.Z = *(double *)(lVar12 + 0x220);
      pUVar29 = AActor::GetWorld((AActor *)param_3);
      DrawDebugCapsule(pUVar29,(TVector<double> *)&local_148._s_0,local_1e0,local_res8[0],
                       &UE::Math::TQuat<double>::Identity,&FColor::Red,true,fVar37,'\0',0.0);
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,&local_1dc,local_188);
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,local_184,&local_1d8);
      local_178._s_0.X = local_1c8 + dVar2;
      local_178._s_0.Y = dVar34 + dVar1;
      local_178._s_0.Z = dVar6 + dVar3;
      pUVar29 = AActor::GetWorld((AActor *)param_3);
      DrawDebugCapsule(pUVar29,(TVector<double> *)&local_178._s_0,local_1d8,local_1dc,
                       &UE::Math::TQuat<double>::Identity,&FColor::Green,true,fVar37,'\0',0.0);
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,&local_1d4,local_180);
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,local_17c,local_1d0);
      local_160._s_0.X = local_1c8 + (this->TargetLocation).field0_0x0._s_0.X;
      local_160._s_0.Y = dVar34 + (this->TargetLocation).field0_0x0._s_0.Y;
      local_160._s_0.Z = dVar6 + (this->TargetLocation).field0_0x0._s_0.Z;
      pUVar29 = AActor::GetWorld((AActor *)param_3);
      DrawDebugCapsule(pUVar29,(TVector<double> *)&local_160._s_0,local_1d0[0],local_1d4,
                       &UE::Math::TQuat<double>::Identity,&FColor::Blue,true,fVar37,'\0',0.0);
      local_1a8._s_0.X = dVar4 + local_1c0._s_0.X;
      local_1a8._s_0.Y = dVar5 + local_1c0._s_0.Y;
      local_1a8._s_0.Z = dVar31 + local_1c0._s_0.Z;
      pUVar29 = AActor::GetWorld((AActor *)param_3);
      DrawDebugLine(pUVar29,(TVector<double> *)&local_1c0._s_0,(TVector<double> *)&local_1a8._s_0,
                    &FColor::Blue,true,fVar37,'\0',0.0);
    }
    _Var22 = GlobalVectorConstants::Float1110;
    fVar16 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar14 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar37 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar15 = GlobalVectorConstants::Float0001.m128_f32[3];
    fVar17 = GlobalVectorConstants::Float1110.m128_f32[0];
    *(undefined1 *)&this->_padding_ = 1;
    auVar21._8_4_ = SUB84((double)fVar14,0);
    auVar21._0_8_ = (double)fVar16;
    auVar21._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
    this->_padding_ = (longlong)(double)fVar16;
    this->_padding_ = auVar21._8_8_;
    this->_padding_ = (longlong)(double)fVar37;
    this->_padding_ = (longlong)(double)fVar15;
    auVar20._8_4_ = SUB84(dVar5,0);
    auVar20._0_8_ = dVar4;
    auVar20._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    this->_padding_ = (longlong)dVar4;
    this->_padding_ = auVar20._8_8_;
    this->_padding_ = (longlong)dVar31;
    this->_padding_ = 0;
    auVar18._8_4_ = SUB84((double)_Var22.m128_f32[1],0);
    auVar18._0_8_ = (double)fVar17;
    auVar18._12_4_ = (int)((ulonglong)(double)_Var22.m128_f32[1] >> 0x20);
    this->_padding_ = (longlong)(double)fVar17;
    this->_padding_ = auVar18._8_8_;
    this->_padding_ = (longlong)(double)_Var22.m128_f32[2];
    this->_padding_ = (longlong)(double)_Var22.m128_f32[3];
    uVar24 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
    uVar23 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
    this->_padding_ = (longlong)FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
    this->_padding_ = uVar23;
    this->_padding_ = uVar24;
    this->_padding_ = 0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  }
                    /* WARNING: Could not recover jumptable at 0x000147b9c922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))(this);
  return;
}

// NetSerialize @ 147b9c930

bool __thiscall
FRootMotionSource_MoveToDynamicForce::NetSerialize
          (FRootMotionSource_MoveToDynamicForce *this,FArchive *param_1,UPackageMap *param_2,
          bool *param_3)

{
  bool bVar1;
  
  bVar1 = FRootMotionSource::NetSerialize((FRootMotionSource *)this,param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  UE::Math::operator<<(param_1,&this->StartLocation);
  UE::Math::operator<<(param_1,&this->InitialTargetLocation);
  UE::Math::operator<<(param_1,&this->TargetLocation);
  ::operator<<(param_1,&this->bRestrictSpeedToExpected);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->PathOffsetCurve);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->TimeMappingCurve);
  *param_3 = true;
  return true;
}

// GetScriptStruct @ 147b9c9e0

UScriptStruct * __thiscall
FRootMotionSource_MoveToDynamicForce::GetScriptStruct(FRootMotionSource_MoveToDynamicForce *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRootMotionSource_MoveToDynamicForce.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRootMotionSource_MoveToDynamicForce.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce,
                         (UObject *)pUVar1,L"RootMotionSource_MoveToDynamicForce");
  }
  return Z_Registration_Info_UScriptStruct_FRootMotionSource_MoveToDynamicForce.OuterSingleton;
}

// ToSimpleString @ 147b9ca20

FString * __thiscall
FRootMotionSource_MoveToDynamicForce::ToSimpleString
          (FRootMotionSource_MoveToDynamicForce *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  ::FName::GetPlainNameString((FName *)((longlong)&this->_padding_ + 4),&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"[ID:%u]FRootMotionSource_MoveToDynamicForce %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AddReferencedObjects @ 147b9ca90

void __thiscall
FRootMotionSource_MoveToDynamicForce::AddReferencedObjects
          (FRootMotionSource_MoveToDynamicForce *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->PathOffsetCurve,0,0);
                    /* WARNING: Could not recover jumptable at 0x000147b9cad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->TimeMappingCurve,0,0);
  return;
}

// FRootMotionSource_MoveToDynamicForce @ 147bb9a00

FRootMotionSource_MoveToDynamicForce * __thiscall
FRootMotionSource_MoveToDynamicForce::FRootMotionSource_MoveToDynamicForce
          (FRootMotionSource_MoveToDynamicForce *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xff7fc99e;
  this->_padding_ = (longlong)&___7FRootMotionSource__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xbf800000;
  *(undefined2 *)&this->_padding_ = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  this->_padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
  this->_padding_ = auVar3._8_8_;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  this->_padding_ = (longlong)(double)fVar1;
  this->_padding_ = auVar4._8_8_;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  this->_padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
  this->_padding_ = auVar5._8_8_;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  this->_padding_ = (longlong)(double)fVar1;
  this->_padding_ = auVar6._8_8_;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  this->_padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
  this->_padding_ = auVar7._8_8_;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  this->_padding_ = (longlong)(double)fVar1;
  this->_padding_ = auVar8._8_8_;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar9;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->_padding_ = (longlong)&___7FRootMotionSource_MoveToDynamicForce__6B_;
  (this->StartLocation).field0_0x0._s_0.X = 0.0;
  (this->StartLocation).field0_0x0._s_0.Y = 0.0;
  (this->StartLocation).field0_0x0._s_0.Z = 0.0;
  (this->InitialTargetLocation).field0_0x0._s_0.X = 0.0;
  (this->InitialTargetLocation).field0_0x0._s_0.Y = 0.0;
  (this->InitialTargetLocation).field0_0x0._s_0.Z = 0.0;
  (this->TargetLocation).field0_0x0._s_0.X = 0.0;
  (this->TargetLocation).field0_0x0._s_0.Y = 0.0;
  (this->TargetLocation).field0_0x0._s_0.Z = 0.0;
  (this->PathOffsetCurve).field0_0x0.DebugPtr = (UCurveVector *)0x0;
  (this->TimeMappingCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  this->bRestrictSpeedToExpected = false;
  return this;
}

// ~FRootMotionSource_MoveToDynamicForce @ 147bbef10

void __thiscall
FRootMotionSource_MoveToDynamicForce::~FRootMotionSource_MoveToDynamicForce
          (FRootMotionSource_MoveToDynamicForce *this)

{
  this->_padding_ = (longlong)&___7FRootMotionSource__6B_;
  return;
}

// GetPathOffsetInWorldSpace @ 147be4110

TVector<double> * __thiscall
FRootMotionSource_MoveToDynamicForce::GetPathOffsetInWorldSpace
          (FRootMotionSource_MoveToDynamicForce *this,TVector<double> *__return_storage_ptr__,
          float param_1)

{
  UCurveVector *this_00;
  undefined8 uVar1;
  float local_res8 [2];
  float local_res20 [2];
  TVector<double>_u_0 local_68;
  TRotator<double> local_50;
  TVector<double> local_38 [2];
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this_00 = (this->PathOffsetCurve).field0_0x0.DebugPtr;
  if (this_00 == (UCurveVector *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_res20[0] = 0.0;
    local_res8[0] = 1.0;
    UCurveBase::GetTimeRange((UCurveBase *)this_00,local_res20,local_res8);
    UCurveVector::GetVectorValue
              (this_00,local_38,(local_res8[0] - local_res20[0]) * param_1 + local_res20[0]);
    local_68._s_0.X =
         (this->TargetLocation).field0_0x0._s_0.X - (this->StartLocation).field0_0x0._s_0.X;
    local_68._s_0.Y =
         (this->TargetLocation).field0_0x0._s_0.Y - (this->StartLocation).field0_0x0._s_0.Y;
    local_68._s_0.Z =
         (this->TargetLocation).field0_0x0._s_0.Z - (this->StartLocation).field0_0x0._s_0.Z;
    UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_68._s_0,&local_50);
    local_50.Pitch = 0.0;
    UE::Math::TRotator<double>::RotateVector(&local_50,__return_storage_ptr__,local_38);
  }
  return __return_storage_ptr__;
}

// SetTargetLocation @ 147c01cd0

void __thiscall
FRootMotionSource_MoveToDynamicForce::SetTargetLocation
          (FRootMotionSource_MoveToDynamicForce *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->TargetLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->TargetLocation).field0_0x0._s_0.Y = dVar2;
  (this->TargetLocation).field0_0x0._s_0.Z = dVar1;
  return;
}

