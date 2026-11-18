// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 49

// `dynamic_initializer_for_'ModuleRegistrantNullDrv'' @ 140f94d20

void __cdecl _dynamic_initializer_for__ModuleRegistrantNullDrv__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NullDrv";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NullDrv",7);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNullDynamicRHIModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 1446c3f70

void * __thiscall
FNullDynamicRHIModule::_scalar_deleting_destructor_(FNullDynamicRHIModule *this,uint param_1)

{
  *this = (FNullDynamicRHIModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c3fc0

void * __thiscall
IDynamicRHIModule::_scalar_deleting_destructor_(IDynamicRHIModule *this,uint param_1)

{
  *this = (IDynamicRHIModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// DestructItems<TRefCountPtr<FRHIResource>,int> @ 1446c4000

void __cdecl
DestructItems<TRefCountPtr<FRHIResource>,int>(TRefCountPtr<FRHIResource> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (FRHIResource *)0x0) {
      FRHIResource::Release(param_1->Reference);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int> @ 1446c4040

void __cdecl
DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>
          (TSharedRef<FRHIBreadcrumbAllocator,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ~TFunction_OwnedObject<`FNullDynamicRHI::FNullBufferInitializer::FNullBufferInitializer'::__l1::<lambda_5_>,1,0> @ 1446c4660

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullDynamicRHI::FNullBufferInitializer::FNullBufferInitializer'::__l1::<lambda_5_>,1,0>
::
~TFunction_OwnedObject<_FNullDynamicRHI::FNullBufferInitializer::FNullBufferInitializer_::__l1::<lambda_5_>,1,0>
          (void *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_5_>__0___0FNullBufferInitializer_FNullDynamicRHI__QEAA_AEAVFRHICommandListBase__PEAVFNullBuffer_3_PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  this_00 = *(FRHIResource **)((longlong)this + 8);
  if (this_00 == (FRHIResource *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &this_00->AtomicFlags;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete(this_00);
  }
  return;
}

// ~TFunction_OwnedObject<`FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_6_>,1,0> @ 1446c4680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_6_>,1,0>
::
~TFunction_OwnedObject<_FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer_::__l1::<lambda_6_>,1,0>
          (void *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_6_>__0___0FNullTextureInitializer_FNullDynamicRHI__QEAA_AEAVFRHICommandListBase__PEAVFRHITexture__PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  this_00 = *(FRHIResource **)((longlong)this + 8);
  if (this_00 == (FRHIResource *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &this_00->AtomicFlags;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete(this_00);
  }
  return;
}

// ~TFunction_OwnedObject<`FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_7_>,1,0> @ 1446c46a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_7_>,1,0>
::
~TFunction_OwnedObject<_FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer_::__l1::<lambda_7_>,1,0>
          (void *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_7_>__0___0FNullTextureInitializer_FNullDynamicRHI__QEAA_AEAVFRHICommandListBase__PEAVFRHITexture__PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  this_00 = *(FRHIResource **)((longlong)this + 8);
  if (this_00 == (FRHIResource *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &this_00->AtomicFlags;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete(this_00);
  }
  return;
}

// `vector_deleting_destructor'`adjustor{24}' @ 1446c4b60

/* [thunk]:public: virtual void * __ptr64 __cdecl FNullDynamicRHI::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FNullDynamicRHI::_vector_deleting_destructor__adjustor_24__(FNullDynamicRHI *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FNullDynamicRHI *)&this[-1].MemoryBuffer,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1446c4b70

/* [thunk]:public: virtual void * __ptr64 __cdecl FNullDynamicRHI::FNullTexture::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FNullDynamicRHI::FNullTexture::_vector_deleting_destructor__adjustor_40__
          (FNullTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FNullTexture *)&this[-1].field_0x110,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1446c4b80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullDynamicRHI::FNullBufferInitializer::FNullBufferInitializer'::__l1::<lambda_5_>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_5_>__0___0FNullBufferInitializer_FNullDynamicRHI__QEAA_AEAVFRHICommandListBase__PEAVFNullBuffer_3_PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c4bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_6_>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_6_>__0___0FNullTextureInitializer_FNullDynamicRHI__QEAA_AEAVFRHICommandListBase__PEAVFRHITexture__PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c4c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_7_>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_7_>__0___0FNullTextureInitializer_FNullDynamicRHI__QEAA_AEAVFRHICommandListBase__PEAVFRHITexture__PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c4c70

void * __thiscall FDynamicRHI::_scalar_deleting_destructor_(FDynamicRHI *this,uint param_1)

{
  ~FDynamicRHI(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c4cb0

void * __thiscall
FDynamicRHIPSOFallback::_scalar_deleting_destructor_(FDynamicRHIPSOFallback *this,uint param_1)

{
  FDynamicRHI::~FDynamicRHI((FDynamicRHI *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c4cf0

void * __thiscall
FGenericRHIStagingBuffer::_scalar_deleting_destructor_(FGenericRHIStagingBuffer *this,uint param_1)

{
  FRHIBuffer *this_00;
  
  this->_padding_ = (longlong)&___7FGenericRHIStagingBuffer__6B_;
  this_00 = (this->ShadowBuffer).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)&___7FRHIStagingBuffer__6B_;
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c4d50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FNullDynamicRHI::FNullBuffer::_scalar_deleting_destructor_(FNullBuffer *this,uint param_1)

{
  RHIValidation::FResource::~FResource((FResource *)&this->field_0x28);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c4da0

void * __thiscall FNullDynamicRHI::_scalar_deleting_destructor_(FNullDynamicRHI *this,uint param_1)

{
  FLargeMemoryData::~FLargeMemoryData(&this->MemoryBuffer);
  this->_padding_ = (longlong)&___7IRHICommandContext__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IRHIComputeContext__6B_;
  FDynamicRHI::~FDynamicRHI((FDynamicRHI *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c4e20

void * __thiscall
`FNullDynamicRHI::RHICreateGPUFence'::__l2::FNullGPUFence::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  FRHIResource::~FRHIResource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c4e60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FNullDynamicRHI::FNullTexture::_scalar_deleting_destructor_(FNullTexture *this,uint param_1)

{
  if (*(void **)&this->field_0x120 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x120);
  }
  *(undefined ***)&this->field_0x28 = &___7FTextureResource_RHIValidation__6B_;
  RHIValidation::FResource::~FResource((FResource *)&this->field_0x30);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c4ed0

void * __thiscall FRHIBlendState::_scalar_deleting_destructor_(FRHIBlendState *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c4f10

void * __thiscall
FRHIBoundShaderState::_scalar_deleting_destructor_(FRHIBoundShaderState *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c4f50

void * __thiscall
FRHIComputePipelineState::_scalar_deleting_destructor_(FRHIComputePipelineState *this,uint param_1)

{
  FRHIComputeShader *this_00;
  
  this_00 = (this->ComputeShader).Reference;
  if (this_00 != (FRHIComputeShader *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c4fa0

void * __thiscall
FRHIComputePipelineStateFallback::_scalar_deleting_destructor_
          (FRHIComputePipelineStateFallback *this,uint param_1)

{
  if (*(FRHIResource **)&this->field_0x18 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x18);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c4ff0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FRHIComputeShader::_scalar_deleting_destructor_(FRHIComputeShader *this,uint param_1)

{
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c5030

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FRHIDepthStencilState::_scalar_deleting_destructor_(FRHIDepthStencilState *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c5070

void * __thiscall FRHIGPUFence::_scalar_deleting_destructor_(FRHIGPUFence *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c50b0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FRHIGeometryShader::_scalar_deleting_destructor_(FRHIGeometryShader *this,uint param_1)

{
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c50f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FRHIGraphicsPipelineState::_scalar_deleting_destructor_
          (FRHIGraphicsPipelineState *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c5130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void * __thiscall
FRHIGraphicsPipelineStateFallBack::_scalar_deleting_destructor_
          (FRHIGraphicsPipelineStateFallBack *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c5170

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FRHIGraphicsShader::_scalar_deleting_destructor_(FRHIGraphicsShader *this,uint param_1)

{
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c51b0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall FRHIPixelShader::_scalar_deleting_destructor_(FRHIPixelShader *this,uint param_1)

{
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c51f0

void * __thiscall
FRHIRasterizerState::_scalar_deleting_destructor_(FRHIRasterizerState *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c5230

void * __thiscall FRHIRenderQuery::_scalar_deleting_destructor_(FRHIRenderQuery *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c5270

void * __thiscall
FRHISamplerState::_scalar_deleting_destructor_(FRHISamplerState *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c52b0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall FRHIShader::_scalar_deleting_destructor_(FRHIShader *this,uint param_1)

{
  ~FRHIShader(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c52f0

void * __thiscall
FRHIShaderResourceView::_scalar_deleting_destructor_(FRHIShaderResourceView *this,uint param_1)

{
  if (*(FRHIResource **)&this->field_0x18 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x18);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c5340

void * __thiscall
FRHIStagingBuffer::_scalar_deleting_destructor_(FRHIStagingBuffer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRHIStagingBuffer__6B_;
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c5390

void * __thiscall
FRHIUniformBuffer::_scalar_deleting_destructor_(FRHIUniformBuffer *this,uint param_1)

{
  FRHIUniformBufferLayout *this_00;
  FScriptContainerElement *pFVar1;
  
  this_00 = (this->Layout).Reference;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  DestructItems<TRefCountPtr<FRHIResource>,int>
            ((TRefCountPtr<FRHIResource> *)(this->ResourceTable).AllocatorInstance.Data,
             (this->ResourceTable).ArrayNum);
  pFVar1 = (this->ResourceTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c5400

void * __thiscall
FRHIUnorderedAccessView::_scalar_deleting_destructor_(FRHIUnorderedAccessView *this,uint param_1)

{
  if (*(FRHIResource **)&this->field_0x18 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x18);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c5450

void * __thiscall
FRHIVertexDeclaration::_scalar_deleting_destructor_(FRHIVertexDeclaration *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c5490

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FRHIVertexShader::_scalar_deleting_destructor_(FRHIVertexShader *this,uint param_1)

{
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c54d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall FRHIView::_scalar_deleting_destructor_(FRHIView *this,uint param_1)

{
  FRHIViewableResource *this_00;
  
  this_00 = (this->Resource).Reference;
  if (this_00 != (FRHIViewableResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c5520

void * __thiscall FRHIViewport::_scalar_deleting_destructor_(FRHIViewport *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c5560

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
RHIValidation::FTextureResource::_scalar_deleting_destructor_(FTextureResource *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTextureResource_RHIValidation__6B_;
  FResource::~FResource(&this->PRIVATE_TrackerResource);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c55b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void * __thiscall
IRHICommandContext::_scalar_deleting_destructor_(IRHICommandContext *this,uint param_1)

{
  FRHITexture *this_00;
  
  this->_padding_ = (longlong)&___7IRHICommandContext__6B_;
  this_00 = (this->RenderPassInfo).ShadingRateTexture.Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)&___7IRHIComputeContext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c5610

void * __thiscall
IRHICommandContextPSOFallback::_scalar_deleting_destructor_
          (IRHICommandContextPSOFallback *this,uint param_1)

{
  *(undefined ***)this = &___7IRHICommandContext__6B_;
  if (*(FRHIResource **)&this->field_0x118 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x118);
  }
  *(undefined ***)this = &___7IRHIComputeContext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446c5670

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
IRHIComputeContext::_scalar_deleting_destructor_(IRHIComputeContext *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IRHIComputeContext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// IMPLEMENT_MODULE_NullDrv @ 1446c9320

void __cdecl IMPLEMENT_MODULE_NullDrv(void)

{
  return;
}

