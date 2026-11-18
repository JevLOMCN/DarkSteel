// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FSlateRenderTargetRHI @ 148694520

FSlateRenderTargetRHI * __thiscall
FSlateRenderTargetRHI::FSlateRenderTargetRHI
          (FSlateRenderTargetRHI *this,TRefCountPtr<FRHITexture> param_1,uint param_2,uint param_3)

{
  FRHIResource *this_00;
  
  *(undefined1 *)&this->_padding_ = 0x21;
  this->_padding_ = (longlong)&___7__TSlateTexture_V__TRefCountPtr_VFRHITexture______6B_;
  this->_padding_ = 0;
  this_00 = (FRHIResource *)(param_1.Reference)->_padding_;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this_00);
  }
  FRenderResource::FRenderResource((FRenderResource *)&this->_padding_);
  this->Width = param_2;
  this->_padding_ = (longlong)&_vftable__for__TSlateTexture<TRefCountPtr<FRHITexture>_>__;
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  this->Height = param_3;
  if ((FRHIResource *)(param_1.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_1.Reference)->_padding_);
  }
  return this;
}

// SetRHIRef @ 1486ef100

void __thiscall
FSlateRenderTargetRHI::SetRHIRef
          (FSlateRenderTargetRHI *this,TRefCountPtr<FRHITexture> param_1,uint param_2,uint param_3)

{
  FRHIResource *this_00;
  FRHIResource *this_01;
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                       ,0x126,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FRHIResource *)(param_1.Reference)->_padding_;
  this_01 = (FRHIResource *)this->_padding_;
  if (this_01 != this_00) {
    this->_padding_ = (longlong)this_00;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
    }
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_01);
    }
  }
  this->Width = param_2;
  this->Height = param_3;
  if ((FRHIResource *)(param_1.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_1.Reference)->_padding_);
  }
  return;
}

