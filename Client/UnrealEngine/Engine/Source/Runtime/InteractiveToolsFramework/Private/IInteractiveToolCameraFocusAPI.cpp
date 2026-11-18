// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// ~IInteractiveToolCameraFocusAPI @ 149689400

void __thiscall
IInteractiveToolCameraFocusAPI::~IInteractiveToolCameraFocusAPI
          (IInteractiveToolCameraFocusAPI *this)

{
  *this = (IInteractiveToolCameraFocusAPI)&___7IInteractiveToolCameraFocusAPI__6B_;
  return;
}

// GetWorldSpaceFocusBox @ 1496ab0b0

TBox<double> * __thiscall
IInteractiveToolCameraFocusAPI::GetWorldSpaceFocusBox
          (IInteractiveToolCameraFocusAPI *this,TBox<double> *__return_storage_ptr__)

{
  __return_storage_ptr__->IsValid = '\0';
  return __return_storage_ptr__;
}

// GetWorldSpaceFocusPoint @ 1496ab1c0

bool __thiscall
IInteractiveToolCameraFocusAPI::GetWorldSpaceFocusPoint
          (IInteractiveToolCameraFocusAPI *this,TRay<double> *param_1,TVector<double> *param_2)

{
  return false;
}

// SupportsWorldSpaceFocusBox @ 1496c2dd0

bool __thiscall
IInteractiveToolCameraFocusAPI::SupportsWorldSpaceFocusBox(IInteractiveToolCameraFocusAPI *this)

{
  return false;
}

// SupportsWorldSpaceFocusPoint @ 1496c2e20

bool __thiscall
IInteractiveToolCameraFocusAPI::SupportsWorldSpaceFocusPoint(IInteractiveToolCameraFocusAPI *this)

{
  return false;
}

// _getUObject @ 1496ca780

UObject * __thiscall
IInteractiveToolCameraFocusAPI::_getUObject(IInteractiveToolCameraFocusAPI *this)

{
  return (UObject *)0x0;
}

