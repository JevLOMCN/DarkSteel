// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 2

// StaticStruct @ 14cf36c80

UScriptStruct * __cdecl FTrackedGeometryGroup::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTrackedGeometryGroup.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UScriptStruct_FTrackedGeometryGroup.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTrackedGeometryGroup,(UObject *)pUVar1,
                         L"TrackedGeometryGroup");
  }
  return Z_Registration_Info_UScriptStruct_FTrackedGeometryGroup.OuterSingleton;
}

// FTrackedGeometryGroup @ 14cf40aa0

FTrackedGeometryGroup * __thiscall
FTrackedGeometryGroup::FTrackedGeometryGroup
          (FTrackedGeometryGroup *this,UARTrackedGeometry *param_1)

{
  (this->ARActor).field0_0x0.DebugPtr = (AARActor *)0x0;
  (this->ARComponent).field0_0x0.DebugPtr = (UARComponent *)0x0;
  (this->TrackedGeometry).field0_0x0.DebugPtr = (UARTrackedGeometry *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UARTrackedGeometry *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->TrackedGeometry).field0_0x0.DebugPtr = param_1;
    return this;
  }
  (this->TrackedGeometry).field0_0x0.DebugPtr = param_1;
  return this;
}

