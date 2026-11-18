// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 2

// StaticStruct @ 148c70b80

UScriptStruct * __cdecl FTraceQueryTestNames::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTraceQueryTestNames.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UScriptStruct_FTraceQueryTestNames.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTraceQueryTestNames,(UObject *)pUVar1,
                         L"TraceQueryTestNames");
  }
  return Z_Registration_Info_UScriptStruct_FTraceQueryTestNames.OuterSingleton;
}

// ToString @ 148c9eb60

FString * __thiscall
FTraceQueryTestNames::ToString(FTraceQueryTestNames *this,FString *__return_storage_ptr__)

{
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FName::ToString(&this->PhysicalMaterialName,&local_18);
  ::FName::ToString(&this->ActorName,&local_28);
  ::FName::ToString(&this->ComponentName,&local_38);
  ::FString::PrintfImpl(__return_storage_ptr__,L"Component:%s, Actor:%s, PhysicalMaterial:%s");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

