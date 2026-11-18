// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1488a25d0

UScriptStruct * __cdecl FTTVectorTrack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTTVectorTrack.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTTVectorTrack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTTVectorTrack,(UObject *)pUVar1,L"TTVectorTrack"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FTTVectorTrack.OuterSingleton;
}

// operator== @ 1488b3920

bool __thiscall FTTVectorTrack::operator==(FTTVectorTrack *this,FTTVectorTrack *param_1)

{
  UCurveVector *pUVar1;
  UCurveVector *this_00;
  bool bVar2;
  
  pUVar1 = (param_1->CurveVector).field0_0x0.DebugPtr;
  this_00 = (this->CurveVector).field0_0x0.DebugPtr;
  bVar2 = this_00 == pUVar1;
  if (((!bVar2) && (this_00 != (UCurveVector *)0x0)) && (pUVar1 != (UCurveVector *)0x0)) {
    bVar2 = UCurveVector::operator==(this_00,pUVar1);
  }
  if (((this->_padding_ == param_1->_padding_) &&
      ((char)this->_padding_ == (char)param_1->_padding_)) && (bVar2 != false)) {
    return true;
  }
  return false;
}

