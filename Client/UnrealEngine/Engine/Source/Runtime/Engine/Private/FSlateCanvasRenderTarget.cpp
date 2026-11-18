// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetRenderTargetTexture @ 1486c62d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRefCountPtr<FRHITexture> * __thiscall
FSlateCanvasRenderTarget::GetRenderTargetTexture(FSlateCanvasRenderTarget *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TRefCountPtr<FRHITexture>_const&___ptr64___cdecl_FSlateCanvasRenderTarget::GetRenderTargetTexture(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TRefCountPtr<FRHITexture>_const&___ptr64___cdecl_FSlateCanvasRenderTarget::GetRenderTargetTexture(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TRefCountPtr<FRHITexture>_const&___ptr64___cdecl_FSlateCanvasRenderTarget::GetRenderTargetTexture(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`FSlateCanvasRenderTarget::GetRenderTargetTexture'::__l2::
             _dynamic_atexit_destructor_for__NullRef__);
      _Init_thread_footer(&`public:_virtual_class_TRefCountPtr<FRHITexture>_const&___ptr64___cdecl_FSlateCanvasRenderTarget::GetRenderTargetTexture(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TRefCountPtr<FRHITexture> *)
         &`public:_virtual_class_TRefCountPtr<FRHITexture>_const&___ptr64___cdecl_FSlateCanvasRenderTarget::GetRenderTargetTexture(void)const___ptr64'
          ::__l2::NullRef;
}

// GetRenderTargetTexture @ 1486c6340

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSlateCanvasRenderTarget::GetRenderTargetTexture
          (FSlateCanvasRenderTarget *this,FRDGBuilder *param_1)

{
  return this->RDGTexture;
}

// GetSizeXY @ 1486c77c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TIntPoint<int> __thiscall FSlateCanvasRenderTarget::GetSizeXY(FSlateCanvasRenderTarget *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(int *)in_RDX =
       *(int *)((longlong)&(this->ViewRect).field0_0x0 + 8) - *(int *)&(this->ViewRect).field0_0x0;
  *(int *)((longlong)in_RDX + 4) =
       *(int *)((longlong)&(this->ViewRect).field0_0x0 + 0xc) -
       *(int *)((longlong)&(this->ViewRect).field0_0x0 + 4);
  return (TIntPoint<int>)in_RDX;
}

