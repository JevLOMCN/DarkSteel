// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 2

// StartupModule @ 14b1ba4d0

void __thiscall
Metasound::FMetasoundStandardNodesModule::StartupModule(FMetasoundStandardNodesModule *this)

{
  Frontend::RegistrationPrivate::FRegistrationListBase::RegisterAll
            (&Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
              ModuleInfo,Head);
  return;
}

// ShutdownModule @ 14b1ba520

void __thiscall
Metasound::FMetasoundStandardNodesModule::ShutdownModule(FMetasoundStandardNodesModule *this)

{
  Frontend::RegistrationPrivate::FRegistrationListBase::UnregisterAll
            (&Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
              ModuleInfo,Head);
  return;
}

