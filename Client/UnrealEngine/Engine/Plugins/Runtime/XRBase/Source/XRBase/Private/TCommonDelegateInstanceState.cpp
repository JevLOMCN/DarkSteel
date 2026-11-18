// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 3

// GetHandle @ 14cf8f9e0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14cf8fa00

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14cf8fa20

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(IXRTrackingSystem_const_*),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(IXRTrackingSystem_const_*),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

