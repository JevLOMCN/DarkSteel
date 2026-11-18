// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 3

// StaticStruct @ 1436c7ed0

UScriptStruct * __cdecl FChaosVDWrapperDataBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDWrapperDataBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDWrapperDataBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,(UObject *)pUVar1,
                         L"ChaosVDWrapperDataBase");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDWrapperDataBase.OuterSingleton;
}

// HasValidData @ 1436c7f10

bool __thiscall FChaosVDWrapperDataBase::HasValidData(FChaosVDWrapperDataBase *this)

{
  return this->bHasValidData;
}

// ~FChaosVDWrapperDataBase @ 1436d5ae0

void __thiscall FChaosVDWrapperDataBase::~FChaosVDWrapperDataBase(FChaosVDWrapperDataBase *this)

{
  return;
}

