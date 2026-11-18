// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FacialAnimation
// Functions: 5

// ~ICurveSourceInterface @ 14e2cd800

void __thiscall ICurveSourceInterface::~ICurveSourceInterface(ICurveSourceInterface *this)

{
  *this = (ICurveSourceInterface)&___7ICurveSourceInterface__6B_;
  return;
}

// GetBindingName_Implementation @ 14e2ce110

FName __thiscall ICurveSourceInterface::GetBindingName_Implementation(ICurveSourceInterface *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetCurveValue_Implementation @ 14e2ce150

float __thiscall
ICurveSourceInterface::GetCurveValue_Implementation(ICurveSourceInterface *this,FName param_1)

{
  return 0.0;
}

// GetCurves_Implementation @ 14e2ce1e0

void __thiscall
ICurveSourceInterface::GetCurves_Implementation
          (ICurveSourceInterface *this,TArray<FNamedCurveValue,TSizedDefaultAllocator<32>_> *param_1
          )

{
  return;
}

// _getUObject @ 14e2ced30

UObject * __thiscall ICurveSourceInterface::_getUObject(ICurveSourceInterface *this)

{
  return (UObject *)0x0;
}

