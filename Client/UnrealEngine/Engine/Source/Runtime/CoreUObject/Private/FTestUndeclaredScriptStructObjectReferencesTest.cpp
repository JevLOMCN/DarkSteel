// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// StaticStruct @ 141e4ea80

UScriptStruct * __cdecl FTestUndeclaredScriptStructObjectReferencesTest::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestUndeclaredScriptStructObjectReferencesTest.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FTestUndeclaredScriptStructObjectReferencesTest.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FTestUndeclaredScriptStructObjectReferencesTest
                           ,(UObject *)pUVar1,L"TestUndeclaredScriptStructObjectReferencesTest");
  }
  return Z_Registration_Info_UScriptStruct_FTestUndeclaredScriptStructObjectReferencesTest.
         OuterSingleton;
}

// Serialize @ 141f9ccd0

bool __thiscall
FTestUndeclaredScriptStructObjectReferencesTest::Serialize
          (FTestUndeclaredScriptStructObjectReferencesTest *this,FArchive *param_1)

{
  longlong *plVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,this);
  (**(code **)(*(longlong *)param_1 + 0x148))(param_1,&this->SoftObjectPointer);
  plVar1 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x140))(param_1,&this->SoftObjectPath);
  (**(code **)(*plVar1 + 0x138))(plVar1,&this->WeakObjectPointer);
  return true;
}

