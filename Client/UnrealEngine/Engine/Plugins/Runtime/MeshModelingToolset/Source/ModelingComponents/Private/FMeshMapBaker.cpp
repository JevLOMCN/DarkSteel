// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 5

// <lambda_invoker_cdecl> @ 14ca42240

bool __cdecl UE::Geometry::FMeshMapBaker::<lambda_26_>::<lambda_invoker_cdecl>(void)

{
  return false;
}

// <lambda_invoker_cdecl> @ 14ca42250

void __cdecl
UE::Geometry::FMeshMapBaker::<lambda_27_>::<lambda_invoker_cdecl>
          (TArray<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,TSizedDefaultAllocator<32>_>
           *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 14ca42260

void __cdecl
UE::Geometry::FMeshMapBaker::<lambda_28_>::<lambda_invoker_cdecl>
          (bool param_1,FCorrespondenceSample *param_2,TVector2<double> *param_3,FVector2i *param_4)

{
  return;
}

// FMeshMapBaker @ 14ca64ad0

FMeshMapBaker * __thiscall UE::Geometry::FMeshMapBaker::FMeshMapBaker(FMeshMapBaker *this)

{
  undefined1 *puVar1;
  TDynamicVector<int,512> *pTVar2;
  
  *(undefined8 *)&this->field_0x28 = 0x4008000000000000;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined ***)this = &___7FMeshMapBaker_Geometry_UE__6B_;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->CancelF = 0;
  *(undefined8 *)&(this->CancelF).field_0x28 = 0;
  *(undefined ***)&(this->CancelF).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->CancelF).field_0x18;
  *(code **)puVar1 = <lambda_26_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->CancelF =
         Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(undefined8 *)&this->PostWriteToImageCallback = 0;
  *(undefined8 *)&(this->PostWriteToImageCallback).field_0x28 = 0;
  *(undefined ***)&(this->PostWriteToImageCallback).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6AXAEAV__TArray_V__TUniquePtr_V__TImageBuilder_U__TVector4_M_Math_UE___Geometry_UE__U__TDefaultDelete_V__TImageBuilder_U__TVector4_M_Math_UE___Geometry_UE______V__TSizedDefaultAllocator__0CA______Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->PostWriteToImageCallback).field_0x18;
  *(code **)puVar1 = <lambda_27_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->PostWriteToImageCallback =
         Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(TArray<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,TSizedDefaultAllocator<32>_>_&),void,TArray<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,TSizedDefaultAllocator<32>_>_&>
         ::Call;
  }
  *(undefined8 *)&this->InteriorSampleCallback = 0;
  *(undefined8 *)&(this->InteriorSampleCallback).field_0x28 = 0;
  *(undefined ***)&(this->InteriorSampleCallback).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6AX_NAEBUFCorrespondenceSample_FMeshMapEvaluator_Geometry_UE__AEBU__TVector2_N_Math_4_AEBUFVector2i_34__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->InteriorSampleCallback).field_0x18;
  *(code **)puVar1 = <lambda_28_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->InteriorSampleCallback =
         Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(bool,UE::Geometry::FMeshMapEvaluator::FCorrespondenceSample_const_&,UE::Math::TVector2<double>_const_&,UE::Geometry::FVector2i_const_&),void,bool,UE::Geometry::FMeshMapEvaluator::FCorrespondenceSample_const_&,UE::Math::TVector2<double>_const_&,UE::Geometry::FVector2i_const_&>
         ::Call;
  }
  *(undefined8 *)&this->SampleFilterF = 0;
  *(undefined8 *)&(this->SampleFilterF).field_0x28 = 0;
  (this->BakeAnalytics).TotalBakeDuration = 0.0;
  (this->BakeAnalytics).WriteToImageDuration = 0.0;
  (this->BakeAnalytics).WriteToGutterDuration = 0.0;
  (this->BakeAnalytics).NumSamplePixels = (atomic<__int64>)0x0;
  (this->BakeAnalytics).NumGutterPixels = (atomic<__int64>)0x0;
  this->bParallel = true;
  FDynamicMesh3::FDynamicMesh3(&this->FlatMesh);
  (this->MeshUVSampler).Mesh = (FDynamicMesh3 *)0x0;
  (this->MeshUVSampler)._padding_ = (longlong)&___7FMeshSurfaceUVSampler_Geometry_UE__6B_;
  (this->MeshUVSampler).UVOverlay =
       (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
  (this->MeshUVSampler).UVMeshSpatial._padding_ =
       (longlong)&___7__TMeshAABBTree3_UFDynamicMeshUVMesh_Geometry_UE___Geometry_UE__6B_;
  (this->MeshUVSampler).QueryType = TriangleAndUV;
  (this->MeshUVSampler).bUVMeshSpatialInitialized = false;
  (this->MeshUVSampler).UVMeshAdapter.Mesh = (FDynamicMesh3 *)0x0;
  (this->MeshUVSampler).UVMeshAdapter.UV =
       (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
  (this->MeshUVSampler).UVMeshSpatial.MeshChangeStamp = 0;
  (this->MeshUVSampler).UVMeshSpatial.TopDownLeafMaxTriCount = 3;
  *(undefined8 *)&(this->MeshUVSampler).UVMeshSpatial.GetSplitAxis = 0;
  *(undefined8 *)&(this->MeshUVSampler).UVMeshSpatial.GetSplitAxis.field_0x28 = 0;
  *(undefined ***)&(this->MeshUVSampler).UVMeshSpatial.GetSplitAxis.field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->MeshUVSampler).UVMeshSpatial.GetSplitAxis.field_0x18;
  *(code **)puVar1 =
       `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::MakeDefaultSplitAxisFunc'::
       __l2::<lambda_1>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&(this->MeshUVSampler).UVMeshSpatial.GetSplitAxis =
         Core::Private::Function::
         TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
         ::Call;
  }
  pTVar2 = &(this->MeshUVSampler).UVMeshSpatial.BoxToIndex;
  (this->MeshUVSampler).UVMeshSpatial.BoxEps = 1e-08;
  pTVar2->CurBlock = 0;
  pTVar2->CurBlockUsed = 0;
  (this->MeshUVSampler).UVMeshSpatial.BoxToIndex.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MeshUVSampler).UVMeshSpatial.BoxToIndex.Blocks.ArrayNum = 0;
  (this->MeshUVSampler).UVMeshSpatial.BoxToIndex.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar2);
  TDynamicVector<UE::Math::TVector<double>,512>::TDynamicVector<UE::Math::TVector<double>,512>
            (&(this->MeshUVSampler).UVMeshSpatial.BoxCenters);
  TDynamicVector<UE::Math::TVector<double>,512>::TDynamicVector<UE::Math::TVector<double>,512>
            (&(this->MeshUVSampler).UVMeshSpatial.BoxExtents);
  pTVar2 = &(this->MeshUVSampler).UVMeshSpatial.IndexList;
  pTVar2->CurBlock = 0;
  pTVar2->CurBlockUsed = 0;
  (this->MeshUVSampler).UVMeshSpatial.IndexList.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MeshUVSampler).UVMeshSpatial.IndexList.Blocks.ArrayNum = 0;
  (this->MeshUVSampler).UVMeshSpatial.IndexList.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar2);
  (this->MeshUVSampler).UVMeshSpatial.TrianglesEnd = -1;
  (this->MeshUVSampler).UVMeshSpatial.RootIndex = -1;
  (this->MeshUVSampler).UVMeshSpatial.Mesh = (FDynamicMeshUVMesh *)0x0;
  (this->Dimensions).Width = 0x80;
  (this->Dimensions).Height = 0x80;
  this->bGutterEnabled = true;
  this->GutterSize = 4;
  this->SamplesPerPixel = 1;
  this->TileSize = 0x20;
  this->TilePadding = 2;
  this->FilterKernelSize = 0;
  this->FilterType = BSpline;
  this->TextureFilterEval = (_func___cdecl_float_TVector2<double>_ptr *)0x0;
  this->IsInFilterRegionEval = (_func___cdecl_bool_TVector2<double>_ptr *)0x0;
  this->BakeSampleBufferSize = 0;
  (this->Bakers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bakers).ArrayNum = 0;
  (this->Bakers).ArrayMax = 0;
  (this->BakeContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BakeContexts).ArrayNum = 0;
  (this->BakeContexts).ArrayMax = 0;
  (this->BakeAccumulateLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BakeAccumulateLists).ArrayNum = 0;
  (this->BakeAccumulateLists).ArrayMax = 0;
  (this->BakeDefaults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BakeDefaults).ArrayNum = 0;
  (this->BakeDefaults).ArrayMax = 0;
  (this->BakeDefaultColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BakeDefaultColors).ArrayNum = 0;
  (this->BakeDefaultColors).ArrayMax = 0;
  (this->BakeOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BakeOffsets).ArrayNum = 0;
  (this->BakeOffsets).ArrayMax = 0;
  (this->BakeSampleOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BakeSampleOffsets).ArrayNum = 0;
  (this->BakeSampleOffsets).ArrayMax = 0;
  (this->BakeResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BakeResults).ArrayNum = 0;
  (this->BakeResults).ArrayMax = 0;
  this->TargetMeshUVCharts = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  (this->TargetMeshUVChartsLocal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetMeshUVChartsLocal).ArrayNum = 0;
  (this->TargetMeshUVChartsLocal).ArrayMax = 0;
  return this;
}

// ~FMeshMapBaker @ 14ca6ae10

void __thiscall UE::Geometry::FMeshMapBaker::~FMeshMapBaker(FMeshMapBaker *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pFVar1 = (this->TargetMeshUVChartsLocal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,int>
            ((TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>
              *)(this->BakeResults).AllocatorInstance.Data,(this->BakeResults).ArrayNum);
  pFVar1 = (this->BakeResults).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BakeSampleOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BakeOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BakeDefaultColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BakeDefaults).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->BakeAccumulateLists).AllocatorInstance.Data,(this->BakeAccumulateLists).ArrayNum
            );
  pFVar1 = (this->BakeAccumulateLists).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::FMeshMapEvaluator::FEvaluationContext,int>
            ((FEvaluationContext *)(this->BakeContexts).AllocatorInstance.Data,
             (this->BakeContexts).ArrayNum);
  pFVar1 = (this->BakeContexts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Geometry::FMeshMapEvaluator,1>,int>
            ((TSharedPtr<UE::Geometry::FMeshMapEvaluator,1> *)(this->Bakers).AllocatorInstance.Data,
             (this->Bakers).ArrayNum);
  pFVar1 = (this->Bakers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>(&(this->MeshUVSampler).UVMeshSpatial);
  FDynamicMesh3::~FDynamicMesh3(&this->FlatMesh);
  if (*(longlong *)&this->SampleFilterF != 0) {
    plVar2 = *(longlong **)&(this->SampleFilterF).field_0x28;
    plVar3 = (longlong *)&(this->SampleFilterF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->InteriorSampleCallback != 0) {
    plVar2 = *(longlong **)&(this->InteriorSampleCallback).field_0x28;
    plVar3 = (longlong *)&(this->InteriorSampleCallback).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->PostWriteToImageCallback != 0) {
    plVar2 = *(longlong **)&(this->PostWriteToImageCallback).field_0x28;
    plVar3 = (longlong *)&(this->PostWriteToImageCallback).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->CancelF != 0) {
    plVar2 = *(longlong **)&(this->CancelF).field_0x28;
    plVar3 = (longlong *)&(this->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x18);
  return;
}

