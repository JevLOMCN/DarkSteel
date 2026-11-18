// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// StaticStruct @ 147b98bb0

UScriptStruct * __cdecl FRootMotionSource::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRootMotionSource.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRootMotionSource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource,(UObject *)pUVar1,
                         L"RootMotionSource");
  }
  return Z_Registration_Info_UScriptStruct_FRootMotionSource.OuterSingleton;
}

// IsTimeOutEnabled @ 147b98c40

bool __thiscall FRootMotionSource::IsTimeOutEnabled(FRootMotionSource *this)

{
  return 0.0 < this->Duration || this->Duration == 0.0;
}

// IsActive @ 147b98ca0

bool __thiscall FRootMotionSource::IsActive(FRootMotionSource *this)

{
  return true;
}

// SetTime @ 147b98cb0

void __thiscall FRootMotionSource::SetTime(FRootMotionSource *this,float param_1)

{
  this->PreviousTime = this->CurrentTime;
  this->CurrentTime = param_1;
                    /* WARNING: Could not recover jumptable at 0x000147b98cbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x40))();
  return;
}

// CheckTimeOut @ 147b98cd0

void __thiscall FRootMotionSource::CheckTimeOut(FRootMotionSource *this)

{
  byte bVar1;
  char cVar2;
  
  cVar2 = (**(code **)(this->_padding_ + 8))();
  if (cVar2 != '\0') {
    bVar1 = (this->Status).Flags;
    if (this->Duration < this->CurrentTime || this->Duration == this->CurrentTime) {
      (this->Status).Flags = bVar1 | 2;
      return;
    }
    (this->Status).Flags = bVar1 & 0xfd;
  }
  return;
}

// FRootMotionSource @ 147bb95b0

/* WARNING: Type propagation algorithm not settling */

FRootMotionSource * __thiscall
FRootMotionSource::FRootMotionSource(FRootMotionSource *this,FRootMotionSource *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined3 uVar10;
  
  this->_padding_ = (longlong)&___7FRootMotionSource__6B_;
  this->Priority = param_1->Priority;
  this->LocalID = param_1->LocalID;
  this->InstanceName = param_1->InstanceName;
  this->StartTime = param_1->StartTime;
  this->CurrentTime = param_1->CurrentTime;
  this->PreviousTime = param_1->PreviousTime;
  this->Duration = param_1->Duration;
  (this->Status).Flags = (param_1->Status).Flags;
  (this->Settings).Flags = (param_1->Settings).Flags;
  this->AccumulateMode = param_1->AccumulateMode;
  this->bInLocalSpace = param_1->bInLocalSpace;
  this->bNeedsSimulatedCatchup = param_1->bNeedsSimulatedCatchup;
  this->bSimulatedNeedsSmoothing = param_1->bSimulatedNeedsSmoothing;
  (this->RootMotionParams).bHasRootMotion = (param_1->RootMotionParams).bHasRootMotion;
  (this->RootMotionParams).BlendWeight = (param_1->RootMotionParams).BlendWeight;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->RootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RootMotionParams).RootMotionTransform.Translation.XY.m128d_f64 =
       auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->RootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64 =
       auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->RootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64 = auVar8;
  dVar9 = (param_1->RootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64[1];
  (this->RootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64[0] =
       (param_1->RootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64[0];
  (this->RootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->RootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64[1];
  (this->RootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64[0] =
       (param_1->RootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64[0];
  (this->RootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->RootMotionParams).RootMotionTransform.Translation.XY.m128d_f64[1];
  (this->RootMotionParams).RootMotionTransform.Translation.XY.m128d_f64[0] =
       (param_1->RootMotionParams).RootMotionTransform.Translation.XY.m128d_f64[0];
  (this->RootMotionParams).RootMotionTransform.Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->RootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64[1];
  (this->RootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64[0] =
       (param_1->RootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64[0];
  (this->RootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->RootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64[1];
  (this->RootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64[0] =
       (param_1->RootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64[0];
  (this->RootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->RootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64[1];
  (this->RootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64[0] =
       (param_1->RootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64[0];
  (this->RootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64[1] = dVar9;
  uVar10 = *(undefined3 *)&(param_1->FinishVelocityParams).field_0x1;
  fVar1 = (param_1->FinishVelocityParams).ClampVelocity;
  dVar9 = (param_1->FinishVelocityParams).SetVelocity.field0_0x0._s_0.X;
  (this->FinishVelocityParams).Mode = (param_1->FinishVelocityParams).Mode;
  *(undefined3 *)&(this->FinishVelocityParams).field_0x1 = uVar10;
  (this->FinishVelocityParams).ClampVelocity = fVar1;
  (this->FinishVelocityParams).SetVelocity.field0_0x0._s_0.X = dVar9;
  dVar9 = (param_1->FinishVelocityParams).SetVelocity.field0_0x0._s_0.Z;
  (this->FinishVelocityParams).SetVelocity.field0_0x0._s_0.Y =
       (param_1->FinishVelocityParams).SetVelocity.field0_0x0._s_0.Y;
  (this->FinishVelocityParams).SetVelocity.field0_0x0._s_0.Z = dVar9;
  return this;
}

// FRootMotionSource @ 147bb96e0

FRootMotionSource * __thiscall FRootMotionSource::FRootMotionSource(FRootMotionSource *this)

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
  
  this->StartTime = -3.4e+38;
  this->_padding_ = (longlong)&___7FRootMotionSource__6B_;
  this->Priority = 0;
  this->LocalID = 0;
  (this->InstanceName).ComparisonIndex = 0;
  (this->InstanceName).Number = 0;
  this->CurrentTime = 0.0;
  this->PreviousTime = 0.0;
  this->Status = '\0';
  this->Settings = '\0';
  this->AccumulateMode = Override;
  this->bInLocalSpace = false;
  this->bNeedsSimulatedCatchup = false;
  this->bSimulatedNeedsSmoothing = false;
  (this->RootMotionParams).bHasRootMotion = false;
  (this->RootMotionParams).BlendWeight = 0.0;
  this->Duration = -1.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->RootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RootMotionParams).RootMotionTransform.Translation.XY.m128d_f64 =
       auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->RootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64 =
       auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->RootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64 = auVar8;
  (this->FinishVelocityParams).Mode = MaintainLastRootMotionVelocity;
  (this->FinishVelocityParams).ClampVelocity = 0.0;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->FinishVelocityParams).SetVelocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->FinishVelocityParams).SetVelocity.field0_0x0._s_0.Y = (double)uVar9;
  (this->FinishVelocityParams).SetVelocity.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~FRootMotionSource @ 147bbeea0

void __thiscall FRootMotionSource::~FRootMotionSource(FRootMotionSource *this)

{
  this->_padding_ = (longlong)&___7FRootMotionSource__6B_;
  return;
}

// operator= @ 147bbfd50

/* WARNING: Type propagation algorithm not settling */

FRootMotionSource * __thiscall
FRootMotionSource::operator=(FRootMotionSource *this,FRootMotionSource *param_1)

{
  double dVar1;
  undefined3 uVar2;
  float fVar3;
  
  this->Priority = param_1->Priority;
  this->LocalID = param_1->LocalID;
  this->InstanceName = param_1->InstanceName;
  this->StartTime = param_1->StartTime;
  this->CurrentTime = param_1->CurrentTime;
  this->PreviousTime = param_1->PreviousTime;
  this->Duration = param_1->Duration;
  (this->Status).Flags = (param_1->Status).Flags;
  (this->Settings).Flags = (param_1->Settings).Flags;
  this->AccumulateMode = param_1->AccumulateMode;
  this->bInLocalSpace = param_1->bInLocalSpace;
  this->bNeedsSimulatedCatchup = param_1->bNeedsSimulatedCatchup;
  this->bSimulatedNeedsSmoothing = param_1->bSimulatedNeedsSmoothing;
  (this->RootMotionParams).bHasRootMotion = (param_1->RootMotionParams).bHasRootMotion;
  (this->RootMotionParams).BlendWeight = (param_1->RootMotionParams).BlendWeight;
  dVar1 = (param_1->RootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64[1];
  (this->RootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64[0] =
       (param_1->RootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64[0];
  (this->RootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->RootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64[1];
  (this->RootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64[0] =
       (param_1->RootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64[0];
  (this->RootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->RootMotionParams).RootMotionTransform.Translation.XY.m128d_f64[1];
  (this->RootMotionParams).RootMotionTransform.Translation.XY.m128d_f64[0] =
       (param_1->RootMotionParams).RootMotionTransform.Translation.XY.m128d_f64[0];
  (this->RootMotionParams).RootMotionTransform.Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->RootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64[1];
  (this->RootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64[0] =
       (param_1->RootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64[0];
  (this->RootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->RootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64[1];
  (this->RootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64[0] =
       (param_1->RootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64[0];
  (this->RootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->RootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64[1];
  (this->RootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64[0] =
       (param_1->RootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64[0];
  (this->RootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64[1] = dVar1;
  uVar2 = *(undefined3 *)&(param_1->FinishVelocityParams).field_0x1;
  fVar3 = (param_1->FinishVelocityParams).ClampVelocity;
  dVar1 = (param_1->FinishVelocityParams).SetVelocity.field0_0x0._s_0.X;
  (this->FinishVelocityParams).Mode = (param_1->FinishVelocityParams).Mode;
  *(undefined3 *)&(this->FinishVelocityParams).field_0x1 = uVar2;
  (this->FinishVelocityParams).ClampVelocity = fVar3;
  (this->FinishVelocityParams).SetVelocity.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->FinishVelocityParams).SetVelocity.field0_0x0._s_0.Z;
  (this->FinishVelocityParams).SetVelocity.field0_0x0._s_0.Y =
       (param_1->FinishVelocityParams).SetVelocity.field0_0x0._s_0.Y;
  (this->FinishVelocityParams).SetVelocity.field0_0x0._s_0.Z = dVar1;
  return this;
}

// AddReferencedObjects @ 147bc8db0

void __thiscall
FRootMotionSource::AddReferencedObjects(FRootMotionSource *this,FReferenceCollector *param_1)

{
  return;
}

// Clone @ 147bcc3b0

FRootMotionSource * __thiscall FRootMotionSource::Clone(FRootMotionSource *this)

{
  code *pcVar1;
  bool bVar2;
  FRootMotionSource *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\RootMotionSource.cpp"
                     ,0xde,
                     L"FRootMotionSource::Clone() being called erroneously. This should always be overridden in child classes!"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRootMotionSource *)(*pcVar1)();
    return pFVar3;
  }
  return (FRootMotionSource *)0x0;
}

// GetDuration @ 147bdfaf0

float __thiscall FRootMotionSource::GetDuration(FRootMotionSource *this)

{
  return this->Duration;
}

// GetScriptStruct @ 147be7240

UScriptStruct * __thiscall FRootMotionSource::GetScriptStruct(FRootMotionSource *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRootMotionSource.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRootMotionSource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource,(UObject *)pUVar1,
                         L"RootMotionSource");
  }
  return Z_Registration_Info_UScriptStruct_FRootMotionSource.OuterSingleton;
}

// GetStartTime @ 147be7460

float __thiscall FRootMotionSource::GetStartTime(FRootMotionSource *this)

{
  return this->StartTime;
}

// GetTime @ 147bebe70

float __thiscall FRootMotionSource::GetTime(FRootMotionSource *this)

{
  return this->CurrentTime;
}

// IsStartTimeValid @ 147bf1420

bool __thiscall FRootMotionSource::IsStartTimeValid(FRootMotionSource *this)

{
  if (__real_ff7fc99e != this->StartTime) {
    return true;
  }
  return false;
}

// Matches @ 147bf2bb0

bool __thiscall FRootMotionSource::Matches(FRootMotionSource *this,FRootMotionSource *param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != (FRootMotionSource *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x58);
    lVar2 = (**(code **)(param_1->_padding_ + 0x58))(param_1);
    lVar3 = (*pcVar1)(this);
    if ((((lVar3 == lVar2) && (this->Priority == param_1->Priority)) &&
        (this->AccumulateMode == param_1->AccumulateMode)) &&
       (((this->bInLocalSpace == param_1->bInLocalSpace &&
         (this->InstanceName == param_1->InstanceName)) &&
        ((float)((uint)(this->Duration - param_1->Duration) & __xmm_7fffffff7fffffff7fffffff7fffffff
                ) <= __real_322bcc77)))) {
      return true;
    }
  }
  return false;
}

// MatchesAndHasSameState @ 147bf2c70

bool __thiscall
FRootMotionSource::MatchesAndHasSameState(FRootMotionSource *this,FRootMotionSource *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x18))();
  if (((cVar1 != '\0') && ((this->Status).Flags == (param_1->Status).Flags)) &&
     (param_1->CurrentTime == this->CurrentTime)) {
    return true;
  }
  return false;
}

// NetSerialize @ 147bf35c0

bool __thiscall
FRootMotionSource::NetSerialize
          (FRootMotionSource *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  ushort *puVar1;
  float *pfVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  longlong *plVar5;
  float *pfVar6;
  uchar *puVar7;
  ERootMotionAccumulateMode local_res8 [8];
  
  puVar1 = &this->Priority;
  puVar4 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &this->LocalID;
  puVar3 = &param_1->field_0x2a;
  puVar4 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  plVar5 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = this->AccumulateMode;
  if ((ERootMotionAccumulateMode *)plVar5[1] < (ERootMotionAccumulateMode *)*plVar5 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(ERootMotionAccumulateMode *)*plVar5;
    *plVar5 = *plVar5 + 1;
  }
  this->AccumulateMode = local_res8[0];
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->InstanceName);
  pfVar2 = &this->CurrentTime;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &this->Duration;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar7 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Status,1);
  }
  else {
    (this->Status).Flags = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  ::operator<<(param_1,&this->bInLocalSpace);
  *param_3 = true;
  return true;
}

// PrepareRootMotion @ 147bf7480

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
FRootMotionSource::PrepareRootMotion
          (FRootMotionSource *this,float param_1,float param_2,ACharacter *param_3,
          UCharacterMovementComponent *param_4)

{
  (this->RootMotionParams).bHasRootMotion = false;
  (this->RootMotionParams).BlendWeight = 0.0;
  return;
}

// ToSimpleString @ 147c07e40

FString * __thiscall
FRootMotionSource::ToSimpleString(FRootMotionSource *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  ::FName::GetPlainNameString(&this->InstanceName,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"[ID:%u] FRootMotionSource %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// UpdateStateFrom @ 147c0b2b0

bool __thiscall
FRootMotionSource::UpdateStateFrom(FRootMotionSource *this,FRootMotionSource *param_1,bool param_2)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_1 != (FRootMotionSource *)0x0) {
    pcVar3 = *(code **)(this->_padding_ + 0x58);
    lVar6 = (**(code **)(param_1->_padding_ + 0x58))(param_1);
    lVar7 = (*pcVar3)(this);
    if (lVar7 == lVar6) {
      this->bNeedsSimulatedCatchup = param_2;
      bVar1 = (this->Status).Flags;
      bVar2 = (param_1->Status).Flags;
      (this->Status).Flags = bVar2;
      if ((bVar1 & 4) != 0) {
        (this->Status).Flags = bVar2 | 4;
      }
      (**(code **)(this->_padding_ + 0x38))(this,param_1->CurrentTime);
      return true;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\RootMotionSource.cpp"
                       ,0x115,
                       L"FRootMotionSource::UpdateStateFrom() is being updated from non-matching Source!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return false;
}

