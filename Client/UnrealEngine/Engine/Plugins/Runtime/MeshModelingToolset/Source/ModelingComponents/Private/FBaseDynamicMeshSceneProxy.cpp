// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14ca56d80

void __thiscall
FBaseDynamicMeshSceneProxy::InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FBaseDynamicMeshSceneProxy *this,FMeshRenderBufferSet *param_1,FDynamicMesh3 *param_2,
          int param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_5,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_6,
          TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_7,
          TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
          *param_8,bool param_9,bool param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedDefaultAllocator<32>_>
  local_38;
  TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
  local_28;
  
  uVar1 = *(undefined8 *)param_8;
  uVar2 = *(undefined8 *)&param_8->field_0x8;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&local_38.AllocatorInstance,&local_38.ArrayMax);
  local_38.ArrayNum = iVar3 + 1;
  *(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **)
   (local_38.AllocatorInstance.Data + (longlong)iVar3 * 8) = param_5;
  local_28._0_8_ = uVar1;
  local_28._8_8_ = uVar2;
  FMeshRenderBufferSetConversionUtil::
  InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (&this->MeshRenderBufferSetConverter,param_1,param_2,param_3,param_4,&local_38,param_6,
             param_7,&local_28,param_9,param_10);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

