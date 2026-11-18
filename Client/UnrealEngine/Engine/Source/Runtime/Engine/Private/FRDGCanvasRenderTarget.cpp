// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetRenderTargetTexture @ 14895c240

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRefCountPtr<FRHITexture> * __thiscall
FRDGCanvasRenderTarget::GetRenderTargetTexture(FRDGCanvasRenderTarget *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TRefCountPtr<FRHITexture>_const&___ptr64___cdecl_FRDGCanvasRenderTarget::GetRenderTargetTexture(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TRefCountPtr<FRHITexture>_const&___ptr64___cdecl_FRDGCanvasRenderTarget::GetRenderTargetTexture(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TRefCountPtr<FRHITexture>_const&___ptr64___cdecl_FRDGCanvasRenderTarget::GetRenderTargetTexture(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`FRDGCanvasRenderTarget::GetRenderTargetTexture'::__l2::
             _dynamic_atexit_destructor_for__NullRef__);
      _Init_thread_footer(&`public:_virtual_class_TRefCountPtr<FRHITexture>_const&___ptr64___cdecl_FRDGCanvasRenderTarget::GetRenderTargetTexture(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TRefCountPtr<FRHITexture> *)
         &`public:_virtual_class_TRefCountPtr<FRHITexture>_const&___ptr64___cdecl_FRDGCanvasRenderTarget::GetRenderTargetTexture(void)const___ptr64'
          ::__l2::NullRef;
}

// GetRenderTargetTexture @ 14895c2b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FRDGCanvasRenderTarget::GetRenderTargetTexture(FRDGCanvasRenderTarget *this,FRDGBuilder *param_1)

{
  return this->RDGTexture;
}

// GetSizeXY @ 14895ce30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TIntPoint<int> __thiscall FRDGCanvasRenderTarget::GetSizeXY(FRDGCanvasRenderTarget *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)&(this->RDGTexture->Desc).field_0x24;
  return (TIntPoint<int>)in_RDX;
}

