// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 3

// ~IPluginManager @ 141e0fa30

void __thiscall IPluginManager::~IPluginManager(IPluginManager *this)

{
  *this = (IPluginManager)&___7IPluginManager__6B_;
  return;
}

// Get @ 141e21a40

IPluginManager * __cdecl IPluginManager::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FPluginManager::FPluginManager(&PluginManager);
      atexit(`IPluginManager::Get'::__l2::_dynamic_atexit_destructor_for__PluginManager__);
      _Init_thread_footer(&::_TSS0);
      return (IPluginManager *)&PluginManager;
    }
  }
  return (IPluginManager *)&PluginManager;
}

// IntegratePluginsIntoConfig @ 141e260c0

bool __thiscall
IPluginManager::IntegratePluginsIntoConfig
          (IPluginManager *this,FConfigCacheIni *param_1,wchar_t *param_2,wchar_t *param_3,
          wchar_t *param_4)

{
  return false;
}

