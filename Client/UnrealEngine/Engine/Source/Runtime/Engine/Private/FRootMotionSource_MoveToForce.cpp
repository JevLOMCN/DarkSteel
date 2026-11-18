// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticStruct @ 147b9ac60

UScriptStruct * __cdecl FRootMotionSource_MoveToForce::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRootMotionSource_MoveToForce.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRootMotionSource_MoveToForce.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce,(UObject *)pUVar1,
                         L"RootMotionSource_MoveToForce");
  }
  return Z_Registration_Info_UScriptStruct_FRootMotionSource_MoveToForce.OuterSingleton;
}

// Clone @ 147b9ae30

FRootMotionSource * __thiscall
FRootMotionSource_MoveToForce::Clone(FRootMotionSource_MoveToForce *this)

{
  UCurveVector *pUVar1;
  double dVar2;
  FRootMotionSource *this_00;
  
  this_00 = ::operator_new(0x100);
  if (this_00 != (FRootMotionSource *)0x0) {
    FRootMotionSource::FRootMotionSource(this_00,(FRootMotionSource *)this);
    this_00->_padding_ = (longlong)&___7FRootMotionSource_MoveToForce__6B_;
    dVar2 = (this->StartLocation).field0_0x0._s_0.Y;
    this_00[1]._padding_ = (longlong)(this->StartLocation).field0_0x0._s_0.X;
    *(double *)&this_00[1].Priority = dVar2;
    *(double *)&this_00[1].InstanceName.Number = (this->StartLocation).field0_0x0._s_0.Z;
    dVar2 = (this->TargetLocation).field0_0x0._s_0.Y;
    *(double *)&this_00[1].CurrentTime = (this->TargetLocation).field0_0x0._s_0.X;
    *(double *)&this_00[1].Duration = dVar2;
    *(double *)&this_00[1].bNeedsSimulatedCatchup = (this->TargetLocation).field0_0x0._s_0.Z;
    this_00[1].RootMotionParams.bHasRootMotion = this->bRestrictSpeedToExpected;
    pUVar1 = (this->PathOffsetCurve).field0_0x0.DebugPtr;
    this_00[1].RootMotionParams._padding_ = (longlong)pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveVector *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return this_00;
  }
  return (FRootMotionSource *)0x0;
}

// Matches @ 147b9af40

bool __thiscall
FRootMotionSource_MoveToForce::Matches
          (FRootMotionSource_MoveToForce *this,FRootMotionSource *param_1)

{
  bool bVar1;
  double dVar2;
  
  bVar1 = FRootMotionSource::Matches((FRootMotionSource *)this,param_1);
  if (((bVar1) && (this->bRestrictSpeedToExpected == param_1[1].RootMotionParams.bHasRootMotion)) &&
     ((this->PathOffsetCurve).field0_0x0.DebugPtr ==
      (UCurveVector *)param_1[1].RootMotionParams._padding_)) {
    dVar2 = (this->TargetLocation).field0_0x0._s_0.X - *(double *)&param_1[1].CurrentTime;
    if ((((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
          __real_3fb99999a0000000) &&
        (dVar2 = (this->TargetLocation).field0_0x0._s_0.Y - *(double *)&param_1[1].Duration,
        (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
        __real_3fb99999a0000000)) &&
       (dVar2 = (this->TargetLocation).field0_0x0._s_0.Z -
                *(double *)&param_1[1].bNeedsSimulatedCatchup,
       (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
       __real_3fb99999a0000000)) {
      return true;
    }
  }
  return false;
}

// MatchesAndHasSameState @ 147b9b000

bool __thiscall
FRootMotionSource_MoveToForce::MatchesAndHasSameState
          (FRootMotionSource_MoveToForce *this,FRootMotionSource *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x18))();
  if (((cVar1 != '\0') && (*(uchar *)((longlong)&this->_padding_ + 4) == (param_1->Status).Flags))
     && (param_1->CurrentTime == *(float *)&this->_padding_)) {
    return true;
  }
  return false;
}

// UpdateStateFrom @ 147b9b050

bool __thiscall
FRootMotionSource_MoveToForce::UpdateStateFrom
          (FRootMotionSource_MoveToForce *this,FRootMotionSource *param_1,bool param_2)

{
  bool bVar1;
  
  bVar1 = FRootMotionSource::UpdateStateFrom((FRootMotionSource *)this,param_1,param_2);
  return bVar1;
}

// SetTime @ 147b9b070

void __thiscall
FRootMotionSource_MoveToForce::SetTime(FRootMotionSource_MoveToForce *this,float param_1)

{
  *(int *)((longlong)&this->_padding_ + 4) = (int)this->_padding_;
  *(float *)&this->_padding_ = param_1;
                    /* WARNING: Could not recover jumptable at 0x000147b9b07e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x40))();
  return;
}

// PrepareRootMotion @ 147b9b090

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
FRootMotionSource_MoveToForce::PrepareRootMotion
          (FRootMotionSource_MoveToForce *this,float param_1,float param_2,ACharacter *param_3,
          UCharacterMovementComponent *param_4)

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
  longlong lVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  __m128 _Var21;
  undefined8 uVar22;
  undefined8 uVar23;
  TConsoleVariableData<int> *pTVar24;
  TConsoleVariableData<float> *pTVar25;
  bool bVar26;
  TVector<double> *pTVar27;
  UWorld *pUVar28;
  undefined4 uVar29;
  double dVar30;
  undefined4 uVar32;
  undefined1 auVar31 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  float fVar36;
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
  
  fVar36 = __real_322bcc77;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  local_res10 = param_1;
  if (*(float *)&this->_padding_ <= fVar36) {
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("Duration > (1.e-8f)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\RootMotionSource.cpp"
                        ,0x322,L"FRootMotionSource_MoveToForce prepared with invalid duration.");
    if (bVar26) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  else if (fVar36 < param_2) {
    dVar1 = (this->StartLocation).field0_0x0._s_0.X;
    dVar2 = (this->StartLocation).field0_0x0._s_0.Y;
    dVar3 = (this->StartLocation).field0_0x0._s_0.Z;
    dVar4 = (this->TargetLocation).field0_0x0._s_0.X;
    dVar5 = (this->TargetLocation).field0_0x0._s_0.Y;
    dVar30 = (this->TargetLocation).field0_0x0._s_0.Z;
    fVar36 = (param_1 + *(float *)&this->_padding_) / *(float *)&this->_padding_;
    dVar33 = (double)fVar36;
    pTVar27 = GetPathOffsetInWorldSpace(this,&local_100,fVar36);
    dVar1 = (dVar4 - dVar1) * dVar33 + dVar1 + (pTVar27->field0_0x0)._s_0.X;
    dVar2 = (dVar5 - dVar2) * dVar33 + dVar2 + (pTVar27->field0_0x0)._s_0.Y;
    dVar3 = (dVar30 - dVar3) * dVar33 + dVar3 + (pTVar27->field0_0x0)._s_0.Z;
    lVar11 = *(longlong *)&param_3->field_0x1b8;
    if (lVar11 == 0) {
      uVar29 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar32 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      local_1a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1c0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_1c0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    else {
      local_1a8._s_0.Z = *(double *)(lVar11 + 0x220);
      local_130 = *(double *)(lVar11 + 0x210);
      dStack_128 = *(double *)(lVar11 + 0x218);
      uVar29 = SUB84(local_1a8._s_0.Z,0);
      uVar32 = (undefined4)((ulonglong)local_1a8._s_0.Z >> 0x20);
      local_1c0._s_0.X = local_130;
      local_1c0._s_0.Y = dStack_128;
      local_120 = local_1a8._s_0.Z;
    }
    dVar33 = __real_3ff0000000000000 / (double)param_2;
    dVar4 = (dVar1 - local_1c0._s_0.X) * dVar33;
    local_1c0._s_0.Z = (double)CONCAT44(uVar32,uVar29);
    dVar30 = (dVar3 - local_1a8._s_0.Z) * dVar33;
    dVar5 = (dVar2 - local_1c0._s_0.Y) * dVar33;
    local_1f8._s_0.X = dVar4;
    local_1f8._s_0.Y = dVar5;
    local_1f8._s_0.Z = dVar30;
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
          (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        fVar36 = *(float *)&this->_padding_ / *(float *)&this->_padding_;
        dVar6 = (this->StartLocation).field0_0x0._s_0.X;
        dVar34 = (this->StartLocation).field0_0x0._s_0.Y;
        dVar7 = (this->StartLocation).field0_0x0._s_0.Z;
        dVar8 = (this->TargetLocation).field0_0x0._s_0.X;
        dVar9 = (this->TargetLocation).field0_0x0._s_0.Y;
        dVar10 = (this->TargetLocation).field0_0x0._s_0.Z;
        dVar18 = (double)fVar36;
        pTVar27 = GetPathOffsetInWorldSpace(this,local_e8,fVar36);
        dVar6 = (dVar1 - ((dVar8 - dVar6) * dVar18 + dVar6 + (pTVar27->field0_0x0)._s_0.X)) * dVar33
        ;
        dVar34 = (dVar2 - ((dVar9 - dVar34) * dVar18 + dVar34 + (pTVar27->field0_0x0)._s_0.Y)) *
                 dVar33;
        dVar33 = (dVar3 - ((dVar10 - dVar7) * dVar18 + dVar7 + (pTVar27->field0_0x0)._s_0.Z)) *
                 dVar33;
        auVar31._0_8_ = dVar33 * dVar33;
        auVar31._8_8_ = 0;
        auVar35._0_8_ = dVar34 * dVar34 + dVar6 * dVar6 + auVar31._0_8_;
        auVar35._8_8_ = 0;
        auVar31 = sqrtpd(auVar31,auVar35);
        fVar36 = (float)auVar31._0_8_ + __real_3f000000;
        if (fVar36 * fVar36 < (float)(dVar4 * dVar4 + dVar5 * dVar5 + dVar30 * dVar30)) {
          UE::Math::TVector<double>::Normalize
                    ((TVector<double> *)&local_1f8._s_0,__real_3e45798ee0000000);
          dVar30 = (double)(float)auVar31._0_8_;
          dVar4 = local_1f8._s_0.X * dVar30;
          dVar5 = local_1f8._s_0.Y * dVar30;
          dVar30 = local_1f8._s_0.Z * dVar30;
          local_1f8._s_0.X = dVar4;
          local_1f8._s_0.Y = dVar5;
          local_1f8._s_0.Z = dVar30;
        }
      }
    }
    pTVar24 = RootMotionSourceDebug::CVarDebugRootMotionSources.Ref;
    bVar26 = IsInParallelGameThread();
    if (!bVar26) {
      bVar26 = IsInGameThread();
      if (!bVar26) {
        bVar26 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0");
        if (bVar26) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
    }
    pTVar25 = CVarDebugRootMotionSourcesLifetime.Ref;
    if (pTVar24->ShadowedValue[0] != 0) {
      lVar11 = *(longlong *)&param_4->field_0xc0;
      local_118 = *(double *)(lVar11 + 0x210);
      dStack_110 = *(double *)(lVar11 + 0x218);
      local_108 = *(double *)(lVar11 + 0x220);
      local_1c8 = local_118 - local_1c0._s_0.X;
      dVar33 = dStack_110 - local_1c0._s_0.Y;
      dVar6 = local_108 - local_1c0._s_0.Z;
      bVar26 = IsInParallelGameThread();
      if (!bVar26) {
        bVar26 = IsInGameThread();
        if (!bVar26) {
          bVar26 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0");
          if (bVar26) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
      }
      fVar36 = pTVar25->ShadowedValue[0];
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,local_res8,local_190);
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,local_18c,&local_1e0);
      lVar11 = *(longlong *)&param_4->field_0xc0;
      local_148._s_0.X = *(double *)(lVar11 + 0x210);
      local_148._s_0.Y = *(double *)(lVar11 + 0x218);
      local_148._s_0.Z = *(double *)(lVar11 + 0x220);
      pUVar28 = AActor::GetWorld((AActor *)param_3);
      DrawDebugCapsule(pUVar28,(TVector<double> *)&local_148._s_0,local_1e0,local_res8[0],
                       &UE::Math::TQuat<double>::Identity,&FColor::Red,true,fVar36,'\0',0.0);
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,&local_1dc,local_188);
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,local_184,&local_1d8);
      local_178._s_0.X = local_1c8 + dVar1;
      local_178._s_0.Y = dVar33 + dVar2;
      local_178._s_0.Z = dVar6 + dVar3;
      pUVar28 = AActor::GetWorld((AActor *)param_3);
      DrawDebugCapsule(pUVar28,(TVector<double> *)&local_178._s_0,local_1d8,local_1dc,
                       &UE::Math::TQuat<double>::Identity,&FColor::Green,true,fVar36,'\0',0.0);
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,&local_1d4,local_180);
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,local_17c,local_1d0);
      local_160._s_0.X = local_1c8 + (this->TargetLocation).field0_0x0._s_0.X;
      local_160._s_0.Y = dVar33 + (this->TargetLocation).field0_0x0._s_0.Y;
      local_160._s_0.Z = dVar6 + (this->TargetLocation).field0_0x0._s_0.Z;
      pUVar28 = AActor::GetWorld((AActor *)param_3);
      DrawDebugCapsule(pUVar28,(TVector<double> *)&local_160._s_0,local_1d0[0],local_1d4,
                       &UE::Math::TQuat<double>::Identity,&FColor::Blue,true,fVar36,'\0',0.0);
      local_1a8._s_0.X = dVar4 + local_1c0._s_0.X;
      local_1a8._s_0.Y = dVar5 + local_1c0._s_0.Y;
      local_1a8._s_0.Z = dVar30 + local_1c0._s_0.Z;
      pUVar28 = AActor::GetWorld((AActor *)param_3);
      DrawDebugLine(pUVar28,(TVector<double> *)&local_1c0._s_0,(TVector<double> *)&local_1a8._s_0,
                    &FColor::Blue,true,fVar36,'\0',0.0);
    }
    _Var21 = GlobalVectorConstants::Float1110;
    fVar15 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar13 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar36 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar14 = GlobalVectorConstants::Float0001.m128_f32[3];
    fVar16 = GlobalVectorConstants::Float1110.m128_f32[0];
    *(undefined1 *)&this->_padding_ = 1;
    auVar20._8_4_ = SUB84((double)fVar13,0);
    auVar20._0_8_ = (double)fVar15;
    auVar20._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
    this->_padding_ = (longlong)(double)fVar15;
    this->_padding_ = auVar20._8_8_;
    this->_padding_ = (longlong)(double)fVar36;
    this->_padding_ = (longlong)(double)fVar14;
    auVar19._8_4_ = SUB84(dVar5,0);
    auVar19._0_8_ = dVar4;
    auVar19._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    this->_padding_ = (longlong)dVar4;
    this->_padding_ = auVar19._8_8_;
    this->_padding_ = (longlong)dVar30;
    this->_padding_ = 0;
    auVar17._8_4_ = SUB84((double)_Var21.m128_f32[1],0);
    auVar17._0_8_ = (double)fVar16;
    auVar17._12_4_ = (int)((ulonglong)(double)_Var21.m128_f32[1] >> 0x20);
    this->_padding_ = (longlong)(double)fVar16;
    this->_padding_ = auVar17._8_8_;
    this->_padding_ = (longlong)(double)_Var21.m128_f32[2];
    this->_padding_ = (longlong)(double)_Var21.m128_f32[3];
    uVar23 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
    uVar22 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
    this->_padding_ = (longlong)FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
    this->_padding_ = uVar22;
    this->_padding_ = uVar23;
    this->_padding_ = 0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  }
                    /* WARNING: Could not recover jumptable at 0x000147b9b867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))(this);
  return;
}

// NetSerialize @ 147b9b880

bool __thiscall
FRootMotionSource_MoveToForce::NetSerialize
          (FRootMotionSource_MoveToForce *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  bool bVar1;
  
  bVar1 = FRootMotionSource::NetSerialize((FRootMotionSource *)this,param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  UE::Math::operator<<(param_1,&this->StartLocation);
  UE::Math::operator<<(param_1,&this->TargetLocation);
  ::operator<<(param_1,&this->bRestrictSpeedToExpected);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->PathOffsetCurve);
  *param_3 = true;
  return true;
}

// GetScriptStruct @ 147b9b910

UScriptStruct * __thiscall
FRootMotionSource_MoveToForce::GetScriptStruct(FRootMotionSource_MoveToForce *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRootMotionSource_MoveToForce.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRootMotionSource_MoveToForce.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce,(UObject *)pUVar1,
                         L"RootMotionSource_MoveToForce");
  }
  return Z_Registration_Info_UScriptStruct_FRootMotionSource_MoveToForce.OuterSingleton;
}

// ToSimpleString @ 147b9b950

FString * __thiscall
FRootMotionSource_MoveToForce::ToSimpleString
          (FRootMotionSource_MoveToForce *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  ::FName::GetPlainNameString((FName *)((longlong)&this->_padding_ + 4),&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"[ID:%u]FRootMotionSource_MoveToForce %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AddReferencedObjects @ 147b9b9c0

void __thiscall
FRootMotionSource_MoveToForce::AddReferencedObjects
          (FRootMotionSource_MoveToForce *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147b9b9d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->PathOffsetCurve,0,0);
  return;
}

// FRootMotionSource_MoveToForce @ 147bb9b20

FRootMotionSource_MoveToForce * __thiscall
FRootMotionSource_MoveToForce::FRootMotionSource_MoveToForce(FRootMotionSource_MoveToForce *this)

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
  this->_padding_ = (longlong)&___7FRootMotionSource_MoveToForce__6B_;
  (this->StartLocation).field0_0x0._s_0.X = 0.0;
  (this->StartLocation).field0_0x0._s_0.Y = 0.0;
  (this->StartLocation).field0_0x0._s_0.Z = 0.0;
  (this->TargetLocation).field0_0x0._s_0.X = 0.0;
  (this->TargetLocation).field0_0x0._s_0.Y = 0.0;
  (this->TargetLocation).field0_0x0._s_0.Z = 0.0;
  (this->PathOffsetCurve).field0_0x0.DebugPtr = (UCurveVector *)0x0;
  this->bRestrictSpeedToExpected = false;
  return this;
}

// ~FRootMotionSource_MoveToForce @ 147bbef30

void __thiscall
FRootMotionSource_MoveToForce::~FRootMotionSource_MoveToForce(FRootMotionSource_MoveToForce *this)

{
  this->_padding_ = (longlong)&___7FRootMotionSource__6B_;
  return;
}

// GetPathOffsetInWorldSpace @ 147be4240

TVector<double> * __thiscall
FRootMotionSource_MoveToForce::GetPathOffsetInWorldSpace
          (FRootMotionSource_MoveToForce *this,TVector<double> *__return_storage_ptr__,float param_1
          )

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

