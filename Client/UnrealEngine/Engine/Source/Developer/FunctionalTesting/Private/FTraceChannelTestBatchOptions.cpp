// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 2

// StaticStruct @ 148c70b40

UScriptStruct * __cdecl FTraceChannelTestBatchOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTraceChannelTestBatchOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UScriptStruct_FTraceChannelTestBatchOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions,(UObject *)pUVar1,
                         L"TraceChannelTestBatchOptions");
  }
  return Z_Registration_Info_UScriptStruct_FTraceChannelTestBatchOptions.OuterSingleton;
}

// ToString @ 148c9eaf0

FString * __thiscall
FTraceChannelTestBatchOptions::ToString
          (FTraceChannelTestBatchOptions *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"bLineTrace:%d, bSphereTrace:%d, bCapsuleTrace:%d, bBoxTrace:%d, bChannelTrace:%d, bObjectsTrace:%d, bProfileTrace:%d"
            );
  return __return_storage_ptr__;
}

