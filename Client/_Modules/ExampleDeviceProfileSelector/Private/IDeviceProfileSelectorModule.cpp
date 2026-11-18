// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ExampleDeviceProfileSelector
// Functions: 4

// GetDeviceProfileName @ 14f032090

FString * __thiscall
IDeviceProfileSelectorModule::GetDeviceProfileName
          (IDeviceProfileSelectorModule *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// SetSelectorProperties @ 14f0320b0

void __thiscall
IDeviceProfileSelectorModule::SetSelectorProperties
          (IDeviceProfileSelectorModule *this,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_1)

{
  return;
}

// GetSelectorPropertyValue @ 14f0320c0

bool __thiscall
IDeviceProfileSelectorModule::GetSelectorPropertyValue
          (IDeviceProfileSelectorModule *this,FName *param_1,FString *param_2)

{
  ::FString::Reset(param_2,0);
  return false;
}

// ~IDeviceProfileSelectorModule @ 14f032200

void __thiscall
IDeviceProfileSelectorModule::~IDeviceProfileSelectorModule(IDeviceProfileSelectorModule *this)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  return;
}

