// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XInputDevice
// Functions: 2

// CreateInputDevice @ 14f12c2b0

TSharedPtr<IInputDevice,1> * __thiscall
FXInputDeviceModule::CreateInputDevice
          (FXInputDeviceModule *this,TSharedPtr<IInputDevice,1> *__return_storage_ptr__,
          TSharedRef<FGenericApplicationMessageHandler,1> *param_1)

{
  XInputInterface *this_00;
  TRawPtrProxy<XInputInterface> local_res10 [3];
  TSharedRef<XInputInterface,1> local_18;
  
  this_00 = ::operator_new(0x600);
  local_res10[0].Object = (XInputInterface *)0x0;
  if (this_00 != (XInputInterface *)0x0) {
    local_res10[0].Object = XInputInterface::XInputInterface(this_00,param_1,true);
  }
  TSharedRef<XInputInterface,1>::TSharedRef<XInputInterface,1><XInputInterface>
            (&local_18,local_res10);
  __return_storage_ptr__->Object = (IInputDevice *)local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateInputDevice @ 14f12c330

TSharedPtr<IInputDevice,1> * __thiscall
FXInputDeviceModule::CreateInputDevice
          (FXInputDeviceModule *this,TSharedPtr<IInputDevice,1> *__return_storage_ptr__,
          TSharedRef<FGenericApplicationMessageHandler,1> *param_1,
          FInputDeviceCreationParameters param_2)

{
  XInputInterface *this_00;
  TRawPtrProxy<XInputInterface> local_res10;
  TSharedRef<XInputInterface,1> local_18;
  
  this_00 = ::operator_new(0x600);
  local_res10.Object = (XInputInterface *)0x0;
  if (this_00 != (XInputInterface *)0x0) {
    local_res10.Object =
         XInputInterface::XInputInterface(this_00,param_1,param_2.bInitAsPrimaryDevice);
  }
  TSharedRef<XInputInterface,1>::TSharedRef<XInputInterface,1><XInputInterface>
            (&local_18,&local_res10);
  __return_storage_ptr__->Object = (IInputDevice *)local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

