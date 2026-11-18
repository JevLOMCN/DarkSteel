// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// StaticStruct @ 14ad770e0

UScriptStruct * __cdecl FMetaSoundFrontendNodeConfiguration::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundFrontendNodeConfiguration,
                         (UObject *)pUVar1,L"MetaSoundFrontendNodeConfiguration");
  }
  return Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton;
}

// OverrideDefaultInterface @ 14ad77200

TInstancedStruct<FMetasoundFrontendClassInterface> * __thiscall
FMetaSoundFrontendNodeConfiguration::OverrideDefaultInterface
          (FMetaSoundFrontendNodeConfiguration *this,
          TInstancedStruct<FMetasoundFrontendClassInterface> *__return_storage_ptr__,
          FMetasoundFrontendClass *param_1)

{
  (__return_storage_ptr__->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (__return_storage_ptr__->InstancedStruct).StructMemory = (uchar *)0x0;
  FInstancedStruct::FInstancedStruct(&__return_storage_ptr__->InstancedStruct);
  return __return_storage_ptr__;
}

// GetOperatorData @ 14ad77240

TSharedPtr<Metasound::IOperatorData_const_,1> * __thiscall
FMetaSoundFrontendNodeConfiguration::GetOperatorData
          (FMetaSoundFrontendNodeConfiguration *this,
          TSharedPtr<Metasound::IOperatorData_const_,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOperatorData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// ~FMetaSoundFrontendNodeConfiguration @ 14ad9e3a0

void __thiscall
FMetaSoundFrontendNodeConfiguration::~FMetaSoundFrontendNodeConfiguration
          (FMetaSoundFrontendNodeConfiguration *this)

{
  return;
}

