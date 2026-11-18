// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1488a2180

UScriptStruct * __cdecl FTTTrackBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTTTrackBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTTTrackBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTTTrackBase,(UObject *)pUVar1,L"TTTrackBase");
  }
  return Z_Registration_Info_UScriptStruct_FTTTrackBase.OuterSingleton;
}

// SetTrackName @ 1488a21c0

void __thiscall
FTTTrackBase::SetTrackName(FTTTrackBase *this,FName param_1,UTimelineTemplate *param_2)

{
  this->TrackName = param_1;
  return;
}

// ~FTTTrackBase @ 1488b2300

void __thiscall FTTTrackBase::~FTTTrackBase(FTTTrackBase *this)

{
  return;
}

// operator== @ 1488b3900

bool __thiscall FTTTrackBase::operator==(FTTTrackBase *this,FTTTrackBase *param_1)

{
  if ((this->TrackName == param_1->TrackName) &&
     (this->bIsExternalCurve == param_1->bIsExternalCurve)) {
    return true;
  }
  return false;
}

