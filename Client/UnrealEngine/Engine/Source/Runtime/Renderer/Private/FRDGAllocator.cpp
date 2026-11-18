// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 168

// Alloc<FRDGScope,FRDGScope_*_&> @ 144704dd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGScope * __thiscall
FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>(FRDGAllocator *this,FRDGScope **param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FRDGScope *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x60,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRDGScope *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &___7__TObject_UFRDGScope___FRDGAllocator__6B_;
    puVar6[1] = *param_1;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *(undefined1 *)(puVar6 + 10) = 0;
    *(undefined1 *)(puVar6 + 0xb) = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRDGScope *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FRDGScope *)(puVar6 + 1);
}

// Alloc<FClusteredShadingParameters> @ 144705240

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FClusteredShadingParameters * __thiscall
FRDGAllocator::Alloc<FClusteredShadingParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FClusteredShadingParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x200,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FClusteredShadingParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFClusteredShadingParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 3) = 1;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    puVar6[0xc] = 0;
    *(undefined1 *)(puVar6 + 0xd) = 1;
    puVar6[0xe] = 0;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    puVar6[0x10] = 0;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    puVar6[0x18] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x1a));
    puVar6[0x3a] = 0;
    *(undefined1 *)(puVar6 + 0x3b) = 1;
    puVar6[0x3c] = 0;
    puVar6[0x3e] = 0;
    *(undefined4 *)(puVar6 + 0x3f) = 4;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FClusteredShadingParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FClusteredShadingParameters *)(puVar8 + 2);
}

// Alloc<FDecalPassUniformParameters> @ 144705410

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDecalPassUniformParameters * __thiscall
FRDGAllocator::Alloc<FDecalPassUniformParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FDecalPassUniformParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1c0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FDecalPassUniformParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &___7__TObject_VFDecalPassUniformParameters___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    puVar6[0x36] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FDecalPassUniformParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FDecalPassUniformParameters *)(puVar6 + 2);
}

// Alloc<FDeferredDecalPassParameters> @ 144705640

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDeferredDecalPassParameters * __thiscall
FRDGAllocator::Alloc<FDeferredDecalPassParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FDeferredDecalPassParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1c0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FDeferredDecalPassParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFDeferredDecalPassParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xc] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    *(undefined4 *)(puVar6 + 0xd) = 4;
    puVar6[0xe] = 0;
    *(undefined4 *)(puVar6 + 0xf) = 8;
    puVar6[0x12] = 0;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    puVar6[0x14] = 0;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    puVar6[0x16] = 0;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x18));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FDeferredDecalPassParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FDeferredDecalPassParameters *)(puVar6 + 2);
}

// Alloc<FAmbientOcclusionSetupPS::FParameters> @ 1447057d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FAmbientOcclusionSetupPS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x290,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *puVar6 = &___7__TObject_VFParameters_FAmbientOcclusionSetupPS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x5c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x6c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x74) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x84) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x8c) = 0x3f800000;
    puVar6[0x30] = 0;
    *(undefined1 *)(puVar6 + 0x31) = 1;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x32));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FCapsuleShadowingCS::FParameters> @ 144705960

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall FRDGAllocator::Alloc<FCapsuleShadowingCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x200,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FCapsuleShadowingCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0x10] = 0;
    *(undefined4 *)(puVar6 + 0x11) = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x3e] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined4 *)((longlong)puVar6 + 0x8c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FGTAOHorizonSearchAndIntegrateCS::FParameters> @ 144705b30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FGTAOHorizonSearchAndIntegrateCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x2a0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 0x21) = 1;
    *(undefined8 *)((longlong)puVar6 + 0xac) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xbc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xec) = 0x3f800000;
    *puVar6 = &___7__TObject_VFParameters_FGTAOHorizonSearchAndIntegrateCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x20] = 0;
    puVar6[0x14] = 0;
    *(undefined4 *)(puVar6 + 0x15) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xb4) = 0;
    puVar6[0x1c] = 0;
    *(undefined4 *)(puVar6 + 0x1d) = 0;
    puVar6[0x22] = 0;
    *(undefined4 *)(puVar6 + 0x23) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x11c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x124) = 0;
    *(undefined8 *)((longlong)puVar6 + 300) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x144) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x14c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x154) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x15c) = 0x3f800000;
    puVar6[0x48] = 0;
    *(undefined4 *)(puVar6 + 0x49) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x24c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x254) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x25c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x264) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x26c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x274) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x27c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x284) = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    *(undefined4 *)((longlong)puVar6 + 0x28c) = 0x3f800000;
    puVar6[0x52] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FGTAOHorizonSearchCS::FParameters> @ 144705da0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FGTAOHorizonSearchCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x2a0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 0x21) = 1;
    *(undefined8 *)((longlong)puVar6 + 0xac) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xbc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xec) = 0x3f800000;
    *puVar6 = &___7__TObject_VFParameters_FGTAOHorizonSearchCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x20] = 0;
    puVar6[0x14] = 0;
    *(undefined4 *)(puVar6 + 0x15) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xb4) = 0;
    puVar6[0x1c] = 0;
    *(undefined4 *)(puVar6 + 0x1d) = 0;
    puVar6[0x22] = 0;
    *(undefined4 *)(puVar6 + 0x23) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x11c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x124) = 0;
    *(undefined8 *)((longlong)puVar6 + 300) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x144) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x14c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x154) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x15c) = 0x3f800000;
    puVar6[0x48] = 0;
    *(undefined4 *)(puVar6 + 0x49) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x24c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x254) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x25c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x264) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x26c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x274) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x27c) = 0x3f800000;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x284) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x28c) = 0x3f800000;
    puVar6[0x52] = 0;
    puVar6[0x53] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FGTAOInnerIntegratePS::FParameters> @ 144706010

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FGTAOInnerIntegratePS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x2d0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *puVar6 = &___7__TObject_VFParameters_FGTAOInnerIntegratePS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x5c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x6c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x74) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x84) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x8c) = 0x3f800000;
    puVar6[0x2e] = 0;
    *(undefined4 *)(puVar6 + 0x2f) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x17c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x184) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x18c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x19c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1a4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1ac) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1b4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1bc) = 0x3f800000;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x3a));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FGTAOSpatialFilterCS::FParameters> @ 144706200

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FGTAOSpatialFilterCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1b0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *(undefined1 *)(puVar6 + 5) = 1;
    *puVar6 = &___7__TObject_VFParameters_FGTAOSpatialFilterCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    *(undefined4 *)(puVar6 + 7) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x3c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x5c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x6c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x74) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
    puVar6[0x2e] = 0;
    *(undefined4 *)(puVar6 + 0x2f) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x17c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x184) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x18c) = 0x3f800000;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FGTAOTemporalFilterCS::FParameters> @ 1447063b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FGTAOTemporalFilterCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x220,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *(undefined1 *)(puVar6 + 5) = 1;
    *puVar6 = &___7__TObject_VFParameters_FGTAOTemporalFilterCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    *(undefined4 *)(puVar6 + 7) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x3c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x5c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x6c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x74) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
    puVar6[0x2c] = 0;
    *(undefined4 *)(puVar6 + 0x2d) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x16c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x174) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x17c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x184) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x18c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x19c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1a4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1ac) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1b4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1bc) = 0x3f800000;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3f] = 0;
    puVar6[0x40] = 0;
    puVar6[0x41] = 0;
    puVar6[0x42] = 0;
    puVar6[0x43] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FUpsampleCapsuleShadowParameters> @ 1447065d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FUpsampleCapsuleShadowParameters * __thiscall
FRDGAllocator::Alloc<FUpsampleCapsuleShadowParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FUpsampleCapsuleShadowParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1d0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FUpsampleCapsuleShadowParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFUpsampleCapsuleShadowParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 0xd) = 1;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xe] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x16] = 0;
    puVar6[0x18] = 0;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    *(undefined1 *)(puVar6 + 0x19) = 1;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x1a));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FUpsampleCapsuleShadowParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FUpsampleCapsuleShadowParameters *)(puVar6 + 2);
}

// Alloc<FHairStrandsBookmarkParameters> @ 1447e7b00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FHairStrandsBookmarkParameters * __thiscall
FRDGAllocator::Alloc<FHairStrandsBookmarkParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FHairStrandsBookmarkParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0xb0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FHairStrandsBookmarkParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &___7__TObject_UFHairStrandsBookmarkParameters___FRDGAllocator__6B_;
    puVar6[5] = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    *(undefined4 *)(puVar6 + 3) = 0xffffffff;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FHairStrandsBookmarkParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FHairStrandsBookmarkParameters *)(puVar6 + 1);
}

// Alloc<FDecalVisibilityTaskData,FScene_const_&,TArrayView<FViewInfo_const_,int>_&,bool_const_&,bool_const_&> @ 1447e7e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FDecalVisibilityTaskData * __thiscall
FRDGAllocator::
Alloc<FDecalVisibilityTaskData,FScene_const_&,TArrayView<FViewInfo_const_,int>_&,bool_const_&,bool_const_&>
          (FRDGAllocator *this,FScene *param_1,TArrayView<FViewInfo_const_,int> *param_2,
          bool *param_3,bool *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  FDecalVisibilityTaskData *pFVar8;
  FViewInfo *pFVar9;
  FViewInfo *pFVar10;
  undefined8 *local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  puVar7 = FMemStackBase::Alloc(&this->MemStack,0x20,0x10);
  if (puVar7 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FDecalVisibilityTaskData *)(*pcVar3)();
      return pFVar8;
    }
  }
  else {
    *puVar7 = &___7__TObject_VFDecalVisibilityTaskData___FRDGAllocator__6B_;
    piVar1 = (int *)((longlong)puVar7 + 0x1c);
    local_48 = *(undefined4 *)&param_2->DataPtr;
    uStack_44 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    uVar4 = param_2->ArrayNum;
    uStack_3c = *(undefined4 *)&param_2->field_0xc;
    bVar5 = *param_4;
    *(bool *)(puVar7 + 1) = *param_3;
    *(bool *)((longlong)puVar7 + 9) = bVar5;
    puVar7[2] = 0;
    *(undefined4 *)(puVar7 + 3) = 0;
    *piVar1 = 0;
    uStack_40 = uVar4;
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uVar4;
    uStack_2c = uStack_3c;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (0 < (int)uVar4) {
      UE::Core::Private::
      ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FDecalVisibilityViewPacket>_>
                (0x88,8,uVar4,(ForElementType<FDecalVisibilityViewPacket> *)(puVar7 + 2),0,piVar1);
    }
    pFVar10 = (FViewInfo *)CONCAT44(uStack_44,local_48);
    pFVar9 = pFVar10 + (int)uVar4;
    for (; pFVar10 != pFVar9; pFVar10 = pFVar10 + 1) {
      iVar6 = *(int *)(puVar7 + 3);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FDecalVisibilityViewPacket>_>
                          (0x888,(ForElementType<FDecalVisibilityViewPacket> *)(puVar7 + 2),piVar1);
      }
      *(int *)(puVar7 + 3) = iVar6 + 1;
      FDecalVisibilityViewPacket::FDecalVisibilityViewPacket
                ((FDecalVisibilityViewPacket *)((longlong)iVar6 * 0x88 + puVar7[2]),
                 (FDecalVisibilityTaskData *)(puVar7 + 1),param_1,pFVar10);
    }
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_58[0] = puVar7;
  if (((pFVar2 <= (FScriptContainerElement *)local_58) &&
      ((FScriptContainerElement *)local_58 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FDecalVisibilityTaskData *)(*pcVar3)();
    return pFVar8;
  }
  iVar6 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar6 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_58[0];
  return (FDecalVisibilityTaskData *)(puVar7 + 1);
}

// Alloc<FFogPassParameters> @ 14484af70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FFogPassParameters * __thiscall FRDGAllocator::Alloc<FFogPassParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FFogPassParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x230,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FFogPassParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFFogPassParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[0xe] = 0;
    *(undefined4 *)(puVar6 + 0xf) = 0;
    puVar6[0x14] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1c] = 0;
    *(undefined4 *)(puVar6 + 0x1d) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xf4) = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined4 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xec) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xfc) = 0x3f800000;
    *(undefined1 *)(puVar6 + 0x25) = 1;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x26));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FFogPassParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FFogPassParameters *)(puVar6 + 2);
}

// Alloc<FFogUniformParameters> @ 14484b140

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FFogUniformParameters * __thiscall FRDGAllocator::Alloc<FFogUniformParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FFogUniformParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0xe0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FFogUniformParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined8 *)((longlong)puVar6 + 0x1c) = 0x3f800000;
    *puVar6 = &___7__TObject_VFFogUniformParameters___FRDGAllocator__6B_;
    puVar6[2] = 0;
    *(undefined4 *)(puVar6 + 3) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x74) = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x2c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x3c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x5c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x6c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FFogUniformParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FFogUniformParameters *)(puVar6 + 2);
}

// Alloc<FObjectCullParameters> @ 14484b2d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FObjectCullParameters * __thiscall FRDGAllocator::Alloc<FObjectCullParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FObjectCullParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x440,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FObjectCullParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFObjectCullParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 0x2d) = 1;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    puVar6[0x36] = 0;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3d] = 0;
    puVar6[0x3e] = 0;
    puVar6[0x40] = 0;
    puVar6[0x41] = 0;
    puVar6[0x42] = 0;
    puVar6[0x43] = 0;
    puVar6[0x44] = 0;
    puVar6[0x45] = 0;
    puVar6[0x46] = 0;
    puVar6[0x47] = 0;
    puVar6[0x48] = 0;
    puVar6[0x49] = 0;
    puVar6[0x62] = 0;
    puVar6[100] = 0;
    puVar6[0x66] = 0;
    *(undefined1 *)(puVar6 + 99) = 1;
    *(undefined1 *)(puVar6 + 0x65) = 1;
    *(undefined4 *)(puVar6 + 0x67) = 4;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x68));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FObjectCullParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FObjectCullParameters *)(puVar6 + 2);
}

// Alloc<FComputeCulledTilesStartOffsetCS::FParameters> @ 14484b530

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FComputeCulledTilesStartOffsetCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x180,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FComputeCulledTilesStartOffsetCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2e] = 0;
    *(undefined1 *)(puVar6 + 0x2d) = 1;
    *(undefined1 *)(puVar6 + 0x2f) = 1;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FConeTraceScreenGridGlobalOcclusionCS::FParameters> @ 14484b6e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FConeTraceScreenGridGlobalOcclusionCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  FParameters *pFVar8;
  longlong lVar9;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x450,0x10);
  puVar7 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FParameters *)(*pcVar3)();
      return pFVar8;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFParameters_FConeTraceScreenGridGlobalOcclusionCS___FRDGAllocator__6B_
    ;
    *(undefined1 *)(puVar6 + 3) = 1;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    FGlobalDistanceFieldParameters2::FGlobalDistanceFieldParameters2
              ((FGlobalDistanceFieldParameters2 *)(puVar6 + 0x2c));
    puVar7 = puVar6 + 0x6e;
    lVar9 = 9;
    do {
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0x3f800000;
      puVar7 = puVar7 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    puVar6[0x82] = 0;
    puVar6[0x84] = 0;
    *(undefined1 *)(puVar6 + 0x85) = 1;
    puVar6[0x86] = 0;
    *(undefined1 *)(puVar6 + 0x87) = 1;
    puVar7 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar7;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FParameters *)(*pcVar3)();
      return pFVar8;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar7 + 2);
}

// Alloc<FConeTraceScreenGridObjectOcclusionCS::FParameters> @ 14484b8a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FConeTraceScreenGridObjectOcclusionCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  FParameters *pFVar8;
  longlong lVar9;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x4e0,0x10);
  puVar7 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FParameters *)(*pcVar3)();
      return pFVar8;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFParameters_FConeTraceScreenGridObjectOcclusionCS___FRDGAllocator__6B_
    ;
    *(undefined1 *)(puVar6 + 3) = 1;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    FGlobalDistanceFieldParameters2::FGlobalDistanceFieldParameters2
              ((FGlobalDistanceFieldParameters2 *)(puVar6 + 0x3e));
    puVar7 = puVar6 + 0x80;
    lVar9 = 9;
    do {
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0x3f800000;
      puVar7 = puVar7 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    puVar6[0x94] = 0;
    *(undefined1 *)(puVar6 + 0x95) = 1;
    puVar6[0x96] = 0;
    *(undefined1 *)(puVar6 + 0x97) = 1;
    puVar6[0x99] = 0;
    *(undefined4 *)(puVar6 + 0x9a) = 4;
    puVar7 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar7;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FParameters *)(*pcVar3)();
      return pFVar8;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar7 + 2);
}

// Alloc<FCullObjectsForViewCS::FParameters> @ 14484bae0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FCullObjectsForViewCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0xf0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0xd) = 1;
    *puVar6 = &___7__TObject_VFParameters_FCullObjectsForViewCS___FRDGAllocator__6B_;
    puVar6[0xc] = 0;
    puVar6[0x10] = 0;
    *(undefined4 *)(puVar6 + 0x11) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x8c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x94) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x9c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xa4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xac) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xb4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xbc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xcc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xd4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xdc) = 0x3f800000;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FDistanceFieldShadowingCS::FParameters> @ 14484bc90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FDistanceFieldShadowingCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x300,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 5) = 1;
    *puVar6 = &___7__TObject_VFParameters_FDistanceFieldShadowingCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0x10] = 0;
    *(undefined4 *)(puVar6 + 0x11) = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    puVar6[0x48] = 0;
    puVar6[0x49] = 0;
    puVar6[0x55] = 0;
    puVar6[0x56] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    *(undefined4 *)((longlong)puVar6 + 0x8c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FUpdateHistoryDepthRejectionPS::FParameters> @ 14484bec0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FUpdateHistoryDepthRejectionPS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x210,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FUpdateHistoryDepthRejectionPS___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x12] = 0;
    *(undefined4 *)(puVar6 + 0x13) = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    *(undefined4 *)(puVar6 + 0x1d) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xf4) = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined4 *)((longlong)puVar6 + 0x9c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xec) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xfc) = 0x3f800000;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x22));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FVisualizeMeshDistanceFieldCS::FParameters> @ 14484c070

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FVisualizeMeshDistanceFieldCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x3b0,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFParameters_FVisualizeMeshDistanceFieldCS___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 3) = 1;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    FGlobalDistanceFieldParameters2::FGlobalDistanceFieldParameters2
              ((FGlobalDistanceFieldParameters2 *)(puVar6 + 0x2e));
    puVar6[0x70] = 0;
    *(undefined1 *)(puVar6 + 0x71) = 1;
    puVar6[0x72] = 0;
    *(undefined1 *)(puVar6 + 0x73) = 1;
    puVar6[0x74] = 0;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar8 + 2);
}

// Alloc<FShadowMeshSDFObjectCull> @ 14484c230

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FShadowMeshSDFObjectCull * __thiscall
FRDGAllocator::Alloc<FShadowMeshSDFObjectCull>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FShadowMeshSDFObjectCull *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x2f0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FShadowMeshSDFObjectCull *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFShadowMeshSDFObjectCull___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 0x19) = 1;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0x18] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x3c] = 0;
    *(undefined4 *)(puVar6 + 0x3d) = 4;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x3e));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FShadowMeshSDFObjectCull *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FShadowMeshSDFObjectCull *)(puVar6 + 2);
}

// Alloc<FUploadDataSourceAdapterDynamicPrimitives,TArray<FGPUScenePrimitiveCollector::FPrimitiveData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,int_const_&,int_const_&,unsigned_int_&,unsigned_int_&> @ 1448dc850

FUploadDataSourceAdapterDynamicPrimitives * __thiscall
FRDGAllocator::
Alloc<FUploadDataSourceAdapterDynamicPrimitives,TArray<FGPUScenePrimitiveCollector::FPrimitiveData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,int_const_&,int_const_&,unsigned_int_&,unsigned_int_&>
          (FRDGAllocator *this,
          TArray<FGPUScenePrimitiveCollector::FPrimitiveData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_1,int *param_2,int *param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  FUploadDataSourceAdapterDynamicPrimitives *pFVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *local_28 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x30,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FUploadDataSourceAdapterDynamicPrimitives *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &___7__TObject_UFUploadDataSourceAdapterDynamicPrimitives___FRDGAllocator__6B_;
    piVar1 = (int *)(puVar6 + 5);
    iVar10 = *param_3;
    uVar8 = *param_5;
    uVar5 = *param_4;
    *(int *)(puVar6 + 2) = *param_2;
    *(int *)((longlong)puVar6 + 0x14) = iVar10;
    *(int *)((longlong)puVar6 + 0x2c) = 0;
    puVar6[1] = param_1;
    *(uint *)(puVar6 + 3) = uVar5;
    *(uint *)((longlong)puVar6 + 0x1c) = uVar8;
    puVar6[4] = 0;
    *piVar1 = 0;
    uVar8 = param_1->ArrayNum;
    if ((int)uVar8 < 1) {
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
    }
    else {
      UE::Core::Private::
      ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                (4,4,uVar8,(ForElementType<unsigned_int> *)(puVar6 + 4),piVar1,
                 (int *)((longlong)puVar6 + 0x2c));
    }
    uVar8 = 0;
    if (0 < *(int *)(puVar6 + 5)) {
      lVar9 = 0;
      do {
        iVar10 = *(int *)(puVar6 + 2) + uVar8;
        uVar5 = 0;
        if ((int)uVar8 < *piVar1) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FUploadDataSourceAdapterDynamicPrimitives *)(*pcVar3)();
          return pFVar7;
        }
        uVar8 = uVar8 + 1;
        *(int *)(lVar9 + puVar6[4]) = iVar10;
        lVar9 = lVar9 + 4;
      } while ((int)uVar8 < *(int *)(puVar6 + 5));
    }
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_28[0] = puVar6;
  if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FUploadDataSourceAdapterDynamicPrimitives *)(*pcVar3)();
    return pFVar7;
  }
  iVar10 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar10 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_28[0];
  return (FUploadDataSourceAdapterDynamicPrimitives *)(puVar6 + 1);
}

// Alloc<FUploadDataSourceAdapterScenePrimitives,FScene_&,unsigned_int_&,TArray<FPersistentPrimitiveIndex,TSizedDefaultAllocator<32>_>,TArray<enum_EPrimitiveDirtyState,TSizedDefaultAllocator<32>_>_> @ 1448dca90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FUploadDataSourceAdapterScenePrimitives * __thiscall
FRDGAllocator::
Alloc<FUploadDataSourceAdapterScenePrimitives,FScene_&,unsigned_int_&,TArray<FPersistentPrimitiveIndex,TSizedDefaultAllocator<32>_>,TArray<enum_EPrimitiveDirtyState,TSizedDefaultAllocator<32>_>_>
          (FRDGAllocator *this,FScene *param_1,uint *param_2,
          TArray<FPersistentPrimitiveIndex,TSizedDefaultAllocator<32>_> *param_3,
          TArray<EPrimitiveDirtyState,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  FUploadDataSourceAdapterScenePrimitives *pFVar12;
  undefined8 *local_18 [2];
  
  puVar11 = FMemStackBase::Alloc(&this->MemStack,0x38,0x10);
  if (puVar11 == (undefined8 *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FUploadDataSourceAdapterScenePrimitives *)(*pcVar8)();
      return pFVar12;
    }
  }
  else {
    *puVar11 = &___7__TObject_UFUploadDataSourceAdapterScenePrimitives___FRDGAllocator__6B_;
    pFVar6 = (param_4->AllocatorInstance).Data;
    (param_4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar10 = param_4->ArrayNum;
    iVar2 = param_4->ArrayMax;
    param_4->ArrayNum = 0;
    param_4->ArrayMax = 0;
    pFVar7 = (param_3->AllocatorInstance).Data;
    (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar3 = param_3->ArrayNum;
    iVar4 = param_3->ArrayMax;
    param_3->ArrayNum = 0;
    param_3->ArrayMax = 0;
    uVar5 = *param_2;
    puVar11[1] = param_1;
    *(uint *)(puVar11 + 2) = uVar5;
    puVar11[3] = pFVar7;
    *(int *)(puVar11 + 4) = iVar3;
    *(int *)((longlong)puVar11 + 0x24) = iVar4;
    puVar11[5] = pFVar6;
    *(int *)(puVar11 + 6) = iVar10;
    *(int *)((longlong)puVar11 + 0x34) = iVar2;
  }
  pFVar6 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar11;
  if ((pFVar6 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar6 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FUploadDataSourceAdapterScenePrimitives *)(*pcVar8)();
      return pFVar12;
    }
  }
  iVar10 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar10 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_18[0];
  return (FUploadDataSourceAdapterScenePrimitives *)(puVar11 + 1);
}

// Alloc<UE::RendererPrivateUtils::Implementation::TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>,int_&> @ 1448dcc20

TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
* __thiscall
FRDGAllocator::
Alloc<UE::RendererPrivateUtils::Implementation::TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>,int_&>
          (FRDGAllocator *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
  *pTVar8;
  undefined8 *local_18 [2];
  
  puVar7 = FMemStackBase::Alloc(&this->MemStack,0x38,0x10);
  if (puVar7 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                *)(*pcVar4)();
      return pTVar8;
    }
  }
  else {
    *puVar7 = &
              ___7__TObject_V__TAsyncBufferScatterUploader_UFLightSceneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__00_Implementation_RendererPrivateUtils_UE___FRDGAllocator__6B_
    ;
    uVar2 = *param_1;
    puVar7[1] = &
                ___7__TBufferScatterUploader_UFLightSceneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__00_Implementation_RendererPrivateUtils_UE__6B_
    ;
    puVar7[2] = 0;
    ((ForAnyElementType *)(puVar7 + 3))->Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(puVar7 + 4) = 0;
    *(int *)((longlong)puVar7 + 0x24) = 0;
    puVar7[5] = 0;
    *(undefined4 *)(puVar7 + 6) = 0;
    *(int *)((longlong)puVar7 + 0x34) = 0;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (0 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,4,uVar2,(ForAnyElementType *)(puVar7 + 3),0,(int *)((longlong)puVar7 + 0x24));
    }
    if (*(int *)((longlong)puVar7 + 0x34) < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar2,(ForAnyElementType *)(puVar7 + 5),*(int *)(puVar7 + 6),
                 (int *)((longlong)puVar7 + 0x34));
    }
    puVar7[1] = &
                ___7__TAsyncBufferScatterUploader_UFLightSceneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__00_Implementation_RendererPrivateUtils_UE__6B_
    ;
  }
  pFVar3 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar7;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                *)(*pcVar4)();
      return pTVar8;
    }
  }
  iVar6 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar6 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
  return (TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
          *)(puVar7 + 1);
}

// Alloc<FAllocatePagesCS::FParameters> @ 1448dcdf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall FRDGAllocator::Alloc<FAllocatePagesCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x230,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)(puVar6 + 3) = 4;
    *puVar6 = &___7__TObject_VFParameters_FAllocatePagesCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x1e] = 0;
    *(undefined4 *)(puVar6 + 0x1f) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xfc) = 0x3f800000;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FGenerateConservativeDepthBufferCS::FParameters> @ 1448dcfb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FGenerateConservativeDepthBufferCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x110,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FGenerateConservativeDepthBufferCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x16] = 0;
    *(undefined4 *)(puVar6 + 0x17) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xc4) = 0;
    puVar6[0x1e] = 0;
    *(undefined4 *)(puVar6 + 0x1f) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xbc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xcc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xfc) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FHairEnvironmentLightingPS::FParameters> @ 1449777f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FHairEnvironmentLightingPS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x500,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFParameters_FHairEnvironmentLightingPS___FRDGAllocator__6B_;
    *(undefined4 *)(puVar6 + 3) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = 0x3f800000;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    LumenRadianceCache::FRadianceCacheInterpolationParameters::FRadianceCacheInterpolationParameters
              ((FRadianceCacheInterpolationParameters *)(puVar6 + 0x12));
    puVar6[0x42] = 0;
    *(undefined1 *)(puVar6 + 0x43) = 1;
    puVar6[0x44] = 0;
    puVar6[0x45] = 0;
    puVar6[0x47] = 0;
    puVar6[0x48] = 0;
    puVar6[0x49] = 0;
    puVar6[0x4a] = 0;
    puVar6[0x4c] = 0;
    *(undefined1 *)(puVar6 + 0x4d) = 1;
    puVar6[0x54] = 0;
    puVar6[0x55] = 0;
    puVar6[0x56] = 0;
    puVar6[0x57] = 0;
    puVar6[0x58] = 0;
    puVar6[0x59] = 0;
    puVar6[0x5a] = 0;
    puVar6[0x5e] = 0;
    puVar6[0x5f] = 0;
    puVar6[0x62] = 0;
    *(undefined4 *)(puVar6 + 99) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x31c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x324) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x32c) = 0x3f800000;
    puVar6[0x6a] = 0;
    *(undefined4 *)(puVar6 + 0x6b) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x35c) = 0x3f800000;
    puVar6[0x6e] = 0;
    puVar6[0x6f] = 0;
    puVar6[0x70] = 0;
    puVar6[0x71] = 0;
    puVar6[0x72] = 0;
    *(undefined1 *)(puVar6 + 0x73) = 1;
    puVar6[0x74] = 0;
    *(undefined1 *)(puVar6 + 0x75) = 1;
    puVar6[0x76] = 0;
    *(undefined1 *)(puVar6 + 0x77) = 1;
    puVar6[0x78] = 0;
    *(undefined1 *)(puVar6 + 0x79) = 1;
    puVar6[0x7a] = 0;
    *(undefined1 *)(puVar6 + 0x7b) = 1;
    puVar6[0x7c] = 0;
    *(undefined1 *)(puVar6 + 0x7d) = 1;
    puVar6[0x7e] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x80));
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar8 + 2);
}

// Alloc<FHairStrandsDeepShadowTransmittanceMaskCS::FParameters> @ 144977aa0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FHairStrandsDeepShadowTransmittanceMaskCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x170,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0xd) = 1;
    *puVar6 = &
              ___7__TObject_VFParameters_FHairStrandsDeepShadowTransmittanceMaskCS___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xe] = 0;
    puVar6[0x12] = 0;
    *(undefined4 *)(puVar6 + 0x13) = 0;
    puVar6[0x16] = 0;
    *(undefined4 *)(puVar6 + 0x17) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xc4) = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    *(undefined4 *)((longlong)puVar6 + 0x9c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xbc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xcc) = 0x3f800000;
    *(undefined4 *)(puVar6 + 0x2d) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FHairStrandsVoxelTransmittanceMaskCS::FParameters> @ 144977c70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FHairStrandsVoxelTransmittanceMaskCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x210,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0xd) = 1;
    *puVar6 = &___7__TObject_VFParameters_FHairStrandsVoxelTransmittanceMaskCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x12] = 0;
    puVar6[0x14] = 0;
    puVar6[0x16] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x26] = 0;
    *(undefined4 *)(puVar6 + 0x27) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x144) = 0;
    puVar6[0x2e] = 0;
    *(undefined4 *)(puVar6 + 0x2f) = 0;
    puVar6[0x34] = 0;
    *(undefined4 *)(puVar6 + 0x35) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1b4) = 0;
    puVar6[0x39] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3e] = 0;
    puVar6[0x40] = 0;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    *(undefined8 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x14c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x17c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1ac) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x1bc) = 0x3f800000;
    *(undefined1 *)(puVar6 + 0x3d) = 1;
    *(undefined1 *)(puVar6 + 0x3f) = 1;
    *(undefined4 *)(puVar6 + 0x41) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FVisiblityRasterComputeBinningCS::FParameters> @ 144977ee0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FVisiblityRasterComputeBinningCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x2b0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)(puVar6 + 0x44) = 4;
    *puVar6 = &___7__TObject_VFParameters_FVisiblityRasterComputeBinningCS___FRDGAllocator__6B_;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3d] = 0;
    puVar6[0x3e] = 0;
    puVar6[0x3f] = 0;
    puVar6[0x41] = 0;
    puVar6[0x42] = 0;
    puVar6[0x43] = 0;
    puVar6[0x46] = 0;
    puVar6[0x47] = 0;
    puVar6[0x48] = 0;
    puVar6[0x49] = 0;
    puVar6[0x4a] = 0;
    puVar6[0x4b] = 0;
    puVar6[0x4c] = 0;
    puVar6[0x4e] = 0;
    *(undefined1 *)(puVar6 + 0x4f) = 1;
    puVar6[0x50] = 0;
    *(undefined4 *)(puVar6 + 0x51) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x28c) = 0;
    puVar6[0x54] = 0;
    puVar6[0x55] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FLumenTranslucencyLightingUniforms> @ 144a4ed50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLumenTranslucencyLightingUniforms * __thiscall
FRDGAllocator::Alloc<FLumenTranslucencyLightingUniforms>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FLumenTranslucencyLightingUniforms *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x210,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FLumenTranslucencyLightingUniforms *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined8 *)((longlong)puVar6 + 0xac) = 0x3f800000;
    *puVar6 = &___7__TObject_VFLumenTranslucencyLightingUniforms___FRDGAllocator__6B_;
    puVar6[0x14] = 0;
    *(undefined4 *)(puVar6 + 0x15) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xb4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xbc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xcc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xd4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xdc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xe4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xec) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xf4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xfc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x104) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x10c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x114) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x11c) = 0x3f800000;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x124) = 0;
    *(undefined8 *)((longlong)puVar6 + 300) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x144) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x14c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x154) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x15c) = 0x3f800000;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3c] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FLumenTranslucencyLightingUniforms *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FLumenTranslucencyLightingUniforms *)(puVar6 + 2);
}

// Alloc<FRenderSingleScatteringWithLiveShadingCS<0>::FParameters> @ 144a4efa0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRenderSingleScatteringWithLiveShadingCS<0>::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x5b0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    *(undefined1 *)(puVar6 + 0x19) = 1;
    *(undefined1 *)(puVar6 + 0x1d) = 1;
    *puVar6 = &
              ___7__TObject_VFParameters___FRenderSingleScatteringWithLiveShadingCS__0A____FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    puVar6[0xe] = 0;
    puVar6[0x12] = 0;
    puVar6[0x18] = 0;
    puVar6[0x1c] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0x10] = 0;
    puVar6[0x26] = 0;
    *(undefined4 *)(puVar6 + 0x27) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x144) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x154) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x14c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x15c) = 0x3f800000;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    puVar6[0x69] = 0;
    puVar6[0x6a] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x164) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x16c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x174) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x17c) = 0x3f800000;
    puVar6[0x74] = 0;
    *(undefined4 *)(puVar6 + 0x75) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x3ac) = 0x3f800000;
    puVar6[0x76] = 0;
    *(undefined1 *)(puVar6 + 0x77) = 1;
    puVar6[0x7a] = 0;
    *(undefined1 *)(puVar6 + 0x7b) = 1;
    puVar6[0x7c] = 0;
    *(undefined1 *)(puVar6 + 0x7d) = 1;
    puVar6[0x7e] = 0;
    *(undefined1 *)(puVar6 + 0x7f) = 1;
    puVar6[0x80] = 0;
    *(undefined1 *)(puVar6 + 0x81) = 1;
    puVar6[0x84] = 0;
    *(undefined1 *)(puVar6 + 0x85) = 1;
    puVar6[0xaa] = 0;
    *(undefined4 *)(puVar6 + 0xab) = 4;
    puVar6[0xa0] = 0;
    puVar6[0xac] = 0;
    puVar6[0xb2] = 0;
    puVar6[0xb3] = 0;
    puVar6[0xb4] = 0;
    puVar6[0xb5] = 0;
    puVar6[0xa4] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRenderCurveBinningCS::FParameters> @ 144a4f260

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRenderCurveBinningCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1b0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FRenderCurveBinningCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x18] = 0;
    *(undefined4 *)(puVar6 + 0x19) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xd4) = 0;
    puVar6[0x20] = 0;
    *(undefined4 *)(puVar6 + 0x21) = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined8 *)((longlong)puVar6 + 0xcc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xdc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x10c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRenderCurveClusterCullingCS::FParameters> @ 144a4f450

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRenderCurveClusterCullingCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1a0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FRenderCurveClusterCullingCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x18] = 0;
    *(undefined4 *)(puVar6 + 0x19) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xd4) = 0;
    puVar6[0x20] = 0;
    *(undefined4 *)(puVar6 + 0x21) = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined8 *)((longlong)puVar6 + 0xcc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xdc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x10c) = 0x3f800000;
    *(undefined4 *)(puVar6 + 0x32) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRenderCurveCompactionCS::FParameters> @ 144a4f630

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRenderCurveCompactionCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1c0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FRenderCurveCompactionCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x18] = 0;
    *(undefined4 *)(puVar6 + 0x19) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xd4) = 0;
    puVar6[0x20] = 0;
    *(undefined4 *)(puVar6 + 0x21) = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    puVar6[0x36] = 0;
    puVar6[0x37] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined8 *)((longlong)puVar6 + 0xcc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xdc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x10c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRenderCurveDebugDrawingCS::FParameters> @ 144a4f830

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRenderCurveDebugDrawingCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1e0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 5) = 1;
    *puVar6 = &___7__TObject_VFParameters_FRenderCurveDebugDrawingCS___FRDGAllocator__6B_;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x1a] = 0;
    *(undefined4 *)(puVar6 + 0x1b) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xe4) = 0;
    puVar6[0x22] = 0;
    *(undefined4 *)(puVar6 + 0x23) = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    puVar6[0x36] = 0;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined8 *)((longlong)puVar6 + 0xdc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xec) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x11c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRenderCurveInstanceCullingCS::FParameters> @ 144a4fa40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRenderCurveInstanceCullingCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x180,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FRenderCurveInstanceCullingCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x18] = 0;
    *(undefined4 *)(puVar6 + 0x19) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xd4) = 0;
    puVar6[0x20] = 0;
    *(undefined4 *)(puVar6 + 0x21) = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined8 *)((longlong)puVar6 + 0xcc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xdc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x10c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRenderCurveSWRasterizerCS::FParameters> @ 144a4fc00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRenderCurveSWRasterizerCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1c0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FRenderCurveSWRasterizerCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x18] = 0;
    *(undefined4 *)(puVar6 + 0x19) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xd4) = 0;
    puVar6[0x20] = 0;
    *(undefined4 *)(puVar6 + 0x21) = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    puVar6[0x36] = 0;
    puVar6[0x37] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined8 *)((longlong)puVar6 + 0xcc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xdc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x10c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRenderCurveSceneTileDepthCS::FParameters> @ 144a4fe00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRenderCurveSceneTileDepthCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x170,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FRenderCurveSceneTileDepthCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x18] = 0;
    *(undefined4 *)(puVar6 + 0x19) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xd4) = 0;
    puVar6[0x20] = 0;
    *(undefined4 *)(puVar6 + 0x21) = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined8 *)((longlong)puVar6 + 0xcc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xdc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x10c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRenderLightingCacheWithLiveShadingCS::FParameters> @ 144a4ffc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRenderLightingCacheWithLiveShadingCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x530,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    *puVar6 = &___7__TObject_VFParameters_FRenderLightingCacheWithLiveShadingCS___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    puVar6[0xe] = 0;
    puVar6[0x12] = 0;
    puVar6[0x16] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0x20] = 0;
    *(undefined4 *)(puVar6 + 0x21) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x114) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x124) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x10c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x11c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 300) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x144) = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[99] = 0;
    puVar6[100] = 0;
    *(undefined4 *)((longlong)puVar6 + 0x14c) = 0x3f800000;
    puVar6[0x6e] = 0;
    *(undefined4 *)(puVar6 + 0x6f) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x37c) = 0x3f800000;
    puVar6[0x70] = 0;
    *(undefined1 *)(puVar6 + 0x71) = 1;
    puVar6[0x74] = 0;
    *(undefined1 *)(puVar6 + 0x75) = 1;
    puVar6[0x76] = 0;
    *(undefined1 *)(puVar6 + 0x77) = 1;
    puVar6[0x78] = 0;
    *(undefined1 *)(puVar6 + 0x79) = 1;
    puVar6[0x7a] = 0;
    puVar6[0x9a] = 0;
    puVar6[0xa0] = 0;
    puVar6[0xa4] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRenderLightingCacheWithPreshadingRGS::FParameters> @ 144a50230

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRenderLightingCacheWithPreshadingRGS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x420,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    *puVar6 = &___7__TObject_VFParameters_FRenderLightingCacheWithPreshadingRGS___FRDGAllocator__6B_
    ;
    puVar6[4] = 0;
    puVar6[0x12] = 0;
    puVar6[0x16] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[2] = 0;
    puVar6[0x20] = 0;
    *(undefined4 *)(puVar6 + 0x21) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x114) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x124) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x10c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x11c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 300) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x144) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x14c) = 0x3f800000;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[99] = 0;
    puVar6[100] = 0;
    puVar6[0x6e] = 0;
    *(undefined4 *)(puVar6 + 0x6f) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x37c) = 0x3f800000;
    puVar6[0x70] = 0;
    *(undefined1 *)(puVar6 + 0x71) = 1;
    puVar6[0x74] = 0;
    *(undefined1 *)(puVar6 + 0x75) = 1;
    puVar6[0x7a] = 0;
    *(undefined1 *)(puVar6 + 0x7b) = 1;
    puVar6[0x76] = 0;
    puVar6[0x80] = 0;
    puVar6[0x82] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRenderSingleScatteringWithPreshadingRGS::FParameters> @ 144a50480

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRenderSingleScatteringWithPreshadingRGS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x420,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    *puVar6 = &
              ___7__TObject_VFParameters_FRenderSingleScatteringWithPreshadingRGS___FRDGAllocator__6B_
    ;
    puVar6[4] = 0;
    puVar6[0x12] = 0;
    puVar6[0x16] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[2] = 0;
    puVar6[0x20] = 0;
    *(undefined4 *)(puVar6 + 0x21) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x114) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x124) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x10c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x11c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 300) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x144) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x14c) = 0x3f800000;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[99] = 0;
    puVar6[100] = 0;
    puVar6[0x6e] = 0;
    *(undefined4 *)(puVar6 + 0x6f) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x37c) = 0x3f800000;
    puVar6[0x70] = 0;
    *(undefined1 *)(puVar6 + 0x71) = 1;
    puVar6[0x74] = 0;
    *(undefined1 *)(puVar6 + 0x75) = 1;
    puVar6[0x76] = 0;
    *(undefined1 *)(puVar6 + 0x77) = 1;
    puVar6[0x78] = 0;
    *(undefined1 *)(puVar6 + 0x79) = 1;
    puVar6[0x7e] = 0;
    puVar6[0x82] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRenderVolumetricShadowMapForLightWithLiveShadingCS::FParameters> @ 144a506e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRenderVolumetricShadowMapForLightWithLiveShadingCS::FParameters>
          (FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x500,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    *puVar6 = &
              ___7__TObject_VFParameters_FRenderVolumetricShadowMapForLightWithLiveShadingCS___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    puVar6[0xe] = 0;
    puVar6[0x10] = 0;
    puVar6[0x12] = 0;
    *(undefined4 *)(puVar6 + 0x13) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x9c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xa4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xac) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xb4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xbc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xcc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xd4) = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    *(undefined8 *)((longlong)puVar6 + 0xdc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xe4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xec) = 0x3f800000;
    puVar6[0x9d] = 0;
    puVar6[0x9e] = 0;
    puVar6[0x9f] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRenderCurveHWRasterizerParameters> @ 144a508d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRenderCurveHWRasterizerParameters * __thiscall
FRDGAllocator::Alloc<FRenderCurveHWRasterizerParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FRenderCurveHWRasterizerParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x3e0,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRenderCurveHWRasterizerParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFRenderCurveHWRasterizerParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 3) = 1;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x18] = 0;
    *(undefined4 *)(puVar6 + 0x19) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xcc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xd4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xdc) = 0x3f800000;
    puVar6[0x20] = 0;
    *(undefined4 *)(puVar6 + 0x21) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x10c) = 0x3f800000;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    FRenderCurveHWRasterizerPS::FParameters::FParameters((FParameters *)(puVar6 + 0x30));
    puVar6[0x7a] = 0;
    *(undefined4 *)(puVar6 + 0x7b) = 4;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRenderCurveHWRasterizerParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FRenderCurveHWRasterizerParameters *)(puVar8 + 2);
}

// Alloc<FAmbientCubemapCompositeParameters> @ 144aee860

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FAmbientCubemapCompositeParameters * __thiscall
FRDGAllocator::Alloc<FAmbientCubemapCompositeParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FAmbientCubemapCompositeParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x210,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FAmbientCubemapCompositeParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFAmbientCubemapCompositeParameters___FRDGAllocator__6B_;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[8] = 0;
    *(undefined1 *)(puVar6 + 9) = 1;
    puVar6[0xc] = 0;
    *(undefined4 *)(puVar6 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x6c) = 0x3f800000;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    *(undefined1 *)(puVar6 + 0x1b) = 1;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x1c));
    puVar6[0x3c] = 0;
    *(undefined1 *)(puVar6 + 0x3d) = 1;
    puVar6[0x3e] = 0;
    puVar6[0x40] = 0;
    *(undefined4 *)(puVar6 + 0x41) = 4;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FAmbientCubemapCompositeParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FAmbientCubemapCompositeParameters *)(puVar8 + 2);
}

// Alloc<FBeerShadowMapUniformBufferParameters> @ 144aeea40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FBeerShadowMapUniformBufferParameters * __thiscall
FRDGAllocator::Alloc<FBeerShadowMapUniformBufferParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FBeerShadowMapUniformBufferParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x2f0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FBeerShadowMapUniformBufferParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined8 *)((longlong)puVar6 + 0x19c) = 0x3f800000;
    *puVar6 = &___7__TObject_VFBeerShadowMapUniformBufferParameters___FRDGAllocator__6B_;
    puVar6[0x32] = 0;
    *(undefined4 *)(puVar6 + 0x33) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1a4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1ac) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1b4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1bc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1cc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1d4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1dc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1e4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1ec) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 500) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1fc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x204) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x20c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x214) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x21c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x224) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x22c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x234) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x23c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x244) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x24c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x254) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x25c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x264) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x26c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x274) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x27c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x284) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x28c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x294) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x29c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x2a4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x2ac) = 0x3f800000;
    puVar6[0x5a] = 0;
    puVar6[0x5b] = 0;
    puVar6[0x5c] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FBeerShadowMapUniformBufferParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FBeerShadowMapUniformBufferParameters *)(puVar6 + 2);
}

// Alloc<FDiffuseIndirectCompositeParameters> @ 144aeecc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDiffuseIndirectCompositeParameters * __thiscall
FRDGAllocator::Alloc<FDiffuseIndirectCompositeParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FDiffuseIndirectCompositeParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x330,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FDiffuseIndirectCompositeParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[6] = 0;
    *puVar6 = &___7__TObject_VFDiffuseIndirectCompositeParameters___FRDGAllocator__6B_;
    puVar6[7] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x20] = 0;
    *(undefined1 *)(puVar6 + 0x21) = 1;
    puVar6[0x22] = 0;
    *(undefined1 *)(puVar6 + 0x23) = 1;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    *(undefined1 *)(puVar6 + 0x35) = 1;
    puVar6[0x36] = 0;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3d] = 0;
    puVar6[0x3e] = 0;
    puVar6[0x24] = 0;
    *(undefined4 *)(puVar6 + 0x25) = 0;
    *(undefined8 *)((longlong)puVar6 + 300) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x144) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x14c) = 0x3f800000;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x40));
    puVar6[0x60] = 0;
    *(undefined1 *)(puVar6 + 0x61) = 1;
    puVar6[0x62] = 0;
    puVar6[100] = 0;
    *(undefined4 *)(puVar6 + 0x65) = 4;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FDiffuseIndirectCompositeParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FDiffuseIndirectCompositeParameters *)(puVar8 + 2);
}

// Alloc<FRenderLightingCacheWithPreshadingCS::FParameters> @ 144aeef60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRenderLightingCacheWithPreshadingCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x420,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    *puVar6 = &___7__TObject_VFParameters_FRenderLightingCacheWithPreshadingCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[0x10] = 0;
    puVar6[0x14] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0x1e] = 0;
    *(undefined4 *)(puVar6 + 0x1f) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x104) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x114) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xfc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x10c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x11c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x124) = 0;
    *(undefined8 *)((longlong)puVar6 + 300) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x61] = 0;
    puVar6[0x62] = 0;
    puVar6[0x6c] = 0;
    *(undefined4 *)(puVar6 + 0x6d) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x36c) = 0x3f800000;
    puVar6[0x6e] = 0;
    *(undefined1 *)(puVar6 + 0x6f) = 1;
    puVar6[0x72] = 0;
    *(undefined1 *)(puVar6 + 0x73) = 1;
    puVar6[0x74] = 0;
    *(undefined1 *)(puVar6 + 0x75) = 1;
    puVar6[0x76] = 0;
    *(undefined1 *)(puVar6 + 0x77) = 1;
    puVar6[0x7a] = 0;
    *(undefined1 *)(puVar6 + 0x7b) = 1;
    puVar6[0x7e] = 0;
    puVar6[0x83] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRenderSingleScatteringWithPreshadingCS::FParameters> @ 144aef1c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRenderSingleScatteringWithPreshadingCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x460,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    *puVar6 = &
              ___7__TObject_VFParameters_FRenderSingleScatteringWithPreshadingCS___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    puVar6[0x10] = 0;
    puVar6[0x14] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0x1e] = 0;
    *(undefined4 *)(puVar6 + 0x1f) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x104) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x114) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xfc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x10c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x11c) = 0x3f800000;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x61] = 0;
    puVar6[0x62] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x124) = 0;
    *(undefined8 *)((longlong)puVar6 + 300) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
    puVar6[0x6c] = 0;
    *(undefined4 *)(puVar6 + 0x6d) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x36c) = 0x3f800000;
    puVar6[0x6e] = 0;
    *(undefined1 *)(puVar6 + 0x6f) = 1;
    puVar6[0x72] = 0;
    *(undefined1 *)(puVar6 + 0x73) = 1;
    puVar6[0x74] = 0;
    *(undefined1 *)(puVar6 + 0x75) = 1;
    puVar6[0x76] = 0;
    *(undefined1 *)(puVar6 + 0x77) = 1;
    puVar6[0x78] = 0;
    *(undefined1 *)(puVar6 + 0x79) = 1;
    puVar6[0x7c] = 0;
    *(undefined1 *)(puVar6 + 0x7d) = 1;
    puVar6[0x86] = 0;
    *(undefined4 *)(puVar6 + 0x87) = 4;
    puVar6[0x80] = 0;
    puVar6[0x89] = 0;
    puVar6[0x8a] = 0;
    puVar6[0x8b] = 0;
    puVar6[0x84] = 0;
    puVar6[0x85] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FReflectionEnvironmentSkyLightingParameters> @ 144aef460

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReflectionEnvironmentSkyLightingParameters * __thiscall
FRDGAllocator::Alloc<FReflectionEnvironmentSkyLightingParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FReflectionEnvironmentSkyLightingParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x300,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FReflectionEnvironmentSkyLightingParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)((longlong)puVar6 + 0xec) = 0x3f800000;
    *puVar6 = &___7__TObject_VFReflectionEnvironmentSkyLightingParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 0x2d) = 1;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1c] = 0;
    *(undefined4 *)(puVar6 + 0x1d) = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x30] = 0;
    puVar6[0x32] = 0;
    puVar6[0x34] = 0;
    puVar6[0x38] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3e] = 0;
    *(undefined1 *)(puVar6 + 0x2f) = 1;
    *(undefined1 *)(puVar6 + 0x31) = 1;
    *(undefined1 *)(puVar6 + 0x33) = 1;
    *(undefined1 *)(puVar6 + 0x35) = 1;
    *(undefined1 *)(puVar6 + 0x39) = 1;
    *(undefined1 *)(puVar6 + 0x3b) = 1;
    *(undefined4 *)(puVar6 + 0x3f) = 4;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x40));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FReflectionEnvironmentSkyLightingParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FReflectionEnvironmentSkyLightingParameters *)(puVar6 + 2);
}

// Alloc<FLightmapDensityPassUniformParameters> @ 144b81a50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FLightmapDensityPassUniformParameters * __thiscall
FRDGAllocator::Alloc<FLightmapDensityPassUniformParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FLightmapDensityPassUniformParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0xd0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FLightmapDensityPassUniformParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined8 *)((longlong)puVar6 + 0x9c) = 0x3f800000;
    *puVar6 = &___7__TObject_VFLightmapDensityPassUniformParameters___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x12] = 0;
    *(undefined4 *)(puVar6 + 0x13) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xa4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xb4) = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    *(undefined8 *)((longlong)puVar6 + 0xac) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xbc) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FLightmapDensityPassUniformParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FLightmapDensityPassUniformParameters *)(puVar6 + 2);
}

// Alloc<FOcclusionInstanceCullingDebugParameters> @ 144b81bf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FOcclusionInstanceCullingDebugParameters * __thiscall
FRDGAllocator::Alloc<FOcclusionInstanceCullingDebugParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FOcclusionInstanceCullingDebugParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x270,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FOcclusionInstanceCullingDebugParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0xd) = 1;
    *puVar6 = &___7__TObject_VFOcclusionInstanceCullingDebugParameters___FRDGAllocator__6B_;
    *(undefined8 *)((longlong)puVar6 + 0xec) = 0x3f800000;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xc] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1c] = 0;
    *(undefined4 *)(puVar6 + 0x1d) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xf4) = 0;
    puVar6[0x24] = 0;
    *(undefined4 *)(puVar6 + 0x25) = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    *(undefined4 *)((longlong)puVar6 + 0xfc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 300) = 0x3f800000;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x2e));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FOcclusionInstanceCullingDebugParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FOcclusionInstanceCullingDebugParameters *)(puVar6 + 2);
}

// Alloc<FOcclusionInstanceCullingParameters> @ 144b81dc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FOcclusionInstanceCullingParameters * __thiscall
FRDGAllocator::Alloc<FOcclusionInstanceCullingParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FOcclusionInstanceCullingParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x280,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FOcclusionInstanceCullingParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)(puVar6 + 0xd) = 4;
    *puVar6 = &___7__TObject_VFOcclusionInstanceCullingParameters___FRDGAllocator__6B_;
    puVar6[0xc] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x20] = 0;
    *(undefined4 *)(puVar6 + 0x21) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x10c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x114) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x11c) = 0x3f800000;
    puVar6[0x28] = 0;
    *(undefined4 *)(puVar6 + 0x29) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x14c) = 0x3f800000;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x30));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FOcclusionInstanceCullingParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FOcclusionInstanceCullingParameters *)(puVar6 + 2);
}

// Alloc<FInstanceCullingOcclusionQueryCS::FParameters> @ 144b81fa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FInstanceCullingOcclusionQueryCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,400,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0x11) = 1;
    *puVar6 = &___7__TObject_VFParameters_FInstanceCullingOcclusionQueryCS___FRDGAllocator__6B_;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x24] = 0;
    *(undefined4 *)(puVar6 + 0x25) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
    puVar6[0x2c] = 0;
    *(undefined4 *)(puVar6 + 0x2d) = 0;
    *(undefined8 *)((longlong)puVar6 + 300) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x16c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FLightGridInjectionCS::FParameters> @ 144b82180

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FLightGridInjectionCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1f0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FLightGridInjectionCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x32] = 0;
    *(undefined4 *)(puVar6 + 0x33) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1a4) = 0;
    puVar6[0x3a] = 0;
    *(undefined4 *)(puVar6 + 0x3b) = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined8 *)((longlong)puVar6 + 0x19c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x1ac) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x1dc) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRenderLightOverlapParameters> @ 144b82370

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRenderLightOverlapParameters * __thiscall
FRDGAllocator::Alloc<FRenderLightOverlapParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FRenderLightOverlapParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1f0,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRenderLightOverlapParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFRenderLightOverlapParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 3) = 1;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots((FRenderTargetBindingSlots *)(puVar6 + 10))
    ;
    puVar6[0x2a] = 0;
    *(undefined1 *)(puVar6 + 0x2b) = 1;
    puVar6[0x2c] = 0;
    *(undefined4 *)(puVar6 + 0x2d) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x16c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x174) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x17c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x184) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x18c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x19c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1a4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1ac) = 0x3f800000;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRenderLightOverlapParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FRenderLightOverlapParameters *)(puVar8 + 2);
}

// Alloc<FRenderLightParameters> @ 144b82520

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRenderLightParameters * __thiscall
FRDGAllocator::Alloc<FRenderLightParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FRenderLightParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x390,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRenderLightParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &___7__TObject_VFRenderLightParameters___FRDGAllocator__6B_;
    FDeferredLightPS::FParameters::FParameters((FParameters *)(puVar6 + 2));
    *(undefined1 *)(puVar6 + 0x4f) = 1;
    puVar6[0x4e] = 0;
    puVar6[0x62] = 0;
    puVar6[100] = 0;
    *(undefined4 *)(puVar6 + 0x65) = 4;
    puVar6[0x50] = 0;
    *(undefined4 *)(puVar6 + 0x51) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x294) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x2a4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x2b4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x2c4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x28c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x29c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x2ac) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 700) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x2cc) = 0x3f800000;
    puVar6[0x66] = 0;
    puVar6[0x68] = 0;
    *(undefined4 *)(puVar6 + 0x69) = 4;
    puVar6[0x6a] = 0;
    puVar6[0x6c] = 0;
    *(undefined4 *)(puVar6 + 0x6d) = 4;
    puVar6[0x6e] = 0;
    puVar6[0x70] = 0;
    *(undefined4 *)(puVar6 + 0x71) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRenderLightParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FRenderLightParameters *)(puVar6 + 2);
}

// Alloc<FMeshSDFObjectCull> @ 144c116b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMeshSDFObjectCull * __thiscall FRDGAllocator::Alloc<FMeshSDFObjectCull>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FMeshSDFObjectCull *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x3e0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMeshSDFObjectCull *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0xb) = 1;
    *puVar6 = &___7__TObject_VFMeshSDFObjectCull___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 0xd) = 1;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xc] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x34] = 0;
    puVar6[0x36] = 0;
    puVar6[0x40] = 0;
    puVar6[0x41] = 0;
    puVar6[0x42] = 0;
    puVar6[0x43] = 0;
    puVar6[0x44] = 0;
    puVar6[0x45] = 0;
    puVar6[0x46] = 0;
    puVar6[0x4a] = 0;
    puVar6[0x4b] = 0;
    puVar6[0x4e] = 0;
    *(undefined4 *)(puVar6 + 0x4f) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x284) = 0;
    puVar6[0x56] = 0;
    *(undefined4 *)(puVar6 + 0x57) = 0;
    puVar6[0x5a] = 0;
    *(undefined1 *)(puVar6 + 0x35) = 1;
    *(undefined1 *)(puVar6 + 0x37) = 1;
    *(undefined8 *)((longlong)puVar6 + 0x27c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x28c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 700) = 0x3f800000;
    *(undefined4 *)(puVar6 + 0x5b) = 4;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x5c));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMeshSDFObjectCull *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FMeshSDFObjectCull *)(puVar6 + 2);
}

// Alloc<FCullMeshSDFObjectsForViewCS::FParameters> @ 144c11910

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FCullMeshSDFObjectsForViewCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0xf0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0xd) = 1;
    *puVar6 = &___7__TObject_VFParameters_FCullMeshSDFObjectsForViewCS___FRDGAllocator__6B_;
    puVar6[0xc] = 0;
    puVar6[0x10] = 0;
    *(undefined4 *)(puVar6 + 0x11) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x8c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x94) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x9c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xa4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xac) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xb4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xbc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xcc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xd4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xdc) = 0x3f800000;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FLocalFogVolumeTiledCullingCS::FParameters> @ 144c11ac0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FLocalFogVolumeTiledCullingCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1d0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FLocalFogVolumeTiledCullingCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[10] = 0;
    *(undefined4 *)(puVar6 + 0xb) = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x22] = 0;
    *(undefined4 *)(puVar6 + 0x23) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x124) = 0;
    puVar6[0x2a] = 0;
    *(undefined4 *)(puVar6 + 0x2b) = 0;
    puVar6[0x2e] = 0;
    *(undefined4 *)(puVar6 + 0x2f) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x184) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1a4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1b4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x5c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x11c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 300) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x15c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x17c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x18c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x19c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1ac) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x1bc) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FMarkRadianceProbesUsedByGBufferCS::FParameters> @ 144c11cf0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FMarkRadianceProbesUsedByGBufferCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0xb0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *(undefined1 *)(puVar6 + 5) = 1;
    *puVar6 = &___7__TObject_VFParameters_FMarkRadianceProbesUsedByGBufferCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x5c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x6c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x74) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x84) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x8c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x94) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x9c) = 0x3f800000;
    puVar6[6] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRadianceCacheTraceFromProbesCS::FParameters> @ 144c11e70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRadianceCacheTraceFromProbesCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x340,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFParameters_FRadianceCacheTraceFromProbesCS___FRDGAllocator__6B_;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[8] = 0;
    *(undefined1 *)(puVar6 + 9) = 1;
    puVar6[10] = 0;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    puVar6[0xc] = 0;
    *(undefined1 *)(puVar6 + 0xd) = 1;
    puVar6[0x16] = 0;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    LumenRadianceCache::FRadianceCacheInterpolationParameters::FRadianceCacheInterpolationParameters
              ((FRadianceCacheInterpolationParameters *)(puVar6 + 0x36));
    puVar6[0x66] = 0;
    *(undefined4 *)(puVar6 + 0x67) = 4;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar8 + 2);
}

// Alloc<FUpdateCacheForUsedProbesCS::FParameters> @ 144c12060

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FUpdateCacheForUsedProbesCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x240,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFParameters_FUpdateCacheForUsedProbesCS___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 3) = 1;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    LumenRadianceCache::FRadianceCacheInterpolationParameters::FRadianceCacheInterpolationParameters
              ((FRadianceCacheInterpolationParameters *)(puVar6 + 10));
    puVar6[0x3a] = 0;
    *(undefined4 *)(puVar6 + 0x3b) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1dc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1e4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1ec) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 500) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1fc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x204) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x20c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x214) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x21c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x224) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x22c) = 0x3f800000;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar8 + 2);
}

// Alloc<FBilateralFilterCS::FParameters> @ 144ca07c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall FRDGAllocator::Alloc<FBilateralFilterCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x130,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0x19) = 1;
    *puVar6 = &___7__TObject_VFParameters_FBilateralFilterCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x18] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    *(undefined1 *)(puVar6 + 0x1b) = 1;
    *(undefined1 *)(puVar6 + 0x1d) = 1;
    *(undefined1 *)(puVar6 + 0x1f) = 1;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FBuildRadiosityTilesCS::FParameters> @ 144ca0970

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FBuildRadiosityTilesCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1e0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)(puVar6 + 3) = 4;
    *puVar6 = &___7__TObject_VFParameters_FBuildRadiosityTilesCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[8] = 0;
    *(undefined1 *)(puVar6 + 9) = 1;
    puVar6[0x1c] = 0;
    *(undefined1 *)(puVar6 + 0x1d) = 1;
    puVar6[0x34] = 0;
    *(undefined4 *)(puVar6 + 0x35) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1ac) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1b4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1bc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1cc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1d4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1dc) = 0x3f800000;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FClearTemporalHistoryCS::FParameters> @ 144ca0b60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FClearTemporalHistoryCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x120,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0x1d) = 1;
    *puVar6 = &___7__TObject_VFParameters_FClearTemporalHistoryCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x20] = 0;
    puVar6[0x22] = 0;
    *(undefined1 *)(puVar6 + 0x1f) = 1;
    *(undefined1 *)(puVar6 + 0x21) = 1;
    *(undefined1 *)(puVar6 + 0x23) = 1;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FLumenRadiosityDistanceFieldTracingCS::FParameters> @ 144ca0d10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FLumenRadiosityDistanceFieldTracingCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x230,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)(puVar6 + 3) = 4;
    *puVar6 = &___7__TObject_VFParameters_FLumenRadiosityDistanceFieldTracingCS___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[0x14] = 0;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    puVar6[0x16] = 0;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    puVar6[0x18] = 0;
    *(undefined1 *)(puVar6 + 0x19) = 1;
    puVar6[0x1a] = 0;
    *(undefined1 *)(puVar6 + 0x1b) = 1;
    puVar6[0x1c] = 0;
    *(undefined1 *)(puVar6 + 0x1d) = 1;
    puVar6[0x26] = 0;
    *(undefined1 *)(puVar6 + 0x27) = 1;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    puVar6[0x36] = 0;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
    puVar6[0x43] = 0;
    puVar6[0x44] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FLumenReflectionHardwareRayTracing::FParameters> @ 144ca0f10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FLumenReflectionHardwareRayTracing::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x6e0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &___7__TObject_VFParameters_FLumenReflectionHardwareRayTracing___FRDGAllocator__6B_;
    FLumenHardwareRayTracingShaderBase::FSharedParameters::FSharedParameters
              ((FSharedParameters *)(puVar6 + 2));
    *(undefined4 *)(puVar6 + 0x47) = 0x14;
    puVar6[0x46] = 0;
    puVar6[0x48] = 0;
    puVar6[0x49] = 0;
    puVar6[0x4a] = 0;
    puVar6[0x4b] = 0;
    puVar6[0x4c] = 0;
    puVar6[0x4d] = 0;
    puVar6[0x4e] = 0;
    puVar6[0x4f] = 0;
    puVar6[0x50] = 0;
    puVar6[0x51] = 0;
    puVar6[0x52] = 0;
    puVar6[0x56] = 0;
    puVar6[0x57] = 0;
    puVar6[0x5a] = 0;
    *(undefined4 *)(puVar6 + 0x5b) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x2dc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x2e4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x2ec) = 0x3f800000;
    puVar6[0x62] = 0;
    *(undefined4 *)(puVar6 + 99) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x31c) = 0x3f800000;
    puVar6[0x68] = 0;
    *(undefined4 *)(puVar6 + 0x69) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x34c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x354) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x35c) = 0x3f800000;
    puVar6[0x6e] = 0;
    puVar6[0x7a] = 0;
    puVar6[0x8a] = 0;
    puVar6[0x8b] = 0;
    puVar6[0x8c] = 0;
    puVar6[0x8d] = 0;
    puVar6[0x8e] = 0;
    puVar6[0x8f] = 0;
    puVar6[0x90] = 0;
    puVar6[0x91] = 0;
    puVar6[0x92] = 0;
    puVar6[0x93] = 0;
    puVar6[0x94] = 0;
    puVar6[0x95] = 0;
    puVar6[0x96] = 0;
    puVar6[0x97] = 0;
    puVar6[0x98] = 0;
    puVar6[0x9a] = 0;
    *(undefined1 *)(puVar6 + 0x9b) = 1;
    puVar6[0x9c] = 0;
    puVar6[0x9d] = 0;
    puVar6[0x9e] = 0;
    puVar6[0x9f] = 0;
    puVar6[0xa0] = 0;
    puVar6[0xa1] = 0;
    *(undefined4 *)(puVar6 + 0xa2) = 4;
    puVar6[0xa3] = 0;
    *(undefined4 *)(puVar6 + 0xa4) = 4;
    puVar6[0xa5] = 0;
    *(undefined4 *)(puVar6 + 0xa6) = 4;
    puVar6[0xa7] = 0;
    *(undefined4 *)(puVar6 + 0xa8) = 4;
    LumenRadianceCache::FRadianceCacheInterpolationParameters::FRadianceCacheInterpolationParameters
              ((FRadianceCacheInterpolationParameters *)(puVar6 + 0xaa));
    puVar6[0xda] = 0;
    *(undefined1 *)(puVar6 + 0xdb) = 1;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FLumenReflectionResolveCS::FParameters> @ 144ca1230

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FLumenReflectionResolveCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x230,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0x2b) = 1;
    *puVar6 = &___7__TObject_VFParameters_FLumenReflectionResolveCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[10] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    *(undefined4 *)(puVar6 + 0x32) = 4;
    puVar6[0x33] = 0;
    *(undefined4 *)(puVar6 + 0x34) = 4;
    puVar6[0x35] = 0;
    *(undefined4 *)(puVar6 + 0x36) = 4;
    puVar6[0x37] = 0;
    *(undefined4 *)(puVar6 + 0x38) = 4;
    puVar6[0x3a] = 0;
    *(undefined1 *)(puVar6 + 0x3b) = 1;
    puVar6[0x3c] = 0;
    *(undefined1 *)(puVar6 + 0x3d) = 1;
    puVar6[0x3e] = 0;
    puVar6[0x3f] = 0;
    puVar6[0x40] = 0;
    *(undefined1 *)(puVar6 + 0x41) = 1;
    puVar6[0x42] = 0;
    *(undefined1 *)(puVar6 + 0x43) = 1;
    puVar6[0x44] = 0;
    puVar6[0x45] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FLumenValidateReservoirs::FParameters> @ 144ca1490

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FLumenValidateReservoirs::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x350,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &___7__TObject_VFParameters_FLumenValidateReservoirs___FRDGAllocator__6B_;
    FLumenHardwareRayTracingShaderBase::FSharedParameters::FSharedParameters
              ((FSharedParameters *)(puVar6 + 2));
    *(undefined1 *)(puVar6 + 0x5b) = 1;
    puVar6[0x46] = 0;
    puVar6[0x47] = 0;
    puVar6[0x4e] = 0;
    puVar6[0x4f] = 0;
    puVar6[0x50] = 0;
    puVar6[0x51] = 0;
    puVar6[0x52] = 0;
    puVar6[0x54] = 0;
    puVar6[0x55] = 0;
    puVar6[0x56] = 0;
    puVar6[0x57] = 0;
    puVar6[0x58] = 0;
    puVar6[0x5a] = 0;
    puVar6[0x5c] = 0;
    puVar6[0x5d] = 0;
    puVar6[0x5e] = 0;
    puVar6[0x5f] = 0;
    puVar6[0x60] = 0;
    puVar6[0x62] = 0;
    *(undefined4 *)(puVar6 + 99) = 0;
    puVar6[0x66] = 0;
    puVar6[0x67] = 0;
    *(undefined4 *)((longlong)puVar6 + 0x31c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRayTracedTranslucencyHardwareRayTracing::FParameters> @ 144ca1670

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRayTracedTranslucencyHardwareRayTracing::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x590,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &
              ___7__TObject_VFParameters_FRayTracedTranslucencyHardwareRayTracing___FRDGAllocator__6B_
    ;
    FLumenHardwareRayTracingShaderBase::FSharedParameters::FSharedParameters
              ((FSharedParameters *)(puVar6 + 2));
    *(undefined4 *)(puVar6 + 0x47) = 0x14;
    puVar6[0x46] = 0;
    puVar6[0x48] = 0;
    puVar6[0x49] = 0;
    puVar6[0x50] = 0;
    puVar6[0x60] = 0;
    puVar6[0x61] = 0;
    puVar6[0x62] = 0;
    puVar6[99] = 0;
    puVar6[100] = 0;
    puVar6[0x65] = 0;
    puVar6[0x66] = 0;
    puVar6[0x67] = 0;
    puVar6[0x68] = 0;
    puVar6[0x69] = 0;
    puVar6[0x6a] = 0;
    puVar6[0x6b] = 0;
    puVar6[0x6c] = 0;
    puVar6[0x6d] = 0;
    puVar6[0x6e] = 0;
    puVar6[0x70] = 0;
    *(undefined1 *)(puVar6 + 0x71) = 1;
    puVar6[0x72] = 0;
    puVar6[0x73] = 0;
    puVar6[0x74] = 0;
    puVar6[0x75] = 0;
    puVar6[0x76] = 0;
    puVar6[0x77] = 0;
    *(undefined4 *)(puVar6 + 0x78) = 4;
    puVar6[0x79] = 0;
    *(undefined4 *)(puVar6 + 0x7a) = 4;
    puVar6[0x7b] = 0;
    *(undefined4 *)(puVar6 + 0x7c) = 4;
    puVar6[0x7d] = 0;
    *(undefined4 *)(puVar6 + 0x7e) = 4;
    LumenRadianceCache::FRadianceCacheInterpolationParameters::FRadianceCacheInterpolationParameters
              ((FRadianceCacheInterpolationParameters *)(puVar6 + 0x80));
    puVar6[0xb0] = 0;
    *(undefined1 *)(puVar6 + 0xb1) = 1;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FReflectionClearTracesCS::FParameters> @ 144ca18d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FReflectionClearTracesCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1b0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FReflectionClearTracesCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x24] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    *(undefined1 *)(puVar6 + 0x25) = 1;
    *(undefined4 *)(puVar6 + 0x2c) = 4;
    puVar6[0x2d] = 0;
    *(undefined4 *)(puVar6 + 0x2e) = 4;
    puVar6[0x2f] = 0;
    *(undefined4 *)(puVar6 + 0x30) = 4;
    puVar6[0x31] = 0;
    *(undefined4 *)(puVar6 + 0x32) = 4;
    puVar6[0x34] = 0;
    *(undefined1 *)(puVar6 + 0x35) = 1;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FReflectionClearUnusedTraceTileDataCS::FParameters> @ 144ca1ae0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FReflectionClearUnusedTraceTileDataCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1c0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FReflectionClearUnusedTraceTileDataCS___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x28] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    *(undefined1 *)(puVar6 + 0x29) = 1;
    *(undefined4 *)(puVar6 + 0x30) = 4;
    puVar6[0x31] = 0;
    *(undefined4 *)(puVar6 + 0x32) = 4;
    puVar6[0x33] = 0;
    *(undefined4 *)(puVar6 + 0x34) = 4;
    puVar6[0x35] = 0;
    *(undefined4 *)(puVar6 + 0x36) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FReflectionCompactTracesCS::FParameters> @ 144ca1cf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FReflectionCompactTracesCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x300,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FReflectionCompactTracesCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[0x12] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x26] = 0;
    puVar6[0x36] = 0;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3d] = 0;
    puVar6[0x3e] = 0;
    puVar6[0x3f] = 0;
    puVar6[0x40] = 0;
    puVar6[0x41] = 0;
    puVar6[0x42] = 0;
    puVar6[0x43] = 0;
    puVar6[0x44] = 0;
    puVar6[0x46] = 0;
    puVar6[0x48] = 0;
    puVar6[0x49] = 0;
    puVar6[0x4a] = 0;
    puVar6[0x4b] = 0;
    puVar6[0x4c] = 0;
    puVar6[0x4d] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    *(undefined1 *)(puVar6 + 0x47) = 1;
    *(undefined4 *)(puVar6 + 0x4e) = 4;
    puVar6[0x4f] = 0;
    *(undefined4 *)(puVar6 + 0x50) = 4;
    puVar6[0x51] = 0;
    *(undefined4 *)(puVar6 + 0x52) = 4;
    puVar6[0x53] = 0;
    *(undefined4 *)(puVar6 + 0x54) = 4;
    puVar6[0x56] = 0;
    *(undefined1 *)(puVar6 + 0x57) = 1;
    puVar6[0x5a] = 0;
    puVar6[0x5b] = 0;
    puVar6[0x5c] = 0;
    puVar6[0x5d] = 0;
    *(undefined4 *)(puVar6 + 0x5e) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FReflectionGenerateRaysCS::FParameters> @ 144ca1fb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FReflectionGenerateRaysCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x3c0,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFParameters_FReflectionGenerateRaysCS___FRDGAllocator__6B_;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[0xc] = 0;
    *(undefined1 *)(puVar6 + 0xd) = 1;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    puVar6[0x12] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x32] = 0;
    *(undefined1 *)(puVar6 + 0x33) = 1;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    puVar6[0x36] = 0;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    *(undefined4 *)(puVar6 + 0x3a) = 4;
    puVar6[0x3b] = 0;
    *(undefined4 *)(puVar6 + 0x3c) = 4;
    puVar6[0x3d] = 0;
    *(undefined4 *)(puVar6 + 0x3e) = 4;
    puVar6[0x3f] = 0;
    *(undefined4 *)(puVar6 + 0x40) = 4;
    LumenRadianceCache::FRadianceCacheInterpolationParameters::FRadianceCacheInterpolationParameters
              ((FRadianceCacheInterpolationParameters *)(puVar6 + 0x42));
    puVar6[0x72] = 0;
    *(undefined1 *)(puVar6 + 0x73) = 1;
    puVar6[0x74] = 0;
    puVar6[0x75] = 0;
    puVar6[0x76] = 0;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar8 + 2);
}

// Alloc<FReflectionTileClassificationBuildListsCS::FParameters> @ 144ca2220

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FReflectionTileClassificationBuildListsCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1a0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 9) = 1;
    *puVar6 = &
              ___7__TObject_VFParameters_FReflectionTileClassificationBuildListsCS___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xc] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x32] = 0;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    *(undefined1 *)(puVar6 + 0x2d) = 1;
    *(undefined4 *)(puVar6 + 0x33) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FReflectionTraceMeshSDFsCS::FParameters> @ 144ca23f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FReflectionTraceMeshSDFsCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x450,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FReflectionTraceMeshSDFsCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[0x12] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x46] = 0;
    puVar6[0x47] = 0;
    puVar6[0x48] = 0;
    puVar6[0x4e] = 0;
    puVar6[0x4f] = 0;
    puVar6[0x50] = 0;
    puVar6[0x51] = 0;
    puVar6[0x52] = 0;
    puVar6[0x54] = 0;
    puVar6[100] = 0;
    puVar6[0x65] = 0;
    puVar6[0x66] = 0;
    puVar6[0x67] = 0;
    puVar6[0x68] = 0;
    puVar6[0x69] = 0;
    puVar6[0x6a] = 0;
    puVar6[0x6b] = 0;
    puVar6[0x6c] = 0;
    puVar6[0x6d] = 0;
    puVar6[0x6e] = 0;
    puVar6[0x6f] = 0;
    puVar6[0x70] = 0;
    puVar6[0x71] = 0;
    puVar6[0x72] = 0;
    puVar6[0x74] = 0;
    puVar6[0x7e] = 0;
    puVar6[0x80] = 0;
    puVar6[0x82] = 0;
    puVar6[0x84] = 0;
    puVar6[0x85] = 0;
    puVar6[0x86] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    *(undefined1 *)(puVar6 + 0x75) = 1;
    *(undefined1 *)(puVar6 + 0x7f) = 1;
    *(undefined1 *)(puVar6 + 0x81) = 1;
    *(undefined1 *)(puVar6 + 0x83) = 1;
    *(undefined4 *)(puVar6 + 0x87) = 4;
    puVar6[0x88] = 0;
    *(undefined4 *)(puVar6 + 0x89) = 0x14;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FSpatialResamplingCS::FParameters> @ 144ca26f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FSpatialResamplingCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x150,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0x17) = 1;
    *puVar6 = &___7__TObject_VFParameters_FSpatialResamplingCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x16] = 0;
    puVar6[0x18] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x28] = 0;
    *(undefined1 *)(puVar6 + 0x19) = 1;
    *(undefined1 *)(puVar6 + 0x1b) = 1;
    *(undefined1 *)(puVar6 + 0x29) = 1;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FTemporalAccumulationCS::FParameters> @ 144ca28d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FTemporalAccumulationCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x150,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 7) = 1;
    *puVar6 = &___7__TObject_VFParameters_FTemporalAccumulationCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x14] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x22] = 0;
    *(undefined4 *)(puVar6 + 0x23) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x124) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    *(undefined8 *)((longlong)puVar6 + 0x11c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 300) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FTemporalResamplingCS::FParameters> @ 144ca2ad0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FTemporalResamplingCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1e0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0x21) = 1;
    *puVar6 = &___7__TObject_VFParameters_FTemporalResamplingCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x20] = 0;
    puVar6[0x22] = 0;
    puVar6[0x24] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    *(undefined4 *)(puVar6 + 0x31) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x194) = 0;
    puVar6[0x36] = 0;
    puVar6[0x37] = 0;
    puVar6[0x3a] = 0;
    *(undefined1 *)(puVar6 + 0x23) = 1;
    *(undefined1 *)(puVar6 + 0x25) = 1;
    *(undefined8 *)((longlong)puVar6 + 0x18c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x19c) = 0x3f800000;
    *(undefined1 *)(puVar6 + 0x3b) = 1;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FVisualizeReflectionTracesCS::FParameters> @ 144ca2d20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FVisualizeReflectionTracesCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1b0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FVisualizeReflectionTracesCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x28] = 0;
    puVar6[0x32] = 0;
    puVar6[0x34] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 0x29) = 1;
    *(undefined1 *)(puVar6 + 0x33) = 1;
    *(undefined1 *)(puVar6 + 0x35) = 1;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FVisualizeRadiosityProbeParameters> @ 144ca2ef0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FVisualizeRadiosityProbeParameters * __thiscall
FRDGAllocator::Alloc<FVisualizeRadiosityProbeParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FVisualizeRadiosityProbeParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1a0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FVisualizeRadiosityProbeParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFVisualizeRadiosityProbeParameters___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[0xc] = 0;
    puVar6[0xe] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 0xd) = 1;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    *(undefined4 *)(puVar6 + 0x16) = 0xffff0000;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    *(undefined4 *)(puVar6 + 0x19) = 0xffff0000;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    *(undefined4 *)(puVar6 + 0x1c) = 0xffff0000;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    *(undefined4 *)(puVar6 + 0x1f) = 0xffff0000;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    *(undefined4 *)(puVar6 + 0x22) = 0xffff0000;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    *(undefined4 *)(puVar6 + 0x25) = 0xffff0000;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    *(undefined4 *)(puVar6 + 0x28) = 0xffff0000;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    *(undefined4 *)(puVar6 + 0x2b) = 0xffff0000;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    *(undefined2 *)(puVar6 + 0x2e) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x174) = 0;
    puVar6[0x2f] = 0xffffffffffffffff;
    puVar6[0x30] = 0xffffffffffffffff;
    *(undefined4 *)(puVar6 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar6 + 0x18c) = 0;
    puVar6[0x32] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FVisualizeRadiosityProbeParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FVisualizeRadiosityProbeParameters *)(puVar6 + 2);
}

// Alloc<FLumenCardPassParameters> @ 144d2ec80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FLumenCardPassParameters * __thiscall
FRDGAllocator::Alloc<FLumenCardPassParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FLumenCardPassParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,400,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FLumenCardPassParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFLumenCardPassParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    *(undefined4 *)(puVar6 + 7) = 4;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 8;
    puVar6[0xc] = 0;
    *(undefined1 *)(puVar6 + 0xd) = 1;
    puVar6[0xe] = 0;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    puVar6[0x10] = 0;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x12));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FLumenCardPassParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FLumenCardPassParameters *)(puVar6 + 2);
}

// Alloc<FBuildLightTilesCS::FParameters> @ 144d2edf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall FRDGAllocator::Alloc<FBuildLightTilesCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x170,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)(puVar6 + 3) = 4;
    *puVar6 = &___7__TObject_VFParameters_FBuildLightTilesCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[0x24] = 0;
    *(undefined4 *)(puVar6 + 0x25) = 0;
    *(undefined8 *)((longlong)puVar6 + 300) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x144) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x14c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x154) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x15c) = 0x3f800000;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FLumenCardBatchDirectLightingCS::FParameters> @ 144d2efa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FLumenCardBatchDirectLightingCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0xe0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)(puVar6 + 3) = 4;
    *puVar6 = &___7__TObject_VFParameters_FLumenCardBatchDirectLightingCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[0x10] = 0;
    *(undefined4 *)(puVar6 + 0x11) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x8c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x94) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x9c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xa4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xac) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xb4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xbc) = 0x3f800000;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FLumenDirectLightingHardwareRayTracing::FParameters> @ 144d2f140

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FLumenDirectLightingHardwareRayTracing::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x380,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &
              ___7__TObject_VFParameters_FLumenDirectLightingHardwareRayTracing___FRDGAllocator__6B_
    ;
    FLumenHardwareRayTracingShaderBase::FSharedParameters::FSharedParameters
              ((FSharedParameters *)(puVar6 + 2));
    *(undefined4 *)(puVar6 + 0x47) = 0x14;
    puVar6[0x46] = 0;
    puVar6[0x48] = 0;
    puVar6[0x49] = 0;
    puVar6[0x4c] = 0;
    puVar6[0x4d] = 0;
    puVar6[0x52] = 0;
    puVar6[100] = 0;
    *(undefined4 *)(puVar6 + 0x65) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x32c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x334) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x33c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x344) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x34c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x354) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x35c) = 0x3f800000;
    puVar6[0x4a] = 0;
    puVar6[0x4b] = 0;
    puVar6[0x6c] = 0;
    puVar6[0x6d] = 0;
    puVar6[0x6e] = 0;
    puVar6[0x6f] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FLumenDirectLightingShadowMaskFromLightAttenuationCS::FParameters> @ 144d2f320

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FLumenDirectLightingShadowMaskFromLightAttenuationCS::FParameters>
          (FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x170,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)(puVar6 + 3) = 4;
    *puVar6 = &
              ___7__TObject_VFParameters_FLumenDirectLightingShadowMaskFromLightAttenuationCS___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    *(undefined1 *)(puVar6 + 9) = 1;
    puVar6[10] = 0;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    puVar6[0xe] = 0;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    puVar6[0x10] = 0;
    *(undefined4 *)(puVar6 + 0x11) = 4;
    puVar6[0x12] = 0;
    *(undefined4 *)(puVar6 + 0x13) = 4;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1c] = 0;
    *(undefined1 *)(puVar6 + 0x1d) = 1;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x2c] = 0;
    *(undefined1 *)(puVar6 + 0x2d) = 1;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FLumenDirectLightingShadowMaskFromLightAttenuationWithLightFunctionCS::FParameters> @ 144d2f4e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::
Alloc<FLumenDirectLightingShadowMaskFromLightAttenuationWithLightFunctionCS::FParameters>
          (FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1e0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)(puVar6 + 3) = 4;
    *puVar6 = &
              ___7__TObject_VFParameters_FLumenDirectLightingShadowMaskFromLightAttenuationWithLightFunctionCS___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    puVar6[8] = 0;
    *(undefined1 *)(puVar6 + 9) = 1;
    puVar6[10] = 0;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    puVar6[0xe] = 0;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    puVar6[0x10] = 0;
    *(undefined4 *)(puVar6 + 0x11) = 4;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[0x12] = 0;
    *(undefined4 *)(puVar6 + 0x13) = 4;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x1c] = 0;
    *(undefined1 *)(puVar6 + 0x1d) = 1;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x2c] = 0;
    *(undefined1 *)(puVar6 + 0x2d) = 1;
    puVar6[0x2e] = 0;
    *(undefined4 *)(puVar6 + 0x2f) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x17c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FLumenSceneDenoiserTemporalCS::FParameters> @ 144d2f6b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FLumenSceneDenoiserTemporalCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x220,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)(puVar6 + 3) = 4;
    *puVar6 = &___7__TObject_VFParameters_FLumenSceneDenoiserTemporalCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[10] = 0;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    puVar6[0xc] = 0;
    *(undefined1 *)(puVar6 + 0xd) = 1;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[0x26] = 0;
    *(undefined4 *)(puVar6 + 0x27) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x144) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x14c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x154) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x15c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x164) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x16c) = 0x3f800000;
    puVar6[0x30] = 0;
    *(undefined1 *)(puVar6 + 0x31) = 1;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3d] = 0;
    puVar6[0x3e] = 0;
    puVar6[0x3f] = 0;
    puVar6[0x40] = 0;
    puVar6[0x41] = 0;
    puVar6[0x42] = 0;
    puVar6[0x43] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FLumenSceneDirectLightingTraceDistanceFieldShadowsCS::FParameters> @ 144d2f8d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FLumenSceneDirectLightingTraceDistanceFieldShadowsCS::FParameters>
          (FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x290,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)(puVar6 + 3) = 4;
    *puVar6 = &
              ___7__TObject_VFParameters_FLumenSceneDirectLightingTraceDistanceFieldShadowsCS___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[8] = 0;
    *(undefined1 *)(puVar6 + 9) = 1;
    puVar6[0xc] = 0;
    *(undefined1 *)(puVar6 + 0xd) = 1;
    puVar6[0xe] = 0;
    *(undefined4 *)(puVar6 + 0xf) = 4;
    puVar6[0x10] = 0;
    *(undefined4 *)(puVar6 + 0x11) = 4;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FLumenSceneEvaluateStandaloneLightCS::FParameters> @ 144d2fae0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FLumenSceneEvaluateStandaloneLightCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x130,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)(puVar6 + 3) = 4;
    *puVar6 = &___7__TObject_VFParameters_FLumenSceneEvaluateStandaloneLightCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x5c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x6c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x74) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FLumenSceneEvaluateStandaloneLightMaterialCS::FParameters> @ 144d2fc90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FLumenSceneEvaluateStandaloneLightMaterialCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1b0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)(puVar6 + 3) = 4;
    *puVar6 = &
              ___7__TObject_VFParameters_FLumenSceneEvaluateStandaloneLightMaterialCS___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x5c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x6c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x74) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
    puVar6[0x26] = 0;
    *(undefined1 *)(puVar6 + 0x27) = 1;
    puVar6[0x28] = 0;
    *(undefined4 *)(puVar6 + 0x29) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x14c) = 0x3f800000;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FLumenSceneGenerateLightSamplesCS::FParameters> @ 144d2fe60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FLumenSceneGenerateLightSamplesCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1f0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)(puVar6 + 3) = 4;
    *puVar6 = &___7__TObject_VFParameters_FLumenSceneGenerateLightSamplesCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[8] = 0;
    *(undefined1 *)(puVar6 + 9) = 1;
    puVar6[10] = 0;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    puVar6[0xe] = 0;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    puVar6[0x10] = 0;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0x2a] = 0;
    *(undefined4 *)(puVar6 + 0x2b) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x15c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x164) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x16c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x174) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x17c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x184) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x18c) = 0x3f800000;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    puVar6[0x36] = 0;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3d] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FLumenTranslucencyRadianceCacheMarkPassUniformParameters> @ 144de71f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FLumenTranslucencyRadianceCacheMarkPassUniformParameters * __thiscall
FRDGAllocator::Alloc<FLumenTranslucencyRadianceCacheMarkPassUniformParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FLumenTranslucencyRadianceCacheMarkPassUniformParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x220,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FLumenTranslucencyRadianceCacheMarkPassUniformParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined8 *)((longlong)puVar6 + 0x10c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x11c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x14c) = 0x3f800000;
    *puVar6 = &
              ___7__TObject_VFLumenTranslucencyRadianceCacheMarkPassUniformParameters___FRDGAllocator__6B_
    ;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x20] = 0;
    *(undefined4 *)(puVar6 + 0x21) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x114) = 0;
    puVar6[0x28] = 0;
    *(undefined4 *)(puVar6 + 0x29) = 0;
    puVar6[0x30] = 0;
    *(undefined4 *)(puVar6 + 0x31) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x18c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x19c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1a4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1ac) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1b4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1bc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1cc) = 0x3f800000;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x2e] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1d4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1dc) = 0x3f800000;
    puVar6[0x3f] = 0;
    puVar6[0x40] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FLumenTranslucencyRadianceCacheMarkPassUniformParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FLumenTranslucencyRadianceCacheMarkPassUniformParameters *)(puVar6 + 2);
}

// Alloc<FLumenScreenProbeGatherHardwareRayTracing::FParameters> @ 144de7450

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FLumenScreenProbeGatherHardwareRayTracing::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x580,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &
              ___7__TObject_VFParameters_FLumenScreenProbeGatherHardwareRayTracing___FRDGAllocator__6B_
    ;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    *(undefined1 *)(puVar6 + 0xd) = 1;
    puVar6[0xe] = 0;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    puVar6[0x16] = 0;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    puVar6[0x18] = 0;
    *(undefined1 *)(puVar6 + 0x19) = 1;
    puVar6[0x1a] = 0;
    *(undefined1 *)(puVar6 + 0x1b) = 1;
    puVar6[0x1c] = 0;
    *(undefined1 *)(puVar6 + 0x1d) = 1;
    puVar6[0x1e] = 0;
    *(undefined1 *)(puVar6 + 0x1f) = 1;
    puVar6[0x20] = 0;
    *(undefined1 *)(puVar6 + 0x21) = 1;
    puVar6[0x22] = 0;
    *(undefined1 *)(puVar6 + 0x23) = 1;
    puVar6[0x2c] = 0;
    *(undefined1 *)(puVar6 + 0x2d) = 1;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x35] = 0;
    puVar6[0x36] = 0;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3d] = 0;
    puVar6[0x3e] = 0;
    puVar6[0x42] = 0;
    puVar6[0x44] = 0;
    *(undefined1 *)(puVar6 + 0x45) = 1;
    puVar6[0x46] = 0;
    *(undefined4 *)(puVar6 + 0x47) = 0x14;
    LumenRadianceCache::FRadianceCacheInterpolationParameters::FRadianceCacheInterpolationParameters
              ((FRadianceCacheInterpolationParameters *)(puVar6 + 0x48));
    puVar6[0x78] = 0;
    puVar6[0x79] = 0;
    puVar6[0x7a] = 0;
    *(undefined4 *)(puVar6 + 0x7b) = 4;
    puVar6[0x96] = 0;
    puVar6[0x97] = 0;
    puVar6[0x98] = 0;
    puVar6[0x99] = 0;
    puVar6[0x9a] = 0;
    puVar6[0x9b] = 0;
    puVar6[0x9c] = 0;
    puVar6[0x9d] = 0;
    puVar6[0x9e] = 0;
    puVar6[0x9f] = 0;
    puVar6[0xa0] = 0;
    puVar6[0xa1] = 0;
    puVar6[0xa3] = 0;
    puVar6[0xa4] = 0;
    *(undefined1 *)(puVar6 + 0xa5) = 1;
    puVar6[0xa6] = 0;
    *(undefined4 *)(puVar6 + 0xa7) = 4;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar8 + 2);
}

// Alloc<FLumenShortRangeAOHardwareRayTracing::FParameters> @ 144de7770

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FLumenShortRangeAOHardwareRayTracing::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x140,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 5) = 1;
    *puVar6 = &___7__TObject_VFParameters_FLumenShortRangeAOHardwareRayTracing___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x16] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x20] = 0;
    puVar6[0x22] = 0;
    puVar6[0x24] = 0;
    puVar6[0x26] = 0;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    *(undefined1 *)(puVar6 + 0x1f) = 1;
    *(undefined1 *)(puVar6 + 0x21) = 1;
    *(undefined1 *)(puVar6 + 0x23) = 1;
    *(undefined1 *)(puVar6 + 0x25) = 1;
    *(undefined4 *)(puVar6 + 0x27) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FMarkRadianceProbesUsedByHairStrandsCS::FParameters> @ 144de7940

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FMarkRadianceProbesUsedByHairStrandsCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0xe0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *puVar6 = &
              ___7__TObject_VFParameters_FMarkRadianceProbesUsedByHairStrandsCS___FRDGAllocator__6B_
    ;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = 0;
    *(undefined4 *)(puVar6 + 0xd) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x6c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x74) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x84) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x8c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x94) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x9c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xa4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xac) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xb4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xbc) = 0x3f800000;
    puVar6[10] = 0;
    puVar6[0x1a] = 0;
    *(undefined4 *)(puVar6 + 0x1b) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FMarkRadianceProbesUsedByScreenProbesCS::FParameters> @ 144de7ae0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FMarkRadianceProbesUsedByScreenProbesCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1d0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 0x27) = 1;
    *(undefined4 *)(puVar6 + 0x29) = 4;
    *puVar6 = &
              ___7__TObject_VFParameters_FMarkRadianceProbesUsedByScreenProbesCS___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[0x26] = 0;
    puVar6[0x28] = 0;
    puVar6[0x2c] = 0;
    *(undefined4 *)(puVar6 + 0x2d) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x16c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x174) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x17c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x184) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x18c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x19c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1a4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1ac) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1b4) = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x25] = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1bc) = 0x3f800000;
    puVar6[0x2a] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FScreenProbeAdaptivePlacementMarkCS::FParameters> @ 144de7d00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FScreenProbeAdaptivePlacementMarkCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1e0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 5) = 1;
    *puVar6 = &___7__TObject_VFParameters_FScreenProbeAdaptivePlacementMarkCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x14] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
    puVar6[0x3a] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    *(undefined1 *)(puVar6 + 0x39) = 1;
    *(undefined4 *)(puVar6 + 0x3b) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FScreenProbeAdaptivePlacementSpawnCS::FParameters> @ 144de7f00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FScreenProbeAdaptivePlacementSpawnCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x220,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0xd) = 1;
    *puVar6 = &___7__TObject_VFParameters_FScreenProbeAdaptivePlacementSpawnCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xc] = 0;
    puVar6[0xe] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    puVar6[0x36] = 0;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3d] = 0;
    puVar6[0x3f] = 0;
    puVar6[0x40] = 0;
    puVar6[0x42] = 0;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    *(undefined1 *)(puVar6 + 0x1b) = 1;
    *(undefined1 *)(puVar6 + 0x1d) = 1;
    *(undefined1 *)(puVar6 + 0x41) = 1;
    *(undefined4 *)(puVar6 + 0x43) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FScreenProbeComputeLightingProbabilityDensityFunctionCS::FParameters> @ 144de8140

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FScreenProbeComputeLightingProbabilityDensityFunctionCS::FParameters>
          (FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x360,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &
              ___7__TObject_VFParameters_FScreenProbeComputeLightingProbabilityDensityFunctionCS___FRDGAllocator__6B_
    ;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    *(undefined1 *)(puVar6 + 0x27) = 1;
    puVar6[0x28] = 0;
    *(undefined4 *)(puVar6 + 0x29) = 4;
    LumenRadianceCache::FRadianceCacheInterpolationParameters::FRadianceCacheInterpolationParameters
              ((FRadianceCacheInterpolationParameters *)(puVar6 + 0x2a));
    puVar6[0x5a] = 0;
    *(undefined4 *)(puVar6 + 0x5b) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x2dc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x2e4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x2ec) = 0x3f800000;
    puVar6[0x5f] = 0;
    puVar6[0x60] = 0;
    puVar6[0x61] = 0;
    puVar6[0x62] = 0;
    puVar6[99] = 0;
    puVar6[100] = 0;
    puVar6[0x65] = 0;
    puVar6[0x66] = 0;
    puVar6[0x67] = 0;
    puVar6[0x68] = 0;
    puVar6[0x69] = 0;
    puVar6[0x6a] = 0;
    puVar6[0x6b] = 0;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar8 + 2);
}

// Alloc<FScreenProbeDownsampleDepthUniformCS::FParameters> @ 144de8380

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FScreenProbeDownsampleDepthUniformCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1d0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 7) = 1;
    *puVar6 = &___7__TObject_VFParameters_FScreenProbeDownsampleDepthUniformCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x35] = 0;
    puVar6[0x36] = 0;
    puVar6[0x38] = 0;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    *(undefined1 *)(puVar6 + 0x37) = 1;
    *(undefined4 *)(puVar6 + 0x39) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FScreenProbeGatherDebugCS::FParameters> @ 144de8580

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FScreenProbeGatherDebugCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1a0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 5) = 1;
    *puVar6 = &___7__TObject_VFParameters_FScreenProbeGatherDebugCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2c] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 0x2b) = 1;
    *(undefined4 *)(puVar6 + 0x2d) = 4;
    puVar6[0x2e] = 0;
    *(undefined1 *)(puVar6 + 0x2f) = 1;
    puVar6[0x30] = 0;
    *(undefined1 *)(puVar6 + 0x31) = 1;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FScreenProbeIntegrateCS::FParameters> @ 144de8750

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FScreenProbeIntegrateCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x2a0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0x29) = 1;
    *puVar6 = &___7__TObject_VFParameters_FScreenProbeIntegrateCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x2a] = 0;
    *(undefined4 *)(puVar6 + 0x2b) = 4;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    puVar6[0x3a] = 0;
    *(undefined1 *)(puVar6 + 0x3b) = 1;
    puVar6[0x3c] = 0;
    *(undefined1 *)(puVar6 + 0x3d) = 1;
    puVar6[0x3e] = 0;
    *(undefined1 *)(puVar6 + 0x3f) = 1;
    puVar6[0x40] = 0;
    puVar6[0x41] = 0;
    puVar6[0x52] = 0;
    *(undefined4 *)(puVar6 + 0x53) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FScreenProbeTemporalReprojectionCS::FParameters> @ 144de8980

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FScreenProbeTemporalReprojectionCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x210,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 9) = 1;
    *puVar6 = &___7__TObject_VFParameters_FScreenProbeTemporalReprojectionCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x22] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x32] = 0;
    *(undefined4 *)(puVar6 + 0x33) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1a4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1b4) = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3d] = 0;
    puVar6[0x3e] = 0;
    puVar6[0x3f] = 0;
    puVar6[0x40] = 0;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    *(undefined1 *)(puVar6 + 0x19) = 1;
    *(undefined1 *)(puVar6 + 0x1b) = 1;
    *(undefined1 *)(puVar6 + 0x23) = 1;
    *(undefined8 *)((longlong)puVar6 + 0x19c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1ac) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x1bc) = 0x3f800000;
    *(undefined4 *)(puVar6 + 0x41) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FScreenProbeTemporallyAccumulateTraceRadianceCS::FParameters> @ 144de8bf0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FScreenProbeTemporallyAccumulateTraceRadianceCS::FParameters>
          (FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1f0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 0x31) = 1;
    *(undefined4 *)(puVar6 + 0x33) = 4;
    *puVar6 = &
              ___7__TObject_VFParameters_FScreenProbeTemporallyAccumulateTraceRadianceCS___FRDGAllocator__6B_
    ;
    puVar6[4] = 0;
    puVar6[0x30] = 0;
    puVar6[0x32] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x34] = 0;
    *(undefined4 *)(puVar6 + 0x35) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1ac) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1b4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1bc) = 0x3f800000;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3c] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FScreenProbeTraceMeshSDFsCS::FParameters> @ 144de8e00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FScreenProbeTraceMeshSDFsCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x440,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FScreenProbeTraceMeshSDFsCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[0x12] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x46] = 0;
    puVar6[0x47] = 0;
    puVar6[0x48] = 0;
    puVar6[0x4e] = 0;
    puVar6[0x4f] = 0;
    puVar6[0x50] = 0;
    puVar6[0x51] = 0;
    puVar6[0x52] = 0;
    puVar6[0x66] = 0;
    puVar6[0x67] = 0;
    puVar6[0x68] = 0;
    puVar6[0x69] = 0;
    puVar6[0x6a] = 0;
    puVar6[0x6b] = 0;
    puVar6[0x6c] = 0;
    puVar6[0x6d] = 0;
    puVar6[0x6e] = 0;
    puVar6[0x6f] = 0;
    puVar6[0x70] = 0;
    puVar6[0x71] = 0;
    puVar6[0x73] = 0;
    puVar6[0x74] = 0;
    puVar6[0x76] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    *(undefined1 *)(puVar6 + 0x75) = 1;
    *(undefined4 *)(puVar6 + 0x77) = 4;
    puVar6[0x80] = 0;
    *(undefined1 *)(puVar6 + 0x81) = 1;
    puVar6[0x82] = 0;
    *(undefined1 *)(puVar6 + 0x83) = 1;
    puVar6[0x84] = 0;
    puVar6[0x85] = 0;
    puVar6[0x86] = 0;
    *(undefined4 *)(puVar6 + 0x87) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FScreenProbeTraceVoxelsCS::FParameters> @ 144de90e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FScreenProbeTraceVoxelsCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x450,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFParameters_FScreenProbeTraceVoxelsCS___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 3) = 1;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[8] = 0;
    *(undefined1 *)(puVar6 + 9) = 1;
    puVar6[0x12] = 0;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3d] = 0;
    puVar6[0x3e] = 0;
    puVar6[0x3f] = 0;
    puVar6[0x40] = 0;
    puVar6[0x41] = 0;
    puVar6[0x42] = 0;
    puVar6[0x43] = 0;
    puVar6[0x45] = 0;
    puVar6[0x46] = 0;
    *(undefined1 *)(puVar6 + 0x47) = 1;
    puVar6[0x48] = 0;
    *(undefined4 *)(puVar6 + 0x49) = 4;
    LumenRadianceCache::FRadianceCacheInterpolationParameters::FRadianceCacheInterpolationParameters
              ((FRadianceCacheInterpolationParameters *)(puVar6 + 0x52));
    puVar6[0x82] = 0;
    *(undefined1 *)(puVar6 + 0x83) = 1;
    puVar6[0x84] = 0;
    *(undefined1 *)(puVar6 + 0x85) = 1;
    puVar6[0x86] = 0;
    puVar6[0x87] = 0;
    puVar6[0x88] = 0;
    *(undefined4 *)(puVar6 + 0x89) = 4;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar8 + 2);
}

// Alloc<FScreenSpaceShortRangeAOCS::FParameters> @ 144de9360

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FScreenSpaceShortRangeAOCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x290,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 5) = 1;
    *puVar6 = &___7__TObject_VFParameters_FScreenSpaceShortRangeAOCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x16] = 0;
    *(undefined4 *)(puVar6 + 0x17) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xc4) = 0;
    puVar6[0x1e] = 0;
    *(undefined4 *)(puVar6 + 0x1f) = 0;
    puVar6[0x24] = 0;
    *(undefined4 *)(puVar6 + 0x25) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    puVar6[0x36] = 0;
    puVar6[0x38] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3d] = 0;
    puVar6[0x3e] = 0;
    puVar6[0x40] = 0;
    puVar6[0x4c] = 0;
    puVar6[0x4e] = 0;
    puVar6[0x50] = 0;
    *(undefined8 *)((longlong)puVar6 + 0xbc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xcc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xfc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 300) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
    *(undefined1 *)(puVar6 + 0x2b) = 1;
    *(undefined1 *)(puVar6 + 0x37) = 1;
    *(undefined1 *)(puVar6 + 0x39) = 1;
    *(undefined1 *)(puVar6 + 0x41) = 1;
    *(undefined1 *)(puVar6 + 0x4d) = 1;
    *(undefined1 *)(puVar6 + 0x4f) = 1;
    *(undefined4 *)(puVar6 + 0x51) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FMaterialCacheRenderData> @ 144e641c0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

FMaterialCacheRenderData * __thiscall
FRDGAllocator::Alloc<FMaterialCacheRenderData>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FMaterialCacheRenderData *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x130,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMaterialCacheRenderData *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &___7__TObject_UFMaterialCacheRenderData___FRDGAllocator__6B_;
    puVar6[8] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x1a] = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0x13] = 0;
    *(undefined4 *)(puVar6 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xa4) = 8;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMaterialCacheRenderData *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FMaterialCacheRenderData *)(puVar6 + 1);
}

// Alloc<FLumenTranslucencyVolumeHardwareRayTracing::FParameters> @ 144e643b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FLumenTranslucencyVolumeHardwareRayTracing::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x530,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &
              ___7__TObject_VFParameters_FLumenTranslucencyVolumeHardwareRayTracing___FRDGAllocator__6B_
    ;
    puVar6[3] = 0;
    FLumenHardwareRayTracingShaderBase::FSharedParameters::FSharedParameters
              ((FSharedParameters *)(puVar6 + 4));
    LumenRadianceCache::FRadianceCacheInterpolationParameters::FRadianceCacheInterpolationParameters
              ((FRadianceCacheInterpolationParameters *)(puVar6 + 0x48));
    puVar6[0x78] = 0;
    *(undefined1 *)(puVar6 + 0x79) = 1;
    puVar6[0x8a] = 0;
    puVar6[0x8b] = 0;
    puVar6[0x8c] = 0;
    puVar6[0x8d] = 0;
    puVar6[0x8e] = 0;
    puVar6[0x8f] = 0;
    puVar6[0x90] = 0;
    puVar6[0x94] = 0;
    puVar6[0x95] = 0;
    puVar6[0x98] = 0;
    *(undefined4 *)(puVar6 + 0x99) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x4cc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x4d4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x4dc) = 0x3f800000;
    puVar6[0xa0] = 0;
    *(undefined4 *)(puVar6 + 0xa1) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x50c) = 0x3f800000;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar8 + 2);
}

// Alloc<FMarkRadianceProbesUsedByTranslucencyVolumeCS::FParameters> @ 144e64580

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FMarkRadianceProbesUsedByTranslucencyVolumeCS::FParameters>
          (FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x200,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &
              ___7__TObject_VFParameters_FMarkRadianceProbesUsedByTranslucencyVolumeCS___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    puVar6[6] = 0;
    *(undefined4 *)(puVar6 + 7) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x3c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x5c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x6c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x74) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x84) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x8c) = 0x3f800000;
    puVar6[4] = 0;
    puVar6[0x14] = 0;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x34] = 0;
    *(undefined4 *)(puVar6 + 0x35) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1ac) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1b4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1bc) = 0x3f800000;
    puVar6[0x3c] = 0;
    *(undefined4 *)(puVar6 + 0x3d) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1ec) = 0x3f800000;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FTranslucencyVolumeIntegrateCS::FParameters> @ 144e64780

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FTranslucencyVolumeIntegrateCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x230,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 7) = 1;
    *puVar6 = &___7__TObject_VFParameters_FTranslucencyVolumeIntegrateCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x28] = 0;
    *(undefined4 *)(puVar6 + 0x29) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x154) = 0;
    puVar6[0x30] = 0;
    *(undefined4 *)(puVar6 + 0x31) = 0;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    puVar6[0x42] = 0;
    puVar6[0x43] = 0;
    puVar6[0x44] = 0;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined8 *)((longlong)puVar6 + 0x14c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x15c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x18c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FTranslucencyVolumeSpatialSeparableFilterCS::FParameters> @ 144e64960

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FTranslucencyVolumeSpatialSeparableFilterCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x210,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 7) = 1;
    *puVar6 = &
              ___7__TObject_VFParameters_FTranslucencyVolumeSpatialSeparableFilterCS___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x28] = 0;
    *(undefined4 *)(puVar6 + 0x29) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x154) = 0;
    puVar6[0x30] = 0;
    *(undefined4 *)(puVar6 + 0x31) = 0;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined8 *)((longlong)puVar6 + 0x14c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x15c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x18c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FTranslucencyVolumeTraceVoxelsCS::FParameters> @ 144e64b20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FTranslucencyVolumeTraceVoxelsCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x440,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFParameters_FTranslucencyVolumeTraceVoxelsCS___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 3) = 1;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[8] = 0;
    *(undefined1 *)(puVar6 + 9) = 1;
    puVar6[0x12] = 0;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    LumenRadianceCache::FRadianceCacheInterpolationParameters::FRadianceCacheInterpolationParameters
              ((FRadianceCacheInterpolationParameters *)(puVar6 + 0x26));
    puVar6[0x56] = 0;
    puVar6[0x57] = 0;
    puVar6[0x58] = 0;
    *(undefined1 *)(puVar6 + 0x59) = 1;
    puVar6[0x6a] = 0;
    puVar6[0x6b] = 0;
    puVar6[0x6c] = 0;
    puVar6[0x6d] = 0;
    puVar6[0x6e] = 0;
    puVar6[0x6f] = 0;
    puVar6[0x70] = 0;
    puVar6[0x74] = 0;
    puVar6[0x75] = 0;
    puVar6[0x78] = 0;
    *(undefined4 *)(puVar6 + 0x79) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x3cc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x3d4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x3dc) = 0x3f800000;
    puVar6[0x80] = 0;
    *(undefined4 *)(puVar6 + 0x81) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x40c) = 0x3f800000;
    puVar6[0x86] = 0;
    *(undefined1 *)(puVar6 + 0x87) = 1;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar8 + 2);
}

// Alloc<FVisualizeLumenSceneCS::FParameters> @ 144e64d90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FVisualizeLumenSceneCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x570,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFParameters_FVisualizeLumenSceneCS___FRDGAllocator__6B_;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    *(undefined1 *)(puVar6 + 0xd) = 1;
    puVar6[0xe] = 0;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    puVar6[0x10] = 0;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    puVar6[0x12] = 0;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    puVar6[0x14] = 0;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    puVar6[0x16] = 0;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    puVar6[0x20] = 0;
    *(undefined1 *)(puVar6 + 0x21) = 1;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3d] = 0;
    puVar6[0x3e] = 0;
    puVar6[0x3f] = 0;
    puVar6[0x54] = 0;
    puVar6[0x55] = 0;
    puVar6[0x56] = 0;
    puVar6[0x5c] = 0;
    puVar6[0x5d] = 0;
    puVar6[0x5e] = 0;
    puVar6[0x5f] = 0;
    puVar6[0x60] = 0;
    puVar6[99] = 0;
    puVar6[100] = 0;
    puVar6[0x65] = 0;
    puVar6[0x66] = 0;
    *(undefined1 *)(puVar6 + 0x67) = 1;
    puVar6[0x68] = 0;
    puVar6[0x69] = 0;
    puVar6[0x72] = 0;
    puVar6[0x73] = 0;
    puVar6[0x75] = 0;
    LumenRadianceCache::FRadianceCacheInterpolationParameters::FRadianceCacheInterpolationParameters
              ((FRadianceCacheInterpolationParameters *)(puVar6 + 0x7a));
    puVar6[0xaa] = 0;
    *(undefined1 *)(puVar6 + 0xab) = 1;
    puVar6[0xac] = 0;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar8 + 2);
}

// Alloc<FVisualizeLumenSceneCursorDataCS::FParameters> @ 144e65080

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FVisualizeLumenSceneCursorDataCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x220,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FVisualizeLumenSceneCursorDataCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xc] = 0;
    puVar6[0x16] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3d] = 0;
    puVar6[0x42] = 0;
    puVar6[0x43] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    *(undefined1 *)(puVar6 + 0xd) = 1;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    *(undefined1 *)(puVar6 + 0x2f) = 1;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FGenerateLightSamplesCS::FParameters> @ 144eddad0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FGenerateLightSamplesCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x430,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFParameters_FGenerateLightSamplesCS___FRDGAllocator__6B_;
    *(undefined4 *)(puVar6 + 3) = 4;
    FMegaLightsParameters::FMegaLightsParameters((FMegaLightsParameters *)(puVar6 + 4));
    puVar6[0x6c] = 0;
    puVar6[0x6d] = 0;
    puVar6[0x6e] = 0;
    puVar6[0x6f] = 0;
    puVar6[0x70] = 0;
    puVar6[0x71] = 0;
    puVar6[0x72] = 0;
    puVar6[0x73] = 0;
    puVar6[0x77] = 0;
    puVar6[0x78] = 0;
    puVar6[0x79] = 0;
    puVar6[0x7a] = 0;
    puVar6[0x7c] = 0;
    *(undefined4 *)(puVar6 + 0x7d) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x3ec) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x3f4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x3fc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x404) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x40c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x414) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x41c) = 0x3f800000;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar8 + 2);
}

// Alloc<Nanite::FRenderer::FDispatchContext> @ 144f58200

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FDispatchContext * __thiscall
FRDGAllocator::Alloc<Nanite::FRenderer::FDispatchContext>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FDispatchContext *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x98,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FDispatchContext *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &___7__TObject_UFDispatchContext_FRenderer_Nanite___FRDGAllocator__6B_;
    *(undefined2 *)((longlong)puVar6 + 0x95) = 0;
    *(undefined1 *)((longlong)puVar6 + 0x97) = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    *(undefined4 *)(puVar6 + 0x12) = 0;
    *(undefined1 *)((longlong)puVar6 + 0x94) = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FDispatchContext *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FDispatchContext *)(puVar6 + 1);
}

// Alloc<FMobileDistortionPassUniformParameters> @ 144f58570

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FMobileDistortionPassUniformParameters * __thiscall
FRDGAllocator::Alloc<FMobileDistortionPassUniformParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FMobileDistortionPassUniformParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x100,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMobileDistortionPassUniformParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)((longlong)puVar6 + 0xfc) = 0x3f800000;
    *puVar6 = &___7__TObject_VFMobileDistortionPassUniformParameters___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1e] = 0;
    *(undefined4 *)(puVar6 + 0x1f) = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMobileDistortionPassUniformParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FMobileDistortionPassUniformParameters *)(puVar6 + 2);
}

// Alloc<FNodeAndClusterCull_CS::FParameters> @ 144f58730

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FNodeAndClusterCull_CS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x160,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0xd) = 1;
    *puVar6 = &___7__TObject_VFParameters_FNodeAndClusterCull_CS___FRDGAllocator__6B_;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x29] = 0;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    *(undefined4 *)(puVar6 + 0x2a) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRasterizePassParameters> @ 144f58910

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRasterizePassParameters * __thiscall
FRDGAllocator::Alloc<FRasterizePassParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FRasterizePassParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x140,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRasterizePassParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFRasterizePassParameters___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    *(undefined4 *)(puVar6 + 0x20) = 4;
    puVar6[0x22] = 0;
    *(undefined1 *)(puVar6 + 0x23) = 1;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRasterizePassParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FRasterizePassParameters *)(puVar6 + 2);
}

// Alloc<FMGPUTransferParameters> @ 1450a4490

FMGPUTransferParameters * __thiscall
FRDGAllocator::Alloc<FMGPUTransferParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FMGPUTransferParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x70,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMGPUTransferParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &___7__TObject_VFMGPUTransferParameters___FRDGAllocator__6B_;
    puVar6[2] = 0;
    *(undefined4 *)(puVar6 + 3) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x4c) = 0;
    puVar6[0xb] = 0;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMGPUTransferParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FMGPUTransferParameters *)(puVar6 + 2);
}

// Alloc<FPathTracingRG::FParameters> @ 1450a45d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall FRDGAllocator::Alloc<FPathTracingRG::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x350,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0xb) = 1;
    *puVar6 = &___7__TObject_VFParameters_FPathTracingRG___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xc] = 0;
    puVar6[0xe] = 0;
    puVar6[0x22] = 0;
    puVar6[0x24] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    puVar6[0x36] = 0;
    puVar6[0x38] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x4c] = 0;
    puVar6[0x4d] = 0;
    puVar6[0x58] = 0;
    puVar6[0x5a] = 0;
    puVar6[0x5c] = 0;
    puVar6[0x5e] = 0;
    puVar6[99] = 0;
    puVar6[100] = 0;
    puVar6[0x65] = 0;
    puVar6[0x66] = 0;
    puVar6[0x67] = 0;
    *(undefined1 *)(puVar6 + 0xd) = 1;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    *(undefined1 *)(puVar6 + 0x25) = 1;
    *(undefined1 *)(puVar6 + 0x39) = 1;
    *(undefined1 *)(puVar6 + 0x59) = 1;
    *(undefined1 *)(puVar6 + 0x5b) = 1;
    *(undefined1 *)(puVar6 + 0x5d) = 1;
    *(undefined4 *)(puVar6 + 0x68) = 0x14;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FCompositePostProcessPrimitivesPS::FParameters> @ 145120a40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FCompositePostProcessPrimitivesPS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x390,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &TObject<FCompositePostProcessPrimitivesPS::FParameters>::_vftable_;
    puVar6[2] = 0;
    puVar6[0x2e] = 0;
    *(undefined4 *)(puVar6 + 0x2f) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x17c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x184) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x18c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x19c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1a4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1ac) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1b4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1bc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1cc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1d4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1dc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x1e4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1ec) = 0x3f800000;
    puVar6[0x3e] = 0;
    puVar6[0x3f] = 0;
    puVar6[0x40] = 0;
    puVar6[0x41] = 0;
    puVar6[0x42] = 0;
    puVar6[0x43] = 0;
    puVar6[0x44] = 0;
    puVar6[0x45] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x52));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FDeviceEncodingOnlyPS::FParameters> @ 145120c40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FDeviceEncodingOnlyPS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x2c0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FDeviceEncodingOnlyPS___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[0x26] = 0;
    *(undefined4 *)(puVar6 + 0x27) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x144) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x154) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x164) = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x14c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x15c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x16c) = 0x3f800000;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x38));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FGTAOMobile_HorizonSearchIntegralCS::FParameters> @ 1451211c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FGTAOMobile_HorizonSearchIntegralCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0xd0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FGTAOMobile_HorizonSearchIntegralCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    *(undefined4 *)(puVar6 + 5) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x74) = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x18] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x2c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x3c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x5c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x6c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FGTAOMobile_HorizonSearchIntegralPS::FParameters> @ 145121360

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FGTAOMobile_HorizonSearchIntegralPS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1c0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FGTAOMobile_HorizonSearchIntegralPS___FRDGAllocator__6B_;
    *(undefined8 *)((longlong)puVar6 + 0x2c) = 0x3f800000;
    puVar6[2] = 0;
    puVar6[4] = 0;
    *(undefined4 *)(puVar6 + 5) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x74) = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x3c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x5c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x6c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x18));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FGTAOMobile_HorizonSearchIntegralSpatialFilterCS::FParameters> @ 145121510

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FGTAOMobile_HorizonSearchIntegralSpatialFilterCS::FParameters>
          (FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0xe0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &
              ___7__TObject_VFParameters_FGTAOMobile_HorizonSearchIntegralSpatialFilterCS___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    puVar6[4] = 0;
    *(undefined4 *)(puVar6 + 5) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x74) = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x18] = 0;
    *(undefined4 *)(puVar6 + 0x19) = 0;
    puVar6[0x1a] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x2c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x3c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x5c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x6c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xcc) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FCalculateExposureIlluminanceCS::FParameters> @ 145190b20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FCalculateExposureIlluminanceCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x200,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FCalculateExposureIlluminanceCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    puVar6[0x36] = 0;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3e] = 0;
    *(undefined1 *)(puVar6 + 0x3d) = 1;
    *(undefined1 *)(puVar6 + 0x3f) = 1;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FPostProcessMaterialParameters> @ 145190cd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FPostProcessMaterialParameters * __thiscall
FRDGAllocator::Alloc<FPostProcessMaterialParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FPostProcessMaterialParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x770,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPostProcessMaterialParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *puVar6 = &___7__TObject_VFPostProcessMaterialParameters___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x40] = 0;
    puVar6[0x41] = 0;
    puVar6[0x50] = 0;
    puVar6[0x51] = 0;
    puVar6[0x60] = 0;
    puVar6[0x61] = 0;
    puVar6[0x70] = 0;
    puVar6[0x71] = 0;
    puVar6[0x80] = 0;
    puVar6[0x81] = 0;
    puVar6[0x90] = 0;
    puVar6[0x91] = 0;
    puVar6[0xa0] = 0;
    puVar6[0xa1] = 0;
    puVar6[0xb0] = 0;
    puVar6[0xb1] = 0;
    puVar6[0xc0] = 0;
    puVar6[0xc1] = 0;
    puVar6[0x10] = 0;
    *(undefined4 *)(puVar6 + 0x11) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x8c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x94) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x9c) = 0x3f800000;
    puVar6[0xc2] = 0;
    puVar6[0xc3] = 0;
    puVar6[0xc5] = 0;
    puVar6[0xc6] = 0;
    puVar6[200] = 0;
    *(undefined4 *)(puVar6 + 0xc9) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x64c) = 0x3f800000;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0xce));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPostProcessMaterialParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FPostProcessMaterialParameters *)(puVar6 + 2);
}

// Alloc<FRayTracingDebugTraversalCS::FParameters> @ 1452f4a40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRayTracingDebugTraversalCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x110,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 5) = 1;
    *puVar6 = &___7__TObject_VFParameters_FRayTracingDebugTraversalCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xc] = 0;
    puVar6[0x12] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    *(undefined1 *)(puVar6 + 0x1f) = 1;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRayTracingPrimaryRaysRGS::FParameters> @ 145356740

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRayTracingPrimaryRaysRGS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x140,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0xd) = 1;
    *puVar6 = &___7__TObject_VFParameters_FRayTracingPrimaryRaysRGS___FRDGAllocator__6B_;
    puVar6[10] = 0;
    puVar6[0xc] = 0;
    puVar6[0xe] = 0;
    puVar6[0x10] = 0;
    puVar6[0x12] = 0;
    puVar6[0x14] = 0;
    puVar6[0x16] = 0;
    puVar6[0x18] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    *(undefined1 *)(puVar6 + 0x19) = 1;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRayTracingSkyLightRGS::FParameters> @ 145356910

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRayTracingSkyLightRGS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x120,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 7) = 1;
    *puVar6 = &___7__TObject_VFParameters_FRayTracingSkyLightRGS___FRDGAllocator__6B_;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xe] = 0;
    puVar6[0x10] = 0;
    puVar6[0x12] = 0;
    puVar6[0x14] = 0;
    puVar6[0x16] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    *(undefined1 *)(puVar6 + 0x15) = 1;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FDrawTileMeshPassParameters> @ 1453d0410

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDrawTileMeshPassParameters * __thiscall
FRDGAllocator::Alloc<FDrawTileMeshPassParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FDrawTileMeshPassParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1f0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FDrawTileMeshPassParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFDrawTileMeshPassParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    *(undefined4 *)(puVar6 + 7) = 4;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 8;
    puVar6[0xc] = 0;
    *(undefined1 *)(puVar6 + 0xd) = 1;
    puVar6[0xe] = 0;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    puVar6[0x10] = 0;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    puVar6[0x12] = 0;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    puVar6[0x14] = 0;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    puVar6[0x16] = 0;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    puVar6[0x18] = 0;
    *(undefined1 *)(puVar6 + 0x19) = 1;
    puVar6[0x1a] = 0;
    *(undefined1 *)(puVar6 + 0x1b) = 1;
    puVar6[0x1c] = 0;
    *(undefined1 *)(puVar6 + 0x1d) = 1;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x1e));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FDrawTileMeshPassParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FDrawTileMeshPassParameters *)(puVar6 + 2);
}

// Alloc<FHZBTestPS::FParameters> @ 14546eca0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __thiscall FRDGAllocator::Alloc<FHZBTestPS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x220,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FHZBTestPS___FRDGAllocator__6B_;
    *(undefined8 *)((longlong)puVar6 + 0x9c) = 0x3f800000;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x12] = 0;
    *(undefined4 *)(puVar6 + 0x13) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xa4) = 0;
    puVar6[0x1a] = 0;
    *(undefined4 *)(puVar6 + 0x1b) = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    *(undefined4 *)((longlong)puVar6 + 0xac) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xdc) = 0x3f800000;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x24));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FSceneInstanceCullResult> @ 14546ee50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FSceneInstanceCullResult * __thiscall
FRDGAllocator::Alloc<FSceneInstanceCullResult>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FSceneInstanceCullResult *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x90,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FSceneInstanceCullResult *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &___7__TObject_VFSceneInstanceCullResult___FRDGAllocator__6B_;
    puVar6[7] = 0;
    puVar6[0xf] = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FSceneInstanceCullResult *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FSceneInstanceCullResult *)(puVar6 + 1);
}

// Alloc<FHZBBuildCS::FParameters> @ 1454c89e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall FRDGAllocator::Alloc<FHZBBuildCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x120,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)((longlong)puVar6 + 0x1c) = 0x3f800000;
    *puVar6 = &___7__TObject_VFParameters_FHZBBuildCS___FRDGAllocator__6B_;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[2] = 0;
    *(undefined4 *)(puVar6 + 3) = 0;
    puVar6[6] = 0;
    *(undefined4 *)(puVar6 + 7) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = 0x3f800000;
    puVar6[0xe] = 0;
    *(undefined4 *)(puVar6 + 0xf) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x84) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x8c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FMobileShadowDepthPassUniformParameters> @ 145564ec0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FMobileShadowDepthPassUniformParameters * __thiscall
FRDGAllocator::Alloc<FMobileShadowDepthPassUniformParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FMobileShadowDepthPassUniformParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x310,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMobileShadowDepthPassUniformParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)((longlong)puVar6 + 0x17c) = 0x3f800000;
    *puVar6 = &___7__TObject_VFMobileShadowDepthPassUniformParameters___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x2e] = 0;
    *(undefined4 *)(puVar6 + 0x2f) = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMobileShadowDepthPassUniformParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FMobileShadowDepthPassUniformParameters *)(puVar6 + 2);
}

// Alloc<FFirstPersonSelfShadowTracingPS::FParameters> @ 1455fddc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FFirstPersonSelfShadowTracingPS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x240,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FFirstPersonSelfShadowTracingPS___FRDGAllocator__6B_;
    *(undefined8 *)((longlong)puVar6 + 0x9c) = 0x3f800000;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x12] = 0;
    *(undefined4 *)(puVar6 + 0x13) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xa4) = 0;
    puVar6[0x1a] = 0;
    *(undefined4 *)(puVar6 + 0x1b) = 0;
    puVar6[0x1e] = 0;
    puVar6[0x20] = 0;
    puVar6[0x22] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    *(undefined4 *)((longlong)puVar6 + 0xac) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xdc) = 0x3f800000;
    *(undefined1 *)(puVar6 + 0x1f) = 1;
    *(undefined1 *)(puVar6 + 0x21) = 1;
    *(undefined1 *)(puVar6 + 0x23) = 1;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x28));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRenderCameraAerialPerspectiveVolumeCS::FParameters> @ 14565a780

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRenderCameraAerialPerspectiveVolumeCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x110,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &
              ___7__TObject_VFParameters_FRenderCameraAerialPerspectiveVolumeCS___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x18] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x20] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined1 *)(puVar6 + 0x19) = 1;
    *(undefined1 *)(puVar6 + 0x1b) = 1;
    *(undefined1 *)(puVar6 + 0x1d) = 1;
    *(undefined1 *)(puVar6 + 0x21) = 1;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FRenderSkyAtmospherePS::FParameters> @ 14565a940

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FRenderSkyAtmospherePS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x270,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFParameters_FRenderSkyAtmospherePS___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 3) = 1;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[8] = 0;
    *(undefined1 *)(puVar6 + 9) = 1;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots((FRenderTargetBindingSlots *)(puVar6 + 10))
    ;
    puVar6[0x2a] = 0;
    *(undefined1 *)(puVar6 + 0x2b) = 1;
    puVar6[0x2c] = 0;
    *(undefined1 *)(puVar6 + 0x2d) = 1;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    puVar6[0x36] = 0;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3d] = 0;
    puVar6[0x3e] = 0;
    puVar6[0x42] = 0;
    *(undefined1 *)(puVar6 + 0x43) = 1;
    puVar6[0x44] = 0;
    *(undefined1 *)(puVar6 + 0x45) = 1;
    puVar6[0x48] = 0;
    *(undefined1 *)(puVar6 + 0x49) = 1;
    puVar6[0x4c] = 0;
    *(undefined1 *)(puVar6 + 0x4d) = 1;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar8 + 2);
}

// Alloc<FRenderSkyViewLutCS::FParameters> @ 14565ab60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall FRDGAllocator::Alloc<FRenderSkyViewLutCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x110,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FRenderSkyViewLutCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x16] = 0;
    puVar6[0x18] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1e] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    *(undefined1 *)(puVar6 + 0x19) = 1;
    *(undefined1 *)(puVar6 + 0x1b) = 1;
    *(undefined1 *)(puVar6 + 0x1f) = 1;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FWaterTileCategorisationMarkCS::FParameters> @ 14565ad10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FWaterTileCategorisationMarkCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x120,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0xd) = 1;
    *puVar6 = &___7__TObject_VFParameters_FWaterTileCategorisationMarkCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xe] = 0;
    puVar6[0x10] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    *(undefined4 *)(puVar6 + 0x17) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xc4) = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    *(undefined8 *)((longlong)puVar6 + 0xbc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0xcc) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FSingleLayerWaterPassParameters> @ 14565aec0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSingleLayerWaterPassParameters * __thiscall
FRDGAllocator::Alloc<FSingleLayerWaterPassParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FSingleLayerWaterPassParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1d0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FSingleLayerWaterPassParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFSingleLayerWaterPassParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined4 *)(puVar6 + 0xb) = 4;
    puVar6[0xc] = 0;
    *(undefined4 *)(puVar6 + 0xd) = 8;
    puVar6[0x10] = 0;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    puVar6[0x12] = 0;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    puVar6[0x14] = 0;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    puVar6[0x16] = 0;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    puVar6[0x18] = 0;
    *(undefined1 *)(puVar6 + 0x19) = 1;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x1a));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FSingleLayerWaterPassParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FSingleLayerWaterPassParameters *)(puVar6 + 2);
}

// Alloc<FVolumeShadowingShaderParametersGlobal0> @ 14565b060

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FVolumeShadowingShaderParametersGlobal0 * __thiscall
FRDGAllocator::Alloc<FVolumeShadowingShaderParametersGlobal0>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FVolumeShadowingShaderParametersGlobal0 *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x2e0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FVolumeShadowingShaderParametersGlobal0 *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined8 *)((longlong)puVar6 + 0x6c) = 0x3f800000;
    *puVar6 = &___7__TObject_VFVolumeShadowingShaderParametersGlobal0___FRDGAllocator__6B_;
    puVar6[0xc] = 0;
    *(undefined4 *)(puVar6 + 0xd) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x74) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x84) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x8c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x94) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x9c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xa4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xac) = 0x3f800000;
    puVar6[0x5a] = 0;
    *(undefined4 *)(puVar6 + 0x5b) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x2dc) = 0x3f800000;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x4f] = 0;
    puVar6[0x50] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FVolumeShadowingShaderParametersGlobal0 *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FVolumeShadowingShaderParametersGlobal0 *)(puVar6 + 2);
}

// Alloc<FVolumeShadowingShaderParametersGlobal1> @ 14565b210

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FVolumeShadowingShaderParametersGlobal1 * __thiscall
FRDGAllocator::Alloc<FVolumeShadowingShaderParametersGlobal1>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FVolumeShadowingShaderParametersGlobal1 *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x2e0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FVolumeShadowingShaderParametersGlobal1 *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined8 *)((longlong)puVar6 + 0x6c) = 0x3f800000;
    *puVar6 = &___7__TObject_VFVolumeShadowingShaderParametersGlobal1___FRDGAllocator__6B_;
    puVar6[0xc] = 0;
    *(undefined4 *)(puVar6 + 0xd) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x74) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x84) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x8c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x94) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x9c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xa4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xac) = 0x3f800000;
    puVar6[0x5a] = 0;
    *(undefined4 *)(puVar6 + 0x5b) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x2dc) = 0x3f800000;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x4f] = 0;
    puVar6[0x50] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FVolumeShadowingShaderParametersGlobal1 *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FVolumeShadowingShaderParametersGlobal1 *)(puVar6 + 2);
}

// Alloc<FWaterCompositeParameters> @ 14565b3c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FWaterCompositeParameters * __thiscall
FRDGAllocator::Alloc<FWaterCompositeParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FWaterCompositeParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x260,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FWaterCompositeParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFWaterCompositeParameters___FRDGAllocator__6B_;
    *(undefined4 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xe] = 0;
    *(undefined4 *)(puVar6 + 0xf) = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x20] = 0;
    puVar6[0x22] = 0;
    puVar6[0x24] = 0;
    puVar6[0x26] = 0;
    puVar6[0x28] = 0;
    puVar6[0x2a] = 0;
    *(undefined1 *)(puVar6 + 0x1f) = 1;
    *(undefined1 *)(puVar6 + 0x21) = 1;
    *(undefined1 *)(puVar6 + 0x23) = 1;
    *(undefined1 *)(puVar6 + 0x25) = 1;
    *(undefined1 *)(puVar6 + 0x27) = 1;
    *(undefined1 *)(puVar6 + 0x29) = 1;
    *(undefined4 *)(puVar6 + 0x2b) = 4;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x2c));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FWaterCompositeParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FWaterCompositeParameters *)(puVar6 + 2);
}

// Alloc<Substrate::FMaterialDebugSubstrateTreePS::FParameters> @ 1456c5860

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<Substrate::FMaterialDebugSubstrateTreePS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x200,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 5) = 1;
    *puVar6 = &
              ___7__TObject_VFParameters_FMaterialDebugSubstrateTreePS_Substrate___FRDGAllocator__6B_
    ;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x14] = 0;
    puVar6[0x16] = 0;
    puVar6[0x18] = 0;
    puVar6[0x1a] = 0;
    *(undefined4 *)(puVar6 + 0x1b) = 0;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    *(undefined1 *)(puVar6 + 0x19) = 1;
    *(undefined4 *)((longlong)puVar6 + 0xdc) = 0x3f800000;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x20));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FStochasticLightingTileClassificationMarkCS::FParameters> @ 1456c5a10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FStochasticLightingTileClassificationMarkCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x2c0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &
              ___7__TObject_VFParameters_FStochasticLightingTileClassificationMarkCS___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x2c] = 0;
    *(undefined4 *)(puVar6 + 0x2d) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x174) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x184) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x194) = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3e] = 0;
    puVar6[0x54] = 0;
    puVar6[0x55] = 0;
    puVar6[0x56] = 0;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    *(undefined8 *)((longlong)puVar6 + 0x16c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x17c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x18c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x19c) = 0x3f800000;
    *(undefined1 *)(puVar6 + 0x3b) = 1;
    *(undefined1 *)(puVar6 + 0x3d) = 1;
    *(undefined1 *)(puVar6 + 0x3f) = 1;
    *(undefined4 *)(puVar6 + 0x57) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FInjectTranslucentLightArrayParameters> @ 14573f690

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FInjectTranslucentLightArrayParameters * __thiscall
FRDGAllocator::Alloc<FInjectTranslucentLightArrayParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FInjectTranslucentLightArrayParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x550,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FInjectTranslucentLightArrayParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *puVar6 = &___7__TObject_VFInjectTranslucentLightArrayParameters___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[8] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[0x12] = 0;
    *(undefined4 *)(puVar6 + 0x13) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xa4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xb4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x9c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xac) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xbc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xcc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xd4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xdc) = 0x3f800000;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x55] = 0;
    puVar6[0x56] = 0;
    puVar6[0x60] = 0;
    *(undefined4 *)(puVar6 + 0x61) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x30c) = 0x3f800000;
    puVar6[0x62] = 0;
    *(undefined1 *)(puVar6 + 99) = 1;
    puVar6[0x70] = 0;
    *(undefined1 *)(puVar6 + 0x71) = 1;
    puVar6[0x6d] = 0;
    puVar6[0x6e] = 0;
    puVar6[0x7a] = 0;
    *(undefined4 *)(puVar6 + 0x7b) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x3dc) = 0x3f800000;
    puVar6[0x80] = 0;
    puVar6[0x81] = 0;
    puVar6[0x82] = 0;
    puVar6[0x84] = 0;
    *(undefined4 *)(puVar6 + 0x85) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x42c) = 0;
    puVar6[0x87] = 0;
    *(undefined4 *)(puVar6 + 0x88) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x444) = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x8a));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FInjectTranslucentLightArrayParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FInjectTranslucentLightArrayParameters *)(puVar6 + 2);
}

// Alloc<FTranslucencyDepthPassUniformParameters> @ 14573f900

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FTranslucencyDepthPassUniformParameters * __thiscall
FRDGAllocator::Alloc<FTranslucencyDepthPassUniformParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FTranslucencyDepthPassUniformParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x170,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTranslucencyDepthPassUniformParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined8 *)((longlong)puVar6 + 300) = 0x3f800000;
    *puVar6 = &___7__TObject_VFTranslucencyDepthPassUniformParameters___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x24] = 0;
    *(undefined4 *)(puVar6 + 0x25) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x144) = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x14c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTranslucencyDepthPassUniformParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FTranslucencyDepthPassUniformParameters *)(puVar6 + 2);
}

// Alloc<FTranslucentBasePassParameters> @ 14573fab0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FTranslucentBasePassParameters * __thiscall
FRDGAllocator::Alloc<FTranslucentBasePassParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FTranslucentBasePassParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1c0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTranslucentBasePassParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFTranslucentBasePassParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined4 *)(puVar6 + 0xb) = 4;
    puVar6[0xc] = 0;
    *(undefined4 *)(puVar6 + 0xd) = 8;
    puVar6[0x10] = 0;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    puVar6[0x12] = 0;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    puVar6[0x14] = 0;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    puVar6[0x16] = 0;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x18));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTranslucentBasePassParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FTranslucentBasePassParameters *)(puVar6 + 2);
}

// Alloc<FVelocityPassParameters> @ 14573fc40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FVelocityPassParameters * __thiscall
FRDGAllocator::Alloc<FVelocityPassParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FVelocityPassParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1c0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FVelocityPassParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFVelocityPassParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined4 *)(puVar6 + 0xb) = 4;
    puVar6[0xc] = 0;
    *(undefined4 *)(puVar6 + 0xd) = 8;
    puVar6[0x10] = 0;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    puVar6[0x12] = 0;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    puVar6[0x14] = 0;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    puVar6[0x16] = 0;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x18));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FVelocityPassParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FVelocityPassParameters *)(puVar6 + 2);
}

// Alloc<FGeneratePageFlagsFromFroxelsCS::FParameters> @ 1457b5c50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FGeneratePageFlagsFromFroxelsCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,400,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FGeneratePageFlagsFromFroxelsCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xc] = 0;
    puVar6[0xe] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x1e] = 0;
    *(undefined4 *)(puVar6 + 0x1f) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x104) = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    *(undefined8 *)((longlong)puVar6 + 0xfc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x10c) = 0x3f800000;
    *(undefined1 *)(puVar6 + 0x2d) = 1;
    *(undefined4 *)(puVar6 + 0x31) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FGeneratePageFlagsFromPixelsCS::FParameters> @ 1457b5e10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FGeneratePageFlagsFromPixelsCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x170,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FGeneratePageFlagsFromPixelsCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xc] = 0;
    puVar6[0xe] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x22] = 0;
    *(undefined4 *)(puVar6 + 0x23) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x124) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    *(undefined1 *)(puVar6 + 0x1d) = 1;
    *(undefined8 *)((longlong)puVar6 + 0x11c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 300) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x13c) = 0x3f800000;
    *(undefined4 *)(puVar6 + 0x2b) = 4;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FVirtualShadowMapProjectionCS::FParameters> @ 1457b5fe0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FVirtualShadowMapProjectionCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1f0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FVirtualShadowMapProjectionCS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xc] = 0;
    puVar6[0xe] = 0;
    puVar6[0x14] = 0;
    puVar6[0x32] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    *(undefined1 *)(puVar6 + 0xd) = 1;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    *(undefined4 *)(puVar6 + 0x33) = 4;
    puVar6[0x16] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x34] = 0;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

// Alloc<FShadowCasterBoundsParameters> @ 1457b6190

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FShadowCasterBoundsParameters * __thiscall
FRDGAllocator::Alloc<FShadowCasterBoundsParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FShadowCasterBoundsParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x220,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FShadowCasterBoundsParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined1 *)(puVar6 + 9) = 1;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    *(undefined1 *)(puVar6 + 0xd) = 1;
    *(undefined1 *)(puVar6 + 0xf) = 1;
    *puVar6 = &___7__TObject_VFShadowCasterBoundsParameters___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xc] = 0;
    puVar6[0xe] = 0;
    puVar6[0x14] = 0;
    *(undefined4 *)(puVar6 + 0x15) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xac) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xb4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xbc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xcc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xd4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xdc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xe4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xec) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0xf4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xfc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x104) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x10c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x114) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x11c) = 0x3f800000;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x24));
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FShadowCasterBoundsParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FShadowCasterBoundsParameters *)(puVar6 + 2);
}

// Alloc<FVirtualShadowMapUniformParameters> @ 1457b6390

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FVirtualShadowMapUniformParameters * __thiscall
FRDGAllocator::Alloc<FVirtualShadowMapUniformParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FVirtualShadowMapUniformParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x160,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FVirtualShadowMapUniformParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined4 *)((longlong)puVar6 + 0x4c) = 0x3f800000;
    *puVar6 = &___7__TObject_VFVirtualShadowMapUniformParameters___FRDGAllocator__6B_;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar6[0xe] = 0;
    *(undefined4 *)(puVar6 + 0xf) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x84) = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x29] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x7c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar6 + 0x8c) = 0x3f800000;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FVirtualShadowMapUniformParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FVirtualShadowMapUniformParameters *)(puVar6 + 2);
}

// Alloc<FComposeVolumetricRTOverScenePS::FParameters> @ 14583cd50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FComposeVolumetricRTOverScenePS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x270,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFParameters_FComposeVolumetricRTOverScenePS___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 3) = 1;
    puVar6[4] = 0;
    puVar6[10] = 0;
    *(undefined4 *)(puVar6 + 0xb) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x5c) = 0x3f800000;
    puVar6[0x10] = 0;
    puVar6[0x12] = 0;
    *(undefined1 *)(puVar6 + 0x13) = 1;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x1c));
    puVar6[0x40] = 0;
    *(undefined4 *)(puVar6 + 0x41) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x20c) = 0x3f800000;
    puVar6[0x44] = 0;
    *(undefined4 *)(puVar6 + 0x45) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x22c) = 0x3f800000;
    puVar6[0x48] = 0;
    *(undefined4 *)(puVar6 + 0x49) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x24c) = 0x3f800000;
    puVar6[0x4a] = 0;
    *(undefined1 *)(puVar6 + 0x4b) = 1;
    puVar6[0x4c] = 0;
    *(undefined1 *)(puVar6 + 0x4d) = 1;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar8 + 2);
}

// Alloc<FInjectShadowedLocalLightPS::FParameters> @ 14583cf40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FInjectShadowedLocalLightPS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  FParameters *pFVar8;
  longlong lVar9;
  undefined8 *local_18 [2];
  
  lVar9 = 0x10;
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x5e0,0x10);
  puVar7 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FParameters *)(*pcVar3)();
      return pFVar8;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFParameters_FInjectShadowedLocalLightPS___FRDGAllocator__6B_;
    puVar7 = puVar6 + 0x1c;
    *(undefined1 *)(puVar6 + 3) = 1;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[8] = 0;
    puVar6[10] = 0;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    do {
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0x3f800000;
      puVar7 = puVar7 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    puVar6[0x48] = 0;
    *(undefined4 *)(puVar6 + 0x49) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x254) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x264) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x24c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x25c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x26c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x274) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x27c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x284) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x28c) = 0x3f800000;
    puVar6[0x52] = 0;
    puVar6[0x53] = 0;
    puVar6[0x54] = 0;
    puVar6[0x55] = 0;
    puVar6[0x56] = 0;
    puVar6[0x8b] = 0;
    puVar6[0x8c] = 0;
    puVar6[0x96] = 0;
    *(undefined4 *)(puVar6 + 0x97) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x4bc) = 0x3f800000;
    puVar6[0x98] = 0;
    puVar6[0x9a] = 0;
    *(undefined1 *)(puVar6 + 0x99) = 1;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x9c));
    puVar7 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar7;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FParameters *)(*pcVar3)();
      return pFVar8;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar7 + 2);
}

// Alloc<FInjectShadowedLocalLightRGS::FParameters> @ 14583d180

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FInjectShadowedLocalLightRGS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  FParameters *pFVar8;
  longlong lVar9;
  undefined8 *local_18 [2];
  
  lVar9 = 0x10;
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x240,0x10);
  puVar7 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FParameters *)(*pcVar3)();
      return pFVar8;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFParameters_FInjectShadowedLocalLightRGS___FRDGAllocator__6B_;
    puVar7 = puVar6 + 0x1c;
    *(undefined1 *)(puVar6 + 3) = 1;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[8] = 0;
    puVar6[10] = 0;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    do {
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0x3f800000;
      puVar7 = puVar7 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    puVar6[0x40] = 0;
    *(undefined1 *)(puVar6 + 0x41) = 1;
    puVar6[0x42] = 0;
    *(undefined1 *)(puVar6 + 0x43) = 1;
    puVar6[0x44] = 0;
    puVar6[0x45] = 0;
    puVar7 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar7;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FParameters *)(*pcVar3)();
      return pFVar8;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar7 + 2);
}

// Alloc<FReconstructVolumetricRenderTargetPS::FParameters> @ 14583d310

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FReconstructVolumetricRenderTargetPS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x200,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFParameters_FReconstructVolumetricRenderTargetPS___FRDGAllocator__6B_;
    *(undefined1 *)(puVar6 + 3) = 1;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0xc));
    puVar6[0x2c] = 0;
    *(undefined4 *)(puVar6 + 0x2d) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x16c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x174) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x17c) = 0x3f800000;
    puVar6[0x36] = 0;
    *(undefined4 *)(puVar6 + 0x37) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1bc) = 0x3f800000;
    puVar6[0x3a] = 0;
    *(undefined4 *)(puVar6 + 0x3b) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1dc) = 0x3f800000;
    puVar8 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar8;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar8 + 2);
}

// Alloc<FVolumetricFogLightScatteringCS::FParameters> @ 14583d4c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FVolumetricFogLightScatteringCS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  FParameters *pFVar8;
  longlong lVar9;
  undefined8 *local_18 [2];
  
  lVar9 = 0x10;
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x5b0,0x10);
  puVar7 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FParameters *)(*pcVar3)();
      return pFVar8;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFParameters_FVolumetricFogLightScatteringCS___FRDGAllocator__6B_;
    puVar7 = puVar6 + 0x1c;
    *(undefined1 *)(puVar6 + 3) = 1;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[8] = 0;
    *(undefined1 *)(puVar6 + 9) = 1;
    puVar6[10] = 0;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    do {
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0x3f800000;
      puVar7 = puVar7 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    puVar6[0x3e] = 0;
    puVar6[0x3f] = 0;
    puVar6[0x40] = 0;
    puVar6[0x41] = 0;
    puVar6[0x42] = 0;
    puVar6[0x43] = 0;
    puVar6[0x44] = 0;
    puVar6[0x45] = 0;
    puVar6[0x46] = 0;
    puVar6[0x47] = 0;
    puVar6[0x48] = 0;
    puVar6[0x49] = 0;
    puVar6[0x4a] = 0;
    puVar6[0x4c] = 0;
    *(undefined1 *)(puVar6 + 0x4d) = 1;
    puVar6[0x4e] = 0;
    *(undefined1 *)(puVar6 + 0x4f) = 1;
    FGlobalDistanceFieldParameters2::FGlobalDistanceFieldParameters2
              ((FGlobalDistanceFieldParameters2 *)(puVar6 + 0x54));
    puVar6[0x96] = 0;
    puVar7 = puVar6;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar7;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FParameters *)(*pcVar3)();
      return pFVar8;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar7 + 2);
}

