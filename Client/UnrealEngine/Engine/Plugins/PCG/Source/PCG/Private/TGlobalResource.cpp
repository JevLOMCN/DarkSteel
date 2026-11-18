// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// TGlobalResource<PCGComputeDummies::FPCGEmptyBufferSRV,1><enum_EPixelFormat,wchar_t_const_*> @ 14978f190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TGlobalResource<PCGComputeDummies::FPCGEmptyBufferSRV,1> * __thiscall
TGlobalResource<PCGComputeDummies::FPCGEmptyBufferSRV,1>::
TGlobalResource<PCGComputeDummies::FPCGEmptyBufferSRV,1><enum_EPixelFormat,wchar_t_const_*>
          (TGlobalResource<PCGComputeDummies::FPCGEmptyBufferSRV,1> *this,EPixelFormat param_1,
          wchar_t *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  TGlobalResource<PCGComputeDummies::FPCGEmptyBufferSRV,1> *pTVar4;
  FRHICommandListBase *pFVar5;
  FString local_28;
  
  ::FString::FString(&local_28,param_2);
  FRenderResource::FRenderResource((FRenderResource *)this);
  _Src.Data = local_28.Data.AllocatorInstance.Data;
  puVar1 = &this->field_0x28;
  *(undefined ***)this = &___7FPCGEmptyBufferSRV_PCGComputeDummies__6B_;
  this->field_0x20 = param_1;
  *(undefined8 *)puVar1 = 0;
  *(int *)&this->field_0x30 = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    *(undefined4 *)&this->field_0x34 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)puVar1,local_28.Data.ArrayNum,
               (int *)&this->field_0x34);
    memcpy(*(void **)puVar1,_Src.Data,(longlong)local_28.Data.ArrayNum * 2);
  }
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(undefined ***)this = &___7__TGlobalResource_VFPCGEmptyBufferSRV_PCGComputeDummies___00__6B_;
  if (*(int *)&this->field_0x18 != -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TGlobalResource<PCGComputeDummies::FPCGEmptyBufferSRV,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  this->field_0x1d = 1;
  bVar3 = IsInRenderingThread();
  if (bVar3) {
    pcVar2 = *(code **)(*(longlong *)this + 0x18);
    pFVar5 = FRenderResource::GetImmediateCommandList();
    (*pcVar2)(this,pFVar5);
  }
  else {
    BeginInitResource((FRenderResource *)this,(FRenderCommandPipe *)0x0);
  }
  return this;
}

// ~TGlobalResource<PCGComputeDummies::FPCGEmptyBufferSRV,1> @ 1497e1bf0

void __thiscall
TGlobalResource<PCGComputeDummies::FPCGEmptyBufferSRV,1>::
~TGlobalResource<PCGComputeDummies::FPCGEmptyBufferSRV,1>
          (TGlobalResource<PCGComputeDummies::FPCGEmptyBufferSRV,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFPCGEmptyBufferSRV_PCGComputeDummies___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x40 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x40);
  }
  if (*(FRHIResource **)&this->field_0x38 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x38);
  }
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

