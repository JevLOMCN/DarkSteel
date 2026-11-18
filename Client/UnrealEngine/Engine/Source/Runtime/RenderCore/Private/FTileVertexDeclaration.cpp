// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// InitRHI @ 145cfd2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTileVertexDeclaration::InitRHI(FTileVertexDeclaration *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIVertexDeclaration> *pTVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_b8 [2];
  undefined4 uStack_b6;
  undefined2 uStack_b2;
  FRHIResource *local_b0;
  ForElementType<FVertexElement> local_a8;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_1c = 0x11;
  uStack_b6 = 0x80002;
  local_20 = 0;
  local_b8 = (undefined1  [2])0x0;
  uStack_b2 = 0;
  iVar4 = 0;
  if ((local_b8 + 0x10 <= local_b8) && (local_b8 < &local_20)) {
    local_c8 = 8;
    local_e0 = local_b8 + 0x10;
    local_d0 = 0;
    local_d8 = 0x11;
    local_e8 = local_b8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = local_20;
    if (local_20 == local_1c) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,(ForElementType<FVertexElement> *)(local_b8 + 0x10),&local_1c);
    }
  }
  local_20 = iVar4 + 1;
  *(ulonglong *)(local_b8 + (longlong)iVar4 * 8 + 0x10) =
       CONCAT26(uStack_b2,CONCAT42(uStack_b6,local_b8));
  (**(code **)(GDynamicRHI->_padding_ + 0x68))(GDynamicRHI,local_b8 + 8,local_b8 + 0x10);
  pTVar1 = &this->VertexDeclarationRHI;
  if (pTVar1 != (TRefCountPtr<FRHIVertexDeclaration> *)(local_b8 + 8)) {
    this_00 = (FRHIResource *)pTVar1->Reference;
    pTVar1->Reference = (FRHIVertexDeclaration *)local_b0;
    local_b0 = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) {
      return;
    }
    FRHIResource::Release(this_00);
  }
  if (local_b0 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_b0);
  }
  return;
}

// ReleaseRHI @ 145cfd400

void __thiscall FTileVertexDeclaration::ReleaseRHI(FTileVertexDeclaration *this)

{
  FRHIResource *this_00;
  
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->VertexDeclarationRHI).Reference = (FRHIVertexDeclaration *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// FTileVertexDeclaration @ 145d0b0a0

FTileVertexDeclaration * __thiscall
FTileVertexDeclaration::FTileVertexDeclaration(FTileVertexDeclaration *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FTileVertexDeclaration__6B_;
  (this->VertexDeclarationRHI).Reference = (FRHIVertexDeclaration *)0x0;
  return this;
}

// ~FTileVertexDeclaration @ 145d0c2e0

void __thiscall FTileVertexDeclaration::~FTileVertexDeclaration(FTileVertexDeclaration *this)

{
  FRHIResource *this_00;
  
  this->_padding_ = (longlong)&___7FTileVertexDeclaration__6B_;
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

