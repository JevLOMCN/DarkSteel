// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 15

// AllocObject<FSlateSceneViewAllocator,FSlateRHIResourceManager_&,FSlateSceneViewAllocateInputs_const_&> @ 145fda910

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FSlateSceneViewAllocator * __thiscall
FRDGBuilder::
AllocObject<FSlateSceneViewAllocator,FSlateRHIResourceManager_&,FSlateSceneViewAllocateInputs_const_&>
          (FRDGBuilder *this,FSlateRHIResourceManager *param_1,
          FSlateSceneViewAllocateInputs *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FSlateSceneViewAllocator *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0xf0,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSlateSceneViewAllocator *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *puVar5 = &___7__TObject_VFSlateSceneViewAllocator___FRDGAllocator__6B_;
    FSlateSceneViewAllocator::FSlateSceneViewAllocator
              ((FSlateSceneViewAllocator *)(puVar5 + 2),param_1,param_2);
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
      pFVar6 = (FSlateSceneViewAllocator *)(*pcVar2)();
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
  return (FSlateSceneViewAllocator *)(puVar5 + 2);
}

// AllocPOD<FSlateClippingOp> @ 145fdaa50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FSlateClippingOp * __thiscall FRDGBuilder::AllocPOD<FSlateClippingOp>(FRDGBuilder *this)

{
  FSlateClippingOp *pFVar1;
  
  pFVar1 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x20,8);
  return pFVar1;
}

// AllocPOD<FSlateRenderBatchDrawInputs> @ 145fdaa70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSlateRenderBatchDrawInputs * __thiscall
FRDGBuilder::AllocPOD<FSlateRenderBatchDrawInputs>(FRDGBuilder *this)

{
  FSlateRenderBatchDrawInputs *pFVar1;
  
  pFVar1 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x30,8);
  return pFVar1;
}

// AllocPOD<FSlateRenderBatchOp> @ 145fdaa90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSlateRenderBatchOp * __thiscall FRDGBuilder::AllocPOD<FSlateRenderBatchOp>(FRDGBuilder *this)

{
  FSlateRenderBatchOp *pFVar1;
  
  pFVar1 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x48,8);
  return pFVar1;
}

// AllocParameters<FCompositeCS::FParameters> @ 145fdaab0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall FRDGBuilder::AllocParameters<FCompositeCS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x70,0x10);
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
    *(undefined4 *)((longlong)puVar5 + 0x6c) = 0x3f800000;
    *puVar5 = &___7__TObject_VFParameters_FCompositeCS___FRDGAllocator__6B_;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[10] = 0;
    puVar5[0xc] = 0;
    *(undefined4 *)(puVar5 + 0xd) = 0;
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

// AllocParameters<FCompositeHDRForBlurPS::FParameters> @ 145fdabf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FCompositeHDRForBlurPS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x150,0x10);
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
    *puVar5 = &___7__TObject_VFParameters_FCompositeHDRForBlurPS___FRDGAllocator__6B_;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots((FRenderTargetBindingSlots *)(puVar5 + 10))
    ;
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

// AllocParameters<FCompositePS::FParameters> @ 145fdad20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall FRDGBuilder::AllocParameters<FCompositePS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x160,0x10);
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
    *puVar5 = &___7__TObject_VFParameters_FCompositePS___FRDGAllocator__6B_;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar5 + 0xc));
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

// AllocParameters<FSlatePostProcessBlurPS::FParameters> @ 145fdae60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FSlatePostProcessBlurPS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  FParameters *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x540,0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar2)();
      return pFVar7;
    }
  }
  else {
    puVar5[2] = 0;
    *puVar5 = &___7__TObject_VFParameters_FSlatePostProcessBlurPS___FRDGAllocator__6B_;
    puVar8 = puVar5 + 4;
    lVar6 = 0x3f;
    puVar5[3] = 0;
    do {
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0x3f800000;
      puVar8 = puVar8 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    puVar5[0x84] = 0;
    *(undefined4 *)(puVar5 + 0x85) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x42c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar5 + 0x434) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x43c) = 0x3f800000;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar5 + 0x88));
    puVar8 = puVar5;
  }
  local_18[0] = puVar8;
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
      pFVar7 = (FParameters *)(*pcVar2)();
      return pFVar7;
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
  return (FParameters *)(puVar8 + 2);
}

// AllocParameters<FSlatePostProcessColorDeficiencyPS::FParameters> @ 145fdafe0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FSlatePostProcessColorDeficiencyPS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
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
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    puVar5[2] = 0;
    *puVar5 = &___7__TObject_VFParameters_FSlatePostProcessColorDeficiencyPS___FRDGAllocator__6B_;
    puVar5[3] = 0;
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

// AllocParameters<FSlatePostProcessDirectResamplePS::FParameters> @ 145fdb110

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FSlatePostProcessDirectResamplePS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x130,0x10);
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
    *(undefined4 *)((longlong)puVar5 + 0x2c) = 0x3f800000;
    *puVar5 = &___7__TObject_VFParameters_FSlatePostProcessDirectResamplePS___FRDGAllocator__6B_;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    *(undefined4 *)(puVar5 + 5) = 0;
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

// AllocParameters<FSlatePostProcessOptimizedKawaseUpsamplePS::FParameters> @ 145fdb250

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FSlatePostProcessOptimizedKawaseUpsamplePS::FParameters>
          (FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x150,0x10);
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
    *puVar5 = &
              ___7__TObject_VFParameters_FSlatePostProcessOptimizedKawaseUpsamplePS___FRDGAllocator__6B_
    ;
    *(undefined8 *)((longlong)puVar5 + 0x3c) = 0x3f800000;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    *(undefined4 *)(puVar5 + 5) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x4c) = 0x3f800000;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots((FRenderTargetBindingSlots *)(puVar5 + 10))
    ;
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

// AllocParameters<FSlatePostProcessResample2x2PS::FParameters> @ 145fdb3a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FSlatePostProcessResample2x2PS::FParameters>(FRDGBuilder *this)

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
    *(undefined8 *)((longlong)puVar5 + 0x2c) = 0x3f800000;
    *puVar5 = &___7__TObject_VFParameters_FSlatePostProcessResample2x2PS___FRDGAllocator__6B_;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = 0x3f800000;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    *(undefined4 *)(puVar5 + 5) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x34) = 0;
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

// AllocParameters<FSlatePostProcessUpsamplePS::FParameters> @ 145fdb4f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FSlatePostProcessUpsamplePS::FParameters>(FRDGBuilder *this)

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
    *(undefined8 *)((longlong)puVar5 + 0x2c) = 0x3f800000;
    *puVar5 = &___7__TObject_VFParameters_FSlatePostProcessUpsamplePS___FRDGAllocator__6B_;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = 0x3f800000;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    *(undefined4 *)(puVar5 + 5) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x34) = 0;
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

// AllocParameters<FSlateRenderBatchParameters> @ 145fdb640

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FSlateRenderBatchParameters * __thiscall
FRDGBuilder::AllocParameters<FSlateRenderBatchParameters>
          (FRDGBuilder *this,FSlateRenderBatchParameters *param_1)

{
  undefined8 uVar1;
  FRDGTexture *pFVar2;
  FRenderTargetBindingSlots *pFVar3;
  FRenderTargetBindingSlots *pFVar4;
  uchar uVar5;
  short sVar6;
  undefined4 uVar7;
  ERenderTargetLoadAction EVar8;
  FSlateRenderBatchParameters *pFVar9;
  FSlateRenderBatchParameters *pFVar10;
  FSlateRenderBatchParameters *pFVar11;
  longlong lVar12;
  FSlateRenderBatchParameters *pFVar13;
  
  pFVar10 = FRDGAllocator::Alloc<FSlateRenderBatchParameters>((FRDGAllocator *)&this->_padding_);
  lVar12 = 2;
  pFVar9 = pFVar10;
  do {
    pFVar13 = param_1;
    pFVar11 = pFVar9;
    pFVar9 = (FSlateRenderBatchParameters *)((pFVar11->RenderTargets).Output.Elements + 2);
    uVar1 = *(undefined8 *)&(pFVar13->SceneTextures).SceneTextures.field_0x8;
    param_1 = (FSlateRenderBatchParameters *)((pFVar13->RenderTargets).Output.Elements + 2);
    *(undefined8 *)&(pFVar11->SceneTextures).SceneTextures =
         *(undefined8 *)&(pFVar13->SceneTextures).SceneTextures;
    *(undefined8 *)&(pFVar11->SceneTextures).SceneTextures.field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&(pFVar13->SceneTextures).MobileSceneTextures.field_0x8;
    *(undefined8 *)&(pFVar11->SceneTextures).MobileSceneTextures =
         *(undefined8 *)&(pFVar13->SceneTextures).MobileSceneTextures;
    *(undefined8 *)&(pFVar11->SceneTextures).MobileSceneTextures.field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&(pFVar13->ElementsVertexBuffer).field_0x8;
    *(undefined8 *)&pFVar11->ElementsVertexBuffer = *(undefined8 *)&pFVar13->ElementsVertexBuffer;
    *(undefined8 *)&(pFVar11->ElementsVertexBuffer).field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&(pFVar13->ElementsIndexBuffer).field_0x8;
    *(undefined8 *)&pFVar11->ElementsIndexBuffer = *(undefined8 *)&pFVar13->ElementsIndexBuffer;
    *(undefined8 *)&(pFVar11->ElementsIndexBuffer).field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&(pFVar13->SlateView).field_0x8;
    *(undefined8 *)&pFVar11->SlateView = *(undefined8 *)&pFVar13->SlateView;
    *(undefined8 *)&(pFVar11->SlateView).field_0x8 = uVar1;
    pFVar2 = (pFVar13->RenderTargets).Output.Elements[0].ResolveTexture;
    (pFVar11->RenderTargets).Output.Elements[0].Texture =
         (pFVar13->RenderTargets).Output.Elements[0].Texture;
    (pFVar11->RenderTargets).Output.Elements[0].ResolveTexture = pFVar2;
    uVar5 = (pFVar13->RenderTargets).Output.Elements[0].MipIndex;
    sVar6 = (pFVar13->RenderTargets).Output.Elements[0].ArraySlice;
    uVar7 = *(undefined4 *)&(pFVar13->RenderTargets).Output.Elements[0].field_0x14;
    pFVar2 = (pFVar13->RenderTargets).Output.Elements[1].Texture;
    (pFVar11->RenderTargets).Output.Elements[0].LoadAction =
         (pFVar13->RenderTargets).Output.Elements[0].LoadAction;
    (pFVar11->RenderTargets).Output.Elements[0].MipIndex = uVar5;
    (pFVar11->RenderTargets).Output.Elements[0].ArraySlice = sVar6;
    *(undefined4 *)&(pFVar11->RenderTargets).Output.Elements[0].field_0x14 = uVar7;
    (pFVar11->RenderTargets).Output.Elements[1].Texture = pFVar2;
    pFVar3 = &pFVar13->RenderTargets;
    EVar8 = (pFVar3->Output).Elements[1].LoadAction;
    uVar5 = (pFVar3->Output).Elements[1].MipIndex;
    sVar6 = (pFVar3->Output).Elements[1].ArraySlice;
    uVar7 = *(undefined4 *)&(pFVar3->Output).Elements[1].field_0x14;
    (pFVar11->RenderTargets).Output.Elements[1].ResolveTexture =
         (pFVar13->RenderTargets).Output.Elements[1].ResolveTexture;
    pFVar3 = &pFVar11->RenderTargets;
    (pFVar3->Output).Elements[1].LoadAction = EVar8;
    (pFVar3->Output).Elements[1].MipIndex = uVar5;
    (pFVar3->Output).Elements[1].ArraySlice = sVar6;
    *(undefined4 *)&(pFVar3->Output).Elements[1].field_0x14 = uVar7;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  pFVar2 = (pFVar13->RenderTargets).Output.Elements[2].ResolveTexture;
  *(FRDGTexture **)&(pFVar9->SceneTextures).SceneTextures =
       *(FRDGTexture **)&(param_1->SceneTextures).SceneTextures;
  (pFVar11->RenderTargets).Output.Elements[2].ResolveTexture = pFVar2;
  pFVar3 = &pFVar13->RenderTargets;
  uVar5 = (pFVar3->Output).Elements[2].MipIndex;
  sVar6 = (pFVar3->Output).Elements[2].ArraySlice;
  uVar7 = *(undefined4 *)&(pFVar3->Output).Elements[2].field_0x14;
  pFVar2 = (pFVar13->RenderTargets).Output.Elements[3].Texture;
  pFVar4 = &pFVar11->RenderTargets;
  (pFVar4->Output).Elements[2].LoadAction = (pFVar3->Output).Elements[2].LoadAction;
  (pFVar4->Output).Elements[2].MipIndex = uVar5;
  (pFVar4->Output).Elements[2].ArraySlice = sVar6;
  *(undefined4 *)&(pFVar4->Output).Elements[2].field_0x14 = uVar7;
  (pFVar11->RenderTargets).Output.Elements[3].Texture = pFVar2;
  pFVar3 = &pFVar13->RenderTargets;
  EVar8 = (pFVar3->Output).Elements[3].LoadAction;
  uVar5 = (pFVar3->Output).Elements[3].MipIndex;
  sVar6 = (pFVar3->Output).Elements[3].ArraySlice;
  uVar7 = *(undefined4 *)&(pFVar3->Output).Elements[3].field_0x14;
  (pFVar11->RenderTargets).Output.Elements[3].ResolveTexture =
       (pFVar13->RenderTargets).Output.Elements[3].ResolveTexture;
  pFVar3 = &pFVar11->RenderTargets;
  (pFVar3->Output).Elements[3].LoadAction = EVar8;
  (pFVar3->Output).Elements[3].MipIndex = uVar5;
  (pFVar3->Output).Elements[3].ArraySlice = sVar6;
  *(undefined4 *)&(pFVar3->Output).Elements[3].field_0x14 = uVar7;
  pFVar2 = (pFVar13->RenderTargets).Output.Elements[4].ResolveTexture;
  (pFVar11->RenderTargets).Output.Elements[4].Texture =
       (pFVar13->RenderTargets).Output.Elements[4].Texture;
  (pFVar11->RenderTargets).Output.Elements[4].ResolveTexture = pFVar2;
  pFVar3 = &pFVar13->RenderTargets;
  uVar5 = (pFVar3->Output).Elements[4].MipIndex;
  sVar6 = (pFVar3->Output).Elements[4].ArraySlice;
  uVar7 = *(undefined4 *)&(pFVar3->Output).Elements[4].field_0x14;
  pFVar2 = (pFVar13->RenderTargets).Output.Elements[5].Texture;
  pFVar4 = &pFVar11->RenderTargets;
  (pFVar4->Output).Elements[4].LoadAction = (pFVar3->Output).Elements[4].LoadAction;
  (pFVar4->Output).Elements[4].MipIndex = uVar5;
  (pFVar4->Output).Elements[4].ArraySlice = sVar6;
  *(undefined4 *)&(pFVar4->Output).Elements[4].field_0x14 = uVar7;
  (pFVar11->RenderTargets).Output.Elements[5].Texture = pFVar2;
  return pFVar10;
}

// AllocParameters<FSlateRenderBatchParameters> @ 145fdb6f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FSlateRenderBatchParameters * __thiscall
FRDGBuilder::AllocParameters<FSlateRenderBatchParameters>(FRDGBuilder *this)

{
  FSlateRenderBatchParameters *pFVar1;
  
  pFVar1 = FRDGAllocator::Alloc<FSlateRenderBatchParameters>((FRDGAllocator *)&this->_padding_);
  return pFVar1;
}

