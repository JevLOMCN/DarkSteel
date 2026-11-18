// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 2

// StaticStruct @ 14dadaa90

UScriptStruct * __cdecl FCacheEventBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosCaching();
    Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCacheEventBase,(UObject *)pUVar1,
                         L"CacheEventBase");
  }
  return Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton;
}

// ~FCacheEventBase @ 14dae8850

void __thiscall FCacheEventBase::~FCacheEventBase(FCacheEventBase *this)

{
  *this = (FCacheEventBase)&___7FCacheEventBase__6B_;
  return;
}

