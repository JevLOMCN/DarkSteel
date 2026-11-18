// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 1

// Serialize @ 14a10e9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigVMStructApplyUpgradeInfoErrorContext::Serialize
          (FRigVMStructApplyUpgradeInfoErrorContext *this,wchar_t *param_1,Type param_2,
          FName *param_3)

{
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  if (param_2 == Error) {
    if (2 < (byte)LogRigVM._0_1_) {
      ::FName::ToString(&this->PropertyName,&local_18);
      (**(code **)(this->NewStruct->_padding_ + 0x388))(this->NewStruct,local_28,0);
      (**(code **)(this->OldStruct->_padding_ + 0x388))(this->OldStruct,&local_38,0);
      UE::Logging::Private::BasicLog<3>
                (&`public:_virtual_void___cdecl_FRigVMStructApplyUpgradeInfoErrorContext::Serialize(wchar_t_const*___ptr64,ELogVerbosity::Type,FName_const&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogRigVM);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28[0] != (void *)0x0) {
        FMemory::Free(local_28[0]);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    this->NumErrors = this->NumErrors + 1;
  }
  else if ((param_2 == Warning) && (2 < (byte)LogRigVM._0_1_)) {
    ::FName::ToString(&this->PropertyName,&local_38);
    (**(code **)(this->NewStruct->_padding_ + 0x388))(this->NewStruct,local_28,0);
    (**(code **)(this->OldStruct->_padding_ + 0x388))(this->OldStruct,&local_18,0);
    UE::Logging::Private::BasicLog<3>
              (&`public:_virtual_void___cdecl_FRigVMStructApplyUpgradeInfoErrorContext::Serialize(wchar_t_const*___ptr64,ELogVerbosity::Type,FName_const&___ptr64)___ptr64'
                ::__l28::LOG_Static,(FLogCategoryBase *)&LogRigVM);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

