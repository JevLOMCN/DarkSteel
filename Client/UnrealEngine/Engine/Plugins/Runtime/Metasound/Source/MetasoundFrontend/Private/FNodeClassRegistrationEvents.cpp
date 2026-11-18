// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// FNodeClassRegistrationEvents @ 14ae5a110

FNodeClassRegistrationEvents * __thiscall
Metasound::FNodeClassRegistrationEvents::FNodeClassRegistrationEvents
          (FNodeClassRegistrationEvents *this)

{
  this->_padding_ = (longlong)&___7FNodeClassRegistrationEvents_Metasound__6B_;
  MakePimpl<Metasound::FNodeClassRegistrationEventsPimpl,0>();
  return this;
}

// Stream @ 14ae8aad0

void __thiscall
Metasound::FNodeClassRegistrationEvents::Stream
          (FNodeClassRegistrationEvents *this,
          TArray<TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>,TSizedDefaultAllocator<32>_>
          *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014ae8aad7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->Pimpl).Ptr)->_padding_ + 8))();
  return;
}

