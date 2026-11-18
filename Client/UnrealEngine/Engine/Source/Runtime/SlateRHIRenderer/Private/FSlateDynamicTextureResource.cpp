// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 2

// FSlateDynamicTextureResource @ 145fe5df0

FSlateDynamicTextureResource * __thiscall
FSlateDynamicTextureResource::FSlateDynamicTextureResource
          (FSlateDynamicTextureResource *this,FSlateTexture2DRHIRef *param_1)

{
  FSlateShaderResourceProxy *pFVar1;
  FSlateShaderResourceProxy *pFVar2;
  FSlateTexture2DRHIRef *this_00;
  undefined8 local_res8;
  
  pFVar1 = ::operator_new(0x30);
  pFVar2 = (FSlateShaderResourceProxy *)0x0;
  if (pFVar1 != (FSlateShaderResourceProxy *)0x0) {
    (pFVar1->StartUV).field0_0x0 = (TVector2<float>_u_0)0x0;
    (pFVar1->SizeUV).field0_0x0._s_0.X = 1.0;
    (pFVar1->SizeUV).field0_0x0._s_0.Y = 1.0;
    pFVar1->Resource = (FSlateShaderResource *)0x0;
    (pFVar1->ActualSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (pFVar1->HandleData).Object = (FSlateSharedHandleData *)0x0;
    (pFVar1->HandleData).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar2 = pFVar1;
  }
  this->Proxy = pFVar2;
  if (param_1 == (FSlateTexture2DRHIRef *)0x0) {
    this_00 = ::operator_new(0x70);
    if (this_00 == (FSlateTexture2DRHIRef *)0x0) {
      param_1 = (FSlateTexture2DRHIRef *)0x0;
    }
    else {
      local_res8 = 0;
      param_1 = FSlateTexture2DRHIRef::FSlateTexture2DRHIRef(this_00,(FRHITexture *)&local_res8,0,0)
      ;
    }
  }
  this->RHIRefTexture = param_1;
  this->Proxy->Resource = (FSlateShaderResource *)param_1;
  return this;
}

// ~FSlateDynamicTextureResource @ 145fea050

void __thiscall
FSlateDynamicTextureResource::~FSlateDynamicTextureResource(FSlateDynamicTextureResource *this)

{
  FSlateShaderResourceProxy *pFVar1;
  FSlateSharedHandleData *pFVar2;
  FSlateTexture2DRHIRef *pFVar3;
  
  pFVar1 = this->Proxy;
  if (pFVar1 != (FSlateShaderResourceProxy *)0x0) {
    pFVar2 = (pFVar1->HandleData).Object;
    if (pFVar2 != (FSlateSharedHandleData *)0x0) {
      pFVar2->Proxy = (FSlateShaderResourceProxy *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->HandleData).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar1,0x30);
  }
  pFVar3 = this->RHIRefTexture;
  if (pFVar3 != (FSlateTexture2DRHIRef *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x38))(pFVar3,1);
  }
  return;
}

