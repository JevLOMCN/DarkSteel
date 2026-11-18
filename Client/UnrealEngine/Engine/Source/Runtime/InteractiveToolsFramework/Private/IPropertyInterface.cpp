// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 4

// ~IPropertyInterface @ 14963dee0

void __thiscall
ITwoAxisPropertyEditBehaviorTarget::IPropertyInterface::~IPropertyInterface
          (IPropertyInterface *this)

{
  *this = (IPropertyInterface)&___7IPropertyInterface_ITwoAxisPropertyEditBehaviorTarget__6B_;
  return;
}

// GetEditRate @ 149654df0

float __thiscall
ITwoAxisPropertyEditBehaviorTarget::IPropertyInterface::GetEditRate(IPropertyInterface *this)

{
  return __real_3b449ba6;
}

// IsEnabled @ 14965a270

bool __thiscall
ITwoAxisPropertyEditBehaviorTarget::IPropertyInterface::IsEnabled(IPropertyInterface *this)

{
  return false;
}

// MutateDelta @ 14965cd80

float __thiscall
ITwoAxisPropertyEditBehaviorTarget::IPropertyInterface::MutateDelta
          (IPropertyInterface *this,float param_1)

{
  return param_1;
}

