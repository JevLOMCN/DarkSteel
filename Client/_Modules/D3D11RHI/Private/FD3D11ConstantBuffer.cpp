// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 4

// FD3D11ConstantBuffer @ 14596b860

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FD3D11ConstantBuffer * __thiscall
FD3D11ConstantBuffer::FD3D11ConstantBuffer(FD3D11ConstantBuffer *this,FD3D11DynamicRHI *param_1)

{
  code *pcVar1;
  bool bVar2;
  FD3D11ConstantBuffer *pFVar3;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->D3DRHI = param_1;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  this->_padding_ = (longlong)&_vftable__for__FRefCountedObject__;
  this->ShadowData = (uchar *)0x0;
  this->CurrentUpdateSize = 0;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D11ConstantBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  FRenderResource::InitResource
            ((FRenderResource *)this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  return this;
}

// ~FD3D11ConstantBuffer @ 14596ecd0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D11ConstantBuffer::~FD3D11ConstantBuffer(FD3D11ConstantBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  this->_padding_ = (longlong)&_vftable__for__FRefCountedObject__;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// InitRHI @ 1459854f0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FD3D11ConstantBuffer::InitRHI(FD3D11ConstantBuffer *this,FRHICommandListBase *param_1)

{
  uchar *_Dst;
  
  _Dst = FMemory::Malloc(0x10000,0x10);
  this->ShadowData = _Dst;
  memset(_Dst,0,0x10000);
  return;
}

// ReleaseRHI @ 1459971c0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D11ConstantBuffer::ReleaseRHI(FD3D11ConstantBuffer *this)

{
  uchar *puVar1;
  FLowLevelMemTracker *this_00;
  
  puVar1 = this->ShadowData;
  if (puVar1 == (uchar *)0x0) {
    return;
  }
  if (puVar1 != (uchar *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,puVar1);
  }
  return;
}

