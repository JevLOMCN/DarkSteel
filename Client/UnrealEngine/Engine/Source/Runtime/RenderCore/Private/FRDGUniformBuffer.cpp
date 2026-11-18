// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// ~FRDGUniformBuffer @ 145d910c0

void __thiscall FRDGUniformBuffer::~FRDGUniformBuffer(FRDGUniformBuffer *this)

{
  FRHIUniformBuffer *this_00;
  FRHIUniformBufferLayout *this_01;
  
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this_00 = (this->UniformBufferRHI).Reference;
  if (this_00 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->ParameterStruct).Layout.Reference;
  if (this_01 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
    return;
  }
  return;
}

// InitRHI @ 145dbcf30

void __thiscall FRDGUniformBuffer::InitRHI(FRDGUniformBuffer *this)

{
  TRefCountPtr<FRHIUniformBuffer> *pTVar1;
  FRHIUniformBufferLayout *pFVar2;
  uchar *puVar3;
  FRHIUniformBuffer *this_00;
  code *pcVar4;
  bool bVar5;
  TRefCountPtr<FRHIUniformBuffer> TVar6;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  TRefCountPtr<FRHIUniformBuffer> local_18 [2];
  
  if (this->_padding_ != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasRHI()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphResources.cpp"
                       ,0xc0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = (this->ParameterStruct).Layout.Reference;
  puVar3 = (this->ParameterStruct).Contents;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                      ::__l2::LLMScope_Name1233,L"RHIMisc/CreateUniformBuffer");
      _Init_thread_footer(&`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
             ::__l2::LLMScope_Name1233,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
              ::__l2::LLMScope_Name1233,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x128))(GDynamicRHI,local_18,puVar3,pFVar2,1,1);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  TVar6.Reference = local_18[0].Reference;
  pTVar1 = &this->UniformBufferRHI;
  if (pTVar1 != local_18) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = local_18[0].Reference;
    local_18[0].Reference = (FRHIUniformBuffer *)0x0;
    if (this_00 == (FRHIUniformBuffer *)0x0) goto LAB_145dbd050;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if (local_18[0].Reference != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_18[0].Reference);
  }
  TVar6.Reference = pTVar1->Reference;
LAB_145dbd050:
  this->_padding_ = (longlong)TVar6.Reference;
  return;
}

// MarkResourceAsUsed @ 145dc1e00

void __thiscall FRDGUniformBuffer::MarkResourceAsUsed(FRDGUniformBuffer *this)

{
  <lambda_1> local_res10;
  
  if (GRDGValidation != 0) {
    FRDGResource::ValidateRHIAccess((FRDGResource *)this);
    FRDGParameterStruct::Enumerate<_FRDGUniformBuffer::MarkResourceAsUsed_::__l2::<lambda_1>_>
              (&this->ParameterStruct,local_res10);
    return;
  }
  return;
}

