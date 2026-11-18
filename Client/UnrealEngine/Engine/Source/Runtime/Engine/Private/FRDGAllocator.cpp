// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// Alloc<FSSProfilePreIntegratedPS::FParameters> @ 148433920

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<FSSProfilePreIntegratedPS::FParameters>(FRDGAllocator *this)

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
    *(undefined8 *)((longlong)puVar6 + 0x2c) = 0x3f800000;
    *puVar6 = &___7__TObject_VFParameters_FSSProfilePreIntegratedPS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *(undefined4 *)(puVar6 + 5) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = 0x3f800000;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    *(undefined4 *)(puVar6 + 0xc) = 0xffff0000;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    *(undefined4 *)(puVar6 + 0xf) = 0xffff0000;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    *(undefined4 *)(puVar6 + 0x12) = 0xffff0000;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    *(undefined4 *)(puVar6 + 0x15) = 0xffff0000;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    *(undefined4 *)(puVar6 + 0x18) = 0xffff0000;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    *(undefined4 *)(puVar6 + 0x1b) = 0xffff0000;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    *(undefined4 *)(puVar6 + 0x1e) = 0xffff0000;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    *(undefined4 *)(puVar6 + 0x21) = 0xffff0000;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    *(undefined2 *)(puVar6 + 0x24) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x124) = 0;
    puVar6[0x25] = 0xffffffffffffffff;
    puVar6[0x26] = 0xffffffffffffffff;
    *(undefined4 *)(puVar6 + 0x27) = 0;
    *(undefined2 *)((longlong)puVar6 + 0x13c) = 0;
    puVar6[0x28] = 0;
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

// Alloc<FSkeletalMeshUpdater::FTaskData,FRDGBuilder_&,enum_ERHIPipeline_&> @ 1485e66c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTaskData * __thiscall
FRDGAllocator::Alloc<FSkeletalMeshUpdater::FTaskData,FRDGBuilder_&,enum_ERHIPipeline_&>
          (FRDGAllocator *this,FRDGBuilder *param_1,ERHIPipeline *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ERHIPipeline EVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  FTaskEventBase *pFVar8;
  FRHICommandListBase *this_00;
  FTaskData *pFVar9;
  FRHICommandListBase *pFVar10;
  FQueuedCommandList local_res8;
  undefined8 *local_38 [2];
  TArrayView<FRHICommandListImmediate::FQueuedCommandList,int> local_28;
  
  puVar7 = FMemStackBase::Alloc(&this->MemStack,0x68,0x10);
  pFVar10 = (FRHICommandListBase *)0x0;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FTaskData *)(*pcVar3)();
      return pFVar9;
    }
  }
  else {
    *puVar7 = &___7__TObject_UFTaskData_FSkeletalMeshUpdater___FRDGAllocator__6B_;
    EVar4 = *param_2;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 6) = 0;
    *(ERHIPipeline *)(puVar7 + 8) = EVar4;
    *(bool *)((longlong)puVar7 + 0x41) = (param_1->ParallelSetup).bEnabled;
    pFVar8 = UE::Tasks::Private::FTaskEventBase::Create
                       (
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp(493)"
                       );
    puVar7[9] = pFVar8;
    pFVar8 = UE::Tasks::Private::FTaskEventBase::Create
                       (
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp(494)"
                       );
    puVar7[10] = pFVar8;
    pFVar8 = UE::Tasks::Private::FTaskEventBase::Create
                       (
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp(495)"
                       );
    puVar7[0xb] = pFVar8;
    pFVar8 = UE::Tasks::Private::FTaskEventBase::Create
                       (
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp(496)"
                       );
    puVar7[0xc] = pFVar8;
    if (*(char *)((longlong)puVar7 + 0x41) == '\0') {
      puVar7[7] = param_1->_padding_;
    }
    else {
      this_00 = ::operator_new(0x1bb0);
      if (this_00 != (FRHICommandListBase *)0x0) {
        FRHICommandListBase::FRHICommandListBase
                  (this_00,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1),
                   false);
        pFVar10 = this_00;
      }
      puVar7[7] = pFVar10;
      pFVar10 = (FRHICommandListBase *)param_1->_padding_;
      EVar4 = FRHICommandListBase::SwitchPipeline(pFVar10,*(ERHIPipeline *)(puVar7 + 8));
      local_res8.CmdList = (FRHICommandListBase *)puVar7[7];
      local_28.DataPtr = &local_res8;
      local_28.ArrayNum = 1;
      FRHICommandListImmediate::QueueAsyncCommandListSubmit
                ((FRHICommandListImmediate *)param_1->_padding_,&local_28,Disabled,0);
      FRHICommandListBase::SwitchPipeline(pFVar10,EVar4);
    }
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_38[0] = puVar7;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FTaskData *)(*pcVar3)();
    return pFVar9;
  }
  iVar6 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar6 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38[0];
  return (FTaskData *)(puVar7 + 1);
}

// Alloc<FRenderTextureDeprecationPass> @ 1487691f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRenderTextureDeprecationPass * __thiscall
FRDGAllocator::Alloc<FRenderTextureDeprecationPass>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FRenderTextureDeprecationPass *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x130,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRenderTextureDeprecationPass *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &___7__TObject_VFRenderTextureDeprecationPass___FRDGAllocator__6B_;
    puVar6[2] = 0;
    *(undefined4 *)(puVar6 + 3) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *(undefined4 *)(puVar6 + 8) = 0xffff0000;
    puVar6[9] = 0;
    puVar6[10] = 0;
    *(undefined4 *)(puVar6 + 0xb) = 0xffff0000;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    *(undefined4 *)(puVar6 + 0xe) = 0xffff0000;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    *(undefined4 *)(puVar6 + 0x11) = 0xffff0000;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    *(undefined4 *)(puVar6 + 0x14) = 0xffff0000;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    *(undefined4 *)(puVar6 + 0x17) = 0xffff0000;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    *(undefined4 *)(puVar6 + 0x1a) = 0xffff0000;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    *(undefined4 *)(puVar6 + 0x1d) = 0xffff0000;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    *(undefined2 *)(puVar6 + 0x20) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x104) = 0;
    puVar6[0x21] = 0xffffffffffffffff;
    puVar6[0x22] = 0xffffffffffffffff;
    *(undefined4 *)(puVar6 + 0x23) = 0;
    *(undefined2 *)((longlong)puVar6 + 0x11c) = 0;
    puVar6[0x24] = 0;
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
      pFVar7 = (FRenderTextureDeprecationPass *)(*pcVar3)();
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
  return (FRenderTextureDeprecationPass *)(puVar6 + 2);
}

// Alloc<FCanvas,FRDGCanvasRenderTarget_*,FHitProxyConsumer_*_&,FGameTime_const_&,enum_ERHIFeatureLevel::Type_&,float_&> @ 1488f2fe0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FCanvas * __thiscall
FRDGAllocator::
Alloc<FCanvas,FRDGCanvasRenderTarget_*,FHitProxyConsumer_*_&,FGameTime_const_&,enum_ERHIFeatureLevel::Type_&,float_&>
          (FRDGAllocator *this,FRDGCanvasRenderTarget **param_1,FHitProxyConsumer **param_2,
          FGameTime *param_3,Type *param_4,float *param_5)

{
  int *piVar1;
  float fVar2;
  Type TVar3;
  FHitProxyConsumer *pFVar4;
  FRDGCanvasRenderTarget *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  FCanvas *pFVar12;
  undefined8 *puVar13;
  undefined8 *local_18 [2];
  
  puVar11 = FMemStackBase::Alloc(&this->MemStack,0x128,0x10);
  puVar13 = (undefined8 *)0x0;
  if (puVar11 == (undefined8 *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FCanvas *)(*pcVar7)();
      return pFVar12;
    }
  }
  else {
    *puVar11 = &___7__TObject_VFCanvas___FRDGAllocator__6B_;
    pFVar4 = *param_2;
    fVar2 = *param_5;
    TVar3 = *param_4;
    pFVar5 = *param_1;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[0xe] = 0;
    puVar11[0xc] = pFVar5;
    puVar11[0xd] = pFVar4;
    puVar11[0xf] = 0;
    *(undefined4 *)(puVar11 + 0x10) = 0xffffffff;
    *(undefined1 *)((longlong)puVar11 + 0x84) = 0;
    dVar8 = param_3->WorldTimeSeconds;
    puVar11[0x11] = param_3->RealTimeSeconds;
    puVar11[0x12] = dVar8;
    puVar11[0x13] = *(undefined8 *)&param_3->DeltaRealTimeSeconds;
    puVar11[0x18] = 0;
    puVar11[0x19] = 0;
    puVar11[0x1a] = 0;
    puVar11[0x1b] = 0;
    puVar11[0x1e] = 0;
    *(float *)(puVar11 + 0x17) = fVar2;
    *(Type *)((longlong)puVar11 + 0xa4) = TVar3;
    *(undefined2 *)((longlong)puVar11 + 0xa9) = 0;
    *(undefined4 *)((longlong)puVar11 + 0xb4) = 0;
    *(undefined4 *)(puVar11 + 0x1f) = 0;
    *(undefined4 *)((longlong)puVar11 + 0xfc) = 0x80;
    *(undefined4 *)(puVar11 + 0x20) = 0xffffffff;
    *(undefined4 *)((longlong)puVar11 + 0x104) = 0;
    puVar11[0x22] = 0;
    *(undefined4 *)(puVar11 + 0x23) = 0;
    FCanvas::Construct((FCanvas *)(puVar11 + 1));
    puVar13 = puVar11;
  }
  pFVar6 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar13;
  if ((pFVar6 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar6 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FCanvas *)(*pcVar7)();
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
  return (FCanvas *)(puVar13 + 1);
}

// Alloc<FRenderTargetParameters> @ 1488f3220

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRenderTargetParameters * __thiscall
FRDGAllocator::Alloc<FRenderTargetParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FRenderTargetParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x110,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRenderTargetParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &___7__TObject_VFRenderTargetParameters___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(undefined4 *)(puVar6 + 4) = 0xffff0000;
    puVar6[5] = 0;
    puVar6[6] = 0;
    *(undefined4 *)(puVar6 + 7) = 0xffff0000;
    puVar6[8] = 0;
    puVar6[9] = 0;
    *(undefined4 *)(puVar6 + 10) = 0xffff0000;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    *(undefined4 *)(puVar6 + 0xd) = 0xffff0000;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    *(undefined4 *)(puVar6 + 0x10) = 0xffff0000;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    *(undefined4 *)(puVar6 + 0x13) = 0xffff0000;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    *(undefined4 *)(puVar6 + 0x16) = 0xffff0000;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    *(undefined4 *)(puVar6 + 0x19) = 0xffff0000;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    *(undefined2 *)(puVar6 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xe4) = 0;
    puVar6[0x1d] = 0xffffffffffffffff;
    puVar6[0x1e] = 0xffffffffffffffff;
    *(undefined4 *)(puVar6 + 0x1f) = 0;
    *(undefined2 *)((longlong)puVar6 + 0xfc) = 0;
    puVar6[0x20] = 0;
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
      pFVar7 = (FRenderTargetParameters *)(*pcVar3)();
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
  return (FRenderTargetParameters *)(puVar6 + 2);
}

// Alloc<FFakeStereoRenderingDevice::FScreenUnwrapSlicesPass> @ 148b07f90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FScreenUnwrapSlicesPass * __thiscall
FRDGAllocator::Alloc<FFakeStereoRenderingDevice::FScreenUnwrapSlicesPass>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FScreenUnwrapSlicesPass *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x130,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FScreenUnwrapSlicesPass *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &
              ___7__TObject_VFScreenUnwrapSlicesPass_FFakeStereoRenderingDevice___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    *(undefined4 *)(puVar6 + 3) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *(undefined4 *)(puVar6 + 8) = 0xffff0000;
    puVar6[9] = 0;
    puVar6[10] = 0;
    *(undefined4 *)(puVar6 + 0xb) = 0xffff0000;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    *(undefined4 *)(puVar6 + 0xe) = 0xffff0000;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    *(undefined4 *)(puVar6 + 0x11) = 0xffff0000;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    *(undefined4 *)(puVar6 + 0x14) = 0xffff0000;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    *(undefined4 *)(puVar6 + 0x17) = 0xffff0000;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    *(undefined4 *)(puVar6 + 0x1a) = 0xffff0000;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    *(undefined4 *)(puVar6 + 0x1d) = 0xffff0000;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    *(undefined2 *)(puVar6 + 0x20) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x104) = 0;
    puVar6[0x21] = 0xffffffffffffffff;
    puVar6[0x22] = 0xffffffffffffffff;
    *(undefined4 *)(puVar6 + 0x23) = 0;
    *(undefined2 *)((longlong)puVar6 + 0x11c) = 0;
    puVar6[0x24] = 0;
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
      pFVar7 = (FScreenUnwrapSlicesPass *)(*pcVar3)();
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
  return (FScreenUnwrapSlicesPass *)(puVar6 + 2);
}

