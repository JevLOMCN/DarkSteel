// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 3

// StaticStruct @ 146fe9480

UScriptStruct * __cdecl FAITeamStimulusEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAITeamStimulusEvent.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FAITeamStimulusEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAITeamStimulusEvent,(UObject *)pUVar1,
                         L"AITeamStimulusEvent");
  }
  return Z_Registration_Info_UScriptStruct_FAITeamStimulusEvent.OuterSingleton;
}

// FAITeamStimulusEvent @ 146feb770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAITeamStimulusEvent * __thiscall
FAITeamStimulusEvent::FAITeamStimulusEvent(FAITeamStimulusEvent *this,FAITeamStimulusEvent *param_1)

{
  AActor *pAVar1;
  double dVar2;
  
  dVar2 = (param_1->LastKnowLocation).field0_0x0._s_0.Y;
  (this->LastKnowLocation).field0_0x0._s_0.X = (param_1->LastKnowLocation).field0_0x0._s_0.X;
  (this->LastKnowLocation).field0_0x0._s_0.Y = dVar2;
  (this->LastKnowLocation).field0_0x0._s_0.Z = (param_1->LastKnowLocation).field0_0x0._s_0.Z;
  dVar2 = (param_1->BroadcastLocation).field0_0x0._s_0.Y;
  (this->BroadcastLocation).field0_0x0._s_0.X = (param_1->BroadcastLocation).field0_0x0._s_0.X;
  (this->BroadcastLocation).field0_0x0._s_0.Y = dVar2;
  (this->BroadcastLocation).field0_0x0._s_0.Z = (param_1->BroadcastLocation).field0_0x0._s_0.Z;
  this->RangeSq = param_1->RangeSq;
  this->InformationAge = param_1->InformationAge;
  (this->TeamIdentifier).TeamID = (param_1->TeamIdentifier).TeamID;
  this->Strength = param_1->Strength;
  pAVar1 = (param_1->Broadcaster).field0_0x0.DebugPtr;
  (this->Broadcaster).field0_0x0.DebugPtr = pAVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  pAVar1 = (param_1->Enemy).field0_0x0.DebugPtr;
  (this->Enemy).field0_0x0.DebugPtr = pAVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  return this;
}

// FAITeamStimulusEvent @ 146feb810

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

FAITeamStimulusEvent * __thiscall
FAITeamStimulusEvent::FAITeamStimulusEvent
          (FAITeamStimulusEvent *this,AActor *param_1,AActor *param_2,TVector<double> *param_3,
          float param_4,float param_5,float param_6)

{
  AActor *pAVar1;
  USceneComponent *pUVar2;
  double dVar3;
  FGenericTeamId FVar4;
  undefined7 extraout_var;
  double local_28;
  double dStack_20;
  double local_18;
  
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  (this->LastKnowLocation).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->LastKnowLocation).field0_0x0._s_0.Y = dVar3;
  (this->LastKnowLocation).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  (this->TeamIdentifier).TeamID = 0xff;
  this->RangeSq = param_4 * param_4;
  this->InformationAge = param_5;
  this->Strength = param_6;
  (this->Broadcaster).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Enemy).field0_0x0.DebugPtr = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  pAVar1 = (this->Broadcaster).field0_0x0.DebugPtr;
  if (pAVar1 == (AActor *)0x0) {
    local_28 = FAISystem::InvalidLocation.field0_0x0._s_0.X;
    dStack_20 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
    local_18 = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  }
  else {
    pUVar2 = (pAVar1->RootComponent).field0_0x0.DebugPtr;
    if (pUVar2 == (USceneComponent *)0x0) {
      local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      local_28 = (pUVar2->ComponentToWorld).Translation.XY.m128d_f64[0];
      dStack_20 = *(double *)((longlong)&(pUVar2->ComponentToWorld).Translation.XY + 8);
      local_18 = (pUVar2->ComponentToWorld).Translation.ZW.m128d_f64[0];
    }
  }
  (this->BroadcastLocation).field0_0x0._s_0.X = local_28;
  (this->BroadcastLocation).field0_0x0._s_0.Y = dStack_20;
  (this->BroadcastLocation).field0_0x0._s_0.Z = local_18;
  FVar4 = FGenericTeamId::GetTeamIdentifier((AActor *)&param_4);
  (this->TeamIdentifier).TeamID = *(uchar *)CONCAT71(extraout_var,FVar4.TeamID);
  return this;
}

