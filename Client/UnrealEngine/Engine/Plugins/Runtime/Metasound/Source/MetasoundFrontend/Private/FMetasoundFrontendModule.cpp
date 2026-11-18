// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// StartupModule @ 14ad6b510

void __thiscall FMetasoundFrontendModule::StartupModule(FMetasoundFrontendModule *this)

{
  TUniquePtr<Metasound::Frontend::INodeTemplate,TDefaultDelete<Metasound::Frontend::INodeTemplate>_>
  local_res10 [3];
  
  local_res10[0].Ptr = ::operator_new(8);
  if (local_res10[0].Ptr != (INodeTemplate *)0x0) {
    *local_res10[0].Ptr = (INodeTemplate)&___7FAudioAnalyzerNodeTemplate_Frontend_Metasound__6B_;
  }
  Metasound::Frontend::RegisterNodeTemplate(local_res10);
  if (local_res10[0].Ptr != (INodeTemplate *)0x0) {
    (**(code **)((longlong)*local_res10[0].Ptr + 8))(local_res10[0].Ptr,1);
  }
  local_res10[0].Ptr = ::operator_new(8);
  if (local_res10[0].Ptr != (INodeTemplate *)0x0) {
    *local_res10[0].Ptr = (INodeTemplate)&___7FInputNodeTemplate_Frontend_Metasound__6B_;
  }
  Metasound::Frontend::RegisterNodeTemplate(local_res10);
  if (local_res10[0].Ptr != (INodeTemplate *)0x0) {
    (**(code **)((longlong)*local_res10[0].Ptr + 8))(local_res10[0].Ptr,1);
  }
  local_res10[0].Ptr = ::operator_new(8);
  if (local_res10[0].Ptr != (INodeTemplate *)0x0) {
    *local_res10[0].Ptr = (INodeTemplate)&___7FRerouteNodeTemplate_Frontend_Metasound__6B_;
  }
  Metasound::Frontend::RegisterNodeTemplate(local_res10);
  if (local_res10[0].Ptr != (INodeTemplate *)0x0) {
    (**(code **)((longlong)*local_res10[0].Ptr + 8))(local_res10[0].Ptr,1);
  }
  Metasound::Frontend::RegistrationPrivate::FRegistrationListBase::RegisterAll
            (&Metasound::Frontend::RegistrationPrivate::FMetasound_MetasoundFrontend_Registration::
              ModuleInfo,Head);
  return;
}

// ShutdownModule @ 14ad6b5f0

void __thiscall FMetasoundFrontendModule::ShutdownModule(FMetasoundFrontendModule *this)

{
  Metasound::Frontend::RegistrationPrivate::FRegistrationListBase::UnregisterAll
            (&Metasound::Frontend::RegistrationPrivate::FMetasound_MetasoundFrontend_Registration::
              ModuleInfo,Head);
  Metasound::Frontend::UnregisterNodeTemplate
            (&Metasound::Frontend::FAudioAnalyzerNodeTemplate::ClassName,
             &Metasound::Frontend::FAudioAnalyzerNodeTemplate::VersionNumber);
  Metasound::Frontend::UnregisterNodeTemplate
            (&Metasound::Frontend::FInputNodeTemplate::ClassName,
             &Metasound::Frontend::FInputNodeTemplate::VersionNumber);
  Metasound::Frontend::UnregisterNodeTemplate
            (&Metasound::Frontend::FRerouteNodeTemplate::ClassName,
             &Metasound::Frontend::FRerouteNodeTemplate::VersionNumber);
  return;
}

