// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 2

// ~IMediaProfileManager @ 14d7d1ae0

void __thiscall IMediaProfileManager::~IMediaProfileManager(IMediaProfileManager *this)

{
  *this = (IMediaProfileManager)&___7IMediaProfileManager__6B_;
  return;
}

// Get @ 14d7d7cd0

IMediaProfileManager * __cdecl IMediaProfileManager::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FModuleManager *this;
  IMediaProfileManager *pIVar3;
  IModuleInterface *pIVar4;
  FName local_res8;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_MediaFrameworkUtilities,L"MediaFrameworkUtilities");
    _Init_thread_footer(&::_TSS0);
  }
  local_res8 = NAME_MediaFrameworkUtilities;
  this = FModuleManager::Get();
  bVar2 = FModuleManager::IsModuleLoaded(this,local_res8);
  if (!bVar2) {
    ::FName::ToString(&local_res8,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ModuleManager.IsModuleLoaded(ModuleName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                       ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IMediaProfileManager *)(*pcVar1)();
      return pIVar3;
    }
  }
  pIVar4 = FModuleManager::GetModule(this,local_res8);
  pIVar3 = (IMediaProfileManager *)(**(code **)((longlong)*pIVar4 + 0x40))(pIVar4);
  return pIVar3;
}

