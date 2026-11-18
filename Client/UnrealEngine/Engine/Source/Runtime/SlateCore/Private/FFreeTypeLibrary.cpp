// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FFreeTypeLibrary @ 142473170

/* WARNING: Enum "Type": Some values do not have unique names */

FFreeTypeLibrary * __thiscall FFreeTypeLibrary::FFreeTypeLibrary(FFreeTypeLibrary *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FT_MemoryRec_ *pFVar4;
  FFreeTypeLibrary *pFVar5;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  pFVar4 = FMemory::Malloc(0x20,0);
  this->CustomMemory = pFVar4;
  pFVar4->alloc = FreeTypeMemory::Alloc;
  this->CustomMemory->realloc = FreeTypeMemory::Realloc;
  this->CustomMemory->free = FreeTypeMemory::Free;
  this->CustomMemory->user = (void *)0x0;
  iVar3 = FT_New_Library(this->CustomMemory,this);
  if (iVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheFreeType.cpp"
                       ,0x160,L"Could not init FreeType. Error code: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FFreeTypeLibrary *)(*pcVar1)();
      return pFVar5;
    }
  }
  FT_Add_Default_Modules(this->FTLibrary);
  local_res8[0] = 0x28;
  if (GSlateEnableLegacyFontHinting != 0) {
    local_res8[0] = 0x23;
  }
  FT_Property_Set(this->FTLibrary,"truetype","interpreter-version",local_res8);
  if (bLoggedVersion == false) {
    bLoggedVersion = true;
    FT_Library_Version(this->FTLibrary,local_res20,local_res18,local_res10);
    if (4 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
  }
  return this;
}

// ~FFreeTypeLibrary @ 142479240

void __thiscall FFreeTypeLibrary::~FFreeTypeLibrary(FFreeTypeLibrary *this)

{
  FT_Done_Library(this->FTLibrary);
  FMemory::Free(this->CustomMemory);
  return;
}

