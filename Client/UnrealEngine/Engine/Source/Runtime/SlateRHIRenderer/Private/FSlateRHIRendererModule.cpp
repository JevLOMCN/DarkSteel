// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 7

// CreateSlateRHIRenderer @ 145fd53d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FSlateRenderer,1> * __thiscall
FSlateRHIRendererModule::CreateSlateRHIRenderer
          (FSlateRHIRendererModule *this,TSharedRef<FSlateRenderer,1> *__return_storage_ptr__)

{
  FSlateRHIRenderer *this_00;
  TSharedRef<FSlateRHIResourceManager,1> *pTVar1;
  TSharedRef<FSlateFontServices,1> *pTVar2;
  TRawPtrProxy<FSlateRHIRenderer> local_res10;
  TSharedRef<FSlateRHIResourceManager,1> local_28;
  TSharedRef<FSlateFontServices,1> local_18;
  
  ConditionalCreateResources(this);
  this_00 = ::operator_new(0x440);
  local_res10.Object = (FSlateRHIRenderer *)0x0;
  if (this_00 != (FSlateRHIRenderer *)0x0) {
    pTVar1 = TSharedPtr<FSlateRHIResourceManager,1>::ToSharedRef(&this->ResourceManager,&local_28);
    pTVar2 = TSharedPtr<FSlateFontServices,1>::ToSharedRef(&this->SlateFontServices,&local_18);
    local_res10.Object = FSlateRHIRenderer::FSlateRHIRenderer(this_00,pTVar2,pTVar1);
  }
  TSharedRef<FSlateRenderer,1>::TSharedRef<FSlateRenderer,1><FSlateRHIRenderer>
            (__return_storage_ptr__,&local_res10);
  return __return_storage_ptr__;
}

// CreateSlate3DRenderer @ 145fd5460

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<ISlate3DRenderer,1> * __thiscall
FSlateRHIRendererModule::CreateSlate3DRenderer
          (FSlateRHIRendererModule *this,TSharedRef<ISlate3DRenderer,1> *__return_storage_ptr__,
          bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlate3DRenderer *this_00;
  TSharedRef<FSlateRHIResourceManager,1> *pTVar3;
  TSharedRef<FSlateFontServices,1> *pTVar4;
  TSharedRef<ISlate3DRenderer,1> *pTVar5;
  TRawPtrProxyWithDeleter<FSlate3DRenderer,_public:_virtual_class_TSharedRef<ISlate3DRenderer,1>___cdecl_FSlateRHIRendererModule::CreateSlate3DRenderer(bool)_::_2_::<lambda_1>_>
  local_38;
  TSharedRef<FSlateRHIResourceManager,1> local_28;
  TSharedRef<FSlateFontServices,1> local_18;
  
  ConditionalCreateResources(this);
  this_00 = ::operator_new(0x200);
  if (this_00 == (FSlate3DRenderer *)0x0) {
    local_38.Object = (FSlate3DRenderer *)0x0;
  }
  else {
    pTVar3 = TSharedPtr<FSlateRHIResourceManager,1>::ToSharedRef(&this->ResourceManager,&local_28);
    pTVar4 = TSharedPtr<FSlateFontServices,1>::ToSharedRef(&this->SlateFontServices,&local_18);
    local_38.Object = FSlate3DRenderer::FSlate3DRenderer(this_00,pTVar4,pTVar3,param_1);
    if ((((local_38.Object != (FSlate3DRenderer *)0x0) && ((local_38.Object)->_padding_ != 0)) &&
        ((local_38.Object)->_padding_ != 0)) && (0 < *(int *)((local_38.Object)->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7bd,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedRef<ISlate3DRenderer,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  TSharedRef<ISlate3DRenderer,1>::
  TSharedRef<ISlate3DRenderer,1><FSlate3DRenderer,_FSlateRHIRendererModule::CreateSlate3DRenderer_::__l2::<lambda_1>_>
            (__return_storage_ptr__,&local_38);
  return __return_storage_ptr__;
}

// CreateSlateFontAtlasFactory @ 145fd5550

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<ISlateFontAtlasFactory,1> * __thiscall
FSlateRHIRendererModule::CreateSlateFontAtlasFactory
          (FSlateRHIRendererModule *this,
          TSharedRef<ISlateFontAtlasFactory,1> *__return_storage_ptr__)

{
  FSlateRHIFontAtlasFactory *this_00;
  TRawPtrProxy<FSlateRHIFontAtlasFactory> local_res10 [3];
  
  this_00 = ::operator_new(0x18);
  local_res10[0].Object = (FSlateRHIFontAtlasFactory *)0x0;
  if (this_00 != (FSlateRHIFontAtlasFactory *)0x0) {
    local_res10[0].Object = FSlateRHIFontAtlasFactory::FSlateRHIFontAtlasFactory(this_00);
  }
  TSharedRef<ISlateFontAtlasFactory,1>::
  TSharedRef<ISlateFontAtlasFactory,1><FSlateRHIFontAtlasFactory>
            (__return_storage_ptr__,local_res10);
  return __return_storage_ptr__;
}

// CreateInstanceBuffer @ 145fd55a0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<ISlateUpdatableInstanceBuffer,1> * __thiscall
FSlateRHIRendererModule::CreateInstanceBuffer
          (FSlateRHIRendererModule *this,
          TSharedRef<ISlateUpdatableInstanceBuffer,1> *__return_storage_ptr__,int param_1)

{
  FSlateUpdatableInstanceBuffer *pFVar1;
  FRenderProxy *pFVar2;
  TRawPtrProxy<FSlateUpdatableInstanceBuffer> local_res10;
  
  pFVar1 = ::operator_new(0x18);
  if (pFVar1 == (FSlateUpdatableInstanceBuffer *)0x0) {
    pFVar1 = (FSlateUpdatableInstanceBuffer *)0x0;
  }
  else {
    pFVar1->_padding_ = (longlong)&___7FSlateUpdatableInstanceBuffer__6B_;
    pFVar1->NumInstances = 0;
    pFVar2 = ::operator_new(0x40);
    if (pFVar2 == (FRenderProxy *)0x0) {
      pFVar2 = (FRenderProxy *)0x0;
    }
    else {
      pFVar2->_padding_ = (longlong)&___7FRenderProxy_FSlateUpdatableInstanceBuffer__6B_;
      FVertexBuffer::FVertexBuffer((FVertexBuffer *)&pFVar2->InstanceBufferResource);
      (pFVar2->InstanceBufferResource)._padding_ =
           (longlong)&___7__TSlateElementVertexBuffer_U__TVector4_N_Math_UE____6B_;
      (pFVar2->InstanceBufferResource).BufferSize = 0;
      (pFVar2->InstanceBufferResource).MinBufferSize = 0;
      (pFVar2->InstanceBufferResource).BufferUsageSize = 0;
    }
    pFVar1->Proxy = pFVar2;
    TSlateElementVertexBuffer<UE::Math::TVector4<double>_>::Init
              (&pFVar2->InstanceBufferResource,param_1);
  }
  local_res10.Object = pFVar1;
  TSharedRef<ISlateUpdatableInstanceBuffer,1>::
  TSharedRef<ISlateUpdatableInstanceBuffer,1><FSlateUpdatableInstanceBuffer>
            (__return_storage_ptr__,&local_res10);
  return __return_storage_ptr__;
}

// StartupModule @ 145fd5670

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRHIRendererModule::StartupModule(FSlateRHIRendererModule *this)

{
  return;
}

// ShutdownModule @ 145fd5680

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRHIRendererModule::ShutdownModule(FSlateRHIRendererModule *this)

{
  return;
}

// ConditionalCreateResources @ 145ff7d80

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRHIRendererModule::ConditionalCreateResources(FSlateRHIRendererModule *this)

{
  FSlateRHIResourceManager *this_00;
  FSlateFontCache *pFVar1;
  FSlateRHIFontAtlasFactory *pFVar2;
  FSlateFontCache *pFVar3;
  TSharedRef<ISlateFontAtlasFactory,1> *pTVar4;
  FSlateFontServices *this_01;
  FSlateFontCache *pFVar5;
  TRawPtrProxy<FSlateFontCache> local_res8;
  TSharedRef<FSlateFontCache,1> local_58;
  TSharedRef<FSlateFontCache,1> local_48;
  TSharedRef<FSlateFontCache,1> local_38;
  TSharedRef<FSlateFontCache,1> local_28;
  
  pFVar5 = (FSlateFontCache *)0x0;
  if ((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) {
    this_00 = ::operator_new(0x268);
    local_res8.Object = pFVar5;
    if (this_00 != (FSlateRHIResourceManager *)0x0) {
      local_res8.Object =
           (FSlateFontCache *)FSlateRHIResourceManager::FSlateRHIResourceManager(this_00);
    }
    TSharedPtr<FSlateRHIResourceManager,1>::operator=<FSlateRHIResourceManager>
              (&this->ResourceManager,(TRawPtrProxy<FSlateRHIResourceManager> *)&local_res8);
  }
  if ((this->SlateFontServices).Object == (FSlateFontServices *)0x0) {
    pFVar1 = ::operator_new(0x278);
    pFVar3 = pFVar5;
    if (pFVar1 != (FSlateFontCache *)0x0) {
      pFVar2 = ::operator_new(0x18);
      if (pFVar2 != (FSlateRHIFontAtlasFactory *)0x0) {
        pFVar3 = (FSlateFontCache *)FSlateRHIFontAtlasFactory::FSlateRHIFontAtlasFactory(pFVar2);
      }
      local_res8.Object = pFVar3;
      pTVar4 = TSharedRef<ISlateFontAtlasFactory,1>::
               TSharedRef<ISlateFontAtlasFactory,1><FSlateRHIFontAtlasFactory>
                         ((TSharedRef<ISlateFontAtlasFactory,1> *)&local_28,
                          (TRawPtrProxy<FSlateRHIFontAtlasFactory> *)&local_res8);
      pFVar3 = FSlateFontCache::FSlateFontCache(pFVar1,pTVar4,Game);
    }
    local_res8.Object = pFVar3;
    TSharedRef<FSlateFontCache,1>::TSharedRef<FSlateFontCache,1><FSlateFontCache>
              (&local_48,&local_res8);
    pFVar1 = ::operator_new(0x278);
    pFVar3 = pFVar5;
    if (pFVar1 != (FSlateFontCache *)0x0) {
      pFVar2 = ::operator_new(0x18);
      if (pFVar2 != (FSlateRHIFontAtlasFactory *)0x0) {
        pFVar3 = (FSlateFontCache *)FSlateRHIFontAtlasFactory::FSlateRHIFontAtlasFactory(pFVar2);
      }
      local_res8.Object = pFVar3;
      pTVar4 = TSharedRef<ISlateFontAtlasFactory,1>::
               TSharedRef<ISlateFontAtlasFactory,1><FSlateRHIFontAtlasFactory>
                         ((TSharedRef<ISlateFontAtlasFactory,1> *)&local_28,
                          (TRawPtrProxy<FSlateRHIFontAtlasFactory> *)&local_res8);
      pFVar3 = FSlateFontCache::FSlateFontCache(pFVar1,pTVar4,Render);
    }
    local_res8.Object = pFVar3;
    TSharedRef<FSlateFontCache,1>::TSharedRef<FSlateFontCache,1><FSlateFontCache>
              (&local_58,&local_res8);
    this_01 = ::operator_new(0x60);
    if (this_01 != (FSlateFontServices *)0x0) {
      local_38.Object = local_58.Object;
      local_38.SharedReferenceCount.ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.Object = local_48.Object;
      local_28.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar5 = (FSlateFontCache *)
               FSlateFontServices::FSlateFontServices(this_01,&local_28,&local_38);
    }
    local_res8.Object = pFVar5;
    TSharedPtr<FSlateFontServices,1>::operator=<FSlateFontServices>
              (&this->SlateFontServices,(TRawPtrProxy<FSlateFontServices> *)&local_res8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  return;
}

