// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 14822c490

UScriptStruct * __cdecl FChaosRemovalEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosRemovalEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FChaosRemovalEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosRemovalEvent,(UObject *)pUVar1,
                         L"ChaosRemovalEvent");
  }
  return Z_Registration_Info_UScriptStruct_FChaosRemovalEvent.OuterSingleton;
}

// FChaosRemovalEvent @ 14824e2b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FChaosRemovalEvent * __thiscall FChaosRemovalEvent::FChaosRemovalEvent(FChaosRemovalEvent *this)

{
  undefined8 uVar1;
  
  (this->Component).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->Mass = 0.0;
  (this->Location).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

