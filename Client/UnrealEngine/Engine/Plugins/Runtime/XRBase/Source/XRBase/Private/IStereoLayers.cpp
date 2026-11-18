// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 12

// ~IStereoLayers @ 14cf7efd0

void __thiscall IStereoLayers::~IStereoLayers(IStereoLayers *this)

{
  FRHITexture *pFVar1;
  
  this->_padding_ = (longlong)&___7IStereoLayers__6B_;
  pFVar1 = (this->SplashMovie).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->SplashTexture).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
    return;
  }
  return;
}

// FindLayerDesc @ 14cf8c660

FLayerDesc * __thiscall IStereoLayers::FindLayerDesc(IStereoLayers *this,uint param_1)

{
  return (FLayerDesc *)0x0;
}

// GetAllocatedTexture @ 14cf8dd70

void __thiscall
IStereoLayers::GetAllocatedTexture
          (IStereoLayers *this,uint param_1,TRefCountPtr<FRHITexture> *param_2,
          TRefCountPtr<FRHITexture> *param_3)

{
  FRHITexture *pFVar1;
  
  pFVar1 = param_2->Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    param_2->Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = param_3->Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    param_3->Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
    return;
  }
  return;
}

// GetDebugLayerTextures_RenderThread @ 14cf8edf0

TArray<TRefCountPtr<FRHITexture>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
IStereoLayers::GetDebugLayerTextures_RenderThread
          (IStereoLayers *this,
          TArray<TRefCountPtr<FRHITexture>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<TRefCountPtr<FRHITexture>_>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 2;
  return __return_storage_ptr__;
}

// HideBackgroundLayer @ 14cf92580

void __thiscall IStereoLayers::HideBackgroundLayer(IStereoLayers *this)

{
  return;
}

// IsBackgroundLayerVisible @ 14cf92a80

bool __thiscall IStereoLayers::IsBackgroundLayerVisible(IStereoLayers *this)

{
  return true;
}

// PopLayerState @ 14cf947d0

void __thiscall IStereoLayers::PopLayerState(IStereoLayers *this)

{
  return;
}

// PushLayerState @ 14cf97c40

void __thiscall IStereoLayers::PushLayerState(IStereoLayers *this,bool param_1)

{
  return;
}

// ShouldCopyDebugLayersToSpectatorScreen @ 14cf9bc20

bool __thiscall IStereoLayers::ShouldCopyDebugLayersToSpectatorScreen(IStereoLayers *this)

{
  return false;
}

// ShowBackgroundLayer @ 14cf9bc60

void __thiscall IStereoLayers::ShowBackgroundLayer(IStereoLayers *this)

{
  return;
}

// SupportsLayerState @ 14cf9d650

bool __thiscall IStereoLayers::SupportsLayerState(IStereoLayers *this)

{
  return false;
}

// UpdateSplashScreen @ 14cf9e170

void __thiscall IStereoLayers::UpdateSplashScreen(IStereoLayers *this)

{
  return;
}

