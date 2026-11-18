// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// FInterfaceRegistryTransactionSource @ 14ae59760

FInterfaceRegistryTransactionSource * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FInterfaceRegistryTransactionSource::
FInterfaceRegistryTransactionSource(FInterfaceRegistryTransactionSource *this)

{
  FInterfaceRegistry *this_00;
  
  this->_padding_ =
       (longlong)
       &___7FInterfaceRegistryTransactionSource_SearchEngineQuerySteps_Frontend_Metasound__6B_;
  this_00 = FInterfaceRegistry::Get();
  FInterfaceRegistry::CreateTransactionStream(this_00);
  return this;
}

// Stream @ 14ae8aab0

void __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FInterfaceRegistryTransactionSource::Stream
          (FInterfaceRegistryTransactionSource *this,
          TArray<TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction> *pTVar1;
  
  pTVar1 = (this->TransactionStream).Ptr;
  if (pTVar1 != (TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction> *)0x0) {
    TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction>::
    StreamTransactions<_Metasound::Frontend::SearchEngineQuerySteps::FInterfaceRegistryTransactionSource::Stream_::__l2::<lambda_1>_>
              ((pTVar1->Buffer).Object,pTVar1->ReaderHandle,(<lambda_1>)param_1);
    return;
  }
  return;
}

