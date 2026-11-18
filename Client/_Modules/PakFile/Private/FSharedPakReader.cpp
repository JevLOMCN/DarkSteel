// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 4

// FSharedPakReader @ 142a53d80

/* WARNING: Enum "EVersion": Some values do not have unique names */

FSharedPakReader * __thiscall
FSharedPakReader::FSharedPakReader(FSharedPakReader *this,FArchive *param_1,FPakFile *param_2)

{
  code *pcVar1;
  bool bVar2;
  FSharedPakReader *pFVar3;
  
  this->Archive = param_1;
  this->PakFile = param_2;
  if (param_2 == (FPakFile *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PakFile",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x1118,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSharedPakReader *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// FSharedPakReader @ 142a53dd0

/* WARNING: Enum "EVersion": Some values do not have unique names */

FSharedPakReader * __thiscall
FSharedPakReader::FSharedPakReader(FSharedPakReader *this,FSharedPakReader *param_1)

{
  this->Archive = param_1->Archive;
  this->PakFile = param_1->PakFile;
  param_1->Archive = (FArchive *)0x0;
  param_1->PakFile = (FPakFile *)0x0;
  return this;
}

// ~FSharedPakReader @ 142a57580

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FSharedPakReader::~FSharedPakReader(FSharedPakReader *this)

{
  if (this->Archive != (FArchive *)0x0) {
    FPakFile::ReturnSharedReader(this->PakFile,this->Archive);
    this->Archive = (FArchive *)0x0;
  }
  return;
}

// operator= @ 142a58150

/* WARNING: Enum "EVersion": Some values do not have unique names */

FSharedPakReader * __thiscall
FSharedPakReader::operator=(FSharedPakReader *this,FSharedPakReader *param_1)

{
  if (this->Archive != (FArchive *)0x0) {
    FPakFile::ReturnSharedReader(this->PakFile,this->Archive);
  }
  this->Archive = param_1->Archive;
  this->PakFile = param_1->PakFile;
  param_1->Archive = (FArchive *)0x0;
  param_1->PakFile = (FPakFile *)0x0;
  return this;
}

