// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 8

// CreateClassID @ 14ae29540

FGuid * __thiscall
Metasound::Frontend::FDocumentIDGenerator::CreateClassID
          (FDocumentIDGenerator *this,FGuid *__return_storage_ptr__,
          FMetasoundFrontendDocument *param_1)

{
  CreateIDFromDocument(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateIDFromDocument @ 14ae2c510

FGuid * __thiscall
Metasound::Frontend::FDocumentIDGenerator::CreateIDFromDocument
          (FDocumentIDGenerator *this,FGuid *__return_storage_ptr__,
          FMetasoundFrontendDocument *param_1)

{
  char cVar1;
  IMetaSoundAssetManager *pIVar2;
  undefined1 local_res8 [8];
  FGuid local_48;
  FGuid local_38;
  FGuid local_28;
  FGuid local_18;
  
  if (this->bIsDeterministic != false) {
    local_28.D = param_1->IdCounter;
    local_38.A = 0x8bc4c7c3;
    local_38.B = 0x591449c4;
    local_38.C = 0xa35830f8;
    param_1->IdCounter = local_28.D + 1;
    local_28.A = local_28.D << 6;
    local_28.B = local_28.D << 4;
    local_28.C = local_28.D * 4;
    local_38.D = 0xe7f9052e;
    FGuid::Combine(&local_18,&local_28,&local_38);
    local_48.A = 0;
    local_48.B = 0;
    local_48.C = 0;
    local_48.D = 0;
    pIVar2 = IMetaSoundAssetManager::GetChecked();
    cVar1 = (**(code **)((longlong)*pIVar2 + 0x90))
                      (pIVar2,&(param_1->RootGraph)._padding_,&local_48);
    if (cVar1 == '\0') {
      `Metasound::Frontend::FDocumentIDGenerator::CreateIDFromDocument'::__l5::<lambda_1>::
      operator()(local_res8);
    }
    FGuid::Combine(__return_storage_ptr__,&local_48,&local_18);
    return __return_storage_ptr__;
  }
  FGuid::NewGuid(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CreateNodeID @ 14ae2e560

FGuid * __thiscall
Metasound::Frontend::FDocumentIDGenerator::CreateNodeID
          (FDocumentIDGenerator *this,FGuid *__return_storage_ptr__,
          FMetasoundFrontendDocument *param_1)

{
  CreateIDFromDocument(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateVertexID @ 14ae2f7a0

FGuid * __thiscall
Metasound::Frontend::FDocumentIDGenerator::CreateVertexID
          (FDocumentIDGenerator *this,FGuid *__return_storage_ptr__,
          FMetasoundFrontendDocument *param_1)

{
  CreateIDFromDocument(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Get @ 14ae374d0

FDocumentIDGenerator * __cdecl Metasound::Frontend::FDocumentIDGenerator::Get(void)

{
  return (FDocumentIDGenerator *)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9ac8);
}

// GetDeterminism @ 14ae38170

bool __thiscall
Metasound::Frontend::FDocumentIDGenerator::GetDeterminism(FDocumentIDGenerator *this)

{
  return this->bIsDeterministic;
}

// SetDeterminism @ 14ae44df0

void __thiscall
Metasound::Frontend::FDocumentIDGenerator::SetDeterminism(FDocumentIDGenerator *this,bool param_1)

{
  this->bIsDeterministic = param_1;
  return;
}

// operator() @ 15055e210

bool __thiscall
`Metasound::Frontend::FDocumentIDGenerator::CreateIDFromDocument'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_2191252860849618865>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2191252860849618865>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

