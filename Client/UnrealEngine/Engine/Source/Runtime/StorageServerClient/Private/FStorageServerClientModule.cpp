// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 4

// StartupModule @ 148cac330

void __thiscall FStorageServerClientModule::StartupModule(FStorageServerClientModule *this)

{
  return;
}

// ShutdownModule @ 148cac340

void __thiscall FStorageServerClientModule::ShutdownModule(FStorageServerClientModule *this)

{
  return;
}

// GetPlatformFile @ 148cac350

IPlatformFile * __thiscall
FStorageServerClientModule::GetPlatformFile(FStorageServerClientModule *this)

{
  FStorageServerPlatformFile *this_00;
  FStorageServerPlatformFile *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      this_00 = ::operator_new(0x2c8);
      pFVar1 = (FStorageServerPlatformFile *)0x0;
      if (this_00 != (FStorageServerPlatformFile *)0x0) {
        pFVar1 = FStorageServerPlatformFile::FStorageServerPlatformFile(this_00);
      }
      DefaultPlatformFileInstance.Ptr = (IPlatformFile *)pFVar1;
      atexit(`FStorageServerClientModule::GetPlatformFile'::__l2::
             _dynamic_atexit_destructor_for__DefaultPlatformFileInstance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (this->CachedDefaultPlatformFileInstance == (IPlatformFile *)0x0) {
    this->CachedDefaultPlatformFileInstance = DefaultPlatformFileInstance.Ptr;
  }
  return DefaultPlatformFileInstance.Ptr;
}

// TryCreateCustomPlatformFile @ 148cac3f0

IStorageServerPlatformFile * __thiscall
FStorageServerClientModule::TryCreateCustomPlatformFile
          (FStorageServerClientModule *this,TStringView<wchar_t> *param_1,IPlatformFile *param_2)

{
  char cVar1;
  bool bVar2;
  FStorageServerPlatformFile *pFVar3;
  wchar_t *pwVar4;
  
  pFVar3 = ::operator_new(0x2c8);
  if (pFVar3 == (FStorageServerPlatformFile *)0x0) {
    pFVar3 = (FStorageServerPlatformFile *)0x0;
  }
  else {
    pFVar3 = FStorageServerPlatformFile::FStorageServerPlatformFile(pFVar3);
  }
  ::FString::AssignRange
            (&pFVar3->CustomProjectStorePath,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  pFVar3->bAllowPackageIo = false;
  pFVar3->bAbortOnConnectionFailure = false;
  pwVar4 = FCommandLine::Get();
  cVar1 = (**(code **)(pFVar3->_padding_ + 0x18))(pFVar3,param_2,pwVar4);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3,param_2,pwVar4);
    if (cVar1 != '\0') {
      bVar2 = FPaths::IsProjectFilePathSet();
      if (bVar2) {
        (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3);
      }
      return (IStorageServerPlatformFile *)pFVar3;
    }
  }
  (**(code **)pFVar3->_padding_)(pFVar3,1);
  return (IStorageServerPlatformFile *)0x0;
}

