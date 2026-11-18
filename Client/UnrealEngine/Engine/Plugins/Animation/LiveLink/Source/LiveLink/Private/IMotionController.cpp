// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 3

// ~IMotionController @ 14d016b60

void __thiscall IMotionController::~IMotionController(IMotionController *this)

{
  *this = (IMotionController)&___7IMotionController__6B_;
  return;
}

// AttachInputMappingContexts @ 14d023dd0

bool __thiscall
IMotionController::AttachInputMappingContexts
          (IMotionController *this,
          TSet<TObjectPtr<UInputMappingContext>,DefaultKeyFuncs<TObjectPtr<UInputMappingContext>,0>,FDefaultSetAllocator>
          *param_1)

{
  return true;
}

// SetEnhancedInputUserSettings @ 14d07e860

bool __thiscall
IMotionController::SetEnhancedInputUserSettings
          (IMotionController *this,TObjectPtr<UEnhancedInputUserSettings> param_1)

{
  return true;
}

