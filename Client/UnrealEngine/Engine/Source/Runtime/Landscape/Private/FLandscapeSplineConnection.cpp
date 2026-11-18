// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 3

// StaticStruct @ 145ef0230

UScriptStruct * __cdecl FLandscapeSplineConnection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeSplineConnection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UScriptStruct_FLandscapeSplineConnection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeSplineConnection,(UObject *)pUVar1,
                         L"LandscapeSplineConnection");
  }
  return Z_Registration_Info_UScriptStruct_FLandscapeSplineConnection.OuterSingleton;
}

// GetFarConnection @ 145fc1790

FLandscapeSplineSegmentConnection * __thiscall
FLandscapeSplineConnection::GetFarConnection(FLandscapeSplineConnection *this)

{
  return ((this->Segment).field0_0x0.DebugPtr)->Connections + (1 - this->End);
}

// GetNearConnection @ 145fc3180

FLandscapeSplineSegmentConnection * __thiscall
FLandscapeSplineConnection::GetNearConnection(FLandscapeSplineConnection *this)

{
  return ((this->Segment).field0_0x0.DebugPtr)->Connections + this->End;
}

