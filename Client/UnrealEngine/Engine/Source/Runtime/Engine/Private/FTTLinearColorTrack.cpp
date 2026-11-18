// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1488a2640

UScriptStruct * __cdecl FTTLinearColorTrack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTTLinearColorTrack.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTTLinearColorTrack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTTLinearColorTrack,(UObject *)pUVar1,
                         L"TTLinearColorTrack");
  }
  return Z_Registration_Info_UScriptStruct_FTTLinearColorTrack.OuterSingleton;
}

// operator== @ 1488b3890

bool __thiscall
FTTLinearColorTrack::operator==(FTTLinearColorTrack *this,FTTLinearColorTrack *param_1)

{
  UCurveLinearColor *pUVar1;
  UCurveLinearColor *this_00;
  bool bVar2;
  
  pUVar1 = (param_1->CurveLinearColor).field0_0x0.DebugPtr;
  this_00 = (this->CurveLinearColor).field0_0x0.DebugPtr;
  bVar2 = this_00 == pUVar1;
  if (((!bVar2) && (this_00 != (UCurveLinearColor *)0x0)) && (pUVar1 != (UCurveLinearColor *)0x0)) {
    bVar2 = UCurveLinearColor::operator==(this_00,pUVar1);
  }
  if (((bVar2 != false) && (this->_padding_ == param_1->_padding_)) &&
     ((char)this->_padding_ == (char)param_1->_padding_)) {
    return true;
  }
  return false;
}

