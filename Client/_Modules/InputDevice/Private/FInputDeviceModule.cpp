// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputDevice
// Functions: 1

// CreateInputDevice @ 14e2c1f20

TSharedPtr<IInputDevice,1> * __thiscall
FInputDeviceModule::CreateInputDevice
          (FInputDeviceModule *this,TSharedPtr<IInputDevice,1> *__return_storage_ptr__,
          TSharedRef<FGenericApplicationMessageHandler,1> *param_1)

{
  __return_storage_ptr__->Object = (IInputDevice *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

