// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// operator() @ 14ade6c10

bool __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey::
operator()(FIsClassWithNodeRegistryKey *this,FMetasoundFrontendClass *param_1)

{
  FNodeClassRegistryKey *pFVar1;
  FNodeClassRegistryKey local_38;
  
  pFVar1 = FNodeClassRegistryKey::FNodeClassRegistryKey(&local_38,&param_1->Metadata);
  if (((((this->RegistryKey).Type == pFVar1->Type) &&
       ((this->RegistryKey).ClassName.Namespace == (pFVar1->ClassName).Namespace)) &&
      ((this->RegistryKey).ClassName.Name == (pFVar1->ClassName).Name)) &&
     ((((this->RegistryKey).ClassName.Variant == (pFVar1->ClassName).Variant &&
       ((this->RegistryKey).Version.Major == (pFVar1->Version).Major)) &&
      ((this->RegistryKey).Version.Minor == (pFVar1->Version).Minor)))) {
    return true;
  }
  return false;
}

// operator() @ 14ade6c80

bool __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey::
operator()(FIsClassWithNodeRegistryKey *this,FMetasoundFrontendGraphClass *param_1)

{
  FNodeClassRegistryKey *pFVar1;
  FNodeClassRegistryKey local_38;
  
  pFVar1 = FNodeClassRegistryKey::FNodeClassRegistryKey(&local_38,param_1);
  if (((((this->RegistryKey).Type == pFVar1->Type) &&
       ((this->RegistryKey).ClassName.Namespace == (pFVar1->ClassName).Namespace)) &&
      ((this->RegistryKey).ClassName.Name == (pFVar1->ClassName).Name)) &&
     ((((this->RegistryKey).ClassName.Variant == (pFVar1->ClassName).Variant &&
       ((this->RegistryKey).Version.Major == (pFVar1->Version).Major)) &&
      ((this->RegistryKey).Version.Minor == (pFVar1->Version).Minor)))) {
    return true;
  }
  return false;
}

