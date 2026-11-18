// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147f91100

UScriptStruct * __cdecl FBspSurf::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBspSurf.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBspSurf.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBspSurf,(UObject *)pUVar1,L"BspSurf");
  }
  return Z_Registration_Info_UScriptStruct_FBspSurf.OuterSingleton;
}

// AddReferencedObjects @ 147fb2020

void __thiscall FBspSurf::AddReferencedObjects(FBspSurf *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,this,0,0);
                    /* WARNING: Could not recover jumptable at 0x000147fb205f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Actor,0,0);
  return;
}

