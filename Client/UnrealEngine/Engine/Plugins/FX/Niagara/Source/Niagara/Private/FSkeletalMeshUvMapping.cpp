// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 10

// FSkeletalMeshUvMapping @ 148f80600

FSkeletalMeshUvMapping * __thiscall
FSkeletalMeshUvMapping::FSkeletalMeshUvMapping
          (FSkeletalMeshUvMapping *this,TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> param_1,
          int param_2,int param_3)

{
  *(int *)&this->_padding_ = param_2;
  this->_padding_ = (longlong)&___7FMeshUvMapping__6B_;
  *(int *)((longlong)&this->_padding_ + 4) = param_3;
  FNiagaraUvQuadTree::FNiagaraUvQuadTree((FNiagaraUvQuadTree *)&this->_padding_,8,8);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSkeletalMeshUvMapping__6B_;
  (this->MeshObject).WeakPtr = param_1.WeakPtr;
  return this;
}

// ~FSkeletalMeshUvMapping @ 148f81e80

void __thiscall FSkeletalMeshUvMapping::~FSkeletalMeshUvMapping(FSkeletalMeshUvMapping *this)

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

// BuildQuadTree @ 148f8f8b0

void __thiscall FSkeletalMeshUvMapping::BuildQuadTree(FSkeletalMeshUvMapping *this)

{
  FRawStaticIndexBuffer16or32Interface *pFVar1;
  code *pcVar2;
  bool bVar3;
  USkeletalMesh *pUVar4;
  FSkeletalMeshLODRenderData *pFVar5;
  FQuadTreeBuildHelper<FSkelMeshVertexAccessorHelper<1>_> local_68;
  FQuadTreeBuildHelper<FSkelMeshVertexAccessorHelper<0>_> local_50;
  FSkelMeshVertexAccessorHelper<1> local_38;
  FSkelMeshVertexAccessorHelper<0> local_20;
  
  pUVar4 = (USkeletalMesh *)FWeakObjectPtr::Get(&(this->MeshObject).WeakPtr);
  if ((pUVar4 != (USkeletalMesh *)0x0) &&
     (pFVar5 = GetLodRenderData(pUVar4,(int)this->_padding_,*(int *)((longlong)&this->_padding_ + 4)
                               ), pFVar5 != (FSkeletalMeshLODRenderData *)0x0)) {
    pFVar1 = (pFVar5->MultiSizeIndexContainer).IndexBuffer;
    if ((pFVar5->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs != false) {
      local_38.LodRenderData = pFVar5;
      if ((pFVar1 == (FRawStaticIndexBuffer16or32Interface *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IndexBuffer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                             ,0x56,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_38.IndexBuffer = (pFVar5->MultiSizeIndexContainer).IndexBuffer;
      local_68.MeshAccessor = &local_38;
      local_68.UvSetIndex = *(int *)((longlong)&this->_padding_ + 4);
      local_68.QuadTree = (FNiagaraUvQuadTree *)&this->_padding_;
      FQuadTreeBuildHelper<FSkelMeshVertexAccessorHelper<1>_>::Build(&local_68);
      return;
    }
    local_20.LodRenderData = pFVar5;
    if ((pFVar1 == (FRawStaticIndexBuffer16or32Interface *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                           ,0x56,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_20.IndexBuffer = (pFVar5->MultiSizeIndexContainer).IndexBuffer;
    local_50.MeshAccessor = &local_20;
    local_50.UvSetIndex = *(int *)((longlong)&this->_padding_ + 4);
    local_50.QuadTree = (FNiagaraUvQuadTree *)&this->_padding_;
    FQuadTreeBuildHelper<FSkelMeshVertexAccessorHelper<0>_>::Build(&local_50);
  }
  return;
}

// FindFirstTriangle @ 148fad940

int __thiscall
FSkeletalMeshUvMapping::FindFirstTriangle
          (FSkeletalMeshUvMapping *this,TBox2<double> *param_1,TVector<double> *param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  FRawStaticIndexBuffer16or32Interface *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  USkeletalMesh *pUVar8;
  FSkeletalMeshLODRenderData *pFVar9;
  int local_res8 [2];
  int local_res20 [2];
  TVector2<double>_u_0 local_158;
  TVector2<double>_u_0 local_148;
  TVector2<double>_u_0 local_138;
  TVector2<double>_u_0 local_128;
  FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<1>_> local_118;
  TVector<double>_u_0 local_100;
  FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<0>_> local_e8;
  TVector<double>_u_0 local_d0;
  <lambda_1> local_b8;
  <lambda_1> local_88;
  FSkelMeshVertexAccessorHelper<1> local_58;
  FSkelMeshVertexAccessorHelper<0> local_40;
  
  pUVar8 = (USkeletalMesh *)FWeakObjectPtr::Get(&(this->MeshObject).WeakPtr);
  if ((pUVar8 == (USkeletalMesh *)0x0) ||
     (pFVar9 = GetLodRenderData(pUVar8,(int)this->_padding_,*(int *)((longlong)&this->_padding_ + 4)
                               ), pFVar9 == (FSkeletalMeshLODRenderData *)0x0)) {
    local_res8[0] = -1;
  }
  else {
    pFVar4 = (pFVar9->MultiSizeIndexContainer).IndexBuffer;
    if ((pFVar9->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
      local_40.LodRenderData = pFVar9;
      if ((pFVar4 == (FRawStaticIndexBuffer16or32Interface *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IndexBuffer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                             ,0x56,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      dVar2 = (param_1->Max).field0_0x0._s_0.X;
      dVar3 = (param_1->Max).field0_0x0._s_0.Y;
      local_40.IndexBuffer = (pFVar9->MultiSizeIndexContainer).IndexBuffer;
      plVar1 = &this->_padding_;
      local_e8.MeshAccessor = &local_40;
      local_e8.UvSetIndex = *(int *)((longlong)&this->_padding_ + 4);
      local_138._s_0.X = __real_3ff0000000000000 / (dVar2 - (param_1->Min).field0_0x0._s_0.X);
      local_res20[0] = -1;
      local_138._s_0.Y = __real_3ff0000000000000 / (dVar3 - (param_1->Min).field0_0x0._s_0.Y);
      local_d0._s_0.X = (dVar2 + (param_1->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
      local_128._s_0.X = __real_3ff0000000000000 - local_138._s_0.X * dVar2;
      local_128._s_0.Y = __real_3ff0000000000000 - local_138._s_0.Y * dVar3;
      local_d0._s_0.Z = 0.0;
      local_d0._s_0.Y = (dVar3 + (param_1->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
      local_e8.QuadTree = (FNiagaraUvQuadTree *)plVar1;
      if (((int)this->_padding_ < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      local_88.__this = &local_e8;
      local_88.NormalizeScale = (TVector2<double> *)&local_138;
      local_88.NormalizeBias = (TVector2<double> *)&local_128;
      local_88.UvRef = (TVector<double> *)&local_d0;
      local_88.FoundTriangleIndex = local_res20;
      local_88.BarycentricCoord = param_2;
      FNiagaraUvQuadTree::FSubTree::
      VisitElements<_FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<0>_>::FindFirstTriangle_::__l2::<lambda_1>_>
                ((FSubTree *)this->_padding_,(FNiagaraUvQuadTree *)plVar1,param_1,&local_88);
      local_res8[0] = local_res20[0];
    }
    else {
      local_58.LodRenderData = pFVar9;
      if ((pFVar4 == (FRawStaticIndexBuffer16or32Interface *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IndexBuffer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                             ,0x56,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      dVar2 = (param_1->Max).field0_0x0._s_0.X;
      dVar3 = (param_1->Max).field0_0x0._s_0.Y;
      local_58.IndexBuffer = (pFVar9->MultiSizeIndexContainer).IndexBuffer;
      plVar1 = &this->_padding_;
      local_118.MeshAccessor = &local_58;
      local_118.UvSetIndex = *(int *)((longlong)&this->_padding_ + 4);
      local_158._s_0.X = __real_3ff0000000000000 / (dVar2 - (param_1->Min).field0_0x0._s_0.X);
      local_res8[0] = -1;
      local_158._s_0.Y = __real_3ff0000000000000 / (dVar3 - (param_1->Min).field0_0x0._s_0.Y);
      local_100._s_0.X = (dVar2 + (param_1->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
      local_148._s_0.X = __real_3ff0000000000000 - local_158._s_0.X * dVar2;
      local_148._s_0.Y = __real_3ff0000000000000 - local_158._s_0.Y * dVar3;
      local_100._s_0.Z = 0.0;
      local_100._s_0.Y = (dVar3 + (param_1->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
      local_118.QuadTree = (FNiagaraUvQuadTree *)plVar1;
      if (((int)this->_padding_ < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      local_b8.__this = &local_118;
      local_b8.NormalizeScale = (TVector2<double> *)&local_158;
      local_b8.NormalizeBias = (TVector2<double> *)&local_148;
      local_b8.UvRef = (TVector<double> *)&local_100;
      local_b8.FoundTriangleIndex = local_res8;
      local_b8.BarycentricCoord = param_2;
      FNiagaraUvQuadTree::FSubTree::
      VisitElements<_FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<1>_>::FindFirstTriangle_::__l2::<lambda_1>_>
                ((FSubTree *)this->_padding_,(FNiagaraUvQuadTree *)plVar1,param_1,&local_b8);
    }
  }
  return local_res8[0];
}

// FindFirstTriangle @ 148fadcb0

int __thiscall
FSkeletalMeshUvMapping::FindFirstTriangle
          (FSkeletalMeshUvMapping *this,TVector2<double> *param_1,float param_2,
          TVector<double> *param_3)

{
  longlong *plVar1;
  FRawStaticIndexBuffer16or32Interface *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  USkeletalMesh *pUVar6;
  FSkeletalMeshLODRenderData *pFVar7;
  int local_res8 [2];
  int local_158 [2];
  float local_150 [2];
  float local_148 [2];
  FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<1>_> local_140;
  FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<0>_> local_128;
  <lambda_1>_conflict local_108;
  <lambda_1>_conflict local_d8;
  FSkelMeshVertexAccessorHelper<1> local_a8;
  FSkelMeshVertexAccessorHelper<0> local_90;
  TVector2<double>_u_0 local_78;
  double local_68;
  double dStack_60;
  undefined1 local_58;
  TVector2<double>_u_0 local_50;
  double local_40;
  double dStack_38;
  undefined1 local_30;
  
  pUVar6 = (USkeletalMesh *)FWeakObjectPtr::Get(&(this->MeshObject).WeakPtr);
  if ((pUVar6 == (USkeletalMesh *)0x0) ||
     (pFVar7 = GetLodRenderData(pUVar6,(int)this->_padding_,*(int *)((longlong)&this->_padding_ + 4)
                               ), pFVar7 == (FSkeletalMeshLODRenderData *)0x0)) {
    return -1;
  }
  pFVar2 = (pFVar7->MultiSizeIndexContainer).IndexBuffer;
  if ((pFVar7->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
    local_90.LodRenderData = pFVar7;
    if ((pFVar2 == (FRawStaticIndexBuffer16or32Interface *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                           ,0x56,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    local_90.IndexBuffer = (pFVar7->MultiSizeIndexContainer).IndexBuffer;
    plVar1 = &this->_padding_;
    local_50._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_50._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_128.MeshAccessor = &local_90;
    local_128.UvSetIndex = *(int *)((longlong)&this->_padding_ + 4);
    local_158[0] = -1;
    local_30 = 1;
    local_148[0] = param_2;
    local_128.QuadTree = (FNiagaraUvQuadTree *)plVar1;
    local_40 = local_50._s_0.X;
    dStack_38 = local_50._s_0.Y;
    if (((int)this->_padding_ < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    local_d8.__this = &local_128;
    local_d8.Tolerance = local_148;
    local_d8.FoundTriangleIndex = local_158;
    local_d8.InUv = param_1;
    local_d8.BarycentricCoord = param_3;
    FNiagaraUvQuadTree::FSubTree::
    VisitElements<_FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<0>_>::FindFirstTriangle_::__l2::<lambda_1>_>
              ((FSubTree *)this->_padding_,(FNiagaraUvQuadTree *)plVar1,
               (TBox2<double> *)&local_50._s_0,&local_d8);
    return local_158[0];
  }
  local_a8.LodRenderData = pFVar7;
  if ((pFVar2 == (FRawStaticIndexBuffer16or32Interface *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IndexBuffer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                         ,0x56,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  local_a8.IndexBuffer = (pFVar7->MultiSizeIndexContainer).IndexBuffer;
  plVar1 = &this->_padding_;
  local_78._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_78._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_140.MeshAccessor = &local_a8;
  local_140.UvSetIndex = *(int *)((longlong)&this->_padding_ + 4);
  local_res8[0] = -1;
  local_58 = 1;
  local_150[0] = param_2;
  local_140.QuadTree = (FNiagaraUvQuadTree *)plVar1;
  local_68 = local_78._s_0.X;
  dStack_60 = local_78._s_0.Y;
  if (((int)this->_padding_ < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  local_108.__this = &local_140;
  local_108.Tolerance = local_150;
  local_108.FoundTriangleIndex = local_res8;
  local_108.InUv = param_1;
  local_108.BarycentricCoord = param_3;
  FNiagaraUvQuadTree::FSubTree::
  VisitElements<_FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<1>_>::FindFirstTriangle_::__l2::<lambda_1>_>
            ((FSubTree *)this->_padding_,(FNiagaraUvQuadTree *)plVar1,
             (TBox2<double> *)&local_78._s_0,&local_108);
  return local_res8[0];
}

// FindOverlappingTriangles @ 148fae8c0

void __thiscall
FSkeletalMeshUvMapping::FindOverlappingTriangles
          (FSkeletalMeshUvMapping *this,TVector2<double> *param_1,float param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  FRawStaticIndexBuffer16or32Interface *pFVar1;
  code *pcVar2;
  bool bVar3;
  USkeletalMesh *pUVar4;
  FSkeletalMeshLODRenderData *pFVar5;
  FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<1>_> local_78;
  FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<0>_> local_60;
  FSkelMeshVertexAccessorHelper<1> local_48;
  FSkelMeshVertexAccessorHelper<0> local_30;
  
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  pUVar4 = (USkeletalMesh *)FWeakObjectPtr::Get(&(this->MeshObject).WeakPtr);
  if ((pUVar4 != (USkeletalMesh *)0x0) &&
     (pFVar5 = GetLodRenderData(pUVar4,(int)this->_padding_,*(int *)((longlong)&this->_padding_ + 4)
                               ), pFVar5 != (FSkeletalMeshLODRenderData *)0x0)) {
    pFVar1 = (pFVar5->MultiSizeIndexContainer).IndexBuffer;
    if ((pFVar5->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
      local_30.LodRenderData = pFVar5;
      if ((pFVar1 == (FRawStaticIndexBuffer16or32Interface *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IndexBuffer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                             ,0x56,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_30.IndexBuffer = (pFVar5->MultiSizeIndexContainer).IndexBuffer;
      local_60.QuadTree = (FNiagaraUvQuadTree *)&this->_padding_;
      local_60.MeshAccessor = &local_30;
      local_60.UvSetIndex = *(int *)((longlong)&this->_padding_ + 4);
      FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<0>_>::FindOverlappingTriangle
                (&local_60,param_1,param_2,param_3);
    }
    else {
      local_48.LodRenderData = pFVar5;
      if ((pFVar1 == (FRawStaticIndexBuffer16or32Interface *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IndexBuffer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                             ,0x56,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_48.IndexBuffer = (pFVar5->MultiSizeIndexContainer).IndexBuffer;
      local_78.QuadTree = (FNiagaraUvQuadTree *)&this->_padding_;
      local_78.MeshAccessor = &local_48;
      local_78.UvSetIndex = *(int *)((longlong)&this->_padding_ + 4);
      FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<1>_>::FindOverlappingTriangle
                (&local_78,param_1,param_2,param_3);
    }
  }
  return;
}

// GetLodRenderData @ 148fb49d0

FSkeletalMeshLODRenderData * __cdecl
FSkeletalMeshUvMapping::GetLodRenderData(USkeletalMesh *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  FSkeletalMeshLODRenderData *pFVar4;
  FSkeletalMeshLODRenderData *pFVar5;
  
  plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x398))();
  if (((plVar3 != (longlong *)0x0) && (-1 < param_2)) && (param_2 < (int)plVar3[1])) {
    if (param_2 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSkeletalMeshLODRenderData *)(*pcVar1)();
        return pFVar4;
      }
    }
    pFVar4 = *(FSkeletalMeshLODRenderData **)(*plVar3 + (longlong)param_2 * 8);
    pFVar5 = (FSkeletalMeshLODRenderData *)0x0;
    if (param_3 < (int)(pFVar4->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords) {
      pFVar5 = pFVar4;
    }
    return pFVar5;
  }
  return (FSkeletalMeshLODRenderData *)0x0;
}

// GetLodRenderData @ 148fb4a80

FSkeletalMeshLODRenderData * __thiscall
FSkeletalMeshUvMapping::GetLodRenderData(FSkeletalMeshUvMapping *this)

{
  USkeletalMesh *pUVar1;
  FSkeletalMeshLODRenderData *pFVar2;
  
  pUVar1 = (USkeletalMesh *)FWeakObjectPtr::Get(&(this->MeshObject).WeakPtr);
  if (pUVar1 != (USkeletalMesh *)0x0) {
    pFVar2 = GetLodRenderData(pUVar1,(int)this->_padding_,*(int *)((longlong)&this->_padding_ + 4));
    return pFVar2;
  }
  return (FSkeletalMeshLODRenderData *)0x0;
}

// IsValidMeshObject @ 148fc5fe0

bool __cdecl
FSkeletalMeshUvMapping::IsValidMeshObject
          (TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *param_1,int param_2,int param_3)

{
  USkeletalMesh *pUVar1;
  longlong lVar2;
  FSkeletalMeshLODRenderData *pFVar3;
  
  pUVar1 = (USkeletalMesh *)FWeakObjectPtr::Get(&param_1->WeakPtr);
  if (pUVar1 != (USkeletalMesh *)0x0) {
    lVar2 = (**(code **)(pUVar1->_padding_ + 0x330))(pUVar1,param_2);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xd0) & 4) != 0)) {
      pFVar3 = GetLodRenderData(pUVar1,param_2,param_3);
      return pFVar3 != (FSkeletalMeshLODRenderData *)0x0;
    }
  }
  return false;
}

// Matches @ 148fc6060

bool __thiscall
FSkeletalMeshUvMapping::Matches
          (FSkeletalMeshUvMapping *this,TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *param_1,
          int param_2,int param_3)

{
  bool bVar1;
  
  if ((int)this->_padding_ == param_2) {
    bVar1 = TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>::UEOpEquals<USkeletalMesh,bool>
                      (&this->MeshObject,param_1);
    if ((bVar1) && (*(int *)((longlong)&this->_padding_ + 4) == param_3)) {
      return true;
    }
  }
  return false;
}

