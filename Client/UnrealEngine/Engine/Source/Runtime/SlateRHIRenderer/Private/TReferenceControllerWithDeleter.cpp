// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 15

// DestroyObject @ 145fd20d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateRHIResourceManager,SharedPointerInternals::DefaultDeleter<FSlateRHIResourceManager>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateRHIResourceManager,SharedPointerInternals::DefaultDeleter<FSlateRHIResourceManager>,1>
                *this)

{
  FSlateRHIResourceManager *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateRHIResourceManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145fd20e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 145fd21b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateFontServices,SharedPointerInternals::DefaultDeleter<FSlateFontServices>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateFontServices,SharedPointerInternals::DefaultDeleter<FSlateFontServices>,1>
                *this)

{
  FSlateFontServices *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FSlateFontServices *)0x0) {
    FSlateFontServices::~FSlateFontServices(this_00);
    ::operator_delete(this_00,0x60);
    return;
  }
  return;
}

// DestroyObject @ 145fd2d60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateFontAtlasRHI,SharedPointerInternals::DefaultDeleter<FSlateFontAtlasRHI>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateFontAtlasRHI,SharedPointerInternals::DefaultDeleter<FSlateFontAtlasRHI>,1>
                *this)

{
  FSlateFontAtlasRHI *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateFontAtlasRHI *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145fd2d71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 145fd2dc0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateFontTextureRHI,SharedPointerInternals::DefaultDeleter<FSlateFontTextureRHI>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateFontTextureRHI,SharedPointerInternals::DefaultDeleter<FSlateFontTextureRHI>,1>
                *this)

{
  FSlateFontTextureRHI *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateFontTextureRHI *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145fd2dd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 145fd2e20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateRHIRenderer,SharedPointerInternals::DefaultDeleter<FSlateRHIRenderer>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateRHIRenderer,SharedPointerInternals::DefaultDeleter<FSlateRHIRenderer>,1>
                *this)

{
  if (this->Object != (FSlateRHIRenderer *)0x0) {
    FSlateRHIRenderer::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 145fd30f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlate3DRenderer,`FSlateRHIRendererModule::CreateSlate3DRenderer'::__l2::<lambda_1>,1>
::DestroyObject(void *this)

{
  FDeferredCleanupInterface *pFVar1;
  
  pFVar1 = (FDeferredCleanupInterface *)(*(longlong *)((longlong)this + 0x10) + 0x18);
  if (*(longlong *)((longlong)this + 0x10) == 0) {
    pFVar1 = (FDeferredCleanupInterface *)0x0;
  }
  BeginCleanup(pFVar1);
  return;
}

// DestroyObject @ 145fd3350

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateRHIFontAtlasFactory,SharedPointerInternals::DefaultDeleter<FSlateRHIFontAtlasFactory>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateRHIFontAtlasFactory,SharedPointerInternals::DefaultDeleter<FSlateRHIFontAtlasFactory>,1>
                *this)

{
  FSlateRHIFontAtlasFactory *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateRHIFontAtlasFactory *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145fd3361. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 145fd3810

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateUpdatableInstanceBuffer,SharedPointerInternals::DefaultDeleter<FSlateUpdatableInstanceBuffer>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateUpdatableInstanceBuffer,SharedPointerInternals::DefaultDeleter<FSlateUpdatableInstanceBuffer>,1>
                *this)

{
  if (this->Object != (FSlateUpdatableInstanceBuffer *)0x0) {
    FSlateUpdatableInstanceBuffer::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 145fd3f30

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateFontCache,SharedPointerInternals::DefaultDeleter<FSlateFontCache>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateFontCache,SharedPointerInternals::DefaultDeleter<FSlateFontCache>,1>
                *this)

{
  FSlateFontCache *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateFontCache *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145fd3f41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 145fff8a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateTextureData,SharedPointerInternals::DefaultDeleter<FSlateTextureData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateTextureData,SharedPointerInternals::DefaultDeleter<FSlateTextureData>,1>
                *this)

{
  FSlateTextureData *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FSlateTextureData *)0x0) {
    FSlateTextureData::~FSlateTextureData(this_00);
    ::operator_delete(this_00,0x20);
    return;
  }
  return;
}

// DestroyObject @ 145fff8e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateAtlasedTextureResource,SharedPointerInternals::DefaultDeleter<FSlateAtlasedTextureResource>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateAtlasedTextureResource,SharedPointerInternals::DefaultDeleter<FSlateAtlasedTextureResource>,1>
                *this)

{
  FSlateAtlasedTextureResource *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateAtlasedTextureResource *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145fff8f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x38))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 145fff900

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateDynamicTextureResource,SharedPointerInternals::DefaultDeleter<FSlateDynamicTextureResource>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateDynamicTextureResource,SharedPointerInternals::DefaultDeleter<FSlateDynamicTextureResource>,1>
                *this)

{
  FSlateDynamicTextureResource *pFVar1;
  FSlateShaderResourceProxy *pFVar2;
  FSlateSharedHandleData *pFVar3;
  FSlateTexture2DRHIRef *pFVar4;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateDynamicTextureResource *)0x0) {
    pFVar2 = pFVar1->Proxy;
    if (pFVar2 != (FSlateShaderResourceProxy *)0x0) {
      pFVar3 = (pFVar2->HandleData).Object;
      if (pFVar3 != (FSlateSharedHandleData *)0x0) {
        pFVar3->Proxy = (FSlateShaderResourceProxy *)0x0;
      }
      TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar2->HandleData).SharedReferenceCount.ReferenceController);
      ::operator_delete(pFVar2,0x30);
    }
    pFVar4 = pFVar1->RHIRefTexture;
    if (pFVar4 != (FSlateTexture2DRHIRef *)0x0) {
      (**(code **)(pFVar4->_padding_ + 0x38))(pFVar4,1);
    }
    ::operator_delete(pFVar1,0x10);
    return;
  }
  return;
}

// DestroyObject @ 145fff980

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateMaterialResource,SharedPointerInternals::DefaultDeleter<FSlateMaterialResource>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateMaterialResource,SharedPointerInternals::DefaultDeleter<FSlateMaterialResource>,1>
                *this)

{
  FSlateMaterialResource *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateMaterialResource *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145fff991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x38))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 145fff9a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateRHIRenderingPolicy,SharedPointerInternals::DefaultDeleter<FSlateRHIRenderingPolicy>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateRHIRenderingPolicy,SharedPointerInternals::DefaultDeleter<FSlateRHIRenderingPolicy>,1>
                *this)

{
  FSlateRHIRenderingPolicy *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateRHIRenderingPolicy *)0x0) {
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->ResourceManager).SharedReferenceCount.ReferenceController);
    pFVar1->_padding_ = (longlong)&___7FSlateRenderingPolicy__6B_;
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar1->_padding_);
    ::operator_delete(pFVar1,0x30);
    return;
  }
  return;
}

// DestroyObject @ 145fff9f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateUTextureResource,SharedPointerInternals::DefaultDeleter<FSlateUTextureResource>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateUTextureResource,SharedPointerInternals::DefaultDeleter<FSlateUTextureResource>,1>
                *this)

{
  FSlateUTextureResource *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateUTextureResource *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145fffa01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x38))(pFVar1,1);
    return;
  }
  return;
}

