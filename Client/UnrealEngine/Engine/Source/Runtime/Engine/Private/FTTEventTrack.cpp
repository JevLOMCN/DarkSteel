// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1488a2240

UScriptStruct * __cdecl FTTEventTrack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTTEventTrack.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTTEventTrack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTTEventTrack,(UObject *)pUVar1,L"TTEventTrack");
  }
  return Z_Registration_Info_UScriptStruct_FTTEventTrack.OuterSingleton;
}

// SetTrackName @ 1488a2280

void __thiscall
FTTEventTrack::SetTrackName(FTTEventTrack *this,FName param_1,UTimelineTemplate *param_2)

{
  ForAnyElementType FVar1;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this->_padding_ = (longlong)param_1;
  local_res8 = param_1;
  ::FName::ToString(&local_res8,&local_28);
  local_res10 = param_2->VariableName;
  ::FName::ToString(&local_res10,&local_38);
  ::FString::PrintfImpl(&local_48,L"%s__%s__EventFunc");
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar1.Data = local_48.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res18,(wchar_t *)FVar1.Data);
  this->FunctionName = local_res18;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// operator== @ 1488b37b0

bool __thiscall FTTEventTrack::operator==(FTTEventTrack *this,FTTEventTrack *param_1)

{
  UCurveFloat *pUVar1;
  UCurveFloat *this_00;
  bool bVar2;
  
  pUVar1 = (param_1->CurveKeys).field0_0x0.DebugPtr;
  this_00 = (this->CurveKeys).field0_0x0.DebugPtr;
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

