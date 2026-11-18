// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateNullRenderer
// Functions: 6

// GetNumAtlasPages @ 146c84870

int __thiscall
FSlateNullShaderResourceManager::GetNumAtlasPages(FSlateNullShaderResourceManager *this)

{
  return 0;
}

// GetAtlasPageResource @ 146c84880

FSlateShaderResource * __thiscall
FSlateNullShaderResourceManager::GetAtlasPageResource
          (FSlateNullShaderResourceManager *this,int param_1)

{
  return (FSlateShaderResource *)0x0;
}

// IsAtlasPageResourceAlphaOnly @ 146c84890

bool __thiscall
FSlateNullShaderResourceManager::IsAtlasPageResourceAlphaOnly
          (FSlateNullShaderResourceManager *this,int param_1)

{
  return false;
}

// GetShaderResource @ 146c848a0

FSlateShaderResourceProxy * __thiscall
FSlateNullShaderResourceManager::GetShaderResource
          (FSlateNullShaderResourceManager *this,FSlateBrush *param_1,TVector2<float> param_2,
          float param_3)

{
  return (FSlateShaderResourceProxy *)0x0;
}

// GetTextureAtlasProvider @ 146c848b0

ISlateAtlasProvider * __thiscall
FSlateNullShaderResourceManager::GetTextureAtlasProvider(FSlateNullShaderResourceManager *this)

{
  return (ISlateAtlasProvider *)&this[-1].field_0x58;
}

// GetResourceHandle @ 146c848c0

FSlateResourceHandle * __thiscall
FSlateNullShaderResourceManager::GetResourceHandle
          (FSlateNullShaderResourceManager *this,FSlateResourceHandle *__return_storage_ptr__,
          FSlateBrush *param_1)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  TRawPtrProxy<FSlateSharedHandleData> local_res10 [3];
  TSharedPtr<FSlateSharedHandleData,1> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FSlateResourceHandle___cdecl_FSlateNullShaderResourceManager::GetResourceHandle(FSlateBrush_const&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FSlateResourceHandle___cdecl_FSlateNullShaderResourceManager::GetResourceHandle(FSlateBrush_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FSlateResourceHandle___cdecl_FSlateNullShaderResourceManager::GetResourceHandle(FSlateBrush_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      local_res10[0].Object = ::operator_new(8);
      if (local_res10[0].Object != (FSlateSharedHandleData *)0x0) {
        (local_res10[0].Object)->Proxy = (FSlateShaderResourceProxy *)0x0;
      }
      TSharedPtr<FSlateSharedHandleData,1>::
      TSharedPtr<FSlateSharedHandleData,1><FSlateSharedHandleData>(&local_18,local_res10);
      FSlateResourceHandle::FSlateResourceHandle
                (&`public:_virtual_class_FSlateResourceHandle___cdecl_FSlateNullShaderResourceManager::GetResourceHandle(FSlateBrush_const&___ptr64)___ptr64'
                  ::__l2::NullHandle,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      atexit(`FSlateNullShaderResourceManager::GetResourceHandle'::__l2::
             _dynamic_atexit_destructor_for__NullHandle__);
      _Init_thread_footer(&`public:_virtual_class_FSlateResourceHandle___cdecl_FSlateNullShaderResourceManager::GetResourceHandle(FSlateBrush_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (__return_storage_ptr__->Data).Object =
       `public:_virtual_class_FSlateResourceHandle___cdecl_FSlateNullShaderResourceManager::GetResourceHandle(FSlateBrush_const&___ptr64)___ptr64'
       ::__l2::NullHandle.Data.Object;
  FVar2 = `public:_virtual_class_FSlateResourceHandle___cdecl_FSlateNullShaderResourceManager::GetResourceHandle(FSlateBrush_const&___ptr64)___ptr64'
          ::__l2::NullHandle.Data.SharedReferenceCount;
  (__return_storage_ptr__->Data).SharedReferenceCount.ReferenceController =
       `public:_virtual_class_FSlateResourceHandle___cdecl_FSlateNullShaderResourceManager::GetResourceHandle(FSlateBrush_const&___ptr64)___ptr64'
       ::__l2::NullHandle.Data.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

