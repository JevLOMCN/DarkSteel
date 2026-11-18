// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticStruct @ 147b994c0

UScriptStruct * __cdecl FRootMotionSource_ConstantForce::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRootMotionSource_ConstantForce.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRootMotionSource_ConstantForce.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce,(UObject *)pUVar1
                         ,L"RootMotionSource_ConstantForce");
  }
  return Z_Registration_Info_UScriptStruct_FRootMotionSource_ConstantForce.OuterSingleton;
}

// Clone @ 147b99510

FRootMotionSource * __thiscall
FRootMotionSource_ConstantForce::Clone(FRootMotionSource_ConstantForce *this)

{
  UCurveFloat *pUVar1;
  double dVar2;
  FRootMotionSource *this_00;
  
  this_00 = ::operator_new(0xe0);
  if (this_00 != (FRootMotionSource *)0x0) {
    FRootMotionSource::FRootMotionSource(this_00,(FRootMotionSource *)this);
    this_00->_padding_ = (longlong)&___7FRootMotionSource_ConstantForce__6B_;
    dVar2 = (this->Force).field0_0x0._s_0.Y;
    this_00[1]._padding_ = (longlong)(this->Force).field0_0x0._s_0.X;
    *(double *)&this_00[1].Priority = dVar2;
    *(double *)&this_00[1].InstanceName.Number = (this->Force).field0_0x0._s_0.Z;
    pUVar1 = (this->StrengthOverTime).field0_0x0.DebugPtr;
    *(UCurveFloat **)&this_00[1].CurrentTime = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return this_00;
  }
  return (FRootMotionSource *)0x0;
}

// Matches @ 147b995b0

bool __thiscall
FRootMotionSource_ConstantForce::Matches
          (FRootMotionSource_ConstantForce *this,FRootMotionSource *param_1)

{
  bool bVar1;
  double dVar2;
  
  bVar1 = FRootMotionSource::Matches((FRootMotionSource *)this,param_1);
  if (bVar1) {
    dVar2 = (this->Force).field0_0x0._s_0.X - (double)param_1[1]._padding_;
    if (((((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
           __real_3fb99999a0000000) &&
         (dVar2 = (this->Force).field0_0x0._s_0.Y - *(double *)&param_1[1].Priority,
         (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
         __real_3fb99999a0000000)) &&
        (dVar2 = (this->Force).field0_0x0._s_0.Z - *(double *)&param_1[1].InstanceName.Number,
        (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
        __real_3fb99999a0000000)) &&
       ((this->StrengthOverTime).field0_0x0.DebugPtr == *(UCurveFloat **)&param_1[1].CurrentTime)) {
      return true;
    }
  }
  return false;
}

// MatchesAndHasSameState @ 147b99660

bool __thiscall
FRootMotionSource_ConstantForce::MatchesAndHasSameState
          (FRootMotionSource_ConstantForce *this,FRootMotionSource *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x18))();
  if (((cVar1 != '\0') && (*(uchar *)((longlong)&this->_padding_ + 4) == (param_1->Status).Flags))
     && (param_1->CurrentTime == *(float *)&this->_padding_)) {
    return true;
  }
  return false;
}

// UpdateStateFrom @ 147b996c0

bool __thiscall
FRootMotionSource_ConstantForce::UpdateStateFrom
          (FRootMotionSource_ConstantForce *this,FRootMotionSource *param_1,bool param_2)

{
  bool bVar1;
  
  bVar1 = FRootMotionSource::UpdateStateFrom((FRootMotionSource *)this,param_1,param_2);
  return bVar1;
}

// PrepareRootMotion @ 147b99700

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
FRootMotionSource_ConstantForce::PrepareRootMotion
          (FRootMotionSource_ConstantForce *this,float param_1,float param_2,ACharacter *param_3,
          UCharacterMovementComponent *param_4)

{
  double dVar1;
  UCurveFloat *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined8 uVar19;
  TConsoleVariableData<int> *pTVar20;
  bool bVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  FString local_118;
  FString local_108;
  TVector<double>_u_0 local_f8 [10];
  
  fVar24 = __real_3f800000;
  lVar22 = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[3];
  dVar12 = (this->Force).field0_0x0._s_0.X;
  dVar13 = (this->Force).field0_0x0._s_0.Y;
  dVar1 = (this->Force).field0_0x0._s_0.Z;
  this_00 = (this->StrengthOverTime).field0_0x0.DebugPtr;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[3];
  if (this_00 != (UCurveFloat *)0x0) {
    fVar23 = *(float *)&this->_padding_;
    if (0.0 < *(float *)&this->_padding_) {
      fVar23 = fVar23 / *(float *)&this->_padding_;
      if (fVar24 <= fVar23) {
        fVar23 = fVar24;
      }
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
    }
    fVar23 = UCurveFloat::GetFloatValue(this_00,fVar23);
    dVar10 = (double)fVar23;
    dVar12 = dVar12 * dVar10;
    dVar13 = dVar13 * dVar10;
    dVar1 = dVar1 * dVar10;
  }
  pTVar20 = RootMotionSourceDebug::CVarDebugRootMotionSources.Ref;
  if (__real_322bcc77 < param_2) {
    fVar24 = param_1 / param_2;
  }
  dVar10 = (double)fVar24;
  dVar12 = dVar10 * dVar12;
  uVar25 = SUB84(dVar10 * dVar13,0);
  uVar26 = (undefined4)((ulonglong)(dVar10 * dVar13) >> 0x20);
  bVar21 = IsInParallelGameThread();
  if ((!bVar21) && (bVar21 = IsInGameThread(), !bVar21)) {
    lVar22 = 4;
  }
  if (*(int *)((longlong)pTVar20->ShadowedValue + lVar22) == 1) {
    local_f8[0]._8_4_ = uVar25;
    local_f8[0]._0_8_ = dVar12;
    local_f8[0]._12_4_ = uVar26;
    local_f8[0]._16_8_ = dVar10 * dVar1;
    UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_f8[0]._s_0,&local_108);
    ::FString::PrintfImpl
              (&local_118,
               L"FRootMotionSource_ConstantForce::PrepareRootMotion NewTransform(%s) Multiplier(%f)"
              );
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    RootMotionSourceDebug::PrintOnScreen(param_3,&local_118);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  auVar14._8_4_ = SUB84((double)fVar4,0);
  auVar14._0_8_ = (double)fVar2;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  this->_padding_ = (longlong)(double)fVar2;
  this->_padding_ = auVar14._8_8_;
  *(undefined1 *)&this->_padding_ = 1;
  auVar15._8_4_ = SUB84((double)fVar8,0);
  auVar15._0_8_ = (double)fVar6;
  auVar15._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  this->_padding_ = (longlong)(double)fVar6;
  this->_padding_ = auVar15._8_8_;
  auVar11._8_4_ = uVar25;
  auVar11._0_8_ = dVar12;
  auVar11._12_4_ = uVar26;
  this->_padding_ = (longlong)dVar12;
  this->_padding_ = auVar11._8_8_;
  this->_padding_ = (longlong)(dVar10 * dVar1);
  this->_padding_ = 0;
  auVar16._8_4_ = SUB84((double)fVar5,0);
  auVar16._0_8_ = (double)fVar3;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  this->_padding_ = (longlong)(double)fVar3;
  this->_padding_ = auVar16._8_8_;
  auVar17._8_4_ = SUB84((double)fVar9,0);
  auVar17._0_8_ = (double)fVar7;
  auVar17._12_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  this->_padding_ = (longlong)(double)fVar7;
  uVar19 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
  uVar18 = FRootMotionMovementParams::RootMotionScale.field0_0x0._12_4_;
  uVar26 = FRootMotionMovementParams::RootMotionScale.field0_0x0._8_4_;
  uVar25 = FRootMotionMovementParams::RootMotionScale.field0_0x0._4_4_;
  this->_padding_ = auVar17._8_8_;
  *(undefined4 *)&this->_padding_ = FRootMotionMovementParams::RootMotionScale.field0_0x0._0_4_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar25;
  *(undefined4 *)&this->_padding_ = uVar26;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar18;
  this->_padding_ = uVar19;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x000147b9995b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))(this,param_1 + *(float *)&this->_padding_);
  return;
}

// NetSerialize @ 147b999b0

bool __thiscall
FRootMotionSource_ConstantForce::NetSerialize
          (FRootMotionSource_ConstantForce *this,FArchive *param_1,UPackageMap *param_2,
          bool *param_3)

{
  bool bVar1;
  
  bVar1 = FRootMotionSource::NetSerialize((FRootMotionSource *)this,param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  UE::Math::operator<<(param_1,&this->Force);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->StrengthOverTime);
  *param_3 = true;
  return true;
}

// GetScriptStruct @ 147b99a20

UScriptStruct * __thiscall
FRootMotionSource_ConstantForce::GetScriptStruct(FRootMotionSource_ConstantForce *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRootMotionSource_ConstantForce.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRootMotionSource_ConstantForce.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce,(UObject *)pUVar1
                         ,L"RootMotionSource_ConstantForce");
  }
  return Z_Registration_Info_UScriptStruct_FRootMotionSource_ConstantForce.OuterSingleton;
}

// ToSimpleString @ 147b99a70

FString * __thiscall
FRootMotionSource_ConstantForce::ToSimpleString
          (FRootMotionSource_ConstantForce *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  ::FName::GetPlainNameString((FName *)((longlong)&this->_padding_ + 4),&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"[ID:%u]FRootMotionSource_ConstantForce %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AddReferencedObjects @ 147b99ae0

void __thiscall
FRootMotionSource_ConstantForce::AddReferencedObjects
          (FRootMotionSource_ConstantForce *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147b99af6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->StrengthOverTime,0,0);
  return;
}

// FRootMotionSource_ConstantForce @ 147bb9800

FRootMotionSource_ConstantForce * __thiscall
FRootMotionSource_ConstantForce::FRootMotionSource_ConstantForce
          (FRootMotionSource_ConstantForce *this)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  
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
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  this->_padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
  this->_padding_ = auVar4._8_8_;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  this->_padding_ = (longlong)(double)fVar2;
  this->_padding_ = auVar5._8_8_;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  this->_padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
  this->_padding_ = auVar6._8_8_;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  this->_padding_ = (longlong)(double)fVar2;
  this->_padding_ = auVar7._8_8_;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  this->_padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
  this->_padding_ = auVar8._8_8_;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  this->_padding_ = (longlong)(double)fVar2;
  this->_padding_ = auVar9._8_8_;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar10;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->_padding_ = (longlong)&___7FRootMotionSource_ConstantForce__6B_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 | 2;
  (this->Force).field0_0x0._s_0.X = 0.0;
  (this->Force).field0_0x0._s_0.Y = 0.0;
  (this->Force).field0_0x0._s_0.Z = 0.0;
  (this->StrengthOverTime).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  return this;
}

// ~FRootMotionSource_ConstantForce @ 147bbeed0

void __thiscall
FRootMotionSource_ConstantForce::~FRootMotionSource_ConstantForce
          (FRootMotionSource_ConstantForce *this)

{
  this->_padding_ = (longlong)&___7FRootMotionSource__6B_;
  return;
}

