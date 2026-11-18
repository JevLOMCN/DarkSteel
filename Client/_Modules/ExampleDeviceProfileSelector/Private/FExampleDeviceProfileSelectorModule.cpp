// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ExampleDeviceProfileSelector
// Functions: 4

// GetRuntimeDeviceProfileName @ 14f032120

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FExampleDeviceProfileSelectorModule::GetRuntimeDeviceProfileName
          (FExampleDeviceProfileSelectorModule *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Windows");
  if (4 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  return __return_storage_ptr__;
}

// StartupModule @ 14f032180

void __thiscall
FExampleDeviceProfileSelectorModule::StartupModule(FExampleDeviceProfileSelectorModule *this)

{
  return;
}

// ShutdownModule @ 14f032190

void __thiscall
FExampleDeviceProfileSelectorModule::ShutdownModule(FExampleDeviceProfileSelectorModule *this)

{
  return;
}

// ~FExampleDeviceProfileSelectorModule @ 14f0321e0

void __thiscall
FExampleDeviceProfileSelectorModule::~FExampleDeviceProfileSelectorModule
          (FExampleDeviceProfileSelectorModule *this)

{
  *(undefined ***)this = IModuleInterface::vftable;
  return;
}

