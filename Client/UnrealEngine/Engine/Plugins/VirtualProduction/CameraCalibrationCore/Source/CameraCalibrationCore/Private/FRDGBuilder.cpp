// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 11

// AllocParameters<FFillSTDisplacementMapParameters> @ 14d685830

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FFillSTDisplacementMapParameters * __thiscall
FRDGBuilder::AllocParameters<FFillSTDisplacementMapParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FFillSTDisplacementMapParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x140,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FFillSTDisplacementMapParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    puVar5[6] = 0;
    *puVar5 = &___7__TObject_VFFillSTDisplacementMapParameters___FRDGAllocator__6B_;
    puVar5[7] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots((FRenderTargetBindingSlots *)(puVar5 + 8));
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
      pFVar6 = (FFillSTDisplacementMapParameters *)(*pcVar2)();
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
  return (FFillSTDisplacementMapParameters *)(puVar5 + 2);
}

// AllocParameters<FInvertDisplacementParameters> @ 14d685960

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FInvertDisplacementParameters * __thiscall
FRDGBuilder::AllocParameters<FInvertDisplacementParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FInvertDisplacementParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x140,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FInvertDisplacementParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    puVar5[6] = 0;
    *puVar5 = &___7__TObject_VFInvertDisplacementParameters___FRDGAllocator__6B_;
    puVar5[7] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots((FRenderTargetBindingSlots *)(puVar5 + 8));
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
      pFVar6 = (FInvertDisplacementParameters *)(*pcVar2)();
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
  return (FInvertDisplacementParameters *)(puVar5 + 2);
}

// AllocParameters<FAnamorphicDistortionCS::FParameters> @ 14d685a90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FAnamorphicDistortionCS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x80,0x10);
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
    puVar5[4] = 0;
    *puVar5 = &___7__TObject_VFParameters_FAnamorphicDistortionCS___FRDGAllocator__6B_;
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

// AllocParameters<FBlendDistortionDisplacementMapCS::FParameters> @ 14d685bb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FBlendDistortionDisplacementMapCS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0xa0,0x10);
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
    *(undefined8 *)((longlong)puVar5 + 0x2c) = 0x3f800000;
    *puVar5 = &___7__TObject_VFParameters_FBlendDistortionDisplacementMapCS___FRDGAllocator__6B_;
    puVar5[4] = 0;
    *(undefined4 *)(puVar5 + 5) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x3c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar5 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar5 + 0x54) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x5c) = 0x3f800000;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
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

// AllocParameters<FBrownConradyUDDistortionCS::FParameters> @ 14d685d20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FBrownConradyUDDistortionCS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x60,0x10);
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
    puVar5[10] = 0;
    *puVar5 = &___7__TObject_VFParameters_FBrownConradyUDDistortionCS___FRDGAllocator__6B_;
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

// AllocParameters<FCalibratedMapDerivedDataCS::FParameters> @ 14d685e40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FCalibratedMapDerivedDataCS::FParameters>(FRDGBuilder *this)

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
    *puVar5 = &___7__TObject_VFParameters_FCalibratedMapDerivedDataCS___FRDGAllocator__6B_;
    puVar5[4] = 0;
    puVar5[5] = 0;
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

// AllocParameters<FCropDistortionDisplacementMapCS::FParameters> @ 14d685f70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FCropDistortionDisplacementMapCS::FParameters>(FRDGBuilder *this)

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
    *puVar5 = &___7__TObject_VFParameters_FCropDistortionDisplacementMapCS___FRDGAllocator__6B_;
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

// AllocParameters<FCrosshairOverlayPS::FParameters> @ 14d6860a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FCrosshairOverlayPS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x140,0x10);
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
    *(undefined4 *)((longlong)puVar5 + 0x3c) = 0x3f800000;
    *puVar5 = &___7__TObject_VFParameters_FCrosshairOverlayPS___FRDGAllocator__6B_;
    puVar5[6] = 0;
    *(undefined4 *)(puVar5 + 7) = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots((FRenderTargetBindingSlots *)(puVar5 + 8));
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

// AllocParameters<FDisplacementMapBlendPS::FParameters> @ 14d6861d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FDisplacementMapBlendPS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1a0,0x10);
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
    *(undefined8 *)((longlong)puVar5 + 0x2c) = 0x3f800000;
    *puVar5 = &___7__TObject_VFParameters_FDisplacementMapBlendPS___FRDGAllocator__6B_;
    puVar5[4] = 0;
    *(undefined4 *)(puVar5 + 5) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x3c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar5 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar5 + 0x54) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x5c) = 0x3f800000;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar5 + 0x14));
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

// AllocParameters<FSphericalDistortionCS::FParameters> @ 14d686350

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FSphericalDistortionCS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x60,0x10);
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
    puVar5[10] = 0;
    *puVar5 = &___7__TObject_VFParameters_FSphericalDistortionCS___FRDGAllocator__6B_;
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

// AllocParameters<FRecenterSTDisplacementMapParameters> @ 14d686470

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRecenterSTDisplacementMapParameters * __thiscall
FRDGBuilder::AllocParameters<FRecenterSTDisplacementMapParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FRecenterSTDisplacementMapParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x130,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FRecenterSTDisplacementMapParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    puVar5[4] = 0;
    *puVar5 = &___7__TObject_VFRecenterSTDisplacementMapParameters___FRDGAllocator__6B_;
    puVar5[5] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots((FRenderTargetBindingSlots *)(puVar5 + 6));
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
      pFVar6 = (FRecenterSTDisplacementMapParameters *)(*pcVar2)();
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
  return (FRecenterSTDisplacementMapParameters *)(puVar5 + 2);
}

