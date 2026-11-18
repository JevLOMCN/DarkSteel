// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// StaticStruct @ 145ef2260

UScriptStruct * __cdecl FLandscapeSplineSegmentConnection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeSplineSegmentConnection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UScriptStruct_FLandscapeSplineSegmentConnection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection,
                         (UObject *)pUVar1,L"LandscapeSplineSegmentConnection");
  }
  return Z_Registration_Info_UScriptStruct_FLandscapeSplineSegmentConnection.OuterSingleton;
}

// FLandscapeSplineSegmentConnection @ 145ef39a0

FLandscapeSplineSegmentConnection * __thiscall
FLandscapeSplineSegmentConnection::FLandscapeSplineSegmentConnection
          (FLandscapeSplineSegmentConnection *this)

{
  (this->ControlPoint).field0_0x0.DebugPtr = (ULandscapeSplineControlPoint *)0x0;
  this->TangentLen = 0.0;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  return this;
}

