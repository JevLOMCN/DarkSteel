// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 9

// ~FTextureCaptureFrame @ 14d78cda0

void __thiscall
UE::MediaCaptureData::FTextureCaptureFrame::~FTextureCaptureFrame(FTextureCaptureFrame *this)

{
  FRHIGPUTextureReadback *pFVar1;
  FRHITexture *this_00;
  longlong lVar2;
  FRHIGPUTextureReadback *pFVar3;
  
  pFVar1 = (this->ReadbackTexture).Ptr;
  if (pFVar1 != (FRHIGPUTextureReadback *)0x0) {
    lVar2 = 8;
    pFVar3 = pFVar1 + 1;
    do {
      this_00 = pFVar3[-1].DestinationStagingTextures[7].Reference;
      pFVar3 = (FRHIGPUTextureReadback *)(pFVar3[-1].DestinationStagingTextures + 7);
      lVar2 = lVar2 + -1;
      if (this_00 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    } while (lVar2 != 0);
    pFVar1->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)pFVar1->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1->_padding_);
    }
    ::operator_delete(pFVar1,0x58);
  }
  FCaptureFrame::~FCaptureFrame((FCaptureFrame *)this);
  return;
}

// EnqueueCopy @ 14d7a4210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::MediaCaptureData::FTextureCaptureFrame::EnqueueCopy
          (FTextureCaptureFrame *this,FRDGBuilder *param_1,FRDGViewableResource *param_2,
          bool param_3)

{
  FResolveRect local_18;
  
  local_18._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_18._8_8_ = _UNK_15060db28;
  AddEnqueueCopyPass(param_1,(this->ReadbackTexture).Ptr,(FRDGTexture *)param_2,&local_18,0);
  return;
}

// IsBufferResource @ 14d7b15c0

bool __thiscall
UE::MediaCaptureData::FTextureCaptureFrame::IsBufferResource(FTextureCaptureFrame *this)

{
  return false;
}

// IsReadbackReady @ 14d7b17a0

bool __thiscall
UE::MediaCaptureData::FTextureCaptureFrame::IsReadbackReady
          (FTextureCaptureFrame *this,FRHIGPUMask param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = (longlong *)((this->ReadbackTexture).Ptr)->_padding_;
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x18))();
    if (cVar2 == '\0') {
      return false;
    }
  }
  return true;
}

// IsTextureResource @ 14d7b1970

bool __thiscall
UE::MediaCaptureData::FTextureCaptureFrame::IsTextureResource(FTextureCaptureFrame *this)

{
  return true;
}

// Lock @ 14d7b1ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MediaCaptureData::FTextureCaptureFrame::Lock
          (FTextureCaptureFrame *this,FRHICommandListImmediate *param_1,int *param_2)

{
  FRHIGPUTextureReadback *pFVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  int local_res8 [2];
  
  pFVar1 = (this->ReadbackTexture).Ptr;
  lVar6 = pFVar1->_padding_;
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) {
      cVar2 = (**(code **)(*(longlong *)pFVar1->_padding_ + 0x20))();
      if (cVar2 != '\0') goto LAB_14d7b1f47;
    }
    if (5 < (byte)LogMediaIOCore._0_1_) {
      Logging::Private::BasicLog<6>
                (&`public:_virtual_void*___ptr64___cdecl_UE::MediaCaptureData::FTextureCaptureFrame::Lock(FRHICommandListImmediate&___ptr64,int&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
  }
LAB_14d7b1f47:
  pvVar4 = FRHIGPUTextureReadback::Lock((this->ReadbackTexture).Ptr,local_res8,(int *)0x0);
  plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x60))(this);
  lVar6 = (**(code **)(*plVar5 + 0x20))(plVar5);
  iVar3 = UMediaCapture::GetBytesPerPixel(*(EPixelFormat *)(lVar6 + 0x33));
  *param_2 = iVar3 * local_res8[0];
  return pvVar4;
}

// Lock_Unsafe @ 14d7b2060

void * __thiscall
UE::MediaCaptureData::FTextureCaptureFrame::Lock_Unsafe(FTextureCaptureFrame *this,int *param_1)

{
  uint uVar1;
  FRHIGPUTextureReadback *pFVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int local_res8 [2];
  undefined1 local_res10 [8];
  void *local_res18;
  
  pFVar2 = (this->ReadbackTexture).Ptr;
  local_res18 = (void *)0x0;
  uVar1 = (uint)pFVar2->_padding_;
  uVar3 = 0;
  if (uVar1 != 0) {
    for (; (uVar1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  uVar4 = 0x20;
  if (uVar1 != 0) {
    uVar4 = uVar3;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    for (; (uVar1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  uVar8 = 0x20;
  if (uVar1 != 0) {
    uVar8 = uVar3;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x230))
            (GDynamicRHI,pFVar2->DestinationStagingTextures[uVar8].Reference,0,&local_res18,
             local_res8,local_res10,uVar4);
  plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x60))(this);
  lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
  iVar5 = UMediaCapture::GetBytesPerPixel(*(EPixelFormat *)(lVar7 + 0x33));
  *param_1 = iVar5 * local_res8[0];
  return local_res18;
}

// Unlock @ 14d7c20e0

void __thiscall UE::MediaCaptureData::FTextureCaptureFrame::Unlock(FTextureCaptureFrame *this)

{
  FRHIGPUTextureReadback::Unlock((this->ReadbackTexture).Ptr);
  return;
}

// Unlock_Unsafe @ 14d7c2170

void __thiscall
UE::MediaCaptureData::FTextureCaptureFrame::Unlock_Unsafe(FTextureCaptureFrame *this)

{
  uint uVar1;
  FRHIGPUTextureReadback *pFVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  pFVar2 = (this->ReadbackTexture).Ptr;
  uVar1 = (uint)pFVar2->_padding_;
  iVar3 = 0;
  if (uVar1 != 0) {
    for (; (uVar1 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
    }
  }
  iVar6 = 0x20;
  if (uVar1 != 0) {
    iVar6 = iVar3;
  }
  uVar4 = 0;
  if (uVar1 != 0) {
    for (; (uVar1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  uVar5 = 0x20;
  if (uVar1 != 0) {
    uVar5 = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d7c21a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(GDynamicRHI->_padding_ + 0x238))
            (GDynamicRHI,pFVar2->DestinationStagingTextures[uVar5].Reference,iVar6);
  return;
}

