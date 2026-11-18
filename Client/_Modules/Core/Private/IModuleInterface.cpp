// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// ~IModuleInterface @ 14158a4b0

void __thiscall IModuleInterface::~IModuleInterface(IModuleInterface *this)

{
  *this = (IModuleInterface)vftable;
  return;
}

// IsGameModule @ 1415c9940

bool __thiscall IModuleInterface::IsGameModule(IModuleInterface *this)

{
  return false;
}

// PostLoadCallback @ 1415d9010

void __thiscall IModuleInterface::PostLoadCallback(IModuleInterface *this)

{
  return;
}

// PreUnloadCallback @ 1415d9020

void __thiscall IModuleInterface::PreUnloadCallback(IModuleInterface *this)

{
  return;
}

// ShutdownModule @ 1415f58f0

void __thiscall IModuleInterface::ShutdownModule(IModuleInterface *this)

{
  return;
}

// StartupModule @ 1415f6c80

void __thiscall IModuleInterface::StartupModule(IModuleInterface *this)

{
  return;
}

// SupportsAutomaticShutdown @ 1415f7f20

bool __thiscall IModuleInterface::SupportsAutomaticShutdown(IModuleInterface *this)

{
  return true;
}

// SupportsDynamicReloading @ 1415f7f30

bool __thiscall IModuleInterface::SupportsDynamicReloading(IModuleInterface *this)

{
  return true;
}

