// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1488a2560

UScriptStruct * __cdecl FTTFloatTrack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTTFloatTrack.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTTFloatTrack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTTFloatTrack,(UObject *)pUVar1,L"TTFloatTrack");
  }
  return Z_Registration_Info_UScriptStruct_FTTFloatTrack.OuterSingleton;
}

// operator== @ 1488b3820

bool __thiscall FTTFloatTrack::operator==(FTTFloatTrack *this,FTTFloatTrack *param_1)

{
  UCurveFloat *pUVar1;
  UCurveFloat *this_00;
  bool bVar2;
  
  pUVar1 = (param_1->CurveFloat).field0_0x0.DebugPtr;
  this_00 = (this->CurveFloat).field0_0x0.DebugPtr;
  bVar2 = this_00 == pUVar1;
  if (((!bVar2) && (this_00 != (UCurveFloat *)0x0)) && (pUVar1 != (UCurveFloat *)0x0)) {
    bVar2 = UCurveFloat::operator==(this_00,pUVar1);
  }
  if (((bVar2 != false) && (this->_padding_ == param_1->_padding_)) &&
     ((char)this->_padding_ == (char)param_1->_padding_)) {
    return true;
  }
  return false;
}

