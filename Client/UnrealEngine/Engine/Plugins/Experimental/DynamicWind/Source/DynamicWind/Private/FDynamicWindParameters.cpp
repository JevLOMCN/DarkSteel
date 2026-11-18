// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 2

// StaticStruct @ 14da48fe0

UScriptStruct * __cdecl FDynamicWindParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDynamicWindParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DynamicWind();
    Z_Registration_Info_UScriptStruct_FDynamicWindParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDynamicWindParameters,(UObject *)pUVar1,
                         L"DynamicWindParameters");
  }
  return Z_Registration_Info_UScriptStruct_FDynamicWindParameters.OuterSingleton;
}

// operator= @ 14da4d9a0

FDynamicWindParameters * __thiscall
FDynamicWindParameters::operator=(FDynamicWindParameters *this,FDynamicWindParameters *param_1)

{
  UTexture *pUVar1;
  double dVar2;
  undefined8 uVar3;
  
  dVar2 = (param_1->SimulationCenter).field0_0x0._s_0.Y;
  (this->SimulationCenter).field0_0x0._s_0.X = (param_1->SimulationCenter).field0_0x0._s_0.X;
  (this->SimulationCenter).field0_0x0._s_0.Y = dVar2;
  (this->SimulationCenter).field0_0x0._s_0.Z = (param_1->SimulationCenter).field0_0x0._s_0.Z;
  this->SimulationExtents = param_1->SimulationExtents;
  dVar2 = (param_1->WindDirection).field0_0x0._s_0.Y;
  (this->WindDirection).field0_0x0._s_0.X = (param_1->WindDirection).field0_0x0._s_0.X;
  (this->WindDirection).field0_0x0._s_0.Y = dVar2;
  (this->WindDirection).field0_0x0._s_0.Z = (param_1->WindDirection).field0_0x0._s_0.Z;
  this->WindSpeed = param_1->WindSpeed;
  this->WindAmplitude = param_1->WindAmplitude;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->WindTexture).field0_0x0.DebugPtr, pUVar1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->WindTexture).field0_0x0 = (param_1->WindTexture).field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&(param_1->DebugModulation).field0_0x0 + 8);
  *(undefined8 *)&(this->DebugModulation).field0_0x0 =
       *(undefined8 *)&(param_1->DebugModulation).field0_0x0;
  *(undefined8 *)((longlong)&(this->DebugModulation).field0_0x0 + 8) = uVar3;
  return this;
}

