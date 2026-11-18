// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// GetDisplayGamma @ 14538da70

float __thiscall
`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget::GetDisplayGamma(void *this)

{
  return __real_3f800000;
}

// GetRenderTargetTexture @ 14538fbe0

TRefCountPtr<FRHITexture> * __thiscall
`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget::GetRenderTargetTexture(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(``CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget::GetRenderTargetTexture'::
             __l2::_dynamic_atexit_destructor_for__DummyTexture__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &DummyTexture;
}

// GetSizeXY @ 14538ff50

TIntPoint<int> __thiscall
`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget::GetSizeXY(void *this)

{
  undefined4 uVar1;
  TIntPoint<int>_u_0 in_RDX;
  
  uVar1 = *(undefined4 *)((longlong)this + 0x10);
  *(undefined4 *)in_RDX = uVar1;
  *(undefined4 *)((longlong)in_RDX + 4) = uVar1;
  return (TIntPoint<int>)in_RDX;
}

