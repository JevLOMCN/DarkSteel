// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// Alloc<FSceneView_const_,FSceneViewInitOptions_&> @ 1488a49e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneView * __thiscall
FCanvasRenderContext::Alloc<FSceneView_const_,FSceneViewInitOptions_&>
          (FCanvasRenderContext *this,FSceneViewInitOptions *param_1)

{
  int *piVar1;
  FRDGBuilder *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FSceneView *pFVar7;
  undefined8 *local_18 [2];
  
  pFVar2 = this->GraphBuilder;
  puVar6 = FMemStackBase::Alloc((FMemStackBase *)&pFVar2->_padding_,0x1c40,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FSceneView *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &___7__TObject___CBVFSceneView___FRDGAllocator__6B_;
    FSceneView::FSceneView((FSceneView *)(puVar6 + 2),param_1);
  }
  local_18[0] = puVar6;
  if (((undefined8 **)pFVar2->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)pFVar2->_padding_ + *(int *)((longlong)&pFVar2->_padding_ + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FSceneView *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (int)pFVar2->_padding_;
  piVar1 = (int *)((longlong)&pFVar2->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar2->_padding_,piVar1);
  }
  *(int *)&pFVar2->_padding_ = iVar5 + 1;
  *(undefined8 **)(pFVar2->_padding_ + (longlong)iVar5 * 8) = local_18[0];
  return (FSceneView *)(puVar6 + 2);
}

// Alloc<FMeshBatch> @ 1488a4b10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FMeshBatch * __thiscall FCanvasRenderContext::Alloc<FMeshBatch>(FCanvasRenderContext *this)

{
  int *piVar1;
  FRDGBuilder *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FMeshBatch *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_18 [2];
  
  pFVar2 = this->GraphBuilder;
  puVar6 = FMemStackBase::Alloc((FMemStackBase *)&pFVar2->_padding_,0xe8,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMeshBatch *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &___7__TObject_UFMeshBatch___FRDGAllocator__6B_;
    puVar6[0x14] = 0;
    *(undefined4 *)(puVar6 + 0x15) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xac) = 1;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    *(undefined4 *)(puVar6 + 0x1a) = 0;
    *(undefined2 *)(puVar6 + 0x1b) = 0;
    puVar6[0x19] = 0xffffffffffffffff;
    *(undefined4 *)((longlong)puVar6 + 0xd4) = 0xffffffff;
    *(uint *)((longlong)puVar6 + 0xdc) = *(uint *)((longlong)puVar6 + 0xdc) & 0xf081803c | 0x81803c;
    *(undefined1 *)((longlong)puVar6 + 0xda) = 0xff;
    *(undefined2 *)(puVar6 + 0x1c) = 0xffff;
    *(undefined4 *)(puVar6 + 0x15) = 1;
    puVar8 = (undefined8 *)puVar6[0x14];
    if ((undefined8 *)puVar6[0x14] == (undefined8 *)0x0) {
      puVar8 = puVar6 + 1;
    }
    DefaultConstructItems<FMeshBatchElement,int>(puVar8,1);
  }
  local_18[0] = puVar6;
  if (((undefined8 **)pFVar2->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)pFVar2->_padding_ + *(int *)((longlong)&pFVar2->_padding_ + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMeshBatch *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (int)pFVar2->_padding_;
  piVar1 = (int *)((longlong)&pFVar2->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar2->_padding_,piVar1);
  }
  *(int *)&pFVar2->_padding_ = iVar5 + 1;
  *(undefined8 **)(pFVar2->_padding_ + (longlong)iVar5 * 8) = local_18[0];
  return (FMeshBatch *)(puVar6 + 1);
}

// DeferredDelete<FSceneView> @ 1488a6210

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FCanvasRenderContext::DeferredDelete<FSceneView>(FCanvasRenderContext *this,FSceneView *param_1)

{
  int *piVar1;
  FRDGBuilder *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *local_18 [2];
  
  pFVar2 = this->GraphBuilder;
  local_18[0] = FMemStackBase::Alloc((FMemStackBase *)&pFVar2->_padding_,0x10,0x10);
  if (local_18[0] == (undefined8 *)0x0) {
    local_18[0] = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_18[0][1] = param_1;
    *local_18[0] = &
                   ___7__TObject_UFDeleter__1____DeferredDelete_VFSceneView___FCanvasRenderContext__QEAAXPEBVFSceneView___Z__FRDGAllocator__6B_
    ;
  }
  if (((undefined8 **)pFVar2->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)pFVar2->_padding_ + *(int *)((longlong)&pFVar2->_padding_ + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (int)pFVar2->_padding_;
  piVar1 = (int *)((longlong)&pFVar2->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar2->_padding_,piVar1);
  }
  *(int *)&pFVar2->_padding_ = iVar5 + 1;
  *(undefined8 **)(pFVar2->_padding_ + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// DeferredDelete<FSceneViewFamily> @ 1488a6330

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCanvasRenderContext::DeferredDelete<FSceneViewFamily>
          (FCanvasRenderContext *this,FSceneViewFamily *param_1)

{
  int *piVar1;
  FRDGBuilder *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *local_18 [2];
  
  pFVar2 = this->GraphBuilder;
  local_18[0] = FMemStackBase::Alloc((FMemStackBase *)&pFVar2->_padding_,0x10,0x10);
  if (local_18[0] == (undefined8 *)0x0) {
    local_18[0] = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_18[0][1] = param_1;
    *local_18[0] = &
                   ___7__TObject_UFDeleter__1____DeferredDelete_VFSceneViewFamily___FCanvasRenderContext__QEAAXPEBVFSceneViewFamily___Z__FRDGAllocator__6B_
    ;
  }
  if (((undefined8 **)pFVar2->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)pFVar2->_padding_ + *(int *)((longlong)&pFVar2->_padding_ + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (int)pFVar2->_padding_;
  piVar1 = (int *)((longlong)&pFVar2->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar2->_padding_,piVar1);
  }
  *(int *)&pFVar2->_padding_ = iVar5 + 1;
  *(undefined8 **)(pFVar2->_padding_ + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// DeferredRelease<FCanvasTileRendererItem::FRenderData> @ 1488a6450

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCanvasRenderContext::DeferredRelease<FCanvasTileRendererItem::FRenderData>
          (FCanvasRenderContext *this,TSharedPtr<FCanvasTileRendererItem::FRenderData,1> *param_1)

{
  int *piVar1;
  FRDGBuilder *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *local_18 [2];
  
  pFVar2 = this->GraphBuilder;
  local_18[0] = FMemStackBase::Alloc((FMemStackBase *)&pFVar2->_padding_,0x18,0x10);
  if (local_18[0] == (undefined8 *)0x0) {
    local_18[0] = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    *local_18[0] = &
                   ___7__TObject_V__TSharedPtr_VFRenderData_FCanvasTileRendererItem___00___FRDGAllocator__6B_
    ;
    local_18[0][1] = param_1->Object;
    local_18[0][2] = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FRenderData *)0x0;
  }
  if (((undefined8 **)pFVar2->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)pFVar2->_padding_ + *(int *)((longlong)&pFVar2->_padding_ + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (int)pFVar2->_padding_;
  piVar1 = (int *)((longlong)&pFVar2->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar2->_padding_,piVar1);
  }
  *(int *)&pFVar2->_padding_ = iVar5 + 1;
  *(undefined8 **)(pFVar2->_padding_ + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// DeferredRelease<FCanvasTriangleRendererItem::FRenderData> @ 1488a6590

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCanvasRenderContext::DeferredRelease<FCanvasTriangleRendererItem::FRenderData>
          (FCanvasRenderContext *this,
          TSharedPtr<FCanvasTriangleRendererItem::FRenderData,1> *param_1)

{
  int *piVar1;
  FRDGBuilder *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *local_18 [2];
  
  pFVar2 = this->GraphBuilder;
  local_18[0] = FMemStackBase::Alloc((FMemStackBase *)&pFVar2->_padding_,0x18,0x10);
  if (local_18[0] == (undefined8 *)0x0) {
    local_18[0] = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    *local_18[0] = &
                   ___7__TObject_V__TSharedPtr_VFRenderData_FCanvasTriangleRendererItem___00___FRDGAllocator__6B_
    ;
    local_18[0][1] = param_1->Object;
    local_18[0][2] = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FRenderData *)0x0;
  }
  if (((undefined8 **)pFVar2->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)pFVar2->_padding_ + *(int *)((longlong)&pFVar2->_padding_ + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (int)pFVar2->_padding_;
  piVar1 = (int *)((longlong)&pFVar2->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar2->_padding_,piVar1);
  }
  *(int *)&pFVar2->_padding_ = iVar5 + 1;
  *(undefined8 **)(pFVar2->_padding_ + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// DeferredDelete<FCanvasBaseRenderItem> @ 1488f3c90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCanvasRenderContext::DeferredDelete<FCanvasBaseRenderItem>
          (FCanvasRenderContext *this,FCanvasBaseRenderItem *param_1)

{
  int *piVar1;
  FRDGBuilder *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *local_18 [2];
  
  pFVar2 = this->GraphBuilder;
  local_18[0] = FMemStackBase::Alloc((FMemStackBase *)&pFVar2->_padding_,0x10,0x10);
  if (local_18[0] == (undefined8 *)0x0) {
    local_18[0] = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_18[0][1] = param_1;
    *local_18[0] = &
                   ___7__TObject_UFDeleter__1____DeferredDelete_VFCanvasBaseRenderItem___FCanvasRenderContext__QEAAXPEBVFCanvasBaseRenderItem___Z__FRDGAllocator__6B_
    ;
  }
  if (((undefined8 **)pFVar2->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)pFVar2->_padding_ + *(int *)((longlong)&pFVar2->_padding_ + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (int)pFVar2->_padding_;
  piVar1 = (int *)((longlong)&pFVar2->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar2->_padding_,piVar1);
  }
  *(int *)&pFVar2->_padding_ = iVar5 + 1;
  *(undefined8 **)(pFVar2->_padding_ + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// FCanvasRenderContext @ 148905e60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FCanvasRenderContext * __thiscall
FCanvasRenderContext::FCanvasRenderContext
          (FCanvasRenderContext *this,FRDGBuilder *param_1,FRenderTarget *param_2,
          TIntRect<int> *param_3,TIntRect<int> *param_4,bool param_5)

{
  TIntPoint<int>_u_0 TVar1;
  FRDGTexture *pFVar2;
  
  this->GraphBuilder = param_1;
  pFVar2 = (FRDGTexture *)(**(code **)(param_2->_padding_ + 8))(param_2);
  this->RenderTarget = pFVar2;
  (this->ViewportRect).field0_0x0._s_0.Min.field0_0x0 = (param_3->field0_0x0)._s_0.Min.field0_0x0;
  (this->ViewportRect).field0_0x0._s_0.Max.field0_0x0 = (param_3->field0_0x0)._s_0.Max.field0_0x0;
  (this->ScissorRect).field0_0x0._s_0.Min.field0_0x0 = (param_4->field0_0x0)._s_0.Min.field0_0x0;
  (this->ScissorRect).field0_0x0._s_0.Max.field0_0x0 = (param_4->field0_0x0)._s_0.Max.field0_0x0;
  if (((*(int *)((longlong)&(this->ViewportRect).field0_0x0 + 0xc) -
       *(int *)((longlong)&(this->ViewportRect).field0_0x0 + 4)) *
       (*(int *)((longlong)&(this->ViewportRect).field0_0x0 + 8) -
       *(int *)&(this->ViewportRect).field0_0x0) < 1) || (param_5)) {
    TVar1 = *(TIntPoint<int>_u_0 *)&(this->RenderTarget->Desc).field_0x24;
    (this->ViewportRect).field0_0x0._s_0.Min.field0_0x0._s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    (this->ViewportRect).field0_0x0._s_0.Max.field0_0x0 = TVar1;
  }
  return this;
}

// operator() @ 14890fc60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`FCanvasRenderContext::
AddPass<`FCanvasBatchedElementRenderItem::Render_GameThread'::__l6::<lambda_1>,FRenderTargetParameters>'
::__l2::<lambda_1>::operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FScriptContainerElement *pFVar1;
  FBatchedElements *this_00;
  FScriptContainerElement *pFVar2;
  undefined1 auStackY_1cf8 [32];
  TIntRect<int>_u_0 local_1ca8 [2];
  FMeshPassProcessorRenderState local_1c88;
  FSceneView local_1c48;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x14890fc75;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1cf8;
  FRHICommandList::SetViewport
            (param_2,(float)*(int *)((longlong)this + 0x10),(float)*(int *)((longlong)this + 0x14),
             0.0,(float)*(int *)((longlong)this + 0x18),(float)*(int *)((longlong)this + 0x1c),
             __real_3f800000);
  if (0 < (int)((*(uint *)((longlong)this + 0xc) - *(uint *)((longlong)this + 4)) *
               (*(uint *)((longlong)this + 8) - *(uint *)this))) {
    FRHICommandList::SetScissorRect
              (param_2,true,*(uint *)this,*(uint *)((longlong)this + 4),
               *(uint *)((longlong)this + 8),*(uint *)((longlong)this + 0xc));
  }
  local_1ca8[0]._8_4_ = *(undefined4 *)((longlong)this + 0x2c);
  local_1ca8[0]._12_4_ = *(undefined4 *)((longlong)this + 0x30);
  local_1ca8[0]._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  FBatchedElements::CreateProxySceneView
            (&local_1c48,(TMatrix<double> *)(*(longlong *)((longlong)this + 0x20) + 0xb0),
             (TIntRect<int> *)&local_1ca8[0]._s_0);
  local_1c88.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_1c88.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_1c88.InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_1c88.PassUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_1c88.DepthStencilAccess = DepthRead_StencilRead;
  local_1c88.ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_1c88.NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_1c88.StencilRef = 0;
  FBatchedElements::Draw
            (*(FBatchedElements **)((longlong)this + 0x20),param_2,&local_1c88,
             *(Type *)((longlong)this + 0x3c),&local_1c48,
             (bool)(*(byte *)((longlong)this + 0x28) & 1),*(float *)((longlong)this + 0x34),All,1);
  if ((*(char *)((longlong)this + 0x38) != '\0') &&
     (this_00 = *(FBatchedElements **)((longlong)this + 0x20), this_00 != (FBatchedElements *)0x0))
  {
    pFVar2 = this_00[1].LineVertices.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      pFVar1 = pFVar2 + 8;
      *(int *)pFVar1 = *(int *)pFVar1 + -1;
      if (*(int *)pFVar1 == 0) {
        (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
      }
    }
    FBatchedElements::~FBatchedElements(this_00);
    ::operator_delete(this_00,0x180);
  }
  FSceneView::~FSceneView(&local_1c48);
  return;
}

// operator() @ 14890fe40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`FCanvasRenderContext::
AddPass<`FCanvasBatchedElementRenderItem::Render_RenderThread'::__l6::<lambda_1>,FRenderTargetParameters>'
::__l2::<lambda_1>::operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  FBatchedElements *this_00;
  longlong lVar3;
  float fVar4;
  longlong lVar5;
  undefined4 *puVar6;
  FSceneView *pFVar7;
  float fVar8;
  undefined1 auStackY_1ce8 [32];
  TIntRect<int>_u_0 local_1c98;
  undefined1 local_1c88 [8];
  undefined1 local_1c80 [8];
  FSceneView local_1c78;
  ulonglong local_48;
  
  fVar4 = __real_3f800000;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1ce8;
  FRHICommandList::SetViewport
            (param_2,(float)*(int *)((longlong)this + 0x10),(float)*(int *)((longlong)this + 0x14),
             0.0,(float)*(int *)((longlong)this + 0x18),(float)*(int *)((longlong)this + 0x1c),
             __real_3f800000);
  if (0 < (int)((*(uint *)((longlong)this + 8) - *(uint *)this) *
               (*(uint *)((longlong)this + 0xc) - *(uint *)((longlong)this + 4)))) {
    FRHICommandList::SetScissorRect
              (param_2,true,*(uint *)this,*(uint *)((longlong)this + 4),
               *(uint *)((longlong)this + 8),*(uint *)((longlong)this + 0xc));
  }
  plVar2 = *(longlong **)(*(longlong *)((longlong)this + 0x68) + 0x58);
  fVar8 = (float)(**(code **)(*plVar2 + 0x30))(plVar2);
  this_00 = *(FBatchedElements **)((longlong)this + 0x20);
  lVar3 = *(longlong *)(*(longlong *)((longlong)this + 0x68) + 0x60);
  lVar5 = (**(code **)(*plVar2 + 0x28))(plVar2,local_1c88);
  uVar1 = *(undefined4 *)(lVar5 + 4);
  puVar6 = (undefined4 *)(**(code **)(*plVar2 + 0x28))(plVar2,local_1c80);
  local_1c98._8_4_ = *puVar6;
  local_1c98._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_1c98._12_4_ = uVar1;
  pFVar7 = FBatchedElements::CreateProxySceneView
                     (&local_1c78,(TMatrix<double> *)(*(longlong *)((longlong)this + 0x20) + 0xb0),
                      (TIntRect<int> *)&local_1c98._s_0);
  FBatchedElements::Draw
            (this_00,param_2,(FMeshPassProcessorRenderState *)((longlong)this + 0x28),
             *(Type *)(*(longlong *)((longlong)this + 0x68) + 0x9c),pFVar7,lVar3 != 0,fVar4 / fVar8,
             All,1);
  FSceneView::~FSceneView(&local_1c78);
  return;
}

