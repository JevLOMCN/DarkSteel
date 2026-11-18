// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// operator= @ 1480f7e10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FParticleSysParam * __thiscall
FParticleSysParam::operator=(FParticleSysParam *this,FParticleSysParam *param_1)

{
  AActor *pAVar1;
  UMaterialInterface *pUVar2;
  double dVar3;
  
  this->Name = param_1->Name;
  (this->ParamType).Value = (param_1->ParamType).Value;
  this->Scalar = param_1->Scalar;
  this->Scalar_Low = param_1->Scalar_Low;
  dVar3 = (param_1->Vector).field0_0x0._s_0.Y;
  (this->Vector).field0_0x0._s_0.X = (param_1->Vector).field0_0x0._s_0.X;
  (this->Vector).field0_0x0._s_0.Y = dVar3;
  (this->Vector).field0_0x0._s_0.Z = (param_1->Vector).field0_0x0._s_0.Z;
  dVar3 = (param_1->Vector_Low).field0_0x0._s_0.Y;
  (this->Vector_Low).field0_0x0._s_0.X = (param_1->Vector_Low).field0_0x0._s_0.X;
  (this->Vector_Low).field0_0x0._s_0.Y = dVar3;
  (this->Vector_Low).field0_0x0._s_0.Z = (param_1->Vector_Low).field0_0x0._s_0.Z;
  (this->Color).field0_0x0 = (param_1->Color).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar1 = (param_1->Actor).field0_0x0.DebugPtr, pAVar1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  (this->Actor).field0_0x0 = (param_1->Actor).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->Material).field0_0x0.DebugPtr, pUVar2 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Material).field0_0x0 = (param_1->Material).field0_0x0;
  dVar3 = (param_1->AsyncActorToWorld).Rotation.XY.m128d_f64[1];
  (this->AsyncActorToWorld).Rotation.XY.m128d_f64[0] =
       (param_1->AsyncActorToWorld).Rotation.XY.m128d_f64[0];
  (this->AsyncActorToWorld).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->AsyncActorToWorld).Rotation.ZW.m128d_f64[1];
  (this->AsyncActorToWorld).Rotation.ZW.m128d_f64[0] =
       (param_1->AsyncActorToWorld).Rotation.ZW.m128d_f64[0];
  (this->AsyncActorToWorld).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->AsyncActorToWorld).Translation.XY.m128d_f64[1];
  (this->AsyncActorToWorld).Translation.XY.m128d_f64[0] =
       (param_1->AsyncActorToWorld).Translation.XY.m128d_f64[0];
  (this->AsyncActorToWorld).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->AsyncActorToWorld).Translation.ZW.m128d_f64[1];
  (this->AsyncActorToWorld).Translation.ZW.m128d_f64[0] =
       (param_1->AsyncActorToWorld).Translation.ZW.m128d_f64[0];
  (this->AsyncActorToWorld).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->AsyncActorToWorld).Scale3D.XY.m128d_f64[1];
  (this->AsyncActorToWorld).Scale3D.XY.m128d_f64[0] =
       (param_1->AsyncActorToWorld).Scale3D.XY.m128d_f64[0];
  (this->AsyncActorToWorld).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->AsyncActorToWorld).Scale3D.ZW.m128d_f64[1];
  (this->AsyncActorToWorld).Scale3D.ZW.m128d_f64[0] =
       (param_1->AsyncActorToWorld).Scale3D.ZW.m128d_f64[0];
  (this->AsyncActorToWorld).Scale3D.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->AsyncActorVelocity).field0_0x0._s_0.Y;
  (this->AsyncActorVelocity).field0_0x0._s_0.X = (param_1->AsyncActorVelocity).field0_0x0._s_0.X;
  (this->AsyncActorVelocity).field0_0x0._s_0.Y = dVar3;
  (this->AsyncActorVelocity).field0_0x0._s_0.Z = (param_1->AsyncActorVelocity).field0_0x0._s_0.Z;
  this->bAsyncDataCopyIsValid = param_1->bAsyncDataCopyIsValid;
  return this;
}

// StaticStruct @ 14814f6f0

UScriptStruct * __cdecl FParticleSysParam::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FParticleSysParam.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FParticleSysParam.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FParticleSysParam,(UObject *)pUVar1,
                         L"ParticleSysParam");
  }
  return Z_Registration_Info_UScriptStruct_FParticleSysParam.OuterSingleton;
}

// FParticleSysParam @ 14815a930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FParticleSysParam * __thiscall FParticleSysParam::FParticleSysParam(FParticleSysParam *this)

{
  undefined8 uVar1;
  
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->ParamType).Value = '\0';
  (this->Vector).field0_0x0._s_0.X = 0.0;
  (this->Vector).field0_0x0._s_0.Y = 0.0;
  (this->Vector).field0_0x0._s_0.Z = 0.0;
  (this->Vector_Low).field0_0x0._s_0.X = 0.0;
  (this->Vector_Low).field0_0x0._s_0.Y = 0.0;
  (this->Vector_Low).field0_0x0._s_0.Z = 0.0;
  (this->Color).field0_0x0.Bits = 0;
  (this->Actor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->Scalar = 0.0;
  this->Scalar_Low = 0.0;
  *&(this->AsyncActorToWorld).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->AsyncActorToWorld).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->AsyncActorToWorld).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->AsyncActorToWorld).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->AsyncActorToWorld).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->AsyncActorToWorld).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AsyncActorVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AsyncActorVelocity).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bAsyncDataCopyIsValid = false;
  (this->AsyncActorVelocity).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

