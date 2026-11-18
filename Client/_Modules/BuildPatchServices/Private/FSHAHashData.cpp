// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// StaticStruct @ 1431ff410

UScriptStruct * __cdecl FSHAHashData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSHAHashData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_BuildPatchServices();
    Z_Registration_Info_UScriptStruct_FSHAHashData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSHAHashData,(UObject *)pUVar1,L"SHAHashData");
  }
  return Z_Registration_Info_UScriptStruct_FSHAHashData.OuterSingleton;
}

// FSHAHashData @ 143224df0

FSHAHashData * __thiscall FSHAHashData::FSHAHashData(FSHAHashData *this)

{
  this->Hash[0] = '\0';
  this->Hash[1] = '\0';
  this->Hash[2] = '\0';
  this->Hash[3] = '\0';
  this->Hash[4] = '\0';
  this->Hash[5] = '\0';
  this->Hash[6] = '\0';
  this->Hash[7] = '\0';
  this->Hash[8] = '\0';
  this->Hash[9] = '\0';
  this->Hash[10] = '\0';
  this->Hash[0xb] = '\0';
  this->Hash[0xc] = '\0';
  this->Hash[0xd] = '\0';
  this->Hash[0xe] = '\0';
  this->Hash[0xf] = '\0';
  this->Hash[0x10] = '\0';
  this->Hash[0x11] = '\0';
  this->Hash[0x12] = '\0';
  this->Hash[0x13] = '\0';
  return this;
}

