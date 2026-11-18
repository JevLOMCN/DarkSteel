// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 7

// AllocParameters<FNiagaraDebugDrawLineIndirectParameters> @ 148deb770

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FNiagaraDebugDrawLineIndirectParameters * __thiscall
FRDGBuilder::AllocParameters<FNiagaraDebugDrawLineIndirectParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FNiagaraDebugDrawLineIndirectParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x180,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNiagaraDebugDrawLineIndirectParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *(undefined4 *)(puVar5 + 3) = 4;
    *puVar5 = &___7__TObject_VFNiagaraDebugDrawLineIndirectParameters___FRDGAllocator__6B_;
    puVar5[2] = 0;
    puVar5[4] = 0;
    *(undefined1 *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar5 + 0x10));
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNiagaraDebugDrawLineIndirectParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FNiagaraDebugDrawLineIndirectParameters *)(puVar5 + 2);
}

// AllocParameters<FNiagaraDebugDrawLineParameters> @ 148deb8c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FNiagaraDebugDrawLineParameters * __thiscall
FRDGBuilder::AllocParameters<FNiagaraDebugDrawLineParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FNiagaraDebugDrawLineParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x170,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNiagaraDebugDrawLineParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *(undefined1 *)(puVar5 + 3) = 1;
    *puVar5 = &___7__TObject_VFNiagaraDebugDrawLineParameters___FRDGAllocator__6B_;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar5 + 0xe));
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNiagaraDebugDrawLineParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FNiagaraDebugDrawLineParameters *)(puVar5 + 2);
}

// AllocParameters<FNiagaraClearCountsIntCS::FParameters> @ 148deba00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FNiagaraClearCountsIntCS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x30,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    puVar5[2] = 0;
    *puVar5 = &___7__TObject_VFParameters_FNiagaraClearCountsIntCS___FRDGAllocator__6B_;
    puVar5[3] = 0;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

// AllocParameters<FNiagaraClearCountsUIntCS::FParameters> @ 148debb30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FNiagaraClearCountsUIntCS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x30,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    puVar5[2] = 0;
    *puVar5 = &___7__TObject_VFParameters_FNiagaraClearCountsUIntCS___FRDGAllocator__6B_;
    puVar5[3] = 0;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

// AllocParameters<FNiagaraClearUAVCS::FParameters> @ 148debc60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FNiagaraClearUAVCS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x30,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    puVar5[5] = 0;
    *puVar5 = &___7__TObject_VFParameters_FNiagaraClearUAVCS___FRDGAllocator__6B_;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

// AllocParameters<FNiagaraGenerateMipsCS::FParameters> @ 148debd80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FNiagaraGenerateMipsCS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x50,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *puVar5 = &___7__TObject_VFParameters_FNiagaraGenerateMipsCS___FRDGAllocator__6B_;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

// AllocParameters<FNiagaraVisualizeTexturePS::FParameters> @ 148debeb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FNiagaraVisualizeTexturePS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b0,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *(undefined8 *)((longlong)puVar5 + 0x5c) = 0x3f800000;
    *puVar5 = &___7__TObject_VFParameters_FNiagaraVisualizeTexturePS___FRDGAllocator__6B_;
    *(undefined4 *)((longlong)puVar5 + 0x6c) = 0x3f800000;
    puVar5[10] = 0;
    *(undefined4 *)(puVar5 + 0xb) = 0;
    *(undefined8 *)((longlong)puVar5 + 100) = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    puVar5[0x14] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar5 + 0x16));
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

