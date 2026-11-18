// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 17

// ~FCompressedStaticMeshSpatialWrapper @ 14cad16c0

void __thiscall
UE::Geometry::FCompressedStaticMeshSpatialWrapper::~FCompressedStaticMeshSpatialWrapper
          (FCompressedStaticMeshSpatialWrapper *this)

{
  TFastWindingTree<UE::Geometry::FColliderMesh> *pTVar1;
  FScriptContainerElement *pFVar2;
  TMeshAABBTree3<UE::Geometry::FColliderMesh> *pTVar3;
  
  pTVar1 = (this->FWNTree).Ptr;
  if (pTVar1 != (TFastWindingTree<UE::Geometry::FColliderMesh> *)0x0) {
    pFVar2 = (pTVar1->FastWindingCache).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x38);
  }
  pTVar3 = (this->AABBTree).Ptr;
  if (pTVar3 != (TMeshAABBTree3<UE::Geometry::FColliderMesh> *)0x0) {
    (**(code **)pTVar3->_padding_)(pTVar3,1);
  }
  TMeshAABBTree3<UE::Geometry::FColliderMesh>::~TMeshAABBTree3<UE::Geometry::FColliderMesh>
            (&(this->ColliderMesh).AABBTree);
  pFVar2 = (this->ColliderMesh).SourceTriangleIDs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ColliderMesh).SourceVertexIDs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ColliderMesh).Triangles.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ColliderMesh).Vertices.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IMeshSpatialWrapper_Geometry_UE__6B_;
  return;
}

// AppendMesh @ 14cae9c20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FCompressedStaticMeshSpatialWrapper::AppendMesh
          (FCompressedStaticMeshSpatialWrapper *this,FDynamicMesh3 *param_1,
          TTransformSequence3<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  FIndex3i_u_0 local_98;
  undefined8 local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TVector<double>_u_0 local_68;
  undefined8 local_50;
  float local_48;
  undefined8 local_44;
  float local_3c;
  TVector2<float>_u_0 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&local_78,(this->ColliderMesh).Vertices.ArrayNum,Default);
  uVar10 = 0;
  if (0 < (this->ColliderMesh).Vertices.ArrayNum) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->ColliderMesh).Vertices.ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if (uVar6 == 0) {
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
      pFVar3 = (this->ColliderMesh).Vertices.AllocatorInstance.Data;
      local_30 = 0;
      local_2e = 0;
      pFVar1 = pFVar3 + lVar12;
      local_68._s_0.X = (double)*(undefined8 *)pFVar1;
      local_68._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
      local_68._s_0.Z = (double)*(undefined8 *)(pFVar3 + lVar12 + 0x10);
      local_48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_3c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_50 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_44 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_38 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      iVar7 = FDynamicMesh3::AppendVertex(param_1,(FVertexInfo *)&local_68._s_0);
      uVar6 = 0;
      if ((int)uVar10 < local_78.ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if (uVar6 == 0) {
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
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x18;
      *(int *)(local_78.AllocatorInstance.Data + lVar11) = iVar7;
      lVar11 = lVar11 + 4;
    } while ((int)uVar10 < (this->ColliderMesh).Vertices.ArrayNum);
  }
  iVar7 = (this->ColliderMesh).Triangles.ArrayNum;
  uVar10 = 0;
  if (0 < iVar7) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < iVar7) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if (uVar6 == 0) {
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
      pFVar1 = (this->ColliderMesh).Triangles.AllocatorInstance.Data;
      uVar6 = *(uint *)(pFVar1 + lVar11 + 8);
      local_88 = *(undefined8 *)(pFVar1 + lVar11);
      uVar8 = 0;
      if ((int)uVar6 < local_78.ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if (uVar8 == 0) {
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
      iVar7 = *(int *)(local_78.AllocatorInstance.Data + (longlong)(int)uVar6 * 4);
      lVar12 = (longlong)(int)local_88._4_4_;
      uVar6 = 0;
      if ((int)local_88._4_4_ < local_78.ArrayNum) {
        uVar6 = ~local_88._4_4_ >> 0x1f;
      }
      iVar9 = local_78.ArrayNum;
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = local_78.ArrayNum;
      }
      iVar2 = *(int *)(local_78.AllocatorInstance.Data + lVar12 * 4);
      lVar12 = (longlong)(int)(uint)local_88;
      uVar6 = 0;
      if ((int)(uint)local_88 < iVar9) {
        uVar6 = ~(uint)local_88 >> 0x1f;
      }
      if (uVar6 == 0) {
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
      local_98._s_0.A = *(undefined4 *)(local_78.AllocatorInstance.Data + lVar12 * 4);
      local_98._s_0.B = iVar2;
      local_98._s_0.C = iVar7;
      FDynamicMesh3::AppendTriangle(param_1,(FIndex3i *)&local_98._s_0,0);
      iVar7 = (this->ColliderMesh).Triangles.ArrayNum;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0xc;
    } while ((int)uVar10 < iVar7);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// Build @ 14caed510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FCompressedStaticMeshSpatialWrapper::Build
          (FCompressedStaticMeshSpatialWrapper *this,FMeshSceneAdapterBuildOptions *param_1)

{
  TUniquePtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>,TDefaultDelete<UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>_>_>
  *pTVar1;
  TUniquePtr<UE::Geometry::TFastWindingTree<UE::Geometry::FColliderMesh>,TDefaultDelete<UE::Geometry::TFastWindingTree<UE::Geometry::FColliderMesh>_>_>
  *pTVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 uVar6;
  TMeshAABBTree3<UE::Geometry::FColliderMesh> *pTVar7;
  TMeshAABBTree3<UE::Geometry::FColliderMesh> *pTVar8;
  undefined8 *puVar9;
  TMeshAABBTree3<UE::Geometry::FColliderMesh> *pTVar10;
  bool bVar11;
  undefined1 auStack_388 [32];
  FBuildOptions local_368 [2];
  longlong *local_360;
  undefined2 local_358;
  undefined8 local_350;
  undefined1 local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined1 local_334;
  longlong local_330;
  undefined8 local_328 [2];
  FDynamicMesh3 local_318;
  undefined1 local_e8 [160];
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_388;
  pTVar10 = (TMeshAABBTree3<UE::Geometry::FColliderMesh> *)0x0;
  if ((this->ColliderMesh).Triangles.ArrayNum == 0) {
    (**(code **)(this->_padding_ + 0x80))(this,&local_360);
    local_350 = __real_3fb999999999999a;
    local_340 = __real_3f50624dd2f1a9fc;
    local_358 = 0;
    local_348 = 0;
    local_338 = 0x1010000;
    local_334 = 0;
    (**(code **)(*local_360 + 8))();
    FDynamicMesh3::FDynamicMesh3(&local_318,None);
    plVar4 = local_360;
    pcVar3 = *(code **)(*local_360 + 0x40);
    memset(local_e8,0,0xa0);
    local_48 = (void *)0x0;
    local_40 = 0;
    local_3c = 2;
    (*pcVar3)(plVar4,&local_318,local_e8);
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    local_368[0].bBuildVertexMap = false;
    local_368[0].bBuildTriangleMap = false;
    local_368[0].bBuildAABBTree = false;
    FColliderMesh::Initialize(&this->ColliderMesh,&local_318,local_368);
    FDynamicMesh3::~FDynamicMesh3(&local_318);
    if (local_360 != (longlong *)0x0) {
      (**(code **)*local_360)();
    }
  }
  if (param_1->bBuildSpatialDataStructures == false) {
    return true;
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_bool___cdecl_UE::Geometry::FCompressedStaticMeshSpatialWrapper::Build(UE::Geometry::FMeshSceneAdapterBuildOptions_const&___ptr64)___ptr64'
                ::__l9::__CpuProfilerEventSpecId1211,
               "MeshScene_WrapperBuild_StaticMeshCompressed_AABBTree",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x4bb);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_bool___cdecl_UE::Geometry::FCompressedStaticMeshSpatialWrapper::Build(UE::Geometry::FMeshSceneAdapterBuildOptions_const&___ptr64)___ptr64'
               ::__l9::__CpuProfilerEventSpecId1211);
  }
  pTVar7 = ::operator_new(0xc0);
  pTVar8 = pTVar10;
  if (pTVar7 != (TMeshAABBTree3<UE::Geometry::FColliderMesh> *)0x0) {
    pTVar8 = TMeshAABBTree3<UE::Geometry::FColliderMesh>::
             TMeshAABBTree3<UE::Geometry::FColliderMesh>(pTVar7,&this->ColliderMesh,true);
  }
  pTVar1 = &this->AABBTree;
  if (pTVar1 == (TUniquePtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>,TDefaultDelete<UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>_>_>
                 *)&local_330) {
    if (pTVar8 != (TMeshAABBTree3<UE::Geometry::FColliderMesh> *)0x0) {
      puVar9 = (undefined8 *)pTVar8->_padding_;
      goto LAB_14caed6f1;
    }
  }
  else {
    pTVar7 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar8;
    if (pTVar7 != (TMeshAABBTree3<UE::Geometry::FColliderMesh> *)0x0) {
      puVar9 = (undefined8 *)pTVar7->_padding_;
      pTVar8 = pTVar7;
LAB_14caed6f1:
      (*(code *)*puVar9)(pTVar8);
    }
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_bool___cdecl_UE::Geometry::FCompressedStaticMeshSpatialWrapper::Build(UE::Geometry::FMeshSceneAdapterBuildOptions_const&___ptr64)___ptr64'
                ::__l10::__CpuProfilerEventSpecId1215,
               "MeshScene_WrapperBuild_StaticMeshCompressed_FWNTree",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x4bf);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_bool___cdecl_UE::Geometry::FCompressedStaticMeshSpatialWrapper::Build(UE::Geometry::FMeshSceneAdapterBuildOptions_const&___ptr64)___ptr64'
               ::__l10::__CpuProfilerEventSpecId1215);
  }
  pTVar8 = pTVar1->Ptr;
  pTVar7 = ::operator_new(0x38);
  if (pTVar7 != (TMeshAABBTree3<UE::Geometry::FColliderMesh> *)0x0) {
    pTVar7->Mesh = (FColliderMesh *)0x0;
    pTVar7->MeshChangeStamp = 0;
    *(undefined8 *)&pTVar7->GetSplitAxis = 0;
    pTVar7->TopDownLeafMaxTriCount = 0;
    *(undefined8 *)&(pTVar7->GetSplitAxis).field_0x8 = 0x4000000000000000;
    *(undefined4 *)&(pTVar7->GetSplitAxis).field_0x10 = 2;
    pTVar7->_padding_ = (longlong)pTVar8;
    if ((pTVar8 == (TMeshAABBTree3<UE::Geometry::FColliderMesh> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Tree",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                           ,0x16c,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pTVar10 = (TMeshAABBTree3<UE::Geometry::FColliderMesh> *)pTVar7->_padding_;
    if ((pTVar10->RootIndex < 0) || (pTVar10->MeshChangeStamp != 0)) {
      TMeshAABBTree3<UE::Geometry::FColliderMesh>::BuildTopDown(pTVar10,false);
      pTVar10->MeshChangeStamp = 0;
    }
    TFastWindingTree<UE::Geometry::FColliderMesh>::build_fast_winding_cache
              ((TFastWindingTree<UE::Geometry::FColliderMesh> *)pTVar7);
    *(undefined8 *)&pTVar7->GetSplitAxis = *(undefined8 *)(pTVar7->_padding_ + 0x10);
    pTVar10 = pTVar7;
  }
  pTVar2 = &this->FWNTree;
  if (pTVar2 == (TUniquePtr<UE::Geometry::TFastWindingTree<UE::Geometry::FColliderMesh>,TDefaultDelete<UE::Geometry::TFastWindingTree<UE::Geometry::FColliderMesh>_>_>
                 *)local_328) {
    if (pTVar10 == (TMeshAABBTree3<UE::Geometry::FColliderMesh> *)0x0) goto LAB_14caed835;
    pTVar8 = pTVar10;
    if (pTVar10->Mesh != (FColliderMesh *)0x0) {
      FMemory::Free(pTVar10->Mesh);
    }
  }
  else {
    pTVar8 = (TMeshAABBTree3<UE::Geometry::FColliderMesh> *)pTVar2->Ptr;
    pTVar2->Ptr = (TFastWindingTree<UE::Geometry::FColliderMesh> *)pTVar10;
    if (pTVar8 == (TMeshAABBTree3<UE::Geometry::FColliderMesh> *)0x0) goto LAB_14caed835;
    if (pTVar8->Mesh != (FColliderMesh *)0x0) {
      FMemory::Free(pTVar8->Mesh);
    }
  }
  ::operator_delete(pTVar8,0x38);
LAB_14caed835:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// CollectSeedPoints @ 14caf62a0

void __thiscall
UE::Geometry::FCompressedStaticMeshSpatialWrapper::CollectSeedPoints
          (FCompressedStaticMeshSpatialWrapper *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
          *param_2)

{
  TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  CollectSeedPointsFromMeshVertices<UE::Geometry::FColliderMesh>
            (&this->ColliderMesh,&local_18,param_1,500);
  return;
}

// FastWindingNumber @ 14cb07970

double __thiscall
UE::Geometry::FCompressedStaticMeshSpatialWrapper::FastWindingNumber
          (FCompressedStaticMeshSpatialWrapper *this,TVector<double> *param_1,
          TTransformSequence3<double> *param_2)

{
  TFastWindingTree<UE::Geometry::FColliderMesh> *this_00;
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  local_48._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  this_00 = (this->FWNTree).Ptr;
  local_48._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  pTVar2 = TTransformSequence3<double>::InverseTransformPosition
                     (param_2,&local_28,(TVector<double> *)&local_48._s_0);
  dVar1 = TFastWindingTree<UE::Geometry::FColliderMesh>::FastWindingNumber(this_00,pTVar2);
  return dVar1;
}

// GetIntermediateWrapper @ 14cb10820

TUniquePtr<UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>,TDefaultDelete<UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>_>_>
 __thiscall
UE::Geometry::FCompressedStaticMeshSpatialWrapper::GetIntermediateWrapper
          (FCompressedStaticMeshSpatialWrapper *this)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *in_RDX;
  
  puVar3 = ::operator_new(0x48);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[2] = 1;
    puVar3[4] = 0;
    puVar3[1] = 0;
    puVar3[3] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *puVar3 = &___7FStaticMeshSourceDataSpatialWrapper_Geometry_UE__6B_;
    puVar3[8] = 0;
  }
  lVar1 = this->_padding_;
  lVar2 = this->_padding_;
  in_RDX->_padding_ = (longlong)puVar3;
  puVar3[1] = lVar1;
  puVar3[2] = lVar2;
  puVar3[3] = this->StaticMesh;
  return (TUniquePtr<UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>,TDefaultDelete<UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>_>_>
          )in_RDX;
}

// GetTriangle @ 14cb14d80

FIndex3i * __thiscall
UE::Geometry::FCompressedStaticMeshSpatialWrapper::GetTriangle
          (FCompressedStaticMeshSpatialWrapper *this,FIndex3i *__return_storage_ptr__,int param_1)

{
  FColliderMesh::GetTriangle(&this->ColliderMesh,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetTriangleCount @ 14cb15020

int __thiscall
UE::Geometry::FCompressedStaticMeshSpatialWrapper::GetTriangleCount
          (FCompressedStaticMeshSpatialWrapper *this)

{
  return (this->ColliderMesh).Triangles.ArrayNum;
}

// GetWorldBounds @ 14cb15bd0

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::FCompressedStaticMeshSpatialWrapper::GetWorldBounds
          (FCompressedStaticMeshSpatialWrapper *this,
          TAxisAlignedBox3<double> *__return_storage_ptr__,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
          *param_1)

{
  TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_1;
  local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
  GetTransformedVertexBounds<UE::Geometry::FColliderMesh>
            (__return_storage_ptr__,&this->ColliderMesh,&local_18);
  return __return_storage_ptr__;
}

// HasNormals @ 14cb1aa10

bool __thiscall
UE::Geometry::FCompressedStaticMeshSpatialWrapper::HasNormals
          (FCompressedStaticMeshSpatialWrapper *this)

{
  return false;
}

// HasUVs @ 14cb1b0c0

bool __thiscall
UE::Geometry::FCompressedStaticMeshSpatialWrapper::HasUVs
          (FCompressedStaticMeshSpatialWrapper *this,int param_1)

{
  return false;
}

// IsTriangle @ 14cb22ff0

bool __thiscall
UE::Geometry::FCompressedStaticMeshSpatialWrapper::IsTriangle
          (FCompressedStaticMeshSpatialWrapper *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->ColliderMesh).Triangles.ArrayNum)) {
    return true;
  }
  return false;
}

// ProcessVerticesInWorld @ 14cb295d0

bool __thiscall
UE::Geometry::FCompressedStaticMeshSpatialWrapper::ProcessVerticesInWorld
          (FCompressedStaticMeshSpatialWrapper *this,
          TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&)> *param_1,
          TTransformSequence3<double> *param_2)

{
  double dVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  TVector<double> *pTVar11;
  longlong lVar12;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar13;
  uchar *puVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 local_res8 [8];
  TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&)> *local_res10;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  TVector<double>_u_0 local_b8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  double local_90;
  TVector<double> local_88 [3];
  
  lVar12 = (longlong)(this->ColliderMesh).Vertices.ArrayNum;
  iVar15 = 0;
  cVar10 = '\x01';
  if (0 < lVar12) {
    lVar16 = 0;
    lVar17 = 0;
    local_res10 = param_1;
    cVar10 = '\x01';
    do {
      if (cVar10 == '\0') {
        return false;
      }
      if ((-1 < iVar15) && (iVar15 < (this->ColliderMesh).Vertices.ArrayNum)) {
        if ((iVar15 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        pFVar3 = (this->ColliderMesh).Vertices.AllocatorInstance.Data;
        FVar4 = (param_2->Transforms).AllocatorInstance.SecondaryData;
        dVar1 = *(double *)(pFVar3 + lVar17 + 0x10);
        pFVar3 = pFVar3 + lVar17;
        dVar7 = *(double *)pFVar3;
        dVar6 = *(double *)(pFVar3 + 8);
        iVar2 = (param_2->Transforms).ArrayNum;
        FVar13 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)param_2;
        if (FVar4 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
          FVar13 = FVar4;
        }
        puVar14 = (uchar *)((longlong)FVar13 + 0x40);
        while( true ) {
          if ((param_2->Transforms).ArrayNum != iVar2) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_res8);
          }
          if ((ForElementType<UE::Geometry::TTransformSRT3<double>_> *)(puVar14 + -0x40) ==
              (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
              ((longlong)iVar2 * 0x50 + (longlong)FVar13)) break;
          local_b8._s_0.X = dVar7 * *(double *)(puVar14 + -8);
          local_b8._s_0.Y = dVar6 * *(double *)puVar14;
          local_b8._s_0.Z = dVar1 * *(double *)(puVar14 + 8);
          pTVar11 = operator*<double>(local_88,(TQuaternion<double> *)(puVar14 + -0x40),
                                      (TVector<double> *)&local_b8._s_0);
          dVar6 = (pTVar11->field0_0x0)._s_0.Y + *(double *)(puVar14 + -0x18);
          dVar1 = (pTVar11->field0_0x0)._s_0.Z + *(double *)(puVar14 + -0x10);
          dVar7 = *(double *)(puVar14 + -0x20) + (pTVar11->field0_0x0)._s_0.X;
          puVar14 = puVar14 + 0x50;
        }
        local_d8 = SUB84(dVar7,0);
        uStack_d4 = (undefined4)((ulonglong)dVar7 >> 0x20);
        uStack_d0 = SUB84(dVar6,0);
        uStack_cc = (undefined4)((ulonglong)dVar6 >> 0x20);
        local_a0 = local_d8;
        uStack_9c = uStack_d4;
        uStack_98 = uStack_d0;
        uStack_94 = uStack_cc;
        local_90 = dVar1;
        cVar10 = (**(code **)local_res10)(*(undefined8 *)&local_res10->field_0x8,&local_a0);
      }
      iVar15 = iVar15 + 1;
      lVar16 = lVar16 + 1;
      lVar17 = lVar17 + 0x18;
    } while (lVar16 < lVar12);
  }
  return (bool)cVar10;
}

// RayIntersection @ 14cb2a760

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

bool __thiscall
UE::Geometry::FCompressedStaticMeshSpatialWrapper::RayIntersection
          (FCompressedStaticMeshSpatialWrapper *this,TRay<double> *param_1,
          TTransformSequence3<double> *param_2,FMeshSceneRayHit *param_3)

{
  double dVar1;
  double dVar2;
  TMeshAABBTree3<UE::Geometry::FColliderMesh> *pTVar3;
  double dVar4;
  char cVar5;
  TVector<double> *pTVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_1a8 [32];
  double *local_188;
  undefined8 *local_180;
  int local_178 [4];
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  double local_130;
  double dStack_128;
  double local_120;
  TVector<double>_u_0 local_118;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  TVector<double> local_e0;
  undefined8 local_c8 [2];
  longlong local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  undefined1 local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_168._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  local_168._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
  local_168._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  TTransformSequence3<double>::InverseTransformPosition
            (param_2,(TVector<double> *)&local_148._s_0,(TVector<double> *)&local_168._s_0);
  local_168._s_0.X = (param_1->Origin).field0_0x0._s_0.X + (param_1->Direction).field0_0x0._s_0.X;
  local_168._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y + (param_1->Origin).field0_0x0._s_0.Y;
  local_168._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z + (param_1->Origin).field0_0x0._s_0.Z;
  pTVar6 = TTransformSequence3<double>::InverseTransformPosition
                     (param_2,&local_e0,(TVector<double> *)&local_168._s_0);
  local_118._s_0.Z = 0.0;
  dVar11 = (pTVar6->field0_0x0)._s_0.X - local_148._s_0.X;
  dVar12 = (pTVar6->field0_0x0)._s_0.Y - local_148._s_0.Y;
  dVar4 = (pTVar6->field0_0x0)._s_0.Z - local_148._s_0.Z;
  auVar8._0_8_ = dVar11 * dVar11;
  auVar8._8_8_ = 0;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar12 * dVar12 + auVar8._0_8_ + dVar4 * dVar4;
  auVar9 = sqrtpd(auVar8,auVar9);
  if (auVar9._0_8_ <= 0.0) {
    local_118._s_0.Y = 0.0;
    local_118._s_0.X = 0.0;
  }
  else {
    dVar10 = __real_3ff0000000000000 / auVar9._0_8_;
    local_118._s_0.Z = dVar10 * dVar4;
    local_118._s_0.Y = dVar10 * dVar12;
    local_118._s_0.X = dVar10 * dVar11;
  }
  local_130 = local_148._s_0.X;
  dStack_128 = local_148._s_0.Y;
  local_120 = local_148._s_0.Z;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_118._s_0,__real_3e45798ee0000000);
  pTVar3 = (this->AABBTree).Ptr;
  local_b8 = 0;
  local_90 = (longlong *)0x0;
  local_88 = 0;
  local_180 = local_c8;
  local_188 = &local_f8;
  local_c8[0] = __real_7fefffffffffffff;
  cVar5 = (**(code **)(pTVar3->_padding_ + 0x30))(pTVar3,&local_130,&local_100,local_178);
  if (local_b8 != 0) {
    plVar7 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar7 = local_90;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (cVar5 != '\0') {
    param_3->HitMeshTriIndex = local_178[0];
    param_3->HitMeshSpatialWrapper = (IMeshSpatialWrapper *)this;
    local_168._s_0.X = local_118._s_0.X * local_100 + local_130;
    local_168._s_0.Z = local_118._s_0.Z * local_100 + local_120;
    local_168._s_0.Y = local_118._s_0.Y * local_100 + dStack_128;
    TTransformSequence3<double>::TransformPosition
              (param_2,(TVector<double> *)&local_148._s_0,(TVector<double> *)&local_168._s_0);
    dVar4 = (param_1->Origin).field0_0x0._s_0.Y;
    dVar11 = (param_1->Origin).field0_0x0._s_0.Z;
    dVar12 = (param_1->Origin).field0_0x0._s_0.X;
    dVar10 = (param_1->Direction).field0_0x0._s_0.Y;
    dVar1 = (param_1->Direction).field0_0x0._s_0.Z;
    dVar2 = (param_1->Direction).field0_0x0._s_0.X;
    (param_3->HitMeshBaryCoords).field0_0x0._s_0.X = local_f8;
    (param_3->HitMeshBaryCoords).field0_0x0._s_0.Y = dStack_f0;
    (param_3->HitMeshBaryCoords).field0_0x0._s_0.Z = local_e8;
    param_3->RayDistance =
         (local_148._s_0.X - dVar12) * dVar2 + (local_148._s_0.Y - dVar4) * dVar10 +
         (local_148._s_0.Z - dVar11) * dVar1;
  }
  return cVar5 != '\0';
}

// TriBaryInterpolateNormal @ 14cb42cc0

bool __thiscall
UE::Geometry::FCompressedStaticMeshSpatialWrapper::TriBaryInterpolateNormal
          (FCompressedStaticMeshSpatialWrapper *this,int param_1,TVector<double> *param_2,
          TVector<float> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                     ,0x4d9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// TriBaryInterpolatePoint @ 14cb43060

TVector<double> * __thiscall
UE::Geometry::FCompressedStaticMeshSpatialWrapper::TriBaryInterpolatePoint
          (FCompressedStaticMeshSpatialWrapper *this,TVector<double> *__return_storage_ptr__,
          int param_1,TVector<double> *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                     ,0x4d8,L"");
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector<double> *)(*pcVar1)();
    return pTVar4;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// TriBaryInterpolateUV @ 14cb433e0

bool __thiscall
UE::Geometry::FCompressedStaticMeshSpatialWrapper::TriBaryInterpolateUV
          (FCompressedStaticMeshSpatialWrapper *this,int param_1,TVector<double> *param_2,
          int param_3,TVector2<float> *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                     ,0x4da,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

