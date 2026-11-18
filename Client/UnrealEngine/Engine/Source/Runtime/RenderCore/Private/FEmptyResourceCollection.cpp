// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// InitRHI @ 145cfd8f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FEmptyResourceCollection::InitRHI(FEmptyResourceCollection *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIResourceCollection> *pTVar1;
  FRHIResourceCollection *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  TRefCountPtr<FRHIResourceCollection> local_28 [2];
  undefined8 local_18;
  undefined4 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_class_TRefCountPtr<FRHIResourceCollection>___cdecl_FRHICommandListBase::CreateResourceCollection(TArrayView<FRHIResourceCollectionMember_const_,int>)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIResourceCollection>___cdecl_FRHICommandListBase::CreateResourceCollection(TArrayView<FRHIResourceCollectionMember_const_,int>)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_TRefCountPtr<FRHIResourceCollection>___cdecl_FRHICommandListBase::CreateResourceCollection(TArrayView<FRHIResourceCollectionMember_const_,int>)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_class_TRefCountPtr<FRHIResourceCollection>___cdecl_FRHICommandListBase::CreateResourceCollection(TArrayView<FRHIResourceCollectionMember_const_,int>)___ptr64'
                    ::__l2::LLMScope_Name1146,L"RHIMisc/CreateResourceCollection");
    _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIResourceCollection>___cdecl_FRHICommandListBase::CreateResourceCollection(TArrayView<FRHIResourceCollectionMember_const_,int>)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_class_TRefCountPtr<FRHIResourceCollection>___cdecl_FRHICommandListBase::CreateResourceCollection(TArrayView<FRHIResourceCollectionMember_const_,int>)___ptr64'
             ::__l2::LLMScope_Name1146,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_class_TRefCountPtr<FRHIResourceCollection>___cdecl_FRHICommandListBase::CreateResourceCollection(TArrayView<FRHIResourceCollectionMember_const_,int>)___ptr64'
              ::__l2::LLMScope_Name1146,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1c0))(GDynamicRHI,local_28,param_1,&local_18);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pTVar1 = &this->ResourceCollection;
  if (pTVar1 != local_28) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = local_28[0].Reference;
    local_28[0].Reference = (FRHIResourceCollection *)0x0;
    if (this_00 == (FRHIResourceCollection *)0x0) {
      return;
    }
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if (local_28[0].Reference != (FRHIResourceCollection *)0x0) {
    FRHIResource::Release((FRHIResource *)local_28[0].Reference);
  }
  return;
}

// ReleaseRHI @ 145cfda40

void __thiscall FEmptyResourceCollection::ReleaseRHI(FEmptyResourceCollection *this)

{
  FRHIResourceCollection *this_00;
  
  this_00 = (this->ResourceCollection).Reference;
  if (this_00 != (FRHIResourceCollection *)0x0) {
    (this->ResourceCollection).Reference = (FRHIResourceCollection *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

