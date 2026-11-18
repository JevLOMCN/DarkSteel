// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 5

// StaticStruct @ 146f85320

UScriptStruct * __cdecl FAINoiseEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAINoiseEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FAINoiseEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAINoiseEvent,(UObject *)pUVar1,L"AINoiseEvent");
  }
  return Z_Registration_Info_UScriptStruct_FAINoiseEvent.OuterSingleton;
}

// FAINoiseEvent @ 146f90b90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAINoiseEvent * __thiscall FAINoiseEvent::FAINoiseEvent(FAINoiseEvent *this,FAINoiseEvent *param_1)

{
  AActor *pAVar1;
  double dVar2;
  
  this->Age = param_1->Age;
  dVar2 = (param_1->NoiseLocation).field0_0x0._s_0.Y;
  (this->NoiseLocation).field0_0x0._s_0.X = (param_1->NoiseLocation).field0_0x0._s_0.X;
  (this->NoiseLocation).field0_0x0._s_0.Y = dVar2;
  (this->NoiseLocation).field0_0x0._s_0.Z = (param_1->NoiseLocation).field0_0x0._s_0.Z;
  this->Loudness = param_1->Loudness;
  this->MaxRange = param_1->MaxRange;
  pAVar1 = (param_1->Instigator).field0_0x0.DebugPtr;
  (this->Instigator).field0_0x0.DebugPtr = pAVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  this->Tag = param_1->Tag;
  (this->TeamIdentifier).TeamID = (param_1->TeamIdentifier).TeamID;
  return this;
}

// FAINoiseEvent @ 146f90c00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAINoiseEvent * __thiscall
FAINoiseEvent::FAINoiseEvent
          (FAINoiseEvent *this,AActor *param_1,TVector<double> *param_2,float param_3,float param_4,
          FName param_5)

{
  double dVar1;
  
  this->Age = 0.0;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->NoiseLocation).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->NoiseLocation).field0_0x0._s_0.Y = dVar1;
  (this->NoiseLocation).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  (this->Instigator).field0_0x0.DebugPtr = param_1;
  this->Loudness = param_3;
  this->MaxRange = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->Tag = param_5;
  (this->TeamIdentifier).TeamID = FGenericTeamId::NoTeam.TeamID;
  Compile(this);
  return this;
}

// FAINoiseEvent @ 146f90c80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAINoiseEvent * __thiscall FAINoiseEvent::FAINoiseEvent(FAINoiseEvent *this)

{
  undefined8 uVar1;
  
  this->Age = 0.0;
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  (this->NoiseLocation).field0_0x0._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  (this->NoiseLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->NoiseLocation).field0_0x0._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  (this->Instigator).field0_0x0.DebugPtr = (AActor *)0x0;
  this->Loudness = 1.0;
  this->MaxRange = 0.0;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  (this->TeamIdentifier).TeamID = FGenericTeamId::NoTeam.TeamID;
  return this;
}

// Compile @ 146f9dc60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FAINoiseEvent::Compile(FAINoiseEvent *this)

{
  double dVar1;
  AActor *pAVar2;
  USceneComponent *pUVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FGenericTeamId FVar7;
  undefined7 extraout_var;
  
  FVar7 = FGenericTeamId::GetTeamIdentifier((AActor *)&stack0x00000008);
  dVar4 = __real_c7efffffe0000000;
  (this->TeamIdentifier).TeamID = *(uchar *)CONCAT71(extraout_var,FVar7.TeamID);
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar1 = (this->NoiseLocation).field0_0x0._s_0.X;
  if (((((dVar1 <= dVar4) || (__real_47efffffe0000000 <= dVar1)) ||
       (dVar1 = (this->NoiseLocation).field0_0x0._s_0.Y, dVar1 <= dVar4)) ||
      (((__real_47efffffe0000000 <= dVar1 ||
        (dVar1 = (this->NoiseLocation).field0_0x0._s_0.Z, dVar1 <= dVar4)) ||
       (__real_47efffffe0000000 <= dVar1)))) &&
     (pAVar2 = (this->Instigator).field0_0x0.DebugPtr, pAVar2 != (AActor *)0x0)) {
    pUVar3 = (pAVar2->RootComponent).field0_0x0.DebugPtr;
    if (pUVar3 != (USceneComponent *)0x0) {
      dVar4 = *(double *)((longlong)&(pUVar3->ComponentToWorld).Translation.XY + 8);
      dVar1 = (pUVar3->ComponentToWorld).Translation.ZW.m128d_f64[0];
      (this->NoiseLocation).field0_0x0._s_0.X =
           (pUVar3->ComponentToWorld).Translation.XY.m128d_f64[0];
      (this->NoiseLocation).field0_0x0._s_0.Y = dVar4;
      (this->NoiseLocation).field0_0x0._s_0.Z = dVar1;
      return;
    }
    (this->NoiseLocation).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->NoiseLocation).field0_0x0._s_0.Y = (double)uVar5;
    (this->NoiseLocation).field0_0x0._s_0.Z = (double)uVar6;
  }
  return;
}

