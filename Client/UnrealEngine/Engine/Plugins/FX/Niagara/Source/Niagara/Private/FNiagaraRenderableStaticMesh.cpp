// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// FNiagaraRenderableStaticMesh @ 1492d1460

FNiagaraRenderableStaticMesh * __thiscall
FNiagaraRenderableStaticMesh::FNiagaraRenderableStaticMesh
          (FNiagaraRenderableStaticMesh *this,UStaticMesh *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  int iVar12;
  FStaticMeshRenderData *pFVar13;
  double dVar14;
  UStaticMesh *local_res8;
  undefined7 uStack_47;
  
  (this->WeakStaticMesh).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&___7FNiagaraRenderableStaticMesh__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->RenderData = (FStaticMeshRenderData *)0x0;
  this->MeshMinLOD = 0;
  this->MinLOD = 0;
  (this->LocalBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).IsValid = '\0';
  (this->LocalBounds).Pad[0] = '\0';
  (this->LocalBounds).Pad[1] = '\0';
  (this->LocalBounds).Pad[2] = '\0';
  (this->LocalBounds).Pad[3] = '\0';
  (this->LocalBounds).Pad[4] = '\0';
  (this->LocalBounds).Pad[5] = '\0';
  (this->LocalBounds).Pad[6] = '\0';
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakStaticMesh).WeakPtr,(FObjectPtr)&local_res8);
  pFVar13 = UStaticMesh::GetRenderData(param_1);
  this->RenderData = pFVar13;
  iVar12 = UStaticMesh::GetMinLODIdx(param_1,false);
  this->MeshMinLOD = iVar12;
  iVar12 = UStaticMesh::GetMinLODIdx(param_1,false);
  this->MinLOD = iVar12;
  dVar1 = (param_1->ExtendedBounds).Origin.field0_0x0._s_0.X;
  dVar2 = (param_1->ExtendedBounds).Origin.field0_0x0._s_0.Y;
  dVar3 = (param_1->ExtendedBounds).Origin.field0_0x0._s_0.Z;
  dVar4 = (param_1->ExtendedBounds).BoxExtent.field0_0x0._s_0.X;
  dVar5 = (param_1->ExtendedBounds).BoxExtent.field0_0x0._s_0.Y;
  dVar9 = dVar1 + dVar4;
  dVar6 = (param_1->ExtendedBounds).BoxExtent.field0_0x0._s_0.Z;
  dVar10 = dVar3 + dVar6;
  dVar14 = dVar2 - dVar5;
  auVar8._8_4_ = SUB84(dVar14,0);
  auVar8._0_8_ = dVar1 - dVar4;
  auVar8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])&(this->LocalBounds).Min.field0_0x0 = auVar8;
  auVar7._8_4_ = SUB84(dVar9,0);
  auVar7._0_8_ = dVar3 - dVar6;
  auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->LocalBounds).Min.field0_0x0 + 0x10) = auVar7;
  auVar11._8_4_ = SUB84(dVar10,0);
  auVar11._0_8_ = dVar2 + dVar5;
  auVar11._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->LocalBounds).Max.field0_0x0 + 8) = auVar11;
  (this->LocalBounds).IsValid = 1;
  (this->LocalBounds).Pad[0] = (char)uStack_47;
  (this->LocalBounds).Pad[1] = (char)((uint7)uStack_47 >> 8);
  (this->LocalBounds).Pad[2] = (char)((uint7)uStack_47 >> 0x10);
  (this->LocalBounds).Pad[3] = (char)((uint7)uStack_47 >> 0x18);
  (this->LocalBounds).Pad[4] = (char)((uint7)uStack_47 >> 0x20);
  (this->LocalBounds).Pad[5] = (char)((uint7)uStack_47 >> 0x28);
  (this->LocalBounds).Pad[6] = (char)((uint7)uStack_47 >> 0x30);
  return this;
}

// ComputeLOD @ 1492de290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
FNiagaraRenderableStaticMesh::ComputeLOD
          (FNiagaraRenderableStaticMesh *this,TVector<double> *param_1,float param_2,
          FSceneView *param_3,float param_4)

{
  schar sVar1;
  TVector4<double>_u_0 local_28;
  
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_28._s_0.W = __real_3ff0000000000000;
  sVar1 = ComputeStaticMeshLOD
                    (this->RenderData,(TVector4<double> *)&local_28._s_0,param_2,param_3,
                     this->MinLOD,param_4);
  return (int)sVar1;
}

// GetLODModelData @ 1492f0070

void __thiscall
FNiagaraRenderableStaticMesh::GetLODModelData
          (FNiagaraRenderableStaticMesh *this,FLODModelData *param_1,int param_2)

{
  FStaticMeshRenderData *pFVar1;
  FStaticMeshLODResources *this_00;
  FAdditionalStaticMeshIndexBuffers *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FStaticMeshSection *pFVar8;
  FRHIUniformBuffer *pFVar9;
  undefined4 uStack_c;
  
  if (param_2 < this->MinLOD) {
    param_2 = this->MinLOD;
  }
  uVar5 = (uint)this->RenderData->CurrentFirstLODIdx;
  if (param_2 < (int)uVar5) {
    param_2 = uVar5;
  }
  iVar6 = FStaticMeshRenderData::GetFirstValidLODIdx(this->RenderData,param_2);
  param_1->LODIndex = iVar6;
  if ((iVar6 < 0) || (pFVar1 = this->RenderData, (pFVar1->LODResources).Array.ArrayNum <= iVar6)) {
    param_1->LODIndex = -1;
    return;
  }
  if ((iVar6 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = *(FStaticMeshLODResources **)
             ((pFVar1->LODResources).Array.AllocatorInstance.Data + (longlong)iVar6 * 8);
  iVar6 = FStaticMeshLODResources::GetNumVertices(this_00);
  param_1->NumVertices = iVar6;
  iVar6 = (this_00->IndexBuffer).CachedNumIndices;
  if (iVar6 < 0) {
    iVar6 = (int)(this_00->IndexBuffer).IndexStorage._padding_;
    if ((this_00->IndexBuffer).b32Bit == false) {
      iVar6 = iVar6 / 2;
    }
    else {
      iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
    }
  }
  param_1->NumIndices = iVar6;
  pFVar8 = *(FStaticMeshSection **)&(this_00->Sections).field_0x20;
  iVar6 = *(int *)&(this_00->Sections).field_0x28;
  if (pFVar8 == (FStaticMeshSection *)0x0) {
    pFVar8 = (FStaticMeshSection *)&this_00->Sections;
  }
  if ((iVar6 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = param_1->LODIndex;
  param_1->IndexBuffer = (FIndexBuffer *)&this_00->IndexBuffer;
  (param_1->Sections).DataPtr = pFVar8;
  *(ulonglong *)&(param_1->Sections).ArrayNum = CONCAT44(uStack_c,iVar6);
  if (((int)uVar5 < 0) ||
     (pFVar1 = this->RenderData, (pFVar1->LODVertexFactories).ArrayNum <= (int)uVar5)) {
    pFVar9 = (FRHIUniformBuffer *)0x0;
  }
  else {
    uVar7 = 0;
    if ((int)uVar5 < (pFVar1->LODVertexFactories).ArrayNum) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar9 = *(FRHIUniformBuffer **)
              ((pFVar1->LODVertexFactories).AllocatorInstance.Data +
              (longlong)(int)uVar5 * 0x470 + 0x218);
  }
  param_1->VertexFactoryUserData = pFVar9;
  param_1->RayTracingGeometry = (FRayTracingGeometry *)0x0;
  pFVar2 = this_00->AdditionalIndexBuffers;
  if (pFVar2 == (FAdditionalStaticMeshIndexBuffers *)0x0) {
    return;
  }
  if ((int)(pFVar2->WireframeIndexBuffer)._padding_ == -1) {
    return;
  }
  iVar6 = (pFVar2->WireframeIndexBuffer).CachedNumIndices;
  if (iVar6 < 0) {
    iVar6 = (int)(pFVar2->WireframeIndexBuffer).IndexStorage._padding_;
    if ((pFVar2->WireframeIndexBuffer).b32Bit == false) {
      iVar6 = iVar6 / 2;
    }
    else {
      iVar6 = (int)((iVar6 >> 0x1f & 3U) + iVar6) >> 2;
    }
  }
  param_1->WireframeNumIndices = iVar6;
  param_1->WireframeIndexBuffer =
       (FIndexBuffer *)&this_00->AdditionalIndexBuffers->WireframeIndexBuffer;
  return;
}

// GetLODRange @ 1492f0290

TIntVector2<int> __thiscall
FNiagaraRenderableStaticMesh::GetLODRange(FNiagaraRenderableStaticMesh *this)

{
  TIntVector2<int>_u_0 in_RDX;
  
  *(int *)in_RDX = this->MeshMinLOD;
  *(int *)((longlong)in_RDX + 4) = (this->RenderData->LODResources).Array.ArrayNum;
  return (TIntVector2<int>)in_RDX;
}

// GetLODScreenSize @ 1492f02b0

TVector<float> * __thiscall
FNiagaraRenderableStaticMesh::GetLODScreenSize
          (FNiagaraRenderableStaticMesh *this,TVector<float> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  FStaticMeshRenderData *pFVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar3 = 7;
  if (param_1 < 7) {
    iVar3 = param_1;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  pFVar2 = this->RenderData;
  fVar1 = pFVar2->ScreenSize[iVar4].Default;
  fVar5 = (float)(pFVar2->Bounds).SphereRadius;
  if (iVar4 < 7) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = pFVar2->ScreenSize[(longlong)iVar4 + 1].Default;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar5;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar5;
  return __return_storage_ptr__;
}

// GetLocalBounds @ 1492f0320

TBox<double> * __thiscall
FNiagaraRenderableStaticMesh::GetLocalBounds
          (FNiagaraRenderableStaticMesh *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  dVar1 = (this->LocalBounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->LocalBounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->LocalBounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->LocalBounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->LocalBounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->LocalBounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->LocalBounds).IsValid;
  uVar6 = (this->LocalBounds).Pad[0];
  uVar7 = (this->LocalBounds).Pad[1];
  uVar8 = (this->LocalBounds).Pad[2];
  uVar9 = (this->LocalBounds).Pad[3];
  uVar10 = (this->LocalBounds).Pad[4];
  uVar11 = (this->LocalBounds).Pad[5];
  uVar12 = (this->LocalBounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// GetRayTraceLODModelData @ 1492f1720

void __thiscall
FNiagaraRenderableStaticMesh::GetRayTraceLODModelData
          (FNiagaraRenderableStaticMesh *this,FLODModelData *param_1,int param_2)

{
  FStaticMeshRenderData *this_00;
  FStaticMeshRayTracingProxy *pFVar1;
  longlong lVar2;
  FRayTracingGeometry *this_01;
  FStaticMeshSection *pFVar3;
  TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FStaticMeshSection *pFVar10;
  UObject *pUVar11;
  longlong lVar12;
  FRHIUniformBuffer *pFVar13;
  undefined4 uStack_2c;
  
  if (param_2 < this->MinLOD) {
    param_2 = this->MinLOD;
  }
  this_00 = this->RenderData;
  pFVar1 = this_00->RayTracingProxy;
  if (pFVar1 == (FStaticMeshRayTracingProxy *)0x0) {
    pUVar11 = FWeakObjectPtr::Get(&(this->WeakStaticMesh).WeakPtr);
    bVar6 = IsRayTracingAllowed();
    if ((((bVar6) && (pUVar11 != (UObject *)0x0)) && ((pUVar11[0xc].field_0x4 & 0x20) != 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsRayTracingAllowed() || StaticMesh == nullptr || !StaticMesh->bSupportRayTracing"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraMeshRendererProperties.cpp"
                           ,0x81,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    iVar9 = (pFVar1->LODs).Array.ArrayNum;
    pFVar13 = (FRHIUniformBuffer *)0x0;
    uVar7 = 0;
    if (pFVar1->bUsingRenderingLODs != false) {
      if (param_2 < (int)(uint)this_00->CurrentFirstLODIdx) {
        param_2 = (uint)this_00->CurrentFirstLODIdx;
      }
      uVar7 = FStaticMeshRenderData::GetFirstValidLODIdx(this_00,param_2);
    }
    if ((int)uVar7 < iVar9) {
      lVar12 = (longlong)(int)uVar7;
      do {
        uVar8 = 0;
        if ((int)uVar7 < (pFVar1->LODs).Array.ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar2 = *(longlong *)((pFVar1->LODs).Array.AllocatorInstance.Data + lVar12 * 8);
        this_01 = *(FRayTracingGeometry **)(lVar2 + 8);
        bVar6 = FRayTracingGeometry::IsValid(this_01);
        if (((bVar6) && (bVar6 = FRayTracingGeometry::IsEvicted(this_01), !bVar6)) &&
           (bVar6 = FRayTracingGeometry::HasPendingBuildRequest(this_01), !bVar6)) {
          param_1->LODIndex = uVar7;
          param_1->RayTracingGeometry = this_01;
          param_1->NumVertices = *(int *)(*(longlong *)(lVar2 + 0x18) + 0xac);
          lVar12 = *(longlong *)(lVar2 + 0x20);
          iVar9 = *(int *)(lVar12 + 0x48);
          if (iVar9 < 0) {
            iVar9 = *(int *)(lVar12 + 0x38);
            if (*(char *)(lVar12 + 0x4c) == '\0') {
              iVar9 = iVar9 / 2;
            }
            else {
              iVar9 = (int)(iVar9 + (iVar9 >> 0x1f & 3U)) >> 2;
            }
          }
          param_1->NumIndices = iVar9;
          pFVar3 = *(FStaticMeshSection **)(lVar2 + 0x10);
          uVar7 = pFVar3[1].MinVertexIndex;
          pFVar10 = *(FStaticMeshSection **)&pFVar3[1].FirstIndex;
          if (*(FStaticMeshSection **)&pFVar3[1].FirstIndex == (FStaticMeshSection *)0x0) {
            pFVar10 = pFVar3;
          }
          if (((int)uVar7 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = param_1->LODIndex;
          (param_1->Sections).DataPtr = pFVar10;
          *(ulonglong *)&(param_1->Sections).ArrayNum = CONCAT44(uStack_2c,uVar7);
          param_1->IndexBuffer = *(FIndexBuffer **)(lVar2 + 0x20);
          if ((-1 < iVar9) &&
             (pTVar4 = this->RenderData->RayTracingProxy->LODVertexFactories,
             iVar9 < pTVar4->ArrayNum)) {
            if ((iVar9 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar13 = *(FRHIUniformBuffer **)
                       ((pTVar4->AllocatorInstance).Data + (longlong)iVar9 * 0x470 + 0x218);
          }
          param_1->VertexFactoryUserData = pFVar13;
          return;
        }
        uVar7 = uVar7 + 1;
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar9);
    }
  }
  return;
}

// GetUsedMaterials @ 1492f24a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraRenderableStaticMesh::GetUsedMaterials
          (FNiagaraRenderableStaticMesh *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  FStaticMeshRenderData *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  UStaticMesh *this_00;
  UMaterial *pUVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  UStaticMesh *local_res20;
  
  this_00 = (UStaticMesh *)FWeakObjectPtr::Get(&(this->WeakStaticMesh).WeakPtr);
  local_res20 = this_00;
  if (this_00 == (UStaticMesh *)0x0) {
    if (4 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_void___cdecl_FNiagaraRenderableStaticMesh::GetUsedMaterials(TArray<UMaterialInterface*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      return;
    }
  }
  else {
    pFVar5 = this->RenderData;
    pFVar13 = (pFVar5->LODResources).Array.AllocatorInstance.Data;
    iVar2 = (pFVar5->LODResources).Array.ArrayNum;
    pFVar1 = pFVar13 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pFVar5->LODResources).Array.ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar13 == pFVar1) break;
      lVar6 = *(longlong *)pFVar13;
      puVar14 = (uint *)(lVar6 + 0x10);
      iVar3 = *(int *)(lVar6 + 0x38);
      if (*(uint **)(lVar6 + 0x30) != (uint *)0x0) {
        puVar14 = *(uint **)(lVar6 + 0x30);
      }
      puVar15 = puVar14 + (longlong)iVar3 * 7;
      while( true ) {
        if (*(int *)(lVar6 + 0x38) != iVar3) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FStaticMeshSection_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (puVar14 == puVar15) break;
        uVar4 = *puVar14;
        if (-1 < (int)uVar4) {
          if ((int)uVar4 < param_1->ArrayNum) {
            if (((int)uVar4 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (*(longlong *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 8) != 0)
            goto LAB_1492f26e6;
          }
          else {
            iVar12 = (uVar4 - param_1->ArrayNum) + 1;
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,iVar12,&param_1->AllocatorInstance,&param_1->ArrayNum,
                               &param_1->ArrayMax);
            memset((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8,0,(longlong)iVar12 << 3);
          }
          pUVar11 = (UMaterial *)UStaticMesh::GetMaterial(this_00,*puVar14);
          if (pUVar11 == (UMaterial *)0x0) {
            pUVar11 = UMaterial::GetDefaultMaterial(MD_Surface);
          }
          uVar4 = *puVar14;
          uVar10 = 0;
          if ((int)uVar4 < param_1->ArrayNum) {
            uVar10 = ~uVar4 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(UMaterial **)((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 8) = pUVar11;
          this_00 = local_res20;
        }
LAB_1492f26e6:
        puVar14 = puVar14 + 7;
      }
      pFVar13 = pFVar13 + 8;
    }
  }
  return;
}

// SetMinLODBias @ 149306a70

void __thiscall
FNiagaraRenderableStaticMesh::SetMinLODBias(FNiagaraRenderableStaticMesh *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = this->MeshMinLOD + param_1;
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->MinLOD = iVar1;
  return;
}

// SetupRayTraceVertexFactory @ 149308db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraRenderableStaticMesh::SetupRayTraceVertexFactory
          (FNiagaraRenderableStaticMesh *this,FRHICommandListBase *param_1,
          FNiagaraMeshVertexFactory *param_2,FLODModelData *param_3)

{
  uint uVar1;
  int iVar2;
  FStaticMeshRayTracingProxy *pFVar3;
  FStaticMeshVertexBuffer *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  FStaticMeshDataType local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  uVar1 = param_3->LODIndex;
  local_f8.PositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_f8.PositionComponent.StreamOffset = 0;
  local_f8.PositionComponent.Offset = '\0';
  local_f8.PositionComponent.Stride = '\0';
  local_f8.PositionComponent.Type.Value = '\0';
  local_f8.PositionComponent.VertexStreamUsage = Default;
  local_f8.TangentBasisComponents[0].VertexBuffer = (FVertexBuffer *)0x0;
  local_f8.TangentBasisComponents[0].StreamOffset = 0;
  local_f8.TangentBasisComponents[0].Offset = '\0';
  local_f8.TangentBasisComponents[0].Stride = '\0';
  local_f8.TangentBasisComponents[0].Type.Value = '\0';
  local_f8.TangentBasisComponents[0].VertexStreamUsage = Default;
  local_f8.TangentBasisComponents[1].VertexBuffer = (FVertexBuffer *)0x0;
  local_f8.TangentBasisComponents[1].StreamOffset = 0;
  local_f8.TangentBasisComponents[1].Offset = '\0';
  local_f8.TangentBasisComponents[1].Stride = '\0';
  local_f8.TangentBasisComponents[1].Type.Value = '\0';
  local_f8.TangentBasisComponents[1].VertexStreamUsage = Default;
  local_f8.TextureCoordinates.ArrayNum = 0;
  local_f8.LightMapCoordinateComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_f8.LightMapCoordinateComponent.StreamOffset = 0;
  local_f8.LightMapCoordinateComponent.Offset = '\0';
  local_f8.LightMapCoordinateComponent.Stride = '\0';
  local_f8.LightMapCoordinateComponent.Type.Value = '\0';
  local_f8.LightMapCoordinateComponent.VertexStreamUsage = Default;
  local_f8.ColorComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_f8.ColorComponent.StreamOffset = 0;
  local_f8.ColorComponent.Offset = '\0';
  local_f8.ColorComponent.Stride = '\0';
  local_f8.ColorComponent.Type.Value = '\0';
  local_f8.ColorComponent.VertexStreamUsage = Default;
  local_f8.LODLightmapDataIndex = '\0';
  local_f8.TextureCoordinates.ArrayMax = 4;
  local_f8.PositionComponentSRV = (FRHIShaderResourceView *)0x0;
  local_f8.TangentsSRV = (FRHIShaderResourceView *)0x0;
  local_f8.ColorIndexMask = 0xffffffff;
  local_f8.TextureCoordinatesSRV = (FRHIShaderResourceView *)0x0;
  local_f8.ColorComponentsSRV = (FRHIShaderResourceView *)0x0;
  local_f8.LightMapCoordinateIndex = -1;
  local_f8.NumTexCoords = '\0';
  pFVar3 = this->RenderData->RayTracingProxy;
  iVar2 = (pFVar3->LODs).Array.ArrayNum;
  uVar6 = 0;
  if ((int)uVar1 < iVar2) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    local_108 = (longlong)(int)uVar1;
    local_100 = (longlong)iVar2;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = *(FStaticMeshVertexBuffer **)
             (*(longlong *)((pFVar3->LODs).Array.AllocatorInstance.Data + (longlong)(int)uVar1 * 8)
             + 0x18);
  FPositionVertexBuffer::BindPositionVertexBuffer
            ((FPositionVertexBuffer *)(this_00 + 1),(FVertexFactory *)param_2,&local_f8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer(this_00,(FVertexFactory *)param_2,&local_f8);
  FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
            (this_00,(FVertexFactory *)param_2,&local_f8,4);
  FColorVertexBuffer::BindColorVertexBuffer
            ((FColorVertexBuffer *)&this_00[1].TexCoordVertexBuffer.field_0x8,
             (FVertexFactory *)param_2,&local_f8);
  FNiagaraMeshVertexFactory::SetData(param_2,param_1,&local_f8);
  return;
}

// SetupVertexFactory @ 149308f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraRenderableStaticMesh::SetupVertexFactory
          (FNiagaraRenderableStaticMesh *this,FRHICommandListBase *param_1,
          FNiagaraMeshVertexFactory *param_2,FLODModelData *param_3)

{
  uint uVar1;
  int iVar2;
  FStaticMeshRenderData *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  FStaticMeshDataType local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  uVar1 = param_3->LODIndex;
  pFVar3 = this->RenderData;
  local_f8.PositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_f8.PositionComponent.StreamOffset = 0;
  local_f8.PositionComponent.Offset = '\0';
  local_f8.PositionComponent.Stride = '\0';
  local_f8.PositionComponent.Type.Value = '\0';
  local_f8.PositionComponent.VertexStreamUsage = Default;
  local_f8.TangentBasisComponents[0].VertexBuffer = (FVertexBuffer *)0x0;
  local_f8.TangentBasisComponents[0].StreamOffset = 0;
  local_f8.TangentBasisComponents[0].Offset = '\0';
  local_f8.TangentBasisComponents[0].Stride = '\0';
  local_f8.TangentBasisComponents[0].Type.Value = '\0';
  local_f8.TangentBasisComponents[0].VertexStreamUsage = Default;
  local_f8.TangentBasisComponents[1].VertexBuffer = (FVertexBuffer *)0x0;
  local_f8.TangentBasisComponents[1].StreamOffset = 0;
  local_f8.TangentBasisComponents[1].Offset = '\0';
  local_f8.TangentBasisComponents[1].Stride = '\0';
  local_f8.TangentBasisComponents[1].Type.Value = '\0';
  local_f8.TangentBasisComponents[1].VertexStreamUsage = Default;
  local_f8.TextureCoordinates.ArrayNum = 0;
  local_f8.LightMapCoordinateComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_f8.LightMapCoordinateComponent.StreamOffset = 0;
  local_f8.LightMapCoordinateComponent.Offset = '\0';
  local_f8.LightMapCoordinateComponent.Stride = '\0';
  local_f8.LightMapCoordinateComponent.Type.Value = '\0';
  local_f8.LightMapCoordinateComponent.VertexStreamUsage = Default;
  local_f8.ColorComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_f8.ColorComponent.StreamOffset = 0;
  local_f8.ColorComponent.Offset = '\0';
  local_f8.ColorComponent.Stride = '\0';
  local_f8.ColorComponent.Type.Value = '\0';
  local_f8.ColorComponent.VertexStreamUsage = Default;
  local_f8.LODLightmapDataIndex = '\0';
  local_f8.TextureCoordinates.ArrayMax = 4;
  local_f8.PositionComponentSRV = (FRHIShaderResourceView *)0x0;
  local_f8.TangentsSRV = (FRHIShaderResourceView *)0x0;
  local_f8.ColorIndexMask = 0xffffffff;
  local_f8.TextureCoordinatesSRV = (FRHIShaderResourceView *)0x0;
  local_f8.ColorComponentsSRV = (FRHIShaderResourceView *)0x0;
  local_f8.LightMapCoordinateIndex = -1;
  local_f8.NumTexCoords = '\0';
  iVar2 = (pFVar3->LODResources).Array.ArrayNum;
  uVar7 = 0;
  if ((int)uVar1 < iVar2) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    local_108 = (longlong)(int)uVar1;
    local_100 = (longlong)iVar2;
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
  lVar4 = *(longlong *)
           ((pFVar3->LODResources).Array.AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  FPositionVertexBuffer::BindPositionVertexBuffer
            ((FPositionVertexBuffer *)(lVar4 + 0x188),(FVertexFactory *)param_2,&local_f8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            ((FStaticMeshVertexBuffer *)(lVar4 + 0xd0),(FVertexFactory *)param_2,&local_f8);
  FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
            ((FStaticMeshVertexBuffer *)(lVar4 + 0xd0),(FVertexFactory *)param_2,&local_f8,4);
  FColorVertexBuffer::BindColorVertexBuffer
            ((FColorVertexBuffer *)(lVar4 + 0x1d8),(FVertexFactory *)param_2,&local_f8);
  FNiagaraMeshVertexFactory::SetData(param_2,param_1,&local_f8);
  return;
}

