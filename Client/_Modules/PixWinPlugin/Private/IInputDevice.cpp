// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PixWinPlugin
// Functions: 7

// ~IInputDevice @ 14e2c4fa0

void __thiscall IInputDevice::~IInputDevice(IInputDevice *this)

{
  *this = (IInputDevice)&___7IInputDevice__6B_;
  return;
}

// GetHapticDevice @ 14e2c6160

IHapticDevice * __thiscall IInputDevice::GetHapticDevice(IInputDevice *this)

{
  return (IHapticDevice *)0x0;
}

// IsGamepadAttached @ 14e2c6270

bool __thiscall IInputDevice::IsGamepadAttached(IInputDevice *this)

{
  return false;
}

// ResetLightColor @ 14e2c66e0

void __thiscall IInputDevice::ResetLightColor(IInputDevice *this,int param_1)

{
  return;
}

// SetDeviceProperty @ 14e2c6720

void __thiscall
IInputDevice::SetDeviceProperty(IInputDevice *this,int param_1,FInputDeviceProperty *param_2)

{
  return;
}

// SetLightColor @ 14e2c6730

void __thiscall IInputDevice::SetLightColor(IInputDevice *this,int param_1,FColor param_2)

{
  return;
}

// SupportsForceFeedback @ 14e2c6750

bool __thiscall IInputDevice::SupportsForceFeedback(IInputDevice *this,int param_1)

{
  return true;
}

