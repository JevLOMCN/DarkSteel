// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 6

// GetCaptureType @ 14d7a9650

ECaptureType __thiscall
UE::MediaCapture::Private::FRHIResourceCaptureSource::GetCaptureType
          (FRHIResourceCaptureSource *this)

{
  return Immediate;
}

// GetSize @ 14d7adb50

TIntPoint<int> __thiscall
UE::MediaCapture::Private::FRHIResourceCaptureSource::GetSize(FRHIResourceCaptureSource *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(TIntPoint<int>_u_0 *)in_RDX = (this->ResourceDescription).ResourceSize.field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// GetSourceType @ 14d7adee0

EMediaCaptureSourceType __thiscall
UE::MediaCapture::Private::FRHIResourceCaptureSource::GetSourceType(FRHIResourceCaptureSource *this)

{
  return RHI_RESOURCE;
}

// IsValid @ 14d7b1a90

bool __thiscall
UE::MediaCapture::Private::FRHIResourceCaptureSource::IsValid(FRHIResourceCaptureSource *this)

{
  return true;
}

// PostInitialize @ 14d7b5fc0

bool __thiscall
UE::MediaCapture::Private::FRHIResourceCaptureSource::PostInitialize
          (FRHIResourceCaptureSource *this)

{
  undefined1 uVar1;
  UObject *pUVar2;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
                    /* WARNING: Could not recover jumptable at 0x00014d7b5feb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)pUVar2 + 0x2e0))
                    (pUVar2,&this->ResourceDescription,*(code **)(*(longlong *)pUVar2 + 0x2e0));
  return (bool)uVar1;
}

// ValidateSource @ 14d7c3a40

bool __thiscall
UE::MediaCapture::Private::FRHIResourceCaptureSource::ValidateSource
          (FRHIResourceCaptureSource *this,TIntPoint<int> *param_1,EPixelFormat param_2,bool param_3
          )

{
  return true;
}

