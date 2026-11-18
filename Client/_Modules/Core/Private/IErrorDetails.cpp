// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// ~IErrorDetails @ 14158a410

void __thiscall UE::UnifiedError::IErrorDetails::~IErrorDetails(IErrorDetails *this)

{
  *this = (IErrorDetails)&___7IRefCountedObject__6B_;
  return;
}

// GetInnerErrorDetails @ 1415c72b0

TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> __thiscall
UE::UnifiedError::IErrorDetails::GetInnerErrorDetails(IErrorDetails *this)

{
  IErrorDetails *in_RDX;
  
  *in_RDX = (IErrorDetails)0x0;
  return (TRefCountPtr<UE::UnifiedError::IErrorDetails_const_>)in_RDX;
}

// SetInnerErrorDetails @ 1415f2530

void __thiscall
UE::UnifiedError::IErrorDetails::SetInnerErrorDetails
          (IErrorDetails *this,TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\UnifiedError\\UnifiedError.h"
                     ,0xfc,L"SetInnerErrorDetails not implemented!");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*param_1.Reference != (IErrorDetails)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001415f256f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1.Reference + 0x10))();
    return;
  }
  return;
}

// ShouldInclude @ 1415f3d70

bool __thiscall
UE::UnifiedError::IErrorDetails::ShouldInclude(IErrorDetails *this,EDetailFilter param_1)

{
  return (param_1 & Default) != None;
}

