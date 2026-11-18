// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 9

// FTextureReference @ 145defc80

FTextureReference * __thiscall FTextureReference::FTextureReference(FTextureReference *this)

{
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTextureReference__6B_;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x105;
  (this->TextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
  return this;
}

// ~FTextureReference @ 145df20e0

void __thiscall FTextureReference::~FTextureReference(FTextureReference *this)

{
  FRHITextureReference *this_00;
  
  this->_padding_ = (longlong)&___7FTextureReference__6B_;
  this_00 = (this->TextureReferenceRHI).Reference;
  if (this_00 != (FRHITextureReference *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// BeginInit_GameThread @ 145df9450

void __thiscall FTextureReference::BeginInit_GameThread(FTextureReference *this)

{
  this->bInitialized_GameThread = true;
  BeginInitResource((FRenderResource *)this,(FRenderCommandPipe *)0x0);
  return;
}

// BeginRelease_GameThread @ 145df97e0

void __thiscall FTextureReference::BeginRelease_GameThread(FTextureReference *this)

{
  BeginReleaseResource((FRenderResource *)this,(FRenderCommandPipe *)0x0);
  this->bInitialized_GameThread = false;
  return;
}

// GetFriendlyName @ 145e0f3a0

FString * __thiscall
FTextureReference::GetFriendlyName(FTextureReference *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FTextureReference");
  return __return_storage_ptr__;
}

// GetLastRenderTime @ 145e0f800

double __thiscall FTextureReference::GetLastRenderTime(FTextureReference *this)

{
  FRHITextureReference *pFVar1;
  
  if ((this->bInitialized_GameThread != false) &&
     (pFVar1 = (this->TextureReferenceRHI).Reference, pFVar1 != (FRHITextureReference *)0x0)) {
    return (double)pFVar1->_padding_;
  }
  return __real_c7efffffe0000000;
}

// InitRHI @ 145e16a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FTextureReference::InitRHI(FTextureReference *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHITextureReference> *pTVar1;
  FRHITextureReference *this_00;
  bool bVar2;
  TRefCountPtr<FRHITextureReference> local_18 [2];
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId528,"FTextureReference_InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderResource.cpp"
               ,0x210);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId528);
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x1a8))(GDynamicRHI,local_18,param_1,0);
  pTVar1 = &this->TextureReferenceRHI;
  if (pTVar1 != local_18) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = local_18[0].Reference;
    local_18[0].Reference = (FRHITextureReference *)0x0;
    if (this_00 == (FRHITextureReference *)0x0) goto LAB_145e16ad2;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if (local_18[0].Reference != (FRHITextureReference *)0x0) {
    FRHIResource::Release((FRHIResource *)local_18[0].Reference);
  }
LAB_145e16ad2:
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InvalidateLastRenderTime @ 145e18a90

void __thiscall FTextureReference::InvalidateLastRenderTime(FTextureReference *this)

{
  FRHITextureReference *pFVar1;
  
  if (((this->bInitialized_GameThread != false) &&
      (pFVar1 = (this->TextureReferenceRHI).Reference, pFVar1 != (FRHITextureReference *)0x0)) &&
     (__real_c7efffffe0000000 != (double)pFVar1->_padding_)) {
    pFVar1->_padding_ = -0x3810000020000000;
  }
  return;
}

// ReleaseRHI @ 145e215b0

void __thiscall FTextureReference::ReleaseRHI(FTextureReference *this)

{
  FRHITextureReference *this_00;
  
  this_00 = (this->TextureReferenceRHI).Reference;
  if (this_00 != (FRHITextureReference *)0x0) {
    (this->TextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

