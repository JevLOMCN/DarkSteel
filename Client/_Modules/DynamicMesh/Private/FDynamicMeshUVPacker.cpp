// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 5

// FDynamicMeshUVPacker @ 14c896b10

FDynamicMeshUVPacker * __thiscall
UE::Geometry::FDynamicMeshUVPacker::FDynamicMeshUVPacker
          (FDynamicMeshUVPacker *this,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          *param_2)

{
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  
  pTVar1 = &this->TidsToRepack;
  this->TextureResolution = 0x200;
  this->GutterSize = 1.0;
  this->bPreserveScale = false;
  this->bPreserveRotation = false;
  this->bAllowFlips = false;
  this->bScaleIslandsByWorldSpaceTexelRatio = false;
  pTVar1->Ptr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  this->UVOverlay = param_1;
  if (pTVar1 != param_2) {
    pTVar1->Ptr = param_2->Ptr;
    param_2->Ptr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  }
  return this;
}

// FDynamicMeshUVPacker @ 14c896b50

FDynamicMeshUVPacker * __thiscall
UE::Geometry::FDynamicMeshUVPacker::FDynamicMeshUVPacker
          (FDynamicMeshUVPacker *this,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1)

{
  (this->TidsToRepack).Ptr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  this->TextureResolution = 0x200;
  this->GutterSize = 1.0;
  this->bPreserveScale = false;
  this->bPreserveRotation = false;
  this->bAllowFlips = false;
  this->bScaleIslandsByWorldSpaceTexelRatio = false;
  this->UVOverlay = param_1;
  return this;
}

// CollectUVIslandsToPack @ 14c8c7c90

FMeshConnectedComponents * __thiscall
UE::Geometry::FDynamicMeshUVPacker::CollectUVIslandsToPack
          (FDynamicMeshUVPacker *this,FMeshConnectedComponents *__return_storage_ptr__,
          FUVOverlayView *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  code *local_38 [2];
  undefined **local_28;
  FUVOverlayView *local_20;
  undefined8 local_10;
  
  __return_storage_ptr__->Mesh = param_1->Mesh;
  (__return_storage_ptr__->Components).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Components).Array.ArrayNum = 0;
  (__return_storage_ptr__->Components).Array.ArrayMax = 0;
  pTVar1 = (this->TidsToRepack).Ptr;
  local_10 = 0;
  local_28 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Geometry::FDynamicMeshUVPacker::CollectUVIslandsToPack'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMeshUVPacker::CollectUVIslandsToPack'::__l2::<lambda_1>,bool,int,int>
                ::Call;
  local_20 = param_1;
  if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMeshConnectedComponents::FindConnectedTriangles
              (__return_storage_ptr__,pTVar1,(TFunction<bool___cdecl(int,int)> *)local_38);
    return __return_storage_ptr__;
  }
  FMeshConnectedComponents::FindConnectedTriangles
            (__return_storage_ptr__,(TFunction<bool___cdecl(int,int)> *)local_38);
  return __return_storage_ptr__;
}

// StackPack @ 14c91cd80

bool __thiscall UE::Geometry::FDynamicMeshUVPacker::StackPack(FDynamicMeshUVPacker *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  int iVar6;
  bool bVar7;
  FMeshConnectedComponents *local_res8;
  FMeshConnectedComponents local_a8;
  FUVPacker local_90;
  IUVMeshView local_80;
  FDynamicMesh3 *local_78;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_70;
  code *local_68 [2];
  undefined **local_58;
  IUVMeshView *local_50;
  undefined8 local_40;
  code *local_38;
  FMeshConnectedComponents **local_30;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId86,"DynamicMeshUVPacker_StackPack",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\MeshUVPacking.cpp"
               ,0x56);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId86);
  }
  local_90.bPreserveScale = this->bPreserveScale;
  local_90.GutterSize = this->GutterSize;
  pTVar1 = (this->TidsToRepack).Ptr;
  local_90.bPreserveRotation = this->bPreserveRotation;
  local_90.bAllowFlips = this->bAllowFlips;
  local_90.TextureResolution = this->TextureResolution;
  local_90.bScaleIslandsByWorldSpaceTexelRatio = this->bScaleIslandsByWorldSpaceTexelRatio;
  local_70 = this->UVOverlay;
  local_80 = (IUVMeshView)&___7FUVOverlayView_Geometry_UE__6B_;
  local_a8.Mesh = *(FDynamicMesh3 **)local_70;
  local_58 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Geometry::FDynamicMeshUVPacker::CollectUVIslandsToPack'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_50 = &local_80;
  local_68[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMeshUVPacker::CollectUVIslandsToPack'::__l2::<lambda_1>,bool,int,int>
                ::Call;
  local_a8.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Components.Array.ArrayNum = 0;
  local_a8.Components.Array.ArrayMax = 0;
  local_40 = 0;
  local_78 = local_a8.Mesh;
  if (pTVar1 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMeshConnectedComponents::FindConnectedTriangles
              (&local_a8,(TFunction<bool___cdecl(int,int)> *)local_68);
  }
  else {
    FMeshConnectedComponents::FindConnectedTriangles
              (&local_a8,pTVar1,(TFunction<bool___cdecl(int,int)> *)local_68);
  }
  local_res8 = &local_a8;
  local_30 = &local_res8;
  local_38 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDynamicMeshUVPacker::StackPack'::__l2::<lambda_1>,void,int,TArray<int,TSizedDefaultAllocator<32>_>_&>
             ::Call;
  bVar4 = FUVPacker::StackPack
                    (&local_90,&local_80,local_a8.Components.Array.ArrayNum,
                     (TFunctionRef<void___cdecl(int,TArray<int,TSizedDefaultAllocator<32>_>_&)> *)
                     &local_38);
  FVar5.Data = local_a8.Components.Array.AllocatorInstance.Data;
  for (iVar6 = local_a8.Components.Array.ArrayNum; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = *(undefined8 **)FVar5.Data;
    if (puVar2 != (undefined8 *)0x0) {
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
      ::operator_delete(puVar2,0x10);
    }
    FVar5.Data = FVar5.Data + 8;
  }
  uVar3 = (ulonglong)local_a8.Components.Array._8_8_ >> 0x20;
  local_a8.Components.Array._8_8_ = local_a8.Components.Array._8_8_ & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&local_a8.Components,0,&local_a8.Components.Array.ArrayMax
              );
  }
  if (local_a8.Components.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Components.Array.AllocatorInstance.Data);
  }
  local_80 = (IUVMeshView)&___7IUVMeshView_FUVPacker_Geometry_UE__6B_;
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// StandardPack @ 14c91cf90

bool __thiscall UE::Geometry::FDynamicMeshUVPacker::StandardPack(FDynamicMeshUVPacker *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  int iVar6;
  bool bVar7;
  FMeshConnectedComponents *local_res8;
  FMeshConnectedComponents local_a8;
  FUVPacker local_90;
  IUVMeshView local_80;
  FDynamicMesh3 *local_78;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_70;
  code *local_68 [2];
  undefined **local_58;
  IUVMeshView *local_50;
  undefined8 local_40;
  code *local_38;
  FMeshConnectedComponents **local_30;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId65,"DynamicMeshUVPacker_StandardPack",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\MeshUVPacking.cpp"
               ,0x41);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId65);
  }
  local_90.bPreserveScale = this->bPreserveScale;
  local_90.GutterSize = this->GutterSize;
  pTVar1 = (this->TidsToRepack).Ptr;
  local_90.bPreserveRotation = this->bPreserveRotation;
  local_90.bAllowFlips = this->bAllowFlips;
  local_90.TextureResolution = this->TextureResolution;
  local_90.bScaleIslandsByWorldSpaceTexelRatio = this->bScaleIslandsByWorldSpaceTexelRatio;
  local_70 = this->UVOverlay;
  local_80 = (IUVMeshView)&___7FUVOverlayView_Geometry_UE__6B_;
  local_a8.Mesh = *(FDynamicMesh3 **)local_70;
  local_58 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Geometry::FDynamicMeshUVPacker::CollectUVIslandsToPack'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_50 = &local_80;
  local_68[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMeshUVPacker::CollectUVIslandsToPack'::__l2::<lambda_1>,bool,int,int>
                ::Call;
  local_a8.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Components.Array.ArrayNum = 0;
  local_a8.Components.Array.ArrayMax = 0;
  local_40 = 0;
  local_78 = local_a8.Mesh;
  if (pTVar1 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMeshConnectedComponents::FindConnectedTriangles
              (&local_a8,(TFunction<bool___cdecl(int,int)> *)local_68);
  }
  else {
    FMeshConnectedComponents::FindConnectedTriangles
              (&local_a8,pTVar1,(TFunction<bool___cdecl(int,int)> *)local_68);
  }
  local_res8 = &local_a8;
  local_30 = &local_res8;
  local_38 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDynamicMeshUVPacker::StandardPack'::__l2::<lambda_1>,void,int,TArray<int,TSizedDefaultAllocator<32>_>_&>
             ::Call;
  bVar4 = FUVPacker::StandardPack
                    (&local_90,&local_80,local_a8.Components.Array.ArrayNum,
                     (TFunctionRef<void___cdecl(int,TArray<int,TSizedDefaultAllocator<32>_>_&)> *)
                     &local_38);
  FVar5.Data = local_a8.Components.Array.AllocatorInstance.Data;
  for (iVar6 = local_a8.Components.Array.ArrayNum; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = *(undefined8 **)FVar5.Data;
    if (puVar2 != (undefined8 *)0x0) {
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
      ::operator_delete(puVar2,0x10);
    }
    FVar5.Data = FVar5.Data + 8;
  }
  uVar3 = (ulonglong)local_a8.Components.Array._8_8_ >> 0x20;
  local_a8.Components.Array._8_8_ = local_a8.Components.Array._8_8_ & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&local_a8.Components,0,&local_a8.Components.Array.ArrayMax
              );
  }
  if (local_a8.Components.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Components.Array.AllocatorInstance.Data);
  }
  local_80 = (IUVMeshView)&___7IUVMeshView_FUVPacker_Geometry_UE__6B_;
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

