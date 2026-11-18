// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FModuleInitializerEntry @ 141916f00

FModuleInitializerEntry * __thiscall
FModuleInitializerEntry::FModuleInitializerEntry
          (FModuleInitializerEntry *this,wchar_t *param_1,
          _func___cdecl_IModuleInterface_ptr *param_2,wchar_t *param_3)

{
  int iVar1;
  
  this->Name = param_1;
  this->Name2 = (wchar_t *)0x0;
  this->Function = param_2;
  iVar1 = FGenericPlatformStricmp::Stricmp(param_1,param_3);
  if (iVar1 != 0) {
    this->Name2 = param_3;
  }
  this->Prev = (FModuleInitializerEntry *)0x0;
  this->Next = GFirstModuleInitializerEntry;
  if (GFirstModuleInitializerEntry != (FModuleInitializerEntry *)0x0) {
    GFirstModuleInitializerEntry->Prev = this;
  }
  GFirstModuleInitializerEntry = this;
  return this;
}

// ~FModuleInitializerEntry @ 14191bd30

void __thiscall FModuleInitializerEntry::~FModuleInitializerEntry(FModuleInitializerEntry *this)

{
  if (this->Next != (FModuleInitializerEntry *)0x0) {
    this->Next->Prev = this->Prev;
  }
  if (this->Prev != (FModuleInitializerEntry *)0x0) {
    this->Prev->Next = this->Next;
    return;
  }
  GFirstModuleInitializerEntry = this->Next;
  return;
}

// FindModule @ 14193d430

_func___cdecl_IModuleInterface_ptr * __cdecl FModuleInitializerEntry::FindModule(wchar_t *param_1)

{
  FModuleInitializerEntry *pFVar1;
  int iVar2;
  
  pFVar1 = GFirstModuleInitializerEntry;
  while( true ) {
    if (pFVar1 == (FModuleInitializerEntry *)0x0) {
      return (_func___cdecl_IModuleInterface_ptr *)0x0;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp(param_1,pFVar1->Name);
    if ((iVar2 == 0) ||
       ((pFVar1->Name2 != (wchar_t *)0x0 &&
        (iVar2 = FGenericPlatformStricmp::Stricmp(param_1,pFVar1->Name2), iVar2 == 0)))) break;
    pFVar1 = pFVar1->Next;
  }
  return pFVar1->Function;
}

