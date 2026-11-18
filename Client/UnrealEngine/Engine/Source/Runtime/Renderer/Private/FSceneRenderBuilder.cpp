// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 16

// FSceneRenderBuilder @ 1454785a0

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

FSceneRenderBuilder * __thiscall
FSceneRenderBuilder::FSceneRenderBuilder(FSceneRenderBuilder *this,FSceneInterface *param_1)

{
  FScene *pFVar1;
  FPersistentState *pFVar2;
  
  this->_padding_ = (longlong)&___7FSceneRenderBuilder__6B_;
  pFVar1 = (FScene *)(**(code **)(param_1->_padding_ + 0x420))(param_1);
  this->Scene = pFVar1;
  this->Processor = (FSceneRenderProcessor *)0x0;
  pFVar2 = ::operator_new(0x10);
  if (pFVar2 != (FPersistentState *)0x0) {
    (pFVar2->RenderersToAdd).AllocatorInstance.Data = (FSceneRenderer **)0x0;
    (pFVar2->RenderersToAdd).ArrayNum = 0;
    (pFVar2->RenderersToAdd).ArrayMax = 0;
    this->PersistentState = pFVar2;
    return this;
  }
  this->PersistentState = (FPersistentState *)0x0;
  return this;
}

// ~FSceneRenderBuilder @ 145479720

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

void __thiscall FSceneRenderBuilder::~FSceneRenderBuilder(FSceneRenderBuilder *this)

{
  FPersistentState *pFVar1;
  FSceneRenderer **ppFVar2;
  code *pcVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7FSceneRenderBuilder__6B_;
  if (this->PersistentState != (FPersistentState *)0x0) {
    if ((this->PersistentState->RenderersToAdd).ArrayNum != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PersistentState->RenderersToAdd.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                         ,0x3e9,
                         L"FSceneRenderBuilder::Execute called but %d renderers were not added.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = this->PersistentState;
    if (pFVar1 != (FPersistentState *)0x0) {
      ppFVar2 = (pFVar1->RenderersToAdd).AllocatorInstance.Data;
      if (ppFVar2 != (FSceneRenderer **)0x0) {
        TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(ppFVar2);
      }
      ::operator_delete(pFVar1,0x10);
    }
    this->PersistentState = (FPersistentState *)0x0;
  }
  if (this->Processor != (FSceneRenderProcessor *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                       ,0x3f2,
                       L"SceneRenderBuilder is being destructed without having called Execute.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (this->Processor != (FSceneRenderProcessor *)0x0) {
      FSceneRenderProcessor::_scalar_deleting_destructor_(this->Processor,1);
    }
    this->Processor = (FSceneRenderProcessor *)0x0;
  }
  return;
}

// AddCommand @ 145491c40

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

void __thiscall
FSceneRenderBuilder::AddCommand
          (FSceneRenderBuilder *this,TUniqueFunction<void___cdecl(void)> *param_1)

{
  FGroupNode *pFVar1;
  int *piVar2;
  FOp *pFVar3;
  FSceneRenderProcessor *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  int iVar7;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar8;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar9;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar10;
  bool bVar11;
  undefined4 uStack_14;
  
  LazyInit(this);
  pFVar4 = this->Processor;
  aVar8 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x40,0x10);
  *(undefined8 *)((longlong)aVar8 + 8) = 0;
  *(undefined ***)aVar8 =
       &
       ___7__TObject_V__TUniqueFunction___A6AXXZ_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
  ;
  pFVar1 = (FGroupNode *)((longlong)aVar8 + 0x10);
  aVar9 = (pFVar4->Allocator).Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
     ((longlong)aVar8 + 8) = aVar9;
    LOCK();
    aVar10 = (pFVar4->Allocator).Next;
    bVar11 = aVar9 == aVar10;
    if (bVar11) {
      (pFVar4->Allocator).Next = aVar8;
      aVar10 = aVar9;
    }
    UNLOCK();
    aVar9 = aVar10;
  } while (!bVar11);
  pFVar1->_padding_ = *(longlong *)param_1;
  *(undefined8 *)((longlong)aVar8 + 0x38) = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar6 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)((longlong)aVar8 + 0x20) = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)((longlong)aVar8 + 0x28) = uVar6;
  *(undefined8 *)((longlong)aVar8 + 0x30) = *(undefined8 *)&param_1->field_0x20;
  if (pFVar1->_padding_ != 0) {
    *(undefined8 *)param_1 = 0;
  }
  if ((pFVar1 == (FGroupNode *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Data",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                          ,0x17a,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (pFVar4->Ops).ArrayNum;
  piVar2 = &(pFVar4->Ops).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderProcessor::FOp>_>
                      (0x810,&(pFVar4->Ops).AllocatorInstance,piVar2);
  }
  (pFVar4->Ops).ArrayNum = iVar7 + 1;
  pFVar3 = (pFVar4->Ops).AllocatorInstance.Data + iVar7;
  *(ulonglong *)pFVar3 = CONCAT44(uStack_14,1);
  (pFVar3->field1_0x8).Data_Group = pFVar1;
  return;
}

// AddRenderer @ 145492180

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

void __thiscall
FSceneRenderBuilder::AddRenderer
          (FSceneRenderBuilder *this,FSceneRenderer *param_1,FString *param_2,
          TUniqueFunction<bool___cdecl(FRDGBuilder_&,FSceneRenderFunctionInputs_const_&)> *param_3)

{
  int *piVar1;
  int iVar2;
  FSceneRenderer **ppFVar3;
  code *pcVar4;
  TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FPersistentState *pFVar12;
  
  LazyInit(this);
  pFVar12 = this->PersistentState;
  uVar9 = 0;
  if (0 < (pFVar12->RenderersToAdd).ArrayNum) {
    lVar11 = 0;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar9 < (pFVar12->RenderersToAdd).ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar5 = &pFVar12->RenderersToAdd;
      pFVar12 = this->PersistentState;
      iVar8 = (pFVar12->RenderersToAdd).ArrayNum;
      if (*(FSceneRenderer **)(lVar11 + (longlong)(pTVar5->AllocatorInstance).Data) == param_1) {
        uVar7 = 0;
        if ((int)uVar9 < iVar8) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (pFVar12->RenderersToAdd).ArrayNum;
        ppFVar3 = (pFVar12->RenderersToAdd).AllocatorInstance.Data;
        iVar8 = iVar2 + ~uVar9;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(ppFVar3 + (int)uVar9,ppFVar3 + (iVar2 - iVar8),(longlong)iVar8 << 3);
        }
        piVar1 = &(pFVar12->RenderersToAdd).ArrayNum;
        *piVar1 = *piVar1 + -1;
        goto LAB_14549226b;
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar9 < iVar8);
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("bFoundRenderer",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                     ,0x41a,
                     L"Renderer being added was not created with this scene render builder or is being added twice."
                    );
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14549226b:
  FSceneRenderProcessor::AddRenderer(this->Processor,param_1,param_2,param_3);
  return;
}

// BeginGroup @ 145495740

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

void __thiscall
FSceneRenderBuilder::BeginGroup
          (FSceneRenderBuilder *this,FString *param_1,ESceneRenderGroupFlags param_2)

{
  bool bVar1;
  
  if ((param_2 & GpuCapture) == None) {
    bVar1 = FRDGBuilder::IsDumpingFrame();
    if (!bVar1) goto LAB_14549576b;
  }
  param_2 = param_2 & ~GpuDump;
LAB_14549576b:
  LazyInit(this);
  FSceneRenderProcessor::BeginGroup(this->Processor,param_1,param_2);
  return;
}

// CreateLinkedSceneRenderers @ 14549be30

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

TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> * __thiscall
FSceneRenderBuilder::CreateLinkedSceneRenderers
          (FSceneRenderBuilder *this,
          TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
          *__return_storage_ptr__,TArrayView<FSceneViewFamily_*_const,int> *param_1,
          FHitProxyConsumer *param_2)

{
  TArrayView<FSceneViewFamily_*_const,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  CreateSceneRenderers(this,__return_storage_ptr__,&local_18,param_2,true);
  return __return_storage_ptr__;
}

// CreateSceneRenderer @ 14549c390

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

FSceneRenderer * __thiscall
FSceneRenderBuilder::CreateSceneRenderer(FSceneRenderBuilder *this,FSceneViewFamily *param_1)

{
  TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> *pTVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  FSceneRenderer *pFVar6;
  FSceneViewFamily *local_res8;
  TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> local_28;
  TArrayView<FSceneViewFamily_*_const,int> local_18;
  
  local_18.DataPtr = &local_res8;
  local_18.ArrayNum = 1;
  local_res8 = param_1;
  LazyInit(this);
  FSceneRenderProcessor::CreateSceneRenderers
            (this->Processor,&local_28,&local_18,(FHitProxyConsumer *)0x0,false);
  pTVar1 = &this->PersistentState->RenderersToAdd;
  if (pTVar1 == &local_28) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSceneRenderer *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar3 = local_28.ArrayNum;
  if (local_28.ArrayNum != 0) {
    iVar5 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>_>
                      (8,8,local_28.ArrayNum,&pTVar1->AllocatorInstance,&pTVar1->ArrayNum,
                       &pTVar1->ArrayMax);
    memcpy((((TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> *)
            &pTVar1->AllocatorInstance)->AllocatorInstance).Data + iVar5,
           local_28.AllocatorInstance.Data,(longlong)iVar3 << 3);
    if (0 < local_28.ArrayNum) goto LAB_14549c49b;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FSceneRenderer *)(*pcVar2)();
    return pFVar6;
  }
LAB_14549c49b:
  pFVar6 = *local_28.AllocatorInstance.Data;
  if (local_28.AllocatorInstance.Data != (FSceneRenderer **)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(local_28.AllocatorInstance.Data);
  }
  return pFVar6;
}

// CreateSceneRenderers @ 14549d3d0

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

TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> * __thiscall
FSceneRenderBuilder::CreateSceneRenderers
          (FSceneRenderBuilder *this,
          TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
          *__return_storage_ptr__,TArrayView<FSceneViewFamily_*_const,int> *param_1,
          FHitProxyConsumer *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> *pTVar5;
  TArrayView<FSceneViewFamily_*_const,int> local_18;
  
  LazyInit(this);
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FSceneRenderProcessor::CreateSceneRenderers
            (this->Processor,__return_storage_ptr__,&local_18,param_2,param_3);
  pTVar5 = &this->PersistentState->RenderersToAdd;
  if (pTVar5 == __return_storage_ptr__) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  iVar1 = __return_storage_ptr__->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>_>
                      (8,8,iVar1,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,&pTVar5->ArrayMax);
    memcpy((((TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> *)
            &pTVar5->AllocatorInstance)->AllocatorInstance).Data + iVar4,
           (__return_storage_ptr__->AllocatorInstance).Data,(longlong)iVar1 << 3);
  }
  return __return_storage_ptr__;
}

// EndGroup @ 1454a1c90

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

void __thiscall FSceneRenderBuilder::EndGroup(FSceneRenderBuilder *this)

{
  int *piVar1;
  FOp *pFVar2;
  FSceneRenderProcessor *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FRenderNode *pFVar7;
  undefined4 uStack_14;
  
  if ((this->Processor == (FSceneRenderProcessor *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Processor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                         ,0x432,L"EndGroup called on an empty scene render builder."), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = this->Processor;
  if ((!pFVar3->bInsideGroup) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInsideGroup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                         ,0x26a,L"EndGroup called without a matching BeginGroup"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pFVar3->GroupNodes).Sentinel.Next == (FGroupNode *)&pFVar3->GroupNodes) {
    pFVar7 = (FRenderNode *)0x0;
  }
  else {
    pFVar7 = (FRenderNode *)(pFVar3->GroupNodes).Sentinel.Prev;
    if (pFVar7 != (FRenderNode *)0x0) goto LAB_1454a1d3e;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Data",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                     ,0x18c,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1454a1d3e:
  iVar6 = (pFVar3->Ops).ArrayNum;
  piVar1 = &(pFVar3->Ops).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderProcessor::FOp>_>
                      (0x810,&(pFVar3->Ops).AllocatorInstance,piVar1);
  }
  (pFVar3->Ops).ArrayNum = iVar6 + 1;
  pFVar2 = (pFVar3->Ops).AllocatorInstance.Data + iVar6;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,3);
  (pFVar2->field1_0x8).Data_Render = pFVar7;
  pFVar3->bInsideGroup = false;
  return;
}

// Execute @ 1454a49d0

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

void __thiscall FSceneRenderBuilder::Execute(FSceneRenderBuilder *this)

{
  if (this->Processor != (FSceneRenderProcessor *)0x0) {
    FSceneRenderProcessor::Execute(this->Processor);
    this->Processor = (FSceneRenderProcessor *)0x0;
  }
  return;
}

// GetAllocator @ 1454a7470

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

TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> * __thiscall
FSceneRenderBuilder::GetAllocator(FSceneRenderBuilder *this)

{
  LazyInit(this);
  return &this->Processor->Allocator;
}

// GetAsyncCleanupTask @ 1454a74a0

TRefCountPtr<FBaseGraphTask> * __cdecl FSceneRenderBuilder::GetAsyncCleanupTask(void)

{
  return &FSceneRenderProcessor::AsyncTasks.Cleanup;
}

// IsCompatible @ 1454ac050

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

bool __thiscall
FSceneRenderBuilder::IsCompatible(FSceneRenderBuilder *this,FEngineShowFlags *param_1)

{
  FSceneRenderProcessor *pFVar1;
  
  pFVar1 = this->Processor;
  if (((pFVar1 != (FSceneRenderProcessor *)0x0) && ((pFVar1->Renderers).ArrayNum != 0)) &&
     ((((param_1->HitProxies ^ pFVar1->CommonShowFlags) & HitProxies) != None ||
      (((pFVar1->CommonShowFlags >> 1 ^ param_1->PathTracing) & 1) != 0)))) {
    return false;
  }
  return true;
}

// LazyInit @ 1454ac3d0

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

void __thiscall FSceneRenderBuilder::LazyInit(FSceneRenderBuilder *this)

{
  TIntrusiveDoubleLinkedList<FSceneRenderProcessor::FGroupNode,FSceneRenderProcessor::FGroupNode>
  *pTVar1;
  FSceneRenderProcessor *pFVar2;
  TIntrusiveDoubleLinkedList<FSceneRenderProcessor::FRenderNode,FSceneRenderProcessor::FRenderNode>
  *pTVar3;
  
  if (this->Processor == (FSceneRenderProcessor *)0x0) {
    pFVar2 = ::operator_new(0xd8);
    if (pFVar2 != (FSceneRenderProcessor *)0x0) {
      pFVar2->Scene = this->Scene;
      (pFVar2->Renderers).AllocatorInstance.Data = (FSceneRenderer **)0x0;
      (pFVar2->Renderers).ArrayNum = 0;
      (pFVar2->Renderers).ArrayMax = 0;
      (pFVar2->ActiveRenderers).AllocatorInstance.Data = (FSceneRenderer **)0x0;
      (pFVar2->ActiveRenderers).ArrayNum = 0;
      (pFVar2->ActiveRenderers).ArrayMax = 0;
      (pFVar2->ActiveViewFamilies).AllocatorInstance.Data = (FViewFamilyInfo **)0x0;
      (pFVar2->ActiveViewFamilies).ArrayNum = 0;
      (pFVar2->ActiveViewFamilies).ArrayMax = 0;
      (pFVar2->ActiveViews).AllocatorInstance.Data = (FViewInfo **)0x0;
      (pFVar2->ActiveViews).ArrayNum = 0;
      (pFVar2->ActiveViews).ArrayMax = 0;
      pTVar3 = &pFVar2->RenderNodes;
      pFVar2->bInsideGroup = false;
      (pFVar2->Ops).AllocatorInstance.Data = (FOp *)0x0;
      (pFVar2->Ops).ArrayNum = 0;
      (pFVar2->Ops).ArrayMax = 0;
      (pTVar3->Sentinel).Next = (FRenderNode *)pTVar3;
      (pFVar2->RenderNodes).Sentinel.Prev = (FRenderNode *)pTVar3;
      pTVar1 = &pFVar2->GroupNodes;
      (pTVar1->Sentinel).Next = (FGroupNode *)pTVar1;
      (pFVar2->GroupNodes).Sentinel.Prev = (FGroupNode *)pTVar1;
      (pFVar2->Allocator).Next =
           (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
           0x0;
      pFVar2->CommonShowFlags = None;
      (pFVar2->RenderState).Group = (FGroupNode *)0x0;
      (pFVar2->RenderState).GroupEvent.Event.bIsSet = false;
      (pFVar2->RenderState).FullPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar2->RenderState).FullPath.Data.ArrayNum = 0;
      (pFVar2->RenderState).FullPath.Data.ArrayMax = 0;
      (pFVar2->RenderState).bSceneUpdateConsumed = false;
      this->Processor = pFVar2;
      return;
    }
    this->Processor = (FSceneRenderProcessor *)0x0;
  }
  return;
}

// WaitForAsyncCleanupTask @ 1454c3560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FSceneRenderBuilder::WaitForAsyncCleanupTask(void)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  TRefCountPtr<FBaseGraphTask> TVar4;
  bool bVar5;
  
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                       ,0x283,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (FSceneRenderProcessor::AsyncTasks.Cleanup.Reference != (FBaseGraphTask *)0x0) {
    FBaseGraphTask::Wait
              (FSceneRenderProcessor::AsyncTasks.Cleanup.Reference,AnyNormalThreadNormalTask);
    TVar4 = FSceneRenderProcessor::AsyncTasks.Cleanup;
    if (FSceneRenderProcessor::AsyncTasks.Cleanup.Reference != (FBaseGraphTask *)0x0) {
      FSceneRenderProcessor::AsyncTasks.Cleanup.Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &(TVar4.Reference)->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001454c35db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)TVar4.Reference)(TVar4.Reference,1);
        return;
      }
    }
  }
  return;
}

// WaitForAsyncDeleteTask @ 1454c35f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FSceneRenderBuilder::WaitForAsyncDeleteTask(void)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  TRefCountPtr<FBaseGraphTask> TVar4;
  bool bVar5;
  
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                         ,0x28d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (FSceneRenderProcessor::AsyncTasks.Delete.Reference != (FBaseGraphTask *)0x0) {
    FBaseGraphTask::Wait
              (FSceneRenderProcessor::AsyncTasks.Delete.Reference,AnyNormalThreadNormalTask);
    TVar4 = FSceneRenderProcessor::AsyncTasks.Cleanup;
    FSceneRenderProcessor::AsyncTasks.Cleanup.Reference = (FBaseGraphTask *)0x0;
    if (TVar4.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &(TVar4.Reference)->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)TVar4.Reference)(TVar4.Reference,1);
      }
    }
    TVar4.Reference = FSceneRenderProcessor::AsyncTasks.Delete.Reference;
    FSceneRenderProcessor::AsyncTasks.Delete.Reference = (FBaseGraphTask *)0x0;
    if (TVar4.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &(TVar4.Reference)->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001454c36b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)TVar4.Reference)(TVar4.Reference,1);
        return;
      }
    }
  }
  return;
}

