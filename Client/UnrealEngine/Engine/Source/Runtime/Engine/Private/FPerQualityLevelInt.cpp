// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1481b9450

UScriptStruct * __cdecl FPerQualityLevelInt::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPerQualityLevelInt.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPerQualityLevelInt.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPerQualityLevelInt,(UObject *)pUVar1,
                         L"PerQualityLevelInt");
  }
  return Z_Registration_Info_UScriptStruct_FPerQualityLevelInt.OuterSingleton;
}

// ToString @ 1482222c0

FString * __thiscall
FPerQualityLevelInt::ToString(FPerQualityLevelInt *this,FString *__return_storage_ptr__)

{
  int iVar1;
  
  iVar1 = this->Default;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::AppendInt(__return_storage_ptr__,iVar1);
  return __return_storage_ptr__;
}

