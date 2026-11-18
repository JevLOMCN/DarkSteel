// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LauncherChunkInstaller
// Functions: 5

// `dynamic_initializer_for_'ModuleRegistrantLauncherChunkInstaller'' @ 14144f990

void __cdecl _dynamic_initializer_for__ModuleRegistrantLauncherChunkInstaller__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "LauncherChunkInstaller";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"LauncherChunkInstaller",0x16);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FLauncherChunkInstallerModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14f00b240

void * __thiscall
IPlatformChunkInstallModule::_scalar_deleting_destructor_
          (IPlatformChunkInstallModule *this,uint param_1)

{
  *this = (IPlatformChunkInstallModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f00b2e0

void * __thiscall
FLauncherChunkInstaller::_scalar_deleting_destructor_(FLauncherChunkInstaller *this,uint param_1)

{
  FGenericPlatformChunkInstall::~FGenericPlatformChunkInstall((FGenericPlatformChunkInstall *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f00b330

void * __thiscall
FLauncherChunkInstallerModule::_scalar_deleting_destructor_
          (FLauncherChunkInstallerModule *this,uint param_1)

{
  IPlatformChunkInstall *pIVar1;
  
  pIVar1 = (this->ChunkInstaller).Ptr;
  if (pIVar1 != (IPlatformChunkInstall *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// IMPLEMENT_MODULE_LauncherChunkInstaller @ 14f00b430

void __cdecl IMPLEMENT_MODULE_LauncherChunkInstaller(void)

{
  return;
}

