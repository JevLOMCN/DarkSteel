// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// Deinitialize @ 14adb57e0

void __cdecl Metasound::Frontend::IDocumentBuilderRegistry::Deinitialize(void)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Metasound::Frontend::IDocumentBuilderRegistry,TDefaultDelete<Metasound::Frontend::IDocumentBuilderRegistry>_>
  TVar3;
  
  TVar3.Ptr = DocumentInterfacePrivate::Instance.Ptr;
  if (DocumentInterfacePrivate::Instance.Ptr == (IDocumentBuilderRegistry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DocumentInterfacePrivate::Instance.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundDocumentInterface.cpp"
                       ,0x20,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TVar3 = DocumentInterfacePrivate::Instance;
    if (DocumentInterfacePrivate::Instance.Ptr == (IDocumentBuilderRegistry *)0x0) {
      return;
    }
  }
  DocumentInterfacePrivate::Instance.Ptr = (IDocumentBuilderRegistry *)0x0;
  if (TVar3.Ptr == (IDocumentBuilderRegistry *)0x0) {
    DocumentInterfacePrivate::Instance =
         (TUniquePtr<Metasound::Frontend::IDocumentBuilderRegistry,TDefaultDelete<Metasound::Frontend::IDocumentBuilderRegistry>_>
          )0x0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014adb583e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*TVar3.Ptr)(TVar3.Ptr,1);
  return;
}

// Get @ 14adbbc50

IDocumentBuilderRegistry * __cdecl Metasound::Frontend::IDocumentBuilderRegistry::Get(void)

{
  return DocumentInterfacePrivate::Instance.Ptr;
}

// GetChecked @ 14adbd2e0

IDocumentBuilderRegistry * __cdecl Metasound::Frontend::IDocumentBuilderRegistry::GetChecked(void)

{
  return DocumentInterfacePrivate::Instance.Ptr;
}

// Initialize @ 14adc6810

void __cdecl
Metasound::Frontend::IDocumentBuilderRegistry::Initialize
          (TUniquePtr<Metasound::Frontend::IDocumentBuilderRegistry,TDefaultDelete<Metasound::Frontend::IDocumentBuilderRegistry>_>
           *param_1)

{
  code *pcVar1;
  TUniquePtr<Metasound::Frontend::IDocumentBuilderRegistry,TDefaultDelete<Metasound::Frontend::IDocumentBuilderRegistry>_>
  TVar2;
  bool bVar3;
  
  if (DocumentInterfacePrivate::Instance.Ptr != (IDocumentBuilderRegistry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!DocumentInterfacePrivate::Instance.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundDocumentInterface.cpp"
                       ,0x26,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TVar2.Ptr = DocumentInterfacePrivate::Instance.Ptr;
  if (param_1 != &DocumentInterfacePrivate::Instance) {
    DocumentInterfacePrivate::Instance =
         (TUniquePtr<Metasound::Frontend::IDocumentBuilderRegistry,TDefaultDelete<Metasound::Frontend::IDocumentBuilderRegistry>_>
          )param_1->Ptr;
    param_1->Ptr = (IDocumentBuilderRegistry *)0x0;
    if (TVar2.Ptr != (IDocumentBuilderRegistry *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014adc687f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*TVar2.Ptr)(TVar2.Ptr,1);
      return;
    }
  }
  return;
}

