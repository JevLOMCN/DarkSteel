// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 10

// ~FStaticMeshUvMapping @ 148f81e90

void __thiscall FStaticMeshUvMapping::~FStaticMeshUvMapping(FStaticMeshUvMapping *this)

{
  undefined8 *puVar1;
  
  this->_padding_ = (longlong)&___7FMeshUvMapping__6B_;
  FNiagaraUvQuadTree::Empty((FNiagaraUvQuadTree *)&this->_padding_);
  FMeshUvMapping::ReleaseGpuQuadTree((FMeshUvMapping *)this);
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<FNiagaraUvQuadTree::FSubTree,int>((FSubTree *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// FStaticMeshUvMapping @ 149212e60

FStaticMeshUvMapping * __thiscall
FStaticMeshUvMapping::FStaticMeshUvMapping
          (FStaticMeshUvMapping *this,TWeakObjectPtr<UStaticMesh,FWeakObjectPtr> param_1,int param_2
          ,int param_3)

{
  FMeshUvMapping::FMeshUvMapping((FMeshUvMapping *)this,param_2,param_3);
  (this->MeshObject).WeakPtr = param_1.WeakPtr;
  this->_padding_ = (longlong)&___7FStaticMeshUvMapping__6B_;
  return this;
}

// BuildQuadTree @ 14921fdf0

void __thiscall FStaticMeshUvMapping::BuildQuadTree(FStaticMeshUvMapping *this)

{
  UStaticMesh *pUVar1;
  FQuadTreeBuildHelper<FStaticMeshVertexAccessorHelper> local_38;
  FStaticMeshVertexAccessorHelper local_20;
  
  pUVar1 = (UStaticMesh *)FWeakObjectPtr::Get(&(this->MeshObject).WeakPtr);
  if (pUVar1 != (UStaticMesh *)0x0) {
    local_20.LodRenderData =
         GetLodRenderData(pUVar1,(int)this->_padding_,*(int *)((longlong)&this->_padding_ + 4));
    if (local_20.LodRenderData != (FStaticMeshLODResources *)0x0) {
      FRawStaticIndexBuffer::GetArrayView
                (&(local_20.LodRenderData)->IndexBuffer,&local_20.IndexBuffer);
      local_38.MeshAccessor = &local_20;
      local_38.UvSetIndex = *(int *)((longlong)&this->_padding_ + 4);
      local_38.QuadTree = (FNiagaraUvQuadTree *)&this->_padding_;
      FQuadTreeBuildHelper<FStaticMeshVertexAccessorHelper>::Build(&local_38);
    }
  }
  return;
}

// FindFirstTriangle @ 14922fd30

int __thiscall
FStaticMeshUvMapping::FindFirstTriangle
          (FStaticMeshUvMapping *this,TBox2<double> *param_1,TVector<double> *param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UStaticMesh *pUVar7;
  int local_res8 [2];
  TVector2<double>_u_0 local_c8;
  TVector2<double>_u_0 local_b8;
  FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper> local_a8;
  TVector<double>_u_0 local_90;
  <lambda_1> local_78;
  FStaticMeshVertexAccessorHelper local_48 [2];
  
  pUVar7 = (UStaticMesh *)FWeakObjectPtr::Get(&(this->MeshObject).WeakPtr);
  if ((pUVar7 == (UStaticMesh *)0x0) ||
     (local_48[0].LodRenderData =
           GetLodRenderData(pUVar7,(int)this->_padding_,*(int *)((longlong)&this->_padding_ + 4)),
     local_48[0].LodRenderData == (FStaticMeshLODResources *)0x0)) {
    return -1;
  }
  FRawStaticIndexBuffer::GetArrayView
            (&(local_48[0].LodRenderData)->IndexBuffer,&local_48[0].IndexBuffer);
  local_a8.MeshAccessor = local_48;
  dVar2 = (param_1->Max).field0_0x0._s_0.Y;
  plVar1 = &this->_padding_;
  dVar3 = (param_1->Max).field0_0x0._s_0.X;
  local_a8.UvSetIndex = *(int *)((longlong)&this->_padding_ + 4);
  local_res8[0] = -1;
  local_c8._s_0.X = __real_3ff0000000000000 / (dVar3 - (param_1->Min).field0_0x0._s_0.X);
  local_c8._s_0.Y = __real_3ff0000000000000 / (dVar2 - (param_1->Min).field0_0x0._s_0.Y);
  local_90._s_0.X = (dVar3 + (param_1->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
  local_b8._s_0.X = __real_3ff0000000000000 - local_c8._s_0.X * dVar3;
  local_b8._s_0.Y = __real_3ff0000000000000 - local_c8._s_0.Y * dVar2;
  local_90._s_0.Z = 0.0;
  local_90._s_0.Y = (dVar2 + (param_1->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
  local_a8.QuadTree = (FNiagaraUvQuadTree *)plVar1;
  if (((int)this->_padding_ < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  local_78.__this = &local_a8;
  local_78.NormalizeScale = (TVector2<double> *)&local_c8;
  local_78.NormalizeBias = (TVector2<double> *)&local_b8;
  local_78.UvRef = (TVector<double> *)&local_90;
  local_78.FoundTriangleIndex = local_res8;
  local_78.BarycentricCoord = param_2;
  FNiagaraUvQuadTree::FSubTree::
  VisitElements<_FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper>::FindFirstTriangle_::__l2::<lambda_1>_>
            ((FSubTree *)this->_padding_,(FNiagaraUvQuadTree *)plVar1,param_1,&local_78);
  return local_res8[0];
}

// FindFirstTriangle @ 14922fef0

int __thiscall
FStaticMeshUvMapping::FindFirstTriangle
          (FStaticMeshUvMapping *this,TVector2<double> *param_1,float param_2,
          TVector<double> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UStaticMesh *pUVar5;
  int local_res8 [2];
  float local_a8 [2];
  FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper> local_a0;
  <lambda_1>_conflict local_88;
  FStaticMeshVertexAccessorHelper local_58;
  TVector2<double>_u_0 local_40;
  double local_30;
  double dStack_28;
  undefined1 local_20;
  
  pUVar5 = (UStaticMesh *)FWeakObjectPtr::Get(&(this->MeshObject).WeakPtr);
  if ((pUVar5 == (UStaticMesh *)0x0) ||
     (local_58.LodRenderData =
           GetLodRenderData(pUVar5,(int)this->_padding_,*(int *)((longlong)&this->_padding_ + 4)),
     local_58.LodRenderData == (FStaticMeshLODResources *)0x0)) {
    return -1;
  }
  FRawStaticIndexBuffer::GetArrayView(&(local_58.LodRenderData)->IndexBuffer,&local_58.IndexBuffer);
  local_40._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_40._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_a0.MeshAccessor = &local_58;
  local_res8[0] = -1;
  plVar1 = &this->_padding_;
  local_a0.UvSetIndex = *(int *)((longlong)&this->_padding_ + 4);
  local_20 = 1;
  local_a8[0] = param_2;
  local_a0.QuadTree = (FNiagaraUvQuadTree *)plVar1;
  local_30 = local_40._s_0.X;
  dStack_28 = local_40._s_0.Y;
  if (((int)this->_padding_ < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  local_88.__this = &local_a0;
  local_88.Tolerance = local_a8;
  local_88.FoundTriangleIndex = local_res8;
  local_88.InUv = param_1;
  local_88.BarycentricCoord = param_3;
  FNiagaraUvQuadTree::FSubTree::
  VisitElements<_FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper>::FindFirstTriangle_::__l2::<lambda_1>_>
            ((FSubTree *)this->_padding_,(FNiagaraUvQuadTree *)plVar1,
             (TBox2<double> *)&local_40._s_0,&local_88);
  return local_res8[0];
}

// FindOverlappingTriangles @ 149230550

void __thiscall
FStaticMeshUvMapping::FindOverlappingTriangles
          (FStaticMeshUvMapping *this,TVector2<double> *param_1,float param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  UStaticMesh *pUVar1;
  FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper> local_48;
  FStaticMeshVertexAccessorHelper local_30;
  
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  pUVar1 = (UStaticMesh *)FWeakObjectPtr::Get(&(this->MeshObject).WeakPtr);
  if (pUVar1 != (UStaticMesh *)0x0) {
    local_30.LodRenderData =
         GetLodRenderData(pUVar1,(int)this->_padding_,*(int *)((longlong)&this->_padding_ + 4));
    if (local_30.LodRenderData != (FStaticMeshLODResources *)0x0) {
      FRawStaticIndexBuffer::GetArrayView
                (&(local_30.LodRenderData)->IndexBuffer,&local_30.IndexBuffer);
      local_48.QuadTree = (FNiagaraUvQuadTree *)&this->_padding_;
      local_48.MeshAccessor = &local_30;
      local_48.UvSetIndex = *(int *)((longlong)&this->_padding_ + 4);
      FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper>::FindOverlappingTriangle
                (&local_48,param_1,param_2,param_3);
    }
  }
  return;
}

// GetLodRenderData @ 149236270

FStaticMeshLODResources * __cdecl
FStaticMeshUvMapping::GetLodRenderData(UStaticMesh *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FStaticMeshRenderData *pFVar4;
  FStaticMeshLODResources *pFVar5;
  FStaticMeshLODResources *pFVar6;
  
  pFVar4 = UStaticMesh::GetRenderData(param_1);
  if (((pFVar4 != (FStaticMeshRenderData *)0x0) && (-1 < param_2)) &&
     (param_2 < (pFVar4->LODResources).Array.ArrayNum)) {
    if (param_2 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FStaticMeshLODResources *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar5 = *(FStaticMeshLODResources **)
              ((pFVar4->LODResources).Array.AllocatorInstance.Data + (longlong)param_2 * 8);
    iVar3 = FStaticMeshLODResources::GetNumTexCoords(pFVar5);
    pFVar6 = (FStaticMeshLODResources *)0x0;
    if (param_3 < iVar3) {
      pFVar6 = pFVar5;
    }
    return pFVar6;
  }
  return (FStaticMeshLODResources *)0x0;
}

// GetLodRenderData @ 149236320

FStaticMeshLODResources * __thiscall
FStaticMeshUvMapping::GetLodRenderData(FStaticMeshUvMapping *this)

{
  UStaticMesh *pUVar1;
  FStaticMeshLODResources *pFVar2;
  
  pUVar1 = (UStaticMesh *)FWeakObjectPtr::Get(&(this->MeshObject).WeakPtr);
  if (pUVar1 != (UStaticMesh *)0x0) {
    pFVar2 = GetLodRenderData(pUVar1,(int)this->_padding_,*(int *)((longlong)&this->_padding_ + 4));
    return pFVar2;
  }
  return (FStaticMeshLODResources *)0x0;
}

// IsValidMeshObject @ 149242ee0

bool __cdecl
FStaticMeshUvMapping::IsValidMeshObject
          (TWeakObjectPtr<UStaticMesh,FWeakObjectPtr> *param_1,int param_2,int param_3)

{
  UStaticMesh *pUVar1;
  FStaticMeshLODResources *pFVar2;
  
  pUVar1 = (UStaticMesh *)FWeakObjectPtr::Get(&param_1->WeakPtr);
  if ((pUVar1 != (UStaticMesh *)0x0) && (pUVar1->bAllowCPUAccess != '\0')) {
    pFVar2 = GetLodRenderData(pUVar1,param_2,param_3);
    if (pFVar2 != (FStaticMeshLODResources *)0x0) {
      return true;
    }
  }
  return false;
}

// Matches @ 1492434d0

bool __thiscall
FStaticMeshUvMapping::Matches
          (FStaticMeshUvMapping *this,TWeakObjectPtr<UStaticMesh,FWeakObjectPtr> *param_1,
          int param_2,int param_3)

{
  bool bVar1;
  
  if ((int)this->_padding_ == param_2) {
    bVar1 = TWeakObjectPtr<UStaticMesh,FWeakObjectPtr>::UEOpEquals<UStaticMesh,bool>
                      (&this->MeshObject,param_1);
    if ((bVar1) && (*(int *)((longlong)&this->_padding_ + 4) == param_3)) {
      return true;
    }
  }
  return false;
}

