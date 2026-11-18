// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5e3b50

UScriptStruct * __cdecl FDS_ViewModelContext_WorldInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_WorldInfo,(UObject *)pUVar1,
                         L"DS_ViewModelContext_WorldInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldInfo.OuterSingleton;
}

// FDS_ViewModelContext_WorldInfo @ 14b5e9590

FDS_ViewModelContext_WorldInfo * __thiscall
FDS_ViewModelContext_WorldInfo::FDS_ViewModelContext_WorldInfo(FDS_ViewModelContext_WorldInfo *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldInfo__6B_;
  (this->WorldInfo).WorldName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldInfo).WorldName.Data.ArrayNum = 0;
  (this->WorldInfo).WorldName.Data.ArrayMax = 0;
  (this->WorldInfo).WorldType = 0;
  (this->WorldInfo).WorldState = 0;
  (this->WorldInfo).WorldId = 0;
  (this->WorldInfo).RegionIndex = 0;
  *(undefined8 *)&(this->WorldInfo).CharCount = 0;
  ::FString::FString(&(this->WorldInfo).WorldName,L"");
  (this->WorldInfo).WorldType = -1;
  (this->WorldInfo).WorldState = -1;
  (this->WorldInfo).WorldId = -1;
  (this->WorldInfo).RegionIndex = -1;
  (this->WorldInfo).CharCount = -1;
  return this;
}

