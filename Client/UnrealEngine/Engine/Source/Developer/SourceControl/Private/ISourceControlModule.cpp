// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 4

// Get @ 146b160a0

ISourceControlModule * __cdecl ISourceControlModule::Get(void)

{
  FName FVar1;
  FModuleManager *this;
  IModuleInterface *pIVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_ISourceControlModule&___ptr64___cdecl_ISourceControlModule::Get(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_ISourceControlModule&___ptr64___cdecl_ISourceControlModule::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_ISourceControlModule&___ptr64___cdecl_ISourceControlModule::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_ISourceControlModule&___ptr64___cdecl_ISourceControlModule::Get(void)'
                      ::__l2::SourceControlModule,"SourceControl");
      _Init_thread_footer(&`public:_static_class_ISourceControlModule&___ptr64___cdecl_ISourceControlModule::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar1 = `public:_static_class_ISourceControlModule&___ptr64___cdecl_ISourceControlModule::Get(void)'
          ::__l2::SourceControlModule;
  this = FModuleManager::Get();
  pIVar2 = FModuleManager::LoadModuleChecked(this,FVar1);
  return (ISourceControlModule *)pIVar2;
}

// GetRegisteredPreSubmitDataValidation @ 146b196c0

TDelegate<void___cdecl(TSharedPtr<ISourceControlChangelist,1>,EDataValidationResult_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
* __thiscall
ISourceControlModule::GetRegisteredPreSubmitDataValidation
          (ISourceControlModule *this,
          TDelegate<void___cdecl(TSharedPtr<ISourceControlChangelist,1>,EDataValidationResult_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *__return_storage_ptr__)

{
  (**(code **)((longlong)*this + 0x100))();
  return __return_storage_ptr__;
}

// RegisterPreSubmitDataValidation @ 146b22590

void __thiscall
ISourceControlModule::RegisterPreSubmitDataValidation
          (ISourceControlModule *this,
          TDelegate<void___cdecl(TSharedPtr<ISourceControlChangelist,1>,EDataValidationResult_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146b22593. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0xd0))();
  return;
}

// UnregisterPreSubmitDataValidation @ 146b29bd0

void __thiscall ISourceControlModule::UnregisterPreSubmitDataValidation(ISourceControlModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146b29bd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0xe8))();
  return;
}

