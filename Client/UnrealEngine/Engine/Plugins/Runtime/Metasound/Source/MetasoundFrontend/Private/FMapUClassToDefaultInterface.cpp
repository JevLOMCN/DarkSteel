// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Map @ 14ae7c7f0

TArray<Metasound::FFrontendQueryKey,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FMapUClassToDefaultInterface::Map
          (FMapUClassToDefaultInterface *this,
          TArray<Metasound::FFrontendQueryKey,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FFrontendQueryEntry *param_1)

{
  TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
  *pTVar1;
  <lambda_1> local_res10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar1 = &param_1->Value;
  if ((param_1->Value).TypeIndex != '\x04') {
    pTVar1 = (TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
              *)0x0;
  }
  if (pTVar1 != (TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
                 *)0x0) {
    Algo::
    TransformIf<TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_>,TArray<Metasound::FFrontendQueryKey,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::SearchEngineQuerySteps::FMapUClassToDefaultInterface::Map_::__l5::<lambda_1>,_Metasound::Frontend::SearchEngineQuerySteps::FMapUClassToDefaultInterface::Map_::__l5::<lambda_2>_>
              ((TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_> *)
               &pTVar1->_padding_,__return_storage_ptr__,local_res10,(<lambda_2>)local_res10);
  }
  return __return_storage_ptr__;
}

