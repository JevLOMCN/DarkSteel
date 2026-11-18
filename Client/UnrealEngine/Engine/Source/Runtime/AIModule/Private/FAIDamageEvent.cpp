// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticStruct @ 146f828e0

UScriptStruct * __cdecl FAIDamageEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAIDamageEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FAIDamageEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAIDamageEvent,(UObject *)pUVar1,L"AIDamageEvent"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FAIDamageEvent.OuterSingleton;
}

// FAIDamageEvent @ 146f90a10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAIDamageEvent * __thiscall
FAIDamageEvent::FAIDamageEvent(FAIDamageEvent *this,FAIDamageEvent *param_1)

{
  AActor *pAVar1;
  double dVar2;
  
  this->Amount = param_1->Amount;
  dVar2 = (param_1->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar2;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  dVar2 = (param_1->HitLocation).field0_0x0._s_0.Y;
  (this->HitLocation).field0_0x0._s_0.X = (param_1->HitLocation).field0_0x0._s_0.X;
  (this->HitLocation).field0_0x0._s_0.Y = dVar2;
  (this->HitLocation).field0_0x0._s_0.Z = (param_1->HitLocation).field0_0x0._s_0.Z;
  pAVar1 = (param_1->DamagedActor).field0_0x0.DebugPtr;
  (this->DamagedActor).field0_0x0.DebugPtr = pAVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  pAVar1 = (param_1->Instigator).field0_0x0.DebugPtr;
  (this->Instigator).field0_0x0.DebugPtr = pAVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  this->Tag = param_1->Tag;
  return this;
}

// FAIDamageEvent @ 146f90aa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAIDamageEvent * __thiscall
FAIDamageEvent::FAIDamageEvent
          (FAIDamageEvent *this,AActor *param_1,AActor *param_2,float param_3,
          TVector<double> *param_4,TVector<double> *param_5,FName param_6)

{
  double dVar1;
  
  this->Amount = param_3;
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar1;
  (this->Location).field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  dVar1 = (param_5->field0_0x0)._s_0.Y;
  (this->HitLocation).field0_0x0._s_0.X = (param_5->field0_0x0)._s_0.X;
  (this->HitLocation).field0_0x0._s_0.Y = dVar1;
  (this->HitLocation).field0_0x0._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  (this->DamagedActor).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Instigator).field0_0x0.DebugPtr = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  this->Tag = param_6;
  Compile(this);
  return this;
}

// FAIDamageEvent @ 146f90b40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAIDamageEvent * __thiscall FAIDamageEvent::FAIDamageEvent(FAIDamageEvent *this)

{
  undefined8 uVar1;
  
  this->Amount = 1.0;
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar1;
  (this->Location).field0_0x0._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  (this->HitLocation).field0_0x0._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  (this->HitLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->HitLocation).field0_0x0._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  (this->DamagedActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->Instigator).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  return this;
}

// Compile @ 146f9db40

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

void __thiscall FAIDamageEvent::Compile(FAIDamageEvent *this)

{
  double dVar1;
  AActor *pAVar2;
  USceneComponent *pUVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  char cVar10;
  
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pAVar2 = (this->DamagedActor).field0_0x0.DebugPtr;
  if (pAVar2 != (AActor *)0x0) {
    dVar1 = (this->HitLocation).field0_0x0._s_0.X;
    if ((((dVar1 <= __real_c7efffffe0000000) || (__real_47efffffe0000000 <= dVar1)) ||
        (dVar1 = (this->HitLocation).field0_0x0._s_0.Y, dVar1 <= __real_c7efffffe0000000)) ||
       (((__real_47efffffe0000000 <= dVar1 ||
         (dVar1 = (this->HitLocation).field0_0x0._s_0.Z, dVar1 <= __real_c7efffffe0000000)) ||
        (__real_47efffffe0000000 <= dVar1)))) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x01';
    }
    dVar1 = (this->Location).field0_0x0._s_0.X;
    if (((dVar1 <= __real_c7efffffe0000000) || (__real_47efffffe0000000 <= dVar1)) ||
       ((dVar1 = (this->Location).field0_0x0._s_0.Y, dVar1 <= __real_c7efffffe0000000 ||
        (((__real_47efffffe0000000 <= dVar1 ||
          (dVar1 = (this->Location).field0_0x0._s_0.Z, dVar1 <= __real_c7efffffe0000000)) ||
         (__real_47efffffe0000000 <= dVar1)))))) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x01';
    }
    if (cVar9 != cVar10) {
      if (cVar9 != '\0') {
        dVar4 = (this->Location).field0_0x0._s_0.Y;
        dVar1 = (this->Location).field0_0x0._s_0.Z;
        (this->HitLocation).field0_0x0._s_0.X = (this->Location).field0_0x0._s_0.X;
        (this->HitLocation).field0_0x0._s_0.Y = dVar4;
        (this->HitLocation).field0_0x0._s_0.Z = dVar1;
        return;
      }
      dVar4 = (this->HitLocation).field0_0x0._s_0.Y;
      dVar1 = (this->HitLocation).field0_0x0._s_0.Z;
      (this->Location).field0_0x0._s_0.X = (this->HitLocation).field0_0x0._s_0.X;
      (this->Location).field0_0x0._s_0.Y = dVar4;
      (this->Location).field0_0x0._s_0.Z = dVar1;
      return;
    }
    if ((cVar9 == '\0') && (cVar10 == '\0')) {
      pUVar3 = (pAVar2->RootComponent).field0_0x0.DebugPtr;
      if (pUVar3 != (USceneComponent *)0x0) {
        dVar4 = (pUVar3->ComponentToWorld).Translation.XY.m128d_f64[0];
        dVar5 = *(double *)((longlong)&(pUVar3->ComponentToWorld).Translation.XY + 8);
        dVar1 = (pUVar3->ComponentToWorld).Translation.ZW.m128d_f64[0];
        (this->Location).field0_0x0._s_0.X = dVar4;
        (this->Location).field0_0x0._s_0.Y = dVar5;
        (this->HitLocation).field0_0x0._s_0.X = dVar4;
        (this->HitLocation).field0_0x0._s_0.Y = dVar5;
        (this->Location).field0_0x0._s_0.Z = dVar1;
        (this->HitLocation).field0_0x0._s_0.Z = dVar1;
        return;
      }
      (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (this->Location).field0_0x0._s_0.Y = (double)uVar7;
      (this->HitLocation).field0_0x0._s_0.X = (double)uVar6;
      (this->HitLocation).field0_0x0._s_0.Y = (double)uVar7;
      (this->Location).field0_0x0._s_0.Z = (double)uVar8;
      (this->HitLocation).field0_0x0._s_0.Z = (double)uVar8;
    }
  }
  return;
}

// GetDamagedActorAsPerceptionListener @ 146fadcc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

IAIPerceptionListenerInterface * __thiscall
FAIDamageEvent::GetDamagedActorAsPerceptionListener(FAIDamageEvent *this)

{
  TObjectPtr<AActor> *this_00;
  AActor *this_01;
  UObjectBaseUtility *this_02;
  bool bVar1;
  UClass *pUVar2;
  IAIPerceptionListenerInterface *pIVar3;
  
  this_01 = (this->DamagedActor).field0_0x0.DebugPtr;
  this_00 = &this->DamagedActor;
  pIVar3 = (IAIPerceptionListenerInterface *)0x0;
  if (this_01 != (AActor *)0x0) {
    pUVar2 = UAIPerceptionListenerInterface::StaticClass();
    pIVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar2);
    if ((pIVar3 == (IAIPerceptionListenerInterface *)0x0) &&
       ((this_00->field0_0x0).DebugPtr != (AActor *)0x0)) {
      pUVar2 = Z_Construct_UClass_APawn_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
      if ((!bVar1) || ((this_00->field0_0x0).DebugPtr == (AActor *)0x0)) {
        return (IAIPerceptionListenerInterface *)0x0;
      }
      this_02 = (UObjectBaseUtility *)(this_00->field0_0x0).DebugPtr[1].PrimaryActorTick._padding_;
      pIVar3 = (IAIPerceptionListenerInterface *)0x0;
      if (this_02 != (UObjectBaseUtility *)0x0) {
        pUVar2 = UAIPerceptionListenerInterface::StaticClass();
        pIVar3 = UObjectBaseUtility::GetInterfaceAddress(this_02,pUVar2);
      }
    }
  }
  return pIVar3;
}

