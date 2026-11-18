// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// ~FSceneViewExtensionContext @ 144ef1120

void __thiscall
FSceneViewExtensionContext::~FSceneViewExtensionContext(FSceneViewExtensionContext *this)

{
  this->_padding_ = (longlong)&___7FSceneViewExtensionContext__6B_;
  return;
}

// GetRTTI @ 144f133c0

FName __thiscall FSceneViewExtensionContext::GetRTTI(FSceneViewExtensionContext *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"FSceneViewExtensionContext");
  return in_RDX;
}

// IsHMDSupported @ 144f1cb90

bool __thiscall FSceneViewExtensionContext::IsHMDSupported(FSceneViewExtensionContext *this)

{
  return true;
}

