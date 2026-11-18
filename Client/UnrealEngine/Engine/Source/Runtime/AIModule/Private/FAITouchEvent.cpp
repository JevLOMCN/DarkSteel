// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 3

// StaticStruct @ 146fe8890

UScriptStruct * __cdecl FAITouchEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAITouchEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FAITouchEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAITouchEvent,(UObject *)pUVar1,L"AITouchEvent");
  }
  return Z_Registration_Info_UScriptStruct_FAITouchEvent.OuterSingleton;
}

// FAITouchEvent @ 146feb950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAITouchEvent * __thiscall FAITouchEvent::FAITouchEvent(FAITouchEvent *this,FAITouchEvent *param_1)

{
  AActor *pAVar1;
  double dVar2;
  
  dVar2 = (param_1->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar2;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  pAVar1 = (param_1->TouchReceiver).field0_0x0.DebugPtr;
  (this->TouchReceiver).field0_0x0.DebugPtr = pAVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  pAVar1 = (param_1->OtherActor).field0_0x0.DebugPtr;
  (this->OtherActor).field0_0x0.DebugPtr = pAVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  (this->TeamIdentifier).TeamID = (param_1->TeamIdentifier).TeamID;
  return this;
}

// GetTouchedActorAsPerceptionListener @ 146ff1190

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
FAITouchEvent::GetTouchedActorAsPerceptionListener(FAITouchEvent *this)

{
  TObjectPtr<AActor> *this_00;
  AActor *this_01;
  UObjectBaseUtility *this_02;
  bool bVar1;
  UClass *pUVar2;
  IAIPerceptionListenerInterface *pIVar3;
  
  this_01 = (this->TouchReceiver).field0_0x0.DebugPtr;
  this_00 = &this->TouchReceiver;
  pIVar3 = (IAIPerceptionListenerInterface *)0x0;
  if (this_01 != (AActor *)0x0) {
    pUVar2 = Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister();
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
        pUVar2 = Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister();
        pIVar3 = UObjectBaseUtility::GetInterfaceAddress(this_02,pUVar2);
      }
    }
  }
  return pIVar3;
}

