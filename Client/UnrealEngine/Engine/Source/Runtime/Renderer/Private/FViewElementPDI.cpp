// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 11

// operator() @ 1448f3620

void __thiscall
`FViewElementPDI::RegisterDynamicResource'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FDynamicPrimitiveResource **ppFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FDynamicPrimitiveResource_*> *pFVar6;
  
  lVar2 = *(longlong *)this;
  ppFVar1 = (FDynamicPrimitiveResource **)((longlong)this + 8);
  pFVar6 = (ForElementType<FDynamicPrimitiveResource_*> *)(lVar2 + 0x1ff0);
  if ((pFVar6->Data <= ppFVar1) && (ppFVar1 < pFVar6->Data + *(int *)(lVar2 + 0x1ffc))) {
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
  iVar5 = *(int *)(lVar2 + 0x1ff8);
  if (iVar5 == *(int *)(lVar2 + 0x1ffc)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveResource_*>_>
                      (0x808,pFVar6,(int *)(lVar2 + 0x1ffc));
  }
  *(int *)(lVar2 + 0x1ff8) = iVar5 + 1;
  pFVar6->Data[iVar5] = *ppFVar1;
                    /* WARNING: Could not recover jumptable at 0x0001448f36dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**ppFVar1)(*ppFVar1,param_1);
  return;
}

// operator() @ 1448f36f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FViewElementPDI::DrawMesh'::__l16::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = 0;
  lVar7 = *(longlong *)this;
  cVar2 = *(char *)(*(longlong *)(lVar7 + 0xa8) + 0x138);
  if (0 < *(int *)(lVar7 + 0xa0)) {
    lVar8 = 0;
    do {
      uVar9 = ~uVar10 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar10 < *(int *)(lVar7 + 0xa0)) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar7 = *(longlong *)this;
      if (cVar2 < '\0') {
        uVar6 = 0;
        if ((int)uVar10 < *(int *)(lVar7 + 0xa0)) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)(lVar7 + 0x98) != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x98);
        }
        if ((*(longlong *)(lVar7 + 8 + lVar8) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("bPrimitiveShaderDataComesFromSceneBuffer || NewMesh->Elements[ElementIndex].PrimitiveUniformBufferResource != 0"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicPrimitiveDrawing.inl"
                               ,0xf1,
                               L"FMeshBatch was not properly setup.  The primitive uniform buffer must be specified."
                              ), bVar5)) {
code_r0x0001448f38a2:
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        uVar6 = 0;
        if ((int)uVar10 < *(int *)(lVar7 + 0xa0)) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)(lVar7 + 0x98) != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x98);
        }
        if (*(longlong *)(lVar7 + lVar8) != 0) {
          (**(code **)(**(longlong **)(*(longlong *)this + 0xa8) + 0x30))();
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!NewMesh->Elements[ElementIndex].PrimitiveUniformBuffer",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicPrimitiveDrawing.inl"
                             ,0xed,
                             L"FMeshBatch was assigned a PrimitiveUniformBuffer even though Vertex Factory %s fetches primitive shader data through a Scene buffer.  The assigned PrimitiveUniformBuffer cannot be respected.  Use PrimitiveUniformBufferResource instead for dynamic primitive data, or leave both null to get FPrimitiveSceneProxy->UniformBuffer."
                            );
          if (bVar5) goto code_r0x0001448f38a2;
        }
      }
      lVar7 = *(longlong *)this;
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x98;
    } while ((int)uVar10 < *(int *)(lVar7 + 0xa0));
  }
  bVar5 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)*(Type *)((longlong)this + 0x10));
  if ((bVar5) && (-1 < cVar2)) {
    lVar7 = *(longlong *)this;
    uVar10 = 0;
    if (0 < *(int *)(lVar7 + 0xa0)) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar10 < *(int *)(lVar7 + 0xa0)) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)(lVar7 + 0x98) != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x98);
        }
        lVar3 = *(longlong *)(lVar8 + 8 + lVar7);
        if (lVar3 != 0) {
          puVar1 = (uint *)(lVar8 + 0x54 + lVar7);
          *puVar1 = *puVar1 & 0xfffffff9;
          puVar1 = (uint *)(lVar8 + 0x54 + lVar7);
          *puVar1 = *puVar1 | 1;
          (**(code **)**(undefined8 **)((longlong)this + 8))
                    (*(undefined8 **)((longlong)this + 8),*(undefined8 *)(lVar8 + 0x88 + lVar7),
                     *(undefined8 *)(lVar3 + 0x30),*(undefined4 *)(lVar8 + 0x60 + lVar7),
                     lVar7 + 0x90 + lVar8,lVar7 + 0x94 + lVar8);
        }
        lVar7 = *(longlong *)this;
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 0x98;
      } while ((int)uVar10 < *(int *)(lVar7 + 0xa0));
    }
  }
  FMaterialRenderProxy::UpdateUniformExpressionCacheIfNeeded
            (*(FMaterialRenderProxy **)(*(longlong *)this + 0xb0),*(Type *)((longlong)this + 0x10));
  return;
}

// AddReserveLines @ 1448ff4b0

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
FViewElementPDI::AddReserveLines
          (FViewElementPDI *this,uchar param_1,int param_2,bool param_3,bool param_4)

{
  longlong lVar1;
  
  lVar1 = 0x1fc8;
  if (param_1 == '\0') {
    lVar1 = 0x1fc0;
  }
  FBatchedElements::AddReserveLines
            (*(FBatchedElements **)((longlong)&this->ViewInfo->_padding_ + lVar1),param_2,param_3,
             param_4);
  return;
}

// DrawLine @ 14490e140

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
FViewElementPDI::DrawLine
          (FViewElementPDI *this,TVector<double> *param_1,TVector<double> *param_2,
          FLinearColor *param_3,uchar param_4,float param_5,float param_6,bool param_7)

{
  HHitProxy *pHVar1;
  FHitProxyId FVar2;
  longlong lVar3;
  
  lVar3 = 0x1fc8;
  if (param_4 == '\0') {
    lVar3 = 0x1fc0;
  }
  pHVar1 = (this->CurrentHitProxy).Reference;
  if (pHVar1 == (HHitProxy *)0x0) {
    FVar2.Index = -1;
  }
  else {
    FVar2.Index = (pHVar1->Id).Index;
  }
  FBatchedElements::AddLine
            (*(FBatchedElements **)((longlong)&this->ViewInfo->_padding_ + lVar3),param_1,param_2,
             param_3,FVar2,param_5,param_6,param_7);
  return;
}

// DrawMesh @ 14490e190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

int __thiscall FViewElementPDI::DrawMesh(FViewElementPDI *this,FMeshBatch *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ForElementType<FMeshBatchElement> FVar3;
  HHitProxy *pHVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FMeshBatch *pFVar10;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar11;
  ForElementType<FMeshBatchElement> FVar12;
  code **ppcVar13;
  ForElementType<void_*> *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStackY_118 [32];
  FMeshBatch *local_c8;
  FMeshBatch *local_c0;
  FGPUScenePrimitiveCollector *pFStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if ((this->DynamicPrimitiveCollector == (FGPUScenePrimitiveCollector *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicPrimitiveCollector",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicPrimitiveDrawing.inl"
                         ,0xcb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
  lVar18 = (longlong)(param_1->Elements).ArrayNum;
  uVar16 = 0;
  bVar6 = true;
  if (0 < lVar18) {
    lVar17 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar16 < (param_1->Elements).ArrayNum) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      FVar3 = (param_1->Elements).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FMeshBatchElement>)param_1;
      if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
        FVar12 = FVar3;
      }
      if (((bVar6) && (*(int *)(lVar17 + 0x5c + (longlong)FVar12) != 0)) &&
         (*(int *)(lVar17 + 0x60 + (longlong)FVar12) != 0)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 0x98;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    if (!bVar6) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5059737943048978227>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicPrimitiveDrawing.inl"
                         ,0xcd,"MeshBatchHasPrimitives(Mesh)");
      if (!bVar6) {
        return 0;
      }
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
  }
  this->ViewInfo->bHasTranslucentViewMeshElements = 1;
  lVar18 = 0x1fe0;
  if (param_1->DepthPriorityGroup != 1) {
    lVar18 = 0x1fd0;
  }
  pFVar14 = (ForElementType<void_*> *)((longlong)&this->ViewInfo->_padding_ + lVar18);
  pFVar10 = ::operator_new(0xe0);
  if (pFVar10 == (FMeshBatch *)0x0) {
    pFVar10 = (FMeshBatch *)0x0;
  }
  else {
    pFVar10 = FMeshBatch::FMeshBatch(pFVar10,param_1);
  }
  local_c8 = pFVar10;
  if (((pFVar14->Data <= &local_c8) &&
      (&local_c8 < pFVar14->Data + *(int *)((longlong)&pFVar14[1].Data + 4))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
  iVar8 = *(int *)&pFVar14[1].Data;
  piVar1 = (int *)((longlong)&pFVar14[1].Data + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<void_*>_>
                      (0x808,pFVar14,piVar1);
  }
  *(int *)&pFVar14[1].Data = iVar8 + 1;
  pFVar14->Data[iVar8] = local_c8;
  pHVar4 = (this->CurrentHitProxy).Reference;
  if (pHVar4 != (HHitProxy *)0x0) {
    (pFVar10->BatchHitProxyId).Index = (pHVar4->Id).Index;
  }
  pFStack_b8 = this->DynamicPrimitiveCollector;
  local_a8[0] = (code *)0x0;
  local_b0 = (undefined4)this->ViewInfo->_padding_;
  local_c0 = pFVar10;
  local_80 = FMemory::Malloc(0x20,8);
  *local_80 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__BA___DrawMesh_FViewElementPDI__UEAAHAEBUFMeshBatch___Z__00_00_Function_Private_Core_UE__6B_
  ;
  local_80[1] = (code *)local_c0;
  local_80[2] = (code *)pFStack_b8;
  local_80[3] = (code *)CONCAT44(uStack_ac,local_b0);
  if (local_80 + 1 != (code **)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FViewElementPDI::DrawMesh'::__l16::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FViewElementPDI::DrawMesh_::__l16::TSTR_FCopyDynamicPrimitiveShaderData225>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_80 = (code **)0x0;
    local_78._16_8_ = local_98[0];
    local_78._24_8_ = local_98[1];
    local_78._32_8_ = local_98[2];
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar11 = (FRenderCommandTag *)
              TRenderCommandTag<`FViewElementPDI::DrawMesh'::__l16::TSTR_FCopyDynamicPrimitiveShaderData225>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar11);
    uVar15 = (ulonglong)local_48;
    if ((2 < uVar15) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        ppcVar13 = (code **)(local_78 + 0x10);
        if (local_50 != (code **)0x0) {
          ppcVar13 = local_50;
        }
        (**(code **)(*ppcVar13 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    ppcVar13 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar13 = local_80;
    }
    (**(code **)(*ppcVar13 + 0x10))();
  }
  return 1;
}

// DrawPoint @ 14490e560

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
FViewElementPDI::DrawPoint
          (FViewElementPDI *this,TVector<double> *param_1,FLinearColor *param_2,float param_3,
          uchar param_4)

{
  longlong *plVar1;
  double dVar2;
  HHitProxy *pHVar3;
  FHitProxyId FVar4;
  longlong lVar5;
  double dVar6;
  
  plVar1 = &this->ViewInfo->_padding_;
  if (__real_3ff0000000000000 < (double)*plVar1 || __real_3ff0000000000000 == (double)*plVar1) {
    dVar6 = (double)(float)*(double *)(this->_padding_ + 0x3b0);
    dVar2 = *(double *)(this->_padding_ + 0x3d8);
    if (dVar2 <= dVar6) {
      dVar6 = dVar2;
    }
    param_3 = param_3 / (float)dVar6;
  }
  lVar5 = 0x1fc8;
  if (param_4 == '\0') {
    lVar5 = 0x1fc0;
  }
  pHVar3 = (this->CurrentHitProxy).Reference;
  if (pHVar3 == (HHitProxy *)0x0) {
    FVar4.Index = -1;
  }
  else {
    FVar4.Index = (pHVar3->Id).Index;
  }
  FBatchedElements::AddPoint
            (*(FBatchedElements **)((longlong)&this->ViewInfo->_padding_ + lVar5),param_1,param_3,
             param_2,FVar4);
  return;
}

// DrawSprite @ 14490e690

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
FViewElementPDI::DrawSprite
          (FViewElementPDI *this,TVector<double> *param_1,float param_2,float param_3,
          FTexture *param_4,FLinearColor *param_5,uchar param_6,float param_7,float param_8,
          float param_9,float param_10,uchar param_11,float param_12)

{
  HHitProxy *pHVar1;
  FHitProxyId FVar2;
  longlong lVar3;
  
  lVar3 = 0x1fc8;
  if (param_6 == '\0') {
    lVar3 = 0x1fc0;
  }
  pHVar1 = (this->CurrentHitProxy).Reference;
  if (pHVar1 == (HHitProxy *)0x0) {
    FVar2.Index = -1;
  }
  else {
    FVar2.Index = (pHVar1->Id).Index;
  }
  FBatchedElements::AddSprite
            (*(FBatchedElements **)((longlong)&this->ViewInfo->_padding_ + lVar3),param_1,param_2,
             param_3,param_4,param_5,FVar2,param_7,param_8,param_9,param_10,param_11,param_12);
  return;
}

// DrawTranslucentLine @ 14490e6e0

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
FViewElementPDI::DrawTranslucentLine
          (FViewElementPDI *this,TVector<double> *param_1,TVector<double> *param_2,
          FLinearColor *param_3,uchar param_4,float param_5,float param_6,bool param_7)

{
  HHitProxy *pHVar1;
  FHitProxyId FVar2;
  longlong lVar3;
  
  lVar3 = 0x1fc8;
  if (param_4 == '\0') {
    lVar3 = 0x1fc0;
  }
  pHVar1 = (this->CurrentHitProxy).Reference;
  if (pHVar1 == (HHitProxy *)0x0) {
    FVar2.Index = -1;
  }
  else {
    FVar2.Index = (pHVar1->Id).Index;
  }
  FBatchedElements::AddTranslucentLine
            (*(FBatchedElements **)((longlong)&this->ViewInfo->_padding_ + lVar3),param_1,param_2,
             param_3,FVar2,param_5,param_6,param_7);
  return;
}

// IsHitTesting @ 14492a520

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

bool __thiscall FViewElementPDI::IsHitTesting(FViewElementPDI *this)

{
  return this->HitProxyConsumer != (FHitProxyConsumer *)0x0;
}

// RegisterDynamicResource @ 14492ced0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FViewElementPDI::RegisterDynamicResource(FViewElementPDI *this,FDynamicPrimitiveResource *param_1)

{
  int *piVar1;
  FViewInfo *pFVar2;
  FDynamicPrimitiveResource **ppFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  undefined ***pppuVar8;
  longlong lVar9;
  ulonglong uVar10;
  TArray<FDynamicPrimitiveResource_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar11;
  undefined1 auStack_e8 [32];
  FDynamicPrimitiveResource **local_c8;
  FDynamicPrimitiveResource **local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  FDynamicPrimitiveResource *local_98 [2];
  code *local_88 [2];
  undefined **local_78;
  FViewInfo *pFStack_70;
  FDynamicPrimitiveResource *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FViewInfo *pFStack_40;
  FDynamicPrimitiveResource *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_98[0] = param_1;
  bVar5 = IsInGameThread();
  pFVar2 = this->ViewInfo;
  if (bVar5) {
    local_60 = (undefined ***)0x0;
    local_78 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4__RegisterDynamicResource_FViewElementPDI__UEAAXPEAVFDynamicPrimitiveResource___Z__00_0A__Function_Private_Core_UE__6B_
    ;
    local_68 = local_98[0];
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FViewElementPDI::RegisterDynamicResource'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = pFVar2;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FViewElementPDI::RegisterDynamicResource_::__l5::TSTR_AddViewInfoDynamicResource60>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`FViewElementPDI::RegisterDynamicResource'::__l5::TSTR_AddViewInfoDynamicResource60>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar7);
      uVar10 = (ulonglong)local_28;
      if (2 < uVar10) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar8 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar8 = local_30;
          }
          (*(code *)(*pppuVar8)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar8 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar8 = local_60;
      }
      (*(code *)(*pppuVar8)[2])();
    }
  }
  else {
    pTVar11 = &pFVar2->DynamicResources;
    ppFVar3 = (pTVar11->AllocatorInstance).Data;
    if ((ppFVar3 <= local_98) &&
       (lVar9 = (longlong)(pFVar2->DynamicResources).ArrayMax, local_98 < ppFVar3 + lVar9)) {
      local_b0 = (longlong)(pFVar2->DynamicResources).ArrayNum;
      local_a8 = 8;
      local_c8 = local_98;
      local_c0 = ppFVar3;
      local_b8 = lVar9;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (pFVar2->DynamicResources).ArrayNum;
    piVar1 = &(pFVar2->DynamicResources).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveResource_*>_>
                        (0x808,&pTVar11->AllocatorInstance,piVar1);
    }
    (pFVar2->DynamicResources).ArrayNum = iVar6 + 1;
    (pTVar11->AllocatorInstance).Data[iVar6] = local_98[0];
    pcVar4 = *(code **)*local_98[0];
    bVar5 = IsInRenderingThread();
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (*pcVar4)(local_98[0],0x154be5ed0);
  }
  return;
}

// SetHitProxy @ 144930ca0

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

void __thiscall FViewElementPDI::SetHitProxy(FViewElementPDI *this,HHitProxy *param_1)

{
  longlong *plVar1;
  HHitProxy *pHVar2;
  FHitProxyConsumer *pFVar3;
  
  pHVar2 = (this->CurrentHitProxy).Reference;
  if (pHVar2 != param_1) {
    (this->CurrentHitProxy).Reference = param_1;
    if (param_1 != (HHitProxy *)0x0) {
      *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    }
    if (pHVar2 != (HHitProxy *)0x0) {
      plVar1 = &pHVar2->_padding_;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)pHVar2->_padding_)(pHVar2,1);
      }
    }
  }
  pFVar3 = this->HitProxyConsumer;
  if ((pFVar3 != (FHitProxyConsumer *)0x0) && (param_1 != (HHitProxy *)0x0)) {
    (**(code **)*pFVar3)(pFVar3,param_1);
  }
  return;
}

