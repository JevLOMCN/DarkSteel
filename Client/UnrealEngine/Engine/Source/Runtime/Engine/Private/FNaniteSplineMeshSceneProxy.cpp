// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FNaniteSplineMeshSceneProxy @ 14870ff20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FNaniteSplineMeshSceneProxy * __thiscall
FNaniteSplineMeshSceneProxy::FNaniteSplineMeshSceneProxy
          (FNaniteSplineMeshSceneProxy *this,FMaterialAudit *param_1,
          FStaticMeshSceneProxyDesc *param_2,FSplineMeshSceneProxyDesc *param_3)

{
  int iVar1;
  Type TVar2;
  FStaticMeshRayTracingProxy *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  TVector2<float>_u_0 TVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  longlong *plVar12;
  FSplineMeshShaderParams *pFVar13;
  FNaniteSplineMeshSceneProxy *pFVar14;
  FMaterialSection *this_00;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  FMaterialSection *pFVar18;
  ulonglong uVar19;
  undefined1 local_res8 [8];
  TSharedPtr<FInstanceDataSceneProxy,1> local_f0;
  FSplineMeshShaderParams local_e0;
  
  local_f0.Object = (FInstanceDataSceneProxy *)0x0;
  local_f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  Nanite::FSceneProxy::FSceneProxy((FSceneProxy *)this,param_1,param_2,&local_f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.SharedReferenceCount.ReferenceController);
  *(undefined ***)&this->field_0xc20 =
       &___7__TSplineMeshSceneProxyCommon_VFNaniteSplineMeshSceneProxy____6B_;
  FSingleInstanceDataBuffers::FSingleInstanceDataBuffers
            ((FSingleInstanceDataBuffers *)&this->field_0xcd8);
  uVar17 = 0;
  this->field_0xdf0 = 1;
  *(undefined8 *)&this->field_0xdf8 = 0;
  *(undefined8 *)&this->field_0xe00 = 0;
  *(undefined8 *)&this->field_0xe08 = 0;
  *(undefined8 *)&this->field_0xe10 = 0;
  *(undefined8 *)&this->field_0xe18 = 0;
  *(undefined4 *)&this->field_0xe20 = 0;
  memset(&this->field_0xc28,0,0xb0);
  bVar10 = false;
  *(undefined8 *)&this->field_0xcc4 = 0xffffffffffffffff;
  this->field_0x83 = this->field_0x83 & 0xfe;
  this->field_0x84 = this->field_0x84 | 0x20;
  *(undefined ***)this = &_vftable__for__Nanite__FSceneProxy__;
  *(undefined ***)&this->field_0xc20 =
       &_vftable__for__TSplineMeshSceneProxyCommon<FNaniteSplineMeshSceneProxy>__;
  iVar1 = *(int *)&this->field_0x288;
  this_00 = *(FMaterialSection **)&this->field_0x280;
  pFVar18 = this_00 + iVar1;
  while( true ) {
    if (*(int *)&this->field_0x288 != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Nanite::FSceneProxyBase::FMaterialSection,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar18) break;
    if (this_00->ShadingMaterialProxy != (FMaterialRenderProxy *)0x0) {
      plVar12 = (longlong *)(**(code **)(this_00->ShadingMaterialProxy->_padding_ + 0x40))();
      cVar9 = (**(code **)(*plVar12 + 0x378))(plVar12);
      if (cVar9 == '\0') {
        Nanite::FSceneProxyBase::FMaterialSection::ResetToDefaultMaterial(this_00,true,true);
        bVar10 = true;
      }
    }
    this_00 = this_00 + 1;
  }
  if (bVar10) {
    Nanite::FSceneProxyBase::OnMaterialsUpdated((FSceneProxyBase *)this,false);
  }
  pFVar13 = FSplineMeshSceneProxyDesc::CalculateShaderParams(param_3,&local_e0);
  uVar5 = *(undefined8 *)((longlong)&(pFVar13->StartPos).field0_0x0 + 8);
  *(undefined8 *)&this->field_0xc28 = *(undefined8 *)&(pFVar13->StartPos).field0_0x0;
  *(undefined8 *)&this->field_0xc30 = uVar5;
  uVar5 = *(undefined8 *)&(pFVar13->StartTangent).field0_0x0;
  *(undefined8 *)&this->field_0xc38 = *(undefined8 *)((longlong)&(pFVar13->EndPos).field0_0x0 + 4);
  *(undefined8 *)&this->field_0xc40 = uVar5;
  uVar5 = *(undefined8 *)((longlong)&(pFVar13->EndTangent).field0_0x0 + 4);
  *(undefined8 *)&this->field_0xc48 =
       *(undefined8 *)((longlong)&(pFVar13->StartTangent).field0_0x0 + 8);
  *(undefined8 *)&this->field_0xc50 = uVar5;
  TVar6 = (pFVar13->EndOffset).field0_0x0;
  *(TVector2<float>_u_0 *)&this->field_0xc58 = (pFVar13->StartOffset).field0_0x0;
  *(TVector2<float>_u_0 *)&this->field_0xc60 = TVar6;
  fVar7 = pFVar13->EndRoll;
  TVar6 = (pFVar13->StartScale).field0_0x0;
  *(float *)&this->field_0xc68 = pFVar13->StartRoll;
  *(float *)&this->field_0xc6c = fVar7;
  *(TVector2<float>_u_0 *)&this->field_0xc70 = TVar6;
  fVar7 = pFVar13->MeshZScale;
  fVar8 = pFVar13->MeshZOffset;
  *(TVector2<float>_u_0 *)&this->field_0xc78 = (pFVar13->EndScale).field0_0x0;
  *(float *)&this->field_0xc80 = fVar7;
  *(float *)&this->field_0xc84 = fVar8;
  uVar5 = *(undefined8 *)&pFVar13->bSmoothInterpRollScale;
  *(TVector2<float>_u_0 *)&this->field_0xc88 = (pFVar13->MeshDeformScaleMinMax).field0_0x0;
  *(undefined8 *)&this->field_0xc90 = uVar5;
  uVar5 = *(undefined8 *)&(pFVar13->MeshDir).field0_0x0;
  *(undefined8 *)&this->field_0xc98 =
       *(undefined8 *)((longlong)&(pFVar13->SplineUpDir).field0_0x0 + 4);
  *(undefined8 *)&this->field_0xca0 = uVar5;
  uVar5 = *(undefined8 *)((longlong)&(pFVar13->MeshX).field0_0x0 + 4);
  *(undefined8 *)&this->field_0xca8 = *(undefined8 *)((longlong)&(pFVar13->MeshDir).field0_0x0 + 8);
  *(undefined8 *)&this->field_0xcb0 = uVar5;
  uVar5 = *(undefined8 *)((longlong)&(pFVar13->MeshY).field0_0x0 + 8);
  *(undefined8 *)&this->field_0xcb8 = *(undefined8 *)&(pFVar13->MeshY).field0_0x0;
  *(undefined8 *)&this->field_0xcc0 = uVar5;
  fVar7 = pFVar13->SplineDistToTexelOffset;
  fVar8 = pFVar13->NaniteClusterBoundsScale;
  *(undefined8 *)&this->field_0xcc8 =
       *(undefined8 *)((longlong)&(pFVar13->TextureCoord).field0_0x0 + 4);
  *(float *)&this->field_0xcd0 = fVar7;
  *(float *)&this->field_0xcd4 = fVar8;
  FSplineMeshSceneInstanceDataBuffers::Setup
            ((FSplineMeshSceneInstanceDataBuffers *)&this->field_0xcd8,
             (FSplineMeshShaderParams *)&this->field_0xc28);
  FPrimitiveSceneProxy::SetupInstanceSceneDataBuffers
            ((FPrimitiveSceneProxy *)this,(FInstanceSceneDataBuffers *)&this->field_0xcd8);
  if ((this->field_0xba2 & 1) != 0) {
    this->field_0xba2 = this->field_0xba2 | 6;
    TVar2 = *(Type *)(*(longlong *)&this->field_0x220 + 8);
    uVar15 = uVar17;
    uVar19 = uVar17;
    if (0 < *(int *)(*(longlong *)&this->field_0x2f8 + 8)) {
      do {
        uVar16 = (uint)uVar15;
        FSplineMeshSceneProxyDesc::InitVertexFactory
                  (param_2->StaticMesh,TVar2,uVar16,(FColorVertexBuffer *)0x0);
        if ((-1 < (int)uVar16) && ((int)uVar16 < (param_2->LODData).ArrayNum)) {
          uVar11 = 0;
          if ((int)uVar16 < (param_2->LODData).ArrayNum) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            pFVar14 = (FNaniteSplineMeshSceneProxy *)(*pcVar4)();
            return pFVar14;
          }
          if (*(longlong *)((longlong)&((param_2->LODData).DataPtr)->OverrideVertexColors + uVar19)
              != 0) {
            uVar11 = 0;
            if ((int)uVar16 < (param_2->LODData).ArrayNum) {
              uVar11 = ~uVar16 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              pFVar14 = (FNaniteSplineMeshSceneProxy *)(*pcVar4)();
              return pFVar14;
            }
            FSplineMeshSceneProxyDesc::InitVertexFactory
                      (param_2->StaticMesh,TVar2,uVar16,
                       *(FColorVertexBuffer **)
                        ((longlong)&((param_2->LODData).DataPtr)->OverrideVertexColors + uVar19));
          }
        }
        uVar15 = (ulonglong)(uVar16 + 1);
        uVar19 = uVar19 + 0x50;
      } while ((int)(uVar16 + 1) < *(int *)(*(longlong *)&this->field_0x2f8 + 8));
    }
    if (((param_2->StaticMesh != (UStaticMesh *)0x0) &&
        (pFVar3 = ((param_2->StaticMesh->RenderData).Ptr)->RayTracingProxy,
        pFVar3->bUsingRenderingLODs == false)) && (iVar1 = (pFVar3->LODs).Array.ArrayNum, 0 < iVar1)
       ) {
      do {
        FSplineMeshSceneProxyDesc::InitRayTracingProxyVertexFactory
                  (param_2->StaticMesh,TVar2,(int)uVar17,(FColorVertexBuffer *)0x0);
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
      } while ((int)uVar16 < iVar1);
    }
  }
  return this;
}

// FNaniteSplineMeshSceneProxy @ 1487102f0

FNaniteSplineMeshSceneProxy * __thiscall
FNaniteSplineMeshSceneProxy::FNaniteSplineMeshSceneProxy
          (FNaniteSplineMeshSceneProxy *this,FMaterialAudit *param_1,USplineMeshComponent *param_2)

{
  FSplineMeshSceneProxyDesc *pFVar1;
  FStaticMeshSceneProxyDesc *pFVar2;
  FStaticMeshSceneProxyDesc local_2a8;
  FSplineMeshSceneProxyDesc local_118;
  
  pFVar1 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc(&local_118,param_2);
  pFVar2 = FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc
                     (&local_2a8,(UStaticMeshComponent *)param_2);
  FNaniteSplineMeshSceneProxy(this,param_1,pFVar2,pFVar1);
  FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc(&local_2a8);
  *(undefined ***)this = &_vftable__for__Nanite__FSceneProxy__;
  *(undefined ***)&this->field_0xc20 =
       &_vftable__for__TSplineMeshSceneProxyCommon<FNaniteSplineMeshSceneProxy>__;
  return this;
}

// Downcast @ 1487306f0

FNaniteSplineMeshSceneProxy * __thiscall
FNaniteSplineMeshSceneProxy::Downcast(FNaniteSplineMeshSceneProxy *this)

{
  return (FNaniteSplineMeshSceneProxy *)&this[-1].field_0x210;
}

// GetDynamicRayTracingInstances @ 14873ae60

void __thiscall
FNaniteSplineMeshSceneProxy::GetDynamicRayTracingInstances
          (FNaniteSplineMeshSceneProxy *this,FRayTracingInstanceCollector *param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  byte bVar5;
  FRWBuffer *pFVar6;
  
  pTVar2 = CVarRayTracingSplineMeshes.Ref;
  bVar4 = IsInParallelRenderingThread();
  if ((!bVar4) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar3 = CVarRayTracingSplineMeshesForceUpdate.Ref;
  if (pTVar2->ShadowedValue[1] == 0) {
    return;
  }
  if ((this->field_0xa5 & 0x40) == 0) {
    bVar4 = IsInParallelRenderingThread();
    if ((!bVar4) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (pTVar3->ShadowedValue[1] == 0) {
      bVar5 = 0;
      pFVar6 = (FRWBuffer *)&this->field_0xdf8;
      goto LAB_14873af24;
    }
  }
  bVar5 = 1;
  FRWBuffer::Release((FRWBuffer *)&this->field_0xdf8);
  pFVar6 = (FRWBuffer *)0x0;
LAB_14873af24:
  this->field_0xdf0 = this->field_0xdf0 | bVar5;
  Nanite::FSceneProxy::GetDynamicRayTracingInstances_Internal
            ((FSceneProxy *)this,param_1,pFVar6,(bool)this->field_0xdf0);
  this->field_0xdf0 = 0;
  return;
}

// GetTypeHash @ 1487412f0

ulong64 __thiscall FNaniteSplineMeshSceneProxy::GetTypeHash(FNaniteSplineMeshSceneProxy *this)

{
  return 0x155249038;
}

// OnTransformChanged @ 14874d270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNaniteSplineMeshSceneProxy::OnTransformChanged
          (FNaniteSplineMeshSceneProxy *this,FRHICommandListBase *param_1)

{
  TVector<float>_u_0 local_48;
  float local_3c;
  float local_38;
  float local_34;
  
  local_48._s_0.X = (float)(*(double *)&this->field_0x1c8 - *(double *)&this->field_0x1e0);
  local_48._s_0.Y = (float)(*(double *)&this->field_0x1d0 - *(double *)&this->field_0x1e8);
  local_48._s_0.Z = (float)(*(double *)&this->field_0x1d8 - *(double *)&this->field_0x1f0);
  local_3c = (float)(*(double *)&this->field_0x1c8 + *(double *)&this->field_0x1e0);
  local_38 = (float)(*(double *)&this->field_0x1d0 + *(double *)&this->field_0x1e8);
  local_34 = (float)(*(double *)&this->field_0x1d8 + *(double *)&this->field_0x1f0);
  FSingleInstanceDataBuffers::UpdateDefaultInstance
            ((FSingleInstanceDataBuffers *)&this->field_0xcd8,(TMatrix<double> *)&this->field_0x110,
             (FRenderBounds *)&local_48._s_0);
  return;
}

// SetupFallbackRayTracingMaterials @ 14875ba00

void __thiscall
FNaniteSplineMeshSceneProxy::SetupFallbackRayTracingMaterials
          (FNaniteSplineMeshSceneProxy *this,int param_1,
          TArray<FMeshBatch,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  
  Nanite::FSceneProxy::SetupFallbackRayTracingMaterials((FSceneProxy *)this,param_1,param_2);
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)&this->field_0x2f8 + 0x48) + 0x10);
  uVar7 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar1 = param_2->ArrayNum;
  pFVar9 = (param_2->AllocatorInstance).Data;
  lVar3 = *plVar2;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0xe0;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMeshBatch,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar9 == pFVar10) break;
    if (*(int *)(pFVar9 + 0xa0) < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar8 = pFVar9;
    if (*(FScriptContainerElement **)(pFVar9 + 0x98) != (FScriptContainerElement *)0x0) {
      pFVar8 = *(FScriptContainerElement **)(pFVar9 + 0x98);
    }
    lVar4 = *(longlong *)
             ((((ulonglong)(*(uint *)(pFVar8 + 0x7c) & 0x100) | 0x8c00) >> 5) +
             (longlong)param_1 * 0x470 + lVar3);
    *(longlong *)(pFVar9 + 0xa8) = lVar4;
    if (lVar4 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshBatch.VertexFactory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SplineMeshSceneProxy.cpp"
                         ,0x221,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(uint *)(pFVar9 + 0xd4) =
         *(uint *)(pFVar9 + 0xd4) ^
         (uint)((*(float *)&this->field_0xc74 <= 0.0 && *(float *)&this->field_0xc74 != 0.0) !=
               (*(float *)&this->field_0xc70 <= 0.0 && *(float *)&this->field_0xc70 != 0.0));
    pFVar9 = pFVar9 + 0xe0;
  }
  return;
}

