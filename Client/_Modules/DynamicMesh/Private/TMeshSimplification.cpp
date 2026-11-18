// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 173

// TMeshSimplification<UE::Geometry::TQuadricError<double>_> @ 14c6dc4b0

TMeshSimplification<UE::Geometry::TQuadricError<double>_> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
TMeshSimplification<UE::Geometry::TQuadricError<double>_>
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  *(undefined2 *)&this->field_0x128 = 0x100;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x138 = 0x3e45798ee0000000;
  this->field_0xc8 = 0;
  *(undefined ***)this =
       &___7__TMeshSimplification_U__TQuadricError_N_Geometry_UE___Geometry_UE__6B_;
  this->MinEdgeLength = 1.7976931348623157e+308;
  this->SeamEdgeWeight = 256.0;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  this->field_0x12a = 0;
  *(undefined4 *)&this->field_0x12c = 0;
  *(undefined8 *)&this->field_0x130 = 0;
  this->CollapseMode = MinimalQuadricPositionError;
  this->bRetainQuadricMemory = false;
  this->bPreserveBoundaryShape = true;
  this->bAllowSeamCollapse = true;
  this->bPreventTinyTriangles = false;
  this->GeometricErrorConstraint = None;
  this->GeometricErrorTolerance = 0.0;
  this->MaxErrorAllowed = 3.4028235e+38;
  this->TargetCount = 0x7fffffff;
  this->SimplifyMode = TriangleCount;
  this->MaxEdgeID = 0;
  (this->vertQuadrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->vertQuadrics).ArrayNum = 0;
  (this->vertQuadrics).ArrayMax = 0;
  *(undefined8 *)&this->seamQuadrics = 0;
  *(undefined8 *)&(this->seamQuadrics).field_0x8 = 0;
  *(undefined8 *)&(this->seamQuadrics).field_0x20 = 0;
  *(undefined4 *)&(this->seamQuadrics).field_0x28 = 0;
  *(undefined4 *)&(this->seamQuadrics).field_0x2c = 0x80;
  *(undefined4 *)&(this->seamQuadrics).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->seamQuadrics).field_0x34 = 0;
  *(undefined8 *)&(this->seamQuadrics).field_0x40 = 0;
  *(undefined4 *)&(this->seamQuadrics).field_0x48 = 0;
  (this->triAreas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->triAreas).ArrayNum = 0;
  (this->triAreas).ArrayMax = 0;
  (this->triQuadrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->triQuadrics).ArrayNum = 0;
  (this->triQuadrics).ArrayMax = 0;
  (this->EdgeQuadrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeQuadrics).ArrayNum = 0;
  (this->EdgeQuadrics).ArrayMax = 0;
  FIndexPriorityQueue::FIndexPriorityQueue(&this->EdgeQueue);
  (this->IsBoundaryVtxCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IsBoundaryVtxCache).ArrayNum = 0;
  (this->IsBoundaryVtxCache).ArrayMax = 0;
  return this;
}

// TMeshSimplification<UE::Geometry::TQuadricError<double>_> @ 14c6dc640

TMeshSimplification<UE::Geometry::TQuadricError<double>_> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
TMeshSimplification<UE::Geometry::TQuadricError<double>_>
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar2;
  
  pTVar2 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  this->field_0xc8 = 0;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0x138 = 0x3e45798ee0000000;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined ***)this =
       &___7__TMeshSimplification_U__TQuadricError_N_Geometry_UE___Geometry_UE__6B_;
  *(undefined8 *)&this->field_0xe0 = 0;
  this->MinEdgeLength = 1.7976931348623157e+308;
  this->SeamEdgeWeight = 256.0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined2 *)&this->field_0x128 = 0x100;
  this->field_0x12a = 0;
  *(undefined4 *)&this->field_0x12c = 0;
  *(undefined8 *)&this->field_0x130 = 0;
  *(FDynamicMesh3 **)&this->field_0x8 = param_1;
  this->CollapseMode = MinimalQuadricPositionError;
  this->bRetainQuadricMemory = false;
  this->bPreserveBoundaryShape = true;
  this->bAllowSeamCollapse = true;
  this->bPreventTinyTriangles = false;
  this->GeometricErrorConstraint = None;
  this->GeometricErrorTolerance = 0.0;
  this->MaxErrorAllowed = 3.4028235e+38;
  this->TargetCount = 0x7fffffff;
  this->SimplifyMode = TriangleCount;
  this->MaxEdgeID = 0;
  (this->vertQuadrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->vertQuadrics).ArrayNum = 0;
  (this->vertQuadrics).ArrayMax = 0;
  *(undefined8 *)&this->seamQuadrics = 0;
  *(undefined8 *)&(this->seamQuadrics).field_0x8 = 0;
  *(undefined8 *)&(this->seamQuadrics).field_0x20 = 0;
  *(undefined4 *)&(this->seamQuadrics).field_0x28 = 0;
  *(undefined4 *)&(this->seamQuadrics).field_0x2c = 0x80;
  *(undefined4 *)&(this->seamQuadrics).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->seamQuadrics).field_0x34 = 0;
  *(undefined8 *)&(this->seamQuadrics).field_0x40 = 0;
  *(undefined4 *)&(this->seamQuadrics).field_0x48 = 0;
  (this->triAreas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->triAreas).ArrayNum = 0;
  (this->triAreas).ArrayMax = 0;
  (this->triQuadrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->triQuadrics).ArrayNum = 0;
  (this->triQuadrics).ArrayMax = 0;
  (this->EdgeQuadrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeQuadrics).ArrayNum = 0;
  (this->EdgeQuadrics).ArrayMax = 0;
  FIndexPriorityQueue::FIndexPriorityQueue(&this->EdgeQueue);
  (this->IsBoundaryVtxCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IsBoundaryVtxCache).ArrayNum = 0;
  (this->IsBoundaryVtxCache).ArrayMax = 0;
  this->NormalOverlay = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    if (0 < (pFVar1->NormalLayers).Array.ArrayNum) {
      pTVar2 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                (pFVar1->NormalLayers).Array.AllocatorInstance.Data;
    }
    this->NormalOverlay = pTVar2;
  }
  return this;
}

// TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> @ 14c6dc800

TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  *(undefined2 *)&this->field_0x128 = 0x100;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x138 = 0x3e45798ee0000000;
  this->field_0xc8 = 0;
  *(undefined ***)this =
       &___7__TMeshSimplification_V__TAttrBasedQuadricError_N_Geometry_UE___Geometry_UE__6B_;
  this->MinEdgeLength = 1.7976931348623157e+308;
  this->SeamEdgeWeight = 256.0;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  this->field_0x12a = 0;
  *(undefined4 *)&this->field_0x12c = 0;
  *(undefined8 *)&this->field_0x130 = 0;
  this->CollapseMode = MinimalQuadricPositionError;
  this->bRetainQuadricMemory = false;
  this->bPreserveBoundaryShape = true;
  this->bAllowSeamCollapse = true;
  this->bPreventTinyTriangles = false;
  this->GeometricErrorConstraint = None;
  this->GeometricErrorTolerance = 0.0;
  this->MaxErrorAllowed = 3.4028235e+38;
  this->TargetCount = 0x7fffffff;
  this->SimplifyMode = TriangleCount;
  this->MaxEdgeID = 0;
  (this->vertQuadrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->vertQuadrics).ArrayNum = 0;
  (this->vertQuadrics).ArrayMax = 0;
  *(undefined8 *)&this->seamQuadrics = 0;
  *(undefined8 *)&(this->seamQuadrics).field_0x8 = 0;
  *(undefined8 *)&(this->seamQuadrics).field_0x20 = 0;
  *(undefined4 *)&(this->seamQuadrics).field_0x28 = 0;
  *(undefined4 *)&(this->seamQuadrics).field_0x2c = 0x80;
  *(undefined4 *)&(this->seamQuadrics).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->seamQuadrics).field_0x34 = 0;
  *(undefined8 *)&(this->seamQuadrics).field_0x40 = 0;
  *(undefined4 *)&(this->seamQuadrics).field_0x48 = 0;
  (this->triAreas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->triAreas).ArrayNum = 0;
  (this->triAreas).ArrayMax = 0;
  (this->triQuadrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->triQuadrics).ArrayNum = 0;
  (this->triQuadrics).ArrayMax = 0;
  (this->EdgeQuadrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeQuadrics).ArrayNum = 0;
  (this->EdgeQuadrics).ArrayMax = 0;
  FIndexPriorityQueue::FIndexPriorityQueue(&this->EdgeQueue);
  (this->IsBoundaryVtxCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IsBoundaryVtxCache).ArrayNum = 0;
  (this->IsBoundaryVtxCache).ArrayMax = 0;
  return this;
}

// TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> @ 14c6dc990

TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,
          FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar2;
  
  pTVar2 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  this->field_0xc8 = 0;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0x138 = 0x3e45798ee0000000;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined ***)this =
       &___7__TMeshSimplification_V__TAttrBasedQuadricError_N_Geometry_UE___Geometry_UE__6B_;
  *(undefined8 *)&this->field_0xe0 = 0;
  this->MinEdgeLength = 1.7976931348623157e+308;
  this->SeamEdgeWeight = 256.0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined2 *)&this->field_0x128 = 0x100;
  this->field_0x12a = 0;
  *(undefined4 *)&this->field_0x12c = 0;
  *(undefined8 *)&this->field_0x130 = 0;
  *(FDynamicMesh3 **)&this->field_0x8 = param_1;
  this->CollapseMode = MinimalQuadricPositionError;
  this->bRetainQuadricMemory = false;
  this->bPreserveBoundaryShape = true;
  this->bAllowSeamCollapse = true;
  this->bPreventTinyTriangles = false;
  this->GeometricErrorConstraint = None;
  this->GeometricErrorTolerance = 0.0;
  this->MaxErrorAllowed = 3.4028235e+38;
  this->TargetCount = 0x7fffffff;
  this->SimplifyMode = TriangleCount;
  this->MaxEdgeID = 0;
  (this->vertQuadrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->vertQuadrics).ArrayNum = 0;
  (this->vertQuadrics).ArrayMax = 0;
  *(undefined8 *)&this->seamQuadrics = 0;
  *(undefined8 *)&(this->seamQuadrics).field_0x8 = 0;
  *(undefined8 *)&(this->seamQuadrics).field_0x20 = 0;
  *(undefined4 *)&(this->seamQuadrics).field_0x28 = 0;
  *(undefined4 *)&(this->seamQuadrics).field_0x2c = 0x80;
  *(undefined4 *)&(this->seamQuadrics).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->seamQuadrics).field_0x34 = 0;
  *(undefined8 *)&(this->seamQuadrics).field_0x40 = 0;
  *(undefined4 *)&(this->seamQuadrics).field_0x48 = 0;
  (this->triAreas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->triAreas).ArrayNum = 0;
  (this->triAreas).ArrayMax = 0;
  (this->triQuadrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->triQuadrics).ArrayNum = 0;
  (this->triQuadrics).ArrayMax = 0;
  (this->EdgeQuadrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeQuadrics).ArrayNum = 0;
  (this->EdgeQuadrics).ArrayMax = 0;
  FIndexPriorityQueue::FIndexPriorityQueue(&this->EdgeQueue);
  (this->IsBoundaryVtxCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IsBoundaryVtxCache).ArrayNum = 0;
  (this->IsBoundaryVtxCache).ArrayMax = 0;
  this->NormalOverlay = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    if (0 < (pFVar1->NormalLayers).Array.ArrayNum) {
      pTVar2 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                (pFVar1->NormalLayers).Array.AllocatorInstance.Data;
    }
    this->NormalOverlay = pTVar2;
  }
  return this;
}

// TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> @ 14c6dcb50

TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  *(undefined2 *)&this->field_0x128 = 0x100;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x138 = 0x3e45798ee0000000;
  this->field_0xc8 = 0;
  *(undefined ***)this =
       &___7__TMeshSimplification_V__TVolPresQuadricError_N_Geometry_UE___Geometry_UE__6B_;
  this->MinEdgeLength = 1.7976931348623157e+308;
  this->SeamEdgeWeight = 256.0;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  this->field_0x12a = 0;
  *(undefined4 *)&this->field_0x12c = 0;
  *(undefined8 *)&this->field_0x130 = 0;
  this->CollapseMode = MinimalQuadricPositionError;
  this->bRetainQuadricMemory = false;
  this->bPreserveBoundaryShape = true;
  this->bAllowSeamCollapse = true;
  this->bPreventTinyTriangles = false;
  this->GeometricErrorConstraint = None;
  this->GeometricErrorTolerance = 0.0;
  this->MaxErrorAllowed = 3.4028235e+38;
  this->TargetCount = 0x7fffffff;
  this->SimplifyMode = TriangleCount;
  this->MaxEdgeID = 0;
  (this->vertQuadrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->vertQuadrics).ArrayNum = 0;
  (this->vertQuadrics).ArrayMax = 0;
  *(undefined8 *)&this->seamQuadrics = 0;
  *(undefined8 *)&(this->seamQuadrics).field_0x8 = 0;
  *(undefined8 *)&(this->seamQuadrics).field_0x20 = 0;
  *(undefined4 *)&(this->seamQuadrics).field_0x28 = 0;
  *(undefined4 *)&(this->seamQuadrics).field_0x2c = 0x80;
  *(undefined4 *)&(this->seamQuadrics).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->seamQuadrics).field_0x34 = 0;
  *(undefined8 *)&(this->seamQuadrics).field_0x40 = 0;
  *(undefined4 *)&(this->seamQuadrics).field_0x48 = 0;
  (this->triAreas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->triAreas).ArrayNum = 0;
  (this->triAreas).ArrayMax = 0;
  (this->triQuadrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->triQuadrics).ArrayNum = 0;
  (this->triQuadrics).ArrayMax = 0;
  (this->EdgeQuadrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeQuadrics).ArrayNum = 0;
  (this->EdgeQuadrics).ArrayMax = 0;
  FIndexPriorityQueue::FIndexPriorityQueue(&this->EdgeQueue);
  (this->IsBoundaryVtxCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IsBoundaryVtxCache).ArrayNum = 0;
  (this->IsBoundaryVtxCache).ArrayMax = 0;
  return this;
}

// TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> @ 14c6dcce0

TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,
          FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar2;
  
  pTVar2 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  this->field_0xc8 = 0;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0x138 = 0x3e45798ee0000000;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined ***)this =
       &___7__TMeshSimplification_V__TVolPresQuadricError_N_Geometry_UE___Geometry_UE__6B_;
  *(undefined8 *)&this->field_0xe0 = 0;
  this->MinEdgeLength = 1.7976931348623157e+308;
  this->SeamEdgeWeight = 256.0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined2 *)&this->field_0x128 = 0x100;
  this->field_0x12a = 0;
  *(undefined4 *)&this->field_0x12c = 0;
  *(undefined8 *)&this->field_0x130 = 0;
  *(FDynamicMesh3 **)&this->field_0x8 = param_1;
  this->CollapseMode = MinimalQuadricPositionError;
  this->bRetainQuadricMemory = false;
  this->bPreserveBoundaryShape = true;
  this->bAllowSeamCollapse = true;
  this->bPreventTinyTriangles = false;
  this->GeometricErrorConstraint = None;
  this->GeometricErrorTolerance = 0.0;
  this->MaxErrorAllowed = 3.4028235e+38;
  this->TargetCount = 0x7fffffff;
  this->SimplifyMode = TriangleCount;
  this->MaxEdgeID = 0;
  (this->vertQuadrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->vertQuadrics).ArrayNum = 0;
  (this->vertQuadrics).ArrayMax = 0;
  *(undefined8 *)&this->seamQuadrics = 0;
  *(undefined8 *)&(this->seamQuadrics).field_0x8 = 0;
  *(undefined8 *)&(this->seamQuadrics).field_0x20 = 0;
  *(undefined4 *)&(this->seamQuadrics).field_0x28 = 0;
  *(undefined4 *)&(this->seamQuadrics).field_0x2c = 0x80;
  *(undefined4 *)&(this->seamQuadrics).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->seamQuadrics).field_0x34 = 0;
  *(undefined8 *)&(this->seamQuadrics).field_0x40 = 0;
  *(undefined4 *)&(this->seamQuadrics).field_0x48 = 0;
  (this->triAreas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->triAreas).ArrayNum = 0;
  (this->triAreas).ArrayMax = 0;
  (this->triQuadrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->triQuadrics).ArrayNum = 0;
  (this->triQuadrics).ArrayMax = 0;
  (this->EdgeQuadrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeQuadrics).ArrayNum = 0;
  (this->EdgeQuadrics).ArrayMax = 0;
  FIndexPriorityQueue::FIndexPriorityQueue(&this->EdgeQueue);
  (this->IsBoundaryVtxCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IsBoundaryVtxCache).ArrayNum = 0;
  (this->IsBoundaryVtxCache).ArrayMax = 0;
  this->NormalOverlay = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    if (0 < (pFVar1->NormalLayers).Array.ArrayNum) {
      pTVar2 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                (pFVar1->NormalLayers).Array.AllocatorInstance.Data;
    }
    this->NormalOverlay = pTVar2;
  }
  return this;
}

// QEdge @ 14c6e0230

QEdge * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::QEdge::QEdge
          (QEdge *this,int param_1,TQuadricError<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  
  this->eid = param_1;
  (this->q).c = 0.0;
  (this->q).bz = 0.0;
  (this->q).by = 0.0;
  (this->q).bx = 0.0;
  (this->q).Azz = 0.0;
  (this->q).Ayz = 0.0;
  (this->q).Ayy = 0.0;
  (this->q).Axz = 0.0;
  (this->q).Axy = 0.0;
  (this->q).Axx = 0.0;
  dVar1 = param_2->Axy;
  (this->q).Axx = param_2->Axx;
  (this->q).Axy = dVar1;
  dVar1 = param_2->Ayy;
  (this->q).Axz = param_2->Axz;
  (this->q).Ayy = dVar1;
  dVar1 = param_2->Azz;
  (this->q).Ayz = param_2->Ayz;
  (this->q).Azz = dVar1;
  dVar1 = param_2->by;
  (this->q).bx = param_2->bx;
  (this->q).by = dVar1;
  dVar1 = param_2->c;
  (this->q).bz = param_2->bz;
  (this->q).c = dVar1;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (this->collapse_pt).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->collapse_pt).field0_0x0._s_0.Y = dVar1;
  (this->collapse_pt).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  return this;
}

// QEdge @ 14c6e02b0

QEdge * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::QEdge::QEdge(QEdge *this)

{
  (this->q).c = 0.0;
  (this->q).bz = 0.0;
  (this->q).by = 0.0;
  (this->q).bx = 0.0;
  (this->q).Azz = 0.0;
  (this->q).Ayz = 0.0;
  (this->q).Ayy = 0.0;
  (this->q).Axz = 0.0;
  (this->q).Axy = 0.0;
  (this->q).Axx = 0.0;
  this->eid = 0;
  return this;
}

// QEdge @ 14c6e02f0

QEdge * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::QEdge::QEdge
          (QEdge *this,int param_1,TAttrBasedQuadricError<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  
  TAttrBasedQuadricError<double>::TAttrBasedQuadricError<double>(&this->q);
  this->eid = param_1;
  TAttrBasedQuadricError<double>::operator=(&this->q,param_2);
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (this->collapse_pt).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->collapse_pt).field0_0x0._s_0.Y = dVar1;
  (this->collapse_pt).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  return this;
}

// QEdge @ 14c6e0370

QEdge * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::QEdge::QEdge
          (QEdge *this)

{
  TAttrBasedQuadricError<double>::TAttrBasedQuadricError<double>(&this->q);
  this->eid = 0;
  return this;
}

// QEdge @ 14c6e03a0

QEdge * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::QEdge::QEdge
          (QEdge *this,int param_1,TVolPresQuadricError<double> *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  double dVar2;
  undefined8 uVar3;
  
  (this->q)._padding_ = 0;
  (this->q)._padding_ = 0;
  (this->q)._padding_ = 0;
  (this->q)._padding_ = 0;
  (this->q)._padding_ = 0;
  (this->q)._padding_ = 0;
  (this->q)._padding_ = 0;
  (this->q)._padding_ = 0;
  (this->q)._padding_ = 0;
  (this->q)._padding_ = 0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->q).PlaneData.N.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->q).PlaneData.N.field0_0x0._s_0.Y = (double)uVar3;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->q).PlaneData.Dist = 0.0;
  (this->q).PlaneData.N.field0_0x0._s_0.Z = (double)uVar3;
  this->eid = param_1;
  lVar1 = param_2->_padding_;
  (this->q)._padding_ = param_2->_padding_;
  (this->q)._padding_ = lVar1;
  lVar1 = param_2->_padding_;
  (this->q)._padding_ = param_2->_padding_;
  (this->q)._padding_ = lVar1;
  lVar1 = param_2->_padding_;
  (this->q)._padding_ = param_2->_padding_;
  (this->q)._padding_ = lVar1;
  lVar1 = param_2->_padding_;
  (this->q)._padding_ = param_2->_padding_;
  (this->q)._padding_ = lVar1;
  lVar1 = param_2->_padding_;
  (this->q)._padding_ = param_2->_padding_;
  (this->q)._padding_ = lVar1;
  dVar2 = (param_2->PlaneData).N.field0_0x0._s_0.Y;
  (this->q).PlaneData.N.field0_0x0._s_0.X = (param_2->PlaneData).N.field0_0x0._s_0.X;
  (this->q).PlaneData.N.field0_0x0._s_0.Y = dVar2;
  (this->q).PlaneData.N.field0_0x0._s_0.Z = (param_2->PlaneData).N.field0_0x0._s_0.Z;
  (this->q).PlaneData.Dist = (param_2->PlaneData).Dist;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  (this->collapse_pt).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->collapse_pt).field0_0x0._s_0.Y = dVar2;
  (this->collapse_pt).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  return this;
}

// QEdge @ 14c6e0450

QEdge * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::QEdge::QEdge
          (QEdge *this)

{
  undefined8 uVar1;
  
  (this->q)._padding_ = 0;
  (this->q)._padding_ = 0;
  (this->q)._padding_ = 0;
  (this->q)._padding_ = 0;
  (this->q)._padding_ = 0;
  (this->q)._padding_ = 0;
  (this->q)._padding_ = 0;
  (this->q)._padding_ = 0;
  (this->q)._padding_ = 0;
  (this->q)._padding_ = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->q).PlaneData.N.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->q).PlaneData.N.field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->q).PlaneData.Dist = 0.0;
  (this->q).PlaneData.N.field0_0x0._s_0.Z = (double)uVar1;
  this->eid = 0;
  return this;
}

// ~TMeshSimplification<UE::Geometry::TQuadricError<double>_> @ 14c6e0a40

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
~TMeshSimplification<UE::Geometry::TQuadricError<double>_>
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->IsBoundaryVtxCache).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EdgeQueue).id_to_index.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
  ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&(this->EdgeQueue).nodes);
  pFVar1 = (this->EdgeQuadrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->triQuadrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->triAreas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->seamQuadrics).field_0x48 = 0;
  pvVar2 = *(void **)&(this->seamQuadrics).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->seamQuadrics);
  pFVar1 = (this->vertQuadrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMeshRefinerBase::~FMeshRefinerBase((FMeshRefinerBase *)this);
  return;
}

// ~TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> @ 14c6e0b00

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
~TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->IsBoundaryVtxCache).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EdgeQueue).id_to_index.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
  ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&(this->EdgeQueue).nodes);
  pFVar1 = (this->EdgeQuadrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->triQuadrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->triAreas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->seamQuadrics).field_0x48 = 0;
  pvVar2 = *(void **)&(this->seamQuadrics).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->seamQuadrics);
  pFVar1 = (this->vertQuadrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMeshRefinerBase::~FMeshRefinerBase((FMeshRefinerBase *)this);
  return;
}

// ~TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> @ 14c6e0bc0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
~TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->IsBoundaryVtxCache).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EdgeQueue).id_to_index.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
  ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&(this->EdgeQueue).nodes);
  pFVar1 = (this->EdgeQuadrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->triQuadrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->triAreas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->seamQuadrics).field_0x48 = 0;
  pvVar2 = *(void **)&(this->seamQuadrics).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->seamQuadrics);
  pFVar1 = (this->vertQuadrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMeshRefinerBase::~FMeshRefinerBase((FMeshRefinerBase *)this);
  return;
}

// operator= @ 14c6e20c0

QEdge * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::QEdge::operator=
          (QEdge *this,QEdge *param_1)

{
  double dVar1;
  
  this->eid = param_1->eid;
  TAttrBasedQuadricError<double>::operator=(&this->q,&param_1->q);
  dVar1 = (param_1->collapse_pt).field0_0x0._s_0.Y;
  (this->collapse_pt).field0_0x0._s_0.X = (param_1->collapse_pt).field0_0x0._s_0.X;
  (this->collapse_pt).field0_0x0._s_0.Y = dVar1;
  (this->collapse_pt).field0_0x0._s_0.Z = (param_1->collapse_pt).field0_0x0._s_0.Z;
  return this;
}

// operator= @ 14c6e2120

QEdge * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::QEdge::operator=
          (QEdge *this,QEdge *param_1)

{
  longlong lVar1;
  double dVar2;
  
  this->eid = param_1->eid;
  lVar1 = (param_1->q)._padding_;
  (this->q)._padding_ = (param_1->q)._padding_;
  (this->q)._padding_ = lVar1;
  lVar1 = (param_1->q)._padding_;
  (this->q)._padding_ = (param_1->q)._padding_;
  (this->q)._padding_ = lVar1;
  lVar1 = (param_1->q)._padding_;
  (this->q)._padding_ = (param_1->q)._padding_;
  (this->q)._padding_ = lVar1;
  lVar1 = (param_1->q)._padding_;
  (this->q)._padding_ = (param_1->q)._padding_;
  (this->q)._padding_ = lVar1;
  lVar1 = (param_1->q)._padding_;
  (this->q)._padding_ = (param_1->q)._padding_;
  (this->q)._padding_ = lVar1;
  dVar2 = (param_1->q).PlaneData.N.field0_0x0._s_0.Y;
  (this->q).PlaneData.N.field0_0x0._s_0.X = (param_1->q).PlaneData.N.field0_0x0._s_0.X;
  (this->q).PlaneData.N.field0_0x0._s_0.Y = dVar2;
  (this->q).PlaneData.N.field0_0x0._s_0.Z = (param_1->q).PlaneData.N.field0_0x0._s_0.Z;
  (this->q).PlaneData.Dist = (param_1->q).PlaneData.Dist;
  dVar2 = (param_1->collapse_pt).field0_0x0._s_0.Y;
  (this->collapse_pt).field0_0x0._s_0.X = (param_1->collapse_pt).field0_0x0._s_0.X;
  (this->collapse_pt).field0_0x0._s_0.Y = dVar2;
  (this->collapse_pt).field0_0x0._s_0.Z = (param_1->collapse_pt).field0_0x0._s_0.Z;
  return this;
}

// operator() @ 14c6e8c70

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FullProjectionPass'::__l2
::<lambda_1>::operator()(void *this,int param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int local_res8 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  TVector<double> local_20;
  
  bVar4 = UE::Geometry::FMeshRefinerBase::IsVertexPositionConstrained
                    (*(FMeshRefinerBase **)this,param_1);
  if (!bVar4) {
    lVar2 = *(longlong *)this;
    if (*(void **)(lVar2 + 0xe0) != (void *)0x0) {
      local_res8[0] = param_1;
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar2 + 0xe0));
      pcVar3 = *(code **)(lVar2 + 0xe0);
      plVar7 = (longlong *)(lVar2 + 0xf0);
      if (*(longlong **)(lVar2 + 0x108) != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar2 + 0x108);
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      uVar6 = (*pcVar3)(uVar5,local_res8);
      if ((uVar6 & 2) != 0) {
        return;
      }
    }
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x10) +
             (ulonglong)((uint)param_1 >> 9) * 8);
    puVar1 = (undefined4 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    local_28 = *(undefined8 *)(lVar2 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    plVar7 = *(longlong **)(*(longlong *)this + 0xd0);
    (**(code **)(*plVar7 + 8))(plVar7,&local_20,&local_38,param_1);
    UE::Geometry::FDynamicMesh3::SetVertex
              (*(FDynamicMesh3 **)(*(longlong *)this + 8),param_1,&local_20,true);
  }
  return;
}

// operator() @ 14c6e8d60

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
FullProjectionPass'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int local_res8 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  TVector<double> local_20;
  
  bVar4 = UE::Geometry::FMeshRefinerBase::IsVertexPositionConstrained
                    (*(FMeshRefinerBase **)this,param_1);
  if (!bVar4) {
    lVar2 = *(longlong *)this;
    if (*(void **)(lVar2 + 0xe0) != (void *)0x0) {
      local_res8[0] = param_1;
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar2 + 0xe0));
      pcVar3 = *(code **)(lVar2 + 0xe0);
      plVar7 = (longlong *)(lVar2 + 0xf0);
      if (*(longlong **)(lVar2 + 0x108) != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar2 + 0x108);
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      uVar6 = (*pcVar3)(uVar5,local_res8);
      if ((uVar6 & 2) != 0) {
        return;
      }
    }
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x10) +
             (ulonglong)((uint)param_1 >> 9) * 8);
    puVar1 = (undefined4 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    local_28 = *(undefined8 *)(lVar2 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    plVar7 = *(longlong **)(*(longlong *)this + 0xd0);
    (**(code **)(*plVar7 + 8))(plVar7,&local_20,&local_38,param_1);
    UE::Geometry::FDynamicMesh3::SetVertex
              (*(FDynamicMesh3 **)(*(longlong *)this + 8),param_1,&local_20,true);
  }
  return;
}

// operator() @ 14c6e8e50

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FullProjectionPass'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int local_res8 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  TVector<double> local_20;
  
  bVar4 = UE::Geometry::FMeshRefinerBase::IsVertexPositionConstrained
                    (*(FMeshRefinerBase **)this,param_1);
  if (!bVar4) {
    lVar2 = *(longlong *)this;
    if (*(void **)(lVar2 + 0xe0) != (void *)0x0) {
      local_res8[0] = param_1;
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar2 + 0xe0));
      pcVar3 = *(code **)(lVar2 + 0xe0);
      plVar7 = (longlong *)(lVar2 + 0xf0);
      if (*(longlong **)(lVar2 + 0x108) != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar2 + 0x108);
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      uVar6 = (*pcVar3)(uVar5,local_res8);
      if ((uVar6 & 2) != 0) {
        return;
      }
    }
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x10) +
             (ulonglong)((uint)param_1 >> 9) * 8);
    puVar1 = (undefined4 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    local_28 = *(undefined8 *)(lVar2 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    plVar7 = *(longlong **)(*(longlong *)this + 0xd0);
    (**(code **)(*plVar7 + 8))(plVar7,&local_20,&local_38,param_1);
    UE::Geometry::FDynamicMesh3::SetVertex
              (*(FDynamicMesh3 **)(*(longlong *)this + 8),param_1,&local_20,true);
  }
  return;
}

// operator() @ 14c6ea2f0

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::InitializeSeamQuadrics'::
__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  FDynamicMesh3 *this_00;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  TQuadricError<double> *pTVar10;
  TQuadricError<double> *pTVar11;
  ulonglong uVar12;
  int local_res10 [2];
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double> local_f8;
  TVector<double> local_e0;
  TQuadricError<double> local_c8;
  TQuadricError<double> local_78;
  
  this_00 = *(FDynamicMesh3 **)(*(longlong *)((longlong)this + 8) + 8);
  pFVar4 = (this_00->Vertices).Blocks.AllocatorInstance.Data;
  auVar3 = *(undefined1 (*) [16])
            (*(longlong *)
              ((this_00->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8)
            + (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar9 = (ulonglong)(auVar3._0_4_ & 0x1ff);
  lVar5 = *(longlong *)(pFVar4 + ((auVar3._0_8_ & 0xffffffff) >> 9) * 8);
  uVar12 = (ulonglong)(auVar3._4_4_ & 0x1ff);
  pdVar1 = (double *)(lVar5 + uVar9 * 0x18);
  local_110._s_0.X = *pdVar1;
  local_110._s_0.Y = pdVar1[1];
  local_110._s_0.Z = *(double *)(lVar5 + 0x10 + uVar9 * 0x18);
  lVar5 = *(longlong *)(pFVar4 + (auVar3._0_8_ >> 0x29) * 8);
  pdVar1 = (double *)(lVar5 + uVar12 * 0x18);
  local_128._s_0.X = *pdVar1;
  local_128._s_0.Y = pdVar1[1];
  local_128._s_0.Z = *(double *)(lVar5 + 0x10 + uVar12 * 0x18);
  local_res10[0] = param_1;
  UE::Geometry::FDynamicMesh3::GetTriNormal(this_00,&local_f8,auVar3._8_4_);
  pTVar10 = UE::Geometry::CreateSeamQuadric<double>
                      (&local_c8,(TVector<double> *)&local_110._s_0,
                       (TVector<double> *)&local_128._s_0,&local_f8);
  pTVar10 = TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
            ::Emplace<int_const_&,UE::Geometry::TQuadricError<double>_>
                      ((TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
                        *)(*(longlong *)((longlong)this + 8) + 0x198),local_res10,pTVar10);
  if (auVar3._12_4_ != -1) {
    UE::Geometry::FDynamicMesh3::GetTriNormal
              (*(FDynamicMesh3 **)(*(longlong *)((longlong)this + 8) + 8),&local_e0,auVar3._12_4_);
    pTVar11 = UE::Geometry::CreateSeamQuadric<double>
                        (&local_78,(TVector<double> *)&local_110._s_0,
                         (TVector<double> *)&local_128._s_0,&local_e0);
    pTVar10->Axx = pTVar10->Axx + pTVar11->Axx;
    pTVar10->Axy = pTVar11->Axy + pTVar10->Axy;
    pTVar10->Axz = pTVar11->Axz + pTVar10->Axz;
    pTVar10->Ayy = pTVar11->Ayy + pTVar10->Ayy;
    pTVar10->Ayz = pTVar11->Ayz + pTVar10->Ayz;
    pTVar10->Azz = pTVar11->Azz + pTVar10->Azz;
    pTVar10->bx = pTVar11->bx + pTVar10->bx;
    pTVar10->by = pTVar11->by + pTVar10->by;
    pTVar10->bz = pTVar11->bz + pTVar10->bz;
    pTVar10->c = pTVar11->c + pTVar10->c;
  }
  dVar2 = *(double *)this;
  pTVar10->Axx = pTVar10->Axx * dVar2;
  pTVar10->Axy = pTVar10->Axy * dVar2;
  dVar7 = pTVar10->Axz * dVar2;
  dVar8 = pTVar10->Ayy * dVar2;
  auVar3._8_4_ = SUB84(dVar8,0);
  auVar3._0_8_ = dVar7;
  auVar3._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  pTVar10->Axz = dVar7;
  pTVar10->Ayy = (double)auVar3._8_8_;
  pTVar10->Ayz = pTVar10->Ayz * dVar2;
  pTVar10->Azz = pTVar10->Azz * dVar2;
  dVar7 = pTVar10->bx * dVar2;
  dVar8 = pTVar10->by * dVar2;
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  pTVar10->bx = dVar7;
  pTVar10->by = (double)auVar6._8_8_;
  pTVar10->bz = pTVar10->bz * dVar2;
  pTVar10->c = pTVar10->c * dVar2;
  return;
}

// operator() @ 14c6ea540

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
InitializeSeamQuadrics'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  FDynamicMesh3 *this_00;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  TQuadricError<double> *pTVar10;
  TQuadricError<double> *pTVar11;
  ulonglong uVar12;
  int local_res10 [2];
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double> local_f8;
  TVector<double> local_e0;
  TQuadricError<double> local_c8;
  TQuadricError<double> local_78;
  
  this_00 = *(FDynamicMesh3 **)(*(longlong *)((longlong)this + 8) + 8);
  pFVar4 = (this_00->Vertices).Blocks.AllocatorInstance.Data;
  auVar3 = *(undefined1 (*) [16])
            (*(longlong *)
              ((this_00->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8)
            + (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar9 = (ulonglong)(auVar3._0_4_ & 0x1ff);
  lVar5 = *(longlong *)(pFVar4 + ((auVar3._0_8_ & 0xffffffff) >> 9) * 8);
  uVar12 = (ulonglong)(auVar3._4_4_ & 0x1ff);
  pdVar1 = (double *)(lVar5 + uVar9 * 0x18);
  local_110._s_0.X = *pdVar1;
  local_110._s_0.Y = pdVar1[1];
  local_110._s_0.Z = *(double *)(lVar5 + 0x10 + uVar9 * 0x18);
  lVar5 = *(longlong *)(pFVar4 + (auVar3._0_8_ >> 0x29) * 8);
  pdVar1 = (double *)(lVar5 + uVar12 * 0x18);
  local_128._s_0.X = *pdVar1;
  local_128._s_0.Y = pdVar1[1];
  local_128._s_0.Z = *(double *)(lVar5 + 0x10 + uVar12 * 0x18);
  local_res10[0] = param_1;
  UE::Geometry::FDynamicMesh3::GetTriNormal(this_00,&local_f8,auVar3._8_4_);
  pTVar10 = UE::Geometry::CreateSeamQuadric<double>
                      (&local_c8,(TVector<double> *)&local_110._s_0,
                       (TVector<double> *)&local_128._s_0,&local_f8);
  pTVar10 = TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
            ::Emplace<int_const_&,UE::Geometry::TQuadricError<double>_>
                      ((TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
                        *)(*(longlong *)((longlong)this + 8) + 0x198),local_res10,pTVar10);
  if (auVar3._12_4_ != -1) {
    UE::Geometry::FDynamicMesh3::GetTriNormal
              (*(FDynamicMesh3 **)(*(longlong *)((longlong)this + 8) + 8),&local_e0,auVar3._12_4_);
    pTVar11 = UE::Geometry::CreateSeamQuadric<double>
                        (&local_78,(TVector<double> *)&local_110._s_0,
                         (TVector<double> *)&local_128._s_0,&local_e0);
    pTVar10->Axx = pTVar10->Axx + pTVar11->Axx;
    pTVar10->Axy = pTVar11->Axy + pTVar10->Axy;
    pTVar10->Axz = pTVar11->Axz + pTVar10->Axz;
    pTVar10->Ayy = pTVar11->Ayy + pTVar10->Ayy;
    pTVar10->Ayz = pTVar11->Ayz + pTVar10->Ayz;
    pTVar10->Azz = pTVar11->Azz + pTVar10->Azz;
    pTVar10->bx = pTVar11->bx + pTVar10->bx;
    pTVar10->by = pTVar11->by + pTVar10->by;
    pTVar10->bz = pTVar11->bz + pTVar10->bz;
    pTVar10->c = pTVar11->c + pTVar10->c;
  }
  dVar2 = *(double *)this;
  pTVar10->Axx = pTVar10->Axx * dVar2;
  pTVar10->Axy = pTVar10->Axy * dVar2;
  dVar7 = pTVar10->Axz * dVar2;
  dVar8 = pTVar10->Ayy * dVar2;
  auVar3._8_4_ = SUB84(dVar8,0);
  auVar3._0_8_ = dVar7;
  auVar3._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  pTVar10->Axz = dVar7;
  pTVar10->Ayy = (double)auVar3._8_8_;
  pTVar10->Ayz = pTVar10->Ayz * dVar2;
  pTVar10->Azz = pTVar10->Azz * dVar2;
  dVar7 = pTVar10->bx * dVar2;
  dVar8 = pTVar10->by * dVar2;
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  pTVar10->bx = dVar7;
  pTVar10->by = (double)auVar6._8_8_;
  pTVar10->bz = pTVar10->bz * dVar2;
  pTVar10->c = pTVar10->c * dVar2;
  return;
}

// operator() @ 14c6ea790

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
InitializeSeamQuadrics'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  FDynamicMesh3 *this_00;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  TQuadricError<double> *pTVar10;
  TQuadricError<double> *pTVar11;
  ulonglong uVar12;
  int local_res10 [2];
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double> local_f8;
  TVector<double> local_e0;
  TQuadricError<double> local_c8;
  TQuadricError<double> local_78;
  
  this_00 = *(FDynamicMesh3 **)(*(longlong *)((longlong)this + 8) + 8);
  pFVar4 = (this_00->Vertices).Blocks.AllocatorInstance.Data;
  auVar3 = *(undefined1 (*) [16])
            (*(longlong *)
              ((this_00->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8)
            + (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar9 = (ulonglong)(auVar3._0_4_ & 0x1ff);
  lVar5 = *(longlong *)(pFVar4 + ((auVar3._0_8_ & 0xffffffff) >> 9) * 8);
  uVar12 = (ulonglong)(auVar3._4_4_ & 0x1ff);
  pdVar1 = (double *)(lVar5 + uVar9 * 0x18);
  local_110._s_0.X = *pdVar1;
  local_110._s_0.Y = pdVar1[1];
  local_110._s_0.Z = *(double *)(lVar5 + 0x10 + uVar9 * 0x18);
  lVar5 = *(longlong *)(pFVar4 + (auVar3._0_8_ >> 0x29) * 8);
  pdVar1 = (double *)(lVar5 + uVar12 * 0x18);
  local_128._s_0.X = *pdVar1;
  local_128._s_0.Y = pdVar1[1];
  local_128._s_0.Z = *(double *)(lVar5 + 0x10 + uVar12 * 0x18);
  local_res10[0] = param_1;
  UE::Geometry::FDynamicMesh3::GetTriNormal(this_00,&local_f8,auVar3._8_4_);
  pTVar10 = UE::Geometry::CreateSeamQuadric<double>
                      (&local_c8,(TVector<double> *)&local_110._s_0,
                       (TVector<double> *)&local_128._s_0,&local_f8);
  pTVar10 = TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
            ::Emplace<int_const_&,UE::Geometry::TQuadricError<double>_>
                      ((TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
                        *)(*(longlong *)((longlong)this + 8) + 0x198),local_res10,pTVar10);
  if (auVar3._12_4_ != -1) {
    UE::Geometry::FDynamicMesh3::GetTriNormal
              (*(FDynamicMesh3 **)(*(longlong *)((longlong)this + 8) + 8),&local_e0,auVar3._12_4_);
    pTVar11 = UE::Geometry::CreateSeamQuadric<double>
                        (&local_78,(TVector<double> *)&local_110._s_0,
                         (TVector<double> *)&local_128._s_0,&local_e0);
    pTVar10->Axx = pTVar10->Axx + pTVar11->Axx;
    pTVar10->Axy = pTVar11->Axy + pTVar10->Axy;
    pTVar10->Axz = pTVar11->Axz + pTVar10->Axz;
    pTVar10->Ayy = pTVar11->Ayy + pTVar10->Ayy;
    pTVar10->Ayz = pTVar11->Ayz + pTVar10->Ayz;
    pTVar10->Azz = pTVar11->Azz + pTVar10->Azz;
    pTVar10->bx = pTVar11->bx + pTVar10->bx;
    pTVar10->by = pTVar11->by + pTVar10->by;
    pTVar10->bz = pTVar11->bz + pTVar10->bz;
    pTVar10->c = pTVar11->c + pTVar10->c;
  }
  dVar2 = *(double *)this;
  pTVar10->Axx = pTVar10->Axx * dVar2;
  pTVar10->Axy = pTVar10->Axy * dVar2;
  dVar7 = pTVar10->Axz * dVar2;
  dVar8 = pTVar10->Ayy * dVar2;
  auVar3._8_4_ = SUB84(dVar8,0);
  auVar3._0_8_ = dVar7;
  auVar3._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  pTVar10->Axz = dVar7;
  pTVar10->Ayy = (double)auVar3._8_8_;
  pTVar10->Ayz = pTVar10->Ayz * dVar2;
  pTVar10->Azz = pTVar10->Azz * dVar2;
  dVar7 = pTVar10->bx * dVar2;
  dVar8 = pTVar10->by * dVar2;
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  pTVar10->bx = dVar7;
  pTVar10->by = (double)auVar6._8_8_;
  pTVar10->bz = pTVar10->bz * dVar2;
  pTVar10->c = pTVar10->c * dVar2;
  return;
}

// operator() @ 14c6eaaf0

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToMinimalPlanar'::
__l2::<lambda_1>::operator()(void *this,int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  FDynamicMesh3 *this_00;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  TVector<double> local_28;
  
  this_00 = *(FDynamicMesh3 **)(*(longlong *)this + 8);
  if (((-1 < param_1) &&
      (param_1 < (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                      (this_00->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    pTVar12 = UE::Geometry::FDynamicMesh3::GetTriNormal(this_00,&local_28,param_1);
    plVar3 = *(longlong **)((longlong)this + 8);
    uVar6 = *(undefined4 *)&pTVar12->field0_0x0;
    uVar7 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 4);
    uVar8 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 8);
    uVar9 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 0xc);
    dVar2 = (pTVar12->field0_0x0)._s_0.Z;
    uVar11 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *plVar3;
    puVar1 = (undefined4 *)(lVar4 + (longlong)param_1 * 0x18);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    *(double *)(lVar4 + 0x10 + (longlong)param_1 * 0x18) = dVar2;
  }
  return;
}

// operator() @ 14c6eac00

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
SimplifyToMinimalPlanar'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  FDynamicMesh3 *this_00;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  TVector<double> local_28;
  
  this_00 = *(FDynamicMesh3 **)(*(longlong *)this + 8);
  if (((-1 < param_1) &&
      (param_1 < (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                      (this_00->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    pTVar12 = UE::Geometry::FDynamicMesh3::GetTriNormal(this_00,&local_28,param_1);
    plVar3 = *(longlong **)((longlong)this + 8);
    uVar6 = *(undefined4 *)&pTVar12->field0_0x0;
    uVar7 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 4);
    uVar8 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 8);
    uVar9 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 0xc);
    dVar2 = (pTVar12->field0_0x0)._s_0.Z;
    uVar11 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *plVar3;
    puVar1 = (undefined4 *)(lVar4 + (longlong)param_1 * 0x18);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    *(double *)(lVar4 + 0x10 + (longlong)param_1 * 0x18) = dVar2;
  }
  return;
}

// operator() @ 14c6ead10

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
SimplifyToMinimalPlanar'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  FDynamicMesh3 *this_00;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  TVector<double> local_28;
  
  this_00 = *(FDynamicMesh3 **)(*(longlong *)this + 8);
  if (((-1 < param_1) &&
      (param_1 < (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                      (this_00->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    pTVar12 = UE::Geometry::FDynamicMesh3::GetTriNormal(this_00,&local_28,param_1);
    plVar3 = *(longlong **)((longlong)this + 8);
    uVar6 = *(undefined4 *)&pTVar12->field0_0x0;
    uVar7 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 4);
    uVar8 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 8);
    uVar9 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 0xc);
    dVar2 = (pTVar12->field0_0x0)._s_0.Z;
    uVar11 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *plVar3;
    puVar1 = (undefined4 *)(lVar4 + (longlong)param_1 * 0x18);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    *(double *)(lVar4 + 0x10 + (longlong)param_1 * 0x18) = dVar2;
  }
  return;
}

// operator() @ 14c6eca60

bool __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  double dVar5;
  uint uVar6;
  ulonglong uVar7;
  FSmallListSet *pFVar8;
  double dVar9;
  double local_88;
  double local_80;
  double local_78;
  BaseValueIterator local_70;
  double local_48;
  double local_40;
  double local_38;
  double local_20;
  
  pFVar8 = (FSmallListSet *)(*(longlong *)(*(longlong *)this + 8) + 0xb8);
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator(&local_70,pFVar8,param_1,false);
  dVar5 = __real_3fe0000000000000;
  do {
    if ((((local_70.ListSet == pFVar8) && (local_70.ListIndex == param_1)) && (local_70.iCur == -1))
       && (local_70.cur_ptr == -1)) {
      return true;
    }
    if (local_70.cur_value != *(uint *)((longlong)this + 8)) {
      lVar2 = *(longlong *)(*(longlong *)this + 8);
      uVar3 = *(ulonglong *)
               (*(longlong *)
                 (*(longlong *)(lVar2 + 0x1c0) + ((local_70._32_8_ & 0xffffffff) >> 9) * 8) +
               (ulonglong)(local_70.cur_value & 0x1ff) * 0x10);
      uVar6 = (uint)uVar3;
      if (uVar6 == param_1) {
        uVar7 = uVar3 >> 0x20;
        uVar6 = (uint)(uVar3 >> 0x20);
      }
      else {
        uVar7 = uVar3 & 0xffffffff;
      }
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (uVar7 >> 9) * 8);
      pdVar1 = (double *)(lVar2 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
      local_20 = *(double *)(lVar2 + 0x10 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
      local_88 = (*pdVar1 + *(double *)((longlong)this + 0x10)) * dVar5;
      local_80 = (pdVar1[1] + *(double *)((longlong)this + 0x18)) * dVar5;
      local_78 = (local_20 + *(double *)((longlong)this + 0x20)) * dVar5;
      plVar4 = *(longlong **)(*(longlong *)this + 0xd0);
      (**(code **)(*plVar4 + 8))(plVar4,&local_48,&local_88,0xffffffff);
      dVar9 = (local_40 - local_80) * (local_40 - local_80) +
              (local_48 - local_88) * (local_48 - local_88) +
              (local_38 - local_78) * (local_38 - local_78);
      if (*(double *)((longlong)this + 0x28) <= dVar9 && dVar9 != *(double *)((longlong)this + 0x28)
         ) {
        return false;
      }
    }
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_70);
  } while( true );
}

// operator() @ 14c6ecc20

bool __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  double dVar5;
  uint uVar6;
  ulonglong uVar7;
  FSmallListSet *pFVar8;
  double dVar9;
  double local_88;
  double local_80;
  double local_78;
  BaseValueIterator local_70;
  double local_48;
  double local_40;
  double local_38;
  double local_20;
  
  pFVar8 = (FSmallListSet *)(*(longlong *)(*(longlong *)this + 8) + 0xb8);
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator(&local_70,pFVar8,param_1,false);
  dVar5 = __real_3fe0000000000000;
  do {
    if ((((local_70.ListSet == pFVar8) && (local_70.ListIndex == param_1)) && (local_70.iCur == -1))
       && (local_70.cur_ptr == -1)) {
      return true;
    }
    if (local_70.cur_value != *(uint *)((longlong)this + 8)) {
      lVar2 = *(longlong *)(*(longlong *)this + 8);
      uVar3 = *(ulonglong *)
               (*(longlong *)
                 (*(longlong *)(lVar2 + 0x1c0) + ((local_70._32_8_ & 0xffffffff) >> 9) * 8) +
               (ulonglong)(local_70.cur_value & 0x1ff) * 0x10);
      uVar6 = (uint)uVar3;
      if (uVar6 == param_1) {
        uVar7 = uVar3 >> 0x20;
        uVar6 = (uint)(uVar3 >> 0x20);
      }
      else {
        uVar7 = uVar3 & 0xffffffff;
      }
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (uVar7 >> 9) * 8);
      pdVar1 = (double *)(lVar2 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
      local_20 = *(double *)(lVar2 + 0x10 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
      local_88 = (*pdVar1 + *(double *)((longlong)this + 0x10)) * dVar5;
      local_80 = (pdVar1[1] + *(double *)((longlong)this + 0x18)) * dVar5;
      local_78 = (local_20 + *(double *)((longlong)this + 0x20)) * dVar5;
      plVar4 = *(longlong **)(*(longlong *)this + 0xd0);
      (**(code **)(*plVar4 + 8))(plVar4,&local_48,&local_88,0xffffffff);
      dVar9 = (local_40 - local_80) * (local_40 - local_80) +
              (local_48 - local_88) * (local_48 - local_88) +
              (local_38 - local_78) * (local_38 - local_78);
      if (*(double *)((longlong)this + 0x28) <= dVar9 && dVar9 != *(double *)((longlong)this + 0x28)
         ) {
        return false;
      }
    }
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_70);
  } while( true );
}

// operator() @ 14c6ecde0

bool __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  double dVar5;
  uint uVar6;
  ulonglong uVar7;
  FSmallListSet *pFVar8;
  double dVar9;
  double local_88;
  double local_80;
  double local_78;
  BaseValueIterator local_70;
  double local_48;
  double local_40;
  double local_38;
  double local_20;
  
  pFVar8 = (FSmallListSet *)(*(longlong *)(*(longlong *)this + 8) + 0xb8);
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator(&local_70,pFVar8,param_1,false);
  dVar5 = __real_3fe0000000000000;
  do {
    if ((((local_70.ListSet == pFVar8) && (local_70.ListIndex == param_1)) && (local_70.iCur == -1))
       && (local_70.cur_ptr == -1)) {
      return true;
    }
    if (local_70.cur_value != *(uint *)((longlong)this + 8)) {
      lVar2 = *(longlong *)(*(longlong *)this + 8);
      uVar3 = *(ulonglong *)
               (*(longlong *)
                 (*(longlong *)(lVar2 + 0x1c0) + ((local_70._32_8_ & 0xffffffff) >> 9) * 8) +
               (ulonglong)(local_70.cur_value & 0x1ff) * 0x10);
      uVar6 = (uint)uVar3;
      if (uVar6 == param_1) {
        uVar7 = uVar3 >> 0x20;
        uVar6 = (uint)(uVar3 >> 0x20);
      }
      else {
        uVar7 = uVar3 & 0xffffffff;
      }
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (uVar7 >> 9) * 8);
      pdVar1 = (double *)(lVar2 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
      local_20 = *(double *)(lVar2 + 0x10 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
      local_88 = (*pdVar1 + *(double *)((longlong)this + 0x10)) * dVar5;
      local_80 = (pdVar1[1] + *(double *)((longlong)this + 0x18)) * dVar5;
      local_78 = (local_20 + *(double *)((longlong)this + 0x20)) * dVar5;
      plVar4 = *(longlong **)(*(longlong *)this + 0xd0);
      (**(code **)(*plVar4 + 8))(plVar4,&local_48,&local_88,0xffffffff);
      dVar9 = (local_40 - local_80) * (local_40 - local_80) +
              (local_48 - local_88) * (local_48 - local_88) +
              (local_38 - local_78) * (local_38 - local_78);
      if (*(double *)((longlong)this + 0x28) <= dVar9 && dVar9 != *(double *)((longlong)this + 0x28)
         ) {
        return false;
      }
    }
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_70);
  } while( true );
}

// operator() @ 14c6ee6b0

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::CollapseEdge'::__l84::
<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  FVertexConstraint *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  IProjectionTarget IVar8;
  int *piVar9;
  uint *puVar10;
  char cVar11;
  longlong lVar12;
  IProjectionTarget IVar13;
  EEdgeRefineFlags EVar14;
  int local_res8 [2];
  int local_res18 [2];
  uint local_res20 [2];
  FVertexConstraint local_c8;
  FVertexConstraint local_b8;
  undefined1 local_a8 [8];
  TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> local_a0;
  FEdgeConstraint local_90;
  int *local_78;
  FEdgeConstraint *local_70;
  char local_68;
  char cStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  IProjectionTarget IStack_60;
  int *local_58;
  FVertexConstraint *local_50;
  char local_48;
  char cStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  uint *local_38;
  FVertexConstraint *local_30;
  
  lVar1 = *(longlong *)this;
  local_90.TrackingSetID = -1;
  EVar14 = SplitsOnly;
  if (*(char *)(lVar1 + 0x146) != '\0') {
    EVar14 = NoFlip;
  }
  local_c8.FixedSetID = -1;
  IVar13 = (IProjectionTarget)0x0;
  local_b8.FixedSetID = -1;
  local_90.RefineFlags = NoConstraint;
  local_90.Target = (IProjectionTarget *)0x0;
  local_c8.bCannotDelete = false;
  local_c8.bCanMove = false;
  local_c8.Target = (IProjectionTarget *)0x0;
  local_b8.bCannotDelete = false;
  local_b8.bCanMove = false;
  local_b8.Target = (IProjectionTarget *)0x0;
  bVar5 = UE::Geometry::FMeshConstraintsUtil::ConstrainEdgeBoundariesAndSeams
                    (param_1,*(FDynamicMesh3 **)(lVar1 + 8),*(EEdgeRefineFlags *)(lVar1 + 0x148),
                     *(EEdgeRefineFlags *)(lVar1 + 0x14c),*(EEdgeRefineFlags *)(lVar1 + 0x150),
                     EVar14,*(char *)(lVar1 + 0x146) == '\0',&local_90,&local_c8,&local_b8);
  if (bVar5) {
    lVar1 = *(longlong *)this;
    pFVar2 = *(FVertexConstraint **)
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar1 + 8) + 0x1c0) +
                (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
    local_a0.Value = pFVar2;
    if (*(char *)(lVar1 + 200) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_78 = local_res8;
    local_70 = &local_90;
    local_res8[0] = param_1;
    TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&>_>
              ((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),
               (TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&> *)local_a8,
               (bool *)&local_78);
    lVar1 = *(longlong *)this;
    if (*(char *)(lVar1 + 200) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)(lVar1 + 0x68) != *(int *)(lVar1 + 0x94)) {
      lVar12 = *(longlong *)(lVar1 + 0xa0);
      if (*(longlong *)(lVar1 + 0xa0) == 0) {
        lVar12 = lVar1 + 0x98;
      }
      iVar6 = *(int *)(lVar12 + ((ulonglong)(*(int *)(lVar1 + 0xa8) - 1) &
                                (ulonglong)pFVar2 & 0xffffffff) * 4);
      if (iVar6 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar6 * 0x20 + *(longlong *)(lVar1 + 0x60));
          if (*piVar9 == (int)pFVar2) {
            IVar8 = (IProjectionTarget)(piVar9 + 2);
            if (piVar9 == (int *)0x0) {
              IVar8 = IVar13;
            }
            if (IVar8 != (IProjectionTarget)0x0) {
              cVar11 = *(char *)IVar8;
              cStack_67 = ((IProjectionTarget *)IVar8)->field_0x1;
              uStack_66 = ((IProjectionTarget *)IVar8)->field_0x2;
              uStack_65 = ((IProjectionTarget *)IVar8)->field_0x3;
              uStack_64 = ((IProjectionTarget *)IVar8)->field_0x4;
              uStack_63 = ((IProjectionTarget *)IVar8)->field_0x5;
              uStack_62 = ((IProjectionTarget *)IVar8)->field_0x6;
              uStack_61 = ((IProjectionTarget *)IVar8)->field_0x7;
              IStack_60 = *(IProjectionTarget *)((longlong)IVar8 + 8);
              local_c8.Target = *(IProjectionTarget **)((longlong)IVar8 + 8);
              local_68 = cVar11;
              goto LAB_14c6ee898;
            }
            break;
          }
          iVar6 = piVar9[6];
        } while (iVar6 != -1);
      }
    }
    cStack_67 = '\x01';
    cVar11 = '\0';
    IStack_60 = (IProjectionTarget)0x0;
    local_c8.Target = (IProjectionTarget *)IVar13;
LAB_14c6ee898:
    if ((local_c8.bCannotDelete != false) || (local_c8.bCannotDelete = false, cVar11 != '\0')) {
      local_c8.bCannotDelete = true;
    }
    if ((local_c8.bCanMove == false) || (local_c8.bCanMove = true, cStack_67 == '\0')) {
      local_c8.bCanMove = false;
    }
    lVar1 = *(longlong *)this;
    if (*(char *)(lVar1 + 200) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_58 = local_res18;
    local_50 = &local_c8;
    local_res18[0] = (int)pFVar2;
    TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
              ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x60),
               (TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> *)
               (local_a8 + 4),(bool *)&local_58);
    lVar1 = *(longlong *)this;
    if (*(char *)(lVar1 + 200) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar4 = local_a0.Value._4_4_;
    if (*(int *)(lVar1 + 0x68) != *(int *)(lVar1 + 0x94)) {
      lVar12 = *(longlong *)(lVar1 + 0xa0);
      if (*(longlong *)(lVar1 + 0xa0) == 0) {
        lVar12 = lVar1 + 0x98;
      }
      uVar7 = *(uint *)(lVar12 + (ulonglong)(*(int *)(lVar1 + 0xa8) - 1U & local_a0.Value._4_4_) * 4
                       );
      if (uVar7 != 0xffffffff) {
        do {
          puVar10 = (uint *)((longlong)(int)uVar7 * 0x20 + *(longlong *)(lVar1 + 0x60));
          if (*puVar10 == local_a0.Value._4_4_) {
            IVar8 = (IProjectionTarget)(puVar10 + 2);
            if (puVar10 == (uint *)0x0) {
              IVar8 = IVar13;
            }
            if (IVar8 != (IProjectionTarget)0x0) {
              cVar11 = *(char *)IVar8;
              cStack_47 = *(char *)((longlong)IVar8 + 1);
              uStack_46 = *(undefined1 *)((longlong)IVar8 + 2);
              uStack_45 = *(undefined1 *)((longlong)IVar8 + 3);
              uStack_44 = *(undefined1 *)((longlong)IVar8 + 4);
              uStack_43 = *(undefined1 *)((longlong)IVar8 + 5);
              uStack_42 = *(undefined1 *)((longlong)IVar8 + 6);
              uStack_41 = *(undefined1 *)((longlong)IVar8 + 7);
              uStack_40 = *(undefined8 *)((longlong)IVar8 + 8);
              IVar13 = *(IProjectionTarget *)((longlong)IVar8 + 8);
              local_48 = cVar11;
              goto LAB_14c6ee9b5;
            }
            break;
          }
          uVar7 = puVar10[6];
        } while (uVar7 != 0xffffffff);
      }
    }
    uStack_40 = 0;
    cStack_47 = '\x01';
    cVar11 = '\0';
LAB_14c6ee9b5:
    if ((local_b8.bCannotDelete != false) || (local_b8.bCannotDelete = false, cVar11 != '\0')) {
      local_b8.bCannotDelete = true;
    }
    if ((local_b8.bCanMove == false) || (local_b8.bCanMove = true, cStack_47 == '\0')) {
      local_b8.bCanMove = false;
    }
    lVar1 = *(longlong *)this;
    local_b8.Target = (IProjectionTarget *)IVar13;
    if (*(char *)(lVar1 + 200) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_38 = local_res20;
    local_res20[0] = uVar4;
    local_30 = &local_b8;
    TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
              ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x60),&local_a0,(bool *)&local_38);
  }
  return;
}

// operator() @ 14c6eeac0

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::CollapseEdge'::
__l84::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  FVertexConstraint *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  IProjectionTarget IVar8;
  int *piVar9;
  uint *puVar10;
  char cVar11;
  longlong lVar12;
  IProjectionTarget IVar13;
  EEdgeRefineFlags EVar14;
  int local_res8 [2];
  int local_res18 [2];
  uint local_res20 [2];
  FVertexConstraint local_c8;
  FVertexConstraint local_b8;
  undefined1 local_a8 [8];
  TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> local_a0;
  FEdgeConstraint local_90;
  int *local_78;
  FEdgeConstraint *local_70;
  char local_68;
  char cStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  IProjectionTarget IStack_60;
  int *local_58;
  FVertexConstraint *local_50;
  char local_48;
  char cStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  uint *local_38;
  FVertexConstraint *local_30;
  
  lVar1 = *(longlong *)this;
  local_90.TrackingSetID = -1;
  EVar14 = SplitsOnly;
  if (*(char *)(lVar1 + 0x146) != '\0') {
    EVar14 = NoFlip;
  }
  local_c8.FixedSetID = -1;
  IVar13 = (IProjectionTarget)0x0;
  local_b8.FixedSetID = -1;
  local_90.RefineFlags = NoConstraint;
  local_90.Target = (IProjectionTarget *)0x0;
  local_c8.bCannotDelete = false;
  local_c8.bCanMove = false;
  local_c8.Target = (IProjectionTarget *)0x0;
  local_b8.bCannotDelete = false;
  local_b8.bCanMove = false;
  local_b8.Target = (IProjectionTarget *)0x0;
  bVar5 = UE::Geometry::FMeshConstraintsUtil::ConstrainEdgeBoundariesAndSeams
                    (param_1,*(FDynamicMesh3 **)(lVar1 + 8),*(EEdgeRefineFlags *)(lVar1 + 0x148),
                     *(EEdgeRefineFlags *)(lVar1 + 0x14c),*(EEdgeRefineFlags *)(lVar1 + 0x150),
                     EVar14,*(char *)(lVar1 + 0x146) == '\0',&local_90,&local_c8,&local_b8);
  if (bVar5) {
    lVar1 = *(longlong *)this;
    pFVar2 = *(FVertexConstraint **)
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar1 + 8) + 0x1c0) +
                (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
    local_a0.Value = pFVar2;
    if (*(char *)(lVar1 + 200) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_78 = local_res8;
    local_70 = &local_90;
    local_res8[0] = param_1;
    TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&>_>
              ((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),
               (TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&> *)local_a8,
               (bool *)&local_78);
    lVar1 = *(longlong *)this;
    if (*(char *)(lVar1 + 200) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)(lVar1 + 0x68) != *(int *)(lVar1 + 0x94)) {
      lVar12 = *(longlong *)(lVar1 + 0xa0);
      if (*(longlong *)(lVar1 + 0xa0) == 0) {
        lVar12 = lVar1 + 0x98;
      }
      iVar6 = *(int *)(lVar12 + ((ulonglong)(*(int *)(lVar1 + 0xa8) - 1) &
                                (ulonglong)pFVar2 & 0xffffffff) * 4);
      if (iVar6 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar6 * 0x20 + *(longlong *)(lVar1 + 0x60));
          if (*piVar9 == (int)pFVar2) {
            IVar8 = (IProjectionTarget)(piVar9 + 2);
            if (piVar9 == (int *)0x0) {
              IVar8 = IVar13;
            }
            if (IVar8 != (IProjectionTarget)0x0) {
              cVar11 = *(char *)IVar8;
              cStack_67 = ((IProjectionTarget *)IVar8)->field_0x1;
              uStack_66 = ((IProjectionTarget *)IVar8)->field_0x2;
              uStack_65 = ((IProjectionTarget *)IVar8)->field_0x3;
              uStack_64 = ((IProjectionTarget *)IVar8)->field_0x4;
              uStack_63 = ((IProjectionTarget *)IVar8)->field_0x5;
              uStack_62 = ((IProjectionTarget *)IVar8)->field_0x6;
              uStack_61 = ((IProjectionTarget *)IVar8)->field_0x7;
              IStack_60 = *(IProjectionTarget *)((longlong)IVar8 + 8);
              local_c8.Target = *(IProjectionTarget **)((longlong)IVar8 + 8);
              local_68 = cVar11;
              goto LAB_14c6eeca8;
            }
            break;
          }
          iVar6 = piVar9[6];
        } while (iVar6 != -1);
      }
    }
    cStack_67 = '\x01';
    cVar11 = '\0';
    IStack_60 = (IProjectionTarget)0x0;
    local_c8.Target = (IProjectionTarget *)IVar13;
LAB_14c6eeca8:
    if ((local_c8.bCannotDelete != false) || (local_c8.bCannotDelete = false, cVar11 != '\0')) {
      local_c8.bCannotDelete = true;
    }
    if ((local_c8.bCanMove == false) || (local_c8.bCanMove = true, cStack_67 == '\0')) {
      local_c8.bCanMove = false;
    }
    lVar1 = *(longlong *)this;
    if (*(char *)(lVar1 + 200) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_58 = local_res18;
    local_50 = &local_c8;
    local_res18[0] = (int)pFVar2;
    TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
              ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x60),
               (TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> *)
               (local_a8 + 4),(bool *)&local_58);
    lVar1 = *(longlong *)this;
    if (*(char *)(lVar1 + 200) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar4 = local_a0.Value._4_4_;
    if (*(int *)(lVar1 + 0x68) != *(int *)(lVar1 + 0x94)) {
      lVar12 = *(longlong *)(lVar1 + 0xa0);
      if (*(longlong *)(lVar1 + 0xa0) == 0) {
        lVar12 = lVar1 + 0x98;
      }
      uVar7 = *(uint *)(lVar12 + (ulonglong)(*(int *)(lVar1 + 0xa8) - 1U & local_a0.Value._4_4_) * 4
                       );
      if (uVar7 != 0xffffffff) {
        do {
          puVar10 = (uint *)((longlong)(int)uVar7 * 0x20 + *(longlong *)(lVar1 + 0x60));
          if (*puVar10 == local_a0.Value._4_4_) {
            IVar8 = (IProjectionTarget)(puVar10 + 2);
            if (puVar10 == (uint *)0x0) {
              IVar8 = IVar13;
            }
            if (IVar8 != (IProjectionTarget)0x0) {
              cVar11 = *(char *)IVar8;
              cStack_47 = *(char *)((longlong)IVar8 + 1);
              uStack_46 = *(undefined1 *)((longlong)IVar8 + 2);
              uStack_45 = *(undefined1 *)((longlong)IVar8 + 3);
              uStack_44 = *(undefined1 *)((longlong)IVar8 + 4);
              uStack_43 = *(undefined1 *)((longlong)IVar8 + 5);
              uStack_42 = *(undefined1 *)((longlong)IVar8 + 6);
              uStack_41 = *(undefined1 *)((longlong)IVar8 + 7);
              uStack_40 = *(undefined8 *)((longlong)IVar8 + 8);
              IVar13 = *(IProjectionTarget *)((longlong)IVar8 + 8);
              local_48 = cVar11;
              goto LAB_14c6eedc5;
            }
            break;
          }
          uVar7 = puVar10[6];
        } while (uVar7 != 0xffffffff);
      }
    }
    uStack_40 = 0;
    cStack_47 = '\x01';
    cVar11 = '\0';
LAB_14c6eedc5:
    if ((local_b8.bCannotDelete != false) || (local_b8.bCannotDelete = false, cVar11 != '\0')) {
      local_b8.bCannotDelete = true;
    }
    if ((local_b8.bCanMove == false) || (local_b8.bCanMove = true, cStack_47 == '\0')) {
      local_b8.bCanMove = false;
    }
    lVar1 = *(longlong *)this;
    local_b8.Target = (IProjectionTarget *)IVar13;
    if (*(char *)(lVar1 + 200) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_38 = local_res20;
    local_res20[0] = uVar4;
    local_30 = &local_b8;
    TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
              ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x60),&local_a0,(bool *)&local_38);
  }
  return;
}

// operator() @ 14c6eeed0

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::CollapseEdge'::
__l84::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  FVertexConstraint *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  IProjectionTarget IVar8;
  int *piVar9;
  uint *puVar10;
  char cVar11;
  longlong lVar12;
  IProjectionTarget IVar13;
  EEdgeRefineFlags EVar14;
  int local_res8 [2];
  int local_res18 [2];
  uint local_res20 [2];
  FVertexConstraint local_c8;
  FVertexConstraint local_b8;
  undefined1 local_a8 [8];
  TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> local_a0;
  FEdgeConstraint local_90;
  int *local_78;
  FEdgeConstraint *local_70;
  char local_68;
  char cStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  IProjectionTarget IStack_60;
  int *local_58;
  FVertexConstraint *local_50;
  char local_48;
  char cStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  uint *local_38;
  FVertexConstraint *local_30;
  
  lVar1 = *(longlong *)this;
  local_90.TrackingSetID = -1;
  EVar14 = SplitsOnly;
  if (*(char *)(lVar1 + 0x146) != '\0') {
    EVar14 = NoFlip;
  }
  local_c8.FixedSetID = -1;
  IVar13 = (IProjectionTarget)0x0;
  local_b8.FixedSetID = -1;
  local_90.RefineFlags = NoConstraint;
  local_90.Target = (IProjectionTarget *)0x0;
  local_c8.bCannotDelete = false;
  local_c8.bCanMove = false;
  local_c8.Target = (IProjectionTarget *)0x0;
  local_b8.bCannotDelete = false;
  local_b8.bCanMove = false;
  local_b8.Target = (IProjectionTarget *)0x0;
  bVar5 = UE::Geometry::FMeshConstraintsUtil::ConstrainEdgeBoundariesAndSeams
                    (param_1,*(FDynamicMesh3 **)(lVar1 + 8),*(EEdgeRefineFlags *)(lVar1 + 0x148),
                     *(EEdgeRefineFlags *)(lVar1 + 0x14c),*(EEdgeRefineFlags *)(lVar1 + 0x150),
                     EVar14,*(char *)(lVar1 + 0x146) == '\0',&local_90,&local_c8,&local_b8);
  if (bVar5) {
    lVar1 = *(longlong *)this;
    pFVar2 = *(FVertexConstraint **)
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar1 + 8) + 0x1c0) +
                (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
    local_a0.Value = pFVar2;
    if (*(char *)(lVar1 + 200) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_78 = local_res8;
    local_70 = &local_90;
    local_res8[0] = param_1;
    TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&>_>
              ((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),
               (TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&> *)local_a8,
               (bool *)&local_78);
    lVar1 = *(longlong *)this;
    if (*(char *)(lVar1 + 200) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)(lVar1 + 0x68) != *(int *)(lVar1 + 0x94)) {
      lVar12 = *(longlong *)(lVar1 + 0xa0);
      if (*(longlong *)(lVar1 + 0xa0) == 0) {
        lVar12 = lVar1 + 0x98;
      }
      iVar6 = *(int *)(lVar12 + ((ulonglong)(*(int *)(lVar1 + 0xa8) - 1) &
                                (ulonglong)pFVar2 & 0xffffffff) * 4);
      if (iVar6 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar6 * 0x20 + *(longlong *)(lVar1 + 0x60));
          if (*piVar9 == (int)pFVar2) {
            IVar8 = (IProjectionTarget)(piVar9 + 2);
            if (piVar9 == (int *)0x0) {
              IVar8 = IVar13;
            }
            if (IVar8 != (IProjectionTarget)0x0) {
              cVar11 = *(char *)IVar8;
              cStack_67 = ((IProjectionTarget *)IVar8)->field_0x1;
              uStack_66 = ((IProjectionTarget *)IVar8)->field_0x2;
              uStack_65 = ((IProjectionTarget *)IVar8)->field_0x3;
              uStack_64 = ((IProjectionTarget *)IVar8)->field_0x4;
              uStack_63 = ((IProjectionTarget *)IVar8)->field_0x5;
              uStack_62 = ((IProjectionTarget *)IVar8)->field_0x6;
              uStack_61 = ((IProjectionTarget *)IVar8)->field_0x7;
              IStack_60 = *(IProjectionTarget *)((longlong)IVar8 + 8);
              local_c8.Target = *(IProjectionTarget **)((longlong)IVar8 + 8);
              local_68 = cVar11;
              goto LAB_14c6ef0b8;
            }
            break;
          }
          iVar6 = piVar9[6];
        } while (iVar6 != -1);
      }
    }
    cStack_67 = '\x01';
    cVar11 = '\0';
    IStack_60 = (IProjectionTarget)0x0;
    local_c8.Target = (IProjectionTarget *)IVar13;
LAB_14c6ef0b8:
    if ((local_c8.bCannotDelete != false) || (local_c8.bCannotDelete = false, cVar11 != '\0')) {
      local_c8.bCannotDelete = true;
    }
    if ((local_c8.bCanMove == false) || (local_c8.bCanMove = true, cStack_67 == '\0')) {
      local_c8.bCanMove = false;
    }
    lVar1 = *(longlong *)this;
    if (*(char *)(lVar1 + 200) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_58 = local_res18;
    local_50 = &local_c8;
    local_res18[0] = (int)pFVar2;
    TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
              ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x60),
               (TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> *)
               (local_a8 + 4),(bool *)&local_58);
    lVar1 = *(longlong *)this;
    if (*(char *)(lVar1 + 200) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar4 = local_a0.Value._4_4_;
    if (*(int *)(lVar1 + 0x68) != *(int *)(lVar1 + 0x94)) {
      lVar12 = *(longlong *)(lVar1 + 0xa0);
      if (*(longlong *)(lVar1 + 0xa0) == 0) {
        lVar12 = lVar1 + 0x98;
      }
      uVar7 = *(uint *)(lVar12 + (ulonglong)(*(int *)(lVar1 + 0xa8) - 1U & local_a0.Value._4_4_) * 4
                       );
      if (uVar7 != 0xffffffff) {
        do {
          puVar10 = (uint *)((longlong)(int)uVar7 * 0x20 + *(longlong *)(lVar1 + 0x60));
          if (*puVar10 == local_a0.Value._4_4_) {
            IVar8 = (IProjectionTarget)(puVar10 + 2);
            if (puVar10 == (uint *)0x0) {
              IVar8 = IVar13;
            }
            if (IVar8 != (IProjectionTarget)0x0) {
              cVar11 = *(char *)IVar8;
              cStack_47 = *(char *)((longlong)IVar8 + 1);
              uStack_46 = *(undefined1 *)((longlong)IVar8 + 2);
              uStack_45 = *(undefined1 *)((longlong)IVar8 + 3);
              uStack_44 = *(undefined1 *)((longlong)IVar8 + 4);
              uStack_43 = *(undefined1 *)((longlong)IVar8 + 5);
              uStack_42 = *(undefined1 *)((longlong)IVar8 + 6);
              uStack_41 = *(undefined1 *)((longlong)IVar8 + 7);
              uStack_40 = *(undefined8 *)((longlong)IVar8 + 8);
              IVar13 = *(IProjectionTarget *)((longlong)IVar8 + 8);
              local_48 = cVar11;
              goto LAB_14c6ef1d5;
            }
            break;
          }
          uVar7 = puVar10[6];
        } while (uVar7 != 0xffffffff);
      }
    }
    uStack_40 = 0;
    cStack_47 = '\x01';
    cVar11 = '\0';
LAB_14c6ef1d5:
    if ((local_b8.bCannotDelete != false) || (local_b8.bCannotDelete = false, cVar11 != '\0')) {
      local_b8.bCannotDelete = true;
    }
    if ((local_b8.bCanMove == false) || (local_b8.bCanMove = true, cStack_47 == '\0')) {
      local_b8.bCanMove = false;
    }
    lVar1 = *(longlong *)this;
    local_b8.Target = (IProjectionTarget *)IVar13;
    if (*(char *)(lVar1 + 200) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_38 = local_res20;
    local_res20[0] = uVar4;
    local_30 = &local_b8;
    TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
              ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x60),&local_a0,(bool *)&local_38);
  }
  return;
}

// operator() @ 14c6ef700

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::AssembleEdgeQuadric'::
__l14::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  double *pdVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  longlong lVar6;
  int *piVar7;
  FSmallListSet *pFVar8;
  bool bVar9;
  BaseValueIterator local_58;
  
  pFVar8 = (FSmallListSet *)(*(longlong *)(*(longlong *)this + 8) + 0xb8);
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator(&local_58,pFVar8,param_1,false);
LAB_14c6ef75c:
  do {
    if ((((local_58.ListSet == pFVar8) && (local_58.ListIndex == param_1)) && (local_58.iCur == -1))
       && (local_58.cur_ptr == -1)) {
      return;
    }
    lVar1 = *(longlong *)this;
    if (*(int *)(lVar1 + 0x1a0) != *(int *)(lVar1 + 0x1cc)) {
      lVar6 = lVar1 + 0x1d0;
      if (*(longlong *)(lVar1 + 0x1d8) != 0) {
        lVar6 = *(longlong *)(lVar1 + 0x1d8);
      }
      iVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar1 + 0x1e0) - 1) &
                               local_58._32_8_ & 0xffffffff) * 4);
      if (iVar3 != -1) {
        do {
          piVar7 = (int *)((longlong)iVar3 * 0x60 + *(longlong *)(lVar1 + 0x198));
          if (*piVar7 == local_58.cur_value) {
            pdVar5 = (double *)(piVar7 + 2);
            if (piVar7 == (int *)0x0) {
              pdVar5 = (double *)0x0;
            }
            if (pdVar5 != (double *)0x0) {
              pdVar2 = *(double **)((longlong)this + 8);
              bVar9 = piVar7 == (int *)0x0;
              pdVar4 = (double *)(piVar7 + 4);
              if (bVar9) {
                pdVar4 = (double *)&DAT_00000008;
              }
              *pdVar2 = *pdVar2 + *pdVar5;
              pdVar5 = (double *)(piVar7 + 6);
              if (bVar9) {
                pdVar5 = (double *)&DAT_00000010;
              }
              pdVar2[1] = *pdVar4 + pdVar2[1];
              pdVar4 = (double *)(piVar7 + 8);
              if (bVar9) {
                pdVar4 = (double *)&DAT_00000018;
              }
              pdVar2[2] = *pdVar5 + pdVar2[2];
              pdVar5 = (double *)(piVar7 + 10);
              if (bVar9) {
                pdVar5 = (double *)&DAT_00000020;
              }
              pdVar2[3] = *pdVar4 + pdVar2[3];
              pdVar4 = (double *)(piVar7 + 0xc);
              if (bVar9) {
                pdVar4 = (double *)&DAT_00000028;
              }
              pdVar2[4] = *pdVar5 + pdVar2[4];
              pdVar5 = (double *)(piVar7 + 0xe);
              if (bVar9) {
                pdVar5 = (double *)&DAT_00000030;
              }
              pdVar2[5] = *pdVar4 + pdVar2[5];
              pdVar4 = (double *)(piVar7 + 0x10);
              if (bVar9) {
                pdVar4 = (double *)&DAT_00000038;
              }
              pdVar2[6] = *pdVar5 + pdVar2[6];
              pdVar5 = (double *)(piVar7 + 0x12);
              if (bVar9) {
                pdVar5 = (double *)&DAT_00000040;
              }
              pdVar2[7] = *pdVar4 + pdVar2[7];
              pdVar4 = (double *)(piVar7 + 0x14);
              if (bVar9) {
                pdVar4 = (double *)&DAT_00000048;
              }
              pdVar2[8] = *pdVar5 + pdVar2[8];
              pdVar2[9] = *pdVar4 + pdVar2[9];
            }
            goto LAB_14c6ef90d;
          }
          iVar3 = piVar7[0x16];
        } while (iVar3 != -1);
        UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_58);
        goto LAB_14c6ef75c;
      }
    }
LAB_14c6ef90d:
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_58);
  } while( true );
}

// operator() @ 14c6ef940

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
AssembleEdgeQuadric'::__l14::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  double *pdVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  longlong lVar6;
  int *piVar7;
  FSmallListSet *pFVar8;
  bool bVar9;
  BaseValueIterator local_58;
  
  pFVar8 = (FSmallListSet *)(*(longlong *)(*(longlong *)this + 8) + 0xb8);
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator(&local_58,pFVar8,param_1,false);
LAB_14c6ef99c:
  do {
    if ((((local_58.ListSet == pFVar8) && (local_58.ListIndex == param_1)) && (local_58.iCur == -1))
       && (local_58.cur_ptr == -1)) {
      return;
    }
    lVar1 = *(longlong *)this;
    if (*(int *)(lVar1 + 0x1a0) != *(int *)(lVar1 + 0x1cc)) {
      lVar6 = lVar1 + 0x1d0;
      if (*(longlong *)(lVar1 + 0x1d8) != 0) {
        lVar6 = *(longlong *)(lVar1 + 0x1d8);
      }
      iVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar1 + 0x1e0) - 1) &
                               local_58._32_8_ & 0xffffffff) * 4);
      if (iVar3 != -1) {
        do {
          piVar7 = (int *)((longlong)iVar3 * 0x60 + *(longlong *)(lVar1 + 0x198));
          if (*piVar7 == local_58.cur_value) {
            pdVar5 = (double *)(piVar7 + 2);
            if (piVar7 == (int *)0x0) {
              pdVar5 = (double *)0x0;
            }
            if (pdVar5 != (double *)0x0) {
              pdVar2 = *(double **)((longlong)this + 8);
              bVar9 = piVar7 == (int *)0x0;
              pdVar4 = (double *)(piVar7 + 4);
              if (bVar9) {
                pdVar4 = (double *)&DAT_00000008;
              }
              *pdVar2 = *pdVar2 + *pdVar5;
              pdVar5 = (double *)(piVar7 + 6);
              if (bVar9) {
                pdVar5 = (double *)&DAT_00000010;
              }
              pdVar2[1] = *pdVar4 + pdVar2[1];
              pdVar4 = (double *)(piVar7 + 8);
              if (bVar9) {
                pdVar4 = (double *)&DAT_00000018;
              }
              pdVar2[2] = *pdVar5 + pdVar2[2];
              pdVar5 = (double *)(piVar7 + 10);
              if (bVar9) {
                pdVar5 = (double *)&DAT_00000020;
              }
              pdVar2[3] = *pdVar4 + pdVar2[3];
              pdVar4 = (double *)(piVar7 + 0xc);
              if (bVar9) {
                pdVar4 = (double *)&DAT_00000028;
              }
              pdVar2[4] = *pdVar5 + pdVar2[4];
              pdVar5 = (double *)(piVar7 + 0xe);
              if (bVar9) {
                pdVar5 = (double *)&DAT_00000030;
              }
              pdVar2[5] = *pdVar4 + pdVar2[5];
              pdVar4 = (double *)(piVar7 + 0x10);
              if (bVar9) {
                pdVar4 = (double *)&DAT_00000038;
              }
              pdVar2[6] = *pdVar5 + pdVar2[6];
              pdVar5 = (double *)(piVar7 + 0x12);
              if (bVar9) {
                pdVar5 = (double *)&DAT_00000040;
              }
              pdVar2[7] = *pdVar4 + pdVar2[7];
              pdVar4 = (double *)(piVar7 + 0x14);
              if (bVar9) {
                pdVar4 = (double *)&DAT_00000048;
              }
              pdVar2[8] = *pdVar5 + pdVar2[8];
              pdVar2[9] = *pdVar4 + pdVar2[9];
            }
            goto LAB_14c6efb4d;
          }
          iVar3 = piVar7[0x16];
        } while (iVar3 != -1);
        UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_58);
        goto LAB_14c6ef99c;
      }
    }
LAB_14c6efb4d:
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_58);
  } while( true );
}

// operator() @ 14c6efb80

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
AssembleEdgeQuadric'::__l14::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  double *pdVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  longlong lVar6;
  int *piVar7;
  FSmallListSet *pFVar8;
  bool bVar9;
  BaseValueIterator local_58;
  
  pFVar8 = (FSmallListSet *)(*(longlong *)(*(longlong *)this + 8) + 0xb8);
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator(&local_58,pFVar8,param_1,false);
LAB_14c6efbdc:
  do {
    if ((((local_58.ListSet == pFVar8) && (local_58.ListIndex == param_1)) && (local_58.iCur == -1))
       && (local_58.cur_ptr == -1)) {
      return;
    }
    lVar1 = *(longlong *)this;
    if (*(int *)(lVar1 + 0x1a0) != *(int *)(lVar1 + 0x1cc)) {
      lVar6 = lVar1 + 0x1d0;
      if (*(longlong *)(lVar1 + 0x1d8) != 0) {
        lVar6 = *(longlong *)(lVar1 + 0x1d8);
      }
      iVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar1 + 0x1e0) - 1) &
                               local_58._32_8_ & 0xffffffff) * 4);
      if (iVar3 != -1) {
        do {
          piVar7 = (int *)((longlong)iVar3 * 0x60 + *(longlong *)(lVar1 + 0x198));
          if (*piVar7 == local_58.cur_value) {
            pdVar5 = (double *)(piVar7 + 2);
            if (piVar7 == (int *)0x0) {
              pdVar5 = (double *)0x0;
            }
            if (pdVar5 != (double *)0x0) {
              pdVar2 = *(double **)((longlong)this + 8);
              bVar9 = piVar7 == (int *)0x0;
              pdVar4 = (double *)(piVar7 + 4);
              if (bVar9) {
                pdVar4 = (double *)&DAT_00000008;
              }
              *pdVar2 = *pdVar2 + *pdVar5;
              pdVar5 = (double *)(piVar7 + 6);
              if (bVar9) {
                pdVar5 = (double *)&DAT_00000010;
              }
              pdVar2[1] = *pdVar4 + pdVar2[1];
              pdVar4 = (double *)(piVar7 + 8);
              if (bVar9) {
                pdVar4 = (double *)&DAT_00000018;
              }
              pdVar2[2] = *pdVar5 + pdVar2[2];
              pdVar5 = (double *)(piVar7 + 10);
              if (bVar9) {
                pdVar5 = (double *)&DAT_00000020;
              }
              pdVar2[3] = *pdVar4 + pdVar2[3];
              pdVar4 = (double *)(piVar7 + 0xc);
              if (bVar9) {
                pdVar4 = (double *)&DAT_00000028;
              }
              pdVar2[4] = *pdVar5 + pdVar2[4];
              pdVar5 = (double *)(piVar7 + 0xe);
              if (bVar9) {
                pdVar5 = (double *)&DAT_00000030;
              }
              pdVar2[5] = *pdVar4 + pdVar2[5];
              pdVar4 = (double *)(piVar7 + 0x10);
              if (bVar9) {
                pdVar4 = (double *)&DAT_00000038;
              }
              pdVar2[6] = *pdVar5 + pdVar2[6];
              pdVar5 = (double *)(piVar7 + 0x12);
              if (bVar9) {
                pdVar5 = (double *)&DAT_00000040;
              }
              pdVar2[7] = *pdVar4 + pdVar2[7];
              pdVar4 = (double *)(piVar7 + 0x14);
              if (bVar9) {
                pdVar4 = (double *)&DAT_00000048;
              }
              pdVar2[8] = *pdVar5 + pdVar2[8];
              pdVar2[9] = *pdVar4 + pdVar2[9];
            }
            goto LAB_14c6efd8d;
          }
          iVar3 = piVar7[0x16];
        } while (iVar3 != -1);
        UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_58);
        goto LAB_14c6efbdc;
      }
    }
LAB_14c6efd8d:
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_58);
  } while( true );
}

// operator() @ 14c6f3390

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToMinimalPlanar'::
__l2::<lambda_2>::operator()(void *this,int param_1)

{
  FDynamicMesh3 *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_res8 [2];
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_b8;
  code *local_b0;
  undefined8 **local_a8;
  undefined8 *local_a0;
  undefined4 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined4 *local_80;
  undefined1 *local_78;
  int *local_70;
  undefined1 local_68 [24];
  undefined1 local_50 [32];
  
  if (((-1 < param_1) &&
      (this_00 = *(FDynamicMesh3 **)(*(longlong *)this + 8),
      param_1 < (int)((this_00->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (this_00->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this_00->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    local_res8[0] = 0;
    local_b8 = **(undefined8 **)((longlong)this + 0x10);
    local_res20 = *(undefined8 *)((longlong)this + 0x18);
    local_a0 = &local_res20;
    local_98 = local_res8;
    local_90 = local_68;
    local_88 = &local_b8;
    local_80 = local_res18;
    local_78 = local_50;
    local_70 = local_res10;
    local_a8 = &local_a0;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<`IsDevelopableVertex<``UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToMinimalPlanar'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>,void,int>
               ::Call;
    local_res18[0] = 0;
    local_res10[0] = 0;
    UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
              (this_00,param_1,(TFunctionRef<void___cdecl(int)> *)&local_b0);
    bVar5 = local_res10[0] == 0;
    plVar1 = *(longlong **)((longlong)this + 8);
    uVar4 = 0;
    if (param_1 < (int)plVar1[1]) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(bool *)((longlong)param_1 + *plVar1) = bVar5;
  }
  return;
}

// operator() @ 14c6f3500

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
SimplifyToMinimalPlanar'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  FDynamicMesh3 *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_res8 [2];
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_b8;
  code *local_b0;
  undefined8 **local_a8;
  undefined8 *local_a0;
  undefined4 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined4 *local_80;
  undefined1 *local_78;
  int *local_70;
  undefined1 local_68 [24];
  undefined1 local_50 [32];
  
  if (((-1 < param_1) &&
      (this_00 = *(FDynamicMesh3 **)(*(longlong *)this + 8),
      param_1 < (int)((this_00->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (this_00->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this_00->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    local_res8[0] = 0;
    local_b8 = **(undefined8 **)((longlong)this + 0x10);
    local_res20 = *(undefined8 *)((longlong)this + 0x18);
    local_a0 = &local_res20;
    local_98 = local_res8;
    local_90 = local_68;
    local_88 = &local_b8;
    local_80 = local_res18;
    local_78 = local_50;
    local_70 = local_res10;
    local_a8 = &local_a0;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<`IsDevelopableVertex<``UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::SimplifyToMinimalPlanar'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>,void,int>
               ::Call;
    local_res18[0] = 0;
    local_res10[0] = 0;
    UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
              (this_00,param_1,(TFunctionRef<void___cdecl(int)> *)&local_b0);
    bVar5 = local_res10[0] == 0;
    plVar1 = *(longlong **)((longlong)this + 8);
    uVar4 = 0;
    if (param_1 < (int)plVar1[1]) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(bool *)((longlong)param_1 + *plVar1) = bVar5;
  }
  return;
}

// operator() @ 14c6f3670

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
SimplifyToMinimalPlanar'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  FDynamicMesh3 *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_res8 [2];
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_b8;
  code *local_b0;
  undefined8 **local_a8;
  undefined8 *local_a0;
  undefined4 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined4 *local_80;
  undefined1 *local_78;
  int *local_70;
  undefined1 local_68 [24];
  undefined1 local_50 [32];
  
  if (((-1 < param_1) &&
      (this_00 = *(FDynamicMesh3 **)(*(longlong *)this + 8),
      param_1 < (int)((this_00->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (this_00->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this_00->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    local_res8[0] = 0;
    local_b8 = **(undefined8 **)((longlong)this + 0x10);
    local_res20 = *(undefined8 *)((longlong)this + 0x18);
    local_a0 = &local_res20;
    local_98 = local_res8;
    local_90 = local_68;
    local_88 = &local_b8;
    local_80 = local_res18;
    local_78 = local_50;
    local_70 = local_res10;
    local_a8 = &local_a0;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<`IsDevelopableVertex<``UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::SimplifyToMinimalPlanar'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>,void,int>
               ::Call;
    local_res18[0] = 0;
    local_res10[0] = 0;
    UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
              (this_00,param_1,(TFunctionRef<void___cdecl(int)> *)&local_b0);
    bVar5 = local_res10[0] == 0;
    plVar1 = *(longlong **)((longlong)this + 8);
    uVar4 = 0;
    if (param_1 < (int)plVar1[1]) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(bool *)((longlong)param_1 + *plVar1) = bVar5;
  }
  return;
}

// operator() @ 14c6f5750

bool __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_2>::operator()(void *this,int param_1)

{
  undefined1 local_res8 [32];
  code *local_58;
  undefined1 **local_50;
  undefined1 *local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_30 = *(longlong *)this;
  local_48 = local_res8;
  local_res8[0] = 1;
  local_40 = (longlong)this + 0x10;
  local_38 = (longlong)this + 0x14;
  local_28 = (longlong)this + 0xc;
  local_20 = (longlong)this + 8;
  local_18 = (longlong)this + 0x18;
  local_10 = (longlong)this + 0x30;
  local_50 = &local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
            (*(FDynamicMesh3 **)(local_30 + 8),param_1,(TFunctionRef<void___cdecl(int)> *)&local_58)
  ;
  return (bool)local_res8[0];
}

// operator() @ 14c6f57e0

bool __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_2>::operator()(void *this,int param_1)

{
  undefined1 local_res8 [32];
  code *local_58;
  undefined1 **local_50;
  undefined1 *local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_30 = *(longlong *)this;
  local_48 = local_res8;
  local_res8[0] = 1;
  local_40 = (longlong)this + 0x10;
  local_38 = (longlong)this + 0x14;
  local_28 = (longlong)this + 0xc;
  local_20 = (longlong)this + 8;
  local_18 = (longlong)this + 0x18;
  local_10 = (longlong)this + 0x30;
  local_50 = &local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
            (*(FDynamicMesh3 **)(local_30 + 8),param_1,(TFunctionRef<void___cdecl(int)> *)&local_58)
  ;
  return (bool)local_res8[0];
}

// operator() @ 14c6f5870

bool __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_2>::operator()(void *this,int param_1)

{
  undefined1 local_res8 [32];
  code *local_58;
  undefined1 **local_50;
  undefined1 *local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_30 = *(longlong *)this;
  local_48 = local_res8;
  local_res8[0] = 1;
  local_40 = (longlong)this + 0x10;
  local_38 = (longlong)this + 0x14;
  local_28 = (longlong)this + 0xc;
  local_20 = (longlong)this + 8;
  local_18 = (longlong)this + 0x18;
  local_10 = (longlong)this + 0x30;
  local_50 = &local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
            (*(FDynamicMesh3 **)(local_30 + 8),param_1,(TFunctionRef<void___cdecl(int)> *)&local_58)
  ;
  return (bool)local_res8[0];
}

// operator() @ 14c6f9c10

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToMinimalPlanar'::
__l45::<lambda_3>::operator()(void *this,int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  TVector<double> local_28;
  
  pTVar12 = UE::Geometry::FDynamicMesh3::GetTriNormal
                      (*(FDynamicMesh3 **)(*(longlong *)((longlong)this + 8) + 8),&local_28,param_1)
  ;
  plVar3 = *(longlong **)this;
  uVar6 = *(undefined4 *)&pTVar12->field0_0x0;
  uVar7 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 4);
  uVar8 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 8);
  uVar9 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 0xc);
  dVar2 = (pTVar12->field0_0x0)._s_0.Z;
  uVar11 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *plVar3;
  puVar1 = (undefined4 *)(lVar4 + (longlong)param_1 * 0x18);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(double *)(lVar4 + 0x10 + (longlong)param_1 * 0x18) = dVar2;
  return;
}

// operator() @ 14c6f9cc0

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
SimplifyToMinimalPlanar'::__l45::<lambda_3>::operator()(void *this,int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  TVector<double> local_28;
  
  pTVar12 = UE::Geometry::FDynamicMesh3::GetTriNormal
                      (*(FDynamicMesh3 **)(*(longlong *)((longlong)this + 8) + 8),&local_28,param_1)
  ;
  plVar3 = *(longlong **)this;
  uVar6 = *(undefined4 *)&pTVar12->field0_0x0;
  uVar7 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 4);
  uVar8 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 8);
  uVar9 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 0xc);
  dVar2 = (pTVar12->field0_0x0)._s_0.Z;
  uVar11 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *plVar3;
  puVar1 = (undefined4 *)(lVar4 + (longlong)param_1 * 0x18);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(double *)(lVar4 + 0x10 + (longlong)param_1 * 0x18) = dVar2;
  return;
}

// operator() @ 14c6f9d70

void __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
SimplifyToMinimalPlanar'::__l45::<lambda_3>::operator()(void *this,int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  TVector<double> local_28;
  
  pTVar12 = UE::Geometry::FDynamicMesh3::GetTriNormal
                      (*(FDynamicMesh3 **)(*(longlong *)((longlong)this + 8) + 8),&local_28,param_1)
  ;
  plVar3 = *(longlong **)this;
  uVar6 = *(undefined4 *)&pTVar12->field0_0x0;
  uVar7 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 4);
  uVar8 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 8);
  uVar9 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 0xc);
  dVar2 = (pTVar12->field0_0x0)._s_0.Z;
  uVar11 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *plVar3;
  puVar1 = (undefined4 *)(lVar4 + (longlong)param_1 * 0x18);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(double *)(lVar4 + 0x10 + (longlong)param_1 * 0x18) = dVar2;
  return;
}

// ApplyToProjectVertices @ 14c7141e0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::ApplyToProjectVertices
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,
          TFunction<void___cdecl(int)> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int local_res8 [2];
  
  lVar1 = *(longlong *)&this->field_0x8;
  uVar8 = 0;
  uVar9 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))) {
    uVar8 = 1;
    uVar7 = 1;
    if ((int)uVar9 < 2) goto LAB_14c714263;
    do {
      lVar4 = (ulonglong)((uint)uVar8 & 0x1ff) * 2;
      lVar2 = (*(undefined8 **)(lVar1 + 0x28))[uVar8 >> 9];
      if ((*(short *)(lVar4 + lVar2) != 0) && (*(short *)(lVar4 + lVar2) != -1)) break;
      uVar7 = (uint)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar9);
  }
  uVar7 = (uint)uVar8;
LAB_14c714263:
  if (uVar7 != uVar9) {
LAB_14c714280:
    do {
      local_res8[0] = (int)uVar8;
      Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar3 = *(code **)param_1;
      plVar6 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar6 = (longlong *)&param_1->field_0x10;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar3)(uVar5,local_res8);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < (int)uVar9) {
        do {
          lVar4 = (ulonglong)((uint)uVar8 & 0x1ff) * 2;
          lVar2 = *(longlong *)((uVar8 >> 9) * 8 + *(longlong *)(lVar1 + 0x28));
          if ((*(short *)(lVar4 + lVar2) != 0) && (*(short *)(lVar4 + lVar2) != -1))
          goto LAB_14c714280;
          uVar7 = (uint)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while ((int)uVar7 < (int)uVar9);
      }
    } while (uVar7 != uVar9);
  }
  return;
}

// ApplyToProjectVertices @ 14c714310

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
ApplyToProjectVertices
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,
          TFunction<void___cdecl(int)> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int local_res8 [2];
  
  lVar1 = *(longlong *)&this->field_0x8;
  uVar8 = 0;
  uVar9 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))) {
    uVar8 = 1;
    uVar7 = 1;
    if ((int)uVar9 < 2) goto LAB_14c714393;
    do {
      lVar4 = (ulonglong)((uint)uVar8 & 0x1ff) * 2;
      lVar2 = (*(undefined8 **)(lVar1 + 0x28))[uVar8 >> 9];
      if ((*(short *)(lVar4 + lVar2) != 0) && (*(short *)(lVar4 + lVar2) != -1)) break;
      uVar7 = (uint)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar9);
  }
  uVar7 = (uint)uVar8;
LAB_14c714393:
  if (uVar7 != uVar9) {
LAB_14c7143b0:
    do {
      local_res8[0] = (int)uVar8;
      Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar3 = *(code **)param_1;
      plVar6 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar6 = (longlong *)&param_1->field_0x10;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar3)(uVar5,local_res8);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < (int)uVar9) {
        do {
          lVar4 = (ulonglong)((uint)uVar8 & 0x1ff) * 2;
          lVar2 = *(longlong *)((uVar8 >> 9) * 8 + *(longlong *)(lVar1 + 0x28));
          if ((*(short *)(lVar4 + lVar2) != 0) && (*(short *)(lVar4 + lVar2) != -1))
          goto LAB_14c7143b0;
          uVar7 = (uint)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while ((int)uVar7 < (int)uVar9);
      }
    } while (uVar7 != uVar9);
  }
  return;
}

// ApplyToProjectVertices @ 14c714440

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
ApplyToProjectVertices
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,
          TFunction<void___cdecl(int)> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int local_res8 [2];
  
  lVar1 = *(longlong *)&this->field_0x8;
  uVar8 = 0;
  uVar9 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))) {
    uVar8 = 1;
    uVar7 = 1;
    if ((int)uVar9 < 2) goto LAB_14c7144c3;
    do {
      lVar4 = (ulonglong)((uint)uVar8 & 0x1ff) * 2;
      lVar2 = (*(undefined8 **)(lVar1 + 0x28))[uVar8 >> 9];
      if ((*(short *)(lVar4 + lVar2) != 0) && (*(short *)(lVar4 + lVar2) != -1)) break;
      uVar7 = (uint)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar9);
  }
  uVar7 = (uint)uVar8;
LAB_14c7144c3:
  if (uVar7 != uVar9) {
LAB_14c7144e0:
    do {
      local_res8[0] = (int)uVar8;
      Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar3 = *(code **)param_1;
      plVar6 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar6 = (longlong *)&param_1->field_0x10;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar3)(uVar5,local_res8);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < (int)uVar9) {
        do {
          lVar4 = (ulonglong)((uint)uVar8 & 0x1ff) * 2;
          lVar2 = *(longlong *)((uVar8 >> 9) * 8 + *(longlong *)(lVar1 + 0x28));
          if ((*(short *)(lVar4 + lVar2) != 0) && (*(short *)(lVar4 + lVar2) != -1))
          goto LAB_14c7144e0;
          uVar7 = (uint)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while ((int)uVar7 < (int)uVar9);
      }
    } while (uVar7 != uVar9);
  }
  return;
}

// AssembleEdgeQuadric @ 14c7153a0

TQuadricError<double> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::AssembleEdgeQuadric
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,
          TQuadricError<double> *__return_storage_ptr__,FEdge *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TQuadricError<double> *pTVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  TMeshSimplification<UE::Geometry::TQuadricError<double>_> *local_38;
  TQuadricError<double> *local_30;
  
  uVar2 = (param_1->Vert).field0_0x0._s_0.B;
  lVar10 = (longlong)(int)uVar2;
  uVar12 = 0;
  if ((int)uVar2 < (this->vertQuadrics).ArrayNum) {
    uVar12 = ~uVar2 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TQuadricError<double> *)(*pcVar5)();
    return pTVar9;
  }
  uVar2 = (param_1->Vert).field0_0x0._s_0.A;
  lVar11 = (longlong)(int)uVar2;
  pFVar3 = (this->vertQuadrics).AllocatorInstance.Data;
  uVar12 = 0;
  if ((int)uVar2 < (this->vertQuadrics).ArrayNum) {
    uVar12 = ~uVar2 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TQuadricError<double> *)(*pcVar5)();
    return pTVar9;
  }
  pFVar4 = (this->vertQuadrics).AllocatorInstance.Data;
  __return_storage_ptr__->Axx =
       *(double *)(pFVar3 + lVar10 * 0x50) + *(double *)(pFVar4 + lVar11 * 0x50);
  __return_storage_ptr__->Axy =
       *(double *)(pFVar4 + lVar11 * 0x50 + 8) + *(double *)(pFVar3 + lVar10 * 0x50 + 8);
  __return_storage_ptr__->Axz =
       *(double *)(pFVar4 + lVar11 * 0x50 + 0x10) + *(double *)(pFVar3 + lVar10 * 0x50 + 0x10);
  __return_storage_ptr__->Ayy =
       *(double *)(pFVar4 + lVar11 * 0x50 + 0x18) + *(double *)(pFVar3 + lVar10 * 0x50 + 0x18);
  __return_storage_ptr__->Ayz =
       *(double *)(pFVar4 + lVar11 * 0x50 + 0x20) + *(double *)(pFVar3 + lVar10 * 0x50 + 0x20);
  __return_storage_ptr__->Azz =
       *(double *)(pFVar4 + lVar11 * 0x50 + 0x28) + *(double *)(pFVar3 + lVar10 * 0x50 + 0x28);
  __return_storage_ptr__->bx =
       *(double *)(pFVar4 + lVar11 * 0x50 + 0x30) + *(double *)(pFVar3 + lVar10 * 0x50 + 0x30);
  __return_storage_ptr__->by =
       *(double *)(pFVar4 + lVar11 * 0x50 + 0x38) + *(double *)(pFVar3 + lVar10 * 0x50 + 0x38);
  __return_storage_ptr__->bz =
       *(double *)(pFVar4 + lVar11 * 0x50 + 0x40) + *(double *)(pFVar3 + lVar10 * 0x50 + 0x40);
  __return_storage_ptr__->c =
       *(double *)(pFVar4 + lVar11 * 0x50 + 0x48) + *(double *)(pFVar3 + lVar10 * 0x50 + 0x48);
  if (this->bRetainQuadricMemory == false) {
    uVar2 = (param_1->Tri).field0_0x0._s_0.A;
    uVar12 = (uint)__xmm_80000000000000008000000000000000;
    uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    if (uVar2 != 0xffffffff) {
      uVar7 = 0;
      if ((int)uVar2 < (this->triQuadrics).ArrayNum) {
        uVar7 = ~uVar2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TQuadricError<double> *)(*pcVar5)();
        return pTVar9;
      }
      uVar7 = (param_1->Tri).field0_0x0._s_0.A;
      pFVar3 = (this->triQuadrics).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar7 < (this->triAreas).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TQuadricError<double> *)(*pcVar5)();
        return pTVar9;
      }
      uVar1 = *(undefined8 *)((this->triAreas).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
      TQuadricError<double>::Add
                (__return_storage_ptr__,
                 (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar13,(uint)uVar1 ^ uVar12),
                 (TQuadricError<double> *)(pFVar3 + (longlong)(int)uVar2 * 0x50));
    }
    uVar2 = (param_1->Tri).field0_0x0._s_0.B;
    if (uVar2 != 0xffffffff) {
      uVar7 = 0;
      if ((int)uVar2 < (this->triQuadrics).ArrayNum) {
        uVar7 = ~uVar2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TQuadricError<double> *)(*pcVar5)();
        return pTVar9;
      }
      uVar7 = (param_1->Tri).field0_0x0._s_0.B;
      pFVar3 = (this->triQuadrics).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar7 < (this->triAreas).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TQuadricError<double> *)(*pcVar5)();
        return pTVar9;
      }
      uVar1 = *(undefined8 *)((this->triAreas).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
      TQuadricError<double>::Add
                (__return_storage_ptr__,
                 (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar13,(uint)uVar1 ^ uVar12),
                 (TQuadricError<double> *)(pFVar3 + (longlong)(int)uVar2 * 0x50));
    }
  }
  if (this->bAllowSeamCollapse != false) {
    local_38 = this;
    local_30 = __return_storage_ptr__;
    `UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::AssembleEdgeQuadric'::
    __l14::<lambda_1>::operator()(&local_38,(param_1->Vert).field0_0x0._s_0.A);
    `UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::AssembleEdgeQuadric'::
    __l14::<lambda_1>::operator()(&local_38,(param_1->Vert).field0_0x0._s_0.B);
  }
  return __return_storage_ptr__;
}

// AssembleEdgeQuadric @ 14c715740

TAttrBasedQuadricError<double> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
AssembleEdgeQuadric(TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,
                   TAttrBasedQuadricError<double> *__return_storage_ptr__,FEdge *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TAttrBasedQuadricError<double> *pTVar8;
  uint uVar9;
  uint uVar10;
  TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *local_38;
  TAttrBasedQuadricError<double> *local_30;
  
  uVar2 = (param_1->Vert).field0_0x0._s_0.B;
  uVar9 = 0;
  if ((int)uVar2 < (this->vertQuadrics).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TAttrBasedQuadricError<double> *)(*pcVar4)();
    return pTVar8;
  }
  uVar9 = (param_1->Vert).field0_0x0._s_0.A;
  pFVar3 = (this->vertQuadrics).AllocatorInstance.Data;
  uVar10 = 0;
  if ((int)uVar9 < (this->vertQuadrics).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TAttrBasedQuadricError<double> *)(*pcVar4)();
    return pTVar8;
  }
  TAttrBasedQuadricError<double>::TAttrBasedQuadricError<double>
            (__return_storage_ptr__,
             (TAttrBasedQuadricError<double> *)
             ((this->vertQuadrics).AllocatorInstance.Data + (longlong)(int)uVar9 * 0xe0),
             (TAttrBasedQuadricError<double> *)(pFVar3 + (longlong)(int)uVar2 * 0xe0));
  if (this->bRetainQuadricMemory == false) {
    uVar2 = (param_1->Tri).field0_0x0._s_0.A;
    uVar9 = (uint)__xmm_80000000000000008000000000000000;
    uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    if (uVar2 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar2 < (this->triQuadrics).ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TAttrBasedQuadricError<double> *)(*pcVar4)();
        return pTVar8;
      }
      uVar6 = (param_1->Tri).field0_0x0._s_0.A;
      pFVar3 = (this->triQuadrics).AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)uVar6 < (this->triAreas).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TAttrBasedQuadricError<double> *)(*pcVar4)();
        return pTVar8;
      }
      uVar1 = *(undefined8 *)((this->triAreas).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
      TAttrBasedQuadricError<double>::Add
                (__return_storage_ptr__,
                 (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar10,(uint)uVar1 ^ uVar9),
                 (TAttrBasedQuadricError<double> *)(pFVar3 + (longlong)(int)uVar2 * 0xe0));
    }
    uVar2 = (param_1->Tri).field0_0x0._s_0.B;
    if (uVar2 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar2 < (this->triQuadrics).ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TAttrBasedQuadricError<double> *)(*pcVar4)();
        return pTVar8;
      }
      uVar6 = (param_1->Tri).field0_0x0._s_0.B;
      pFVar3 = (this->triQuadrics).AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)uVar6 < (this->triAreas).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TAttrBasedQuadricError<double> *)(*pcVar4)();
        return pTVar8;
      }
      uVar1 = *(undefined8 *)((this->triAreas).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
      TAttrBasedQuadricError<double>::Add
                (__return_storage_ptr__,
                 (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar10,(uint)uVar1 ^ uVar9),
                 (TAttrBasedQuadricError<double> *)(pFVar3 + (longlong)(int)uVar2 * 0xe0));
    }
  }
  if (this->bAllowSeamCollapse != false) {
    local_38 = this;
    local_30 = __return_storage_ptr__;
    `UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
    AssembleEdgeQuadric'::__l14::<lambda_1>::operator()(&local_38,(param_1->Vert).field0_0x0._s_0.A)
    ;
    `UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
    AssembleEdgeQuadric'::__l14::<lambda_1>::operator()(&local_38,(param_1->Vert).field0_0x0._s_0.B)
    ;
  }
  return __return_storage_ptr__;
}

// AssembleEdgeQuadric @ 14c715a30

TVolPresQuadricError<double> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::AssembleEdgeQuadric
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,
          TVolPresQuadricError<double> *__return_storage_ptr__,FEdge *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TVolPresQuadricError<double> *pTVar8;
  uint uVar9;
  uint uVar10;
  TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *local_38;
  TVolPresQuadricError<double> *local_30;
  
  uVar2 = (param_1->Vert).field0_0x0._s_0.B;
  uVar9 = 0;
  if ((int)uVar2 < (this->vertQuadrics).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TVolPresQuadricError<double> *)(*pcVar4)();
    return pTVar8;
  }
  uVar9 = (param_1->Vert).field0_0x0._s_0.A;
  pFVar3 = (this->vertQuadrics).AllocatorInstance.Data;
  uVar10 = 0;
  if ((int)uVar9 < (this->vertQuadrics).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TVolPresQuadricError<double> *)(*pcVar4)();
    return pTVar8;
  }
  TVolPresQuadricError<double>::TVolPresQuadricError<double>
            (__return_storage_ptr__,
             (TVolPresQuadricError<double> *)
             ((this->vertQuadrics).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x70),
             (TVolPresQuadricError<double> *)(pFVar3 + (longlong)(int)uVar2 * 0x70));
  if (this->bRetainQuadricMemory == false) {
    uVar2 = (param_1->Tri).field0_0x0._s_0.A;
    uVar9 = (uint)__xmm_80000000000000008000000000000000;
    uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    if (uVar2 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar2 < (this->triQuadrics).ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TVolPresQuadricError<double> *)(*pcVar4)();
        return pTVar8;
      }
      uVar6 = (param_1->Tri).field0_0x0._s_0.A;
      pFVar3 = (this->triQuadrics).AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)uVar6 < (this->triAreas).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TVolPresQuadricError<double> *)(*pcVar4)();
        return pTVar8;
      }
      uVar1 = *(undefined8 *)((this->triAreas).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
      TVolPresQuadricError<double>::Add
                (__return_storage_ptr__,
                 (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar10,(uint)uVar1 ^ uVar9),
                 (TVolPresQuadricError<double> *)(pFVar3 + (longlong)(int)uVar2 * 0x70));
    }
    uVar2 = (param_1->Tri).field0_0x0._s_0.B;
    if (uVar2 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar2 < (this->triQuadrics).ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TVolPresQuadricError<double> *)(*pcVar4)();
        return pTVar8;
      }
      uVar6 = (param_1->Tri).field0_0x0._s_0.B;
      pFVar3 = (this->triQuadrics).AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)uVar6 < (this->triAreas).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TVolPresQuadricError<double> *)(*pcVar4)();
        return pTVar8;
      }
      uVar1 = *(undefined8 *)((this->triAreas).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
      TVolPresQuadricError<double>::Add
                (__return_storage_ptr__,
                 (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar10,(uint)uVar1 ^ uVar9),
                 (TVolPresQuadricError<double> *)(pFVar3 + (longlong)(int)uVar2 * 0x70));
    }
  }
  if (this->bAllowSeamCollapse != false) {
    local_38 = this;
    local_30 = __return_storage_ptr__;
    `UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
    AssembleEdgeQuadric'::__l14::<lambda_1>::operator()(&local_38,(param_1->Vert).field0_0x0._s_0.A)
    ;
    `UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
    AssembleEdgeQuadric'::__l14::<lambda_1>::operator()(&local_38,(param_1->Vert).field0_0x0._s_0.B)
    ;
  }
  return __return_storage_ptr__;
}

// CanCollapseEdge @ 14c71a530

bool __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::CanCollapseEdge
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,int param_1,int param_2,
          int param_3,int param_4,int param_5,int param_6,int param_7,int *param_8)

{
  undefined1 *this_00;
  ESimplificationCollapseModes EVar1;
  FDynamicMeshAttributeSet *this_01;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  TDynamicMeshOverlay<float,2> *this_02;
  TDynamicMeshOverlay<float,3> *this_03;
  int iVar8;
  int iVar9;
  bool local_res8 [8];
  bool local_38 [16];
  
  EVar1 = this->CollapseMode;
  if ((this->bAllowSeamCollapse != false) && (EVar1 != MinimalExistingVertexError)) {
    bVar3 = FMeshRefinerBase::CanCollapseVertex
                      ((FMeshRefinerBase *)this,param_1,param_2,param_3,param_8);
    return bVar3;
  }
  bVar3 = FMeshRefinerBase::CanCollapseEdge
                    ((FMeshRefinerBase *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  if ((((bVar3) && (this->bAllowSeamCollapse != false)) && (EVar1 == MinimalExistingVertexError)) &&
     (this->field_0xc8 != '\0')) {
    this_00 = &this->field_0x10;
    bVar4 = FMeshConstraints::HasEdgeConstraint((FMeshConstraints *)this_00,param_1);
    if (bVar4) {
      bVar3 = true;
      this_01 = *(FDynamicMeshAttributeSet **)(*(longlong *)&this->field_0x8 + 0x208);
      if (this_01 != (FDynamicMeshAttributeSet *)0x0) {
        iVar9 = 0;
        for (iVar8 = 0; iVar7 = (**(code **)(this_01->_padding_ + 0xa8))(this_01), iVar8 < iVar7;
            iVar8 = iVar8 + 1) {
          this_02 = (TDynamicMeshOverlay<float,2> *)
                    FDynamicMeshAttributeSet::GetUVLayer(this_01,iVar8);
          bVar3 = TDynamicMeshOverlay<float,2>::IsSeamEdge(this_02,param_1,local_res8);
          if ((bVar3) && (local_res8[0] == false)) goto LAB_14c71a753;
        }
        while( true ) {
          bVar3 = true;
          iVar8 = (**(code **)(this_01->_padding_ + 0xb8))(this_01);
          if (iVar8 <= iVar9) break;
          this_03 = (TDynamicMeshOverlay<float,3> *)
                    FDynamicMeshAttributeSet::GetNormalLayer(this_01,iVar9);
          bVar3 = TDynamicMeshOverlay<float,3>::IsSeamEdge(this_03,param_1,local_38);
          if ((bVar3) && (local_38[0] == false)) goto LAB_14c71a753;
          iVar9 = iVar9 + 1;
        }
      }
    }
    else {
      if ((this->field_0xc8 == '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      bVar4 = FMeshConstraints::HasVertexConstraint((FMeshConstraints *)this_00,param_2);
      if ((this->field_0xc8 == '\0') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      bVar6 = FMeshConstraints::HasVertexConstraint((FMeshConstraints *)this_00,param_3);
      if (bVar4) {
        if (!bVar6) {
          if (*param_8 == -1) {
            *param_8 = param_2;
            return true;
          }
          if (*param_8 == param_2) {
            return true;
          }
        }
LAB_14c71a753:
        bVar3 = false;
      }
      else if (bVar6) {
        if (*param_8 == -1) {
          *param_8 = param_3;
        }
        else if (*param_8 != param_3) {
          bVar3 = false;
        }
      }
    }
  }
  return bVar3;
}

// CanCollapseEdge @ 14c71a7a0

bool __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::CanCollapseEdge
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,int param_1,
          int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int *param_8)

{
  undefined1 *this_00;
  ESimplificationCollapseModes EVar1;
  FDynamicMeshAttributeSet *this_01;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  TDynamicMeshOverlay<float,2> *this_02;
  TDynamicMeshOverlay<float,3> *this_03;
  int iVar8;
  int iVar9;
  bool local_res8 [8];
  bool local_38 [16];
  
  EVar1 = this->CollapseMode;
  if ((this->bAllowSeamCollapse != false) && (EVar1 != MinimalExistingVertexError)) {
    bVar3 = FMeshRefinerBase::CanCollapseVertex
                      ((FMeshRefinerBase *)this,param_1,param_2,param_3,param_8);
    return bVar3;
  }
  bVar3 = FMeshRefinerBase::CanCollapseEdge
                    ((FMeshRefinerBase *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  if ((((bVar3) && (this->bAllowSeamCollapse != false)) && (EVar1 == MinimalExistingVertexError)) &&
     (this->field_0xc8 != '\0')) {
    this_00 = &this->field_0x10;
    bVar4 = FMeshConstraints::HasEdgeConstraint((FMeshConstraints *)this_00,param_1);
    if (bVar4) {
      bVar3 = true;
      this_01 = *(FDynamicMeshAttributeSet **)(*(longlong *)&this->field_0x8 + 0x208);
      if (this_01 != (FDynamicMeshAttributeSet *)0x0) {
        iVar9 = 0;
        for (iVar8 = 0; iVar7 = (**(code **)(this_01->_padding_ + 0xa8))(this_01), iVar8 < iVar7;
            iVar8 = iVar8 + 1) {
          this_02 = (TDynamicMeshOverlay<float,2> *)
                    FDynamicMeshAttributeSet::GetUVLayer(this_01,iVar8);
          bVar3 = TDynamicMeshOverlay<float,2>::IsSeamEdge(this_02,param_1,local_res8);
          if ((bVar3) && (local_res8[0] == false)) goto LAB_14c71a9c3;
        }
        while( true ) {
          bVar3 = true;
          iVar8 = (**(code **)(this_01->_padding_ + 0xb8))(this_01);
          if (iVar8 <= iVar9) break;
          this_03 = (TDynamicMeshOverlay<float,3> *)
                    FDynamicMeshAttributeSet::GetNormalLayer(this_01,iVar9);
          bVar3 = TDynamicMeshOverlay<float,3>::IsSeamEdge(this_03,param_1,local_38);
          if ((bVar3) && (local_38[0] == false)) goto LAB_14c71a9c3;
          iVar9 = iVar9 + 1;
        }
      }
    }
    else {
      if ((this->field_0xc8 == '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      bVar4 = FMeshConstraints::HasVertexConstraint((FMeshConstraints *)this_00,param_2);
      if ((this->field_0xc8 == '\0') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      bVar6 = FMeshConstraints::HasVertexConstraint((FMeshConstraints *)this_00,param_3);
      if (bVar4) {
        if (!bVar6) {
          if (*param_8 == -1) {
            *param_8 = param_2;
            return true;
          }
          if (*param_8 == param_2) {
            return true;
          }
        }
LAB_14c71a9c3:
        bVar3 = false;
      }
      else if (bVar6) {
        if (*param_8 == -1) {
          *param_8 = param_3;
        }
        else if (*param_8 != param_3) {
          bVar3 = false;
        }
      }
    }
  }
  return bVar3;
}

// CanCollapseEdge @ 14c71aa10

bool __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::CanCollapseEdge
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,int param_1,
          int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int *param_8)

{
  undefined1 *this_00;
  ESimplificationCollapseModes EVar1;
  FDynamicMeshAttributeSet *this_01;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  TDynamicMeshOverlay<float,2> *this_02;
  TDynamicMeshOverlay<float,3> *this_03;
  int iVar8;
  int iVar9;
  bool local_res8 [8];
  bool local_38 [16];
  
  EVar1 = this->CollapseMode;
  if ((this->bAllowSeamCollapse != false) && (EVar1 != MinimalExistingVertexError)) {
    bVar3 = FMeshRefinerBase::CanCollapseVertex
                      ((FMeshRefinerBase *)this,param_1,param_2,param_3,param_8);
    return bVar3;
  }
  bVar3 = FMeshRefinerBase::CanCollapseEdge
                    ((FMeshRefinerBase *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  if ((((bVar3) && (this->bAllowSeamCollapse != false)) && (EVar1 == MinimalExistingVertexError)) &&
     (this->field_0xc8 != '\0')) {
    this_00 = &this->field_0x10;
    bVar4 = FMeshConstraints::HasEdgeConstraint((FMeshConstraints *)this_00,param_1);
    if (bVar4) {
      bVar3 = true;
      this_01 = *(FDynamicMeshAttributeSet **)(*(longlong *)&this->field_0x8 + 0x208);
      if (this_01 != (FDynamicMeshAttributeSet *)0x0) {
        iVar9 = 0;
        for (iVar8 = 0; iVar7 = (**(code **)(this_01->_padding_ + 0xa8))(this_01), iVar8 < iVar7;
            iVar8 = iVar8 + 1) {
          this_02 = (TDynamicMeshOverlay<float,2> *)
                    FDynamicMeshAttributeSet::GetUVLayer(this_01,iVar8);
          bVar3 = TDynamicMeshOverlay<float,2>::IsSeamEdge(this_02,param_1,local_res8);
          if ((bVar3) && (local_res8[0] == false)) goto LAB_14c71ac33;
        }
        while( true ) {
          bVar3 = true;
          iVar8 = (**(code **)(this_01->_padding_ + 0xb8))(this_01);
          if (iVar8 <= iVar9) break;
          this_03 = (TDynamicMeshOverlay<float,3> *)
                    FDynamicMeshAttributeSet::GetNormalLayer(this_01,iVar9);
          bVar3 = TDynamicMeshOverlay<float,3>::IsSeamEdge(this_03,param_1,local_38);
          if ((bVar3) && (local_38[0] == false)) goto LAB_14c71ac33;
          iVar9 = iVar9 + 1;
        }
      }
    }
    else {
      if ((this->field_0xc8 == '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      bVar4 = FMeshConstraints::HasVertexConstraint((FMeshConstraints *)this_00,param_2);
      if ((this->field_0xc8 == '\0') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      bVar6 = FMeshConstraints::HasVertexConstraint((FMeshConstraints *)this_00,param_3);
      if (bVar4) {
        if (!bVar6) {
          if (*param_8 == -1) {
            *param_8 = param_2;
            return true;
          }
          if (*param_8 == param_2) {
            return true;
          }
        }
LAB_14c71ac33:
        bVar3 = false;
      }
      else if (bVar6) {
        if (*param_8 == -1) {
          *param_8 = param_3;
        }
        else if (*param_8 != param_3) {
          bVar3 = false;
        }
      }
    }
  }
  return bVar3;
}

// CheckIfCollapseWithinGeometricTolerance @ 14c71bd00

bool __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
CheckIfCollapseWithinGeometricTolerance
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,int param_1,int param_2,
          TVector<double> *param_3,int param_4,int param_5)

{
  longlong *plVar1;
  double dVar2;
  bool bVar3;
  TMeshSimplification<UE::Geometry::TQuadricError<double>_> *local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  TMeshSimplification<UE::Geometry::TQuadricError<double>_> *local_48;
  int local_40;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  
  if ((this->GeometricErrorConstraint == PredictedPointToProjectionTarget) &&
     (plVar1 = *(longlong **)&this->field_0xd0, plVar1 != (longlong *)0x0)) {
    dVar2 = this->GeometricErrorTolerance * this->GeometricErrorTolerance;
    (**(code **)(*plVar1 + 8))(plVar1,&local_60,param_3,0xffffffff);
    local_58 = (param_3->field0_0x0)._s_0.Y - local_58;
    local_60 = (param_3->field0_0x0)._s_0.X - local_60;
    local_50 = (param_3->field0_0x0)._s_0.Z - local_50;
    if (local_58 * local_58 + local_60 * local_60 + local_50 * local_50 <= dVar2) {
      local_48 = this;
      local_40 = FDynamicMesh3::FindEdge(*(FDynamicMesh3 **)&this->field_0x8,param_1,param_2);
      local_38 = (param_3->field0_0x0)._s_0.X;
      dStack_30 = (param_3->field0_0x0)._s_0.Y;
      local_28 = (param_3->field0_0x0)._s_0.Z;
      local_20 = dVar2;
      bVar3 = `UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
              CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_1>::operator()
                        (&local_48,param_1);
      if (bVar3) {
        bVar3 = `UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
                CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_1>::operator()
                          (&local_48,param_2);
        if (bVar3) {
          local_80 = (param_3->field0_0x0)._s_0.X;
          dStack_78 = (param_3->field0_0x0)._s_0.Y;
          local_88 = param_4;
          local_70 = (param_3->field0_0x0)._s_0.Z;
          local_84 = param_5;
          local_98 = this;
          local_90 = param_1;
          local_8c = param_2;
          local_68 = dVar2;
          bVar3 = `UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
                  CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_2>::operator()
                            (&local_98,param_1);
          if (bVar3) {
            bVar3 = `UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
                    CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_2>::operator()
                              (&local_98,param_2);
            if (bVar3) goto LAB_14c71be5a;
          }
        }
      }
    }
    bVar3 = false;
  }
  else {
LAB_14c71be5a:
    bVar3 = true;
  }
  return bVar3;
}

// CheckIfCollapseWithinGeometricTolerance @ 14c71be80

bool __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
CheckIfCollapseWithinGeometricTolerance
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,int param_1,
          int param_2,TVector<double> *param_3,int param_4,int param_5)

{
  longlong *plVar1;
  double dVar2;
  bool bVar3;
  TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *local_48;
  int local_40;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  
  if ((this->GeometricErrorConstraint == PredictedPointToProjectionTarget) &&
     (plVar1 = *(longlong **)&this->field_0xd0, plVar1 != (longlong *)0x0)) {
    dVar2 = this->GeometricErrorTolerance * this->GeometricErrorTolerance;
    (**(code **)(*plVar1 + 8))(plVar1,&local_60,param_3,0xffffffff);
    local_58 = (param_3->field0_0x0)._s_0.Y - local_58;
    local_60 = (param_3->field0_0x0)._s_0.X - local_60;
    local_50 = (param_3->field0_0x0)._s_0.Z - local_50;
    if (local_58 * local_58 + local_60 * local_60 + local_50 * local_50 <= dVar2) {
      local_48 = this;
      local_40 = FDynamicMesh3::FindEdge(*(FDynamicMesh3 **)&this->field_0x8,param_1,param_2);
      local_38 = (param_3->field0_0x0)._s_0.X;
      dStack_30 = (param_3->field0_0x0)._s_0.Y;
      local_28 = (param_3->field0_0x0)._s_0.Z;
      local_20 = dVar2;
      bVar3 = `UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
              CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_1>::operator()
                        (&local_48,param_1);
      if (bVar3) {
        bVar3 = `UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
                CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_1>::operator()
                          (&local_48,param_2);
        if (bVar3) {
          local_80 = (param_3->field0_0x0)._s_0.X;
          dStack_78 = (param_3->field0_0x0)._s_0.Y;
          local_88 = param_4;
          local_70 = (param_3->field0_0x0)._s_0.Z;
          local_84 = param_5;
          local_98 = this;
          local_90 = param_1;
          local_8c = param_2;
          local_68 = dVar2;
          bVar3 = `UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>
                  ::CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_2>::operator()
                            (&local_98,param_1);
          if (bVar3) {
            bVar3 = `UE::Geometry::
                    TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
                    CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_2>::operator()
                              (&local_98,param_2);
            if (bVar3) goto LAB_14c71bfda;
          }
        }
      }
    }
    bVar3 = false;
  }
  else {
LAB_14c71bfda:
    bVar3 = true;
  }
  return bVar3;
}

// CheckIfCollapseWithinGeometricTolerance @ 14c71c000

bool __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
CheckIfCollapseWithinGeometricTolerance
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,int param_1,
          int param_2,TVector<double> *param_3,int param_4,int param_5)

{
  longlong *plVar1;
  double dVar2;
  bool bVar3;
  TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *local_48;
  int local_40;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  
  if ((this->GeometricErrorConstraint == PredictedPointToProjectionTarget) &&
     (plVar1 = *(longlong **)&this->field_0xd0, plVar1 != (longlong *)0x0)) {
    dVar2 = this->GeometricErrorTolerance * this->GeometricErrorTolerance;
    (**(code **)(*plVar1 + 8))(plVar1,&local_60,param_3,0xffffffff);
    local_58 = (param_3->field0_0x0)._s_0.Y - local_58;
    local_60 = (param_3->field0_0x0)._s_0.X - local_60;
    local_50 = (param_3->field0_0x0)._s_0.Z - local_50;
    if (local_58 * local_58 + local_60 * local_60 + local_50 * local_50 <= dVar2) {
      local_48 = this;
      local_40 = FDynamicMesh3::FindEdge(*(FDynamicMesh3 **)&this->field_0x8,param_1,param_2);
      local_38 = (param_3->field0_0x0)._s_0.X;
      dStack_30 = (param_3->field0_0x0)._s_0.Y;
      local_28 = (param_3->field0_0x0)._s_0.Z;
      local_20 = dVar2;
      bVar3 = `UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
              CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_1>::operator()
                        (&local_48,param_1);
      if (bVar3) {
        bVar3 = `UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
                CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_1>::operator()
                          (&local_48,param_2);
        if (bVar3) {
          local_80 = (param_3->field0_0x0)._s_0.X;
          dStack_78 = (param_3->field0_0x0)._s_0.Y;
          local_88 = param_4;
          local_70 = (param_3->field0_0x0)._s_0.Z;
          local_84 = param_5;
          local_98 = this;
          local_90 = param_1;
          local_8c = param_2;
          local_68 = dVar2;
          bVar3 = `UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
                  CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_2>::operator()
                            (&local_98,param_1);
          if (bVar3) {
            bVar3 = `UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>
                    ::CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_2>::operator()
                              (&local_98,param_2);
            if (bVar3) goto LAB_14c71c15a;
          }
        }
      }
    }
    bVar3 = false;
  }
  else {
LAB_14c71c15a:
    bVar3 = true;
  }
  return bVar3;
}

// CollapseEdge @ 14c71ce50

/* WARNING: Type propagation algorithm not settling */

ESimplificationResult __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::CollapseEdge
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,int param_1,
          TVector<double> *param_2,FEdgeCollapseInfo *param_3,int param_4)

{
  int *piVar1;
  EGeometricErrorCriteria EVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  code *pcVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  ESimplificationResult EVar14;
  int iVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  FMeshConstraints *pFVar18;
  FVertexConstraint *pFVar19;
  double *pdVar20;
  int *piVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined1 *puVar24;
  uint uVar25;
  uint uVar26;
  TVector<double> *pTVar27;
  uint uVar28;
  int iVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  ESimplificationCollapseModes local_res8 [2];
  uint local_res10;
  TVector<double> *local_res18;
  ulonglong local_res20;
  uint local_208 [2];
  ulonglong local_200;
  ulonglong local_1f8;
  longlong local_1f0;
  uint local_1e8 [2];
  uint local_1e0 [2];
  double *local_1d8;
  double *local_1d0;
  TMeshSimplification<UE::Geometry::TQuadricError<double>_> *local_1c8;
  FIndex3i_u_0 local_1c0;
  FIndex3i_u_0 local_1b0;
  ulonglong local_1a0;
  ulonglong uStack_198;
  ulonglong local_190;
  undefined1 local_188 [16];
  undefined4 local_178 [2];
  undefined8 local_170;
  undefined4 local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  double local_108;
  FVertexConstraint local_100;
  undefined1 local_f0 [176];
  
  param_3->KeptVertex = -1;
  piVar21 = *(int **)&this->field_0x118;
  piVar1 = piVar21 + *(int *)&this->field_0x120;
  for (; local_res18 = param_2, piVar21 != piVar1; piVar21 = piVar21 + 1) {
    if (*piVar21 == param_1) {
      bVar13 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6822847689076506224>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\MeshRefinerBase.cpp"
                          ,400,"false");
      if (bVar13) {
        pcVar6 = (code *)swi(3);
        EVar14 = (*pcVar6)();
        return EVar14;
      }
      break;
    }
  }
  if (this->field_0xc8 == '\0') {
    local_178[0] = 0;
    puVar16 = (ulonglong *)local_178;
    local_170 = 0;
    local_168 = 0xffffffff;
  }
  else {
    if (*(int *)&this->field_0x18 != *(int *)&this->field_0x44) {
      puVar24 = *(undefined1 **)&this->field_0x50;
      if (*(undefined1 **)&this->field_0x50 == (undefined1 *)0x0) {
        puVar24 = &this->field_0x48;
      }
      iVar29 = *(int *)(puVar24 + (ulonglong)(*(int *)&this->field_0x58 - 1U & param_1) * 4);
      if (iVar29 != -1) {
        do {
          lVar3 = *(longlong *)&this->field_0x10 + (longlong)iVar29 * 0x28;
          if (*(int *)(*(longlong *)&this->field_0x10 + (longlong)iVar29 * 0x28) == param_1) {
            puVar16 = (ulonglong *)(lVar3 + 8);
            if (lVar3 == 0) {
              puVar16 = (ulonglong *)0x0;
            }
            if (puVar16 != (ulonglong *)0x0) {
              local_1a0 = *puVar16;
              uStack_198 = puVar16[1];
              local_190 = puVar16[2];
              goto LAB_14c71cf4a;
            }
            break;
          }
          iVar29 = *(int *)(lVar3 + 0x20);
        } while (iVar29 != -1);
      }
    }
    local_1a0 = local_1a0 & 0xffffffff00000000;
    uStack_198 = 0;
    local_190 = CONCAT44(local_190._4_4_,0xffffffff);
LAB_14c71cf4a:
    puVar16 = &local_1a0;
  }
  local_108 = (double)puVar16[2];
  if ((((byte)(uint)*puVar16 & 7) == 7) || (((uint)*puVar16 & 4) != 0)) {
    return Ignored_EdgeIsFullyConstrained;
  }
  lVar3 = *(longlong *)&this->field_0x8;
  if ((param_1 < 0) || (*(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4) <= param_1)) {
    return Failed_NotAnEdge;
  }
  uVar22 = (ulonglong)(param_1 & 0x1ff);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar3 + 0x1d8) +
                                    (ulonglong)((uint)param_1 >> 9) * 8) + uVar22 * 2) - 1U)) {
    return Failed_NotAnEdge;
  }
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8);
  uVar5 = *(ulonglong *)(lVar4 + 8 + uVar22 * 0x10);
  local_188 = *(undefined1 (*) [16])(lVar4 + uVar22 * 0x10);
  uVar7 = local_188._0_4_;
  local_res20 = *(longlong *)(lVar3 + 0x130);
  uVar17 = (ulonglong)((uint)uVar5 & 0x1ff);
  uVar22 = local_188._0_8_;
  lVar3 = *(longlong *)(local_res20 + ((uVar5 & 0xffffffff) >> 9) * 8);
  uVar28 = local_188._4_4_;
  local_1c0._0_8_ = *(undefined8 *)(lVar3 + uVar17 * 0xc);
  local_1c0._s_0.C = *(int *)(lVar3 + 8 + uVar17 * 0xc);
  local_1f8 = uVar5 >> 0x20;
  local_200 = uVar5;
  local_res8[0] =
       IndexUtil::FindTriOtherVtx<int,UE::Geometry::FIndex3i>
                 (uVar7,uVar28,(FIndex3i *)&local_1c0._s_0);
  uVar25 = (uint)(uVar5 >> 0x20);
  if (uVar25 == 0xffffffff) {
    local_res10 = -1;
  }
  else {
    lVar3 = *(longlong *)(local_res20 + (uVar5 >> 0x29) * 8);
    local_1b0._0_8_ = *(undefined8 *)(lVar3 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
    local_1b0._s_0.C = *(int *)(lVar3 + 8 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
    local_res10 = IndexUtil::FindTriOtherVtx<int,UE::Geometry::FIndex3i>
                            (uVar7,uVar28,(FIndex3i *)&local_1b0._s_0);
  }
  lVar3 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
  lVar4 = *(longlong *)(lVar3 + ((uVar22 & 0xffffffff) >> 9) * 8);
  pdVar20 = (double *)(lVar4 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
  dVar8 = *pdVar20;
  dVar30 = pdVar20[1];
  dVar32 = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
  lVar3 = *(longlong *)(lVar3 + (uVar22 >> 0x29) * 8);
  pdVar20 = (double *)(lVar3 + (ulonglong)(uVar28 & 0x1ff) * 0x18);
  dVar10 = *pdVar20;
  dVar11 = pdVar20[1];
  dVar31 = *(double *)(lVar3 + 0x10 + (ulonglong)(uVar28 & 0x1ff) * 0x18);
  if (this->MinEdgeLength * this->MinEdgeLength <
      (dVar30 - dVar11) * (dVar30 - dVar11) + (dVar8 - dVar10) * (dVar8 - dVar10) +
      (dVar32 - dVar31) * (dVar32 - dVar31)) {
    return Ignored_EdgeTooLong;
  }
  local_148 = dVar8;
  dStack_140 = dVar30;
  local_138 = dVar32;
  local_130 = dVar10;
  dStack_128 = dVar11;
  local_120 = dVar31;
  (**(code **)(*(longlong *)this + 0x118))(this);
  local_208[0] = 0xffffffff;
  bVar13 = CanCollapseEdge(this,param_1,uVar7,uVar28,local_res8[0],local_res10,(int)local_200,uVar25
                           ,(int *)local_208);
  uVar25 = local_208[0];
  if (!bVar13) {
    return Ignored_Constrained;
  }
  local_res8[0] = this->CollapseMode;
  uVar26 = uVar25;
  if ((this->bPreserveBoundaryShape != false) && (this->bHaveBoundary != false)) {
    if (local_208[0] != 0xffffffff) {
      bVar13 = IsBoundaryVertex(this,uVar28);
      if ((bVar13) && (uVar25 != uVar28)) {
        return Ignored_Constrained;
      }
      bVar13 = IsBoundaryVertex(this,uVar7);
      if ((bVar13) && (uVar25 != uVar7)) {
        return Ignored_Constrained;
      }
    }
    if (((local_res8[0] != MinimalExistingVertexError) &&
        (bVar13 = IsBoundaryVertex(this,uVar28), uVar26 = uVar28, !bVar13)) &&
       (bVar13 = IsBoundaryVertex(this,uVar7), uVar26 = uVar25, bVar13)) {
      uVar26 = uVar7;
    }
  }
  if (((param_4 == uVar7) || (uVar25 = uVar26, param_4 == uVar28)) &&
     ((uVar25 = param_4, uVar26 != 0xffffffff && (uVar26 != param_4)))) {
    return Ignored_Constrained;
  }
  bVar13 = false;
  local_res20 = CONCAT44(local_res20._4_4_,uVar7);
  uVar26 = uVar7;
  uVar23 = uVar28;
  local_res10 = uVar28;
  if (uVar25 == 0xffffffff) {
LAB_14c71d359:
    pTVar27 = local_res18;
    if (bVar13) {
      pdVar20 = &local_148;
      if (uVar25 != uVar7) {
        pdVar20 = &local_130;
      }
      EVar2 = this->GeometricErrorConstraint;
      dVar31 = pdVar20[1];
      dVar32 = pdVar20[2];
      (local_res18->field0_0x0)._s_0.X = *pdVar20;
      (local_res18->field0_0x0)._s_0.Y = dVar31;
      (local_res18->field0_0x0)._s_0.Z = dVar32;
      dVar32 = 0.0;
      if ((EVar2 != None) &&
         (bVar13 = CheckIfCollapseWithinGeometricTolerance
                             (this,uVar23,uVar26,local_res18,(int)local_200,(int)local_1f8),
         dVar32 = 0.0, !bVar13)) goto LAB_14c71d741;
      goto LAB_14c71d5bd;
    }
  }
  else {
    uVar5 = uVar22;
    if (uVar25 == uVar7) {
      uVar5 = uVar22 >> 0x20;
    }
    uVar26 = (uint)uVar5;
    local_res20 = CONCAT44(local_res20._4_4_,uVar26);
    uVar23 = uVar25;
    local_res10 = uVar25;
    if (this->field_0xc8 == '\0') goto LAB_14c71d359;
    if (local_res8[0] == MinimalExistingVertexError) {
LAB_14c71d357:
      bVar13 = true;
      goto LAB_14c71d359;
    }
    pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                        ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
    pFVar19 = FMeshConstraints::GetVertexConstraint(pFVar18,&local_100,uVar25);
    if (pFVar19->bCanMove == false) {
      uVar26 = (uint)local_res20;
      goto LAB_14c71d357;
    }
  }
  pTVar27 = local_res18;
  pdVar20 = (double *)(**(code **)(*(longlong *)this + 200))(this,local_f0,local_res10,local_res18);
  dVar12 = __real_3fe0000000000000;
  local_1f0 = (longlong)(int)local_res10;
  dVar9 = pdVar20[1];
  local_208[0] = local_res10 >> 9;
  (pTVar27->field0_0x0)._s_0.X = *pdVar20;
  (pTVar27->field0_0x0)._s_0.Y = dVar9;
  (pTVar27->field0_0x0)._s_0.Z = pdVar20[2];
  dVar9 = __real_3ff0000000000000;
  dVar32 = SQRT((dVar11 - dVar30) * (dVar11 - dVar30) + (dVar10 - dVar8) * (dVar10 - dVar8) +
                (dVar31 - dVar32) * (dVar31 - dVar32));
  dVar31 = dVar12;
  if (((dVar32 < __real_3e45798ee2308c3a) ||
      (lVar3 = *(longlong *)
                (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) + (ulonglong)local_208[0] * 8),
      pdVar20 = (double *)(lVar3 + (ulonglong)(local_res10 & 0x1ff) * 0x18),
      dVar30 = *(double *)(lVar3 + 0x10 + (ulonglong)(local_res10 & 0x1ff) * 0x18) -
               (pTVar27->field0_0x0)._s_0.Z, dVar31 = *pdVar20 - (pTVar27->field0_0x0)._s_0.X,
      dVar8 = pdVar20[1] - (pTVar27->field0_0x0)._s_0.Y,
      dVar31 = SQRT(dVar8 * dVar8 + dVar31 * dVar31 + dVar30 * dVar30) *
               (__real_3ff0000000000000 / dVar32), dVar32 = 0.0, 0.0 <= dVar31)) &&
     (dVar32 = dVar31, __real_3ff0000000000000 <= dVar31)) {
    dVar32 = __real_3ff0000000000000;
  }
  local_1d0 = &(pTVar27->field0_0x0)._s_0.Z;
  local_1d8 = &(pTVar27->field0_0x0)._s_0.Y;
  if (local_res8[0] == MinimalExistingVertexError) {
    auVar33._0_8_ = dVar32 + dVar12;
    auVar33._8_8_ = 0;
    auVar33 = roundpd(auVar33,auVar33,1);
    dVar32 = auVar33._0_8_;
  }
  if (this->GeometricErrorConstraint != None) {
    bVar13 = CheckIfCollapseWithinGeometricTolerance
                       (this,local_res10,(uint)local_res20,pTVar27,(int)local_200,(int)local_1f8);
    if (!bVar13) {
      dVar9 = dVar9 - dVar32;
      uVar22 = (ulonglong)((uint)local_1f0 & 0x1ff);
      lVar3 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
      lVar4 = *(longlong *)(lVar3 + (ulonglong)local_208[0] * 8);
      pdVar20 = (double *)(lVar4 + uVar22 * 0x18);
      local_160 = *pdVar20;
      dStack_158 = pdVar20[1];
      local_150 = *(double *)(lVar4 + 0x10 + uVar22 * 0x18);
      lVar3 = *(longlong *)(lVar3 + (ulonglong)((uint)local_res20 >> 9) * 8);
      pdVar20 = (double *)(lVar3 + (ulonglong)((uint)local_res20 & 0x1ff) * 0x18);
      dVar31 = pdVar20[1];
      local_108 = *(double *)(lVar3 + 0x10 + (ulonglong)((uint)local_res20 & 0x1ff) * 0x18);
      (pTVar27->field0_0x0)._s_0.X = dVar9 * local_160 + *pdVar20 * dVar32;
      *local_1d8 = dVar9 * dStack_158 + dVar31 * dVar32;
      *local_1d0 = dVar9 * local_150 + local_108 * dVar32;
      local_200 = local_188._8_8_;
      bVar13 = CheckIfCollapseWithinGeometricTolerance
                         (this,local_res10,(uint)local_res20,pTVar27,local_188._8_4_,(int)local_1f8)
      ;
      if (!bVar13) {
LAB_14c71d741:
        (**(code **)(*(longlong *)this + 0x120))(this);
        return Failed_GeometricDeviation;
      }
      uVar22 = local_188._0_8_;
    }
  }
LAB_14c71d5bd:
  iVar29 = (int)uVar22;
  bVar13 = FMeshRefinerBase::CheckIfCollapseCreatesFlipOrInvalid
                     ((FMeshRefinerBase *)this,iVar29,uVar28,pTVar27,(int)local_200,(int)local_1f8);
  if ((bVar13) ||
     (bVar13 = FMeshRefinerBase::CheckIfCollapseCreatesFlipOrInvalid
                         ((FMeshRefinerBase *)this,uVar28,iVar29,pTVar27,(int)local_200,
                          (int)local_1f8), bVar13)) {
    (**(code **)(*(longlong *)this + 0x120))(this);
    return Ignored_CreatesFlip;
  }
  if ((this->bPreventTinyTriangles != false) &&
     ((bVar13 = FMeshRefinerBase::CheckIfCollapseCreatesTinyTriangle
                          ((FMeshRefinerBase *)this,iVar29,uVar28,pTVar27,(int)local_200,
                           (int)local_1f8), bVar13 ||
      (bVar13 = FMeshRefinerBase::CheckIfCollapseCreatesTinyTriangle
                          ((FMeshRefinerBase *)this,uVar28,iVar29,pTVar27,(int)local_200,
                           (int)local_1f8), bVar13)))) {
    (**(code **)(*(longlong *)this + 0x120))(this);
    return Ignored_CreatesTinyTriangle;
  }
  uVar22 = local_res20;
  uVar7 = local_res10;
  this->COUNT_COLLAPSES = this->COUNT_COLLAPSES + 1;
  iVar29 = (uint)local_res20;
  iVar15 = (**(code **)(**(longlong **)&this->field_0x8 + 0x70))
                     (*(longlong **)&this->field_0x8,local_res10,local_res20 & 0xffffffff,dVar32,
                      param_3);
  if (iVar15 == 0) {
    FDynamicMesh3::SetVertex(*(FDynamicMesh3 **)&this->field_0x8,uVar7,pTVar27,true);
    if (this->field_0xc8 != '\0') {
      pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                          ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
      local_res8[0] = param_1;
      if (*(int *)&(pFVar18->Edges).field_0x8 != *(int *)&(pFVar18->Edges).field_0x34) {
        TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                           *)pFVar18,param_1,(int *)local_res8);
      }
      local_1c8 = this;
      pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                          ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
      bVar13 = FMeshConstraints::HasEdgeConstraint
                         (pFVar18,(param_3->RemovedEdges).field0_0x0._s_0.A);
      if (bVar13) {
        pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                            ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
        local_1e8[0] = (param_3->KeptEdges).field0_0x0._s_0.A;
        if (*(int *)&(pFVar18->Edges).field_0x8 != *(int *)&(pFVar18->Edges).field_0x34) {
          TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                             *)pFVar18,local_1e8[0],(int *)local_1e8);
        }
        pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                            ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
        local_1e0[0] = (param_3->RemovedEdges).field0_0x0._s_0.A;
        if (*(int *)&(pFVar18->Edges).field_0x8 != *(int *)&(pFVar18->Edges).field_0x34) {
          TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                             *)pFVar18,local_1e0[0],(int *)local_1e0);
        }
        `UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::CollapseEdge'::
        __l84::<lambda_1>::operator()(&local_1c8,(param_3->KeptEdges).field0_0x0._s_0.A);
      }
      if ((param_3->RemovedEdges).field0_0x0._s_0.B != -1) {
        pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                            ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
        bVar13 = FMeshConstraints::HasEdgeConstraint
                           (pFVar18,(param_3->RemovedEdges).field0_0x0._s_0.B);
        if (bVar13) {
          pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                              ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
          uVar25 = (param_3->KeptEdges).field0_0x0._s_0.B;
          local_1f0 = CONCAT44(local_1f0._4_4_,uVar25);
          if (*(int *)&(pFVar18->Edges).field_0x8 != *(int *)&(pFVar18->Edges).field_0x34) {
            TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                               *)pFVar18,uVar25,(int *)&local_1f0);
          }
          pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                              ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
          uVar25 = (param_3->RemovedEdges).field0_0x0._s_0.B;
          local_200 = CONCAT44(local_200._4_4_,uVar25);
          if (*(int *)&(pFVar18->Edges).field_0x8 != *(int *)&(pFVar18->Edges).field_0x34) {
            TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                               *)pFVar18,uVar25,(int *)&local_200);
          }
          `UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::CollapseEdge'::
          __l84::<lambda_1>::operator()(&local_1c8,(param_3->KeptEdges).field0_0x0._s_0.B);
        }
      }
      pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                          ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
      TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
      ::Remove((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                *)&pFVar18->Vertices,iVar29);
    }
    (**(code **)(*(longlong *)this + 0xa8))(this,param_1,uVar7,uVar22 & 0xffffffff,param_3);
    (**(code **)(*(longlong *)this + 0x28))(this,0);
    EVar14 = Ok_Collapsed;
  }
  else {
    EVar14 = Failed_OpNotSuccessful;
    if (iVar15 == 0x1a) {
      EVar14 = Failed_IsolatedTriangle;
    }
  }
  (**(code **)(*(longlong *)this + 0x120))(this);
  return EVar14;
}

// CollapseEdge @ 14c71d980

/* WARNING: Type propagation algorithm not settling */

ESimplificationResult __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::CollapseEdge
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,int param_1,
          TVector<double> *param_2,FEdgeCollapseInfo *param_3,int param_4)

{
  int *piVar1;
  EGeometricErrorCriteria EVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  code *pcVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  ESimplificationResult EVar14;
  int iVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  FMeshConstraints *pFVar18;
  FVertexConstraint *pFVar19;
  double *pdVar20;
  int *piVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined1 *puVar24;
  uint uVar25;
  uint uVar26;
  TVector<double> *pTVar27;
  uint uVar28;
  int iVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  ESimplificationCollapseModes local_res8 [2];
  uint local_res10;
  TVector<double> *local_res18;
  ulonglong local_res20;
  uint local_208 [2];
  ulonglong local_200;
  ulonglong local_1f8;
  longlong local_1f0;
  uint local_1e8 [2];
  uint local_1e0 [2];
  double *local_1d8;
  double *local_1d0;
  TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *local_1c8;
  FIndex3i_u_0 local_1c0;
  FIndex3i_u_0 local_1b0;
  ulonglong local_1a0;
  ulonglong uStack_198;
  ulonglong local_190;
  undefined1 local_188 [16];
  undefined4 local_178 [2];
  undefined8 local_170;
  undefined4 local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  double local_108;
  FVertexConstraint local_100;
  undefined1 local_f0 [176];
  
  param_3->KeptVertex = -1;
  piVar21 = *(int **)&this->field_0x118;
  piVar1 = piVar21 + *(int *)&this->field_0x120;
  for (; local_res18 = param_2, piVar21 != piVar1; piVar21 = piVar21 + 1) {
    if (*piVar21 == param_1) {
      bVar13 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6822847689076506224>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\MeshRefinerBase.cpp"
                          ,400,"false");
      if (bVar13) {
        pcVar6 = (code *)swi(3);
        EVar14 = (*pcVar6)();
        return EVar14;
      }
      break;
    }
  }
  if (this->field_0xc8 == '\0') {
    local_178[0] = 0;
    puVar16 = (ulonglong *)local_178;
    local_170 = 0;
    local_168 = 0xffffffff;
  }
  else {
    if (*(int *)&this->field_0x18 != *(int *)&this->field_0x44) {
      puVar24 = *(undefined1 **)&this->field_0x50;
      if (*(undefined1 **)&this->field_0x50 == (undefined1 *)0x0) {
        puVar24 = &this->field_0x48;
      }
      iVar29 = *(int *)(puVar24 + (ulonglong)(*(int *)&this->field_0x58 - 1U & param_1) * 4);
      if (iVar29 != -1) {
        do {
          lVar3 = *(longlong *)&this->field_0x10 + (longlong)iVar29 * 0x28;
          if (*(int *)(*(longlong *)&this->field_0x10 + (longlong)iVar29 * 0x28) == param_1) {
            puVar16 = (ulonglong *)(lVar3 + 8);
            if (lVar3 == 0) {
              puVar16 = (ulonglong *)0x0;
            }
            if (puVar16 != (ulonglong *)0x0) {
              local_1a0 = *puVar16;
              uStack_198 = puVar16[1];
              local_190 = puVar16[2];
              goto LAB_14c71da7a;
            }
            break;
          }
          iVar29 = *(int *)(lVar3 + 0x20);
        } while (iVar29 != -1);
      }
    }
    local_1a0 = local_1a0 & 0xffffffff00000000;
    uStack_198 = 0;
    local_190 = CONCAT44(local_190._4_4_,0xffffffff);
LAB_14c71da7a:
    puVar16 = &local_1a0;
  }
  local_108 = (double)puVar16[2];
  if ((((byte)(uint)*puVar16 & 7) == 7) || (((uint)*puVar16 & 4) != 0)) {
    return Ignored_EdgeIsFullyConstrained;
  }
  lVar3 = *(longlong *)&this->field_0x8;
  if ((param_1 < 0) || (*(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4) <= param_1)) {
    return Failed_NotAnEdge;
  }
  uVar22 = (ulonglong)(param_1 & 0x1ff);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar3 + 0x1d8) +
                                    (ulonglong)((uint)param_1 >> 9) * 8) + uVar22 * 2) - 1U)) {
    return Failed_NotAnEdge;
  }
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8);
  uVar5 = *(ulonglong *)(lVar4 + 8 + uVar22 * 0x10);
  local_188 = *(undefined1 (*) [16])(lVar4 + uVar22 * 0x10);
  uVar7 = local_188._0_4_;
  local_res20 = *(longlong *)(lVar3 + 0x130);
  uVar17 = (ulonglong)((uint)uVar5 & 0x1ff);
  uVar22 = local_188._0_8_;
  lVar3 = *(longlong *)(local_res20 + ((uVar5 & 0xffffffff) >> 9) * 8);
  uVar28 = local_188._4_4_;
  local_1c0._0_8_ = *(undefined8 *)(lVar3 + uVar17 * 0xc);
  local_1c0._s_0.C = *(int *)(lVar3 + 8 + uVar17 * 0xc);
  local_1f8 = uVar5 >> 0x20;
  local_200 = uVar5;
  local_res8[0] =
       IndexUtil::FindTriOtherVtx<int,UE::Geometry::FIndex3i>
                 (uVar7,uVar28,(FIndex3i *)&local_1c0._s_0);
  uVar25 = (uint)(uVar5 >> 0x20);
  if (uVar25 == 0xffffffff) {
    local_res10 = -1;
  }
  else {
    lVar3 = *(longlong *)(local_res20 + (uVar5 >> 0x29) * 8);
    local_1b0._0_8_ = *(undefined8 *)(lVar3 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
    local_1b0._s_0.C = *(int *)(lVar3 + 8 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
    local_res10 = IndexUtil::FindTriOtherVtx<int,UE::Geometry::FIndex3i>
                            (uVar7,uVar28,(FIndex3i *)&local_1b0._s_0);
  }
  lVar3 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
  lVar4 = *(longlong *)(lVar3 + ((uVar22 & 0xffffffff) >> 9) * 8);
  pdVar20 = (double *)(lVar4 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
  dVar8 = *pdVar20;
  dVar30 = pdVar20[1];
  dVar32 = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
  lVar3 = *(longlong *)(lVar3 + (uVar22 >> 0x29) * 8);
  pdVar20 = (double *)(lVar3 + (ulonglong)(uVar28 & 0x1ff) * 0x18);
  dVar10 = *pdVar20;
  dVar11 = pdVar20[1];
  dVar31 = *(double *)(lVar3 + 0x10 + (ulonglong)(uVar28 & 0x1ff) * 0x18);
  if (this->MinEdgeLength * this->MinEdgeLength <
      (dVar30 - dVar11) * (dVar30 - dVar11) + (dVar8 - dVar10) * (dVar8 - dVar10) +
      (dVar32 - dVar31) * (dVar32 - dVar31)) {
    return Ignored_EdgeTooLong;
  }
  local_148 = dVar8;
  dStack_140 = dVar30;
  local_138 = dVar32;
  local_130 = dVar10;
  dStack_128 = dVar11;
  local_120 = dVar31;
  (**(code **)(*(longlong *)this + 0x118))(this);
  local_208[0] = 0xffffffff;
  bVar13 = CanCollapseEdge(this,param_1,uVar7,uVar28,local_res8[0],local_res10,(int)local_200,uVar25
                           ,(int *)local_208);
  uVar25 = local_208[0];
  if (!bVar13) {
    return Ignored_Constrained;
  }
  local_res8[0] = this->CollapseMode;
  uVar26 = uVar25;
  if ((this->bPreserveBoundaryShape != false) && (this->bHaveBoundary != false)) {
    if (local_208[0] != 0xffffffff) {
      bVar13 = IsBoundaryVertex(this,uVar28);
      if ((bVar13) && (uVar25 != uVar28)) {
        return Ignored_Constrained;
      }
      bVar13 = IsBoundaryVertex(this,uVar7);
      if ((bVar13) && (uVar25 != uVar7)) {
        return Ignored_Constrained;
      }
    }
    if (((local_res8[0] != MinimalExistingVertexError) &&
        (bVar13 = IsBoundaryVertex(this,uVar28), uVar26 = uVar28, !bVar13)) &&
       (bVar13 = IsBoundaryVertex(this,uVar7), uVar26 = uVar25, bVar13)) {
      uVar26 = uVar7;
    }
  }
  if (((param_4 == uVar7) || (uVar25 = uVar26, param_4 == uVar28)) &&
     ((uVar25 = param_4, uVar26 != 0xffffffff && (uVar26 != param_4)))) {
    return Ignored_Constrained;
  }
  bVar13 = false;
  local_res20 = CONCAT44(local_res20._4_4_,uVar7);
  uVar26 = uVar7;
  uVar23 = uVar28;
  local_res10 = uVar28;
  if (uVar25 == 0xffffffff) {
LAB_14c71de89:
    pTVar27 = local_res18;
    if (bVar13) {
      pdVar20 = &local_148;
      if (uVar25 != uVar7) {
        pdVar20 = &local_130;
      }
      EVar2 = this->GeometricErrorConstraint;
      dVar31 = pdVar20[1];
      dVar32 = pdVar20[2];
      (local_res18->field0_0x0)._s_0.X = *pdVar20;
      (local_res18->field0_0x0)._s_0.Y = dVar31;
      (local_res18->field0_0x0)._s_0.Z = dVar32;
      dVar32 = 0.0;
      if ((EVar2 != None) &&
         (bVar13 = CheckIfCollapseWithinGeometricTolerance
                             (this,uVar23,uVar26,local_res18,(int)local_200,(int)local_1f8),
         dVar32 = 0.0, !bVar13)) goto LAB_14c71e271;
      goto LAB_14c71e0ed;
    }
  }
  else {
    uVar5 = uVar22;
    if (uVar25 == uVar7) {
      uVar5 = uVar22 >> 0x20;
    }
    uVar26 = (uint)uVar5;
    local_res20 = CONCAT44(local_res20._4_4_,uVar26);
    uVar23 = uVar25;
    local_res10 = uVar25;
    if (this->field_0xc8 == '\0') goto LAB_14c71de89;
    if (local_res8[0] == MinimalExistingVertexError) {
LAB_14c71de87:
      bVar13 = true;
      goto LAB_14c71de89;
    }
    pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                        ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
    pFVar19 = FMeshConstraints::GetVertexConstraint(pFVar18,&local_100,uVar25);
    if (pFVar19->bCanMove == false) {
      uVar26 = (uint)local_res20;
      goto LAB_14c71de87;
    }
  }
  pTVar27 = local_res18;
  pdVar20 = (double *)(**(code **)(*(longlong *)this + 200))(this,local_f0,local_res10,local_res18);
  dVar12 = __real_3fe0000000000000;
  local_1f0 = (longlong)(int)local_res10;
  dVar9 = pdVar20[1];
  local_208[0] = local_res10 >> 9;
  (pTVar27->field0_0x0)._s_0.X = *pdVar20;
  (pTVar27->field0_0x0)._s_0.Y = dVar9;
  (pTVar27->field0_0x0)._s_0.Z = pdVar20[2];
  dVar9 = __real_3ff0000000000000;
  dVar32 = SQRT((dVar11 - dVar30) * (dVar11 - dVar30) + (dVar10 - dVar8) * (dVar10 - dVar8) +
                (dVar31 - dVar32) * (dVar31 - dVar32));
  dVar31 = dVar12;
  if (((dVar32 < __real_3e45798ee2308c3a) ||
      (lVar3 = *(longlong *)
                (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) + (ulonglong)local_208[0] * 8),
      pdVar20 = (double *)(lVar3 + (ulonglong)(local_res10 & 0x1ff) * 0x18),
      dVar30 = *(double *)(lVar3 + 0x10 + (ulonglong)(local_res10 & 0x1ff) * 0x18) -
               (pTVar27->field0_0x0)._s_0.Z, dVar31 = *pdVar20 - (pTVar27->field0_0x0)._s_0.X,
      dVar8 = pdVar20[1] - (pTVar27->field0_0x0)._s_0.Y,
      dVar31 = SQRT(dVar8 * dVar8 + dVar31 * dVar31 + dVar30 * dVar30) *
               (__real_3ff0000000000000 / dVar32), dVar32 = 0.0, 0.0 <= dVar31)) &&
     (dVar32 = dVar31, __real_3ff0000000000000 <= dVar31)) {
    dVar32 = __real_3ff0000000000000;
  }
  local_1d0 = &(pTVar27->field0_0x0)._s_0.Z;
  local_1d8 = &(pTVar27->field0_0x0)._s_0.Y;
  if (local_res8[0] == MinimalExistingVertexError) {
    auVar33._0_8_ = dVar32 + dVar12;
    auVar33._8_8_ = 0;
    auVar33 = roundpd(auVar33,auVar33,1);
    dVar32 = auVar33._0_8_;
  }
  if (this->GeometricErrorConstraint != None) {
    bVar13 = CheckIfCollapseWithinGeometricTolerance
                       (this,local_res10,(uint)local_res20,pTVar27,(int)local_200,(int)local_1f8);
    if (!bVar13) {
      dVar9 = dVar9 - dVar32;
      uVar22 = (ulonglong)((uint)local_1f0 & 0x1ff);
      lVar3 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
      lVar4 = *(longlong *)(lVar3 + (ulonglong)local_208[0] * 8);
      pdVar20 = (double *)(lVar4 + uVar22 * 0x18);
      local_160 = *pdVar20;
      dStack_158 = pdVar20[1];
      local_150 = *(double *)(lVar4 + 0x10 + uVar22 * 0x18);
      lVar3 = *(longlong *)(lVar3 + (ulonglong)((uint)local_res20 >> 9) * 8);
      pdVar20 = (double *)(lVar3 + (ulonglong)((uint)local_res20 & 0x1ff) * 0x18);
      dVar31 = pdVar20[1];
      local_108 = *(double *)(lVar3 + 0x10 + (ulonglong)((uint)local_res20 & 0x1ff) * 0x18);
      (pTVar27->field0_0x0)._s_0.X = dVar9 * local_160 + *pdVar20 * dVar32;
      *local_1d8 = dVar9 * dStack_158 + dVar31 * dVar32;
      *local_1d0 = dVar9 * local_150 + local_108 * dVar32;
      local_200 = local_188._8_8_;
      bVar13 = CheckIfCollapseWithinGeometricTolerance
                         (this,local_res10,(uint)local_res20,pTVar27,local_188._8_4_,(int)local_1f8)
      ;
      if (!bVar13) {
LAB_14c71e271:
        (**(code **)(*(longlong *)this + 0x120))(this);
        return Failed_GeometricDeviation;
      }
      uVar22 = local_188._0_8_;
    }
  }
LAB_14c71e0ed:
  iVar29 = (int)uVar22;
  bVar13 = FMeshRefinerBase::CheckIfCollapseCreatesFlipOrInvalid
                     ((FMeshRefinerBase *)this,iVar29,uVar28,pTVar27,(int)local_200,(int)local_1f8);
  if ((bVar13) ||
     (bVar13 = FMeshRefinerBase::CheckIfCollapseCreatesFlipOrInvalid
                         ((FMeshRefinerBase *)this,uVar28,iVar29,pTVar27,(int)local_200,
                          (int)local_1f8), bVar13)) {
    (**(code **)(*(longlong *)this + 0x120))(this);
    return Ignored_CreatesFlip;
  }
  if ((this->bPreventTinyTriangles != false) &&
     ((bVar13 = FMeshRefinerBase::CheckIfCollapseCreatesTinyTriangle
                          ((FMeshRefinerBase *)this,iVar29,uVar28,pTVar27,(int)local_200,
                           (int)local_1f8), bVar13 ||
      (bVar13 = FMeshRefinerBase::CheckIfCollapseCreatesTinyTriangle
                          ((FMeshRefinerBase *)this,uVar28,iVar29,pTVar27,(int)local_200,
                           (int)local_1f8), bVar13)))) {
    (**(code **)(*(longlong *)this + 0x120))(this);
    return Ignored_CreatesTinyTriangle;
  }
  uVar22 = local_res20;
  uVar7 = local_res10;
  this->COUNT_COLLAPSES = this->COUNT_COLLAPSES + 1;
  iVar29 = (uint)local_res20;
  iVar15 = (**(code **)(**(longlong **)&this->field_0x8 + 0x70))
                     (*(longlong **)&this->field_0x8,local_res10,local_res20 & 0xffffffff,dVar32,
                      param_3);
  if (iVar15 == 0) {
    FDynamicMesh3::SetVertex(*(FDynamicMesh3 **)&this->field_0x8,uVar7,pTVar27,true);
    if (this->field_0xc8 != '\0') {
      pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                          ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
      local_res8[0] = param_1;
      if (*(int *)&(pFVar18->Edges).field_0x8 != *(int *)&(pFVar18->Edges).field_0x34) {
        TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                           *)pFVar18,param_1,(int *)local_res8);
      }
      local_1c8 = this;
      pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                          ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
      bVar13 = FMeshConstraints::HasEdgeConstraint
                         (pFVar18,(param_3->RemovedEdges).field0_0x0._s_0.A);
      if (bVar13) {
        pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                            ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
        local_1e8[0] = (param_3->KeptEdges).field0_0x0._s_0.A;
        if (*(int *)&(pFVar18->Edges).field_0x8 != *(int *)&(pFVar18->Edges).field_0x34) {
          TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                             *)pFVar18,local_1e8[0],(int *)local_1e8);
        }
        pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                            ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
        local_1e0[0] = (param_3->RemovedEdges).field0_0x0._s_0.A;
        if (*(int *)&(pFVar18->Edges).field_0x8 != *(int *)&(pFVar18->Edges).field_0x34) {
          TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                             *)pFVar18,local_1e0[0],(int *)local_1e0);
        }
        `UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
        CollapseEdge'::__l84::<lambda_1>::operator()
                  (&local_1c8,(param_3->KeptEdges).field0_0x0._s_0.A);
      }
      if ((param_3->RemovedEdges).field0_0x0._s_0.B != -1) {
        pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                            ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
        bVar13 = FMeshConstraints::HasEdgeConstraint
                           (pFVar18,(param_3->RemovedEdges).field0_0x0._s_0.B);
        if (bVar13) {
          pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                              ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
          uVar25 = (param_3->KeptEdges).field0_0x0._s_0.B;
          local_1f0 = CONCAT44(local_1f0._4_4_,uVar25);
          if (*(int *)&(pFVar18->Edges).field_0x8 != *(int *)&(pFVar18->Edges).field_0x34) {
            TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                               *)pFVar18,uVar25,(int *)&local_1f0);
          }
          pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                              ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
          uVar25 = (param_3->RemovedEdges).field0_0x0._s_0.B;
          local_200 = CONCAT44(local_200._4_4_,uVar25);
          if (*(int *)&(pFVar18->Edges).field_0x8 != *(int *)&(pFVar18->Edges).field_0x34) {
            TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                               *)pFVar18,uVar25,(int *)&local_200);
          }
          `UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
          CollapseEdge'::__l84::<lambda_1>::operator()
                    (&local_1c8,(param_3->KeptEdges).field0_0x0._s_0.B);
        }
      }
      pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                          ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
      TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
      ::Remove((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                *)&pFVar18->Vertices,iVar29);
    }
    (**(code **)(*(longlong *)this + 0xa8))(this,param_1,uVar7,uVar22 & 0xffffffff,param_3);
    (**(code **)(*(longlong *)this + 0x28))(this,0);
    EVar14 = Ok_Collapsed;
  }
  else {
    EVar14 = Failed_OpNotSuccessful;
    if (iVar15 == 0x1a) {
      EVar14 = Failed_IsolatedTriangle;
    }
  }
  (**(code **)(*(longlong *)this + 0x120))(this);
  return EVar14;
}

// CollapseEdge @ 14c71e4b0

/* WARNING: Type propagation algorithm not settling */

ESimplificationResult __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::CollapseEdge
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,int param_1,
          TVector<double> *param_2,FEdgeCollapseInfo *param_3,int param_4)

{
  int *piVar1;
  EGeometricErrorCriteria EVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  code *pcVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  ESimplificationResult EVar14;
  int iVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  FMeshConstraints *pFVar18;
  FVertexConstraint *pFVar19;
  double *pdVar20;
  int *piVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined1 *puVar24;
  uint uVar25;
  uint uVar26;
  TVector<double> *pTVar27;
  uint uVar28;
  int iVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  ESimplificationCollapseModes local_res8 [2];
  uint local_res10;
  TVector<double> *local_res18;
  ulonglong local_res20;
  uint local_208 [2];
  ulonglong local_200;
  ulonglong local_1f8;
  longlong local_1f0;
  uint local_1e8 [2];
  uint local_1e0 [2];
  double *local_1d8;
  double *local_1d0;
  TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *local_1c8;
  FIndex3i_u_0 local_1c0;
  FIndex3i_u_0 local_1b0;
  ulonglong local_1a0;
  ulonglong uStack_198;
  ulonglong local_190;
  undefined1 local_188 [16];
  undefined4 local_178 [2];
  undefined8 local_170;
  undefined4 local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  double local_108;
  FVertexConstraint local_100;
  undefined1 local_f0 [176];
  
  param_3->KeptVertex = -1;
  piVar21 = *(int **)&this->field_0x118;
  piVar1 = piVar21 + *(int *)&this->field_0x120;
  for (; local_res18 = param_2, piVar21 != piVar1; piVar21 = piVar21 + 1) {
    if (*piVar21 == param_1) {
      bVar13 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6822847689076506224>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\MeshRefinerBase.cpp"
                          ,400,"false");
      if (bVar13) {
        pcVar6 = (code *)swi(3);
        EVar14 = (*pcVar6)();
        return EVar14;
      }
      break;
    }
  }
  if (this->field_0xc8 == '\0') {
    local_178[0] = 0;
    puVar16 = (ulonglong *)local_178;
    local_170 = 0;
    local_168 = 0xffffffff;
  }
  else {
    if (*(int *)&this->field_0x18 != *(int *)&this->field_0x44) {
      puVar24 = *(undefined1 **)&this->field_0x50;
      if (*(undefined1 **)&this->field_0x50 == (undefined1 *)0x0) {
        puVar24 = &this->field_0x48;
      }
      iVar29 = *(int *)(puVar24 + (ulonglong)(*(int *)&this->field_0x58 - 1U & param_1) * 4);
      if (iVar29 != -1) {
        do {
          lVar3 = *(longlong *)&this->field_0x10 + (longlong)iVar29 * 0x28;
          if (*(int *)(*(longlong *)&this->field_0x10 + (longlong)iVar29 * 0x28) == param_1) {
            puVar16 = (ulonglong *)(lVar3 + 8);
            if (lVar3 == 0) {
              puVar16 = (ulonglong *)0x0;
            }
            if (puVar16 != (ulonglong *)0x0) {
              local_1a0 = *puVar16;
              uStack_198 = puVar16[1];
              local_190 = puVar16[2];
              goto LAB_14c71e5aa;
            }
            break;
          }
          iVar29 = *(int *)(lVar3 + 0x20);
        } while (iVar29 != -1);
      }
    }
    local_1a0 = local_1a0 & 0xffffffff00000000;
    uStack_198 = 0;
    local_190 = CONCAT44(local_190._4_4_,0xffffffff);
LAB_14c71e5aa:
    puVar16 = &local_1a0;
  }
  local_108 = (double)puVar16[2];
  if ((((byte)(uint)*puVar16 & 7) == 7) || (((uint)*puVar16 & 4) != 0)) {
    return Ignored_EdgeIsFullyConstrained;
  }
  lVar3 = *(longlong *)&this->field_0x8;
  if ((param_1 < 0) || (*(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4) <= param_1)) {
    return Failed_NotAnEdge;
  }
  uVar22 = (ulonglong)(param_1 & 0x1ff);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar3 + 0x1d8) +
                                    (ulonglong)((uint)param_1 >> 9) * 8) + uVar22 * 2) - 1U)) {
    return Failed_NotAnEdge;
  }
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8);
  uVar5 = *(ulonglong *)(lVar4 + 8 + uVar22 * 0x10);
  local_188 = *(undefined1 (*) [16])(lVar4 + uVar22 * 0x10);
  uVar7 = local_188._0_4_;
  local_res20 = *(longlong *)(lVar3 + 0x130);
  uVar17 = (ulonglong)((uint)uVar5 & 0x1ff);
  uVar22 = local_188._0_8_;
  lVar3 = *(longlong *)(local_res20 + ((uVar5 & 0xffffffff) >> 9) * 8);
  uVar28 = local_188._4_4_;
  local_1c0._0_8_ = *(undefined8 *)(lVar3 + uVar17 * 0xc);
  local_1c0._s_0.C = *(int *)(lVar3 + 8 + uVar17 * 0xc);
  local_1f8 = uVar5 >> 0x20;
  local_200 = uVar5;
  local_res8[0] =
       IndexUtil::FindTriOtherVtx<int,UE::Geometry::FIndex3i>
                 (uVar7,uVar28,(FIndex3i *)&local_1c0._s_0);
  uVar25 = (uint)(uVar5 >> 0x20);
  if (uVar25 == 0xffffffff) {
    local_res10 = -1;
  }
  else {
    lVar3 = *(longlong *)(local_res20 + (uVar5 >> 0x29) * 8);
    local_1b0._0_8_ = *(undefined8 *)(lVar3 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
    local_1b0._s_0.C = *(int *)(lVar3 + 8 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
    local_res10 = IndexUtil::FindTriOtherVtx<int,UE::Geometry::FIndex3i>
                            (uVar7,uVar28,(FIndex3i *)&local_1b0._s_0);
  }
  lVar3 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
  lVar4 = *(longlong *)(lVar3 + ((uVar22 & 0xffffffff) >> 9) * 8);
  pdVar20 = (double *)(lVar4 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
  dVar8 = *pdVar20;
  dVar30 = pdVar20[1];
  dVar32 = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
  lVar3 = *(longlong *)(lVar3 + (uVar22 >> 0x29) * 8);
  pdVar20 = (double *)(lVar3 + (ulonglong)(uVar28 & 0x1ff) * 0x18);
  dVar10 = *pdVar20;
  dVar11 = pdVar20[1];
  dVar31 = *(double *)(lVar3 + 0x10 + (ulonglong)(uVar28 & 0x1ff) * 0x18);
  if (this->MinEdgeLength * this->MinEdgeLength <
      (dVar30 - dVar11) * (dVar30 - dVar11) + (dVar8 - dVar10) * (dVar8 - dVar10) +
      (dVar32 - dVar31) * (dVar32 - dVar31)) {
    return Ignored_EdgeTooLong;
  }
  local_148 = dVar8;
  dStack_140 = dVar30;
  local_138 = dVar32;
  local_130 = dVar10;
  dStack_128 = dVar11;
  local_120 = dVar31;
  (**(code **)(*(longlong *)this + 0x118))(this);
  local_208[0] = 0xffffffff;
  bVar13 = CanCollapseEdge(this,param_1,uVar7,uVar28,local_res8[0],local_res10,(int)local_200,uVar25
                           ,(int *)local_208);
  uVar25 = local_208[0];
  if (!bVar13) {
    return Ignored_Constrained;
  }
  local_res8[0] = this->CollapseMode;
  uVar26 = uVar25;
  if ((this->bPreserveBoundaryShape != false) && (this->bHaveBoundary != false)) {
    if (local_208[0] != 0xffffffff) {
      bVar13 = IsBoundaryVertex(this,uVar28);
      if ((bVar13) && (uVar25 != uVar28)) {
        return Ignored_Constrained;
      }
      bVar13 = IsBoundaryVertex(this,uVar7);
      if ((bVar13) && (uVar25 != uVar7)) {
        return Ignored_Constrained;
      }
    }
    if (((local_res8[0] != MinimalExistingVertexError) &&
        (bVar13 = IsBoundaryVertex(this,uVar28), uVar26 = uVar28, !bVar13)) &&
       (bVar13 = IsBoundaryVertex(this,uVar7), uVar26 = uVar25, bVar13)) {
      uVar26 = uVar7;
    }
  }
  if (((param_4 == uVar7) || (uVar25 = uVar26, param_4 == uVar28)) &&
     ((uVar25 = param_4, uVar26 != 0xffffffff && (uVar26 != param_4)))) {
    return Ignored_Constrained;
  }
  bVar13 = false;
  local_res20 = CONCAT44(local_res20._4_4_,uVar7);
  uVar26 = uVar7;
  uVar23 = uVar28;
  local_res10 = uVar28;
  if (uVar25 == 0xffffffff) {
LAB_14c71e9b9:
    pTVar27 = local_res18;
    if (bVar13) {
      pdVar20 = &local_148;
      if (uVar25 != uVar7) {
        pdVar20 = &local_130;
      }
      EVar2 = this->GeometricErrorConstraint;
      dVar31 = pdVar20[1];
      dVar32 = pdVar20[2];
      (local_res18->field0_0x0)._s_0.X = *pdVar20;
      (local_res18->field0_0x0)._s_0.Y = dVar31;
      (local_res18->field0_0x0)._s_0.Z = dVar32;
      dVar32 = 0.0;
      if ((EVar2 != None) &&
         (bVar13 = CheckIfCollapseWithinGeometricTolerance
                             (this,uVar23,uVar26,local_res18,(int)local_200,(int)local_1f8),
         dVar32 = 0.0, !bVar13)) goto LAB_14c71eda1;
      goto LAB_14c71ec1d;
    }
  }
  else {
    uVar5 = uVar22;
    if (uVar25 == uVar7) {
      uVar5 = uVar22 >> 0x20;
    }
    uVar26 = (uint)uVar5;
    local_res20 = CONCAT44(local_res20._4_4_,uVar26);
    uVar23 = uVar25;
    local_res10 = uVar25;
    if (this->field_0xc8 == '\0') goto LAB_14c71e9b9;
    if (local_res8[0] == MinimalExistingVertexError) {
LAB_14c71e9b7:
      bVar13 = true;
      goto LAB_14c71e9b9;
    }
    pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                        ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
    pFVar19 = FMeshConstraints::GetVertexConstraint(pFVar18,&local_100,uVar25);
    if (pFVar19->bCanMove == false) {
      uVar26 = (uint)local_res20;
      goto LAB_14c71e9b7;
    }
  }
  pTVar27 = local_res18;
  pdVar20 = (double *)(**(code **)(*(longlong *)this + 200))(this,local_f0,local_res10,local_res18);
  dVar12 = __real_3fe0000000000000;
  local_1f0 = (longlong)(int)local_res10;
  dVar9 = pdVar20[1];
  local_208[0] = local_res10 >> 9;
  (pTVar27->field0_0x0)._s_0.X = *pdVar20;
  (pTVar27->field0_0x0)._s_0.Y = dVar9;
  (pTVar27->field0_0x0)._s_0.Z = pdVar20[2];
  dVar9 = __real_3ff0000000000000;
  dVar32 = SQRT((dVar11 - dVar30) * (dVar11 - dVar30) + (dVar10 - dVar8) * (dVar10 - dVar8) +
                (dVar31 - dVar32) * (dVar31 - dVar32));
  dVar31 = dVar12;
  if (((dVar32 < __real_3e45798ee2308c3a) ||
      (lVar3 = *(longlong *)
                (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) + (ulonglong)local_208[0] * 8),
      pdVar20 = (double *)(lVar3 + (ulonglong)(local_res10 & 0x1ff) * 0x18),
      dVar30 = *(double *)(lVar3 + 0x10 + (ulonglong)(local_res10 & 0x1ff) * 0x18) -
               (pTVar27->field0_0x0)._s_0.Z, dVar31 = *pdVar20 - (pTVar27->field0_0x0)._s_0.X,
      dVar8 = pdVar20[1] - (pTVar27->field0_0x0)._s_0.Y,
      dVar31 = SQRT(dVar8 * dVar8 + dVar31 * dVar31 + dVar30 * dVar30) *
               (__real_3ff0000000000000 / dVar32), dVar32 = 0.0, 0.0 <= dVar31)) &&
     (dVar32 = dVar31, __real_3ff0000000000000 <= dVar31)) {
    dVar32 = __real_3ff0000000000000;
  }
  local_1d0 = &(pTVar27->field0_0x0)._s_0.Z;
  local_1d8 = &(pTVar27->field0_0x0)._s_0.Y;
  if (local_res8[0] == MinimalExistingVertexError) {
    auVar33._0_8_ = dVar32 + dVar12;
    auVar33._8_8_ = 0;
    auVar33 = roundpd(auVar33,auVar33,1);
    dVar32 = auVar33._0_8_;
  }
  if (this->GeometricErrorConstraint != None) {
    bVar13 = CheckIfCollapseWithinGeometricTolerance
                       (this,local_res10,(uint)local_res20,pTVar27,(int)local_200,(int)local_1f8);
    if (!bVar13) {
      dVar9 = dVar9 - dVar32;
      uVar22 = (ulonglong)((uint)local_1f0 & 0x1ff);
      lVar3 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
      lVar4 = *(longlong *)(lVar3 + (ulonglong)local_208[0] * 8);
      pdVar20 = (double *)(lVar4 + uVar22 * 0x18);
      local_160 = *pdVar20;
      dStack_158 = pdVar20[1];
      local_150 = *(double *)(lVar4 + 0x10 + uVar22 * 0x18);
      lVar3 = *(longlong *)(lVar3 + (ulonglong)((uint)local_res20 >> 9) * 8);
      pdVar20 = (double *)(lVar3 + (ulonglong)((uint)local_res20 & 0x1ff) * 0x18);
      dVar31 = pdVar20[1];
      local_108 = *(double *)(lVar3 + 0x10 + (ulonglong)((uint)local_res20 & 0x1ff) * 0x18);
      (pTVar27->field0_0x0)._s_0.X = dVar9 * local_160 + *pdVar20 * dVar32;
      *local_1d8 = dVar9 * dStack_158 + dVar31 * dVar32;
      *local_1d0 = dVar9 * local_150 + local_108 * dVar32;
      local_200 = local_188._8_8_;
      bVar13 = CheckIfCollapseWithinGeometricTolerance
                         (this,local_res10,(uint)local_res20,pTVar27,local_188._8_4_,(int)local_1f8)
      ;
      if (!bVar13) {
LAB_14c71eda1:
        (**(code **)(*(longlong *)this + 0x120))(this);
        return Failed_GeometricDeviation;
      }
      uVar22 = local_188._0_8_;
    }
  }
LAB_14c71ec1d:
  iVar29 = (int)uVar22;
  bVar13 = FMeshRefinerBase::CheckIfCollapseCreatesFlipOrInvalid
                     ((FMeshRefinerBase *)this,iVar29,uVar28,pTVar27,(int)local_200,(int)local_1f8);
  if ((bVar13) ||
     (bVar13 = FMeshRefinerBase::CheckIfCollapseCreatesFlipOrInvalid
                         ((FMeshRefinerBase *)this,uVar28,iVar29,pTVar27,(int)local_200,
                          (int)local_1f8), bVar13)) {
    (**(code **)(*(longlong *)this + 0x120))(this);
    return Ignored_CreatesFlip;
  }
  if ((this->bPreventTinyTriangles != false) &&
     ((bVar13 = FMeshRefinerBase::CheckIfCollapseCreatesTinyTriangle
                          ((FMeshRefinerBase *)this,iVar29,uVar28,pTVar27,(int)local_200,
                           (int)local_1f8), bVar13 ||
      (bVar13 = FMeshRefinerBase::CheckIfCollapseCreatesTinyTriangle
                          ((FMeshRefinerBase *)this,uVar28,iVar29,pTVar27,(int)local_200,
                           (int)local_1f8), bVar13)))) {
    (**(code **)(*(longlong *)this + 0x120))(this);
    return Ignored_CreatesTinyTriangle;
  }
  uVar22 = local_res20;
  uVar7 = local_res10;
  this->COUNT_COLLAPSES = this->COUNT_COLLAPSES + 1;
  iVar29 = (uint)local_res20;
  iVar15 = (**(code **)(**(longlong **)&this->field_0x8 + 0x70))
                     (*(longlong **)&this->field_0x8,local_res10,local_res20 & 0xffffffff,dVar32,
                      param_3);
  if (iVar15 == 0) {
    FDynamicMesh3::SetVertex(*(FDynamicMesh3 **)&this->field_0x8,uVar7,pTVar27,true);
    if (this->field_0xc8 != '\0') {
      pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                          ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
      local_res8[0] = param_1;
      if (*(int *)&(pFVar18->Edges).field_0x8 != *(int *)&(pFVar18->Edges).field_0x34) {
        TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                           *)pFVar18,param_1,(int *)local_res8);
      }
      local_1c8 = this;
      pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                          ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
      bVar13 = FMeshConstraints::HasEdgeConstraint
                         (pFVar18,(param_3->RemovedEdges).field0_0x0._s_0.A);
      if (bVar13) {
        pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                            ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
        local_1e8[0] = (param_3->KeptEdges).field0_0x0._s_0.A;
        if (*(int *)&(pFVar18->Edges).field_0x8 != *(int *)&(pFVar18->Edges).field_0x34) {
          TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                             *)pFVar18,local_1e8[0],(int *)local_1e8);
        }
        pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                            ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
        local_1e0[0] = (param_3->RemovedEdges).field0_0x0._s_0.A;
        if (*(int *)&(pFVar18->Edges).field_0x8 != *(int *)&(pFVar18->Edges).field_0x34) {
          TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                             *)pFVar18,local_1e0[0],(int *)local_1e0);
        }
        `UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
        CollapseEdge'::__l84::<lambda_1>::operator()
                  (&local_1c8,(param_3->KeptEdges).field0_0x0._s_0.A);
      }
      if ((param_3->RemovedEdges).field0_0x0._s_0.B != -1) {
        pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                            ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
        bVar13 = FMeshConstraints::HasEdgeConstraint
                           (pFVar18,(param_3->RemovedEdges).field0_0x0._s_0.B);
        if (bVar13) {
          pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                              ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
          uVar25 = (param_3->KeptEdges).field0_0x0._s_0.B;
          local_1f0 = CONCAT44(local_1f0._4_4_,uVar25);
          if (*(int *)&(pFVar18->Edges).field_0x8 != *(int *)&(pFVar18->Edges).field_0x34) {
            TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                               *)pFVar18,uVar25,(int *)&local_1f0);
          }
          pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                              ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
          uVar25 = (param_3->RemovedEdges).field0_0x0._s_0.B;
          local_200 = CONCAT44(local_200._4_4_,uVar25);
          if (*(int *)&(pFVar18->Edges).field_0x8 != *(int *)&(pFVar18->Edges).field_0x34) {
            TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                               *)pFVar18,uVar25,(int *)&local_200);
          }
          `UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
          CollapseEdge'::__l84::<lambda_1>::operator()
                    (&local_1c8,(param_3->KeptEdges).field0_0x0._s_0.B);
        }
      }
      pFVar18 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                          ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
      TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
      ::Remove((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                *)&pFVar18->Vertices,iVar29);
    }
    (**(code **)(*(longlong *)this + 0xa8))(this,param_1,uVar7,uVar22 & 0xffffffff,param_3);
    (**(code **)(*(longlong *)this + 0x28))(this,0);
    EVar14 = Ok_Collapsed;
  }
  else {
    EVar14 = Failed_OpNotSuccessful;
    if (iVar15 == 0x1a) {
      EVar14 = Failed_IsolatedTriangle;
    }
  }
  (**(code **)(*(longlong *)this + 0x120))(this);
  return EVar14;
}

// ComputeFaceQuadric @ 14c721420

TQuadricError<double> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::ComputeFaceQuadric
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,
          TQuadricError<double> *__return_storage_ptr__,int param_1,TVector<double> *param_2,
          TVector<double> *param_3,double *param_4)

{
  FDynamicMesh3::GetTriInfo(*(FDynamicMesh3 **)&this->field_0x8,param_1,param_2,param_4,param_3);
  TQuadricError<double>::TQuadricError<double>(__return_storage_ptr__,param_2,param_3);
  return __return_storage_ptr__;
}

// ComputeFaceQuadric @ 14c721480

TAttrBasedQuadricError<double> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::ComputeFaceQuadric
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,
          TAttrBasedQuadricError<double> *__return_storage_ptr__,int param_1,
          TVector<double> *param_2,TVector<double> *param_3,double *param_4)

{
  double *pdVar1;
  uint uVar2;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_00;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  ulonglong uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80 [4];
  ulonglong uVar9;
  
  FDynamicMesh3::GetTriInfo(*(FDynamicMesh3 **)&this->field_0x8,param_1,param_2,param_4,param_3);
  this_00 = this->NormalOverlay;
  if (this_00 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) {
    lVar3 = *(longlong *)&this->field_0x8;
    uVar10 = (ulonglong)((uint)param_1 >> 9);
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x130) + uVar10 * 8);
    uVar11 = *(undefined8 *)(lVar4 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    uVar2 = *(uint *)(lVar4 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    if (*(char *)(lVar3 + 0x70) == '\0') {
      local_c8._s_0.X = (double)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
      local_e0._s_0.X = (double)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
      uVar11 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
      local_f8._8_4_ = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
      local_c8._8_4_ = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
      local_e0._8_4_ = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
    }
    else {
      uVar7 = (uint)uVar11;
      uVar9 = (ulonglong)(uVar7 & 0x1ff);
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (ulonglong)(uVar7 >> 9) * 8);
      local_c8._s_0.X = *(double *)(lVar4 + uVar9 * 0xc);
      local_c8._8_4_ = *(float *)(lVar4 + 8 + uVar9 * 0xc);
      local_f8._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
      lVar4 = *(longlong *)
               (*(longlong *)(lVar3 + 0x60) + (ulonglong)((uint)local_f8._4_4_ >> 9) * 8);
      local_e0._8_4_ = *(float *)(lVar4 + 8 + (ulonglong)(local_f8._4_4_ & 0x1ff) * 0xc);
      local_e0._s_0.X = *(double *)(lVar4 + (ulonglong)(local_f8._4_4_ & 0x1ff) * 0xc);
      uVar9 = (ulonglong)(uVar2 & 0x1ff);
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (ulonglong)(uVar2 >> 9) * 8);
      uVar11 = *(undefined8 *)(lVar3 + uVar9 * 0xc);
      local_f8._8_4_ = *(float *)(lVar3 + 8 + uVar9 * 0xc);
    }
    local_f8._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
    local_f8._0_4_ = (undefined4)uVar11;
  }
  else if (*(int *)(*(longlong *)
                     (*(longlong *)&this_00->field_0x78 + (ulonglong)((uint)(param_1 * 3) >> 9) * 8)
                   + (ulonglong)(param_1 * 3 & 0x1ff) * 4) < 0) {
    pTVar8 = FDynamicMesh3::GetTriNormal
                       (*(FDynamicMesh3 **)&this->field_0x8,(TVector<double> *)&local_b0._s_0,
                        param_1);
    uVar10 = (ulonglong)((uint)param_1 >> 9);
    local_e0._0_4_ = (undefined4)(pTVar8->field0_0x0)._s_0.X;
    local_e0._4_4_ = (undefined4)(pTVar8->field0_0x0)._s_0.Y;
    local_e0._8_4_ = (undefined4)(pTVar8->field0_0x0)._s_0.Z;
    local_c8._8_4_ = local_e0._8_4_;
    local_c8._4_4_ = local_e0._4_4_;
    local_c8._0_4_ = local_e0._0_4_;
    local_f8._4_4_ = local_e0._4_4_;
    local_f8._0_4_ = local_e0._0_4_;
    local_f8._8_4_ = local_e0._8_4_;
  }
  else {
    TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
              (this_00,param_1,(TVector<float> *)&local_c8._s_0,(TVector<float> *)&local_e0._s_0,
               (TVector<float> *)&local_f8._s_0);
    uVar10 = (ulonglong)((uint)param_1 >> 9);
  }
  uVar9 = (ulonglong)(param_1 & 0x1ff);
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x130) + uVar10 * 8);
  lVar4 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
  uVar2 = *(uint *)(lVar3 + uVar9 * 0xc);
  uVar10 = (ulonglong)(uVar2 & 0x1ff);
  lVar5 = *(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8);
  pdVar1 = (double *)(lVar5 + uVar10 * 0x18);
  local_b0._s_0.X = *pdVar1;
  local_b0._s_0.Y = pdVar1[1];
  local_b0._s_0.Z = *(double *)(lVar5 + 0x10 + uVar10 * 0x18);
  uVar2 = *(uint *)(lVar3 + 4 + uVar9 * 0xc);
  uVar10 = (ulonglong)(uVar2 & 0x1ff);
  lVar5 = *(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8);
  pdVar1 = (double *)(lVar5 + uVar10 * 0x18);
  local_80[0]._0_8_ = *pdVar1;
  local_80[0]._8_8_ = pdVar1[1];
  local_80[0]._16_8_ = *(double *)(lVar5 + 0x10 + uVar10 * 0x18);
  uVar2 = *(uint *)(lVar3 + 8 + uVar9 * 0xc);
  uVar10 = (ulonglong)(uVar2 & 0x1ff);
  lVar3 = *(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8);
  local_98._s_0.Z = *(double *)(lVar3 + 0x10 + uVar10 * 0x18);
  pdVar1 = (double *)(lVar3 + uVar10 * 0x18);
  local_98._s_0.X = *pdVar1;
  local_98._s_0.Y = pdVar1[1];
  dVar12 = (double)(float)local_c8._4_4_;
  dVar6 = (double)(float)local_c8._0_4_;
  local_c8._s_0.X = (double)(float)local_e0._0_4_;
  local_e0._s_0.Z = (double)(float)local_c8._8_4_;
  local_c8._s_0.Z = (double)(float)local_e0._8_4_;
  local_c8._s_0.Y = (double)(float)local_e0._4_4_;
  dVar13 = (double)(float)local_f8._4_4_;
  local_f8._s_0.X = (double)(float)local_f8._0_4_;
  local_f8._s_0.Z = (double)(float)local_f8._8_4_;
  local_f8._s_0.Y = dVar13;
  local_e0._s_0.X = dVar6;
  local_e0._s_0.Y = dVar12;
  TAttrBasedQuadricError<double>::TAttrBasedQuadricError<double>
            (__return_storage_ptr__,(TVector<double> *)&local_b0._s_0,
             (TVector<double> *)&local_80[0]._s_0,(TVector<double> *)&local_98._s_0,
             (TVector<double> *)&local_e0._s_0,(TVector<double> *)&local_c8._s_0,
             (TVector<double> *)&local_f8._s_0,param_2,param_3,__real_4030000000000000);
  return __return_storage_ptr__;
}

// ComputeFaceQuadric @ 14c721870

TVolPresQuadricError<double> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::ComputeFaceQuadric
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,
          TVolPresQuadricError<double> *__return_storage_ptr__,int param_1,TVector<double> *param_2,
          TVector<double> *param_3,double *param_4)

{
  FDynamicMesh3::GetTriInfo(*(FDynamicMesh3 **)&this->field_0x8,param_1,param_2,param_4,param_3);
  TVolPresQuadricError<double>::TVolPresQuadricError<double>(__return_storage_ptr__,param_2,param_3)
  ;
  return __return_storage_ptr__;
}

// DoSimplify @ 14c72d7c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::DoSimplify
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  code *pcVar8;
  FIndex2i_u_0 FVar9;
  FIndex2i_u_0 FVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  ESimplificationResult EVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_98;
  FEdgeCollapseInfo local_78;
  
  if (*(int *)(*(longlong *)&this->field_0x8 + 0x170) != 0) {
    if ((*(longlong *)(*(longlong *)&this->field_0x8 + 0x208) != 0) && (this->field_0xc8 == '\0')) {
      local_res8[0] = 0;
      `UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::DoSimplify'::__l8::
      <lambda_1>::operator()(local_res8);
    }
    (**(code **)(*(longlong *)this + 0xd8))(this);
    (**(code **)(*(longlong *)this + 0xf8))(this);
    Precompute(this,false);
    cVar12 = (**(code **)(*(longlong *)this + 8))(this);
    if (cVar12 == '\0') {
      (**(code **)(*(longlong *)this + 0x88))(this);
      cVar12 = (**(code **)(*(longlong *)this + 8))(this);
      if (cVar12 == '\0') {
        (**(code **)(*(longlong *)this + 0x80))(this);
        cVar12 = (**(code **)(*(longlong *)this + 8))(this);
        if (cVar12 == '\0') {
          (**(code **)(*(longlong *)this + 0x78))(this);
          cVar12 = (**(code **)(*(longlong *)this + 8))(this);
          if (cVar12 == '\0') {
            (**(code **)(*(longlong *)this + 0x90))(this);
            cVar12 = (**(code **)(*(longlong *)this + 8))(this);
            if (cVar12 == '\0') {
              (**(code **)(*(longlong *)this + 0x100))(this);
              (**(code **)(*(longlong *)this + 0xe8))(this);
              (**(code **)(*(longlong *)this + 0x118))(this);
              uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
              FVar10 = _UNK_15060db28;
              FVar9 = ___xmm_ffffffffffffffffffffffffffffffff;
              iVar2 = (this->EdgeQueue).num_nodes;
              while (0 < iVar2) {
                if (this->SimplifyMode == VertexCount) {
                  iVar2 = this->TargetCount;
                  iVar3 = *(int *)(*(longlong *)&this->field_0x8 + 0x50);
                  bVar16 = SBORROW4(iVar3,iVar2);
                  iVar7 = iVar3 - iVar2;
                  bVar15 = iVar3 == iVar2;
LAB_14c72d973:
                  if (bVar15 || bVar16 != iVar7 < 0) break;
                }
                else {
                  if (this->SimplifyMode != MaxError) {
                    iVar2 = this->TargetCount;
                    iVar3 = *(int *)(*(longlong *)&this->field_0x8 + 0x170);
                    bVar16 = SBORROW4(iVar3,iVar2);
                    iVar7 = iVar3 - iVar2;
                    bVar15 = iVar3 == iVar2;
                    goto LAB_14c72d973;
                  }
                  fVar17 = (float)(*(uint *)(*(longlong *)
                                              (this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data
                                            + 0x10) & uVar11);
                  if (this->MaxErrorAllowed <= fVar17 && fVar17 != this->MaxErrorAllowed) break;
                }
                this->COUNT_ITERATIONS = this->COUNT_ITERATIONS + 1;
                if ((((this->EdgeQueue).EnableDebugChecks != false) &&
                    ((this->EdgeQueue).num_nodes < 1)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("GetCount() > 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                        ,0x92,L""), bVar15)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar4 = *(uint *)(*(longlong *)(this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data
                                 + 0xc);
                FIndexPriorityQueue::remove_at_index(&this->EdgeQueue,1);
                lVar5 = *(longlong *)&this->field_0x8;
                if ((-1 < (int)uVar4) &&
                   ((int)uVar4 < *(int *)(lVar5 + 0x1d0) * 0x200 + *(int *)(lVar5 + 0x1d4))) {
                  if ((ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar5 + 0x1d8) +
                                           (ulonglong)(uVar4 >> 9) * 8) +
                                         (ulonglong)(uVar4 & 0x1ff) * 2) - 1U) < 0xfffe) {
                    cVar12 = (**(code **)(*(longlong *)this + 8))(this);
                    if (cVar12 != '\0') {
                      return;
                    }
                    local_78.OpposingVerts.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
                    local_78.KeptEdges.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
                    local_78.RemovedTris.field0_0x0 = FVar9;
                    local_78.RemovedEdges.field0_0x0 = FVar10;
                    uVar13 = 0;
                    if ((int)uVar4 < (this->EdgeQuadrics).ArrayNum) {
                      uVar13 = ~uVar4 >> 0x1f;
                    }
                    if ((uVar13 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    pFVar6 = (this->EdgeQuadrics).AllocatorInstance.Data;
                    pFVar1 = pFVar6 + (longlong)(int)uVar4 * 0x70 + 0x58;
                    local_98._s_0.X = (double)*(undefined8 *)pFVar1;
                    local_98._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
                    local_98._s_0.Z =
                         (double)*(undefined8 *)(pFVar6 + (longlong)(int)uVar4 * 0x70 + 0x68);
                    EVar14 = CollapseEdge(this,uVar4,(TVector<double> *)&local_98._s_0,&local_78,-1)
                    ;
                    if (EVar14 == Ok_Collapsed) {
                      (**(code **)(*(longlong *)this + 0x98))(this,&local_78);
                    }
                    else if ((EVar14 == Failed_IsolatedTriangle) &&
                            (2 < *(int *)(*(longlong *)&this->field_0x8 + 0x170))) {
                      RemoveIsolatedTriangle
                                (this,*(int *)(*(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)&this->field_0x8 + 0x1c0) +
                                                (ulonglong)(uVar4 >> 9) * 8) + 8 +
                                              (ulonglong)(uVar4 & 0x1ff) * 0x10));
                    }
                  }
                }
                iVar2 = (this->EdgeQueue).num_nodes;
              }
              (**(code **)(*(longlong *)this + 0x120))(this);
              (**(code **)(*(longlong *)this + 0xf0))(this);
              cVar12 = (**(code **)(*(longlong *)this + 8))(this);
              if (cVar12 == '\0') {
                (**(code **)(*(longlong *)this + 0xa0))(this);
                (**(code **)(*(longlong *)this + 0xe0))(this);
              }
            }
          }
        }
      }
    }
  }
  return;
}

// DoSimplify @ 14c72dbb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::DoSimplify
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  code *pcVar8;
  FIndex2i_u_0 FVar9;
  FIndex2i_u_0 FVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  ESimplificationResult EVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_98;
  FEdgeCollapseInfo local_78;
  
  if (*(int *)(*(longlong *)&this->field_0x8 + 0x170) != 0) {
    if ((*(longlong *)(*(longlong *)&this->field_0x8 + 0x208) != 0) && (this->field_0xc8 == '\0')) {
      local_res8[0] = 0;
      `UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::DoSimplify'
      ::__l8::<lambda_1>::operator()(local_res8);
    }
    (**(code **)(*(longlong *)this + 0xd8))(this);
    (**(code **)(*(longlong *)this + 0xf8))(this);
    Precompute(this,false);
    cVar12 = (**(code **)(*(longlong *)this + 8))(this);
    if (cVar12 == '\0') {
      (**(code **)(*(longlong *)this + 0x88))(this);
      cVar12 = (**(code **)(*(longlong *)this + 8))(this);
      if (cVar12 == '\0') {
        (**(code **)(*(longlong *)this + 0x80))(this);
        cVar12 = (**(code **)(*(longlong *)this + 8))(this);
        if (cVar12 == '\0') {
          (**(code **)(*(longlong *)this + 0x78))(this);
          cVar12 = (**(code **)(*(longlong *)this + 8))(this);
          if (cVar12 == '\0') {
            (**(code **)(*(longlong *)this + 0x90))(this);
            cVar12 = (**(code **)(*(longlong *)this + 8))(this);
            if (cVar12 == '\0') {
              (**(code **)(*(longlong *)this + 0x100))(this);
              (**(code **)(*(longlong *)this + 0xe8))(this);
              (**(code **)(*(longlong *)this + 0x118))(this);
              uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
              FVar10 = _UNK_15060db28;
              FVar9 = ___xmm_ffffffffffffffffffffffffffffffff;
              iVar2 = (this->EdgeQueue).num_nodes;
              while (0 < iVar2) {
                if (this->SimplifyMode == VertexCount) {
                  iVar2 = this->TargetCount;
                  iVar3 = *(int *)(*(longlong *)&this->field_0x8 + 0x50);
                  bVar16 = SBORROW4(iVar3,iVar2);
                  iVar7 = iVar3 - iVar2;
                  bVar15 = iVar3 == iVar2;
LAB_14c72dd63:
                  if (bVar15 || bVar16 != iVar7 < 0) break;
                }
                else {
                  if (this->SimplifyMode != MaxError) {
                    iVar2 = this->TargetCount;
                    iVar3 = *(int *)(*(longlong *)&this->field_0x8 + 0x170);
                    bVar16 = SBORROW4(iVar3,iVar2);
                    iVar7 = iVar3 - iVar2;
                    bVar15 = iVar3 == iVar2;
                    goto LAB_14c72dd63;
                  }
                  fVar17 = (float)(*(uint *)(*(longlong *)
                                              (this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data
                                            + 0x10) & uVar11);
                  if (this->MaxErrorAllowed <= fVar17 && fVar17 != this->MaxErrorAllowed) break;
                }
                this->COUNT_ITERATIONS = this->COUNT_ITERATIONS + 1;
                if ((((this->EdgeQueue).EnableDebugChecks != false) &&
                    ((this->EdgeQueue).num_nodes < 1)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("GetCount() > 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                        ,0x92,L""), bVar15)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar4 = *(uint *)(*(longlong *)(this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data
                                 + 0xc);
                FIndexPriorityQueue::remove_at_index(&this->EdgeQueue,1);
                lVar5 = *(longlong *)&this->field_0x8;
                if ((-1 < (int)uVar4) &&
                   ((int)uVar4 < *(int *)(lVar5 + 0x1d0) * 0x200 + *(int *)(lVar5 + 0x1d4))) {
                  if ((ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar5 + 0x1d8) +
                                           (ulonglong)(uVar4 >> 9) * 8) +
                                         (ulonglong)(uVar4 & 0x1ff) * 2) - 1U) < 0xfffe) {
                    cVar12 = (**(code **)(*(longlong *)this + 8))(this);
                    if (cVar12 != '\0') {
                      return;
                    }
                    local_78.OpposingVerts.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
                    local_78.KeptEdges.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
                    local_78.RemovedTris.field0_0x0 = FVar9;
                    local_78.RemovedEdges.field0_0x0 = FVar10;
                    uVar13 = 0;
                    if ((int)uVar4 < (this->EdgeQuadrics).ArrayNum) {
                      uVar13 = ~uVar4 >> 0x1f;
                    }
                    if ((uVar13 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    pFVar6 = (this->EdgeQuadrics).AllocatorInstance.Data;
                    pFVar1 = pFVar6 + (longlong)(int)uVar4 * 0x100 + 0xe8;
                    local_98._s_0.X = (double)*(undefined8 *)pFVar1;
                    local_98._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
                    local_98._s_0.Z =
                         (double)*(undefined8 *)(pFVar6 + (longlong)(int)uVar4 * 0x100 + 0xf8);
                    EVar14 = CollapseEdge(this,uVar4,(TVector<double> *)&local_98._s_0,&local_78,-1)
                    ;
                    if (EVar14 == Ok_Collapsed) {
                      (**(code **)(*(longlong *)this + 0x98))(this,&local_78);
                    }
                    else if ((EVar14 == Failed_IsolatedTriangle) &&
                            (2 < *(int *)(*(longlong *)&this->field_0x8 + 0x170))) {
                      RemoveIsolatedTriangle
                                (this,*(int *)(*(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)&this->field_0x8 + 0x1c0) +
                                                (ulonglong)(uVar4 >> 9) * 8) + 8 +
                                              (ulonglong)(uVar4 & 0x1ff) * 0x10));
                    }
                  }
                }
                iVar2 = (this->EdgeQueue).num_nodes;
              }
              (**(code **)(*(longlong *)this + 0x120))(this);
              (**(code **)(*(longlong *)this + 0xf0))(this);
              cVar12 = (**(code **)(*(longlong *)this + 8))(this);
              if (cVar12 == '\0') {
                (**(code **)(*(longlong *)this + 0xa0))(this);
                (**(code **)(*(longlong *)this + 0xe0))(this);
              }
            }
          }
        }
      }
    }
  }
  return;
}

// DoSimplify @ 14c72dfb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::DoSimplify
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  code *pcVar8;
  FIndex2i_u_0 FVar9;
  FIndex2i_u_0 FVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  ESimplificationResult EVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_98;
  FEdgeCollapseInfo local_78;
  
  if (*(int *)(*(longlong *)&this->field_0x8 + 0x170) != 0) {
    if ((*(longlong *)(*(longlong *)&this->field_0x8 + 0x208) != 0) && (this->field_0xc8 == '\0')) {
      local_res8[0] = 0;
      `UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::DoSimplify'::
      __l8::<lambda_1>::operator()(local_res8);
    }
    (**(code **)(*(longlong *)this + 0xd8))(this);
    (**(code **)(*(longlong *)this + 0xf8))(this);
    Precompute(this,false);
    cVar12 = (**(code **)(*(longlong *)this + 8))(this);
    if (cVar12 == '\0') {
      (**(code **)(*(longlong *)this + 0x88))(this);
      cVar12 = (**(code **)(*(longlong *)this + 8))(this);
      if (cVar12 == '\0') {
        (**(code **)(*(longlong *)this + 0x80))(this);
        cVar12 = (**(code **)(*(longlong *)this + 8))(this);
        if (cVar12 == '\0') {
          (**(code **)(*(longlong *)this + 0x78))(this);
          cVar12 = (**(code **)(*(longlong *)this + 8))(this);
          if (cVar12 == '\0') {
            (**(code **)(*(longlong *)this + 0x90))(this);
            cVar12 = (**(code **)(*(longlong *)this + 8))(this);
            if (cVar12 == '\0') {
              (**(code **)(*(longlong *)this + 0x100))(this);
              (**(code **)(*(longlong *)this + 0xe8))(this);
              (**(code **)(*(longlong *)this + 0x118))(this);
              uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
              FVar10 = _UNK_15060db28;
              FVar9 = ___xmm_ffffffffffffffffffffffffffffffff;
              iVar2 = (this->EdgeQueue).num_nodes;
              while (0 < iVar2) {
                if (this->SimplifyMode == VertexCount) {
                  iVar2 = this->TargetCount;
                  iVar3 = *(int *)(*(longlong *)&this->field_0x8 + 0x50);
                  bVar16 = SBORROW4(iVar3,iVar2);
                  iVar7 = iVar3 - iVar2;
                  bVar15 = iVar3 == iVar2;
LAB_14c72e163:
                  if (bVar15 || bVar16 != iVar7 < 0) break;
                }
                else {
                  if (this->SimplifyMode != MaxError) {
                    iVar2 = this->TargetCount;
                    iVar3 = *(int *)(*(longlong *)&this->field_0x8 + 0x170);
                    bVar16 = SBORROW4(iVar3,iVar2);
                    iVar7 = iVar3 - iVar2;
                    bVar15 = iVar3 == iVar2;
                    goto LAB_14c72e163;
                  }
                  fVar17 = (float)(*(uint *)(*(longlong *)
                                              (this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data
                                            + 0x10) & uVar11);
                  if (this->MaxErrorAllowed <= fVar17 && fVar17 != this->MaxErrorAllowed) break;
                }
                this->COUNT_ITERATIONS = this->COUNT_ITERATIONS + 1;
                if ((((this->EdgeQueue).EnableDebugChecks != false) &&
                    ((this->EdgeQueue).num_nodes < 1)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("GetCount() > 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                        ,0x92,L""), bVar15)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar4 = *(uint *)(*(longlong *)(this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data
                                 + 0xc);
                FIndexPriorityQueue::remove_at_index(&this->EdgeQueue,1);
                lVar5 = *(longlong *)&this->field_0x8;
                if ((-1 < (int)uVar4) &&
                   ((int)uVar4 < *(int *)(lVar5 + 0x1d0) * 0x200 + *(int *)(lVar5 + 0x1d4))) {
                  if ((ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar5 + 0x1d8) +
                                           (ulonglong)(uVar4 >> 9) * 8) +
                                         (ulonglong)(uVar4 & 0x1ff) * 2) - 1U) < 0xfffe) {
                    cVar12 = (**(code **)(*(longlong *)this + 8))(this);
                    if (cVar12 != '\0') {
                      return;
                    }
                    local_78.OpposingVerts.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
                    local_78.KeptEdges.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
                    local_78.RemovedTris.field0_0x0 = FVar9;
                    local_78.RemovedEdges.field0_0x0 = FVar10;
                    uVar13 = 0;
                    if ((int)uVar4 < (this->EdgeQuadrics).ArrayNum) {
                      uVar13 = ~uVar4 >> 0x1f;
                    }
                    if ((uVar13 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    pFVar6 = (this->EdgeQuadrics).AllocatorInstance.Data;
                    pFVar1 = pFVar6 + (longlong)(int)uVar4 * 0x90 + 0x78;
                    local_98._s_0.X = (double)*(undefined8 *)pFVar1;
                    local_98._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
                    local_98._s_0.Z =
                         (double)*(undefined8 *)(pFVar6 + (longlong)(int)uVar4 * 0x90 + 0x88);
                    EVar14 = CollapseEdge(this,uVar4,(TVector<double> *)&local_98._s_0,&local_78,-1)
                    ;
                    if (EVar14 == Ok_Collapsed) {
                      (**(code **)(*(longlong *)this + 0x98))(this,&local_78);
                    }
                    else if ((EVar14 == Failed_IsolatedTriangle) &&
                            (2 < *(int *)(*(longlong *)&this->field_0x8 + 0x170))) {
                      RemoveIsolatedTriangle
                                (this,*(int *)(*(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)&this->field_0x8 + 0x1c0) +
                                                (ulonglong)(uVar4 >> 9) * 8) + 8 +
                                              (ulonglong)(uVar4 & 0x1ff) * 0x10));
                    }
                  }
                }
                iVar2 = (this->EdgeQueue).num_nodes;
              }
              (**(code **)(*(longlong *)this + 0x120))(this);
              (**(code **)(*(longlong *)this + 0xf0))(this);
              cVar12 = (**(code **)(*(longlong *)this + 8))(this);
              if (cVar12 == '\0') {
                (**(code **)(*(longlong *)this + 0xa0))(this);
                (**(code **)(*(longlong *)this + 0xe0))(this);
              }
            }
          }
        }
      }
    }
  }
  return;
}

// EnableInlineProjection @ 14c72f5e0

bool __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::EnableInlineProjection
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  return this->field_0x128 == '\x02';
}

// EnableInlineProjection @ 14c72f600

bool __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
EnableInlineProjection(TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  return this->field_0x128 == '\x02';
}

// EnableInlineProjection @ 14c72f620

bool __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
EnableInlineProjection(TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  return this->field_0x128 == '\x02';
}

// FastCollapsePass @ 14c72fc50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FastCollapsePass
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,double param_1,
          int param_2,bool param_3,uint param_4)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FIndex2i_u_0 FVar9;
  FIndex2i_u_0 FVar10;
  double dVar11;
  char cVar12;
  ESimplificationResult EVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  TVector<double>_u_0 local_e8;
  FEdgeCollapseInfo local_c8 [2];
  
  if (param_4 < *(uint *)(*(longlong *)&this->field_0x8 + 0x170)) {
    this->MinEdgeLength = param_1;
    this->bHaveBoundary = false;
    (**(code **)(*(longlong *)this + 0xd8))();
    (**(code **)(*(longlong *)this + 0xf8))(this);
    Precompute(this,param_3);
    cVar12 = (**(code **)(*(longlong *)this + 8))(this);
    if (cVar12 == '\0') {
      (**(code **)(*(longlong *)this + 0x100))(this);
      (**(code **)(*(longlong *)this + 0xe8))(this);
      (**(code **)(*(longlong *)this + 0x118))(this);
      dVar11 = __real_3fe0000000000000;
      FVar10 = _UNK_15060db28;
      FVar9 = ___xmm_ffffffffffffffffffffffffffffffff;
      iVar17 = 0;
      iVar19 = *(int *)(*(longlong *)&this->field_0x8 + 0x1d0) * 0x200 +
               *(int *)(*(longlong *)&this->field_0x8 + 0x1d4);
      if (0 < param_2) {
        while( true ) {
          iVar18 = 0;
          uVar16 = 0;
          if (iVar19 < 1) break;
          do {
            lVar3 = *(longlong *)&this->field_0x8;
            uVar15 = (uint)uVar16;
            if ((-1 < (int)uVar15) &&
               ((int)uVar15 < *(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4))) {
              uVar14 = (ulonglong)(uVar15 & 0x1ff);
              uVar16 = uVar16 >> 9;
              if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x1d8) + uVar16 * 8) +
                                      uVar14 * 2) - 1U) < 0xfffe) &&
                 (*(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x1c0) + uVar16 * 8) + 0xc +
                          uVar14 * 0x10) != -1)) {
                if (*(uint *)(lVar3 + 0x170) <= param_4) break;
                cVar12 = (**(code **)(*(longlong *)this + 8))(this);
                if (cVar12 != '\0') {
                  return;
                }
                lVar3 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
                uVar16 = *(ulonglong *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) + uVar16 * 8) +
                          uVar14 * 0x10);
                uVar14 = (ulonglong)((uint)uVar16 & 0x1ff);
                lVar4 = *(longlong *)(lVar3 + ((uVar16 & 0xffffffff) >> 9) * 8);
                pdVar1 = (double *)(lVar4 + uVar14 * 0x18);
                dVar5 = *pdVar1;
                dVar6 = pdVar1[1];
                local_e8._s_0.Z = *(double *)(lVar4 + 0x10 + uVar14 * 0x18);
                uVar14 = (ulonglong)((uint)(uVar16 >> 0x20) & 0x1ff);
                lVar3 = *(longlong *)(lVar3 + (uVar16 >> 0x29) * 8);
                pdVar1 = (double *)(lVar3 + uVar14 * 0x18);
                dVar7 = *pdVar1;
                dVar8 = pdVar1[1];
                dVar2 = *(double *)(lVar3 + 0x10 + uVar14 * 0x18);
                dVar21 = dVar8 - dVar6;
                dVar22 = dVar7 - dVar5;
                dVar20 = dVar2 - local_e8._s_0.Z;
                if (dVar21 * dVar21 + dVar22 * dVar22 + dVar20 * dVar20 <= param_1 * param_1) {
                  this->COUNT_ITERATIONS = this->COUNT_ITERATIONS + 1;
                  local_c8[0].OpposingVerts.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
                  local_c8[0].KeptEdges.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
                  local_e8._s_0.X = (dVar5 + dVar7) * dVar11;
                  local_e8._s_0.Y = (dVar6 + dVar8) * dVar11;
                  local_e8._s_0.Z = (local_e8._s_0.Z + dVar2) * dVar11;
                  local_c8[0].RemovedTris.field0_0x0 = FVar9;
                  local_c8[0].RemovedEdges.field0_0x0 = FVar10;
                  EVar13 = CollapseEdge(this,uVar15,(TVector<double> *)&local_e8._s_0,local_c8,-1);
                  if (EVar13 == Ok_Collapsed) {
                    iVar18 = iVar18 + 1;
                  }
                }
              }
            }
            uVar16 = (ulonglong)(uVar15 + 1);
          } while ((int)(uVar15 + 1) < iVar19);
          if (((iVar18 == 0) || (*(uint *)(*(longlong *)&this->field_0x8 + 0x170) <= param_4)) ||
             (iVar17 = iVar17 + 1, param_2 <= iVar17)) break;
        }
      }
      (**(code **)(*(longlong *)this + 0x120))(this);
      (**(code **)(*(longlong *)this + 0xf0))(this);
      cVar12 = (**(code **)(*(longlong *)this + 8))(this);
      if (cVar12 == '\0') {
        (**(code **)(*(longlong *)this + 0xa0))(this);
        (**(code **)(*(longlong *)this + 0xe0))(this);
      }
    }
  }
  return;
}

// FastCollapsePass @ 14c730010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FastCollapsePass
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,double param_1,
          int param_2,bool param_3,uint param_4)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FIndex2i_u_0 FVar9;
  FIndex2i_u_0 FVar10;
  double dVar11;
  char cVar12;
  ESimplificationResult EVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  TVector<double>_u_0 local_e8;
  FEdgeCollapseInfo local_c8 [2];
  
  if (param_4 < *(uint *)(*(longlong *)&this->field_0x8 + 0x170)) {
    this->MinEdgeLength = param_1;
    this->bHaveBoundary = false;
    (**(code **)(*(longlong *)this + 0xd8))();
    (**(code **)(*(longlong *)this + 0xf8))(this);
    Precompute(this,param_3);
    cVar12 = (**(code **)(*(longlong *)this + 8))(this);
    if (cVar12 == '\0') {
      (**(code **)(*(longlong *)this + 0x100))(this);
      (**(code **)(*(longlong *)this + 0xe8))(this);
      (**(code **)(*(longlong *)this + 0x118))(this);
      dVar11 = __real_3fe0000000000000;
      FVar10 = _UNK_15060db28;
      FVar9 = ___xmm_ffffffffffffffffffffffffffffffff;
      iVar17 = 0;
      iVar19 = *(int *)(*(longlong *)&this->field_0x8 + 0x1d0) * 0x200 +
               *(int *)(*(longlong *)&this->field_0x8 + 0x1d4);
      if (0 < param_2) {
        while( true ) {
          iVar18 = 0;
          uVar16 = 0;
          if (iVar19 < 1) break;
          do {
            lVar3 = *(longlong *)&this->field_0x8;
            uVar15 = (uint)uVar16;
            if ((-1 < (int)uVar15) &&
               ((int)uVar15 < *(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4))) {
              uVar14 = (ulonglong)(uVar15 & 0x1ff);
              uVar16 = uVar16 >> 9;
              if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x1d8) + uVar16 * 8) +
                                      uVar14 * 2) - 1U) < 0xfffe) &&
                 (*(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x1c0) + uVar16 * 8) + 0xc +
                          uVar14 * 0x10) != -1)) {
                if (*(uint *)(lVar3 + 0x170) <= param_4) break;
                cVar12 = (**(code **)(*(longlong *)this + 8))(this);
                if (cVar12 != '\0') {
                  return;
                }
                lVar3 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
                uVar16 = *(ulonglong *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) + uVar16 * 8) +
                          uVar14 * 0x10);
                uVar14 = (ulonglong)((uint)uVar16 & 0x1ff);
                lVar4 = *(longlong *)(lVar3 + ((uVar16 & 0xffffffff) >> 9) * 8);
                pdVar1 = (double *)(lVar4 + uVar14 * 0x18);
                dVar5 = *pdVar1;
                dVar6 = pdVar1[1];
                local_e8._s_0.Z = *(double *)(lVar4 + 0x10 + uVar14 * 0x18);
                uVar14 = (ulonglong)((uint)(uVar16 >> 0x20) & 0x1ff);
                lVar3 = *(longlong *)(lVar3 + (uVar16 >> 0x29) * 8);
                pdVar1 = (double *)(lVar3 + uVar14 * 0x18);
                dVar7 = *pdVar1;
                dVar8 = pdVar1[1];
                dVar2 = *(double *)(lVar3 + 0x10 + uVar14 * 0x18);
                dVar21 = dVar8 - dVar6;
                dVar22 = dVar7 - dVar5;
                dVar20 = dVar2 - local_e8._s_0.Z;
                if (dVar21 * dVar21 + dVar22 * dVar22 + dVar20 * dVar20 <= param_1 * param_1) {
                  this->COUNT_ITERATIONS = this->COUNT_ITERATIONS + 1;
                  local_c8[0].OpposingVerts.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
                  local_c8[0].KeptEdges.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
                  local_e8._s_0.X = (dVar5 + dVar7) * dVar11;
                  local_e8._s_0.Y = (dVar6 + dVar8) * dVar11;
                  local_e8._s_0.Z = (local_e8._s_0.Z + dVar2) * dVar11;
                  local_c8[0].RemovedTris.field0_0x0 = FVar9;
                  local_c8[0].RemovedEdges.field0_0x0 = FVar10;
                  EVar13 = CollapseEdge(this,uVar15,(TVector<double> *)&local_e8._s_0,local_c8,-1);
                  if (EVar13 == Ok_Collapsed) {
                    iVar18 = iVar18 + 1;
                  }
                }
              }
            }
            uVar16 = (ulonglong)(uVar15 + 1);
          } while ((int)(uVar15 + 1) < iVar19);
          if (((iVar18 == 0) || (*(uint *)(*(longlong *)&this->field_0x8 + 0x170) <= param_4)) ||
             (iVar17 = iVar17 + 1, param_2 <= iVar17)) break;
        }
      }
      (**(code **)(*(longlong *)this + 0x120))(this);
      (**(code **)(*(longlong *)this + 0xf0))(this);
      cVar12 = (**(code **)(*(longlong *)this + 8))(this);
      if (cVar12 == '\0') {
        (**(code **)(*(longlong *)this + 0xa0))(this);
        (**(code **)(*(longlong *)this + 0xe0))(this);
      }
    }
  }
  return;
}

// FastCollapsePass @ 14c7303d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FastCollapsePass
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,double param_1,
          int param_2,bool param_3,uint param_4)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FIndex2i_u_0 FVar9;
  FIndex2i_u_0 FVar10;
  double dVar11;
  char cVar12;
  ESimplificationResult EVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  TVector<double>_u_0 local_e8;
  FEdgeCollapseInfo local_c8 [2];
  
  if (param_4 < *(uint *)(*(longlong *)&this->field_0x8 + 0x170)) {
    this->MinEdgeLength = param_1;
    this->bHaveBoundary = false;
    (**(code **)(*(longlong *)this + 0xd8))();
    (**(code **)(*(longlong *)this + 0xf8))(this);
    Precompute(this,param_3);
    cVar12 = (**(code **)(*(longlong *)this + 8))(this);
    if (cVar12 == '\0') {
      (**(code **)(*(longlong *)this + 0x100))(this);
      (**(code **)(*(longlong *)this + 0xe8))(this);
      (**(code **)(*(longlong *)this + 0x118))(this);
      dVar11 = __real_3fe0000000000000;
      FVar10 = _UNK_15060db28;
      FVar9 = ___xmm_ffffffffffffffffffffffffffffffff;
      iVar17 = 0;
      iVar19 = *(int *)(*(longlong *)&this->field_0x8 + 0x1d0) * 0x200 +
               *(int *)(*(longlong *)&this->field_0x8 + 0x1d4);
      if (0 < param_2) {
        while( true ) {
          iVar18 = 0;
          uVar16 = 0;
          if (iVar19 < 1) break;
          do {
            lVar3 = *(longlong *)&this->field_0x8;
            uVar15 = (uint)uVar16;
            if ((-1 < (int)uVar15) &&
               ((int)uVar15 < *(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4))) {
              uVar14 = (ulonglong)(uVar15 & 0x1ff);
              uVar16 = uVar16 >> 9;
              if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x1d8) + uVar16 * 8) +
                                      uVar14 * 2) - 1U) < 0xfffe) &&
                 (*(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x1c0) + uVar16 * 8) + 0xc +
                          uVar14 * 0x10) != -1)) {
                if (*(uint *)(lVar3 + 0x170) <= param_4) break;
                cVar12 = (**(code **)(*(longlong *)this + 8))(this);
                if (cVar12 != '\0') {
                  return;
                }
                lVar3 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
                uVar16 = *(ulonglong *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) + uVar16 * 8) +
                          uVar14 * 0x10);
                uVar14 = (ulonglong)((uint)uVar16 & 0x1ff);
                lVar4 = *(longlong *)(lVar3 + ((uVar16 & 0xffffffff) >> 9) * 8);
                pdVar1 = (double *)(lVar4 + uVar14 * 0x18);
                dVar5 = *pdVar1;
                dVar6 = pdVar1[1];
                local_e8._s_0.Z = *(double *)(lVar4 + 0x10 + uVar14 * 0x18);
                uVar14 = (ulonglong)((uint)(uVar16 >> 0x20) & 0x1ff);
                lVar3 = *(longlong *)(lVar3 + (uVar16 >> 0x29) * 8);
                pdVar1 = (double *)(lVar3 + uVar14 * 0x18);
                dVar7 = *pdVar1;
                dVar8 = pdVar1[1];
                dVar2 = *(double *)(lVar3 + 0x10 + uVar14 * 0x18);
                dVar21 = dVar8 - dVar6;
                dVar22 = dVar7 - dVar5;
                dVar20 = dVar2 - local_e8._s_0.Z;
                if (dVar21 * dVar21 + dVar22 * dVar22 + dVar20 * dVar20 <= param_1 * param_1) {
                  this->COUNT_ITERATIONS = this->COUNT_ITERATIONS + 1;
                  local_c8[0].OpposingVerts.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
                  local_c8[0].KeptEdges.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
                  local_e8._s_0.X = (dVar5 + dVar7) * dVar11;
                  local_e8._s_0.Y = (dVar6 + dVar8) * dVar11;
                  local_e8._s_0.Z = (local_e8._s_0.Z + dVar2) * dVar11;
                  local_c8[0].RemovedTris.field0_0x0 = FVar9;
                  local_c8[0].RemovedEdges.field0_0x0 = FVar10;
                  EVar13 = CollapseEdge(this,uVar15,(TVector<double> *)&local_e8._s_0,local_c8,-1);
                  if (EVar13 == Ok_Collapsed) {
                    iVar18 = iVar18 + 1;
                  }
                }
              }
            }
            uVar16 = (ulonglong)(uVar15 + 1);
          } while ((int)(uVar15 + 1) < iVar19);
          if (((iVar18 == 0) || (*(uint *)(*(longlong *)&this->field_0x8 + 0x170) <= param_4)) ||
             (iVar17 = iVar17 + 1, param_2 <= iVar17)) break;
        }
      }
      (**(code **)(*(longlong *)this + 0x120))(this);
      (**(code **)(*(longlong *)this + 0xf0))(this);
      cVar12 = (**(code **)(*(longlong *)this + 8))(this);
      if (cVar12 == '\0') {
        (**(code **)(*(longlong *)this + 0xa0))(this);
        (**(code **)(*(longlong *)this + 0xe0))(this);
      }
    }
  }
  return;
}

// FullProjectionPass @ 14c736840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FullProjectionPass
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  TMeshSimplification<UE::Geometry::TQuadricError<double>_> *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_20 = (undefined ***)0x0;
  local_38 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__FullProjectionPass___TMeshSimplification_U__TQuadricError_N_Geometry_UE___Geometry_UE__MEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FullProjectionPass'::__l2::<lambda_1>,void,int>
                ::Call;
  local_30 = this;
  (**(code **)(*(longlong *)this + 0xd0))(this,local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// FullProjectionPass @ 14c7368c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FullProjectionPass
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_20 = (undefined ***)0x0;
  local_38 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__FullProjectionPass___TMeshSimplification_V__TAttrBasedQuadricError_N_Geometry_UE___Geometry_UE__MEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FullProjectionPass'::__l2::<lambda_1>,void,int>
                ::Call;
  local_30 = this;
  (**(code **)(*(longlong *)this + 0xd0))(this,local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// FullProjectionPass @ 14c736940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FullProjectionPass
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_20 = (undefined ***)0x0;
  local_38 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__FullProjectionPass___TMeshSimplification_V__TVolPresQuadricError_N_Geometry_UE___Geometry_UE__MEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FullProjectionPass'::__l2::<lambda_1>,void,int>
                ::Call;
  local_30 = this;
  (**(code **)(*(longlong *)this + 0xd0))(this,local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// GetNextEdge @ 14c73e0b0

int __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::GetNextEdge
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,int param_1,bool *param_2
          )

{
  int iVar1;
  
  iVar1 = (int)(((longlong)param_1 + 0x10000000fU) % this->MaxEdgeID);
  *param_2 = iVar1 == 0;
  return iVar1;
}

// GetNextEdge @ 14c73e0e0

int __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::GetNextEdge
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,int param_1,
          bool *param_2)

{
  int iVar1;
  
  iVar1 = (int)(((longlong)param_1 + 0x10000000fU) % this->MaxEdgeID);
  *param_2 = iVar1 == 0;
  return iVar1;
}

// GetNextEdge @ 14c73e110

int __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::GetNextEdge
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,int param_1,
          bool *param_2)

{
  int iVar1;
  
  iVar1 = (int)(((longlong)param_1 + 0x10000000fU) % this->MaxEdgeID);
  *param_2 = iVar1 == 0;
  return iVar1;
}

// GetProjectedCollapsePosition @ 14c7407a0

TVector<double> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
GetProjectedCollapsePosition
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,
          TVector<double> *__return_storage_ptr__,int param_1,TVector<double> *param_2)

{
  double dVar1;
  EVertexControl EVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  
  if ((this->field_0xc8 != '\0') && (*(int *)&this->field_0x68 != *(int *)&this->field_0x94)) {
    puVar7 = *(undefined1 **)&this->field_0xa0;
    if (*(undefined1 **)&this->field_0xa0 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x98;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)(*(int *)&this->field_0xa8 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&this->field_0x60);
        if (*piVar5 == param_1) {
          piVar4 = piVar5 + 2;
          if (piVar5 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          if (piVar4 != (int *)0x0) {
            plVar6 = *(longlong **)(piVar4 + 2);
            if (plVar6 != (longlong *)0x0) goto LAB_14c740876;
            if (*(char *)((longlong)piVar4 + 1) == '\0') goto LAB_14c740887;
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  if (((this->field_0x128 == '\x02') && (*(longlong *)&this->field_0xd0 != 0)) &&
     ((*(longlong *)&this->field_0xe0 == 0 ||
      (EVar2 = Core::Private::Function::
               TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,enum_UE::Geometry::FMeshRefinerBase::EVertexControl___cdecl(int)>
               ::operator()(&this->field_0xe0,param_1), (EVar2 & NoProject) == AllowAll)))) {
    plVar6 = *(longlong **)&this->field_0xd0;
LAB_14c740876:
    (**(code **)(*plVar6 + 8))(plVar6,__return_storage_ptr__,param_2,param_1);
  }
  else {
LAB_14c740887:
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  }
  return __return_storage_ptr__;
}

// GetProjectedCollapsePosition @ 14c7408c0

TVector<double> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
GetProjectedCollapsePosition
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,
          TVector<double> *__return_storage_ptr__,int param_1,TVector<double> *param_2)

{
  double dVar1;
  EVertexControl EVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  
  if ((this->field_0xc8 != '\0') && (*(int *)&this->field_0x68 != *(int *)&this->field_0x94)) {
    puVar7 = *(undefined1 **)&this->field_0xa0;
    if (*(undefined1 **)&this->field_0xa0 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x98;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)(*(int *)&this->field_0xa8 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&this->field_0x60);
        if (*piVar5 == param_1) {
          piVar4 = piVar5 + 2;
          if (piVar5 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          if (piVar4 != (int *)0x0) {
            plVar6 = *(longlong **)(piVar4 + 2);
            if (plVar6 != (longlong *)0x0) goto LAB_14c740996;
            if (*(char *)((longlong)piVar4 + 1) == '\0') goto LAB_14c7409a7;
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  if (((this->field_0x128 == '\x02') && (*(longlong *)&this->field_0xd0 != 0)) &&
     ((*(longlong *)&this->field_0xe0 == 0 ||
      (EVar2 = Core::Private::Function::
               TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,enum_UE::Geometry::FMeshRefinerBase::EVertexControl___cdecl(int)>
               ::operator()(&this->field_0xe0,param_1), (EVar2 & NoProject) == AllowAll)))) {
    plVar6 = *(longlong **)&this->field_0xd0;
LAB_14c740996:
    (**(code **)(*plVar6 + 8))(plVar6,__return_storage_ptr__,param_2,param_1);
  }
  else {
LAB_14c7409a7:
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  }
  return __return_storage_ptr__;
}

// GetProjectedCollapsePosition @ 14c7409e0

TVector<double> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
GetProjectedCollapsePosition
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,
          TVector<double> *__return_storage_ptr__,int param_1,TVector<double> *param_2)

{
  double dVar1;
  EVertexControl EVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  
  if ((this->field_0xc8 != '\0') && (*(int *)&this->field_0x68 != *(int *)&this->field_0x94)) {
    puVar7 = *(undefined1 **)&this->field_0xa0;
    if (*(undefined1 **)&this->field_0xa0 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x98;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)(*(int *)&this->field_0xa8 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&this->field_0x60);
        if (*piVar5 == param_1) {
          piVar4 = piVar5 + 2;
          if (piVar5 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          if (piVar4 != (int *)0x0) {
            plVar6 = *(longlong **)(piVar4 + 2);
            if (plVar6 != (longlong *)0x0) goto LAB_14c740ab6;
            if (*(char *)((longlong)piVar4 + 1) == '\0') goto LAB_14c740ac7;
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  if (((this->field_0x128 == '\x02') && (*(longlong *)&this->field_0xd0 != 0)) &&
     ((*(longlong *)&this->field_0xe0 == 0 ||
      (EVar2 = Core::Private::Function::
               TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,enum_UE::Geometry::FMeshRefinerBase::EVertexControl___cdecl(int)>
               ::operator()(&this->field_0xe0,param_1), (EVar2 & NoProject) == AllowAll)))) {
    plVar6 = *(longlong **)&this->field_0xd0;
LAB_14c740ab6:
    (**(code **)(*plVar6 + 8))(plVar6,__return_storage_ptr__,param_2,param_1);
  }
  else {
LAB_14c740ac7:
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  }
  return __return_storage_ptr__;
}

// GetProjectedPoint @ 14c740b00

TVector<double> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::GetProjectedPoint
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,
          TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  longlong *plVar1;
  double dVar2;
  
  if ((this->field_0x128 == '\x02') &&
     (plVar1 = *(longlong **)&this->field_0xd0, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1,__return_storage_ptr__,param_1,0xffffffff);
    return __return_storage_ptr__;
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// GetProjectedPoint @ 14c740b60

TVector<double> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::GetProjectedPoint
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,
          TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  longlong *plVar1;
  double dVar2;
  
  if ((this->field_0x128 == '\x02') &&
     (plVar1 = *(longlong **)&this->field_0xd0, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1,__return_storage_ptr__,param_1,0xffffffff);
    return __return_storage_ptr__;
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// GetProjectedPoint @ 14c740bc0

TVector<double> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::GetProjectedPoint
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,
          TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  longlong *plVar1;
  double dVar2;
  
  if ((this->field_0x128 == '\x02') &&
     (plVar1 = *(longlong **)&this->field_0xd0, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1,__return_storage_ptr__,param_1,0xffffffff);
    return __return_storage_ptr__;
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// InitializeQueue @ 14c747d70

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::InitializeQueue
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> *pTVar1;
  uint *puVar2;
  TArray<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::QEdge,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FIndexPriorityQueue *this_00;
  FIndex2i_u_0 *pFVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  longlong local_res20;
  ForAnyElementType local_1a8;
  int local_1a0;
  int local_19c;
  FEdgeError local_198;
  FIndex2i_u_0 local_190;
  FIndex2i_u_0 FStack_188;
  TVector<double>_u_0 local_180;
  TQuadricError<double> local_168;
  uint local_118;
  undefined4 uStack_114;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  
  pTVar3 = &this->EdgeQuadrics;
  piVar5 = &(this->EdgeQuadrics).ArrayNum;
  iVar23 = *piVar5;
  uVar20 = *(int *)(*(longlong *)&this->field_0x8 + 0x1d0) * 0x200 +
           *(int *)(*(longlong *)&this->field_0x8 + 0x1d4);
  if (iVar23 < (int)uVar20) {
    iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x70,8,uVar20 - iVar23,&pTVar3->AllocatorInstance,piVar5,
                        &(this->EdgeQuadrics).ArrayMax);
    DefaultConstructItems<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::QEdge,int>
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 0x70,uVar20 - iVar23);
  }
  else {
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    if ((int)uVar20 < iVar23) {
      uVar15 = iVar23 - uVar20;
      if (((int)(uVar20 | uVar15) < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (uVar15 != 0) {
        pFVar11 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x70;
        iVar23 = (*piVar5 - uVar15) - uVar20;
        if (iVar23 != 0) {
          memmove(pFVar11,pFVar11 + (longlong)(int)uVar15 * 0x70,(longlong)iVar23 * 0x70);
        }
        *piVar5 = *piVar5 - uVar15;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,8,&pTVar3->AllocatorInstance,*piVar5,&(this->EdgeQuadrics).ArrayMax);
        FIndexPriorityQueue::Initialize(&this->EdgeQueue,uVar20);
        goto LAB_14c747efd;
      }
    }
  }
  FIndexPriorityQueue::Initialize(&this->EdgeQueue,uVar20);
  local_198.error = 3.4028235e+38;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_19c = 0;
  local_198.eid = -1;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
LAB_14c747efd:
  local_198.eid = -1;
  local_198.error = 3.4028235e+38;
  local_19c = 0;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  uVar21 = 0;
  uVar15 = 0;
  local_1a0 = 0;
  if ((uVar20 != 0) &&
     (Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar20,&local_1a8,0,&local_19c), 0 < (int)uVar20)) {
    uVar19 = (ulonglong)uVar20;
    do {
      if (((local_1a8.Data <= &local_198) &&
          (&local_198 < (FEdgeError *)(local_1a8.Data + (longlong)local_19c * 8))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (local_1a0 == local_19c) {
        local_1a0 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_1a8,&local_19c);
      }
      iVar23 = local_1a0 + 1;
      *(ulonglong *)(local_1a8.Data + (longlong)local_1a0 * 8) =
           CONCAT44(local_198.eid,local_198.error);
      uVar19 = uVar19 - 1;
      local_1a0 = iVar23;
    } while (uVar19 != 0);
  }
  lVar24 = *(longlong *)&this->field_0x8;
  uVar20 = *(int *)(lVar24 + 0x1d0) * 0x200 + *(int *)(lVar24 + 0x1d4);
  uVar19 = uVar21;
  if (((uVar20 != 0) &&
      (uVar19 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar24 + 0x1d8) - 1U))) &&
     (uVar19 = 1, 1 < (int)uVar20)) {
    do {
      uVar14 = (ulonglong)((uint)uVar19 & 0x1ff);
      lVar12 = (*(undefined8 **)(lVar24 + 0x1d8))[uVar19 >> 9];
      if ((*(short *)(lVar12 + uVar14 * 2) != 0) && (*(short *)(lVar12 + uVar14 * 2) != -1)) break;
      uVar16 = (uint)uVar19 + 1;
      uVar19 = (ulonglong)uVar16;
    } while ((int)uVar16 < (int)uVar20);
  }
  uVar18 = (uint)uVar19;
  uVar16 = 0;
joined_r0x00014c748078:
  if (uVar18 != uVar20) {
    while( true ) {
      uVar17 = (uint)uVar19;
      pFVar4 = (FIndex2i_u_0 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) + (uVar19 >> 9) * 8) +
               (ulonglong)(uVar17 & 0x1ff) * 0x10);
      local_190 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar4->_s_0;
      FStack_188 = pFVar4[1];
      AssembleEdgeQuadric(this,&local_168,(FEdge *)&local_190._s_0);
      OptimalPoint(this,(TVector<double> *)&local_180._s_0,uVar17,&local_168,local_190._s_0.A,
                   local_190._s_0.B);
      uVar18 = uVar15;
      if ((int)uVar17 < local_1a0) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      local_res18 = CONCAT44(uVar17,(float)((local_180._s_0.X * local_168.Axy +
                                             local_168.Ayy * local_180._s_0.Y +
                                            local_168.Ayz * local_180._s_0.Z) * local_180._s_0.Y +
                                            (local_180._s_0.X * local_168.Axx +
                                             local_168.Axy * local_180._s_0.Y +
                                            local_180._s_0.Z * local_168.Axz) * local_180._s_0.X +
                                            (local_168.Axz * local_180._s_0.X +
                                             local_168.Ayz * local_180._s_0.Y +
                                            local_168.Azz * local_180._s_0.Z) * local_180._s_0.Z +
                                            local_168.by * local_180._s_0.Y +
                                            local_168.bz * local_180._s_0.Z +
                                            local_168.bz * local_180._s_0.Z +
                                            local_168.bx * local_180._s_0.X +
                                            local_168.by * local_180._s_0.Y +
                                            local_168.bx * local_180._s_0.X + local_168.c));
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(longlong *)(local_1a8.Data + (longlong)(int)uVar17 * 8) = local_res18;
      dStack_110 = local_168.Axx;
      dStack_108 = local_168.Axy;
      dStack_100 = local_168.Axz;
      dStack_f8 = local_168.Ayy;
      uVar18 = uVar16;
      if ((int)uVar17 < (this->EdgeQuadrics).ArrayNum) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      local_f0 = local_168.Ayz;
      dStack_e8 = local_168.Azz;
      local_e0 = local_168.bx;
      dStack_d8 = local_168.by;
      local_d0 = local_168.bz;
      dStack_c8 = local_168.c;
      local_b0 = local_180._s_0.Z;
      local_c0 = local_180._s_0.X;
      dStack_b8 = local_180._s_0.Y;
      local_118 = uVar17;
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar11 = (pTVar3->AllocatorInstance).Data;
      uVar18 = uVar17 + 1;
      uVar19 = (ulonglong)uVar18;
      lVar12 = (longlong)(int)uVar17 * 0x70;
      *(ulonglong *)(pFVar11 + lVar12) = CONCAT44(uStack_114,local_118);
      *(double *)(pFVar11 + lVar12 + 8) = dStack_110;
      *(double *)(pFVar11 + lVar12 + 0x10) = dStack_108;
      *(double *)(pFVar11 + lVar12 + 0x10 + 8) = dStack_100;
      *(double *)(pFVar11 + lVar12 + 0x20) = dStack_f8;
      *(double *)(pFVar11 + lVar12 + 0x20 + 8) = local_f0;
      *(double *)(pFVar11 + lVar12 + 0x30) = dStack_e8;
      *(double *)(pFVar11 + lVar12 + 0x30 + 8) = local_e0;
      *(double *)(pFVar11 + lVar12 + 0x40) = dStack_d8;
      *(double *)(pFVar11 + lVar12 + 0x40 + 8) = local_d0;
      *(double *)(pFVar11 + lVar12 + 0x50) = dStack_c8;
      *(double *)(pFVar11 + lVar12 + 0x50 + 8) = local_c0;
      *(double *)(pFVar11 + lVar12 + 0x60) = dStack_b8;
      *(double *)(pFVar11 + lVar12 + 0x60 + 8) = local_b0;
      if ((int)uVar20 <= (int)uVar18) break;
      while( true ) {
        uVar14 = (ulonglong)((uint)uVar19 & 0x1ff);
        lVar12 = *(longlong *)(*(longlong *)(lVar24 + 0x1d8) + (uVar19 >> 9) * 8);
        if ((*(short *)(lVar12 + uVar14 * 2) != 0) && (*(short *)(lVar12 + uVar14 * 2) != -1))
        break;
        uVar18 = (uint)uVar19 + 1;
        uVar19 = (ulonglong)uVar18;
        if ((int)uVar20 <= (int)uVar18) goto joined_r0x00014c748078;
      }
    }
    goto joined_r0x00014c748078;
  }
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FEdgeError,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FEdgeError,TLess<void>_>_>
            ((FEdgeError *)local_1a8.Data,local_1a0,local_res8,(TLess<void> *)local_res10);
  local_res20 = (longlong)local_1a0;
  if (0 < local_res20) {
    local_res18 = 0;
    this_00 = &this->EdgeQueue;
    do {
      lVar24 = local_res18;
      uVar18 = (uint)uVar21;
      uVar20 = uVar16;
      if ((int)uVar18 < local_1a0) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar12 = *(longlong *)&this->field_0x8;
      uVar20 = *(uint *)(local_1a8.Data + lVar24 * 8 + 4);
      if (((-1 < (int)uVar20) &&
          ((int)uVar20 < *(int *)(lVar12 + 0x1d0) * 0x200 + *(int *)(lVar12 + 0x1d4))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar12 + 0x1d8) + (ulonglong)(uVar20 >> 9) * 8) +
                             (ulonglong)(uVar20 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        uVar17 = uVar15;
        if ((int)uVar20 < (this->EdgeQuadrics).ArrayNum) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar17 = uVar15;
        if ((int)uVar18 < local_1a0) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar6 = *(undefined4 *)&local_1a8.Data[lVar24 * 8].field_0x0;
        if (((this_00->EnableDebugChecks != false) &&
            (bVar9 = FIndexPriorityQueue::Contains(this_00,uVar20), bVar9)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Contains(NodeID) == false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                               ,0x7d,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar23 = (this->EdgeQueue).num_nodes + 1;
        (this->EdgeQueue).num_nodes = iVar23;
        uVar17 = uVar16;
        if ((int)uVar20 < (this->EdgeQueue).id_to_index.ArrayNum) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(int *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar20 * 4) =
             iVar23;
        uVar17 = (this->EdgeQueue).num_nodes;
        uVar13 = (this->EdgeQueue).nodes.CurBlock;
        uVar7 = (this->EdgeQueue).nodes.CurBlockUsed;
        uVar22 = uVar13 * 0x200 + uVar7;
        if (uVar17 == uVar22) {
          if (uVar7 == 0x200) {
            if (uVar13 == (this->EdgeQueue).nodes.Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                        (&(this->EdgeQueue).nodes);
            }
            pTVar1 = &(this->EdgeQueue).nodes;
            pTVar1->CurBlock = pTVar1->CurBlock + 1;
            uVar13 = (this->EdgeQueue).nodes.CurBlock;
            (this->EdgeQueue).nodes.CurBlockUsed = 0;
          }
          uVar17 = (this->EdgeQueue).nodes.CurBlockUsed;
LAB_14c748659:
          lVar12 = (longlong)(int)uVar17;
          lVar24 = *(longlong *)
                    ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                    (longlong)(int)uVar13 * 8);
          *(uint *)(lVar24 + lVar12 * 0xc) = uVar20;
          *(undefined4 *)(lVar24 + 4 + lVar12 * 0xc) = uVar6;
          *(int *)(lVar24 + 8 + lVar12 * 0xc) = iVar23;
          puVar2 = &(this->EdgeQueue).nodes.CurBlockUsed;
          *puVar2 = *puVar2 + 1;
        }
        else {
          if (uVar22 < uVar17) {
            TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                      (&(this->EdgeQueue).nodes,uVar17);
            uVar17 = (this->EdgeQueue).nodes.CurBlockUsed;
            if (uVar17 == 0x200) {
              if ((this->EdgeQueue).nodes.CurBlock == (this->EdgeQueue).nodes.Blocks.ArrayNum - 1U)
              {
                TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                          (&(this->EdgeQueue).nodes);
              }
              pTVar1 = &(this->EdgeQueue).nodes;
              pTVar1->CurBlock = pTVar1->CurBlock + 1;
              (this->EdgeQueue).nodes.CurBlockUsed = 0;
              uVar17 = uVar15;
            }
            uVar13 = (this->EdgeQueue).nodes.CurBlock;
            goto LAB_14c748659;
          }
          uVar21 = (ulonglong)(uVar17 & 0x1ff);
          lVar24 = *(longlong *)
                    ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar17 >> 9) * 8);
          *(uint *)(lVar24 + uVar21 * 0xc) = uVar20;
          *(undefined4 *)(lVar24 + 4 + uVar21 * 0xc) = uVar6;
          *(int *)(lVar24 + 8 + uVar21 * 0xc) = iVar23;
        }
        uVar20 = (this->EdgeQueue).num_nodes;
        FIndexPriorityQueue::move_up
                  (this_00,*(int *)(*(longlong *)
                                     ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                                     (ulonglong)(uVar20 >> 9) * 8) + 8 +
                                   (ulonglong)(uVar20 & 0x1ff) * 0xc));
        lVar24 = local_res18;
      }
      local_res18 = lVar24 + 1;
      uVar21 = (ulonglong)(uVar18 + 1);
    } while (local_res18 < local_res20);
  }
  if ((FEdgeError *)local_1a8.Data != (FEdgeError *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  return;
}

// InitializeQueue @ 14c748740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::InitializeQueue
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  int *piVar1;
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> *pTVar2;
  uint *puVar3;
  TArray<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::QEdge,TSizedDefaultAllocator<32>_>
  *pTVar4;
  FIndexPriorityQueue *this_00;
  FIndex2i_u_0 *pFVar5;
  undefined4 uVar6;
  uint uVar7;
  code *pcVar8;
  double dVar9;
  TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *pTVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *pTVar25;
  undefined1 auStackY_2d8 [32];
  FIdentityFunctor local_288 [8];
  ForAnyElementType local_280;
  int local_278;
  int local_274;
  FEdgeError local_270;
  TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *local_268;
  undefined8 local_260;
  int *local_258;
  FIndex2i_u_0 local_250;
  FIndex2i_u_0 FStack_248;
  TVector<double>_u_0 local_240;
  uint local_228;
  TAttrBasedQuadricError<double> local_220;
  double local_140;
  double dStack_138;
  double local_130;
  TAttrBasedQuadricError<double> local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  pTVar4 = &this->EdgeQuadrics;
  piVar1 = &(this->EdgeQuadrics).ArrayNum;
  iVar22 = *piVar1;
  uVar18 = *(int *)(*(longlong *)&this->field_0x8 + 0x1d0) * 0x200 +
           *(int *)(*(longlong *)&this->field_0x8 + 0x1d4);
  local_268 = this;
  local_258 = piVar1;
  if (iVar22 < (int)uVar18) {
    iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x100,8,uVar18 - iVar22,&pTVar4->AllocatorInstance,piVar1,
                        &(this->EdgeQuadrics).ArrayMax);
    DefaultConstructItems<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::QEdge,int>
              ((pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 0x100,uVar18 - iVar22);
LAB_14c7487db:
    FIndexPriorityQueue::Initialize(&this->EdgeQueue,uVar18);
    local_270.error = 3.4028235e+38;
    local_280.Data = (FScriptContainerElement *)0x0;
    local_274 = 0;
    local_270.eid = -1;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
  }
  else {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if (iVar22 <= (int)uVar18) goto LAB_14c7487db;
    uVar19 = iVar22 - uVar18;
    if (((int)(uVar18 | uVar19) < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (uVar19 == 0) goto LAB_14c7487db;
    pFVar15 = (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x100;
    iVar22 = (*piVar1 - uVar19) - uVar18;
    if (iVar22 != 0) {
      memmove(pFVar15,pFVar15 + (longlong)(int)uVar19 * 0x100,(longlong)iVar22 << 8);
    }
    *piVar1 = *piVar1 - uVar19;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,8,&pTVar4->AllocatorInstance,*piVar1,&(this->EdgeQuadrics).ArrayMax);
    FIndexPriorityQueue::Initialize(&this->EdgeQueue,uVar18);
  }
  local_270.eid = -1;
  local_270.error = 3.4028235e+38;
  local_274 = 0;
  local_280.Data = (FScriptContainerElement *)0x0;
  uVar20 = 0;
  local_278 = 0;
  if ((uVar18 != 0) &&
     (Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar18,&local_280,0,&local_274), 0 < (int)uVar18)) {
    uVar17 = (ulonglong)uVar18;
    do {
      if (((local_280.Data <= &local_270) &&
          (&local_270 < (FEdgeError *)(local_280.Data + (longlong)local_274 * 8))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (local_278 == local_274) {
        local_278 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_280,&local_274);
      }
      iVar22 = local_278 + 1;
      *(ulonglong *)(local_280.Data + (longlong)local_278 * 8) =
           CONCAT44(local_270.eid,local_270.error);
      uVar17 = uVar17 - 1;
      local_278 = iVar22;
    } while (uVar17 != 0);
  }
  lVar23 = *(longlong *)&this->field_0x8;
  uVar18 = *(int *)(lVar23 + 0x1d0) * 0x200 + *(int *)(lVar23 + 0x1d4);
  uVar17 = uVar20;
  if ((uVar18 != 0) &&
     (uVar17 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar23 + 0x1d8) - 1U))) {
    uVar17 = 1;
    uVar19 = 1;
    if ((int)uVar18 < 2) goto LAB_14c748a58;
    do {
      uVar16 = (ulonglong)((uint)uVar17 & 0x1ff);
      lVar24 = (*(undefined8 **)(lVar23 + 0x1d8))[uVar17 >> 9];
      if ((*(short *)(lVar24 + uVar16 * 2) != 0) && (*(short *)(lVar24 + uVar16 * 2) != -1)) break;
      uVar19 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar19;
    } while ((int)uVar19 < (int)uVar18);
  }
  uVar19 = (uint)uVar17;
LAB_14c748a58:
joined_r0x00014c748a58:
  if (uVar19 != uVar18) {
    while( true ) {
      uVar19 = (uint)uVar17;
      pFVar5 = (FIndex2i_u_0 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) + (uVar17 >> 9) * 8) +
               (ulonglong)(uVar19 & 0x1ff) * 0x10);
      local_250 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar5->_s_0;
      FStack_248 = pFVar5[1];
      AssembleEdgeQuadric(this,&local_128,(FEdge *)&local_250._s_0);
      OptimalPoint(this,(TVector<double> *)&local_240._s_0,uVar19,&local_128,local_250._s_0.A,
                   local_250._s_0.B);
      dVar9 = TAttrBasedQuadricError<double>::Evaluate
                        (&local_128,(TVector<double> *)&local_240._s_0);
      uVar13 = 0;
      if ((int)uVar19 < local_278) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      local_260 = CONCAT44(uVar19,(float)dVar9);
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(longlong *)(local_280.Data + (longlong)(int)uVar19 * 8) = local_260;
      TAttrBasedQuadricError<double>::TAttrBasedQuadricError<double>(&local_220);
      local_220._padding_ = local_128._padding_;
      local_220._padding_ = local_128._padding_;
      local_220._padding_ = local_128._padding_;
      local_220._padding_ = local_128._padding_;
      local_220._padding_ = local_128._padding_;
      local_220._padding_ = local_128._padding_;
      uVar13 = 0;
      if ((int)uVar19 < *local_258) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      local_220._padding_ = local_128._padding_;
      local_220._padding_ = local_128._padding_;
      local_220._padding_ = local_128._padding_;
      local_220._padding_ = local_128._padding_;
      local_220._padding_ = local_128._padding_;
      local_220._padding_ = local_128._padding_;
      local_220._padding_ = local_128._padding_;
      local_220._padding_ = local_128._padding_;
      local_220.grad[0].field0_0x0._s_0.Z = local_128.grad[0].field0_0x0._s_0.Z;
      local_220.grad[1].field0_0x0._s_0.Z = local_128.grad[1].field0_0x0._s_0.Z;
      local_220.a = local_128.a;
      local_220.attrweight = local_128.attrweight;
      local_220.grad[0].field0_0x0._s_0.X = local_128.grad[0].field0_0x0._s_0.X;
      local_220.grad[0].field0_0x0._s_0.Y = local_128.grad[0].field0_0x0._s_0.Y;
      local_220.grad[2].field0_0x0._s_0.Z = local_128.grad[2].field0_0x0._s_0.Z;
      local_220.d[0] = local_128.d[0];
      local_220.grad[1].field0_0x0._s_0.X = local_128.grad[1].field0_0x0._s_0.X;
      local_220.grad[1].field0_0x0._s_0.Y = local_128.grad[1].field0_0x0._s_0.Y;
      local_220.d[1] = local_128.d[1];
      local_220.d[2] = local_128.d[2];
      local_220.grad[2].field0_0x0._s_0.X = local_128.grad[2].field0_0x0._s_0.X;
      local_220.grad[2].field0_0x0._s_0.Y = local_128.grad[2].field0_0x0._s_0.Y;
      local_130 = local_240._s_0.Z;
      local_140 = local_240._s_0.X;
      dStack_138 = local_240._s_0.Y;
      local_228 = uVar19;
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar24 = (longlong)(int)uVar19 * 0x100;
      pFVar15 = (local_268->EdgeQuadrics).AllocatorInstance.Data;
      *(uint *)(pFVar15 + lVar24) = uVar19;
      TAttrBasedQuadricError<double>::operator=
                ((TAttrBasedQuadricError<double> *)(pFVar15 + lVar24 + 8),&local_220);
      uVar19 = uVar19 + 1;
      uVar17 = (ulonglong)uVar19;
      *(double *)(pFVar15 + lVar24 + 0xe8) = local_140;
      *(double *)(pFVar15 + lVar24 + 0xe8 + 8) = dStack_138;
      *(double *)(pFVar15 + lVar24 + 0xf8) = local_130;
      this = local_268;
      if ((int)uVar18 <= (int)uVar19) break;
      while( true ) {
        uVar16 = (ulonglong)((uint)uVar17 & 0x1ff);
        lVar24 = *(longlong *)(*(longlong *)(lVar23 + 0x1d8) + (uVar17 >> 9) * 8);
        if ((*(short *)(lVar24 + uVar16 * 2) != 0) && (*(short *)(lVar24 + uVar16 * 2) != -1))
        break;
        uVar19 = (uint)uVar17 + 1;
        uVar17 = (ulonglong)uVar19;
        if ((int)uVar18 <= (int)uVar19) goto joined_r0x00014c748a58;
      }
    }
    goto joined_r0x00014c748a58;
  }
  AlgoImpl::
  IntroSortInternal<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FEdgeError,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FEdgeError,TLess<void>_>_>
            ((FEdgeError *)local_280.Data,local_278,local_288[0],(TLess<void> *)local_288);
  pTVar10 = local_268;
  local_258 = (int *)(longlong)local_278;
  if (0 < (longlong)local_258) {
    local_260 = 0;
    this_00 = &local_268->EdgeQueue;
    pTVar25 = local_268;
    do {
      lVar23 = local_260;
      uVar19 = (uint)uVar20;
      uVar18 = 0;
      if ((int)uVar19 < local_278) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar24 = *(longlong *)&pTVar25->field_0x8;
      uVar18 = *(uint *)(local_280.Data + lVar23 * 8 + 4);
      if (((-1 < (int)uVar18) &&
          ((int)uVar18 < *(int *)(lVar24 + 0x1d0) * 0x200 + *(int *)(lVar24 + 0x1d4))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar24 + 0x1d8) + (ulonglong)(uVar18 >> 9) * 8) +
                             (ulonglong)(uVar18 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        uVar14 = 0;
        uVar13 = uVar14;
        if ((int)uVar18 < (local_268->EdgeQuadrics).ArrayNum) {
          uVar13 = ~uVar18 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar13 = uVar14;
        if ((int)uVar19 < local_278) {
          uVar13 = ~uVar19 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar6 = *(undefined4 *)&local_280.Data[lVar23 * 8].field_0x0;
        if (((this_00->EnableDebugChecks != false) &&
            (bVar11 = FIndexPriorityQueue::Contains(this_00,uVar18), bVar11)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Contains(NodeID) == false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0x7d,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar22 = (pTVar10->EdgeQueue).num_nodes + 1;
        (pTVar10->EdgeQueue).num_nodes = iVar22;
        if ((int)uVar18 < (pTVar10->EdgeQueue).id_to_index.ArrayNum) {
          uVar14 = ~uVar18 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(int *)((pTVar10->EdgeQueue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar18 * 4
                ) = iVar22;
        uVar13 = (pTVar10->EdgeQueue).num_nodes;
        uVar14 = (pTVar10->EdgeQueue).nodes.CurBlock;
        uVar7 = (pTVar10->EdgeQueue).nodes.CurBlockUsed;
        uVar21 = uVar14 * 0x200 + uVar7;
        if (uVar13 == uVar21) {
          if (uVar7 == 0x200) {
            if (uVar14 == (pTVar10->EdgeQueue).nodes.Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                        (&(pTVar10->EdgeQueue).nodes);
            }
            pTVar2 = &(pTVar10->EdgeQueue).nodes;
            pTVar2->CurBlock = pTVar2->CurBlock + 1;
            uVar14 = (pTVar10->EdgeQueue).nodes.CurBlock;
            (pTVar10->EdgeQueue).nodes.CurBlockUsed = 0;
          }
          uVar13 = (pTVar10->EdgeQueue).nodes.CurBlockUsed;
LAB_14c748fa7:
          lVar24 = (longlong)(int)uVar13;
          lVar23 = *(longlong *)
                    ((pTVar10->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                    (longlong)(int)uVar14 * 8);
          *(uint *)(lVar23 + lVar24 * 0xc) = uVar18;
          *(undefined4 *)(lVar23 + 4 + lVar24 * 0xc) = uVar6;
          *(int *)(lVar23 + 8 + lVar24 * 0xc) = iVar22;
          puVar3 = &(pTVar10->EdgeQueue).nodes.CurBlockUsed;
          *puVar3 = *puVar3 + 1;
        }
        else {
          if (uVar21 < uVar13) {
            TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                      (&(pTVar10->EdgeQueue).nodes,uVar13);
            uVar13 = (pTVar10->EdgeQueue).nodes.CurBlockUsed;
            if (uVar13 == 0x200) {
              if ((pTVar10->EdgeQueue).nodes.CurBlock ==
                  (pTVar10->EdgeQueue).nodes.Blocks.ArrayNum - 1U) {
                TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                          (&(pTVar10->EdgeQueue).nodes);
              }
              pTVar2 = &(pTVar10->EdgeQueue).nodes;
              pTVar2->CurBlock = pTVar2->CurBlock + 1;
              (pTVar10->EdgeQueue).nodes.CurBlockUsed = 0;
              uVar13 = 0;
            }
            uVar14 = (pTVar10->EdgeQueue).nodes.CurBlock;
            goto LAB_14c748fa7;
          }
          uVar20 = (ulonglong)(uVar13 & 0x1ff);
          lVar23 = *(longlong *)
                    ((pTVar10->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar13 >> 9) * 8);
          *(uint *)(lVar23 + uVar20 * 0xc) = uVar18;
          *(undefined4 *)(lVar23 + 4 + uVar20 * 0xc) = uVar6;
          *(int *)(lVar23 + 8 + uVar20 * 0xc) = iVar22;
        }
        uVar18 = (pTVar10->EdgeQueue).num_nodes;
        FIndexPriorityQueue::move_up
                  (this_00,*(int *)(*(longlong *)
                                     ((pTVar10->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                                     (ulonglong)(uVar18 >> 9) * 8) + 8 +
                                   (ulonglong)(uVar18 & 0x1ff) * 0xc));
        lVar23 = local_260;
        pTVar25 = local_268;
      }
      local_260 = lVar23 + 1;
      uVar20 = (ulonglong)(uVar19 + 1);
    } while (local_260 < (longlong)local_258);
  }
  if ((FEdgeError *)local_280.Data != (FEdgeError *)0x0) {
    FMemory::Free(local_280.Data);
  }
  return;
}

// InitializeQueue @ 14c7490a0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::InitializeQueue
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> *pTVar1;
  uint *puVar2;
  TArray<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::QEdge,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FIndexPriorityQueue *this_00;
  FIndex2i_u_0 *pFVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  double dVar25;
  bool bVar26;
  int iVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  ulonglong uVar35;
  uint uVar36;
  ulonglong uVar37;
  uint uVar38;
  int iVar39;
  longlong lVar40;
  longlong lVar41;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  longlong local_res20;
  ForAnyElementType local_228;
  int local_220;
  int local_21c;
  FEdgeError local_218;
  FIndex2i_u_0 local_210;
  FIndex2i_u_0 FStack_208;
  TVector<double>_u_0 local_200;
  TVolPresQuadricError<double> local_1e8;
  double local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  
  pTVar3 = &this->EdgeQuadrics;
  piVar5 = &(this->EdgeQuadrics).ArrayNum;
  iVar39 = *piVar5;
  uVar36 = *(int *)(*(longlong *)&this->field_0x8 + 0x1d0) * 0x200 +
           *(int *)(*(longlong *)&this->field_0x8 + 0x1d4);
  if (iVar39 < (int)uVar36) {
    iVar27 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x90,8,uVar36 - iVar39,&pTVar3->AllocatorInstance,piVar5,
                        &(this->EdgeQuadrics).ArrayMax);
    DefaultConstructItems<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::QEdge,int>
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar27 * 0x90,uVar36 - iVar39);
  }
  else {
    if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
    }
    if ((int)uVar36 < iVar39) {
      uVar32 = iVar39 - uVar36;
      if (((int)(uVar36 | uVar32) < 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar26)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (uVar32 != 0) {
        pFVar29 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar36 * 0x90;
        iVar39 = (*piVar5 - uVar32) - uVar36;
        if (iVar39 != 0) {
          memmove(pFVar29,pFVar29 + (longlong)(int)uVar32 * 0x90,(longlong)iVar39 * 0x90);
        }
        *piVar5 = *piVar5 - uVar32;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x90,8,&pTVar3->AllocatorInstance,*piVar5,&(this->EdgeQuadrics).ArrayMax);
        FIndexPriorityQueue::Initialize(&this->EdgeQueue,uVar36);
        goto LAB_14c74923d;
      }
    }
  }
  FIndexPriorityQueue::Initialize(&this->EdgeQueue,uVar36);
  local_218.error = 3.4028235e+38;
  local_228.Data = (FScriptContainerElement *)0x0;
  local_21c = 0;
  local_218.eid = -1;
  if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
  }
LAB_14c74923d:
  local_218.eid = -1;
  local_218.error = 3.4028235e+38;
  local_21c = 0;
  local_228.Data = (FScriptContainerElement *)0x0;
  uVar37 = 0;
  uVar32 = 0;
  local_220 = 0;
  if ((uVar36 != 0) &&
     (Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar36,&local_228,0,&local_21c), 0 < (int)uVar36)) {
    uVar35 = (ulonglong)uVar36;
    do {
      if (((local_228.Data <= &local_218) &&
          (&local_218 < (FEdgeError *)(local_228.Data + (longlong)local_21c * 8))) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar26)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (local_220 == local_21c) {
        local_220 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_228,&local_21c);
      }
      iVar39 = local_220 + 1;
      *(ulonglong *)(local_228.Data + (longlong)local_220 * 8) =
           CONCAT44(local_218.eid,local_218.error);
      uVar35 = uVar35 - 1;
      local_220 = iVar39;
    } while (uVar35 != 0);
  }
  lVar40 = *(longlong *)&this->field_0x8;
  uVar36 = *(int *)(lVar40 + 0x1d0) * 0x200 + *(int *)(lVar40 + 0x1d4);
  uVar35 = uVar37;
  if (((uVar36 != 0) &&
      (uVar35 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar40 + 0x1d8) - 1U))) &&
     (uVar35 = 1, 1 < (int)uVar36)) {
    do {
      uVar31 = (ulonglong)((uint)uVar35 & 0x1ff);
      lVar41 = (*(undefined8 **)(lVar40 + 0x1d8))[uVar35 >> 9];
      if ((*(short *)(lVar41 + uVar31 * 2) != 0) && (*(short *)(lVar41 + uVar31 * 2) != -1)) break;
      uVar33 = (uint)uVar35 + 1;
      uVar35 = (ulonglong)uVar33;
    } while ((int)uVar33 < (int)uVar36);
  }
  uVar34 = (uint)uVar35;
  uVar33 = 0;
joined_r0x00014c7493b8:
  if (uVar34 != uVar36) {
    while( true ) {
      uVar34 = (uint)uVar35;
      lVar41 = (longlong)(int)uVar34;
      pFVar4 = (FIndex2i_u_0 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) + (uVar35 >> 9) * 8) +
               (ulonglong)(uVar34 & 0x1ff) * 0x10);
      local_210 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar4->_s_0;
      FStack_208 = pFVar4[1];
      AssembleEdgeQuadric(this,&local_1e8,(FEdge *)&local_210._s_0);
      OptimalPoint(this,(TVector<double> *)&local_200._s_0,uVar34,&local_1e8,local_210._s_0.A,
                   local_210._s_0.B);
      uVar28 = uVar32;
      if ((int)uVar34 < local_220) {
        uVar28 = ~uVar34 >> 0x1f;
      }
      local_res18 = CONCAT44(uVar34,(float)((local_200._s_0.X * (double)local_1e8._padding_ +
                                             (double)local_1e8._padding_ * local_200._s_0.Y +
                                            (double)local_1e8._padding_ * local_200._s_0.Z) *
                                            local_200._s_0.Y +
                                            (local_200._s_0.X * (double)local_1e8._padding_ +
                                             (double)local_1e8._padding_ * local_200._s_0.Y +
                                            local_200._s_0.Z * (double)local_1e8._padding_) *
                                            local_200._s_0.X +
                                            ((double)local_1e8._padding_ * local_200._s_0.X +
                                             (double)local_1e8._padding_ * local_200._s_0.Y +
                                            (double)local_1e8._padding_ * local_200._s_0.Z) *
                                            local_200._s_0.Z +
                                            (double)local_1e8._padding_ * local_200._s_0.Y +
                                            (double)local_1e8._padding_ * local_200._s_0.Z +
                                            (double)local_1e8._padding_ * local_200._s_0.Z +
                                            (double)local_1e8._padding_ * local_200._s_0.X +
                                            (double)local_1e8._padding_ * local_200._s_0.X +
                                            (double)local_1e8._padding_ * local_200._s_0.Y +
                                           (double)local_1e8._padding_));
      if ((uVar28 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      dVar25 = local_1e8.PlaneData.Dist;
      uVar24 = local_1e8.PlaneData.N.field0_0x0._s_0.Z;
      uVar23 = local_1e8.PlaneData.N.field0_0x0._s_0.Y;
      uVar22 = local_1e8.PlaneData.N.field0_0x0._s_0.X;
      lVar21 = local_1e8._padding_;
      lVar20 = local_1e8._padding_;
      lVar19 = local_1e8._padding_;
      lVar18 = local_1e8._padding_;
      lVar17 = local_1e8._padding_;
      lVar16 = local_1e8._padding_;
      lVar15 = local_1e8._padding_;
      lVar14 = local_1e8._padding_;
      lVar13 = local_1e8._padding_;
      lVar12 = local_1e8._padding_;
      uVar11 = local_200._s_0.Z;
      uVar10 = local_200._s_0.Y;
      uVar9 = local_200._s_0.X;
      *(longlong *)(local_228.Data + lVar41 * 8) = local_res18;
      uVar28 = uVar33;
      if ((int)uVar34 < (this->EdgeQuadrics).ArrayNum) {
        uVar28 = ~uVar34 >> 0x1f;
      }
      local_108 = local_1e8.PlaneData.Dist;
      local_110 = local_1e8.PlaneData.N.field0_0x0._s_0.Z;
      local_f0 = local_200._s_0.Z;
      local_170 = (double)local_1e8._padding_;
      dStack_168 = (double)local_1e8._padding_;
      local_160 = (double)local_1e8._padding_;
      dStack_158 = (double)local_1e8._padding_;
      local_150 = (double)local_1e8._padding_;
      dStack_148 = (double)local_1e8._padding_;
      local_140 = (double)local_1e8._padding_;
      dStack_138 = (double)local_1e8._padding_;
      local_130 = (double)local_1e8._padding_;
      dStack_128 = (double)local_1e8._padding_;
      local_120 = local_1e8.PlaneData.N.field0_0x0._s_0.X;
      dStack_118 = local_1e8.PlaneData.N.field0_0x0._s_0.Y;
      local_100 = local_200._s_0.X;
      dStack_f8 = local_200._s_0.Y;
      if ((uVar28 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar29 = (pTVar3->AllocatorInstance).Data;
      *(uint *)(pFVar29 + lVar41 * 0x90) = uVar34;
      uVar34 = uVar34 + 1;
      uVar35 = (ulonglong)uVar34;
      *(longlong *)(pFVar29 + lVar41 * 0x90 + 8) = lVar12;
      *(longlong *)(pFVar29 + lVar41 * 0x90 + 8 + 8) = lVar13;
      *(longlong *)(pFVar29 + lVar41 * 0x90 + 0x18) = lVar14;
      *(longlong *)(pFVar29 + lVar41 * 0x90 + 0x18 + 8) = lVar15;
      *(longlong *)(pFVar29 + lVar41 * 0x90 + 0x28) = lVar16;
      *(longlong *)(pFVar29 + lVar41 * 0x90 + 0x28 + 8) = lVar17;
      *(longlong *)(pFVar29 + lVar41 * 0x90 + 0x38) = lVar18;
      *(longlong *)(pFVar29 + lVar41 * 0x90 + 0x38 + 8) = lVar19;
      *(longlong *)(pFVar29 + lVar41 * 0x90 + 0x48) = lVar20;
      *(longlong *)(pFVar29 + lVar41 * 0x90 + 0x48 + 8) = lVar21;
      *(double *)(pFVar29 + lVar41 * 0x90 + 0x70) = dVar25;
      *(undefined8 *)(pFVar29 + lVar41 * 0x90 + 0x58) = uVar22;
      *(undefined8 *)(pFVar29 + lVar41 * 0x90 + 0x58 + 8) = uVar23;
      *(undefined8 *)(pFVar29 + lVar41 * 0x90 + 0x68) = uVar24;
      *(undefined8 *)(pFVar29 + lVar41 * 0x90 + 0x78) = uVar9;
      *(undefined8 *)(pFVar29 + lVar41 * 0x90 + 0x78 + 8) = uVar10;
      *(undefined8 *)(pFVar29 + lVar41 * 0x90 + 0x88) = uVar11;
      if ((int)uVar36 <= (int)uVar34) break;
      while( true ) {
        uVar31 = (ulonglong)((uint)uVar35 & 0x1ff);
        lVar41 = *(longlong *)(*(longlong *)(lVar40 + 0x1d8) + (uVar35 >> 9) * 8);
        if ((*(short *)(lVar41 + uVar31 * 2) != 0) && (*(short *)(lVar41 + uVar31 * 2) != -1))
        break;
        uVar34 = (uint)uVar35 + 1;
        uVar35 = (ulonglong)uVar34;
        if ((int)uVar36 <= (int)uVar34) goto joined_r0x00014c7493b8;
      }
    }
    goto joined_r0x00014c7493b8;
  }
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FEdgeError,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FEdgeError,TLess<void>_>_>
            ((FEdgeError *)local_228.Data,local_220,local_res8,(TLess<void> *)local_res10);
  local_res20 = (longlong)local_220;
  if (0 < local_res20) {
    local_res18 = 0;
    this_00 = &this->EdgeQueue;
    do {
      lVar40 = local_res18;
      uVar34 = (uint)uVar37;
      uVar36 = uVar33;
      if ((int)uVar34 < local_220) {
        uVar36 = ~uVar34 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar41 = *(longlong *)&this->field_0x8;
      uVar36 = *(uint *)(local_228.Data + lVar40 * 8 + 4);
      if (((-1 < (int)uVar36) &&
          ((int)uVar36 < *(int *)(lVar41 + 0x1d0) * 0x200 + *(int *)(lVar41 + 0x1d4))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar41 + 0x1d8) + (ulonglong)(uVar36 >> 9) * 8) +
                             (ulonglong)(uVar36 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        uVar28 = uVar32;
        if ((int)uVar36 < (this->EdgeQuadrics).ArrayNum) {
          uVar28 = ~uVar36 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar28 = uVar32;
        if ((int)uVar34 < local_220) {
          uVar28 = ~uVar34 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar6 = *(undefined4 *)&local_228.Data[lVar40 * 8].field_0x0;
        if (((this_00->EnableDebugChecks != false) &&
            (bVar26 = FIndexPriorityQueue::Contains(this_00,uVar36), bVar26)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Contains(NodeID) == false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0x7d,L""), bVar26)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar39 = (this->EdgeQueue).num_nodes + 1;
        (this->EdgeQueue).num_nodes = iVar39;
        uVar28 = uVar33;
        if ((int)uVar36 < (this->EdgeQueue).id_to_index.ArrayNum) {
          uVar28 = ~uVar36 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(int *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar36 * 4) =
             iVar39;
        uVar28 = (this->EdgeQueue).num_nodes;
        uVar30 = (this->EdgeQueue).nodes.CurBlock;
        uVar7 = (this->EdgeQueue).nodes.CurBlockUsed;
        uVar38 = uVar30 * 0x200 + uVar7;
        if (uVar28 == uVar38) {
          if (uVar7 == 0x200) {
            if (uVar30 == (this->EdgeQueue).nodes.Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                        (&(this->EdgeQueue).nodes);
            }
            pTVar1 = &(this->EdgeQueue).nodes;
            pTVar1->CurBlock = pTVar1->CurBlock + 1;
            uVar30 = (this->EdgeQueue).nodes.CurBlock;
            (this->EdgeQueue).nodes.CurBlockUsed = 0;
          }
          uVar28 = (this->EdgeQueue).nodes.CurBlockUsed;
LAB_14c749a49:
          lVar41 = (longlong)(int)uVar28;
          lVar40 = *(longlong *)
                    ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                    (longlong)(int)uVar30 * 8);
          *(uint *)(lVar40 + lVar41 * 0xc) = uVar36;
          *(undefined4 *)(lVar40 + 4 + lVar41 * 0xc) = uVar6;
          *(int *)(lVar40 + 8 + lVar41 * 0xc) = iVar39;
          puVar2 = &(this->EdgeQueue).nodes.CurBlockUsed;
          *puVar2 = *puVar2 + 1;
        }
        else {
          if (uVar38 < uVar28) {
            TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                      (&(this->EdgeQueue).nodes,uVar28);
            uVar28 = (this->EdgeQueue).nodes.CurBlockUsed;
            if (uVar28 == 0x200) {
              if ((this->EdgeQueue).nodes.CurBlock == (this->EdgeQueue).nodes.Blocks.ArrayNum - 1U)
              {
                TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                          (&(this->EdgeQueue).nodes);
              }
              pTVar1 = &(this->EdgeQueue).nodes;
              pTVar1->CurBlock = pTVar1->CurBlock + 1;
              (this->EdgeQueue).nodes.CurBlockUsed = 0;
              uVar28 = uVar32;
            }
            uVar30 = (this->EdgeQueue).nodes.CurBlock;
            goto LAB_14c749a49;
          }
          uVar37 = (ulonglong)(uVar28 & 0x1ff);
          lVar40 = *(longlong *)
                    ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar28 >> 9) * 8);
          *(uint *)(lVar40 + uVar37 * 0xc) = uVar36;
          *(undefined4 *)(lVar40 + 4 + uVar37 * 0xc) = uVar6;
          *(int *)(lVar40 + 8 + uVar37 * 0xc) = iVar39;
        }
        uVar36 = (this->EdgeQueue).num_nodes;
        FIndexPriorityQueue::move_up
                  (this_00,*(int *)(*(longlong *)
                                     ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                                     (ulonglong)(uVar36 >> 9) * 8) + 8 +
                                   (ulonglong)(uVar36 & 0x1ff) * 0xc));
        lVar40 = local_res18;
      }
      local_res18 = lVar40 + 1;
      uVar37 = (ulonglong)(uVar34 + 1);
    } while (local_res18 < local_res20);
  }
  if ((FEdgeError *)local_228.Data != (FEdgeError *)0x0) {
    FMemory::Free(local_228.Data);
  }
  return;
}

// InitializeSeamQuadrics @ 14c749b30

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::InitializeSeamQuadrics
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  double local_a8;
  TMeshSimplification<UE::Geometry::TQuadricError<double>_> *local_a0;
  undefined1 *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (this->bAllowSeamCollapse == false) {
    return;
  }
  local_a8 = this->SeamEdgeWeight;
  plVar10 = (longlong *)0x0;
  uStack_90 = 0;
  local_a0 = this;
  if (this->field_0xc8 != '\0') {
    uVar13 = *(uint *)&this->field_0x38;
    puVar1 = &this->field_0x20;
    puVar2 = &this->field_0x10;
    uStack_8c = 1;
    local_78 = 0;
    uStack_7c = uStack_90;
    if (uVar13 != 0) {
      puVar16 = *(uint **)&this->field_0x30;
      if (*(uint **)&this->field_0x30 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar12 = *puVar16;
      plVar14 = plVar10;
      local_78 = 0;
      uStack_90 = 0;
      while (uVar12 == 0) {
        iVar9 = (int)plVar10;
        local_78 = (int)plVar14 + 0x20;
        plVar14 = (longlong *)(ulonglong)local_78;
        uStack_90 = iVar9 + 1;
        plVar10 = (longlong *)(ulonglong)uStack_90;
        uStack_7c = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_90)
        goto LAB_14c749c0d;
        uVar12 = puVar16[(longlong)iVar9 + 1];
      }
      uStack_8c = -uVar12 & uVar12;
      uVar8 = (ulonglong)uStack_8c * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_res10 = (int)lVar7;
      uStack_7c = (local_78 - 1) + local_res10;
      if ((int)uVar13 < (int)uStack_7c) {
        uStack_7c = uVar13;
      }
    }
LAB_14c749c0d:
    uVar12 = *(uint *)&this->field_0x38;
    uVar11 = uVar12 & 0xffffffe0;
    iStack_70 = *(int *)&this->field_0x18 - *(int *)&this->field_0x44;
    uStack_80 = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uStack_8c,uStack_90);
    TStack_60.CurrentBitIndex = uStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar9 = (int)uVar12 >> 5;
    TStack_60._28_4_ = uStack_7c;
    TStack_60.BaseBitIndex = local_78;
    uStack_40 = CONCAT44(uStack_6c,iStack_70);
    local_98 = puVar2;
    local_88 = puVar1;
    uStack_74 = uStack_7c;
    local_68 = (longlong *)puVar2;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || ((int)uVar13 < (int)uVar12)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar13 = *(uint *)&this->field_0x38;
    if (uVar12 != uVar13) {
      puVar15 = *(undefined1 **)&this->field_0x30;
      if (*(undefined1 **)&this->field_0x30 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar9 * 4);
      while (uVar12 == 0) {
        lVar7 = (longlong)iVar9;
        uVar11 = uVar11 + 0x20;
        iVar9 = iVar9 + 1;
        uVar12 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_14c749d10;
        uVar12 = *(uint *)(puVar15 + lVar7 * 4 + 4);
      }
      uVar8 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar12 = (int)lVar7 + -1 + uVar11;
      if ((int)uVar13 < (int)uVar12) {
        uVar12 = uVar13;
      }
    }
LAB_14c749d10:
    while( true ) {
      plVar10 = local_68;
      if ((int)local_68[1] - *(int *)((longlong)local_68 + 0x34) != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FEdgeConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_60.CurrentBitIndex == uVar12) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (plVar10 == (longlong *)puVar2)) break;
      `UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
      InitializeSeamQuadrics'::__l2::<lambda_1>::operator()
                (&local_a8,*(int *)(*plVar10 + (longlong)TStack_60.CurrentBitIndex * 0x28));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    return;
  }
  lVar7 = *(longlong *)&this->field_0x8;
  plVar14 = plVar10;
  if (*(longlong **)(lVar7 + 0x208) != (longlong *)0x0) {
    plVar14 = *(longlong **)(lVar7 + 0x208);
  }
  uVar13 = *(int *)(lVar7 + 0x1d4) + *(int *)(lVar7 + 0x1d0) * 0x200;
  if ((uVar13 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x1d8) - 1U))) {
    plVar10 = (longlong *)&DAT_00000001;
    uVar12 = 1;
    if ((int)uVar13 < 2) goto joined_r0x00014c749de8;
    do {
      uVar8 = (ulonglong)((uint)plVar10 & 0x1ff);
      lVar3 = (*(undefined8 **)(lVar7 + 0x1d8))[(ulonglong)plVar10 >> 9];
      if ((*(short *)(lVar3 + uVar8 * 2) != 0) && (*(short *)(lVar3 + uVar8 * 2) != -1)) break;
      uVar12 = (uint)plVar10 + 1;
      plVar10 = (longlong *)(ulonglong)uVar12;
    } while ((int)uVar12 < (int)uVar13);
  }
  uVar12 = (uint)plVar10;
joined_r0x00014c749de8:
  do {
    if (uVar12 == uVar13) {
      return;
    }
    uVar12 = (uint)plVar10;
    if (*(int *)(*(longlong *)
                  (((*(FDynamicMesh3 **)&this->field_0x8)->Edges).Blocks.AllocatorInstance.Data +
                  ((ulonglong)plVar10 >> 9) * 8) + 0xc + (ulonglong)(uVar12 & 0x1ff) * 0x10) == -1)
    {
LAB_14c749e23:
      cVar6 = '\x01';
    }
    else {
      bVar5 = FDynamicMesh3::IsGroupBoundaryEdge(*(FDynamicMesh3 **)&this->field_0x8,uVar12);
      cVar6 = '\0';
      if (bVar5) goto LAB_14c749e23;
    }
    if (plVar14 == (longlong *)0x0) {
LAB_14c749e4e:
      if (cVar6 != '\0') goto LAB_14c749e52;
    }
    else {
      if ((cVar6 == '\0') &&
         (cVar6 = (**(code **)(*plVar14 + 0xa0))(plVar14,plVar10), cVar6 == '\0')) {
        cVar6 = (**(code **)(*plVar14 + 0x80))(plVar14,plVar10);
        goto LAB_14c749e4e;
      }
LAB_14c749e52:
      `UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
      InitializeSeamQuadrics'::__l2::<lambda_1>::operator()(&local_a8,uVar12);
    }
    uVar12 = uVar12 + 1;
    plVar10 = (longlong *)(ulonglong)uVar12;
    if ((int)uVar12 < (int)uVar13) {
      do {
        uVar8 = (ulonglong)((uint)plVar10 & 0x1ff);
        lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x1d8) + ((ulonglong)plVar10 >> 9) * 8);
        if ((*(short *)(lVar3 + uVar8 * 2) != 0) && (*(short *)(lVar3 + uVar8 * 2) != -1)) break;
        uVar12 = (uint)plVar10 + 1;
        plVar10 = (longlong *)(ulonglong)uVar12;
      } while ((int)uVar12 < (int)uVar13);
      uVar12 = (uint)plVar10;
    }
  } while( true );
}

// InitializeSeamQuadrics @ 14c749ef0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
InitializeSeamQuadrics(TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  double local_a8;
  TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *local_a0;
  undefined1 *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (this->bAllowSeamCollapse == false) {
    return;
  }
  local_a8 = this->SeamEdgeWeight;
  plVar10 = (longlong *)0x0;
  uStack_90 = 0;
  local_a0 = this;
  if (this->field_0xc8 != '\0') {
    uVar13 = *(uint *)&this->field_0x38;
    puVar1 = &this->field_0x20;
    puVar2 = &this->field_0x10;
    uStack_8c = 1;
    local_78 = 0;
    uStack_7c = uStack_90;
    if (uVar13 != 0) {
      puVar16 = *(uint **)&this->field_0x30;
      if (*(uint **)&this->field_0x30 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar12 = *puVar16;
      plVar14 = plVar10;
      local_78 = 0;
      uStack_90 = 0;
      while (uVar12 == 0) {
        iVar9 = (int)plVar10;
        local_78 = (int)plVar14 + 0x20;
        plVar14 = (longlong *)(ulonglong)local_78;
        uStack_90 = iVar9 + 1;
        plVar10 = (longlong *)(ulonglong)uStack_90;
        uStack_7c = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_90)
        goto LAB_14c749fcd;
        uVar12 = puVar16[(longlong)iVar9 + 1];
      }
      uStack_8c = -uVar12 & uVar12;
      uVar8 = (ulonglong)uStack_8c * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_res10 = (int)lVar7;
      uStack_7c = (local_78 - 1) + local_res10;
      if ((int)uVar13 < (int)uStack_7c) {
        uStack_7c = uVar13;
      }
    }
LAB_14c749fcd:
    uVar12 = *(uint *)&this->field_0x38;
    uVar11 = uVar12 & 0xffffffe0;
    iStack_70 = *(int *)&this->field_0x18 - *(int *)&this->field_0x44;
    uStack_80 = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uStack_8c,uStack_90);
    TStack_60.CurrentBitIndex = uStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar9 = (int)uVar12 >> 5;
    TStack_60._28_4_ = uStack_7c;
    TStack_60.BaseBitIndex = local_78;
    uStack_40 = CONCAT44(uStack_6c,iStack_70);
    local_98 = puVar2;
    local_88 = puVar1;
    uStack_74 = uStack_7c;
    local_68 = (longlong *)puVar2;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || ((int)uVar13 < (int)uVar12)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar13 = *(uint *)&this->field_0x38;
    if (uVar12 != uVar13) {
      puVar15 = *(undefined1 **)&this->field_0x30;
      if (*(undefined1 **)&this->field_0x30 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar9 * 4);
      while (uVar12 == 0) {
        lVar7 = (longlong)iVar9;
        uVar11 = uVar11 + 0x20;
        iVar9 = iVar9 + 1;
        uVar12 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_14c74a0d0;
        uVar12 = *(uint *)(puVar15 + lVar7 * 4 + 4);
      }
      uVar8 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar12 = (int)lVar7 + -1 + uVar11;
      if ((int)uVar13 < (int)uVar12) {
        uVar12 = uVar13;
      }
    }
LAB_14c74a0d0:
    while( true ) {
      plVar10 = local_68;
      if ((int)local_68[1] - *(int *)((longlong)local_68 + 0x34) != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FEdgeConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_60.CurrentBitIndex == uVar12) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (plVar10 == (longlong *)puVar2)) break;
      `UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
      InitializeSeamQuadrics'::__l2::<lambda_1>::operator()
                (&local_a8,*(int *)(*plVar10 + (longlong)TStack_60.CurrentBitIndex * 0x28));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    return;
  }
  lVar7 = *(longlong *)&this->field_0x8;
  plVar14 = plVar10;
  if (*(longlong **)(lVar7 + 0x208) != (longlong *)0x0) {
    plVar14 = *(longlong **)(lVar7 + 0x208);
  }
  uVar13 = *(int *)(lVar7 + 0x1d4) + *(int *)(lVar7 + 0x1d0) * 0x200;
  if ((uVar13 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x1d8) - 1U))) {
    plVar10 = (longlong *)&DAT_00000001;
    uVar12 = 1;
    if ((int)uVar13 < 2) goto joined_r0x00014c74a1a8;
    do {
      uVar8 = (ulonglong)((uint)plVar10 & 0x1ff);
      lVar3 = (*(undefined8 **)(lVar7 + 0x1d8))[(ulonglong)plVar10 >> 9];
      if ((*(short *)(lVar3 + uVar8 * 2) != 0) && (*(short *)(lVar3 + uVar8 * 2) != -1)) break;
      uVar12 = (uint)plVar10 + 1;
      plVar10 = (longlong *)(ulonglong)uVar12;
    } while ((int)uVar12 < (int)uVar13);
  }
  uVar12 = (uint)plVar10;
joined_r0x00014c74a1a8:
  do {
    if (uVar12 == uVar13) {
      return;
    }
    uVar12 = (uint)plVar10;
    if (*(int *)(*(longlong *)
                  (((*(FDynamicMesh3 **)&this->field_0x8)->Edges).Blocks.AllocatorInstance.Data +
                  ((ulonglong)plVar10 >> 9) * 8) + 0xc + (ulonglong)(uVar12 & 0x1ff) * 0x10) == -1)
    {
LAB_14c74a1e3:
      cVar6 = '\x01';
    }
    else {
      bVar5 = FDynamicMesh3::IsGroupBoundaryEdge(*(FDynamicMesh3 **)&this->field_0x8,uVar12);
      cVar6 = '\0';
      if (bVar5) goto LAB_14c74a1e3;
    }
    if (plVar14 == (longlong *)0x0) {
LAB_14c74a20e:
      if (cVar6 != '\0') goto LAB_14c74a212;
    }
    else {
      if ((cVar6 == '\0') &&
         (cVar6 = (**(code **)(*plVar14 + 0xa0))(plVar14,plVar10), cVar6 == '\0')) {
        cVar6 = (**(code **)(*plVar14 + 0x80))(plVar14,plVar10);
        goto LAB_14c74a20e;
      }
LAB_14c74a212:
      `UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
      InitializeSeamQuadrics'::__l2::<lambda_1>::operator()(&local_a8,uVar12);
    }
    uVar12 = uVar12 + 1;
    plVar10 = (longlong *)(ulonglong)uVar12;
    if ((int)uVar12 < (int)uVar13) {
      do {
        uVar8 = (ulonglong)((uint)plVar10 & 0x1ff);
        lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x1d8) + ((ulonglong)plVar10 >> 9) * 8);
        if ((*(short *)(lVar3 + uVar8 * 2) != 0) && (*(short *)(lVar3 + uVar8 * 2) != -1)) break;
        uVar12 = (uint)plVar10 + 1;
        plVar10 = (longlong *)(ulonglong)uVar12;
      } while ((int)uVar12 < (int)uVar13);
      uVar12 = (uint)plVar10;
    }
  } while( true );
}

// InitializeSeamQuadrics @ 14c74a2b0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
InitializeSeamQuadrics(TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  double local_a8;
  TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *local_a0;
  undefined1 *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (this->bAllowSeamCollapse == false) {
    return;
  }
  local_a8 = this->SeamEdgeWeight;
  plVar10 = (longlong *)0x0;
  uStack_90 = 0;
  local_a0 = this;
  if (this->field_0xc8 != '\0') {
    uVar13 = *(uint *)&this->field_0x38;
    puVar1 = &this->field_0x20;
    puVar2 = &this->field_0x10;
    uStack_8c = 1;
    local_78 = 0;
    uStack_7c = uStack_90;
    if (uVar13 != 0) {
      puVar16 = *(uint **)&this->field_0x30;
      if (*(uint **)&this->field_0x30 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar12 = *puVar16;
      plVar14 = plVar10;
      local_78 = 0;
      uStack_90 = 0;
      while (uVar12 == 0) {
        iVar9 = (int)plVar10;
        local_78 = (int)plVar14 + 0x20;
        plVar14 = (longlong *)(ulonglong)local_78;
        uStack_90 = iVar9 + 1;
        plVar10 = (longlong *)(ulonglong)uStack_90;
        uStack_7c = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_90)
        goto LAB_14c74a38d;
        uVar12 = puVar16[(longlong)iVar9 + 1];
      }
      uStack_8c = -uVar12 & uVar12;
      uVar8 = (ulonglong)uStack_8c * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_res10 = (int)lVar7;
      uStack_7c = (local_78 - 1) + local_res10;
      if ((int)uVar13 < (int)uStack_7c) {
        uStack_7c = uVar13;
      }
    }
LAB_14c74a38d:
    uVar12 = *(uint *)&this->field_0x38;
    uVar11 = uVar12 & 0xffffffe0;
    iStack_70 = *(int *)&this->field_0x18 - *(int *)&this->field_0x44;
    uStack_80 = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uStack_8c,uStack_90);
    TStack_60.CurrentBitIndex = uStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar9 = (int)uVar12 >> 5;
    TStack_60._28_4_ = uStack_7c;
    TStack_60.BaseBitIndex = local_78;
    uStack_40 = CONCAT44(uStack_6c,iStack_70);
    local_98 = puVar2;
    local_88 = puVar1;
    uStack_74 = uStack_7c;
    local_68 = (longlong *)puVar2;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || ((int)uVar13 < (int)uVar12)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar13 = *(uint *)&this->field_0x38;
    if (uVar12 != uVar13) {
      puVar15 = *(undefined1 **)&this->field_0x30;
      if (*(undefined1 **)&this->field_0x30 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar9 * 4);
      while (uVar12 == 0) {
        lVar7 = (longlong)iVar9;
        uVar11 = uVar11 + 0x20;
        iVar9 = iVar9 + 1;
        uVar12 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_14c74a490;
        uVar12 = *(uint *)(puVar15 + lVar7 * 4 + 4);
      }
      uVar8 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar12 = (int)lVar7 + -1 + uVar11;
      if ((int)uVar13 < (int)uVar12) {
        uVar12 = uVar13;
      }
    }
LAB_14c74a490:
    while( true ) {
      plVar10 = local_68;
      if ((int)local_68[1] - *(int *)((longlong)local_68 + 0x34) != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FEdgeConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_60.CurrentBitIndex == uVar12) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (plVar10 == (longlong *)puVar2)) break;
      `UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
      InitializeSeamQuadrics'::__l2::<lambda_1>::operator()
                (&local_a8,*(int *)(*plVar10 + (longlong)TStack_60.CurrentBitIndex * 0x28));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    return;
  }
  lVar7 = *(longlong *)&this->field_0x8;
  plVar14 = plVar10;
  if (*(longlong **)(lVar7 + 0x208) != (longlong *)0x0) {
    plVar14 = *(longlong **)(lVar7 + 0x208);
  }
  uVar13 = *(int *)(lVar7 + 0x1d4) + *(int *)(lVar7 + 0x1d0) * 0x200;
  if ((uVar13 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x1d8) - 1U))) {
    plVar10 = (longlong *)&DAT_00000001;
    uVar12 = 1;
    if ((int)uVar13 < 2) goto joined_r0x00014c74a568;
    do {
      uVar8 = (ulonglong)((uint)plVar10 & 0x1ff);
      lVar3 = (*(undefined8 **)(lVar7 + 0x1d8))[(ulonglong)plVar10 >> 9];
      if ((*(short *)(lVar3 + uVar8 * 2) != 0) && (*(short *)(lVar3 + uVar8 * 2) != -1)) break;
      uVar12 = (uint)plVar10 + 1;
      plVar10 = (longlong *)(ulonglong)uVar12;
    } while ((int)uVar12 < (int)uVar13);
  }
  uVar12 = (uint)plVar10;
joined_r0x00014c74a568:
  do {
    if (uVar12 == uVar13) {
      return;
    }
    uVar12 = (uint)plVar10;
    if (*(int *)(*(longlong *)
                  (((*(FDynamicMesh3 **)&this->field_0x8)->Edges).Blocks.AllocatorInstance.Data +
                  ((ulonglong)plVar10 >> 9) * 8) + 0xc + (ulonglong)(uVar12 & 0x1ff) * 0x10) == -1)
    {
LAB_14c74a5a3:
      cVar6 = '\x01';
    }
    else {
      bVar5 = FDynamicMesh3::IsGroupBoundaryEdge(*(FDynamicMesh3 **)&this->field_0x8,uVar12);
      cVar6 = '\0';
      if (bVar5) goto LAB_14c74a5a3;
    }
    if (plVar14 == (longlong *)0x0) {
LAB_14c74a5ce:
      if (cVar6 != '\0') goto LAB_14c74a5d2;
    }
    else {
      if ((cVar6 == '\0') &&
         (cVar6 = (**(code **)(*plVar14 + 0xa0))(plVar14,plVar10), cVar6 == '\0')) {
        cVar6 = (**(code **)(*plVar14 + 0x80))(plVar14,plVar10);
        goto LAB_14c74a5ce;
      }
LAB_14c74a5d2:
      `UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
      InitializeSeamQuadrics'::__l2::<lambda_1>::operator()(&local_a8,uVar12);
    }
    uVar12 = uVar12 + 1;
    plVar10 = (longlong *)(ulonglong)uVar12;
    if ((int)uVar12 < (int)uVar13) {
      do {
        uVar8 = (ulonglong)((uint)plVar10 & 0x1ff);
        lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x1d8) + ((ulonglong)plVar10 >> 9) * 8);
        if ((*(short *)(lVar3 + uVar8 * 2) != 0) && (*(short *)(lVar3 + uVar8 * 2) != -1)) break;
        uVar12 = (uint)plVar10 + 1;
        plVar10 = (longlong *)(ulonglong)uVar12;
      } while ((int)uVar12 < (int)uVar13);
      uVar12 = (uint)plVar10;
    }
  } while( true );
}

// InitializeTriQuadrics @ 14c74a670

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::InitializeTriQuadrics
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  double dVar22;
  double dVar23;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0 [7];
  
  iVar15 = *(int *)(*(longlong *)&this->field_0x8 + 0x140) * 0x200 +
           *(int *)(*(longlong *)&this->field_0x8 + 0x144);
  TArray<UE::Geometry::TQuadricError<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->triQuadrics,iVar15,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&this->triAreas,iVar15,Default);
  lVar1 = *(longlong *)&this->field_0x8;
  uVar16 = 0;
  uVar17 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
  if ((uVar17 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    uVar16 = 1;
    bVar19 = uVar17 == 1;
    if ((int)uVar17 < 2) goto LAB_14c74a728;
    do {
      lVar18 = (*(undefined8 **)(lVar1 + 0x148))[uVar16 >> 9];
      if ((*(short *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) break;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)uVar17);
  }
  bVar19 = uVar16 == uVar17;
LAB_14c74a728:
  if (!bVar19) {
LAB_14c74a790:
    do {
      uVar14 = 0;
      if ((int)uVar16 < (this->triAreas).ArrayNum) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar18 = (longlong)(int)uVar16;
      FDynamicMesh3::GetTriInfo
                (*(FDynamicMesh3 **)&this->field_0x8,uVar16,(TVector<double> *)&local_f8._s_0,
                 (double *)((this->triAreas).AllocatorInstance.Data + lVar18 * 8),
                 (TVector<double> *)&local_e0[0]._s_0);
      dVar9 = local_f8._s_0.X * local_f8._s_0.Y;
      dVar10 = local_f8._s_0.Z * local_f8._s_0.X;
      uVar14 = 0;
      if ((int)uVar16 < (this->triQuadrics).ArrayNum) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      dVar12 = local_f8._s_0.X * local_f8._s_0.X;
      dVar13 = local_f8._s_0.Y * local_f8._s_0.Y;
      dVar11 = local_f8._s_0.Z * local_f8._s_0.Y;
      dVar8 = local_f8._s_0.Z * local_f8._s_0.Z;
      dVar4 = (double)local_e0[0]._8_8_ * dVar9 + (double)local_e0[0]._0_8_ * dVar12 +
              (double)local_e0[0]._16_8_ * dVar10;
      dVar6 = (double)local_e0[0]._8_8_ * dVar13 + (double)local_e0[0]._0_8_ * dVar9 +
              (double)local_e0[0]._16_8_ * dVar11;
      dVar5 = dVar4 * (double)local_e0[0]._0_8_;
      dVar7 = dVar6 * (double)local_e0[0]._8_8_;
      dVar22 = (double)local_e0[0]._8_8_ * dVar11 + (double)local_e0[0]._0_8_ * dVar10 +
               (double)local_e0[0]._16_8_ * dVar8;
      uVar20 = (uint)__xmm_80000000000000008000000000000000;
      uVar21 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      dVar23 = dVar22 * (double)local_e0[0]._16_8_;
      if ((uVar14 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->triQuadrics).AllocatorInstance.Data;
      uVar16 = uVar16 + 1;
      *(double *)(pFVar2 + lVar18 * 0x50) = dVar12;
      *(double *)(pFVar2 + lVar18 * 0x50 + 8) = dVar9;
      *(double *)(pFVar2 + lVar18 * 0x50 + 0x10) = dVar10;
      *(double *)(pFVar2 + lVar18 * 0x50 + 0x18) = dVar13;
      *(double *)(pFVar2 + lVar18 * 0x50 + 0x20) = dVar11;
      *(double *)(pFVar2 + lVar18 * 0x50 + 0x28) = dVar8;
      *(ulonglong *)(pFVar2 + lVar18 * 0x50 + 0x30) =
           CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ uVar21,SUB84(dVar4,0) ^ uVar20);
      *(ulonglong *)(pFVar2 + lVar18 * 0x50 + 0x38) =
           CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ uVar21,SUB84(dVar6,0) ^ uVar20);
      *(ulonglong *)(pFVar2 + lVar18 * 0x50 + 0x40) =
           CONCAT44((uint)((ulonglong)dVar22 >> 0x20) ^ uVar21,SUB84(dVar22,0) ^ uVar20);
      *(double *)(pFVar2 + lVar18 * 0x50 + 0x48) = dVar7 + dVar5 + dVar23;
      if ((int)uVar16 < (int)uVar17) {
        do {
          lVar18 = *(longlong *)(*(longlong *)(lVar1 + 0x148) + (ulonglong)(uVar16 >> 9) * 8);
          if ((*(short *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) goto LAB_14c74a790;
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)uVar17);
      }
    } while (uVar16 != uVar17);
  }
  return;
}

// InitializeTriQuadrics @ 14c74aa60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
InitializeTriQuadrics(TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  double dVar5;
  uint uVar6;
  TAttrBasedQuadricError<double> *pTVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStackY_178 [32];
  TVector<double> local_148;
  TVector<double> local_130;
  TAttrBasedQuadricError<double> local_118;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iVar8 = *(int *)(*(longlong *)&this->field_0x8 + 0x140) * 0x200 +
          *(int *)(*(longlong *)&this->field_0x8 + 0x144);
  TArray<UE::Geometry::TAttrBasedQuadricError<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->triQuadrics,iVar8,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&this->triAreas,iVar8,Default);
  lVar1 = *(longlong *)&this->field_0x8;
  uVar9 = 0;
  uVar10 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
  if ((uVar10 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    uVar9 = 1;
    bVar12 = uVar10 == 1;
    if ((int)uVar10 < 2) goto LAB_14c74ab28;
    do {
      lVar11 = (*(undefined8 **)(lVar1 + 0x148))[uVar9 >> 9];
      if ((*(short *)(lVar11 + (ulonglong)(uVar9 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar11 + (ulonglong)(uVar9 & 0x1ff) * 2) != -1)) break;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar10);
  }
  bVar12 = uVar9 == uVar10;
LAB_14c74ab28:
  if (!bVar12) {
LAB_14c74ab50:
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->triAreas).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar11 = (longlong)(int)uVar9;
      pTVar7 = ComputeFaceQuadric(this,&local_118,uVar9,&local_130,&local_148,
                                  (double *)((this->triAreas).AllocatorInstance.Data + lVar11 * 8));
      uVar6 = 0;
      if ((int)uVar9 < (this->triQuadrics).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar4 = pTVar7->_padding_;
      pFVar2 = (this->triQuadrics).AllocatorInstance.Data;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 * 0xe0;
      *(longlong *)(pFVar2 + lVar11) = pTVar7->_padding_;
      *(longlong *)(pFVar2 + lVar11 + 8) = lVar4;
      lVar4 = pTVar7->_padding_;
      *(longlong *)(pFVar2 + lVar11 + 0x10) = pTVar7->_padding_;
      *(longlong *)(pFVar2 + lVar11 + 0x10 + 8) = lVar4;
      lVar4 = pTVar7->_padding_;
      *(longlong *)(pFVar2 + lVar11 + 0x20) = pTVar7->_padding_;
      *(longlong *)(pFVar2 + lVar11 + 0x20 + 8) = lVar4;
      lVar4 = pTVar7->_padding_;
      *(longlong *)(pFVar2 + lVar11 + 0x30) = pTVar7->_padding_;
      *(longlong *)(pFVar2 + lVar11 + 0x30 + 8) = lVar4;
      lVar4 = pTVar7->_padding_;
      *(longlong *)(pFVar2 + lVar11 + 0x40) = pTVar7->_padding_;
      *(longlong *)(pFVar2 + lVar11 + 0x40 + 8) = lVar4;
      lVar4 = pTVar7->_padding_;
      *(longlong *)(pFVar2 + lVar11 + 0x50) = pTVar7->_padding_;
      *(longlong *)(pFVar2 + lVar11 + 0x50 + 8) = lVar4;
      *(longlong *)(pFVar2 + lVar11 + 0x60) = pTVar7->_padding_;
      *(longlong *)(pFVar2 + lVar11 + 0x68) = pTVar7->_padding_;
      *(double *)(pFVar2 + lVar11 + 0x70) = pTVar7->a;
      *(double *)(pFVar2 + lVar11 + 0x78) = pTVar7->attrweight;
      dVar5 = pTVar7->grad[0].field0_0x0._s_0.Y;
      *(double *)(pFVar2 + lVar11 + 0x80) = pTVar7->grad[0].field0_0x0._s_0.X;
      *(double *)(pFVar2 + lVar11 + 0x80 + 8) = dVar5;
      *(double *)(pFVar2 + lVar11 + 0x90) = pTVar7->grad[0].field0_0x0._s_0.Z;
      dVar5 = pTVar7->grad[1].field0_0x0._s_0.Y;
      *(double *)(pFVar2 + lVar11 + 0x98) = pTVar7->grad[1].field0_0x0._s_0.X;
      *(double *)(pFVar2 + lVar11 + 0x98 + 8) = dVar5;
      *(double *)(pFVar2 + lVar11 + 0xa8) = pTVar7->grad[1].field0_0x0._s_0.Z;
      dVar5 = pTVar7->grad[2].field0_0x0._s_0.Y;
      *(double *)(pFVar2 + lVar11 + 0xb0) = pTVar7->grad[2].field0_0x0._s_0.X;
      *(double *)(pFVar2 + lVar11 + 0xb0 + 8) = dVar5;
      *(double *)(pFVar2 + lVar11 + 0xc0) = pTVar7->grad[2].field0_0x0._s_0.Z;
      *(double *)(pFVar2 + lVar11 + 200) = pTVar7->d[0];
      *(double *)(pFVar2 + lVar11 + 0xd0) = pTVar7->d[1];
      *(double *)(pFVar2 + lVar11 + 0xd8) = pTVar7->d[2];
      if ((int)uVar9 < (int)uVar10) {
        do {
          lVar11 = *(longlong *)(*(longlong *)(lVar1 + 0x148) + (ulonglong)(uVar9 >> 9) * 8);
          if ((*(short *)(lVar11 + (ulonglong)(uVar9 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar11 + (ulonglong)(uVar9 & 0x1ff) * 2) != -1)) goto LAB_14c74ab50;
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar10);
      }
    } while (uVar9 != uVar10);
  }
  return;
}

// InitializeTriQuadrics @ 14c74adb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
InitializeTriQuadrics(TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  bool bVar19;
  double dVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  TVector<double>_u_0 local_168;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  double dStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  double local_f0;
  undefined8 local_e8;
  TVector<double>_u_0 local_e0 [7];
  
  iVar15 = *(int *)(*(longlong *)&this->field_0x8 + 0x140) * 0x200 +
           *(int *)(*(longlong *)&this->field_0x8 + 0x144);
  TArray<UE::Geometry::TVolPresQuadricError<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->triQuadrics,iVar15,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&this->triAreas,iVar15,Default);
  lVar2 = *(longlong *)&this->field_0x8;
  uVar16 = 0;
  uVar17 = *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144);
  if ((uVar17 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x148) - 1U))) {
    uVar16 = 1;
    bVar19 = uVar17 == 1;
    if ((int)uVar17 < 2) goto LAB_14c74ae78;
    do {
      lVar18 = (*(undefined8 **)(lVar2 + 0x148))[uVar16 >> 9];
      if ((*(short *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) break;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)uVar17);
  }
  bVar19 = uVar16 == uVar17;
LAB_14c74ae78:
  if (!bVar19) {
    uVar23 = (uint)__xmm_80000000000000008000000000000000;
    uVar24 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
LAB_14c74aef0:
    do {
      uVar14 = 0;
      if ((int)uVar16 < (this->triAreas).ArrayNum) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar18 = (longlong)(int)uVar16;
      FDynamicMesh3::GetTriInfo
                (*(FDynamicMesh3 **)&this->field_0x8,uVar16,(TVector<double> *)&local_168._s_0,
                 (double *)((this->triAreas).AllocatorInstance.Data + lVar18 * 8),
                 (TVector<double> *)&local_e0[0]._s_0);
      uVar13 = local_168._s_0.Z;
      uVar12 = local_168._12_4_;
      uVar11 = local_168._8_4_;
      uVar10 = local_168._4_4_;
      uVar9 = local_168._0_4_;
      dVar8 = (double)CONCAT44(local_168._12_4_,local_168._8_4_);
      dVar7 = (double)CONCAT44(local_168._4_4_,local_168._0_4_);
      local_150 = dVar7 * dVar7;
      dStack_138 = dVar8 * dVar8;
      local_140 = local_168._s_0.Z * dVar7;
      dStack_148 = dVar8 * dVar7;
      local_130 = local_168._s_0.Z * dVar8;
      dStack_128 = local_168._s_0.Z * local_168._s_0.Z;
      dVar6 = (double)local_e0[0]._8_8_ * dStack_148 + (double)local_e0[0]._0_8_ * local_150 +
              (double)local_e0[0]._16_8_ * local_140;
      dVar5 = (double)local_e0[0]._8_8_ * dStack_138 + (double)local_e0[0]._0_8_ * dStack_148 +
              (double)local_e0[0]._16_8_ * local_130;
      dVar20 = (double)local_e0[0]._8_8_ * local_130 + (double)local_e0[0]._0_8_ * local_140 +
               (double)local_e0[0]._16_8_ * dStack_128;
      local_120 = CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ uVar24,SUB84(dVar6,0) ^ uVar23);
      uStack_118 = CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^ uVar24,SUB84(dVar5,0) ^ uVar23);
      local_110 = CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar24,SUB84(dVar20,0) ^ uVar23);
      local_f0 = local_168._s_0.Z;
      dStack_108 = dVar5 * (double)local_e0[0]._8_8_ + dVar6 * (double)local_e0[0]._0_8_ +
                   dVar20 * (double)local_e0[0]._16_8_;
      local_100 = local_168._0_4_;
      uStack_fc = local_168._4_4_;
      uStack_f8 = local_168._8_4_;
      uStack_f4 = local_168._12_4_;
      uVar14 = 0;
      if ((int)uVar16 < (this->triQuadrics).ArrayNum) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      dVar5 = (double)local_e0[0]._8_8_ * dVar8 + (double)local_e0[0]._0_8_ * dVar7 +
              (double)local_e0[0]._16_8_ * local_168._s_0.Z;
      uVar21 = SUB84(dVar5,0) ^ uVar23;
      uVar22 = (uint)((ulonglong)dVar5 >> 0x20) ^ uVar24;
      local_e8 = CONCAT44(uVar22,uVar21);
      if ((uVar14 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->triQuadrics).AllocatorInstance.Data;
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 * 0x70;
      *(double *)(pFVar3 + lVar18) = local_150;
      *(double *)(pFVar3 + lVar18 + 8) = dStack_148;
      *(double *)(pFVar3 + lVar18 + 0x10) = local_140;
      *(double *)(pFVar3 + lVar18 + 0x10 + 8) = dStack_138;
      *(double *)(pFVar3 + lVar18 + 0x20) = local_130;
      *(double *)(pFVar3 + lVar18 + 0x20 + 8) = dStack_128;
      *(undefined8 *)(pFVar3 + lVar18 + 0x30) = local_120;
      *(undefined8 *)(pFVar3 + lVar18 + 0x30 + 8) = uStack_118;
      *(undefined8 *)(pFVar3 + lVar18 + 0x40) = local_110;
      *(double *)(pFVar3 + lVar18 + 0x40 + 8) = dStack_108;
      *(ulonglong *)(pFVar3 + lVar18 + 0x68) = CONCAT44(uVar22,uVar21);
      pFVar1 = pFVar3 + lVar18 + 0x50;
      *(undefined4 *)pFVar1 = uVar9;
      *(undefined4 *)(pFVar1 + 4) = uVar10;
      *(undefined4 *)(pFVar1 + 8) = uVar11;
      *(undefined4 *)(pFVar1 + 0xc) = uVar12;
      *(undefined8 *)(pFVar3 + lVar18 + 0x60) = uVar13;
      if ((int)uVar16 < (int)uVar17) {
        do {
          lVar18 = *(longlong *)(*(longlong *)(lVar2 + 0x148) + (ulonglong)(uVar16 >> 9) * 8);
          if ((*(short *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) goto LAB_14c74aef0;
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)uVar17);
      }
    } while (uVar16 != uVar17);
  }
  return;
}

// InitializeVertexQuadrics @ 14c74b240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::InitializeVertexQuadrics
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  FSmallListSet *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  undefined ***pppuVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  TArray<UE::Geometry::TQuadricError<double>,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar14;
  undefined1 auStack_2d8 [32];
  longlong local_2b8;
  longlong local_2b0;
  FScriptContainerElement *local_2a8;
  uint local_2a0;
  TMeshSimplification<UE::Geometry::TQuadricError<double>_> *local_298;
  FScriptContainerElement *local_290;
  TArray<UE::Geometry::TQuadricError<double>,TSizedDefaultAllocator<32>_> *local_288;
  longlong local_280;
  FSmallListSet *local_278;
  uint uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  uint uStack_264;
  undefined8 uStack_260;
  undefined8 local_258;
  code *local_248 [2];
  undefined **local_238;
  longlong local_230;
  uint local_228;
  undefined ***local_220;
  BaseValueIterator local_208;
  undefined1 local_1d8 [40];
  longlong *local_1b0;
  FSmallListSet *local_1a8;
  ulonglong uStack_1a0;
  int local_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int local_188;
  undefined4 uStack_184;
  FSmallListSet *local_180;
  ulonglong uStack_178;
  longlong local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 local_158 [144];
  undefined1 local_c8 [144];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  this_00 = &this->vertQuadrics;
  local_298 = this;
  local_288 = this_00;
  TArray<UE::Geometry::TQuadricError<double>,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,*(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
                     *(int *)(*(longlong *)&this->field_0x8 + 0x24),Default);
  local_280 = *(longlong *)&this->field_0x8;
  local_2a0 = *(int *)(local_280 + 0x24) + *(int *)(local_280 + 0x20) * 0x200;
  uVar13 = 0;
  if ((local_2a0 != 0) &&
     (uVar13 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(local_280 + 0x28) - 1U))) {
    uVar12 = 1;
    uVar13 = 1;
    if (1 < (int)local_2a0) {
      do {
        lVar9 = (*(undefined8 **)(local_280 + 0x28))[uVar12 >> 9];
        if ((*(short *)(lVar9 + (ulonglong)(uVar12 & 0x1ff) * 2) != 0) &&
           (uVar13 = uVar12, *(short *)(lVar9 + (ulonglong)(uVar12 & 0x1ff) * 2) != -1)) break;
        uVar12 = uVar12 + 1;
        uVar13 = uVar12;
      } while ((int)uVar12 < (int)local_2a0);
    }
  }
  if (uVar13 != local_2a0) {
LAB_14c74b340:
    do {
      local_2a8 = (FScriptContainerElement *)CONCAT44(local_2a8._4_4_,~uVar13 >> 0x1f);
      uVar12 = 0;
      if ((int)uVar13 < this_00->ArrayNum) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_2b8 = (longlong)(int)uVar13;
        local_2b0 = (longlong)this_00->ArrayNum;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar9 = (longlong)(int)uVar13;
      pFVar3 = (this_00->AllocatorInstance).Data;
      *(undefined8 *)(pFVar3 + lVar9 * 0x50) = 0;
      *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 8) = 0;
      *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x10) = 0;
      *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x18) = 0;
      *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x20) = 0;
      *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x28) = 0;
      *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x30) = 0;
      *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x38) = 0;
      *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x40) = 0;
      *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x48) = 0;
      local_230 = *(longlong *)&this->field_0x8;
      local_238 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_248[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
                     ::Call;
      local_220 = (undefined ***)0x0;
      pFVar1 = (FSmallListSet *)(local_230 + 0xb8);
      local_1d8._0_8_ = 0;
      local_1b0 = (longlong *)0x0;
      local_1a8 = (FSmallListSet *)0x0;
      uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
      local_180 = (FSmallListSet *)0x0;
      uStack_178 = uStack_178 & 0xffffffff00000000;
      local_228 = uVar13;
      FSmallListSet::BaseValueIterator::BaseValueIterator(&local_208,pFVar1,uVar13,false);
      local_1a8 = local_208.ListSet;
      uStack_1a0._0_4_ = local_208.ListIndex;
      uStack_1a0._4_4_ = local_208.block_ptr;
      local_188 = local_208.cur_value;
      uStack_184 = local_208._36_4_;
      local_198 = local_208.N;
      iStack_194 = local_208.iEnd;
      iStack_190 = local_208.iCur;
      iStack_18c = local_208.cur_ptr;
      uStack_26c = 0xffffffff;
      uStack_178 = CONCAT44(0xffffffff,uVar13);
      local_268 = 0;
      uStack_260 = 0xffffffffffffffff;
      local_170 = (ulonglong)uStack_264 << 0x20;
      local_160 = local_258;
      uStack_168 = 0xffffffffffffffff;
      local_278 = pFVar1;
      uStack_270 = uVar13;
      local_180 = pFVar1;
      TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
                ((TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1d8,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_248);
      if (local_248[0] != (code *)0x0) {
        pppuVar10 = &local_238;
        if (local_220 != (undefined ***)0x0) {
          pppuVar10 = local_220;
        }
        (*(code *)(*pppuVar10)[2])();
      }
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_158,
                 (ValueIterator *)&local_1a8,(ValueIterator *)&local_180,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1d8);
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_c8,
                 (ValueIterator *)&local_180,(ValueIterator *)&local_180,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1d8);
      iVar5 = (int)local_2a8;
      while ((((uVar6 = local_158._88_4_, local_158._0_8_ != local_c8._0_8_ ||
               (local_158._8_4_ != local_c8._8_4_)) || (local_158._24_4_ != local_c8._24_4_)) ||
             (local_158._28_4_ != local_c8._28_4_))) {
        lVar14 = (longlong)(int)local_158._88_4_;
        iVar8 = 0;
        if ((int)uVar13 < this_00->ArrayNum) {
          iVar8 = iVar5;
        }
        if (iVar8 == 0) {
          local_2b8 = (longlong)(int)uVar13;
          local_2b0 = (longlong)this_00->ArrayNum;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        local_290 = (this_00->AllocatorInstance).Data;
        iVar8 = (this->triQuadrics).ArrayNum;
        uVar12 = 0;
        if ((int)uVar6 < iVar8) {
          uVar12 = (uint)~uVar6 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (local_2b8 = lVar14, local_2b0 = (longlong)iVar8,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_2a8 = (local_298->triQuadrics).AllocatorInstance.Data;
        iVar8 = (local_298->triAreas).ArrayNum;
        uVar12 = 0;
        if ((int)uVar6 < iVar8) {
          uVar12 = (uint)~uVar6 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (local_2b8 = lVar14, local_2b0 = (longlong)iVar8,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        dVar2 = *(double *)((local_298->triAreas).AllocatorInstance.Data + lVar14 * 8);
        *(double *)(local_290 + lVar9 * 0x50) =
             dVar2 * *(double *)(local_2a8 + lVar14 * 0x50) + *(double *)(local_290 + lVar9 * 0x50);
        *(double *)(local_290 + lVar9 * 0x50 + 8) =
             dVar2 * *(double *)(local_2a8 + lVar14 * 0x50 + 8) +
             *(double *)(local_290 + lVar9 * 0x50 + 8);
        *(double *)(local_290 + lVar9 * 0x50 + 0x10) =
             dVar2 * *(double *)(local_2a8 + lVar14 * 0x50 + 0x10) +
             *(double *)(local_290 + lVar9 * 0x50 + 0x10);
        *(double *)(local_290 + lVar9 * 0x50 + 0x18) =
             dVar2 * *(double *)(local_2a8 + lVar14 * 0x50 + 0x18) +
             *(double *)(local_290 + lVar9 * 0x50 + 0x18);
        *(double *)(local_290 + lVar9 * 0x50 + 0x20) =
             dVar2 * *(double *)(local_2a8 + lVar14 * 0x50 + 0x20) +
             *(double *)(local_290 + lVar9 * 0x50 + 0x20);
        *(double *)(local_290 + lVar9 * 0x50 + 0x28) =
             dVar2 * *(double *)(local_2a8 + lVar14 * 0x50 + 0x28) +
             *(double *)(local_290 + lVar9 * 0x50 + 0x28);
        *(double *)(local_290 + lVar9 * 0x50 + 0x30) =
             dVar2 * *(double *)(local_2a8 + lVar14 * 0x50 + 0x30) +
             *(double *)(local_290 + lVar9 * 0x50 + 0x30);
        *(double *)(local_290 + lVar9 * 0x50 + 0x38) =
             dVar2 * *(double *)(local_2a8 + lVar14 * 0x50 + 0x38) +
             *(double *)(local_290 + lVar9 * 0x50 + 0x38);
        *(double *)(local_290 + lVar9 * 0x50 + 0x40) =
             dVar2 * *(double *)(local_2a8 + lVar14 * 0x50 + 0x40) +
             *(double *)(local_290 + lVar9 * 0x50 + 0x40);
        *(double *)(local_290 + lVar9 * 0x50 + 0x48) =
             dVar2 * *(double *)(local_2a8 + lVar14 * 0x50 + 0x48) +
             *(double *)(local_290 + lVar9 * 0x50 + 0x48);
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_158);
        this_00 = local_288;
        this = local_298;
      }
      if (local_c8._96_8_ != 0) {
        plVar11 = (longlong *)(local_c8 + 0x70);
        if ((longlong *)local_c8._136_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_c8._136_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if (local_158._96_8_ != 0) {
        plVar11 = (longlong *)(local_158 + 0x70);
        if ((longlong *)local_158._136_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_158._136_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if (local_1d8._0_8_ != 0) {
        plVar11 = (longlong *)(local_1d8 + 0x10);
        if (local_1b0 != (longlong *)0x0) {
          plVar11 = local_1b0;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      uVar13 = uVar13 + 1;
      if ((int)uVar13 < (int)local_2a0) {
        do {
          lVar9 = *(longlong *)(*(longlong *)(local_280 + 0x28) + (ulonglong)(uVar13 >> 9) * 8);
          if ((*(short *)(lVar9 + (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar9 + (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) goto LAB_14c74b340;
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)local_2a0);
      }
    } while (uVar13 != local_2a0);
  }
  return;
}

// InitializeVertexQuadrics @ 14c74b850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
InitializeVertexQuadrics(TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  FSmallListSet *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *pTVar12;
  undefined4 uVar13;
  bool bVar14;
  uint uVar15;
  undefined ***pppuVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  TArray<UE::Geometry::TAttrBasedQuadricError<double>,TSizedDefaultAllocator<32>_> *this_00;
  TVolPresQuadricError<double> *this_01;
  longlong lVar20;
  longlong lVar21;
  TVolPresQuadricError<double> *pTVar22;
  undefined1 auStack_438 [32];
  longlong local_418;
  longlong local_410;
  uint local_408;
  uint local_404;
  TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *local_400;
  longlong local_3f8;
  longlong local_3f0;
  FSmallListSet *local_3e8;
  uint uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  uint uStack_3d4;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  code *local_3b8 [2];
  undefined **local_3a8;
  longlong local_3a0;
  uint local_398;
  undefined ***local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double local_308;
  double dStack_300;
  double local_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  BaseValueIterator local_298;
  undefined1 local_268 [40];
  longlong *local_240;
  FSmallListSet *local_238;
  ulonglong uStack_230;
  int local_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  int local_218;
  undefined4 uStack_214;
  FSmallListSet *local_210;
  ulonglong uStack_208;
  longlong local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8 [144];
  undefined1 local_158 [144];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_438;
  this_00 = &this->vertQuadrics;
  local_400 = this;
  TArray<UE::Geometry::TAttrBasedQuadricError<double>,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,*(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
                     *(int *)(*(longlong *)&this->field_0x8 + 0x24),Default);
  local_3f0 = *(longlong *)&this->field_0x8;
  local_404 = *(int *)(local_3f0 + 0x24) + *(int *)(local_3f0 + 0x20) * 0x200;
  uVar19 = 0;
  if ((local_404 != 0) &&
     (uVar19 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(local_3f0 + 0x28) - 1U))) {
    uVar18 = 1;
    uVar19 = 1;
    if (1 < (int)local_404) {
      do {
        lVar21 = (*(undefined8 **)(local_3f0 + 0x28))[uVar18 >> 9];
        if ((*(short *)(lVar21 + (ulonglong)(uVar18 & 0x1ff) * 2) != 0) &&
           (uVar19 = uVar18, *(short *)(lVar21 + (ulonglong)(uVar18 & 0x1ff) * 2) != -1)) break;
        uVar18 = uVar18 + 1;
        uVar19 = uVar18;
      } while ((int)uVar18 < (int)local_404);
    }
  }
  if (uVar19 != local_404) {
LAB_14c74b991:
    do {
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_348 = 0;
      uStack_340 = 0;
      uVar18 = ~uVar19 >> 0x1f;
      local_358 = 0;
      uStack_350 = 0;
      local_368 = 0;
      uStack_360 = 0;
      uVar15 = 0;
      if ((int)uVar19 < this_00->ArrayNum) {
        uVar15 = uVar18;
      }
      local_378 = 0;
      uStack_370 = 0;
      local_388 = 0;
      uStack_380 = 0;
      local_338 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_330 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_328 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_308 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_300 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_2e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_2d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_2f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_408 = uVar18;
      if (uVar15 == 0) {
        local_418 = (longlong)(int)uVar19;
        local_410 = (longlong)this_00->ArrayNum;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar21 = (longlong)(int)uVar19 * 0xe0;
      pFVar7 = (this_00->AllocatorInstance).Data;
      local_390 = (undefined ***)0x0;
      *(undefined8 *)(pFVar7 + lVar21) = local_388;
      *(undefined8 *)(pFVar7 + lVar21 + 8) = uStack_380;
      *(undefined8 *)(pFVar7 + lVar21 + 0x10) = local_378;
      *(undefined8 *)(pFVar7 + lVar21 + 0x10 + 8) = uStack_370;
      local_268._0_8_ = 0;
      *(undefined8 *)(pFVar7 + lVar21 + 0x20) = local_368;
      *(undefined8 *)(pFVar7 + lVar21 + 0x20 + 8) = uStack_360;
      local_240 = (longlong *)0x0;
      *(undefined8 *)(pFVar7 + lVar21 + 0x30) = local_358;
      *(undefined8 *)(pFVar7 + lVar21 + 0x30 + 8) = uStack_350;
      local_238 = (FSmallListSet *)0x0;
      *(undefined8 *)(pFVar7 + lVar21 + 0x40) = local_348;
      *(undefined8 *)(pFVar7 + lVar21 + 0x40 + 8) = uStack_340;
      *(undefined8 *)(pFVar7 + lVar21 + 0x68) = 0;
      *(undefined8 *)(pFVar7 + lVar21 + 0x50) = uVar9;
      *(undefined8 *)(pFVar7 + lVar21 + 0x50 + 8) = uVar10;
      uStack_230 = uStack_230 & 0xffffffff00000000;
      *(undefined8 *)(pFVar7 + lVar21 + 0x60) = uVar11;
      *(undefined8 *)(pFVar7 + lVar21 + 0x78) = 0x3ff0000000000000;
      *(undefined8 *)(pFVar7 + lVar21 + 0x70) = 0;
      *(undefined8 *)(pFVar7 + lVar21 + 0x80) = uVar9;
      *(undefined8 *)(pFVar7 + lVar21 + 0x80 + 8) = uVar10;
      local_3a8 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      *(undefined8 *)(pFVar7 + lVar21 + 0x90) = uVar11;
      *(undefined8 *)(pFVar7 + lVar21 + 0x98) = uVar9;
      *(undefined8 *)(pFVar7 + lVar21 + 0x98 + 8) = uVar10;
      local_3b8[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
                     ::Call;
      *(undefined8 *)(pFVar7 + lVar21 + 0xa8) = uVar11;
      *(undefined8 *)(pFVar7 + lVar21 + 0xb0) = uVar9;
      *(undefined8 *)(pFVar7 + lVar21 + 0xb0 + 8) = uVar10;
      local_210 = (FSmallListSet *)0x0;
      *(undefined8 *)(pFVar7 + lVar21 + 0xc0) = uVar11;
      *(undefined8 *)(pFVar7 + lVar21 + 200) = 0;
      *(undefined8 *)(pFVar7 + lVar21 + 0xd0) = 0;
      *(undefined8 *)(pFVar7 + lVar21 + 0xd8) = 0;
      local_3a0 = *(longlong *)&this->field_0x8;
      uStack_208 = uStack_208 & 0xffffffff00000000;
      pFVar1 = (FSmallListSet *)(local_3a0 + 0xb8);
      local_3f8 = lVar21;
      local_398 = uVar19;
      FSmallListSet::BaseValueIterator::BaseValueIterator(&local_298,pFVar1,uVar19,false);
      local_238 = local_298.ListSet;
      uStack_230._0_4_ = local_298.ListIndex;
      uStack_230._4_4_ = local_298.block_ptr;
      local_218 = local_298.cur_value;
      uStack_214 = local_298._36_4_;
      local_228 = local_298.N;
      iStack_224 = local_298.iEnd;
      iStack_220 = local_298.iCur;
      iStack_21c = local_298.cur_ptr;
      uStack_3dc = 0xffffffff;
      uStack_208 = CONCAT44(0xffffffff,uVar19);
      local_3d8 = 0;
      uStack_3d0 = 0xffffffffffffffff;
      local_200 = (ulonglong)uStack_3d4 << 0x20;
      local_1f0 = local_3c8;
      uStack_1f8 = 0xffffffffffffffff;
      local_3e8 = pFVar1;
      uStack_3e0 = uVar19;
      local_210 = pFVar1;
      TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
                ((TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_268,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_3b8);
      if (local_3b8[0] != (code *)0x0) {
        pppuVar16 = &local_3a8;
        if (local_390 != (undefined ***)0x0) {
          pppuVar16 = local_390;
        }
        (*(code *)(*pppuVar16)[2])();
      }
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_1e8,
                 (ValueIterator *)&local_238,(ValueIterator *)&local_210,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_268);
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_158,
                 (ValueIterator *)&local_210,(ValueIterator *)&local_210,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_268);
      pTVar12 = local_400;
      while ((((uVar13 = local_1e8._88_4_, local_1e8._0_8_ != local_158._0_8_ ||
               (local_1e8._8_4_ != local_158._8_4_)) || (local_1e8._24_4_ != local_158._24_4_)) ||
             (local_1e8._28_4_ != local_158._28_4_))) {
        lVar20 = (longlong)(int)local_1e8._88_4_;
        uVar15 = 0;
        if ((int)uVar19 < this_00->ArrayNum) {
          uVar15 = uVar18;
        }
        if (uVar15 == 0) {
          local_418 = (longlong)(int)uVar19;
          local_410 = (longlong)this_00->ArrayNum;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        iVar6 = (pTVar12->triQuadrics).ArrayNum;
        this_01 = (TVolPresQuadricError<double> *)((this_00->AllocatorInstance).Data + lVar21);
        uVar18 = 0;
        if ((int)uVar13 < iVar6) {
          uVar18 = (uint)~uVar13 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (local_418 = lVar20, local_410 = (longlong)iVar6,
           bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar6 = (pTVar12->triAreas).ArrayNum;
        pTVar22 = (TVolPresQuadricError<double> *)
                  ((pTVar12->triQuadrics).AllocatorInstance.Data + lVar20 * 0xe0);
        uVar18 = 0;
        if ((int)uVar13 < iVar6) {
          uVar18 = (uint)~uVar13 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (local_418 = lVar20, local_410 = (longlong)iVar6,
           bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        dVar2 = *(double *)((pTVar12->triAreas).AllocatorInstance.Data + lVar20 * 8);
        TVolPresQuadricError<double>::Add(this_01,dVar2,pTVar22);
        this_01[1]._padding_ = (longlong)(dVar2 + (double)this_01[1]._padding_);
        this_01[1]._padding_ = pTVar22[1]._padding_;
        dVar3 = (double)pTVar22[1]._padding_;
        dVar4 = (double)pTVar22[1]._padding_;
        this_01[1]._padding_ =
             (longlong)(dVar2 * (double)pTVar22[1]._padding_ + (double)this_01[1]._padding_);
        this_01[1]._padding_ = (longlong)(dVar2 * dVar3 + (double)this_01[1]._padding_);
        this_01[1]._padding_ = (longlong)(dVar2 * dVar4 + (double)this_01[1]._padding_);
        dVar3 = (double)pTVar22[1]._padding_;
        dVar4 = (double)pTVar22[1]._padding_;
        this_01[1]._padding_ =
             (longlong)(dVar2 * (double)pTVar22[1]._padding_ + (double)this_01[1]._padding_);
        this_01[1]._padding_ = (longlong)(dVar2 * dVar3 + (double)this_01[1]._padding_);
        this_01[1]._padding_ = (longlong)(dVar2 * dVar4 + (double)this_01[1]._padding_);
        dVar3 = (double)pTVar22[1]._padding_;
        dVar4 = pTVar22[1].PlaneData.N.field0_0x0._s_0.X;
        dVar5 = this_01[1].PlaneData.N.field0_0x0._s_0.X;
        this_01[1]._padding_ =
             (longlong)(dVar2 * (double)pTVar22[1]._padding_ + (double)this_01[1]._padding_);
        this_01[1]._padding_ = (longlong)(dVar2 * dVar3 + (double)this_01[1]._padding_);
        this_01[1].PlaneData.N.field0_0x0._s_0.X = dVar2 * dVar4 + dVar5;
        this_01[1].PlaneData.N.field0_0x0._s_0.Y =
             dVar2 * pTVar22[1].PlaneData.N.field0_0x0._s_0.Y +
             this_01[1].PlaneData.N.field0_0x0._s_0.Y;
        this_01[1].PlaneData.N.field0_0x0._s_0.Z =
             dVar2 * pTVar22[1].PlaneData.N.field0_0x0._s_0.Z +
             this_01[1].PlaneData.N.field0_0x0._s_0.Z;
        this_01[1].PlaneData.Dist = dVar2 * pTVar22[1].PlaneData.Dist + this_01[1].PlaneData.Dist;
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_1e8);
        this_00 = &pTVar12->vertQuadrics;
        lVar21 = local_3f8;
        uVar18 = local_408;
      }
      if (local_158._96_8_ != 0) {
        plVar17 = (longlong *)(local_158 + 0x70);
        if ((longlong *)local_158._136_8_ != (longlong *)0x0) {
          plVar17 = (longlong *)local_158._136_8_;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      if (local_1e8._96_8_ != 0) {
        plVar17 = (longlong *)(local_1e8 + 0x70);
        if ((longlong *)local_1e8._136_8_ != (longlong *)0x0) {
          plVar17 = (longlong *)local_1e8._136_8_;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      if (local_268._0_8_ != 0) {
        plVar17 = (longlong *)(local_268 + 0x10);
        if (local_240 != (longlong *)0x0) {
          plVar17 = local_240;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      uVar19 = uVar19 + 1;
      this = local_400;
      if ((int)uVar19 < (int)local_404) {
        do {
          lVar21 = *(longlong *)(*(longlong *)(local_3f0 + 0x28) + (ulonglong)(uVar19 >> 9) * 8);
          if ((*(short *)(lVar21 + (ulonglong)(uVar19 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar21 + (ulonglong)(uVar19 & 0x1ff) * 2) != -1)) goto LAB_14c74b991;
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < (int)local_404);
      }
    } while (uVar19 != local_404);
  }
  return;
}

// InitializeVertexQuadrics @ 14c74c0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
InitializeVertexQuadrics(TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  FSmallListSet *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *pTVar11;
  undefined4 uVar12;
  bool bVar13;
  uint uVar14;
  undefined ***pppuVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  TArray<UE::Geometry::TVolPresQuadricError<double>,TSizedDefaultAllocator<32>_> *this_00;
  TQuadricError<double> *this_01;
  longlong lVar19;
  longlong lVar20;
  TQuadricError<double> *pTVar21;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  uint local_338;
  uint local_334;
  TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *local_330;
  longlong local_328;
  longlong local_320;
  FSmallListSet *local_318;
  uint uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  uint uStack_304;
  undefined8 uStack_300;
  undefined8 local_2f8;
  code *local_2e8 [2];
  undefined **local_2d8;
  longlong local_2d0;
  uint local_2c8;
  undefined ***local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  BaseValueIterator local_238;
  undefined1 local_208 [40];
  longlong *local_1e0;
  FSmallListSet *local_1d8;
  ulonglong uStack_1d0;
  int local_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int local_1b8;
  undefined4 uStack_1b4;
  FSmallListSet *local_1b0;
  ulonglong uStack_1a8;
  longlong local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined1 local_188 [144];
  undefined1 local_f8 [144];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_368;
  this_00 = &this->vertQuadrics;
  local_330 = this;
  TArray<UE::Geometry::TVolPresQuadricError<double>,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,*(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
                     *(int *)(*(longlong *)&this->field_0x8 + 0x24),Default);
  local_320 = *(longlong *)&this->field_0x8;
  local_334 = *(int *)(local_320 + 0x24) + *(int *)(local_320 + 0x20) * 0x200;
  uVar18 = 0;
  if ((local_334 != 0) &&
     (uVar18 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(local_320 + 0x28) - 1U))) {
    uVar17 = 1;
    uVar18 = 1;
    if (1 < (int)local_334) {
      do {
        lVar19 = (*(undefined8 **)(local_320 + 0x28))[uVar17 >> 9];
        if ((*(short *)(lVar19 + (ulonglong)(uVar17 & 0x1ff) * 2) != 0) &&
           (uVar18 = uVar17, *(short *)(lVar19 + (ulonglong)(uVar17 & 0x1ff) * 2) != -1)) break;
        uVar17 = uVar17 + 1;
        uVar18 = uVar17;
      } while ((int)uVar17 < (int)local_334);
    }
  }
  if (uVar18 != local_334) {
LAB_14c74c1d0:
    do {
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar17 = ~uVar18 >> 0x1f;
      local_258 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_278 = 0;
      uStack_270 = 0;
      uVar14 = 0;
      if ((int)uVar18 < this_00->ArrayNum) {
        uVar14 = uVar17;
      }
      local_288 = 0;
      uStack_280 = 0;
      local_298 = 0;
      uStack_290 = 0;
      local_2a8 = 0;
      uStack_2a0 = 0;
      local_2b8 = 0;
      uStack_2b0 = 0;
      local_268 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_260 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_338 = uVar17;
      if (uVar14 == 0) {
        local_348 = (longlong)(int)uVar18;
        local_340 = (longlong)this_00->ArrayNum;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      local_2d8 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      lVar19 = (longlong)(int)uVar18 * 0x70;
      pFVar6 = (this_00->AllocatorInstance).Data;
      local_2e8[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
                     ::Call;
      local_2c0 = (undefined ***)0x0;
      *(undefined8 *)(pFVar6 + lVar19) = local_2b8;
      *(undefined8 *)(pFVar6 + lVar19 + 8) = uStack_2b0;
      *(undefined8 *)(pFVar6 + lVar19 + 0x10) = local_2a8;
      *(undefined8 *)(pFVar6 + lVar19 + 0x10 + 8) = uStack_2a0;
      local_208._0_8_ = 0;
      local_1e0 = (longlong *)0x0;
      *(undefined8 *)(pFVar6 + lVar19 + 0x20) = local_298;
      *(undefined8 *)(pFVar6 + lVar19 + 0x20 + 8) = uStack_290;
      local_1d8 = (FSmallListSet *)0x0;
      uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
      *(undefined8 *)(pFVar6 + lVar19 + 0x30) = local_288;
      *(undefined8 *)(pFVar6 + lVar19 + 0x30 + 8) = uStack_280;
      local_1b0 = (FSmallListSet *)0x0;
      *(undefined8 *)(pFVar6 + lVar19 + 0x40) = local_278;
      *(undefined8 *)(pFVar6 + lVar19 + 0x40 + 8) = uStack_270;
      *(undefined8 *)(pFVar6 + lVar19 + 0x68) = 0;
      *(undefined8 *)(pFVar6 + lVar19 + 0x50) = uVar8;
      *(undefined8 *)(pFVar6 + lVar19 + 0x50 + 8) = uVar9;
      uStack_1a8 = uStack_1a8 & 0xffffffff00000000;
      *(undefined8 *)(pFVar6 + lVar19 + 0x60) = uVar10;
      local_2d0 = *(longlong *)&this->field_0x8;
      pFVar1 = (FSmallListSet *)(local_2d0 + 0xb8);
      local_328 = lVar19;
      local_2c8 = uVar18;
      FSmallListSet::BaseValueIterator::BaseValueIterator(&local_238,pFVar1,uVar18,false);
      local_1d8 = local_238.ListSet;
      uStack_1d0._0_4_ = local_238.ListIndex;
      uStack_1d0._4_4_ = local_238.block_ptr;
      local_1b8 = local_238.cur_value;
      uStack_1b4 = local_238._36_4_;
      local_1c8 = local_238.N;
      iStack_1c4 = local_238.iEnd;
      iStack_1c0 = local_238.iCur;
      iStack_1bc = local_238.cur_ptr;
      uStack_30c = 0xffffffff;
      uStack_1a8 = CONCAT44(0xffffffff,uVar18);
      local_308 = 0;
      uStack_300 = 0xffffffffffffffff;
      local_1a0 = (ulonglong)uStack_304 << 0x20;
      local_190 = local_2f8;
      uStack_198 = 0xffffffffffffffff;
      local_318 = pFVar1;
      uStack_310 = uVar18;
      local_1b0 = pFVar1;
      TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
                ((TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_208,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_2e8);
      if (local_2e8[0] != (code *)0x0) {
        pppuVar15 = &local_2d8;
        if (local_2c0 != (undefined ***)0x0) {
          pppuVar15 = local_2c0;
        }
        (*(code *)(*pppuVar15)[2])();
      }
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_188,
                 (ValueIterator *)&local_1d8,(ValueIterator *)&local_1b0,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_208);
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_f8,
                 (ValueIterator *)&local_1b0,(ValueIterator *)&local_1b0,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_208);
      pTVar11 = local_330;
      while ((((uVar12 = local_188._88_4_, local_188._0_8_ != local_f8._0_8_ ||
               (local_188._8_4_ != local_f8._8_4_)) || (local_188._24_4_ != local_f8._24_4_)) ||
             (local_188._28_4_ != local_f8._28_4_))) {
        lVar20 = (longlong)(int)local_188._88_4_;
        uVar14 = 0;
        if ((int)uVar18 < this_00->ArrayNum) {
          uVar14 = uVar17;
        }
        if (uVar14 == 0) {
          local_348 = (longlong)(int)uVar18;
          local_340 = (longlong)this_00->ArrayNum;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar5 = (pTVar11->triQuadrics).ArrayNum;
        this_01 = (TQuadricError<double> *)((this_00->AllocatorInstance).Data + lVar19);
        uVar17 = 0;
        if ((int)uVar12 < iVar5) {
          uVar17 = (uint)~uVar12 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_348 = lVar20, local_340 = (longlong)iVar5,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar5 = (pTVar11->triAreas).ArrayNum;
        pTVar21 = (TQuadricError<double> *)
                  ((pTVar11->triQuadrics).AllocatorInstance.Data + lVar20 * 0x70);
        uVar17 = 0;
        if ((int)uVar12 < iVar5) {
          uVar17 = (uint)~uVar12 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_348 = lVar20, local_340 = (longlong)iVar5,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar2 = *(double *)((pTVar11->triAreas).AllocatorInstance.Data + lVar20 * 8);
        TQuadricError<double>::Add(this_01,dVar2,pTVar21);
        dVar3 = pTVar21[1].Axz;
        dVar4 = pTVar21[1].Axx;
        this_01[1].Axy = dVar2 * pTVar21[1].Axy + this_01[1].Axy;
        this_01[1].Axz = dVar2 * dVar3 + this_01[1].Axz;
        this_01[1].Axx = dVar2 * dVar4 + this_01[1].Axx;
        this_01[1].Ayy = dVar2 * pTVar21[1].Ayy + this_01[1].Ayy;
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_188);
        this_00 = &pTVar11->vertQuadrics;
        lVar19 = local_328;
        uVar17 = local_338;
      }
      if (local_f8._96_8_ != 0) {
        plVar16 = (longlong *)(local_f8 + 0x70);
        if ((longlong *)local_f8._136_8_ != (longlong *)0x0) {
          plVar16 = (longlong *)local_f8._136_8_;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if (local_188._96_8_ != 0) {
        plVar16 = (longlong *)(local_188 + 0x70);
        if ((longlong *)local_188._136_8_ != (longlong *)0x0) {
          plVar16 = (longlong *)local_188._136_8_;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if (local_208._0_8_ != 0) {
        plVar16 = (longlong *)(local_208 + 0x10);
        if (local_1e0 != (longlong *)0x0) {
          plVar16 = local_1e0;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      uVar18 = uVar18 + 1;
      this = local_330;
      if ((int)uVar18 < (int)local_334) {
        do {
          lVar19 = *(longlong *)(*(longlong *)(local_320 + 0x28) + (ulonglong)(uVar18 >> 9) * 8);
          if ((*(short *)(lVar19 + (ulonglong)(uVar18 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar19 + (ulonglong)(uVar18 & 0x1ff) * 2) != -1)) goto LAB_14c74c1d0;
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (int)local_334);
      }
    } while (uVar18 != local_334);
  }
  return;
}

// IsBoundaryVertex @ 14c74fcf0

bool __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::IsBoundaryVertex
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->IsBoundaryVtxCache).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)(this->IsBoundaryVtxCache).AllocatorInstance.Data[param_1];
}

// IsBoundaryVertex @ 14c74fd70

bool __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::IsBoundaryVertex
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->IsBoundaryVtxCache).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)(this->IsBoundaryVtxCache).AllocatorInstance.Data[param_1];
}

// IsBoundaryVertex @ 14c74fdf0

bool __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::IsBoundaryVertex
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->IsBoundaryVtxCache).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)(this->IsBoundaryVtxCache).AllocatorInstance.Data[param_1];
}

// OnEdgeCollapse @ 14c7525b0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::OnEdgeCollapse
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,int param_1,int param_2,
          int param_3,FEdgeCollapseInfo *param_4)

{
  return;
}

// OnEdgeCollapse @ 14c7525c0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::OnEdgeCollapse
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,int param_1,
          int param_2,int param_3,FEdgeCollapseInfo *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_res10 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60 [3];
  
  uVar8 = 0;
  if (param_1 < (this->EdgeQuadrics).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = (this->EdgeQuadrics).AllocatorInstance.Data;
  lVar11 = (longlong)param_1 * 0x100;
  uVar8 = 0;
  if (param_1 < (this->EdgeQuadrics).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (this->EdgeQuadrics).AllocatorInstance.Data;
  pFVar1 = pFVar3 + lVar11 + 0xe8;
  local_60[0]._0_8_ = *(undefined8 *)pFVar1;
  local_60[0]._8_8_ = *(undefined8 *)(pFVar1 + 8);
  local_60[0]._16_8_ = *(undefined8 *)(pFVar3 + lVar11 + 0xf8);
  TAttrBasedQuadricError<double>::ComputeAttributes
            ((TAttrBasedQuadricError<double> *)(pFVar2 + lVar11 + 8),
             (TVector<double> *)&local_60[0]._s_0,(TVector<double> *)&local_78._s_0);
  fVar16 = 0.0;
  fVar13 = (float)local_78._s_0.X;
  fVar14 = (float)local_78._s_0.Y;
  fVar15 = (float)local_78._s_0.Z;
  fVar12 = SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
    fVar14 = 0.0;
  }
  else {
    fVar12 = __real_3f800000 / fVar12;
    fVar16 = fVar12 * fVar13;
    fVar14 = fVar12 * fVar14;
    fVar12 = fVar12 * fVar15;
  }
  if ((TDynamicMeshOverlay<float,3> *)this->NormalOverlay == (TDynamicMeshOverlay<float,3> *)0x0) {
    if (*(char *)(*(longlong *)&this->field_0x8 + 0x70) != '\0') {
      lVar11 = *(longlong *)
                (*(longlong *)(*(longlong *)&this->field_0x8 + 0x60) +
                (ulonglong)((uint)param_2 >> 9) * 8);
      *(ulonglong *)(lVar11 + (ulonglong)(param_2 & 0x1ff) * 0xc) = CONCAT44(fVar14,fVar16);
      *(float *)(lVar11 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc) = fVar12;
    }
  }
  else {
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    TDynamicMeshOverlay<float,3>::GetVertexElements
              ((TDynamicMeshOverlay<float,3> *)this->NormalOverlay,param_2,&local_88);
    iVar6 = local_88.ArrayNum;
    uVar9 = (ulonglong)local_88.ArrayNum;
    if (local_88.ArrayNum < 2) {
      pFVar2 = local_88.AllocatorInstance.Data + uVar9 * 4;
      FVar10.Data = local_88.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar9 != iVar6) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar10.Data == pFVar2) break;
        pTVar4 = this->NormalOverlay;
        uVar8 = *(int *)FVar10.Data * 3;
        *(float *)(*(longlong *)(*(longlong *)&pTVar4->field_0x48 + (ulonglong)(uVar8 >> 9) * 8) +
                  (ulonglong)(uVar8 & 0x1ff) * 4) = fVar16;
        *(float *)(*(longlong *)(*(longlong *)&pTVar4->field_0x48 + (ulonglong)(uVar8 + 1 >> 9) * 8)
                  + (ulonglong)(uVar8 + 1 & 0x1ff) * 4) = fVar14;
        FVar10.Data = FVar10.Data + 4;
        *(float *)(*(longlong *)(*(longlong *)&pTVar4->field_0x48 + (ulonglong)(uVar8 + 2 >> 9) * 8)
                  + (ulonglong)(uVar8 + 2 & 0x1ff) * 4) = fVar12;
        uVar9 = local_88._8_8_ & 0xffffffff;
      }
    }
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
  }
  return;
}

// OnEdgeCollapse @ 14c7528a0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::OnEdgeCollapse
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,int param_1,
          int param_2,int param_3,FEdgeCollapseInfo *param_4)

{
  return;
}

// OnRemoveIsolatedTriangle @ 14c7531e0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::OnRemoveIsolatedTriangle
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,int param_1)

{
  return;
}

// OnRemoveIsolatedTriangle @ 14c7531f0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
OnRemoveIsolatedTriangle
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,int param_1)

{
  return;
}

// OnRemoveIsolatedTriangle @ 14c753200

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
OnRemoveIsolatedTriangle
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,int param_1)

{
  return;
}

// OptimalPoint @ 14c7537e0

TVector<double> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::OptimalPoint
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,
          TVector<double> *__return_storage_ptr__,int param_1,TQuadricError<double> *param_2,
          int param_3,int param_4)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 (*pauVar3) [16];
  ESimplificationCollapseModes EVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  bool bVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 local_118 [24];
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8 [6];
  
  if ((this->bHaveBoundary != false) && (this->bPreserveBoundaryShape != false)) {
    if (*(int *)(*(longlong *)
                  (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                  (ulonglong)((uint)param_1 >> 9) * 8) + 0xc + (ulonglong)(param_1 & 0x1ff) * 0x10)
        == -1) {
      if (this->CollapseMode != MinimalExistingVertexError) {
        lVar5 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
        lVar6 = *(longlong *)(lVar5 + (ulonglong)((uint)param_3 >> 9) * 8);
        pdVar1 = (double *)(lVar6 + (ulonglong)(param_3 & 0x1ff) * 0x18);
        lVar5 = *(longlong *)(lVar5 + (ulonglong)((uint)param_4 >> 9) * 8);
        pdVar2 = (double *)(lVar5 + (ulonglong)(param_4 & 0x1ff) * 0x18);
        dVar26 = (pdVar1[1] + pdVar2[1]) * __real_3fe0000000000000;
        dVar27 = (*(double *)(lVar6 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18) +
                 *(double *)(lVar5 + 0x10 + (ulonglong)(param_4 & 0x1ff) * 0x18)) *
                 __real_3fe0000000000000;
        (__return_storage_ptr__->field0_0x0)._s_0.X = (*pdVar1 + *pdVar2) * __real_3fe0000000000000;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar26;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar27;
        return __return_storage_ptr__;
      }
    }
    else {
      bVar18 = IsBoundaryVertex(this,param_3);
      if (bVar18) {
        lVar5 = *(longlong *)
                 (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) +
                 (ulonglong)((uint)param_3 >> 9) * 8);
        pdVar1 = (double *)(lVar5 + (ulonglong)(param_3 & 0x1ff) * 0x18);
        dVar26 = pdVar1[1];
        (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar26;
        (__return_storage_ptr__->field0_0x0)._s_0.Z =
             *(double *)(lVar5 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18);
        return __return_storage_ptr__;
      }
      bVar18 = IsBoundaryVertex(this,param_4);
      if (bVar18) {
        lVar5 = *(longlong *)
                 (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) +
                 (ulonglong)((uint)param_4 >> 9) * 8);
        pdVar1 = (double *)(lVar5 + (ulonglong)(param_4 & 0x1ff) * 0x18);
        dVar26 = pdVar1[1];
        (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar26;
        (__return_storage_ptr__->field0_0x0)._s_0.Z =
             *(double *)(lVar5 + 0x10 + (ulonglong)(param_4 & 0x1ff) * 0x18);
        return __return_storage_ptr__;
      }
    }
  }
  uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  EVar4 = this->CollapseMode;
  if (EVar4 == MinimalQuadricPositionError) {
    local_d0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_d0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_d0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar19 = (uint)__xmm_80000000000000008000000000000000;
    uVar21 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    bVar18 = TQuadricError<double>::SolveAxEqualsb
                       (param_2,(TVector<double> *)&local_d0._s_0,
                        (double)CONCAT44((uint)((ulonglong)param_2->bx >> 0x20) ^ uVar21,
                                         SUB84(param_2->bx,0) ^ uVar19),
                        (double)CONCAT44((uint)((ulonglong)param_2->by >> 0x20) ^ uVar21,
                                         SUB84(param_2->by,0) ^ uVar19),
                        (double)CONCAT44((uint)((ulonglong)param_2->bz >> 0x20) ^ uVar21,
                                         SUB84(param_2->bz,0) ^ uVar19),__real_3d4f400000000000);
    if (bVar18) {
      if ((this->field_0x128 == '\x02') &&
         (plVar7 = *(longlong **)&this->field_0xd0, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 8))(plVar7,__return_storage_ptr__,&local_d0,0xffffffff);
      }
      else {
        (__return_storage_ptr__->field0_0x0)._s_0.X = local_d0._s_0.X;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = local_d0._s_0.Y;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = local_d0._s_0.Z;
      }
    }
    else {
      lVar5 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
      lVar6 = *(longlong *)(lVar5 + (ulonglong)((uint)param_3 >> 9) * 8);
      pdVar1 = (double *)(lVar6 + (ulonglong)(param_3 & 0x1ff) * 0x18);
      dVar13 = *pdVar1;
      dVar14 = pdVar1[1];
      dVar26 = *(double *)(lVar6 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18);
      lVar5 = *(longlong *)(lVar5 + (ulonglong)((uint)param_4 >> 9) * 8);
      pdVar1 = (double *)(lVar5 + (ulonglong)(param_4 & 0x1ff) * 0x18);
      dVar15 = *pdVar1;
      dVar16 = pdVar1[1];
      dVar27 = *(double *)(lVar5 + 0x10 + (ulonglong)(param_4 & 0x1ff) * 0x18);
      dVar25 = (dVar13 + dVar15) * __real_3fe0000000000000;
      local_100._s_0.Z = (dVar26 + dVar27) * __real_3fe0000000000000;
      dVar24 = (dVar14 + dVar16) * __real_3fe0000000000000;
      local_100._s_0.X = dVar25;
      local_100._8_8_ = dVar24;
      local_e8._s_0.X = dVar15;
      local_e8._s_0.Y = dVar16;
      local_e8._s_0.Z = dVar27;
      local_b8[0]._0_8_ = dVar13;
      local_b8[0]._8_8_ = dVar14;
      local_b8[0]._16_8_ = dVar26;
      if ((this->field_0x128 == '\x02') &&
         (plVar7 = *(longlong **)&this->field_0xd0, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 8))(plVar7,local_118,&local_100,0xffffffff);
        dVar25 = (double)local_118._0_8_;
        dVar24 = (double)local_118._8_8_;
      }
      else {
        local_118._8_4_ = SUB84(dVar24,0);
        local_118._0_8_ = dVar25;
        local_118._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
        local_118._16_8_ = local_100._s_0.Z;
      }
      uVar17 = local_118._16_8_;
      dVar9 = TQuadricError<double>::Evaluate(param_2,(TVector<double> *)&local_b8[0]._s_0);
      dVar10 = TQuadricError<double>::Evaluate(param_2,(TVector<double> *)&local_e8._s_0);
      dVar11 = TQuadricError<double>::Evaluate(param_2,(TVector<double> *)local_118);
      uVar20 = SUB84(dVar11,0);
      uVar22 = (undefined4)((ulonglong)dVar11 >> 0x20);
      dVar23 = dVar10;
      if (dVar9 <= dVar10) {
        dVar23 = dVar9;
      }
      if (dVar23 <= dVar11) {
        uVar20 = SUB84(dVar23,0);
        uVar22 = (undefined4)((ulonglong)dVar23 >> 0x20);
      }
      if ((double)CONCAT44(uVar22,uVar20) == dVar9) {
        (__return_storage_ptr__->field0_0x0)._s_0.X = dVar13;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar14;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar26;
      }
      else if ((double)CONCAT44(uVar22,uVar20) == dVar10) {
        (__return_storage_ptr__->field0_0x0)._s_0.X = dVar15;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar16;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar27;
      }
      else {
        auVar12._8_4_ = SUB84(dVar24,0);
        auVar12._0_8_ = dVar25;
        auVar12._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
        *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar12;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar17;
      }
    }
  }
  else if (EVar4 == MinimalExistingVertexError) {
    lVar5 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
    lVar6 = *(longlong *)(lVar5 + (ulonglong)((uint)param_3 >> 9) * 8);
    pdVar1 = (double *)(lVar6 + (ulonglong)(param_3 & 0x1ff) * 0x18);
    dVar13 = *pdVar1;
    dVar14 = pdVar1[1];
    dVar26 = *(double *)(lVar6 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18);
    lVar5 = *(longlong *)(lVar5 + (ulonglong)((uint)param_4 >> 9) * 8);
    pauVar3 = (undefined1 (*) [16])(lVar5 + (ulonglong)(param_4 & 0x1ff) * 0x18);
    dVar15 = *(double *)*pauVar3;
    dVar16 = *(double *)(*pauVar3 + 8);
    local_118._0_16_ = *pauVar3;
    dVar27 = *(double *)(lVar5 + 0x10 + (ulonglong)(param_4 & 0x1ff) * 0x18);
    local_118._16_8_ = dVar27;
    local_100._s_0.X = dVar13;
    local_100._s_0.Y = dVar14;
    local_100._s_0.Z = dVar26;
    dVar25 = TQuadricError<double>::Evaluate(param_2,(TVector<double> *)&local_100._s_0);
    dVar24 = TQuadricError<double>::Evaluate(param_2,(TVector<double> *)local_118);
    if (dVar24 <= dVar25) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar15;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar16;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar27;
    }
    else {
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar13;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar14;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar26;
    }
  }
  else if (EVar4 == AverageVertexPosition) {
    lVar5 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
    lVar6 = *(longlong *)(lVar5 + (ulonglong)((uint)param_3 >> 9) * 8);
    pdVar1 = (double *)(lVar6 + (ulonglong)(param_3 & 0x1ff) * 0x18);
    lVar5 = *(longlong *)(lVar5 + (ulonglong)((uint)param_4 >> 9) * 8);
    pdVar2 = (double *)(lVar5 + (ulonglong)(param_4 & 0x1ff) * 0x18);
    local_118._0_8_ = (*pdVar1 + *pdVar2) * __real_3fe0000000000000;
    local_118._8_8_ = (pdVar1[1] + pdVar2[1]) * __real_3fe0000000000000;
    local_118._16_8_ =
         (*(double *)(lVar6 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18) +
         *(double *)(lVar5 + 0x10 + (ulonglong)(param_4 & 0x1ff) * 0x18)) * __real_3fe0000000000000;
    if ((this->field_0x128 == '\x02') &&
       (plVar7 = *(longlong **)&this->field_0xd0, plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 8))(plVar7,__return_storage_ptr__,local_118,0xffffffff);
    }
    else {
      auVar8._8_4_ = (int)local_118._8_8_;
      auVar8._0_8_ = local_118._0_8_;
      auVar8._12_4_ = (int)((ulonglong)local_118._8_8_ >> 0x20);
      *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar8;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_118._16_8_;
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar17;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return __return_storage_ptr__;
}

// OptimalPoint @ 14c753df0

TVector<double> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::OptimalPoint
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,
          TVector<double> *__return_storage_ptr__,int param_1,
          TAttrBasedQuadricError<double> *param_2,int param_3,int param_4)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 (*pauVar3) [16];
  ESimplificationCollapseModes EVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 local_f8 [24];
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98 [5];
  
  if ((this->bHaveBoundary != false) && (this->bPreserveBoundaryShape != false)) {
    if (*(int *)(*(longlong *)
                  (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                  (ulonglong)((uint)param_1 >> 9) * 8) + 0xc + (ulonglong)(param_1 & 0x1ff) * 0x10)
        == -1) {
      if (this->CollapseMode != MinimalExistingVertexError) {
        lVar5 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
        lVar6 = *(longlong *)(lVar5 + (ulonglong)((uint)param_3 >> 9) * 8);
        pdVar1 = (double *)(lVar6 + (ulonglong)(param_3 & 0x1ff) * 0x18);
        lVar5 = *(longlong *)(lVar5 + (ulonglong)((uint)param_4 >> 9) * 8);
        pdVar2 = (double *)(lVar5 + (ulonglong)(param_4 & 0x1ff) * 0x18);
        dVar21 = (pdVar1[1] + pdVar2[1]) * __real_3fe0000000000000;
        dVar22 = (*(double *)(lVar6 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18) +
                 *(double *)(lVar5 + 0x10 + (ulonglong)(param_4 & 0x1ff) * 0x18)) *
                 __real_3fe0000000000000;
        (__return_storage_ptr__->field0_0x0)._s_0.X = (*pdVar1 + *pdVar2) * __real_3fe0000000000000;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar21;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar22;
        return __return_storage_ptr__;
      }
    }
    else {
      bVar17 = IsBoundaryVertex(this,param_3);
      if (bVar17) {
        lVar5 = *(longlong *)
                 (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) +
                 (ulonglong)((uint)param_3 >> 9) * 8);
        pdVar1 = (double *)(lVar5 + (ulonglong)(param_3 & 0x1ff) * 0x18);
        dVar21 = pdVar1[1];
        (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar21;
        (__return_storage_ptr__->field0_0x0)._s_0.Z =
             *(double *)(lVar5 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18);
        return __return_storage_ptr__;
      }
      bVar17 = IsBoundaryVertex(this,param_4);
      if (bVar17) {
        lVar5 = *(longlong *)
                 (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) +
                 (ulonglong)((uint)param_4 >> 9) * 8);
        pdVar1 = (double *)(lVar5 + (ulonglong)(param_4 & 0x1ff) * 0x18);
        dVar21 = pdVar1[1];
        (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar21;
        (__return_storage_ptr__->field0_0x0)._s_0.Z =
             *(double *)(lVar5 + 0x10 + (ulonglong)(param_4 & 0x1ff) * 0x18);
        return __return_storage_ptr__;
      }
    }
  }
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  EVar4 = this->CollapseMode;
  if (EVar4 == MinimalQuadricPositionError) {
    local_b0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_b0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_b0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    bVar17 = TAttrBasedQuadricError<double>::OptimalPoint
                       (param_2,(TVector<double> *)&local_b0._s_0,__real_3d4f400000000000);
    if (bVar17) {
      if ((this->field_0x128 == '\x02') &&
         (plVar7 = *(longlong **)&this->field_0xd0, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 8))(plVar7,__return_storage_ptr__,&local_b0,0xffffffff);
      }
      else {
        (__return_storage_ptr__->field0_0x0)._s_0.X = local_b0._s_0.X;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = local_b0._s_0.Y;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = local_b0._s_0.Z;
      }
    }
    else {
      lVar5 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
      lVar6 = *(longlong *)(lVar5 + (ulonglong)((uint)param_3 >> 9) * 8);
      pdVar1 = (double *)(lVar6 + (ulonglong)(param_3 & 0x1ff) * 0x18);
      dVar9 = *pdVar1;
      dVar10 = pdVar1[1];
      dVar21 = *(double *)(lVar6 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18);
      lVar5 = *(longlong *)(lVar5 + (ulonglong)((uint)param_4 >> 9) * 8);
      pdVar1 = (double *)(lVar5 + (ulonglong)(param_4 & 0x1ff) * 0x18);
      dVar14 = *pdVar1;
      dVar15 = pdVar1[1];
      dVar22 = *(double *)(lVar5 + 0x10 + (ulonglong)(param_4 & 0x1ff) * 0x18);
      local_e0._s_0.X = (dVar9 + dVar14) * __real_3fe0000000000000;
      local_e0._s_0.Z = (dVar21 + dVar22) * __real_3fe0000000000000;
      local_e0._s_0.Y = (dVar10 + dVar15) * __real_3fe0000000000000;
      local_c8._s_0.X = dVar14;
      local_c8._s_0.Y = dVar15;
      local_c8._s_0.Z = dVar22;
      local_98[0]._0_8_ = dVar9;
      local_98[0]._8_8_ = dVar10;
      local_98[0]._16_8_ = dVar21;
      if ((this->field_0x128 == '\x02') &&
         (plVar7 = *(longlong **)&this->field_0xd0, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 8))(plVar7,local_f8,&local_e0,0xffffffff);
      }
      else {
        local_f8._8_4_ = SUB84(local_e0._s_0.Y,0);
        local_f8._0_8_ = local_e0._s_0.X;
        local_f8._12_4_ = (int)((ulonglong)local_e0._s_0.Y >> 0x20);
        local_f8._16_8_ = local_e0._s_0.Z;
      }
      dVar11 = TAttrBasedQuadricError<double>::Evaluate
                         (param_2,(TVector<double> *)&local_98[0]._s_0);
      dVar12 = TAttrBasedQuadricError<double>::Evaluate(param_2,(TVector<double> *)&local_c8._s_0);
      dVar13 = TAttrBasedQuadricError<double>::Evaluate(param_2,(TVector<double> *)local_f8);
      uVar18 = SUB84(dVar13,0);
      uVar19 = (undefined4)((ulonglong)dVar13 >> 0x20);
      dVar20 = dVar12;
      if (dVar11 <= dVar12) {
        dVar20 = dVar11;
      }
      if (dVar20 <= dVar13) {
        uVar18 = SUB84(dVar20,0);
        uVar19 = (undefined4)((ulonglong)dVar20 >> 0x20);
      }
      if ((double)CONCAT44(uVar19,uVar18) == dVar11) {
        (__return_storage_ptr__->field0_0x0)._s_0.X = dVar9;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar10;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar21;
      }
      else if ((double)CONCAT44(uVar19,uVar18) == dVar12) {
        (__return_storage_ptr__->field0_0x0)._s_0.X = dVar14;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar15;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar22;
      }
      else {
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_f8._0_8_;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_f8._8_8_;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_f8._16_8_;
      }
    }
  }
  else if (EVar4 == MinimalExistingVertexError) {
    lVar5 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
    lVar6 = *(longlong *)(lVar5 + (ulonglong)((uint)param_3 >> 9) * 8);
    pdVar1 = (double *)(lVar6 + (ulonglong)(param_3 & 0x1ff) * 0x18);
    dVar14 = *pdVar1;
    dVar15 = pdVar1[1];
    dVar21 = *(double *)(lVar6 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18);
    lVar5 = *(longlong *)(lVar5 + (ulonglong)((uint)param_4 >> 9) * 8);
    pauVar3 = (undefined1 (*) [16])(lVar5 + (ulonglong)(param_4 & 0x1ff) * 0x18);
    dVar11 = *(double *)*pauVar3;
    dVar12 = *(double *)(*pauVar3 + 8);
    local_f8._0_16_ = *pauVar3;
    dVar22 = *(double *)(lVar5 + 0x10 + (ulonglong)(param_4 & 0x1ff) * 0x18);
    local_f8._16_8_ = dVar22;
    local_e0._s_0.X = dVar14;
    local_e0._s_0.Y = dVar15;
    local_e0._s_0.Z = dVar21;
    dVar9 = TAttrBasedQuadricError<double>::Evaluate(param_2,(TVector<double> *)&local_e0._s_0);
    dVar10 = TAttrBasedQuadricError<double>::Evaluate(param_2,(TVector<double> *)local_f8);
    if (dVar10 <= dVar9) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar11;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar12;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar22;
    }
    else {
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar14;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar15;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar21;
    }
  }
  else if (EVar4 == AverageVertexPosition) {
    lVar5 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
    lVar6 = *(longlong *)(lVar5 + (ulonglong)((uint)param_3 >> 9) * 8);
    pdVar1 = (double *)(lVar6 + (ulonglong)(param_3 & 0x1ff) * 0x18);
    lVar5 = *(longlong *)(lVar5 + (ulonglong)((uint)param_4 >> 9) * 8);
    pdVar2 = (double *)(lVar5 + (ulonglong)(param_4 & 0x1ff) * 0x18);
    local_f8._0_8_ = (*pdVar1 + *pdVar2) * __real_3fe0000000000000;
    local_f8._8_8_ = (pdVar1[1] + pdVar2[1]) * __real_3fe0000000000000;
    local_f8._16_8_ =
         (*(double *)(lVar6 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18) +
         *(double *)(lVar5 + 0x10 + (ulonglong)(param_4 & 0x1ff) * 0x18)) * __real_3fe0000000000000;
    if ((this->field_0x128 == '\x02') &&
       (plVar7 = *(longlong **)&this->field_0xd0, plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 8))(plVar7,__return_storage_ptr__,local_f8,0xffffffff);
    }
    else {
      auVar8._8_4_ = (int)local_f8._8_8_;
      auVar8._0_8_ = local_f8._0_8_;
      auVar8._12_4_ = (int)((ulonglong)local_f8._8_8_ >> 0x20);
      *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar8;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_f8._16_8_;
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar16;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return __return_storage_ptr__;
}

// OptimalPoint @ 14c7543a0

TVector<double> * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::OptimalPoint
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,
          TVector<double> *__return_storage_ptr__,int param_1,TVolPresQuadricError<double> *param_2,
          int param_3,int param_4)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 (*pauVar3) [16];
  ESimplificationCollapseModes EVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  bool bVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 local_118 [24];
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8 [6];
  
  if ((this->bHaveBoundary != false) && (this->bPreserveBoundaryShape != false)) {
    if (*(int *)(*(longlong *)
                  (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                  (ulonglong)((uint)param_1 >> 9) * 8) + 0xc + (ulonglong)(param_1 & 0x1ff) * 0x10)
        == -1) {
      if (this->CollapseMode != MinimalExistingVertexError) {
        lVar5 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
        lVar6 = *(longlong *)(lVar5 + (ulonglong)((uint)param_3 >> 9) * 8);
        pdVar1 = (double *)(lVar6 + (ulonglong)(param_3 & 0x1ff) * 0x18);
        lVar5 = *(longlong *)(lVar5 + (ulonglong)((uint)param_4 >> 9) * 8);
        pdVar2 = (double *)(lVar5 + (ulonglong)(param_4 & 0x1ff) * 0x18);
        dVar26 = (pdVar1[1] + pdVar2[1]) * __real_3fe0000000000000;
        dVar27 = (*(double *)(lVar6 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18) +
                 *(double *)(lVar5 + 0x10 + (ulonglong)(param_4 & 0x1ff) * 0x18)) *
                 __real_3fe0000000000000;
        (__return_storage_ptr__->field0_0x0)._s_0.X = (*pdVar1 + *pdVar2) * __real_3fe0000000000000;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar26;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar27;
        return __return_storage_ptr__;
      }
    }
    else {
      bVar18 = IsBoundaryVertex(this,param_3);
      if (bVar18) {
        lVar5 = *(longlong *)
                 (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) +
                 (ulonglong)((uint)param_3 >> 9) * 8);
        pdVar1 = (double *)(lVar5 + (ulonglong)(param_3 & 0x1ff) * 0x18);
        dVar26 = pdVar1[1];
        (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar26;
        (__return_storage_ptr__->field0_0x0)._s_0.Z =
             *(double *)(lVar5 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18);
        return __return_storage_ptr__;
      }
      bVar18 = IsBoundaryVertex(this,param_4);
      if (bVar18) {
        lVar5 = *(longlong *)
                 (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) +
                 (ulonglong)((uint)param_4 >> 9) * 8);
        pdVar1 = (double *)(lVar5 + (ulonglong)(param_4 & 0x1ff) * 0x18);
        dVar26 = pdVar1[1];
        (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar26;
        (__return_storage_ptr__->field0_0x0)._s_0.Z =
             *(double *)(lVar5 + 0x10 + (ulonglong)(param_4 & 0x1ff) * 0x18);
        return __return_storage_ptr__;
      }
    }
  }
  uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar26 = __real_3d4f400000000000;
  EVar4 = this->CollapseMode;
  if (EVar4 == MinimalQuadricPositionError) {
    local_100._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_100._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_100._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar20 = (uint)__xmm_80000000000000008000000000000000;
    uVar22 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    bVar18 = TQuadricError<double>::SolveAxEqualsb
                       ((TQuadricError<double> *)param_2,(TVector<double> *)&local_100._s_0,
                        (double)CONCAT44((uint)((ulonglong)param_2->_padding_ >> 0x20) ^ uVar22,
                                         (uint)param_2->_padding_ ^ uVar20),
                        (double)CONCAT44((uint)((ulonglong)param_2->_padding_ >> 0x20) ^ uVar22,
                                         (uint)param_2->_padding_ ^ uVar20),
                        (double)CONCAT44((uint)((ulonglong)param_2->_padding_ >> 0x20) ^ uVar22,
                                         (uint)param_2->_padding_ ^ uVar20),__real_3d4f400000000000)
    ;
    if (bVar18) {
      dVar27 = (param_2->PlaneData).N.field0_0x0._s_0.X * __real_3fd5555555555555;
      dVar25 = (param_2->PlaneData).N.field0_0x0._s_0.Y * __real_3fd5555555555555;
      dVar24 = (param_2->PlaneData).N.field0_0x0._s_0.Z * __real_3fd5555555555555;
      dVar13 = (param_2->PlaneData).Dist * __real_3fd5555555555555;
      bVar18 = TQuadricError<double>::SolveAxEqualsb
                         ((TQuadricError<double> *)param_2,(TVector<double> *)&local_e8._s_0,dVar27,
                          dVar25,dVar24,dVar26);
      if ((bVar18) &&
         (dVar26 = (dVar27 * local_100._s_0.X + dVar25 * local_100._s_0.Y +
                    dVar24 * local_100._s_0.Z + dVar13) /
                   (dVar27 * local_e8._s_0.X + dVar25 * local_e8._s_0.Y + dVar24 * local_e8._s_0.Z),
         uVar20 = SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar22 = (uint)((ulonglong)dVar26 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         (double)CONCAT44(uVar22,uVar20) < __real_40f86a0000000000 ||
         (double)CONCAT44(uVar22,uVar20) == __real_40f86a0000000000)) {
        local_100._s_0.X = local_100._s_0.X - local_e8._s_0.X * dVar26;
        local_100._s_0.Y = local_100._s_0.Y - local_e8._s_0.Y * dVar26;
        local_100._s_0.Z = local_100._s_0.Z - local_e8._s_0.Z * dVar26;
      }
      if ((this->field_0x128 == '\x02') &&
         (plVar7 = *(longlong **)&this->field_0xd0, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 8))(plVar7,__return_storage_ptr__,&local_100,0xffffffff);
      }
      else {
        (__return_storage_ptr__->field0_0x0)._s_0.X = local_100._s_0.X;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = local_100._s_0.Y;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = local_100._s_0.Z;
      }
    }
    else {
      lVar5 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
      lVar6 = *(longlong *)(lVar5 + (ulonglong)((uint)param_3 >> 9) * 8);
      pdVar1 = (double *)(lVar6 + (ulonglong)(param_3 & 0x1ff) * 0x18);
      dVar13 = *pdVar1;
      dVar14 = pdVar1[1];
      dVar26 = *(double *)(lVar6 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18);
      lVar5 = *(longlong *)(lVar5 + (ulonglong)((uint)param_4 >> 9) * 8);
      pdVar1 = (double *)(lVar5 + (ulonglong)(param_4 & 0x1ff) * 0x18);
      dVar15 = *pdVar1;
      dVar16 = pdVar1[1];
      dVar27 = *(double *)(lVar5 + 0x10 + (ulonglong)(param_4 & 0x1ff) * 0x18);
      dVar25 = (dVar13 + dVar15) * __real_3fe0000000000000;
      local_e8._s_0.Z = (dVar26 + dVar27) * __real_3fe0000000000000;
      dVar24 = (dVar14 + dVar16) * __real_3fe0000000000000;
      local_e8._s_0.X = dVar25;
      local_e8._8_8_ = dVar24;
      local_d0._s_0.X = dVar15;
      local_d0._s_0.Y = dVar16;
      local_d0._s_0.Z = dVar27;
      local_b8[0]._0_8_ = dVar13;
      local_b8[0]._8_8_ = dVar14;
      local_b8[0]._16_8_ = dVar26;
      if ((this->field_0x128 == '\x02') &&
         (plVar7 = *(longlong **)&this->field_0xd0, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 8))(plVar7,local_118,&local_e8,0xffffffff);
        dVar25 = (double)local_118._0_8_;
        dVar24 = (double)local_118._8_8_;
      }
      else {
        local_118._8_4_ = SUB84(dVar24,0);
        local_118._0_8_ = dVar25;
        local_118._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
        local_118._16_8_ = local_e8._s_0.Z;
      }
      uVar17 = local_118._16_8_;
      dVar9 = TQuadricError<double>::Evaluate
                        ((TQuadricError<double> *)param_2,(TVector<double> *)&local_b8[0]._s_0);
      dVar10 = TQuadricError<double>::Evaluate
                         ((TQuadricError<double> *)param_2,(TVector<double> *)&local_d0._s_0);
      dVar11 = TQuadricError<double>::Evaluate
                         ((TQuadricError<double> *)param_2,(TVector<double> *)local_118);
      uVar19 = SUB84(dVar11,0);
      uVar21 = (undefined4)((ulonglong)dVar11 >> 0x20);
      dVar23 = dVar10;
      if (dVar9 <= dVar10) {
        dVar23 = dVar9;
      }
      if (dVar23 <= dVar11) {
        uVar19 = SUB84(dVar23,0);
        uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
      }
      if ((double)CONCAT44(uVar21,uVar19) == dVar9) {
        (__return_storage_ptr__->field0_0x0)._s_0.X = dVar13;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar14;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar26;
      }
      else if ((double)CONCAT44(uVar21,uVar19) == dVar10) {
        (__return_storage_ptr__->field0_0x0)._s_0.X = dVar15;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar16;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar27;
      }
      else {
        auVar12._8_4_ = SUB84(dVar24,0);
        auVar12._0_8_ = dVar25;
        auVar12._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
        *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar12;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar17;
      }
    }
  }
  else if (EVar4 == MinimalExistingVertexError) {
    lVar5 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
    lVar6 = *(longlong *)(lVar5 + (ulonglong)((uint)param_3 >> 9) * 8);
    pdVar1 = (double *)(lVar6 + (ulonglong)(param_3 & 0x1ff) * 0x18);
    dVar13 = *pdVar1;
    dVar14 = pdVar1[1];
    dVar26 = *(double *)(lVar6 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18);
    lVar5 = *(longlong *)(lVar5 + (ulonglong)((uint)param_4 >> 9) * 8);
    pauVar3 = (undefined1 (*) [16])(lVar5 + (ulonglong)(param_4 & 0x1ff) * 0x18);
    dVar15 = *(double *)*pauVar3;
    dVar16 = *(double *)(*pauVar3 + 8);
    local_118._0_16_ = *pauVar3;
    dVar27 = *(double *)(lVar5 + 0x10 + (ulonglong)(param_4 & 0x1ff) * 0x18);
    local_118._16_8_ = dVar27;
    local_e8._s_0.X = dVar13;
    local_e8._s_0.Y = dVar14;
    local_e8._s_0.Z = dVar26;
    dVar25 = TQuadricError<double>::Evaluate
                       ((TQuadricError<double> *)param_2,(TVector<double> *)&local_e8._s_0);
    dVar24 = TQuadricError<double>::Evaluate
                       ((TQuadricError<double> *)param_2,(TVector<double> *)local_118);
    if (dVar24 <= dVar25) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar15;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar16;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar27;
    }
    else {
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar13;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar14;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar26;
    }
  }
  else if (EVar4 == AverageVertexPosition) {
    lVar5 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
    lVar6 = *(longlong *)(lVar5 + (ulonglong)((uint)param_3 >> 9) * 8);
    pdVar1 = (double *)(lVar6 + (ulonglong)(param_3 & 0x1ff) * 0x18);
    lVar5 = *(longlong *)(lVar5 + (ulonglong)((uint)param_4 >> 9) * 8);
    pdVar2 = (double *)(lVar5 + (ulonglong)(param_4 & 0x1ff) * 0x18);
    local_118._0_8_ = (*pdVar1 + *pdVar2) * __real_3fe0000000000000;
    local_118._8_8_ = (pdVar1[1] + pdVar2[1]) * __real_3fe0000000000000;
    local_118._16_8_ =
         (*(double *)(lVar6 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18) +
         *(double *)(lVar5 + 0x10 + (ulonglong)(param_4 & 0x1ff) * 0x18)) * __real_3fe0000000000000;
    if ((this->field_0x128 == '\x02') &&
       (plVar7 = *(longlong **)&this->field_0xd0, plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 8))(plVar7,__return_storage_ptr__,local_118,0xffffffff);
    }
    else {
      auVar8._8_4_ = (int)local_118._8_8_;
      auVar8._0_8_ = local_118._0_8_;
      auVar8._12_4_ = (int)((ulonglong)local_118._8_8_ >> 0x20);
      *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar8;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_118._16_8_;
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar17;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return __return_storage_ptr__;
}

// Precompute @ 14c7574f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::Precompute
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  int local_138 [2];
  undefined8 local_130;
  FRefCountVector *local_128;
  int local_120;
  int local_11c;
  FRefCountVector *local_118;
  int local_110;
  int local_10c;
  undefined1 local_108 [48];
  longlong local_d8 [3];
  longlong *local_c0;
  undefined1 local_b8 [48];
  IndexEnumerable local_88;
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  this->bHaveBoundary = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
            (&this->IsBoundaryVtxCache,
             *(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
             *(int *)(*(longlong *)&this->field_0x8 + 0x24),Default);
  if (!param_1) {
    FDynamicMesh3::BoundaryEdgeIndicesItr
              (*(FDynamicMesh3 **)&this->field_0x8,(FilteredEnumerable *)local_b8);
    FRefCountVector::FilteredEnumerable::begin
              ((FilteredEnumerable *)local_b8,
               (FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_108);
    local_128 = local_88.Vector;
    local_118 = local_88.Vector;
    local_120 = ((local_88.Vector)->RefCounts).CurBlock * 0x200 +
                ((local_88.Vector)->RefCounts).CurBlockUsed;
    local_11c = local_120;
    local_110 = local_120;
    local_10c = local_120;
    FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>::
    FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>
              ((FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_78,
               (IndexIterator *)&local_118,(IndexIterator *)&local_128,
               (TFunction<bool___cdecl(int)> *)local_b8);
    if ((int)local_108._8_8_ != local_78._8_4_) {
      do {
        local_130 = *(undefined8 *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                       ((local_108._8_8_ & 0xffffffff) >> 9) * 8) +
                     (ulonglong)((uint)local_108._8_8_ & 0x1ff) * 0x10);
        iVar1 = (this->IsBoundaryVtxCache).ArrayNum;
        uVar9 = (uint)local_130;
        uVar10 = (uint)((ulonglong)local_130 >> 0x20);
        uVar6 = 0;
        if ((int)uVar9 < iVar1) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_148 = (longlong)(int)uVar9;
          local_140 = (longlong)iVar1;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        (this->IsBoundaryVtxCache).AllocatorInstance.Data[(int)uVar9] = (FScriptContainerElement)0x1
        ;
        iVar1 = (this->IsBoundaryVtxCache).ArrayNum;
        uVar6 = 0;
        if ((int)uVar10 < iVar1) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_148 = (longlong)(int)uVar10;
          local_140 = (longlong)iVar1;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        (this->IsBoundaryVtxCache).AllocatorInstance.Data[local_130._4_4_] =
             (FScriptContainerElement)0x1;
        this->bHaveBoundary = true;
        do {
          FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_108);
          if ((int)local_108._8_8_ == local_108._24_4_) break;
          local_138[0] = (int)local_108._8_8_;
          Core::Private::Function::CheckCallable((void *)local_108._32_8_);
          uVar3 = local_108._32_8_;
          plVar8 = local_d8;
          if (local_c0 != (longlong *)0x0) {
            plVar8 = local_c0;
          }
          uVar7 = (**(code **)(*plVar8 + 8))();
          cVar5 = (*(code *)uVar3)(uVar7,local_138);
        } while (cVar5 == '\0');
      } while ((int)local_108._8_8_ != local_78._8_4_);
    }
    if (local_78._32_8_ != 0) {
      plVar8 = (longlong *)(local_78 + 0x30);
      if ((longlong *)local_78._72_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_78._72_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if ((code *)local_108._32_8_ != (code *)0x0) {
      plVar8 = local_d8;
      if (local_c0 != (longlong *)0x0) {
        plVar8 = local_c0;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (local_b8._0_8_ != 0) {
      plVar8 = (longlong *)(local_b8 + 0x10);
      if ((longlong *)local_b8._40_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_b8._40_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  return;
}

// Precompute @ 14c7577a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::Precompute
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  int local_138 [2];
  undefined8 local_130;
  FRefCountVector *local_128;
  int local_120;
  int local_11c;
  FRefCountVector *local_118;
  int local_110;
  int local_10c;
  undefined1 local_108 [48];
  longlong local_d8 [3];
  longlong *local_c0;
  undefined1 local_b8 [48];
  IndexEnumerable local_88;
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  this->bHaveBoundary = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
            (&this->IsBoundaryVtxCache,
             *(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
             *(int *)(*(longlong *)&this->field_0x8 + 0x24),Default);
  if (!param_1) {
    FDynamicMesh3::BoundaryEdgeIndicesItr
              (*(FDynamicMesh3 **)&this->field_0x8,(FilteredEnumerable *)local_b8);
    FRefCountVector::FilteredEnumerable::begin
              ((FilteredEnumerable *)local_b8,
               (FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_108);
    local_128 = local_88.Vector;
    local_118 = local_88.Vector;
    local_120 = ((local_88.Vector)->RefCounts).CurBlock * 0x200 +
                ((local_88.Vector)->RefCounts).CurBlockUsed;
    local_11c = local_120;
    local_110 = local_120;
    local_10c = local_120;
    FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>::
    FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>
              ((FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_78,
               (IndexIterator *)&local_118,(IndexIterator *)&local_128,
               (TFunction<bool___cdecl(int)> *)local_b8);
    if ((int)local_108._8_8_ != local_78._8_4_) {
      do {
        local_130 = *(undefined8 *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                       ((local_108._8_8_ & 0xffffffff) >> 9) * 8) +
                     (ulonglong)((uint)local_108._8_8_ & 0x1ff) * 0x10);
        iVar1 = (this->IsBoundaryVtxCache).ArrayNum;
        uVar9 = (uint)local_130;
        uVar10 = (uint)((ulonglong)local_130 >> 0x20);
        uVar6 = 0;
        if ((int)uVar9 < iVar1) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_148 = (longlong)(int)uVar9;
          local_140 = (longlong)iVar1;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        (this->IsBoundaryVtxCache).AllocatorInstance.Data[(int)uVar9] = (FScriptContainerElement)0x1
        ;
        iVar1 = (this->IsBoundaryVtxCache).ArrayNum;
        uVar6 = 0;
        if ((int)uVar10 < iVar1) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_148 = (longlong)(int)uVar10;
          local_140 = (longlong)iVar1;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        (this->IsBoundaryVtxCache).AllocatorInstance.Data[local_130._4_4_] =
             (FScriptContainerElement)0x1;
        this->bHaveBoundary = true;
        do {
          FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_108);
          if ((int)local_108._8_8_ == local_108._24_4_) break;
          local_138[0] = (int)local_108._8_8_;
          Core::Private::Function::CheckCallable((void *)local_108._32_8_);
          uVar3 = local_108._32_8_;
          plVar8 = local_d8;
          if (local_c0 != (longlong *)0x0) {
            plVar8 = local_c0;
          }
          uVar7 = (**(code **)(*plVar8 + 8))();
          cVar5 = (*(code *)uVar3)(uVar7,local_138);
        } while (cVar5 == '\0');
      } while ((int)local_108._8_8_ != local_78._8_4_);
    }
    if (local_78._32_8_ != 0) {
      plVar8 = (longlong *)(local_78 + 0x30);
      if ((longlong *)local_78._72_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_78._72_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if ((code *)local_108._32_8_ != (code *)0x0) {
      plVar8 = local_d8;
      if (local_c0 != (longlong *)0x0) {
        plVar8 = local_c0;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (local_b8._0_8_ != 0) {
      plVar8 = (longlong *)(local_b8 + 0x10);
      if ((longlong *)local_b8._40_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_b8._40_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  return;
}

// Precompute @ 14c757a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::Precompute
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  int local_138 [2];
  undefined8 local_130;
  FRefCountVector *local_128;
  int local_120;
  int local_11c;
  FRefCountVector *local_118;
  int local_110;
  int local_10c;
  undefined1 local_108 [48];
  longlong local_d8 [3];
  longlong *local_c0;
  undefined1 local_b8 [48];
  IndexEnumerable local_88;
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  this->bHaveBoundary = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
            (&this->IsBoundaryVtxCache,
             *(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
             *(int *)(*(longlong *)&this->field_0x8 + 0x24),Default);
  if (!param_1) {
    FDynamicMesh3::BoundaryEdgeIndicesItr
              (*(FDynamicMesh3 **)&this->field_0x8,(FilteredEnumerable *)local_b8);
    FRefCountVector::FilteredEnumerable::begin
              ((FilteredEnumerable *)local_b8,
               (FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_108);
    local_128 = local_88.Vector;
    local_118 = local_88.Vector;
    local_120 = ((local_88.Vector)->RefCounts).CurBlock * 0x200 +
                ((local_88.Vector)->RefCounts).CurBlockUsed;
    local_11c = local_120;
    local_110 = local_120;
    local_10c = local_120;
    FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>::
    FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>
              ((FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_78,
               (IndexIterator *)&local_118,(IndexIterator *)&local_128,
               (TFunction<bool___cdecl(int)> *)local_b8);
    if ((int)local_108._8_8_ != local_78._8_4_) {
      do {
        local_130 = *(undefined8 *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                       ((local_108._8_8_ & 0xffffffff) >> 9) * 8) +
                     (ulonglong)((uint)local_108._8_8_ & 0x1ff) * 0x10);
        iVar1 = (this->IsBoundaryVtxCache).ArrayNum;
        uVar9 = (uint)local_130;
        uVar10 = (uint)((ulonglong)local_130 >> 0x20);
        uVar6 = 0;
        if ((int)uVar9 < iVar1) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_148 = (longlong)(int)uVar9;
          local_140 = (longlong)iVar1;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        (this->IsBoundaryVtxCache).AllocatorInstance.Data[(int)uVar9] = (FScriptContainerElement)0x1
        ;
        iVar1 = (this->IsBoundaryVtxCache).ArrayNum;
        uVar6 = 0;
        if ((int)uVar10 < iVar1) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_148 = (longlong)(int)uVar10;
          local_140 = (longlong)iVar1;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        (this->IsBoundaryVtxCache).AllocatorInstance.Data[local_130._4_4_] =
             (FScriptContainerElement)0x1;
        this->bHaveBoundary = true;
        do {
          FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_108);
          if ((int)local_108._8_8_ == local_108._24_4_) break;
          local_138[0] = (int)local_108._8_8_;
          Core::Private::Function::CheckCallable((void *)local_108._32_8_);
          uVar3 = local_108._32_8_;
          plVar8 = local_d8;
          if (local_c0 != (longlong *)0x0) {
            plVar8 = local_c0;
          }
          uVar7 = (**(code **)(*plVar8 + 8))();
          cVar5 = (*(code *)uVar3)(uVar7,local_138);
        } while (cVar5 == '\0');
      } while ((int)local_108._8_8_ != local_78._8_4_);
    }
    if (local_78._32_8_ != 0) {
      plVar8 = (longlong *)(local_78 + 0x30);
      if ((longlong *)local_78._72_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_78._72_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if ((code *)local_108._32_8_ != (code *)0x0) {
      plVar8 = local_d8;
      if (local_c0 != (longlong *)0x0) {
        plVar8 = local_c0;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (local_b8._0_8_ != 0) {
      plVar8 = (longlong *)(local_b8 + 0x10);
      if ((longlong *)local_b8._40_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_b8._40_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  return;
}

// ProfileBeginCollapse @ 14c757d00

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::ProfileBeginCollapse
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  return;
}

// ProfileBeginCollapse @ 14c757d10

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
ProfileBeginCollapse(TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  return;
}

// ProfileBeginCollapse @ 14c757d20

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::ProfileBeginCollapse
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  return;
}

// ProfileBeginOps @ 14c757d30

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::ProfileBeginOps
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  return;
}

// ProfileBeginOps @ 14c757d40

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::ProfileBeginOps
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  return;
}

// ProfileBeginOps @ 14c757d50

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::ProfileBeginOps
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  return;
}

// ProfileBeginPass @ 14c757d60

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::ProfileBeginPass
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  if (this->field_0x12a != '\0') {
    this->COUNT_COLLAPSES = 0;
    this->COUNT_ITERATIONS = 0;
  }
  return;
}

// ProfileBeginPass @ 14c757d80

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::ProfileBeginPass
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  if (this->field_0x12a != '\0') {
    this->COUNT_COLLAPSES = 0;
    this->COUNT_ITERATIONS = 0;
  }
  return;
}

// ProfileBeginPass @ 14c757da0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::ProfileBeginPass
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  if (this->field_0x12a != '\0') {
    this->COUNT_COLLAPSES = 0;
    this->COUNT_ITERATIONS = 0;
  }
  return;
}

// ProfileBeginProject @ 14c757dc0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::ProfileBeginProject
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  return;
}

// ProfileBeginProject @ 14c757dd0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
ProfileBeginProject(TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  return;
}

// ProfileBeginProject @ 14c757de0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::ProfileBeginProject
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  return;
}

// ProfileBeginSetup @ 14c757df0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::ProfileBeginSetup
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  return;
}

// ProfileBeginSetup @ 14c757e00

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::ProfileBeginSetup
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  return;
}

// ProfileBeginSetup @ 14c757e10

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::ProfileBeginSetup
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  return;
}

// ProfileEndCollapse @ 14c757e20

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::ProfileEndCollapse
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  return;
}

// ProfileEndCollapse @ 14c757e30

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::ProfileEndCollapse
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  return;
}

// ProfileEndCollapse @ 14c757e40

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::ProfileEndCollapse
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  return;
}

// ProfileEndOps @ 14c757e50

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::ProfileEndOps
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  return;
}

// ProfileEndOps @ 14c757e60

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::ProfileEndOps
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  return;
}

// ProfileEndOps @ 14c757e70

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::ProfileEndOps
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  return;
}

// ProfileEndPass @ 14c757e80

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::ProfileEndPass
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  return;
}

// ProfileEndPass @ 14c757e90

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::ProfileEndPass
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  return;
}

// ProfileEndPass @ 14c757ea0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::ProfileEndPass
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  return;
}

// ProfileEndProject @ 14c757eb0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::ProfileEndProject
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  return;
}

// ProfileEndProject @ 14c757ec0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::ProfileEndProject
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  return;
}

// ProfileEndProject @ 14c757ed0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::ProfileEndProject
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  return;
}

// ProfileEndSetup @ 14c757ee0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::ProfileEndSetup
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  return;
}

// ProfileEndSetup @ 14c757ef0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::ProfileEndSetup
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  return;
}

// ProfileEndSetup @ 14c757f00

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::ProfileEndSetup
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  return;
}

// ProjectVertex @ 14c758110

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::ProjectVertex
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,int param_1,
          IProjectionTarget *param_2)

{
  atomic<unsigned_char> *this_00;
  undefined4 *puVar1;
  undefined8 *puVar2;
  FMutex FVar3;
  atomic<unsigned_char> aVar4;
  longlong lVar5;
  longlong lVar6;
  short sVar7;
  ulonglong uVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  uVar8 = (ulonglong)(param_1 & 0x1ff);
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) +
           (ulonglong)((uint)param_1 >> 9) * 8);
  puVar1 = (undefined4 *)(lVar5 + uVar8 * 0x18);
  local_20 = *puVar1;
  uStack_1c = puVar1[1];
  uStack_18 = puVar1[2];
  uStack_14 = puVar1[3];
  local_10 = *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18);
  (**(code **)((longlong)*param_2 + 8))(param_2,&local_38,&local_20,param_1);
  lVar5 = *(longlong *)&this->field_0x8;
  sVar7 = _dclass((int)local_38);
  if (((sVar7 < 1) && (sVar7 = _dclass((int)uStack_30), sVar7 < 1)) &&
     (sVar7 = _dclass((int)local_28), sVar7 < 1)) {
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
    puVar2 = (undefined8 *)(lVar6 + uVar8 * 0x18);
    *puVar2 = local_38;
    puVar2[1] = uStack_30;
    *(undefined8 *)(lVar6 + 0x10 + uVar8 * 0x18) = local_28;
    if (*(char *)(lVar5 + 0x21c) != '\0') {
      this_00 = (atomic<unsigned_char> *)(lVar5 + 0x21d);
      LOCK();
      FVar3.State = *this_00;
      if (FVar3.State == (atomic<unsigned_char>)0x0) {
        *this_00 = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (FVar3.State != (atomic<unsigned_char>)0x0) {
        FMutex::LockSlow((FMutex *)this_00);
      }
      *(int *)(lVar5 + 0x220) = *(int *)(lVar5 + 0x220) + 1;
      LOCK();
      aVar4 = *this_00;
      *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
      UNLOCK();
      if (((byte)aVar4 & 2) != 0) {
        FMutex::WakeWaitingThread((FMutex *)this_00);
      }
    }
  }
  return;
}

// ProjectVertex @ 14c758220

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::ProjectVertex
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,int param_1,
          IProjectionTarget *param_2)

{
  atomic<unsigned_char> *this_00;
  undefined4 *puVar1;
  undefined8 *puVar2;
  FMutex FVar3;
  atomic<unsigned_char> aVar4;
  longlong lVar5;
  longlong lVar6;
  short sVar7;
  ulonglong uVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  uVar8 = (ulonglong)(param_1 & 0x1ff);
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) +
           (ulonglong)((uint)param_1 >> 9) * 8);
  puVar1 = (undefined4 *)(lVar5 + uVar8 * 0x18);
  local_20 = *puVar1;
  uStack_1c = puVar1[1];
  uStack_18 = puVar1[2];
  uStack_14 = puVar1[3];
  local_10 = *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18);
  (**(code **)((longlong)*param_2 + 8))(param_2,&local_38,&local_20,param_1);
  lVar5 = *(longlong *)&this->field_0x8;
  sVar7 = _dclass((int)local_38);
  if (((sVar7 < 1) && (sVar7 = _dclass((int)uStack_30), sVar7 < 1)) &&
     (sVar7 = _dclass((int)local_28), sVar7 < 1)) {
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
    puVar2 = (undefined8 *)(lVar6 + uVar8 * 0x18);
    *puVar2 = local_38;
    puVar2[1] = uStack_30;
    *(undefined8 *)(lVar6 + 0x10 + uVar8 * 0x18) = local_28;
    if (*(char *)(lVar5 + 0x21c) != '\0') {
      this_00 = (atomic<unsigned_char> *)(lVar5 + 0x21d);
      LOCK();
      FVar3.State = *this_00;
      if (FVar3.State == (atomic<unsigned_char>)0x0) {
        *this_00 = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (FVar3.State != (atomic<unsigned_char>)0x0) {
        FMutex::LockSlow((FMutex *)this_00);
      }
      *(int *)(lVar5 + 0x220) = *(int *)(lVar5 + 0x220) + 1;
      LOCK();
      aVar4 = *this_00;
      *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
      UNLOCK();
      if (((byte)aVar4 & 2) != 0) {
        FMutex::WakeWaitingThread((FMutex *)this_00);
      }
    }
  }
  return;
}

// ProjectVertex @ 14c758330

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::ProjectVertex
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,int param_1,
          IProjectionTarget *param_2)

{
  atomic<unsigned_char> *this_00;
  undefined4 *puVar1;
  undefined8 *puVar2;
  FMutex FVar3;
  atomic<unsigned_char> aVar4;
  longlong lVar5;
  longlong lVar6;
  short sVar7;
  ulonglong uVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  uVar8 = (ulonglong)(param_1 & 0x1ff);
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) +
           (ulonglong)((uint)param_1 >> 9) * 8);
  puVar1 = (undefined4 *)(lVar5 + uVar8 * 0x18);
  local_20 = *puVar1;
  uStack_1c = puVar1[1];
  uStack_18 = puVar1[2];
  uStack_14 = puVar1[3];
  local_10 = *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18);
  (**(code **)((longlong)*param_2 + 8))(param_2,&local_38,&local_20,param_1);
  lVar5 = *(longlong *)&this->field_0x8;
  sVar7 = _dclass((int)local_38);
  if (((sVar7 < 1) && (sVar7 = _dclass((int)uStack_30), sVar7 < 1)) &&
     (sVar7 = _dclass((int)local_28), sVar7 < 1)) {
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
    puVar2 = (undefined8 *)(lVar6 + uVar8 * 0x18);
    *puVar2 = local_38;
    puVar2[1] = uStack_30;
    *(undefined8 *)(lVar6 + 0x10 + uVar8 * 0x18) = local_28;
    if (*(char *)(lVar5 + 0x21c) != '\0') {
      this_00 = (atomic<unsigned_char> *)(lVar5 + 0x21d);
      LOCK();
      FVar3.State = *this_00;
      if (FVar3.State == (atomic<unsigned_char>)0x0) {
        *this_00 = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (FVar3.State != (atomic<unsigned_char>)0x0) {
        FMutex::LockSlow((FMutex *)this_00);
      }
      *(int *)(lVar5 + 0x220) = *(int *)(lVar5 + 0x220) + 1;
      LOCK();
      aVar4 = *this_00;
      *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
      UNLOCK();
      if (((byte)aVar4 & 2) != 0) {
        FMutex::WakeWaitingThread((FMutex *)this_00);
      }
    }
  }
  return;
}

// RemoveIsolatedTriangle @ 14c75c6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::RemoveIsolatedTriangle
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,int param_1)

{
  FSmallListSet *pFVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  EMeshResult EVar9;
  undefined ***pppuVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_2d8 [32];
  uint local_2b8 [2];
  longlong local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  int local_298;
  undefined8 local_290;
  FSmallListSet *local_280;
  int iStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  uint uStack_26c;
  undefined8 uStack_268;
  undefined8 local_260;
  code *local_258 [2];
  undefined **local_248;
  longlong local_240;
  int local_238;
  undefined ***local_230;
  BaseValueIterator local_228;
  undefined1 local_1e8 [40];
  longlong *local_1c0;
  FSmallListSet *local_1b8;
  ulonglong uStack_1b0;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int local_198;
  undefined4 uStack_194;
  FSmallListSet *local_190;
  ulonglong uStack_188;
  longlong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined1 local_168 [144];
  undefined1 local_d8 [144];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  lVar4 = *(longlong *)&this->field_0x8;
  if ((-1 < param_1) && (param_1 < *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144))) {
    local_2a8 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x148) + local_2a8) +
                           (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      local_2b0 = (ulonglong)(param_1 & 0x1ff) * 0xc;
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x130) + local_2a8);
      bVar6 = true;
      lVar12 = 0;
      local_2a0 = *(undefined8 *)(lVar4 + local_2b0);
      local_298 = *(int *)(lVar4 + 8 + local_2b0);
      do {
        local_240 = *(longlong *)&this->field_0x8;
        iVar2 = *(int *)((longlong)&local_2a0 + lVar12 * 4);
        local_230 = (undefined ***)0x0;
        local_248 = &
                    ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
        ;
        pFVar1 = (FSmallListSet *)(local_240 + 0xb8);
        local_258[0] = Core::Private::Function::
                       TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
                       ::Call;
        local_1e8._0_8_ = 0;
        local_1c0 = (longlong *)0x0;
        local_1b8 = (FSmallListSet *)0x0;
        uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
        local_190 = (FSmallListSet *)0x0;
        uStack_188 = uStack_188 & 0xffffffff00000000;
        local_238 = iVar2;
        FSmallListSet::BaseValueIterator::BaseValueIterator(&local_228,pFVar1,iVar2,false);
        local_1b8 = local_228.ListSet;
        uStack_1b0._0_4_ = local_228.ListIndex;
        uStack_1b0._4_4_ = local_228.block_ptr;
        local_198 = local_228.cur_value;
        uStack_194 = local_228._36_4_;
        local_1a8 = local_228.N;
        iStack_1a4 = local_228.iEnd;
        iStack_1a0 = local_228.iCur;
        iStack_19c = local_228.cur_ptr;
        uStack_274 = 0xffffffff;
        uStack_188 = CONCAT44(0xffffffff,iVar2);
        local_270 = 0;
        uStack_268 = 0xffffffffffffffff;
        local_180 = (ulonglong)uStack_26c << 0x20;
        local_170 = local_260;
        uStack_178 = 0xffffffffffffffff;
        local_280 = pFVar1;
        iStack_278 = iVar2;
        local_190 = pFVar1;
        TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
                  ((TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8,
                   (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_258);
        if (local_258[0] != (code *)0x0) {
          pppuVar10 = &local_248;
          if (local_230 != (undefined ***)0x0) {
            pppuVar10 = local_230;
          }
          (*(code *)(*pppuVar10)[2])();
        }
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168,
                   (ValueIterator *)&local_1b8,(ValueIterator *)&local_190,
                   (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_d8,
                   (ValueIterator *)&local_190,(ValueIterator *)&local_190,
                   (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
        while ((((local_168._0_8_ != local_d8._0_8_ || (local_168._8_4_ != local_d8._8_4_)) ||
                (local_168._24_4_ != local_d8._24_4_)) || (local_168._28_4_ != local_d8._28_4_))) {
          if ((bVar6) && (local_168._88_4_ == param_1)) {
            bVar6 = true;
            TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                      ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168)
            ;
          }
          else {
            bVar6 = false;
            TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                      ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168)
            ;
          }
        }
        if (local_d8._96_8_ != 0) {
          plVar11 = (longlong *)(local_d8 + 0x70);
          if ((longlong *)local_d8._136_8_ != (longlong *)0x0) {
            plVar11 = (longlong *)local_d8._136_8_;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
        if (local_168._96_8_ != 0) {
          plVar11 = (longlong *)(local_168 + 0x70);
          if ((longlong *)local_168._136_8_ != (longlong *)0x0) {
            plVar11 = (longlong *)local_168._136_8_;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
        if (local_1e8._0_8_ != 0) {
          plVar11 = (longlong *)(local_1e8 + 0x10);
          if (local_1c0 != (longlong *)0x0) {
            plVar11 = local_1c0;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < 3);
      if (bVar6 == false) {
        return false;
      }
      lVar4 = *(longlong *)
               (((*(FDynamicMesh3 **)&this->field_0x8)->TriangleEdges).Blocks.AllocatorInstance.Data
               + local_2a8);
      local_290 = *(undefined8 *)(lVar4 + local_2b0);
      uVar3 = *(uint *)(lVar4 + 8 + local_2b0);
      EVar9 = FDynamicMesh3::RemoveTriangle(*(FDynamicMesh3 **)&this->field_0x8,param_1,true,false);
      if ((EVar9 == Ok) && (this->field_0xc8 != '\0')) {
        local_2b8[0] = (uint)local_290;
        if (*(int *)&this->field_0x18 != *(int *)&this->field_0x44) {
          TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                             *)&this->field_0x10,(uint)local_290,(int *)local_2b8);
        }
        if ((this->field_0xc8 == '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        local_2b0 = CONCAT44(local_2b0._4_4_,local_290._4_4_);
        if (*(int *)&this->field_0x18 != *(int *)&this->field_0x44) {
          TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                             *)&this->field_0x10,local_290._4_4_,(int *)&local_2b0);
        }
        if ((this->field_0xc8 == '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        local_2a8 = CONCAT44(local_2a8._4_4_,uVar3);
        if (*(int *)&this->field_0x18 != *(int *)&this->field_0x44) {
          TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                             *)&this->field_0x10,uVar3,(int *)&local_2a8);
        }
        if ((this->field_0xc8 == '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
        ::Remove((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                  *)&this->field_0x60,(int)local_2a0);
        if ((this->field_0xc8 == '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
        ::Remove((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                  *)&this->field_0x60,local_2a0._4_4_);
        if ((this->field_0xc8 == '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
        ::Remove((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                  *)&this->field_0x60,local_298);
      }
      (**(code **)(*(longlong *)this + 0xb0))(this,param_1);
      return bVar6;
    }
  }
  return true;
}

// RemoveIsolatedTriangle @ 14c75cc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
RemoveIsolatedTriangle
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,int param_1)

{
  FSmallListSet *pFVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  EMeshResult EVar9;
  undefined ***pppuVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_2d8 [32];
  uint local_2b8 [2];
  longlong local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  int local_298;
  undefined8 local_290;
  FSmallListSet *local_280;
  int iStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  uint uStack_26c;
  undefined8 uStack_268;
  undefined8 local_260;
  code *local_258 [2];
  undefined **local_248;
  longlong local_240;
  int local_238;
  undefined ***local_230;
  BaseValueIterator local_228;
  undefined1 local_1e8 [40];
  longlong *local_1c0;
  FSmallListSet *local_1b8;
  ulonglong uStack_1b0;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int local_198;
  undefined4 uStack_194;
  FSmallListSet *local_190;
  ulonglong uStack_188;
  longlong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined1 local_168 [144];
  undefined1 local_d8 [144];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  lVar4 = *(longlong *)&this->field_0x8;
  if ((-1 < param_1) && (param_1 < *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144))) {
    local_2a8 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x148) + local_2a8) +
                           (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      local_2b0 = (ulonglong)(param_1 & 0x1ff) * 0xc;
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x130) + local_2a8);
      bVar6 = true;
      lVar12 = 0;
      local_2a0 = *(undefined8 *)(lVar4 + local_2b0);
      local_298 = *(int *)(lVar4 + 8 + local_2b0);
      do {
        local_240 = *(longlong *)&this->field_0x8;
        iVar2 = *(int *)((longlong)&local_2a0 + lVar12 * 4);
        local_230 = (undefined ***)0x0;
        local_248 = &
                    ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
        ;
        pFVar1 = (FSmallListSet *)(local_240 + 0xb8);
        local_258[0] = Core::Private::Function::
                       TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
                       ::Call;
        local_1e8._0_8_ = 0;
        local_1c0 = (longlong *)0x0;
        local_1b8 = (FSmallListSet *)0x0;
        uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
        local_190 = (FSmallListSet *)0x0;
        uStack_188 = uStack_188 & 0xffffffff00000000;
        local_238 = iVar2;
        FSmallListSet::BaseValueIterator::BaseValueIterator(&local_228,pFVar1,iVar2,false);
        local_1b8 = local_228.ListSet;
        uStack_1b0._0_4_ = local_228.ListIndex;
        uStack_1b0._4_4_ = local_228.block_ptr;
        local_198 = local_228.cur_value;
        uStack_194 = local_228._36_4_;
        local_1a8 = local_228.N;
        iStack_1a4 = local_228.iEnd;
        iStack_1a0 = local_228.iCur;
        iStack_19c = local_228.cur_ptr;
        uStack_274 = 0xffffffff;
        uStack_188 = CONCAT44(0xffffffff,iVar2);
        local_270 = 0;
        uStack_268 = 0xffffffffffffffff;
        local_180 = (ulonglong)uStack_26c << 0x20;
        local_170 = local_260;
        uStack_178 = 0xffffffffffffffff;
        local_280 = pFVar1;
        iStack_278 = iVar2;
        local_190 = pFVar1;
        TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
                  ((TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8,
                   (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_258);
        if (local_258[0] != (code *)0x0) {
          pppuVar10 = &local_248;
          if (local_230 != (undefined ***)0x0) {
            pppuVar10 = local_230;
          }
          (*(code *)(*pppuVar10)[2])();
        }
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168,
                   (ValueIterator *)&local_1b8,(ValueIterator *)&local_190,
                   (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_d8,
                   (ValueIterator *)&local_190,(ValueIterator *)&local_190,
                   (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
        while ((((local_168._0_8_ != local_d8._0_8_ || (local_168._8_4_ != local_d8._8_4_)) ||
                (local_168._24_4_ != local_d8._24_4_)) || (local_168._28_4_ != local_d8._28_4_))) {
          if ((bVar6) && (local_168._88_4_ == param_1)) {
            bVar6 = true;
            TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                      ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168)
            ;
          }
          else {
            bVar6 = false;
            TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                      ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168)
            ;
          }
        }
        if (local_d8._96_8_ != 0) {
          plVar11 = (longlong *)(local_d8 + 0x70);
          if ((longlong *)local_d8._136_8_ != (longlong *)0x0) {
            plVar11 = (longlong *)local_d8._136_8_;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
        if (local_168._96_8_ != 0) {
          plVar11 = (longlong *)(local_168 + 0x70);
          if ((longlong *)local_168._136_8_ != (longlong *)0x0) {
            plVar11 = (longlong *)local_168._136_8_;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
        if (local_1e8._0_8_ != 0) {
          plVar11 = (longlong *)(local_1e8 + 0x10);
          if (local_1c0 != (longlong *)0x0) {
            plVar11 = local_1c0;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < 3);
      if (bVar6 == false) {
        return false;
      }
      lVar4 = *(longlong *)
               (((*(FDynamicMesh3 **)&this->field_0x8)->TriangleEdges).Blocks.AllocatorInstance.Data
               + local_2a8);
      local_290 = *(undefined8 *)(lVar4 + local_2b0);
      uVar3 = *(uint *)(lVar4 + 8 + local_2b0);
      EVar9 = FDynamicMesh3::RemoveTriangle(*(FDynamicMesh3 **)&this->field_0x8,param_1,true,false);
      if ((EVar9 == Ok) && (this->field_0xc8 != '\0')) {
        local_2b8[0] = (uint)local_290;
        if (*(int *)&this->field_0x18 != *(int *)&this->field_0x44) {
          TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                             *)&this->field_0x10,(uint)local_290,(int *)local_2b8);
        }
        if ((this->field_0xc8 == '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        local_2b0 = CONCAT44(local_2b0._4_4_,local_290._4_4_);
        if (*(int *)&this->field_0x18 != *(int *)&this->field_0x44) {
          TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                             *)&this->field_0x10,local_290._4_4_,(int *)&local_2b0);
        }
        if ((this->field_0xc8 == '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        local_2a8 = CONCAT44(local_2a8._4_4_,uVar3);
        if (*(int *)&this->field_0x18 != *(int *)&this->field_0x44) {
          TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                             *)&this->field_0x10,uVar3,(int *)&local_2a8);
        }
        if ((this->field_0xc8 == '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
        ::Remove((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                  *)&this->field_0x60,(int)local_2a0);
        if ((this->field_0xc8 == '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
        ::Remove((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                  *)&this->field_0x60,local_2a0._4_4_);
        if ((this->field_0xc8 == '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
        ::Remove((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                  *)&this->field_0x60,local_298);
      }
      (**(code **)(*(longlong *)this + 0xb0))(this,param_1);
      return bVar6;
    }
  }
  return true;
}

// RemoveIsolatedTriangle @ 14c75d110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
RemoveIsolatedTriangle
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,int param_1)

{
  FSmallListSet *pFVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  EMeshResult EVar9;
  undefined ***pppuVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_2d8 [32];
  uint local_2b8 [2];
  longlong local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  int local_298;
  undefined8 local_290;
  FSmallListSet *local_280;
  int iStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  uint uStack_26c;
  undefined8 uStack_268;
  undefined8 local_260;
  code *local_258 [2];
  undefined **local_248;
  longlong local_240;
  int local_238;
  undefined ***local_230;
  BaseValueIterator local_228;
  undefined1 local_1e8 [40];
  longlong *local_1c0;
  FSmallListSet *local_1b8;
  ulonglong uStack_1b0;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int local_198;
  undefined4 uStack_194;
  FSmallListSet *local_190;
  ulonglong uStack_188;
  longlong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined1 local_168 [144];
  undefined1 local_d8 [144];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  lVar4 = *(longlong *)&this->field_0x8;
  if ((-1 < param_1) && (param_1 < *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144))) {
    local_2a8 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x148) + local_2a8) +
                           (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      local_2b0 = (ulonglong)(param_1 & 0x1ff) * 0xc;
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x130) + local_2a8);
      bVar6 = true;
      lVar12 = 0;
      local_2a0 = *(undefined8 *)(lVar4 + local_2b0);
      local_298 = *(int *)(lVar4 + 8 + local_2b0);
      do {
        local_240 = *(longlong *)&this->field_0x8;
        iVar2 = *(int *)((longlong)&local_2a0 + lVar12 * 4);
        local_230 = (undefined ***)0x0;
        local_248 = &
                    ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
        ;
        pFVar1 = (FSmallListSet *)(local_240 + 0xb8);
        local_258[0] = Core::Private::Function::
                       TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
                       ::Call;
        local_1e8._0_8_ = 0;
        local_1c0 = (longlong *)0x0;
        local_1b8 = (FSmallListSet *)0x0;
        uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
        local_190 = (FSmallListSet *)0x0;
        uStack_188 = uStack_188 & 0xffffffff00000000;
        local_238 = iVar2;
        FSmallListSet::BaseValueIterator::BaseValueIterator(&local_228,pFVar1,iVar2,false);
        local_1b8 = local_228.ListSet;
        uStack_1b0._0_4_ = local_228.ListIndex;
        uStack_1b0._4_4_ = local_228.block_ptr;
        local_198 = local_228.cur_value;
        uStack_194 = local_228._36_4_;
        local_1a8 = local_228.N;
        iStack_1a4 = local_228.iEnd;
        iStack_1a0 = local_228.iCur;
        iStack_19c = local_228.cur_ptr;
        uStack_274 = 0xffffffff;
        uStack_188 = CONCAT44(0xffffffff,iVar2);
        local_270 = 0;
        uStack_268 = 0xffffffffffffffff;
        local_180 = (ulonglong)uStack_26c << 0x20;
        local_170 = local_260;
        uStack_178 = 0xffffffffffffffff;
        local_280 = pFVar1;
        iStack_278 = iVar2;
        local_190 = pFVar1;
        TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
                  ((TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8,
                   (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_258);
        if (local_258[0] != (code *)0x0) {
          pppuVar10 = &local_248;
          if (local_230 != (undefined ***)0x0) {
            pppuVar10 = local_230;
          }
          (*(code *)(*pppuVar10)[2])();
        }
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168,
                   (ValueIterator *)&local_1b8,(ValueIterator *)&local_190,
                   (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_d8,
                   (ValueIterator *)&local_190,(ValueIterator *)&local_190,
                   (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
        while ((((local_168._0_8_ != local_d8._0_8_ || (local_168._8_4_ != local_d8._8_4_)) ||
                (local_168._24_4_ != local_d8._24_4_)) || (local_168._28_4_ != local_d8._28_4_))) {
          if ((bVar6) && (local_168._88_4_ == param_1)) {
            bVar6 = true;
            TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                      ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168)
            ;
          }
          else {
            bVar6 = false;
            TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                      ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168)
            ;
          }
        }
        if (local_d8._96_8_ != 0) {
          plVar11 = (longlong *)(local_d8 + 0x70);
          if ((longlong *)local_d8._136_8_ != (longlong *)0x0) {
            plVar11 = (longlong *)local_d8._136_8_;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
        if (local_168._96_8_ != 0) {
          plVar11 = (longlong *)(local_168 + 0x70);
          if ((longlong *)local_168._136_8_ != (longlong *)0x0) {
            plVar11 = (longlong *)local_168._136_8_;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
        if (local_1e8._0_8_ != 0) {
          plVar11 = (longlong *)(local_1e8 + 0x10);
          if (local_1c0 != (longlong *)0x0) {
            plVar11 = local_1c0;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < 3);
      if (bVar6 == false) {
        return false;
      }
      lVar4 = *(longlong *)
               (((*(FDynamicMesh3 **)&this->field_0x8)->TriangleEdges).Blocks.AllocatorInstance.Data
               + local_2a8);
      local_290 = *(undefined8 *)(lVar4 + local_2b0);
      uVar3 = *(uint *)(lVar4 + 8 + local_2b0);
      EVar9 = FDynamicMesh3::RemoveTriangle(*(FDynamicMesh3 **)&this->field_0x8,param_1,true,false);
      if ((EVar9 == Ok) && (this->field_0xc8 != '\0')) {
        local_2b8[0] = (uint)local_290;
        if (*(int *)&this->field_0x18 != *(int *)&this->field_0x44) {
          TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                             *)&this->field_0x10,(uint)local_290,(int *)local_2b8);
        }
        if ((this->field_0xc8 == '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        local_2b0 = CONCAT44(local_2b0._4_4_,local_290._4_4_);
        if (*(int *)&this->field_0x18 != *(int *)&this->field_0x44) {
          TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                             *)&this->field_0x10,local_290._4_4_,(int *)&local_2b0);
        }
        if ((this->field_0xc8 == '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        local_2a8 = CONCAT44(local_2a8._4_4_,uVar3);
        if (*(int *)&this->field_0x18 != *(int *)&this->field_0x44) {
          TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                             *)&this->field_0x10,uVar3,(int *)&local_2a8);
        }
        if ((this->field_0xc8 == '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
        ::Remove((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                  *)&this->field_0x60,(int)local_2a0);
        if ((this->field_0xc8 == '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
        ::Remove((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                  *)&this->field_0x60,local_2a0._4_4_);
        if ((this->field_0xc8 == '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
        ::Remove((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                  *)&this->field_0x60,local_298);
      }
      (**(code **)(*(longlong *)this + 0xb0))(this,param_1);
      return bVar6;
    }
  }
  return true;
}

// Reproject @ 14c75dc90

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::Reproject
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  (**(code **)(*(longlong *)this + 0x108))();
  if ((*(longlong *)&this->field_0xd0 != 0) && (this->field_0x128 == '\x01')) {
    (**(code **)(*(longlong *)this + 0xb8))(this);
    (**(code **)(*(longlong *)this + 0x28))(this,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014c75dcd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x110))(this);
  return;
}

// Reproject @ 14c75dcf0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::Reproject
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  (**(code **)(*(longlong *)this + 0x108))();
  if ((*(longlong *)&this->field_0xd0 != 0) && (this->field_0x128 == '\x01')) {
    (**(code **)(*(longlong *)this + 0xb8))(this);
    (**(code **)(*(longlong *)this + 0x28))(this,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014c75dd37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x110))(this);
  return;
}

// Reproject @ 14c75dd50

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::Reproject
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  (**(code **)(*(longlong *)this + 0x108))();
  if ((*(longlong *)&this->field_0xd0 != 0) && (this->field_0x128 == '\x01')) {
    (**(code **)(*(longlong *)this + 0xb8))(this);
    (**(code **)(*(longlong *)this + 0x28))(this,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014c75dd97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x110))(this);
  return;
}

// SimplifyToEdgeLength @ 14c763c30

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToEdgeLength
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,double param_1)

{
  this->MinEdgeLength = param_1;
  this->SimplifyMode = MinEdgeLength;
  this->TargetCount = 1;
  this->MaxErrorAllowed = 3.4028235e+38;
                    /* WARNING: Could not recover jumptable at 0x00014c763c59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x60))();
  return;
}

// SimplifyToEdgeLength @ 14c763c70

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
SimplifyToEdgeLength
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,double param_1)

{
  this->MinEdgeLength = param_1;
  this->SimplifyMode = MinEdgeLength;
  this->TargetCount = 1;
  this->MaxErrorAllowed = 3.4028235e+38;
                    /* WARNING: Could not recover jumptable at 0x00014c763c99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x60))();
  return;
}

// SimplifyToEdgeLength @ 14c763cb0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::SimplifyToEdgeLength
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,double param_1)

{
  this->MinEdgeLength = param_1;
  this->SimplifyMode = MinEdgeLength;
  this->TargetCount = 1;
  this->MaxErrorAllowed = 3.4028235e+38;
                    /* WARNING: Could not recover jumptable at 0x00014c763cd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x60))();
  return;
}

// SimplifyToMaxError @ 14c763cf0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToMaxError
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,double param_1)

{
  this->SimplifyMode = MaxError;
  this->TargetCount = 1;
  this->MinEdgeLength = 1.7976931348623157e+308;
  this->MaxErrorAllowed = (float)param_1;
                    /* WARNING: Could not recover jumptable at 0x00014c763d27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x60))();
  return;
}

// SimplifyToMaxError @ 14c763d40

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::SimplifyToMaxError
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,double param_1)

{
  this->SimplifyMode = MaxError;
  this->TargetCount = 1;
  this->MinEdgeLength = 1.7976931348623157e+308;
  this->MaxErrorAllowed = (float)param_1;
                    /* WARNING: Could not recover jumptable at 0x00014c763d77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x60))();
  return;
}

// SimplifyToMaxError @ 14c763d90

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::SimplifyToMaxError
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,double param_1)

{
  this->SimplifyMode = MaxError;
  this->TargetCount = 1;
  this->MinEdgeLength = 1.7976931348623157e+308;
  this->MaxErrorAllowed = (float)param_1;
                    /* WARNING: Could not recover jumptable at 0x00014c763dc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x60))();
  return;
}

// SimplifyToMinimalPlanar @ 14c763de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToMinimalPlanar
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,double param_1,
          TFunctionRef<bool___cdecl(int)> *param_2)

{
  double *pdVar1;
  <lambda_1> <Var2;
  short sVar3;
  longlong lVar4;
  code *pcVar5;
  FIndex2i_u_0 FVar6;
  FIndex2i_u_0 FVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  char cVar10;
  bool bVar11;
  ESimplificationResult EVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  ForAnyElementType FVar24;
  uint uVar25;
  size_t sVar26;
  FScriptContainerElement FVar27;
  undefined1 auStackY_4c8 [32];
  undefined1 local_477 [7];
  TArray<bool,TSizedDefaultAllocator<32>_> local_470;
  uint local_460;
  uint local_45c;
  ForAnyElementType local_458;
  uint local_450;
  uint local_44c;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_448;
  uint local_438;
  int local_434;
  int local_430;
  int local_42c;
  double local_428;
  FScriptContainerElement *local_420;
  undefined8 local_418;
  uint local_410 [2];
  int local_408 [2];
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  TFunctionRef<bool___cdecl(int)> *local_3f0;
  TArray<bool,TSizedDefaultAllocator<32>_> local_3e8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_3d8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_3c8;
  double local_3c0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_3b8;
  undefined8 local_3b0;
  double local_3a8;
  TMeshSimplification<UE::Geometry::TQuadricError<double>_> *local_3a0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_398;
  TArrayView<std::nullptr_t,int> local_390;
  code *local_380;
  TMeshSimplification<UE::Geometry::TQuadricError<double>_> **local_378;
  code *local_370;
  TMeshSimplification<UE::Geometry::TQuadricError<double>_> **local_368;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_360;
  TMeshSimplification<UE::Geometry::TQuadricError<double>_> *local_358;
  code *local_350;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_348;
  code *local_340;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> ***local_338;
  code *local_330;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> ***local_328;
  TMeshSimplification<UE::Geometry::TQuadricError<double>_> *local_320;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_318;
  double *local_310;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_308;
  FEdgeCollapseInfo local_300;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_2c8;
  undefined4 *local_2c0;
  undefined1 *local_2b8;
  double *local_2b0;
  undefined4 *local_2a8;
  undefined1 *local_2a0;
  int *local_298;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_290;
  undefined4 *local_288;
  undefined1 *local_280;
  double *local_278;
  undefined4 *local_270;
  undefined1 *local_268;
  int *local_260;
  TVector<double>_u_0 local_258;
  TVector<double>_u_0 local_238;
  TFunction<int___cdecl(int)> local_218;
  TFunction<int___cdecl(int)> local_1e8;
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined1 local_158 [64];
  undefined1 local_118 [64];
  longlong local_d8 [3];
  longlong *local_c0;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  if (*(int *)(*(longlong *)&this->field_0x8 + 0x170) == 0) {
    return;
  }
  <Var2 = (<lambda_1>)this->bPreserveBoundaryShape;
  this->bPreserveBoundaryShape = false;
  local_448.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_448.ArrayNum = 0;
  local_448.ArrayMax = 0;
  local_470.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_470.ArrayNum = 0;
  local_470.ArrayMax = 0;
  local_3f0 = param_2;
  (**(code **)(*(longlong *)this + 0xd8))();
  (**(code **)(*(longlong *)this + 0xf8))(this);
  Precompute(this,false);
  cVar10 = (**(code **)(*(longlong *)this + 8))(this);
  if (cVar10 == '\0') {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_448,
               *(int *)(*(longlong *)&this->field_0x8 + 0x140) * 0x200 +
               *(int *)(*(longlong *)&this->field_0x8 + 0x144),Default);
    local_398 = &local_448;
    local_380 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToMinimalPlanar'::__l2::<lambda_1>,void,int>
                ::Call;
    local_378 = &local_3a0;
    local_390.DataPtr = (void **)0x0;
    local_390.ArrayNum = 0;
    local_3a0 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               *(int *)(*(longlong *)&this->field_0x8 + 0x140) * 0x200 +
               *(int *)(*(longlong *)&this->field_0x8 + 0x144),1,
               (TFunctionRef<void___cdecl(int)> *)&local_380,<Var2,None,&local_390);
    cVar10 = (**(code **)(*(longlong *)this + 8))(this);
    if (cVar10 == '\0') {
      TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
                (&local_470,
                 *(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
                 *(int *)(*(longlong *)&this->field_0x8 + 0x24),Default);
      local_428 = cos(param_1 * __real_3f91df46a2529d39);
      local_318 = &local_470;
      local_310 = &local_428;
      local_308 = &local_448;
      local_368 = &local_320;
      local_370 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToMinimalPlanar'::__l2::<lambda_2>,void,int>
                  ::Call;
      local_320 = this;
      ParallelFor(*(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
                  *(int *)(*(longlong *)&this->field_0x8 + 0x24),
                  (TFunctionRef<void___cdecl(int)> *)&local_370,None);
      cVar10 = (**(code **)(*(longlong *)this + 8))(this);
      if (cVar10 == '\0') {
        (**(code **)(*(longlong *)this + 0x100))(this);
        (**(code **)(*(longlong *)this + 0xe8))(this);
        (**(code **)(*(longlong *)this + 0x118))(this);
        FVar7 = _UNK_15060db28;
        FVar6 = ___xmm_ffffffffffffffffffffffffffffffff;
        local_458.Data = (FScriptContainerElement *)0x0;
        local_44c = 0;
        local_42c = 0;
LAB_14c76402c:
        uVar15 = 0;
        local_45c = 0;
        local_450 = 0;
        if (((int)local_44c < 0) && (local_44c != 0)) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_458,0,(int *)&local_44c);
        }
        pFVar19 = *(FScriptContainerElement **)&this->field_0x8;
        uVar25 = *(int *)((longlong)pFVar19 + 0x1d4) + *(int *)((longlong)pFVar19 + 0x1d0) * 0x200;
        uVar18 = uVar15;
        if ((uVar25 != 0) &&
           (0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)pFVar19 + 0x1d8) - 1U))) {
          uVar18 = 1;
          uVar16 = 1;
          if ((int)uVar25 < 2) goto LAB_14c7640db;
          do {
            sVar3 = *(short *)((*(undefined8 **)((longlong)pFVar19 + 0x1d8))[uVar18 >> 9] +
                              (ulonglong)((uint)uVar18 & 0x1ff) * 2);
            if ((sVar3 != 0) && (sVar3 != -1)) break;
            uVar16 = (uint)uVar18 + 1;
            uVar18 = (ulonglong)uVar16;
          } while ((int)uVar16 < (int)uVar25);
        }
        uVar16 = (uint)uVar18;
LAB_14c7640db:
        local_420 = pFVar19;
        if (uVar16 != uVar25) {
LAB_14c7640e1:
          do {
            uVar16 = (uint)uVar18;
            local_460 = uVar16;
            local_410[0] = uVar16;
            cVar10 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_410);
            if (cVar10 != '\0') {
              local_418 = *(FScriptContainerElement **)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                             (ulonglong)(local_460 >> 9) * 8) +
                           (ulonglong)(local_460 & 0x1ff) * 0x10);
              uVar23 = (uint)local_418;
              uVar20 = (uint)((ulonglong)local_418 >> 0x20);
              uVar17 = 0;
              if ((int)uVar23 < local_470.ArrayNum) {
                uVar17 = ~uVar23 >> 0x1f;
              }
              if (uVar17 == 0) {
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar11) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              if (local_470.AllocatorInstance.Data[(int)uVar23] == (FScriptContainerElement)0x0) {
                uVar17 = 0;
                if ((int)uVar20 < local_470.ArrayNum) {
                  uVar17 = ~uVar20 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar19 = local_420;
                param_2 = local_3f0;
                if (local_470.AllocatorInstance.Data[local_418._4_4_] ==
                    (FScriptContainerElement)0x0) goto LAB_14c7642ab;
              }
              if (((local_458.Data <= (FScriptContainerElement *)&local_460) &&
                  ((FScriptContainerElement *)&local_460 <
                   local_458.Data + (longlong)(int)local_44c * 4)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (local_450 == local_44c) {
                local_450 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&local_458,(int *)&local_44c);
              }
              *(uint *)(local_458.Data + (longlong)(int)local_450 * 4) = local_460;
              pFVar19 = local_420;
              param_2 = local_3f0;
              local_450 = local_450 + 1;
            }
LAB_14c7642ab:
            uVar16 = uVar16 + 1;
            uVar18 = (ulonglong)uVar16;
            if ((int)uVar16 < (int)uVar25) {
              do {
                uVar15 = (ulonglong)((uint)uVar18 & 0x1ff);
                lVar21 = *(longlong *)(*(longlong *)((longlong)pFVar19 + 0x1d8) + (uVar18 >> 9) * 8)
                ;
                if ((*(short *)(lVar21 + uVar15 * 2) != 0) &&
                   (*(short *)(lVar21 + uVar15 * 2) != -1)) goto LAB_14c7640e1;
                uVar16 = (uint)uVar18 + 1;
                uVar18 = (ulonglong)uVar16;
              } while ((int)uVar16 < (int)uVar25);
            }
          } while (uVar16 != uVar25);
          uVar15 = (ulonglong)local_45c;
        }
        uVar18 = (ulonglong)(int)local_450;
        local_438 = local_450;
        local_420 = local_458.Data + uVar18 * 4;
        pFVar19 = local_420;
        FVar24.Data = local_458.Data;
LAB_14c76430b:
        do {
          local_418 = FVar24.Data;
          if (local_450 != (uint)uVar18) {
            local_477[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_477);
          }
          if (FVar24.Data == pFVar19) goto LAB_14c764ace;
          uVar25 = *(uint *)FVar24.Data;
          lVar21 = *(longlong *)&this->field_0x8;
          if ((-1 < (int)uVar25) &&
             ((int)uVar25 < *(int *)(lVar21 + 0x1d0) * 0x200 + *(int *)(lVar21 + 0x1d4))) {
            if ((ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(lVar21 + 0x1d8) + (ulonglong)(uVar25 >> 9) * 8)
                                   + (ulonglong)(uVar25 & 0x1ff) * 2) - 1U) < 0xfffe) {
              cVar10 = (**(code **)(*(longlong *)this + 8))(this);
              if (cVar10 != '\0') goto LAB_14c764b30;
              this->COUNT_ITERATIONS = this->COUNT_ITERATIONS + 1;
              EVar12 = Failed_OpNotSuccessful;
              uVar15 = *(ulonglong *)
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                          (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 0x10);
              uVar17 = (uint)uVar15;
              local_300.OpposingVerts.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
              local_300.KeptEdges.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
              local_300.RemovedTris.field0_0x0 = FVar6;
              local_300.RemovedEdges.field0_0x0 = FVar7;
              uVar16 = 0;
              if ((int)uVar17 < local_470.ArrayNum) {
                uVar16 = ~uVar17 >> 0x1f;
              }
              local_3b0 = uVar15;
              iVar22 = local_470.ArrayNum;
              if (uVar16 == 0) {
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar11) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar22 = local_470.ArrayNum;
              }
              uVar16 = local_3b0._4_4_;
              lVar21 = (longlong)(int)local_3b0._4_4_;
              if (local_470.AllocatorInstance.Data[(int)uVar17] == (FScriptContainerElement)0x0) {
LAB_14c76453a:
                uVar20 = 0;
                if ((int)uVar16 < iVar22) {
                  uVar20 = ~uVar16 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (local_470.AllocatorInstance.Data[lVar21] != (FScriptContainerElement)0x0) {
                  pFVar19 = (this->IsBoundaryVtxCache).AllocatorInstance.Data;
                  local_3d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_3d8.ArrayNum = (this->IsBoundaryVtxCache).ArrayNum;
                  sVar26 = (size_t)local_3d8.ArrayNum;
                  if (local_3d8.ArrayNum == 0) {
                    local_3d8.ArrayMax = 0;
                  }
                  else {
                    Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (1,1,local_3d8.ArrayNum,0,&local_3d8.AllocatorInstance,
                               local_3d8.ArrayNum,&local_3d8.ArrayMax);
                    memcpy(local_3d8.AllocatorInstance.Data,pFVar19,sVar26);
                  }
                  bVar11 = IsCollapsableDevelopableEdge
                                     (*(FDynamicMesh3 **)&this->field_0x8,uVar25,uVar16,uVar17,
                                      local_428,&local_448,&local_3d8);
                  if (bVar11) {
                    lVar21 = *(longlong *)
                              (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) +
                              ((uVar15 & 0xffffffff) >> 9) * 8);
                    pdVar1 = (double *)(lVar21 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
                    local_238._s_0.X = *pdVar1;
                    local_238._s_0.Y = pdVar1[1];
                    local_238._s_0.Z =
                         *(double *)(lVar21 + 0x10 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
                    EVar12 = CollapseEdge(this,uVar25,(TVector<double> *)&local_238._s_0,&local_300,
                                          uVar17);
                  }
                }
                if (EVar12 != Ok_Collapsed) {
                  uVar15 = (ulonglong)local_45c;
                  pFVar19 = local_420;
                  goto LAB_14c764abe;
                }
              }
              else {
                pFVar19 = (this->IsBoundaryVtxCache).AllocatorInstance.Data;
                local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_3e8.ArrayNum = (this->IsBoundaryVtxCache).ArrayNum;
                sVar26 = (size_t)local_3e8.ArrayNum;
                if (local_3e8.ArrayNum == 0) {
                  local_3e8.ArrayMax = 0;
                }
                else {
                  Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,local_3e8.ArrayNum,0,&local_3e8.AllocatorInstance,
                             local_3e8.ArrayNum,&local_3e8.ArrayMax);
                  memcpy(local_3e8.AllocatorInstance.Data,pFVar19,sVar26);
                }
                bVar11 = IsCollapsableDevelopableEdge
                                   (*(FDynamicMesh3 **)&this->field_0x8,uVar25,uVar17,uVar16,
                                    local_428,&local_448,&local_3e8);
                if (!bVar11) {
LAB_14c764535:
                  iVar22 = local_470.ArrayNum;
                  goto LAB_14c76453a;
                }
                lVar4 = *(longlong *)
                         (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) +
                         (ulonglong)(uVar16 >> 9) * 8);
                pdVar1 = (double *)(lVar4 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
                local_258._s_0.X = *pdVar1;
                local_258._s_0.Y = pdVar1[1];
                local_258._s_0.Z = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
                EVar12 = CollapseEdge(this,uVar25,(TVector<double> *)&local_258._s_0,&local_300,
                                      uVar16);
                if (EVar12 != Ok_Collapsed) goto LAB_14c764535;
              }
              iVar22 = local_300.KeptVertex;
              lVar21 = (longlong)local_300.KeptVertex;
              local_360 = &local_448;
              local_45c = local_45c + 1;
              local_348 = &local_360;
              local_350 = Core::Private::Function::
                          TFunctionRefCaller<`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToMinimalPlanar'::__l45::<lambda_3>,void,int>
                          ::Call;
              local_358 = this;
              FDynamicMesh3::EnumerateVertexTriangles
                        (*(FDynamicMesh3 **)&this->field_0x8,local_300.KeptVertex,
                         (TFunctionRef<void___cdecl(int)> *)&local_350);
              FDynamicMesh3::VtxVerticesItr
                        (*(FDynamicMesh3 **)&this->field_0x8,(MappedValueEnumerable *)local_158,
                         iVar22);
              uVar9 = local_158._8_4_;
              uVar8 = local_158._0_8_;
              local_1e8._0_8_ = local_158._16_8_;
              local_1e8._40_8_ = 0;
              if (local_158._16_8_ != 0) {
                plVar14 = (longlong *)(local_158 + 0x20);
                if ((longlong *)local_158._56_8_ != (longlong *)0x0) {
                  plVar14 = (longlong *)local_158._56_8_;
                }
                (**(code **)*plVar14)(plVar14,&local_1e8.field_0x10);
              }
              FSmallListSet::MappedValueIterator::MappedValueIterator
                        ((MappedValueIterator *)local_118,(FSmallListSet *)uVar8,uVar9,false,
                         &local_1e8);
              uVar9 = local_158._8_4_;
              uVar8 = local_158._0_8_;
              local_218._0_8_ = local_158._16_8_;
              local_218._40_8_ = 0;
              if (local_158._16_8_ != 0) {
                plVar14 = (longlong *)(local_158 + 0x20);
                if ((longlong *)local_158._56_8_ != (longlong *)0x0) {
                  plVar14 = (longlong *)local_158._56_8_;
                }
                (**(code **)*plVar14)(plVar14,&local_218.field_0x10);
              }
              FSmallListSet::MappedValueIterator::MappedValueIterator
                        ((MappedValueIterator *)local_b8,(FSmallListSet *)uVar8,uVar9,true,
                         &local_218);
              while ((((local_118._0_8_ != local_b8._0_8_ || (local_118._8_4_ != local_b8._8_4_)) ||
                      (local_118._24_4_ != local_b8._24_4_)) ||
                     (local_118._28_4_ != local_b8._28_4_))) {
                local_408[0] = local_118._32_4_;
                Core::Private::Function::CheckCallable((void *)local_118._48_8_);
                uVar8 = local_118._48_8_;
                plVar14 = local_d8;
                if (local_c0 != (longlong *)0x0) {
                  plVar14 = local_c0;
                }
                uVar13 = (**(code **)(*plVar14 + 8))();
                uVar16 = (*(code *)uVar8)(uVar13,local_408);
                local_3b8 = &local_448;
                local_2c8 = &local_3b8;
                local_3a8 = local_428;
                local_2c0 = &local_400;
                local_2b8 = local_170;
                local_2b0 = &local_3a8;
                local_2a8 = &local_3fc;
                local_2a0 = local_1b8;
                local_298 = &local_434;
                local_338 = &local_2c8;
                local_400 = 0;
                local_3fc = 0;
                local_434 = 0;
                local_340 = Core::Private::Function::
                            TFunctionRefCaller<`IsDevelopableVertex<`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToMinimalPlanar'::__l49::<lambda_4>_>'::__l2::<lambda_1>,void,int>
                            ::Call;
                FDynamicMesh3::EnumerateVertexTriangles
                          (*(FDynamicMesh3 **)&this->field_0x8,uVar16,
                           (TFunctionRef<void___cdecl(int)> *)&local_340);
                FVar27 = (FScriptContainerElement)(local_434 == 0);
                uVar25 = 0;
                if ((int)uVar16 < local_470.ArrayNum) {
                  uVar25 = ~uVar16 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                local_470.AllocatorInstance.Data[(int)uVar16] = FVar27;
                FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_118);
              }
              uVar15 = (ulonglong)local_45c;
              if (local_b8._48_8_ != 0) {
                plVar14 = (longlong *)(local_b8 + 0x40);
                if ((longlong *)local_b8._88_8_ != (longlong *)0x0) {
                  plVar14 = (longlong *)local_b8._88_8_;
                }
                (**(code **)(*plVar14 + 0x10))();
              }
              if ((code *)local_118._48_8_ != (code *)0x0) {
                plVar14 = local_d8;
                if (local_c0 != (longlong *)0x0) {
                  plVar14 = local_c0;
                }
                (**(code **)(*plVar14 + 0x10))();
              }
              if (local_158._16_8_ != 0) {
                plVar14 = (longlong *)(local_158 + 0x20);
                if ((longlong *)local_158._56_8_ != (longlong *)0x0) {
                  plVar14 = (longlong *)local_158._56_8_;
                }
                (**(code **)(*plVar14 + 0x10))();
              }
              local_3c8 = &local_448;
              local_3c0 = local_428;
              local_288 = &local_3f8;
              local_280 = local_1a0;
              local_278 = &local_3c0;
              local_270 = &local_3f4;
              local_268 = local_188;
              local_260 = &local_430;
              local_328 = &local_290;
              local_330 = Core::Private::Function::
                          TFunctionRefCaller<`IsDevelopableVertex<`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToMinimalPlanar'::__l45::<lambda_5>_>'::__l2::<lambda_1>,void,int>
                          ::Call;
              local_3f8 = 0;
              local_3f4 = 0;
              local_430 = 0;
              local_290 = &local_3c8;
              FDynamicMesh3::EnumerateVertexTriangles
                        (*(FDynamicMesh3 **)&this->field_0x8,iVar22,
                         (TFunctionRef<void___cdecl(int)> *)&local_330);
              FVar27 = (FScriptContainerElement)(local_430 == 0);
              uVar25 = 0;
              if (iVar22 < local_470.ArrayNum) {
                uVar25 = (uint)~iVar22 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar18 = (ulonglong)local_438;
              local_470.AllocatorInstance.Data[lVar21] = FVar27;
              FVar24.Data = local_418 + 4;
              pFVar19 = local_420;
              goto LAB_14c76430b;
            }
          }
LAB_14c764abe:
          uVar18 = (ulonglong)local_438;
          FVar24.Data = local_418 + 4;
        } while( true );
      }
    }
  }
  if (local_470.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.AllocatorInstance.Data);
  }
  if (local_448.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.AllocatorInstance.Data);
  }
LAB_14c764b7c:
  this->bPreserveBoundaryShape = (bool)<Var2;
  return;
LAB_14c764ace:
  if (((int)uVar15 == 0) || (local_42c = local_42c + 1, param_2 = local_3f0, 0x31 < local_42c))
  goto LAB_14c764af3;
  goto LAB_14c76402c;
LAB_14c764af3:
  (**(code **)(*(longlong *)this + 0x120))(this);
  (**(code **)(*(longlong *)this + 0xf0))(this);
  cVar10 = (**(code **)(*(longlong *)this + 8))(this);
  if (cVar10 == '\0') {
    (**(code **)(*(longlong *)this + 0xa0))(this);
    (**(code **)(*(longlong *)this + 0xe0))(this);
  }
LAB_14c764b30:
  if (local_458.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data);
  }
  if (local_470.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.AllocatorInstance.Data);
  }
  if (local_448.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.AllocatorInstance.Data);
  }
  goto LAB_14c764b7c;
}

// SimplifyToMinimalPlanar @ 14c764bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
SimplifyToMinimalPlanar
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,double param_1,
          TFunctionRef<bool___cdecl(int)> *param_2)

{
  double *pdVar1;
  <lambda_1> <Var2;
  short sVar3;
  longlong lVar4;
  code *pcVar5;
  FIndex2i_u_0 FVar6;
  FIndex2i_u_0 FVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  char cVar10;
  bool bVar11;
  ESimplificationResult EVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  ForAnyElementType FVar24;
  uint uVar25;
  size_t sVar26;
  FScriptContainerElement FVar27;
  undefined1 auStackY_4c8 [32];
  undefined1 local_477 [7];
  TArray<bool,TSizedDefaultAllocator<32>_> local_470;
  uint local_460;
  uint local_45c;
  ForAnyElementType local_458;
  uint local_450;
  uint local_44c;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_448;
  uint local_438;
  int local_434;
  int local_430;
  int local_42c;
  double local_428;
  FScriptContainerElement *local_420;
  undefined8 local_418;
  uint local_410 [2];
  int local_408 [2];
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  TFunctionRef<bool___cdecl(int)> *local_3f0;
  TArray<bool,TSizedDefaultAllocator<32>_> local_3e8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_3d8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_3c8;
  double local_3c0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_3b8;
  undefined8 local_3b0;
  double local_3a8;
  TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *local_3a0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_398;
  TArrayView<std::nullptr_t,int> local_390;
  code *local_380;
  TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> **local_378;
  code *local_370;
  TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> **local_368;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_360;
  TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *local_358;
  code *local_350;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_348;
  code *local_340;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> ***local_338;
  code *local_330;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> ***local_328;
  TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *local_320;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_318;
  double *local_310;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_308;
  FEdgeCollapseInfo local_300;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_2c8;
  undefined4 *local_2c0;
  undefined1 *local_2b8;
  double *local_2b0;
  undefined4 *local_2a8;
  undefined1 *local_2a0;
  int *local_298;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_290;
  undefined4 *local_288;
  undefined1 *local_280;
  double *local_278;
  undefined4 *local_270;
  undefined1 *local_268;
  int *local_260;
  TVector<double>_u_0 local_258;
  TVector<double>_u_0 local_238;
  TFunction<int___cdecl(int)> local_218;
  TFunction<int___cdecl(int)> local_1e8;
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined1 local_158 [64];
  undefined1 local_118 [64];
  longlong local_d8 [3];
  longlong *local_c0;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  if (*(int *)(*(longlong *)&this->field_0x8 + 0x170) == 0) {
    return;
  }
  <Var2 = (<lambda_1>)this->bPreserveBoundaryShape;
  this->bPreserveBoundaryShape = false;
  local_448.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_448.ArrayNum = 0;
  local_448.ArrayMax = 0;
  local_470.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_470.ArrayNum = 0;
  local_470.ArrayMax = 0;
  local_3f0 = param_2;
  (**(code **)(*(longlong *)this + 0xd8))();
  (**(code **)(*(longlong *)this + 0xf8))(this);
  Precompute(this,false);
  cVar10 = (**(code **)(*(longlong *)this + 8))(this);
  if (cVar10 == '\0') {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_448,
               *(int *)(*(longlong *)&this->field_0x8 + 0x140) * 0x200 +
               *(int *)(*(longlong *)&this->field_0x8 + 0x144),Default);
    local_398 = &local_448;
    local_380 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::SimplifyToMinimalPlanar'::__l2::<lambda_1>,void,int>
                ::Call;
    local_378 = &local_3a0;
    local_390.DataPtr = (void **)0x0;
    local_390.ArrayNum = 0;
    local_3a0 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               *(int *)(*(longlong *)&this->field_0x8 + 0x140) * 0x200 +
               *(int *)(*(longlong *)&this->field_0x8 + 0x144),1,
               (TFunctionRef<void___cdecl(int)> *)&local_380,<Var2,None,&local_390);
    cVar10 = (**(code **)(*(longlong *)this + 8))(this);
    if (cVar10 == '\0') {
      TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
                (&local_470,
                 *(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
                 *(int *)(*(longlong *)&this->field_0x8 + 0x24),Default);
      local_428 = cos(param_1 * __real_3f91df46a2529d39);
      local_318 = &local_470;
      local_310 = &local_428;
      local_308 = &local_448;
      local_368 = &local_320;
      local_370 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::SimplifyToMinimalPlanar'::__l2::<lambda_2>,void,int>
                  ::Call;
      local_320 = this;
      ParallelFor(*(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
                  *(int *)(*(longlong *)&this->field_0x8 + 0x24),
                  (TFunctionRef<void___cdecl(int)> *)&local_370,None);
      cVar10 = (**(code **)(*(longlong *)this + 8))(this);
      if (cVar10 == '\0') {
        (**(code **)(*(longlong *)this + 0x100))(this);
        (**(code **)(*(longlong *)this + 0xe8))(this);
        (**(code **)(*(longlong *)this + 0x118))(this);
        FVar7 = _UNK_15060db28;
        FVar6 = ___xmm_ffffffffffffffffffffffffffffffff;
        local_458.Data = (FScriptContainerElement *)0x0;
        local_44c = 0;
        local_42c = 0;
LAB_14c764e0c:
        uVar15 = 0;
        local_45c = 0;
        local_450 = 0;
        if (((int)local_44c < 0) && (local_44c != 0)) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_458,0,(int *)&local_44c);
        }
        pFVar19 = *(FScriptContainerElement **)&this->field_0x8;
        uVar25 = *(int *)((longlong)pFVar19 + 0x1d4) + *(int *)((longlong)pFVar19 + 0x1d0) * 0x200;
        uVar18 = uVar15;
        if ((uVar25 != 0) &&
           (0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)pFVar19 + 0x1d8) - 1U))) {
          uVar18 = 1;
          uVar16 = 1;
          if ((int)uVar25 < 2) goto LAB_14c764ebb;
          do {
            sVar3 = *(short *)((*(undefined8 **)((longlong)pFVar19 + 0x1d8))[uVar18 >> 9] +
                              (ulonglong)((uint)uVar18 & 0x1ff) * 2);
            if ((sVar3 != 0) && (sVar3 != -1)) break;
            uVar16 = (uint)uVar18 + 1;
            uVar18 = (ulonglong)uVar16;
          } while ((int)uVar16 < (int)uVar25);
        }
        uVar16 = (uint)uVar18;
LAB_14c764ebb:
        local_420 = pFVar19;
        if (uVar16 != uVar25) {
LAB_14c764ec1:
          do {
            uVar16 = (uint)uVar18;
            local_460 = uVar16;
            local_410[0] = uVar16;
            cVar10 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_410);
            if (cVar10 != '\0') {
              local_418 = *(FScriptContainerElement **)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                             (ulonglong)(local_460 >> 9) * 8) +
                           (ulonglong)(local_460 & 0x1ff) * 0x10);
              uVar23 = (uint)local_418;
              uVar20 = (uint)((ulonglong)local_418 >> 0x20);
              uVar17 = 0;
              if ((int)uVar23 < local_470.ArrayNum) {
                uVar17 = ~uVar23 >> 0x1f;
              }
              if (uVar17 == 0) {
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar11) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              if (local_470.AllocatorInstance.Data[(int)uVar23] == (FScriptContainerElement)0x0) {
                uVar17 = 0;
                if ((int)uVar20 < local_470.ArrayNum) {
                  uVar17 = ~uVar20 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar19 = local_420;
                param_2 = local_3f0;
                if (local_470.AllocatorInstance.Data[local_418._4_4_] ==
                    (FScriptContainerElement)0x0) goto LAB_14c76508b;
              }
              if (((local_458.Data <= (FScriptContainerElement *)&local_460) &&
                  ((FScriptContainerElement *)&local_460 <
                   local_458.Data + (longlong)(int)local_44c * 4)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (local_450 == local_44c) {
                local_450 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&local_458,(int *)&local_44c);
              }
              *(uint *)(local_458.Data + (longlong)(int)local_450 * 4) = local_460;
              pFVar19 = local_420;
              param_2 = local_3f0;
              local_450 = local_450 + 1;
            }
LAB_14c76508b:
            uVar16 = uVar16 + 1;
            uVar18 = (ulonglong)uVar16;
            if ((int)uVar16 < (int)uVar25) {
              do {
                uVar15 = (ulonglong)((uint)uVar18 & 0x1ff);
                lVar21 = *(longlong *)(*(longlong *)((longlong)pFVar19 + 0x1d8) + (uVar18 >> 9) * 8)
                ;
                if ((*(short *)(lVar21 + uVar15 * 2) != 0) &&
                   (*(short *)(lVar21 + uVar15 * 2) != -1)) goto LAB_14c764ec1;
                uVar16 = (uint)uVar18 + 1;
                uVar18 = (ulonglong)uVar16;
              } while ((int)uVar16 < (int)uVar25);
            }
          } while (uVar16 != uVar25);
          uVar15 = (ulonglong)local_45c;
        }
        uVar18 = (ulonglong)(int)local_450;
        local_438 = local_450;
        local_420 = local_458.Data + uVar18 * 4;
        pFVar19 = local_420;
        FVar24.Data = local_458.Data;
LAB_14c7650eb:
        do {
          local_418 = FVar24.Data;
          if (local_450 != (uint)uVar18) {
            local_477[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_477);
          }
          if (FVar24.Data == pFVar19) goto LAB_14c7658ae;
          uVar25 = *(uint *)FVar24.Data;
          lVar21 = *(longlong *)&this->field_0x8;
          if ((-1 < (int)uVar25) &&
             ((int)uVar25 < *(int *)(lVar21 + 0x1d0) * 0x200 + *(int *)(lVar21 + 0x1d4))) {
            if ((ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(lVar21 + 0x1d8) + (ulonglong)(uVar25 >> 9) * 8)
                                   + (ulonglong)(uVar25 & 0x1ff) * 2) - 1U) < 0xfffe) {
              cVar10 = (**(code **)(*(longlong *)this + 8))(this);
              if (cVar10 != '\0') goto LAB_14c765910;
              this->COUNT_ITERATIONS = this->COUNT_ITERATIONS + 1;
              EVar12 = Failed_OpNotSuccessful;
              uVar15 = *(ulonglong *)
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                          (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 0x10);
              uVar17 = (uint)uVar15;
              local_300.OpposingVerts.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
              local_300.KeptEdges.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
              local_300.RemovedTris.field0_0x0 = FVar6;
              local_300.RemovedEdges.field0_0x0 = FVar7;
              uVar16 = 0;
              if ((int)uVar17 < local_470.ArrayNum) {
                uVar16 = ~uVar17 >> 0x1f;
              }
              local_3b0 = uVar15;
              iVar22 = local_470.ArrayNum;
              if (uVar16 == 0) {
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar11) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar22 = local_470.ArrayNum;
              }
              uVar16 = local_3b0._4_4_;
              lVar21 = (longlong)(int)local_3b0._4_4_;
              if (local_470.AllocatorInstance.Data[(int)uVar17] == (FScriptContainerElement)0x0) {
LAB_14c76531a:
                uVar20 = 0;
                if ((int)uVar16 < iVar22) {
                  uVar20 = ~uVar16 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (local_470.AllocatorInstance.Data[lVar21] != (FScriptContainerElement)0x0) {
                  pFVar19 = (this->IsBoundaryVtxCache).AllocatorInstance.Data;
                  local_3d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_3d8.ArrayNum = (this->IsBoundaryVtxCache).ArrayNum;
                  sVar26 = (size_t)local_3d8.ArrayNum;
                  if (local_3d8.ArrayNum == 0) {
                    local_3d8.ArrayMax = 0;
                  }
                  else {
                    Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (1,1,local_3d8.ArrayNum,0,&local_3d8.AllocatorInstance,
                               local_3d8.ArrayNum,&local_3d8.ArrayMax);
                    memcpy(local_3d8.AllocatorInstance.Data,pFVar19,sVar26);
                  }
                  bVar11 = IsCollapsableDevelopableEdge
                                     (*(FDynamicMesh3 **)&this->field_0x8,uVar25,uVar16,uVar17,
                                      local_428,&local_448,&local_3d8);
                  if (bVar11) {
                    lVar21 = *(longlong *)
                              (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) +
                              ((uVar15 & 0xffffffff) >> 9) * 8);
                    pdVar1 = (double *)(lVar21 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
                    local_238._s_0.X = *pdVar1;
                    local_238._s_0.Y = pdVar1[1];
                    local_238._s_0.Z =
                         *(double *)(lVar21 + 0x10 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
                    EVar12 = CollapseEdge(this,uVar25,(TVector<double> *)&local_238._s_0,&local_300,
                                          uVar17);
                  }
                }
                if (EVar12 != Ok_Collapsed) {
                  uVar15 = (ulonglong)local_45c;
                  pFVar19 = local_420;
                  goto LAB_14c76589e;
                }
              }
              else {
                pFVar19 = (this->IsBoundaryVtxCache).AllocatorInstance.Data;
                local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_3e8.ArrayNum = (this->IsBoundaryVtxCache).ArrayNum;
                sVar26 = (size_t)local_3e8.ArrayNum;
                if (local_3e8.ArrayNum == 0) {
                  local_3e8.ArrayMax = 0;
                }
                else {
                  Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,local_3e8.ArrayNum,0,&local_3e8.AllocatorInstance,
                             local_3e8.ArrayNum,&local_3e8.ArrayMax);
                  memcpy(local_3e8.AllocatorInstance.Data,pFVar19,sVar26);
                }
                bVar11 = IsCollapsableDevelopableEdge
                                   (*(FDynamicMesh3 **)&this->field_0x8,uVar25,uVar17,uVar16,
                                    local_428,&local_448,&local_3e8);
                if (!bVar11) {
LAB_14c765315:
                  iVar22 = local_470.ArrayNum;
                  goto LAB_14c76531a;
                }
                lVar4 = *(longlong *)
                         (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) +
                         (ulonglong)(uVar16 >> 9) * 8);
                pdVar1 = (double *)(lVar4 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
                local_258._s_0.X = *pdVar1;
                local_258._s_0.Y = pdVar1[1];
                local_258._s_0.Z = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
                EVar12 = CollapseEdge(this,uVar25,(TVector<double> *)&local_258._s_0,&local_300,
                                      uVar16);
                if (EVar12 != Ok_Collapsed) goto LAB_14c765315;
              }
              iVar22 = local_300.KeptVertex;
              lVar21 = (longlong)local_300.KeptVertex;
              local_360 = &local_448;
              local_45c = local_45c + 1;
              local_348 = &local_360;
              local_350 = Core::Private::Function::
                          TFunctionRefCaller<`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::SimplifyToMinimalPlanar'::__l45::<lambda_3>,void,int>
                          ::Call;
              local_358 = this;
              FDynamicMesh3::EnumerateVertexTriangles
                        (*(FDynamicMesh3 **)&this->field_0x8,local_300.KeptVertex,
                         (TFunctionRef<void___cdecl(int)> *)&local_350);
              FDynamicMesh3::VtxVerticesItr
                        (*(FDynamicMesh3 **)&this->field_0x8,(MappedValueEnumerable *)local_158,
                         iVar22);
              uVar9 = local_158._8_4_;
              uVar8 = local_158._0_8_;
              local_1e8._0_8_ = local_158._16_8_;
              local_1e8._40_8_ = 0;
              if (local_158._16_8_ != 0) {
                plVar14 = (longlong *)(local_158 + 0x20);
                if ((longlong *)local_158._56_8_ != (longlong *)0x0) {
                  plVar14 = (longlong *)local_158._56_8_;
                }
                (**(code **)*plVar14)(plVar14,&local_1e8.field_0x10);
              }
              FSmallListSet::MappedValueIterator::MappedValueIterator
                        ((MappedValueIterator *)local_118,(FSmallListSet *)uVar8,uVar9,false,
                         &local_1e8);
              uVar9 = local_158._8_4_;
              uVar8 = local_158._0_8_;
              local_218._0_8_ = local_158._16_8_;
              local_218._40_8_ = 0;
              if (local_158._16_8_ != 0) {
                plVar14 = (longlong *)(local_158 + 0x20);
                if ((longlong *)local_158._56_8_ != (longlong *)0x0) {
                  plVar14 = (longlong *)local_158._56_8_;
                }
                (**(code **)*plVar14)(plVar14,&local_218.field_0x10);
              }
              FSmallListSet::MappedValueIterator::MappedValueIterator
                        ((MappedValueIterator *)local_b8,(FSmallListSet *)uVar8,uVar9,true,
                         &local_218);
              while ((((local_118._0_8_ != local_b8._0_8_ || (local_118._8_4_ != local_b8._8_4_)) ||
                      (local_118._24_4_ != local_b8._24_4_)) ||
                     (local_118._28_4_ != local_b8._28_4_))) {
                local_408[0] = local_118._32_4_;
                Core::Private::Function::CheckCallable((void *)local_118._48_8_);
                uVar8 = local_118._48_8_;
                plVar14 = local_d8;
                if (local_c0 != (longlong *)0x0) {
                  plVar14 = local_c0;
                }
                uVar13 = (**(code **)(*plVar14 + 8))();
                uVar16 = (*(code *)uVar8)(uVar13,local_408);
                local_3b8 = &local_448;
                local_2c8 = &local_3b8;
                local_3a8 = local_428;
                local_2c0 = &local_400;
                local_2b8 = local_170;
                local_2b0 = &local_3a8;
                local_2a8 = &local_3fc;
                local_2a0 = local_1b8;
                local_298 = &local_434;
                local_338 = &local_2c8;
                local_400 = 0;
                local_3fc = 0;
                local_434 = 0;
                local_340 = Core::Private::Function::
                            TFunctionRefCaller<`IsDevelopableVertex<`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::SimplifyToMinimalPlanar'::__l49::<lambda_4>_>'::__l2::<lambda_1>,void,int>
                            ::Call;
                FDynamicMesh3::EnumerateVertexTriangles
                          (*(FDynamicMesh3 **)&this->field_0x8,uVar16,
                           (TFunctionRef<void___cdecl(int)> *)&local_340);
                FVar27 = (FScriptContainerElement)(local_434 == 0);
                uVar25 = 0;
                if ((int)uVar16 < local_470.ArrayNum) {
                  uVar25 = ~uVar16 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                local_470.AllocatorInstance.Data[(int)uVar16] = FVar27;
                FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_118);
              }
              uVar15 = (ulonglong)local_45c;
              if (local_b8._48_8_ != 0) {
                plVar14 = (longlong *)(local_b8 + 0x40);
                if ((longlong *)local_b8._88_8_ != (longlong *)0x0) {
                  plVar14 = (longlong *)local_b8._88_8_;
                }
                (**(code **)(*plVar14 + 0x10))();
              }
              if ((code *)local_118._48_8_ != (code *)0x0) {
                plVar14 = local_d8;
                if (local_c0 != (longlong *)0x0) {
                  plVar14 = local_c0;
                }
                (**(code **)(*plVar14 + 0x10))();
              }
              if (local_158._16_8_ != 0) {
                plVar14 = (longlong *)(local_158 + 0x20);
                if ((longlong *)local_158._56_8_ != (longlong *)0x0) {
                  plVar14 = (longlong *)local_158._56_8_;
                }
                (**(code **)(*plVar14 + 0x10))();
              }
              local_3c8 = &local_448;
              local_3c0 = local_428;
              local_288 = &local_3f8;
              local_280 = local_1a0;
              local_278 = &local_3c0;
              local_270 = &local_3f4;
              local_268 = local_188;
              local_260 = &local_430;
              local_328 = &local_290;
              local_330 = Core::Private::Function::
                          TFunctionRefCaller<`IsDevelopableVertex<`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::SimplifyToMinimalPlanar'::__l45::<lambda_5>_>'::__l2::<lambda_1>,void,int>
                          ::Call;
              local_3f8 = 0;
              local_3f4 = 0;
              local_430 = 0;
              local_290 = &local_3c8;
              FDynamicMesh3::EnumerateVertexTriangles
                        (*(FDynamicMesh3 **)&this->field_0x8,iVar22,
                         (TFunctionRef<void___cdecl(int)> *)&local_330);
              FVar27 = (FScriptContainerElement)(local_430 == 0);
              uVar25 = 0;
              if (iVar22 < local_470.ArrayNum) {
                uVar25 = (uint)~iVar22 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar18 = (ulonglong)local_438;
              local_470.AllocatorInstance.Data[lVar21] = FVar27;
              FVar24.Data = local_418 + 4;
              pFVar19 = local_420;
              goto LAB_14c7650eb;
            }
          }
LAB_14c76589e:
          uVar18 = (ulonglong)local_438;
          FVar24.Data = local_418 + 4;
        } while( true );
      }
    }
  }
  if (local_470.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.AllocatorInstance.Data);
  }
  if (local_448.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.AllocatorInstance.Data);
  }
LAB_14c76595c:
  this->bPreserveBoundaryShape = (bool)<Var2;
  return;
LAB_14c7658ae:
  if (((int)uVar15 == 0) || (local_42c = local_42c + 1, param_2 = local_3f0, 0x31 < local_42c))
  goto LAB_14c7658d3;
  goto LAB_14c764e0c;
LAB_14c7658d3:
  (**(code **)(*(longlong *)this + 0x120))(this);
  (**(code **)(*(longlong *)this + 0xf0))(this);
  cVar10 = (**(code **)(*(longlong *)this + 8))(this);
  if (cVar10 == '\0') {
    (**(code **)(*(longlong *)this + 0xa0))(this);
    (**(code **)(*(longlong *)this + 0xe0))(this);
  }
LAB_14c765910:
  if (local_458.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data);
  }
  if (local_470.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.AllocatorInstance.Data);
  }
  if (local_448.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.AllocatorInstance.Data);
  }
  goto LAB_14c76595c;
}

// SimplifyToMinimalPlanar @ 14c7659a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
SimplifyToMinimalPlanar
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,double param_1,
          TFunctionRef<bool___cdecl(int)> *param_2)

{
  double *pdVar1;
  <lambda_1> <Var2;
  short sVar3;
  longlong lVar4;
  code *pcVar5;
  FIndex2i_u_0 FVar6;
  FIndex2i_u_0 FVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  char cVar10;
  bool bVar11;
  ESimplificationResult EVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  ForAnyElementType FVar24;
  uint uVar25;
  size_t sVar26;
  FScriptContainerElement FVar27;
  undefined1 auStackY_4c8 [32];
  undefined1 local_477 [7];
  TArray<bool,TSizedDefaultAllocator<32>_> local_470;
  uint local_460;
  uint local_45c;
  ForAnyElementType local_458;
  uint local_450;
  uint local_44c;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_448;
  uint local_438;
  int local_434;
  int local_430;
  int local_42c;
  double local_428;
  FScriptContainerElement *local_420;
  undefined8 local_418;
  uint local_410 [2];
  int local_408 [2];
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  TFunctionRef<bool___cdecl(int)> *local_3f0;
  TArray<bool,TSizedDefaultAllocator<32>_> local_3e8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_3d8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_3c8;
  double local_3c0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_3b8;
  undefined8 local_3b0;
  double local_3a8;
  TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *local_3a0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_398;
  TArrayView<std::nullptr_t,int> local_390;
  code *local_380;
  TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> **local_378;
  code *local_370;
  TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> **local_368;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_360;
  TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *local_358;
  code *local_350;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_348;
  code *local_340;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> ***local_338;
  code *local_330;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> ***local_328;
  TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *local_320;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_318;
  double *local_310;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_308;
  FEdgeCollapseInfo local_300;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_2c8;
  undefined4 *local_2c0;
  undefined1 *local_2b8;
  double *local_2b0;
  undefined4 *local_2a8;
  undefined1 *local_2a0;
  int *local_298;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_290;
  undefined4 *local_288;
  undefined1 *local_280;
  double *local_278;
  undefined4 *local_270;
  undefined1 *local_268;
  int *local_260;
  TVector<double>_u_0 local_258;
  TVector<double>_u_0 local_238;
  TFunction<int___cdecl(int)> local_218;
  TFunction<int___cdecl(int)> local_1e8;
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined1 local_158 [64];
  undefined1 local_118 [64];
  longlong local_d8 [3];
  longlong *local_c0;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  if (*(int *)(*(longlong *)&this->field_0x8 + 0x170) == 0) {
    return;
  }
  <Var2 = (<lambda_1>)this->bPreserveBoundaryShape;
  this->bPreserveBoundaryShape = false;
  local_448.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_448.ArrayNum = 0;
  local_448.ArrayMax = 0;
  local_470.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_470.ArrayNum = 0;
  local_470.ArrayMax = 0;
  local_3f0 = param_2;
  (**(code **)(*(longlong *)this + 0xd8))();
  (**(code **)(*(longlong *)this + 0xf8))(this);
  Precompute(this,false);
  cVar10 = (**(code **)(*(longlong *)this + 8))(this);
  if (cVar10 == '\0') {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_448,
               *(int *)(*(longlong *)&this->field_0x8 + 0x140) * 0x200 +
               *(int *)(*(longlong *)&this->field_0x8 + 0x144),Default);
    local_398 = &local_448;
    local_380 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::SimplifyToMinimalPlanar'::__l2::<lambda_1>,void,int>
                ::Call;
    local_378 = &local_3a0;
    local_390.DataPtr = (void **)0x0;
    local_390.ArrayNum = 0;
    local_3a0 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               *(int *)(*(longlong *)&this->field_0x8 + 0x140) * 0x200 +
               *(int *)(*(longlong *)&this->field_0x8 + 0x144),1,
               (TFunctionRef<void___cdecl(int)> *)&local_380,<Var2,None,&local_390);
    cVar10 = (**(code **)(*(longlong *)this + 8))(this);
    if (cVar10 == '\0') {
      TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
                (&local_470,
                 *(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
                 *(int *)(*(longlong *)&this->field_0x8 + 0x24),Default);
      local_428 = cos(param_1 * __real_3f91df46a2529d39);
      local_318 = &local_470;
      local_310 = &local_428;
      local_308 = &local_448;
      local_368 = &local_320;
      local_370 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::SimplifyToMinimalPlanar'::__l2::<lambda_2>,void,int>
                  ::Call;
      local_320 = this;
      ParallelFor(*(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
                  *(int *)(*(longlong *)&this->field_0x8 + 0x24),
                  (TFunctionRef<void___cdecl(int)> *)&local_370,None);
      cVar10 = (**(code **)(*(longlong *)this + 8))(this);
      if (cVar10 == '\0') {
        (**(code **)(*(longlong *)this + 0x100))(this);
        (**(code **)(*(longlong *)this + 0xe8))(this);
        (**(code **)(*(longlong *)this + 0x118))(this);
        FVar7 = _UNK_15060db28;
        FVar6 = ___xmm_ffffffffffffffffffffffffffffffff;
        local_458.Data = (FScriptContainerElement *)0x0;
        local_44c = 0;
        local_42c = 0;
LAB_14c765bec:
        uVar15 = 0;
        local_45c = 0;
        local_450 = 0;
        if (((int)local_44c < 0) && (local_44c != 0)) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_458,0,(int *)&local_44c);
        }
        pFVar19 = *(FScriptContainerElement **)&this->field_0x8;
        uVar25 = *(int *)((longlong)pFVar19 + 0x1d4) + *(int *)((longlong)pFVar19 + 0x1d0) * 0x200;
        uVar18 = uVar15;
        if ((uVar25 != 0) &&
           (0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)pFVar19 + 0x1d8) - 1U))) {
          uVar18 = 1;
          uVar16 = 1;
          if ((int)uVar25 < 2) goto LAB_14c765c9b;
          do {
            sVar3 = *(short *)((*(undefined8 **)((longlong)pFVar19 + 0x1d8))[uVar18 >> 9] +
                              (ulonglong)((uint)uVar18 & 0x1ff) * 2);
            if ((sVar3 != 0) && (sVar3 != -1)) break;
            uVar16 = (uint)uVar18 + 1;
            uVar18 = (ulonglong)uVar16;
          } while ((int)uVar16 < (int)uVar25);
        }
        uVar16 = (uint)uVar18;
LAB_14c765c9b:
        local_420 = pFVar19;
        if (uVar16 != uVar25) {
LAB_14c765ca1:
          do {
            uVar16 = (uint)uVar18;
            local_460 = uVar16;
            local_410[0] = uVar16;
            cVar10 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_410);
            if (cVar10 != '\0') {
              local_418 = *(FScriptContainerElement **)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                             (ulonglong)(local_460 >> 9) * 8) +
                           (ulonglong)(local_460 & 0x1ff) * 0x10);
              uVar23 = (uint)local_418;
              uVar20 = (uint)((ulonglong)local_418 >> 0x20);
              uVar17 = 0;
              if ((int)uVar23 < local_470.ArrayNum) {
                uVar17 = ~uVar23 >> 0x1f;
              }
              if (uVar17 == 0) {
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar11) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              if (local_470.AllocatorInstance.Data[(int)uVar23] == (FScriptContainerElement)0x0) {
                uVar17 = 0;
                if ((int)uVar20 < local_470.ArrayNum) {
                  uVar17 = ~uVar20 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar19 = local_420;
                param_2 = local_3f0;
                if (local_470.AllocatorInstance.Data[local_418._4_4_] ==
                    (FScriptContainerElement)0x0) goto LAB_14c765e6b;
              }
              if (((local_458.Data <= (FScriptContainerElement *)&local_460) &&
                  ((FScriptContainerElement *)&local_460 <
                   local_458.Data + (longlong)(int)local_44c * 4)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (local_450 == local_44c) {
                local_450 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&local_458,(int *)&local_44c);
              }
              *(uint *)(local_458.Data + (longlong)(int)local_450 * 4) = local_460;
              pFVar19 = local_420;
              param_2 = local_3f0;
              local_450 = local_450 + 1;
            }
LAB_14c765e6b:
            uVar16 = uVar16 + 1;
            uVar18 = (ulonglong)uVar16;
            if ((int)uVar16 < (int)uVar25) {
              do {
                uVar15 = (ulonglong)((uint)uVar18 & 0x1ff);
                lVar21 = *(longlong *)(*(longlong *)((longlong)pFVar19 + 0x1d8) + (uVar18 >> 9) * 8)
                ;
                if ((*(short *)(lVar21 + uVar15 * 2) != 0) &&
                   (*(short *)(lVar21 + uVar15 * 2) != -1)) goto LAB_14c765ca1;
                uVar16 = (uint)uVar18 + 1;
                uVar18 = (ulonglong)uVar16;
              } while ((int)uVar16 < (int)uVar25);
            }
          } while (uVar16 != uVar25);
          uVar15 = (ulonglong)local_45c;
        }
        uVar18 = (ulonglong)(int)local_450;
        local_438 = local_450;
        local_420 = local_458.Data + uVar18 * 4;
        pFVar19 = local_420;
        FVar24.Data = local_458.Data;
LAB_14c765ecb:
        do {
          local_418 = FVar24.Data;
          if (local_450 != (uint)uVar18) {
            local_477[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_477);
          }
          if (FVar24.Data == pFVar19) goto LAB_14c76668e;
          uVar25 = *(uint *)FVar24.Data;
          lVar21 = *(longlong *)&this->field_0x8;
          if ((-1 < (int)uVar25) &&
             ((int)uVar25 < *(int *)(lVar21 + 0x1d0) * 0x200 + *(int *)(lVar21 + 0x1d4))) {
            if ((ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(lVar21 + 0x1d8) + (ulonglong)(uVar25 >> 9) * 8)
                                   + (ulonglong)(uVar25 & 0x1ff) * 2) - 1U) < 0xfffe) {
              cVar10 = (**(code **)(*(longlong *)this + 8))(this);
              if (cVar10 != '\0') goto LAB_14c7666f0;
              this->COUNT_ITERATIONS = this->COUNT_ITERATIONS + 1;
              EVar12 = Failed_OpNotSuccessful;
              uVar15 = *(ulonglong *)
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                          (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 0x10);
              uVar17 = (uint)uVar15;
              local_300.OpposingVerts.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
              local_300.KeptEdges.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
              local_300.RemovedTris.field0_0x0 = FVar6;
              local_300.RemovedEdges.field0_0x0 = FVar7;
              uVar16 = 0;
              if ((int)uVar17 < local_470.ArrayNum) {
                uVar16 = ~uVar17 >> 0x1f;
              }
              local_3b0 = uVar15;
              iVar22 = local_470.ArrayNum;
              if (uVar16 == 0) {
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar11) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar22 = local_470.ArrayNum;
              }
              uVar16 = local_3b0._4_4_;
              lVar21 = (longlong)(int)local_3b0._4_4_;
              if (local_470.AllocatorInstance.Data[(int)uVar17] == (FScriptContainerElement)0x0) {
LAB_14c7660fa:
                uVar20 = 0;
                if ((int)uVar16 < iVar22) {
                  uVar20 = ~uVar16 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (local_470.AllocatorInstance.Data[lVar21] != (FScriptContainerElement)0x0) {
                  pFVar19 = (this->IsBoundaryVtxCache).AllocatorInstance.Data;
                  local_3d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_3d8.ArrayNum = (this->IsBoundaryVtxCache).ArrayNum;
                  sVar26 = (size_t)local_3d8.ArrayNum;
                  if (local_3d8.ArrayNum == 0) {
                    local_3d8.ArrayMax = 0;
                  }
                  else {
                    Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (1,1,local_3d8.ArrayNum,0,&local_3d8.AllocatorInstance,
                               local_3d8.ArrayNum,&local_3d8.ArrayMax);
                    memcpy(local_3d8.AllocatorInstance.Data,pFVar19,sVar26);
                  }
                  bVar11 = IsCollapsableDevelopableEdge
                                     (*(FDynamicMesh3 **)&this->field_0x8,uVar25,uVar16,uVar17,
                                      local_428,&local_448,&local_3d8);
                  if (bVar11) {
                    lVar21 = *(longlong *)
                              (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) +
                              ((uVar15 & 0xffffffff) >> 9) * 8);
                    pdVar1 = (double *)(lVar21 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
                    local_238._s_0.X = *pdVar1;
                    local_238._s_0.Y = pdVar1[1];
                    local_238._s_0.Z =
                         *(double *)(lVar21 + 0x10 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
                    EVar12 = CollapseEdge(this,uVar25,(TVector<double> *)&local_238._s_0,&local_300,
                                          uVar17);
                  }
                }
                if (EVar12 != Ok_Collapsed) {
                  uVar15 = (ulonglong)local_45c;
                  pFVar19 = local_420;
                  goto LAB_14c76667e;
                }
              }
              else {
                pFVar19 = (this->IsBoundaryVtxCache).AllocatorInstance.Data;
                local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_3e8.ArrayNum = (this->IsBoundaryVtxCache).ArrayNum;
                sVar26 = (size_t)local_3e8.ArrayNum;
                if (local_3e8.ArrayNum == 0) {
                  local_3e8.ArrayMax = 0;
                }
                else {
                  Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,local_3e8.ArrayNum,0,&local_3e8.AllocatorInstance,
                             local_3e8.ArrayNum,&local_3e8.ArrayMax);
                  memcpy(local_3e8.AllocatorInstance.Data,pFVar19,sVar26);
                }
                bVar11 = IsCollapsableDevelopableEdge
                                   (*(FDynamicMesh3 **)&this->field_0x8,uVar25,uVar17,uVar16,
                                    local_428,&local_448,&local_3e8);
                if (!bVar11) {
LAB_14c7660f5:
                  iVar22 = local_470.ArrayNum;
                  goto LAB_14c7660fa;
                }
                lVar4 = *(longlong *)
                         (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) +
                         (ulonglong)(uVar16 >> 9) * 8);
                pdVar1 = (double *)(lVar4 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
                local_258._s_0.X = *pdVar1;
                local_258._s_0.Y = pdVar1[1];
                local_258._s_0.Z = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
                EVar12 = CollapseEdge(this,uVar25,(TVector<double> *)&local_258._s_0,&local_300,
                                      uVar16);
                if (EVar12 != Ok_Collapsed) goto LAB_14c7660f5;
              }
              iVar22 = local_300.KeptVertex;
              lVar21 = (longlong)local_300.KeptVertex;
              local_360 = &local_448;
              local_45c = local_45c + 1;
              local_348 = &local_360;
              local_350 = Core::Private::Function::
                          TFunctionRefCaller<`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::SimplifyToMinimalPlanar'::__l45::<lambda_3>,void,int>
                          ::Call;
              local_358 = this;
              FDynamicMesh3::EnumerateVertexTriangles
                        (*(FDynamicMesh3 **)&this->field_0x8,local_300.KeptVertex,
                         (TFunctionRef<void___cdecl(int)> *)&local_350);
              FDynamicMesh3::VtxVerticesItr
                        (*(FDynamicMesh3 **)&this->field_0x8,(MappedValueEnumerable *)local_158,
                         iVar22);
              uVar9 = local_158._8_4_;
              uVar8 = local_158._0_8_;
              local_1e8._0_8_ = local_158._16_8_;
              local_1e8._40_8_ = 0;
              if (local_158._16_8_ != 0) {
                plVar14 = (longlong *)(local_158 + 0x20);
                if ((longlong *)local_158._56_8_ != (longlong *)0x0) {
                  plVar14 = (longlong *)local_158._56_8_;
                }
                (**(code **)*plVar14)(plVar14,&local_1e8.field_0x10);
              }
              FSmallListSet::MappedValueIterator::MappedValueIterator
                        ((MappedValueIterator *)local_118,(FSmallListSet *)uVar8,uVar9,false,
                         &local_1e8);
              uVar9 = local_158._8_4_;
              uVar8 = local_158._0_8_;
              local_218._0_8_ = local_158._16_8_;
              local_218._40_8_ = 0;
              if (local_158._16_8_ != 0) {
                plVar14 = (longlong *)(local_158 + 0x20);
                if ((longlong *)local_158._56_8_ != (longlong *)0x0) {
                  plVar14 = (longlong *)local_158._56_8_;
                }
                (**(code **)*plVar14)(plVar14,&local_218.field_0x10);
              }
              FSmallListSet::MappedValueIterator::MappedValueIterator
                        ((MappedValueIterator *)local_b8,(FSmallListSet *)uVar8,uVar9,true,
                         &local_218);
              while ((((local_118._0_8_ != local_b8._0_8_ || (local_118._8_4_ != local_b8._8_4_)) ||
                      (local_118._24_4_ != local_b8._24_4_)) ||
                     (local_118._28_4_ != local_b8._28_4_))) {
                local_408[0] = local_118._32_4_;
                Core::Private::Function::CheckCallable((void *)local_118._48_8_);
                uVar8 = local_118._48_8_;
                plVar14 = local_d8;
                if (local_c0 != (longlong *)0x0) {
                  plVar14 = local_c0;
                }
                uVar13 = (**(code **)(*plVar14 + 8))();
                uVar16 = (*(code *)uVar8)(uVar13,local_408);
                local_3b8 = &local_448;
                local_2c8 = &local_3b8;
                local_3a8 = local_428;
                local_2c0 = &local_400;
                local_2b8 = local_170;
                local_2b0 = &local_3a8;
                local_2a8 = &local_3fc;
                local_2a0 = local_1b8;
                local_298 = &local_434;
                local_338 = &local_2c8;
                local_400 = 0;
                local_3fc = 0;
                local_434 = 0;
                local_340 = Core::Private::Function::
                            TFunctionRefCaller<`IsDevelopableVertex<`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::SimplifyToMinimalPlanar'::__l49::<lambda_4>_>'::__l2::<lambda_1>,void,int>
                            ::Call;
                FDynamicMesh3::EnumerateVertexTriangles
                          (*(FDynamicMesh3 **)&this->field_0x8,uVar16,
                           (TFunctionRef<void___cdecl(int)> *)&local_340);
                FVar27 = (FScriptContainerElement)(local_434 == 0);
                uVar25 = 0;
                if ((int)uVar16 < local_470.ArrayNum) {
                  uVar25 = ~uVar16 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                local_470.AllocatorInstance.Data[(int)uVar16] = FVar27;
                FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_118);
              }
              uVar15 = (ulonglong)local_45c;
              if (local_b8._48_8_ != 0) {
                plVar14 = (longlong *)(local_b8 + 0x40);
                if ((longlong *)local_b8._88_8_ != (longlong *)0x0) {
                  plVar14 = (longlong *)local_b8._88_8_;
                }
                (**(code **)(*plVar14 + 0x10))();
              }
              if ((code *)local_118._48_8_ != (code *)0x0) {
                plVar14 = local_d8;
                if (local_c0 != (longlong *)0x0) {
                  plVar14 = local_c0;
                }
                (**(code **)(*plVar14 + 0x10))();
              }
              if (local_158._16_8_ != 0) {
                plVar14 = (longlong *)(local_158 + 0x20);
                if ((longlong *)local_158._56_8_ != (longlong *)0x0) {
                  plVar14 = (longlong *)local_158._56_8_;
                }
                (**(code **)(*plVar14 + 0x10))();
              }
              local_3c8 = &local_448;
              local_3c0 = local_428;
              local_288 = &local_3f8;
              local_280 = local_1a0;
              local_278 = &local_3c0;
              local_270 = &local_3f4;
              local_268 = local_188;
              local_260 = &local_430;
              local_328 = &local_290;
              local_330 = Core::Private::Function::
                          TFunctionRefCaller<`IsDevelopableVertex<`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::SimplifyToMinimalPlanar'::__l45::<lambda_5>_>'::__l2::<lambda_1>,void,int>
                          ::Call;
              local_3f8 = 0;
              local_3f4 = 0;
              local_430 = 0;
              local_290 = &local_3c8;
              FDynamicMesh3::EnumerateVertexTriangles
                        (*(FDynamicMesh3 **)&this->field_0x8,iVar22,
                         (TFunctionRef<void___cdecl(int)> *)&local_330);
              FVar27 = (FScriptContainerElement)(local_430 == 0);
              uVar25 = 0;
              if (iVar22 < local_470.ArrayNum) {
                uVar25 = (uint)~iVar22 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar18 = (ulonglong)local_438;
              local_470.AllocatorInstance.Data[lVar21] = FVar27;
              FVar24.Data = local_418 + 4;
              pFVar19 = local_420;
              goto LAB_14c765ecb;
            }
          }
LAB_14c76667e:
          uVar18 = (ulonglong)local_438;
          FVar24.Data = local_418 + 4;
        } while( true );
      }
    }
  }
  if (local_470.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.AllocatorInstance.Data);
  }
  if (local_448.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.AllocatorInstance.Data);
  }
LAB_14c76673c:
  this->bPreserveBoundaryShape = (bool)<Var2;
  return;
LAB_14c76668e:
  if (((int)uVar15 == 0) || (local_42c = local_42c + 1, param_2 = local_3f0, 0x31 < local_42c))
  goto LAB_14c7666b3;
  goto LAB_14c765bec;
LAB_14c7666b3:
  (**(code **)(*(longlong *)this + 0x120))(this);
  (**(code **)(*(longlong *)this + 0xf0))(this);
  cVar10 = (**(code **)(*(longlong *)this + 8))(this);
  if (cVar10 == '\0') {
    (**(code **)(*(longlong *)this + 0xa0))(this);
    (**(code **)(*(longlong *)this + 0xe0))(this);
  }
LAB_14c7666f0:
  if (local_458.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data);
  }
  if (local_470.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.AllocatorInstance.Data);
  }
  if (local_448.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.AllocatorInstance.Data);
  }
  goto LAB_14c76673c;
}

// SimplifyToTriangleCount @ 14c766780

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToTriangleCount
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,int param_1)

{
  this->SimplifyMode = TriangleCount;
  this->MaxErrorAllowed = 3.4028235e+38;
  if (param_1 < 1) {
    param_1 = 1;
  }
  this->MinEdgeLength = 1.7976931348623157e+308;
  this->TargetCount = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014c7667b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x60))();
  return;
}

// SimplifyToTriangleCount @ 14c7667d0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
SimplifyToTriangleCount
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,int param_1)

{
  this->SimplifyMode = TriangleCount;
  this->MaxErrorAllowed = 3.4028235e+38;
  if (param_1 < 1) {
    param_1 = 1;
  }
  this->MinEdgeLength = 1.7976931348623157e+308;
  this->TargetCount = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014c766808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x60))();
  return;
}

// SimplifyToTriangleCount @ 14c766820

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
SimplifyToTriangleCount
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,int param_1)

{
  this->SimplifyMode = TriangleCount;
  this->MaxErrorAllowed = 3.4028235e+38;
  if (param_1 < 1) {
    param_1 = 1;
  }
  this->MinEdgeLength = 1.7976931348623157e+308;
  this->TargetCount = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014c766858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x60))();
  return;
}

// SimplifyToVertexCount @ 14c766870

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToVertexCount
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,int param_1)

{
  this->SimplifyMode = VertexCount;
  this->MaxErrorAllowed = 3.4028235e+38;
  if (param_1 < 3) {
    param_1 = 3;
  }
  this->MinEdgeLength = 1.7976931348623157e+308;
  this->TargetCount = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014c7668a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x60))();
  return;
}

// SimplifyToVertexCount @ 14c7668c0

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
SimplifyToVertexCount
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,int param_1)

{
  this->SimplifyMode = VertexCount;
  this->MaxErrorAllowed = 3.4028235e+38;
  if (param_1 < 3) {
    param_1 = 3;
  }
  this->MinEdgeLength = 1.7976931348623157e+308;
  this->TargetCount = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014c7668f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x60))();
  return;
}

// SimplifyToVertexCount @ 14c766910

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
SimplifyToVertexCount
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,int param_1)

{
  this->SimplifyMode = VertexCount;
  this->MaxErrorAllowed = 3.4028235e+38;
  if (param_1 < 3) {
    param_1 = 3;
  }
  this->MinEdgeLength = 1.7976931348623157e+308;
  this->TargetCount = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014c766948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x60))();
  return;
}

// StartEdges @ 14c76b320

int __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::StartEdges
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this)

{
  this->MaxEdgeID =
       (longlong)
       (*(int *)(*(longlong *)&this->field_0x8 + 0x1d0) * 0x200 +
       *(int *)(*(longlong *)&this->field_0x8 + 0x1d4));
  return 0;
}

// StartEdges @ 14c76b350

int __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::StartEdges
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this)

{
  this->MaxEdgeID =
       (longlong)
       (*(int *)(*(longlong *)&this->field_0x8 + 0x1d0) * 0x200 +
       *(int *)(*(longlong *)&this->field_0x8 + 0x1d4));
  return 0;
}

// StartEdges @ 14c76b380

int __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::StartEdges
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this)

{
  this->MaxEdgeID =
       (longlong)
       (*(int *)(*(longlong *)&this->field_0x8 + 0x1d0) * 0x200 +
       *(int *)(*(longlong *)&this->field_0x8 + 0x1d4));
  return 0;
}

// UpdateNeighborhood @ 14c774420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::UpdateNeighborhood
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,
          FEdgeCollapseInfo *param_1)

{
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> *pTVar1;
  TMap<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
  *this_00;
  FIndexPriorityQueue *pFVar2;
  double *pdVar3;
  FIndex2i_u_0 *pFVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  FDynamicMesh3 *this_01;
  undefined8 uVar13;
  code *pcVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  TKeyInitializer<int_const_&> *pTVar25;
  ForElementType<int> FVar26;
  undefined4 uVar27;
  FIndex2i_u_0 FVar28;
  undefined4 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  bool bVar39;
  int iVar40;
  FMeshConstraints *pFVar41;
  TQuadricError<double> *pTVar42;
  TQuadricError<double> *pTVar43;
  longlong lVar44;
  longlong *plVar45;
  ulonglong uVar46;
  uint uVar47;
  uint uVar48;
  longlong lVar49;
  FScriptContainerElement *pFVar50;
  ForElementType<int> FVar51;
  FSmallListSet *pFVar52;
  int **ppiVar53;
  char cVar54;
  uint uVar55;
  uint uVar56;
  longlong lVar57;
  uint uVar58;
  uint *puVar59;
  longlong lVar60;
  int iVar61;
  longlong lVar62;
  double dVar63;
  float fVar64;
  undefined1 auStackY_b08 [32];
  undefined1 local_ab8 [4];
  uint local_ab4;
  ForElementType<int> local_ab0;
  uint local_aa8 [2];
  FIndex2i_u_0 local_aa0;
  FIndex2i_u_0 local_a98;
  FIndex2i_u_0 local_a90;
  uint local_a88 [2];
  uint local_a80 [2];
  uint local_a78 [2];
  uint local_a70 [2];
  TVector<double>_u_0 local_a68;
  TVector<double>_u_0 local_a50;
  uchar local_a38 [16];
  TKeyInitializer<int_const_&> local_a28;
  TKeyInitializer<int_const_&> local_a20;
  FIndex2i_u_0 *local_a18;
  int *local_a10;
  FIndex2i_u_0 *local_a08;
  int *local_a00;
  FIndex2i_u_0 local_9f8;
  uint local_9f0 [2];
  uchar local_9e8 [8];
  FIndex2i_u_0 local_9e0;
  FIndex2i_u_0 FStack_9d8;
  FIndex2i_u_0 local_9d0;
  FIndex2i_u_0 FStack_9c8;
  TQuadricError<double> local_9b8;
  undefined1 local_968 [24];
  double dStack_950;
  double local_948;
  double dStack_940;
  undefined4 local_938;
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  double local_928;
  double dStack_920;
  TQuadricError<double> local_918;
  double local_8c8;
  double dStack_8c0;
  double local_8b8;
  double dStack_8b0;
  double local_8a8;
  double dStack_8a0;
  double local_898;
  double dStack_890;
  double local_888;
  double dStack_880;
  BaseValueIterator local_878;
  BaseValueIterator local_850;
  BaseValueIterator local_828;
  BaseValueIterator local_800;
  TVector<double>_u_0 local_7d8;
  TVector<double>_u_0 local_7c0;
  uint local_7a8;
  undefined4 uStack_7a4;
  double dStack_7a0;
  double dStack_798;
  int iStack_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  double local_780;
  double dStack_778;
  undefined4 local_770;
  undefined4 uStack_76c;
  undefined4 uStack_768;
  undefined4 uStack_764;
  double local_760;
  double dStack_758;
  double local_750;
  double dStack_748;
  double local_740;
  uint local_738;
  undefined4 uStack_734;
  double dStack_730;
  double dStack_728;
  undefined1 auStack_720 [16];
  double local_710;
  double dStack_708;
  undefined4 local_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  double local_6f0;
  double dStack_6e8;
  double local_6e0;
  double dStack_6d8;
  double local_6d0;
  BaseValueIterator local_6c8;
  TVector<double> local_6a0;
  TVector<double> local_688;
  TVector<double> local_670;
  TVector<double> local_658;
  undefined1 local_640 [16];
  TQuadricError<double> local_630;
  TQuadricError<double> local_5e0;
  TQuadricError<double> local_590;
  TArray<int,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> local_538;
  undefined1 local_428 [48];
  ValueIterator local_3f8;
  ValueIterator local_3d0;
  undefined1 local_3a8 [48];
  ValueIterator local_378;
  ValueIterator local_350;
  undefined1 local_328 [144];
  undefined1 local_298 [144];
  undefined1 local_208 [144];
  undefined1 local_178 [144];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_b08;
  local_a98 = (param_1->RemovedTris).field0_0x0;
  local_aa8[0] = param_1->RemovedVertex;
  uVar12 = param_1->KeptVertex;
  lVar57 = (longlong)(int)uVar12;
  local_9f8 = (param_1->OpposingVerts).field0_0x0;
  if (this->bAllowSeamCollapse == false) goto LAB_14c774863;
  local_a90 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&(param_1->RemovedEdges).field0_0x0._s_0;
  this_00 = &this->seamQuadrics;
  local_aa0 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&(param_1->KeptEdges).field0_0x0._s_0;
  uVar29 = local_a90._s_0.B;
  uVar48 = local_a90._s_0.A;
  if (this->field_0xc8 == '\0') {
    pTVar43 = TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
              ::Find((TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
                      *)this_00,uVar48);
    if (pTVar43 != (TQuadricError<double> *)0x0) {
      local_a08 = &local_aa0;
      TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                  *)this_00,&local_a20,(bool *)&local_a08);
    }
    if ((uVar29 != 0xffffffff) &&
       (pTVar43 = TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
                  ::Find((TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
                          *)this_00,uVar29), pTVar43 != (TQuadricError<double> *)0x0)) {
      local_a00 = &local_aa0._s_0.B;
      ppiVar53 = &local_a00;
      pTVar25 = &local_a20;
LAB_14c7745a7:
      TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                  *)this_00,(TKeyInitializer<int_const_&> *)((longlong)&pTVar25->Key + 4),
                 (bool *)ppiVar53);
    }
  }
  else {
    pFVar41 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                        ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
    uVar47 = local_aa0._s_0.A;
    bVar39 = FMeshConstraints::HasEdgeConstraint(pFVar41,uVar47);
    if (bVar39) {
      local_a18 = &local_aa0;
      TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                  *)this_00,&local_a28,(bool *)&local_a18);
    }
    else {
      local_a88[0] = uVar47;
      if (*(int *)&(this->seamQuadrics).field_0x8 != *(int *)&(this->seamQuadrics).field_0x34) {
        TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                           *)this_00,uVar47,(int *)local_a88);
      }
    }
    if (local_aa0._s_0.B != -1) {
      pFVar41 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                          ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
      uVar27 = local_aa0._s_0.B;
      bVar39 = FMeshConstraints::HasEdgeConstraint(pFVar41,local_aa0._s_0.B);
      if (bVar39) {
        local_a10 = &local_aa0._s_0.B;
        ppiVar53 = &local_a10;
        pTVar25 = &local_a28;
        goto LAB_14c7745a7;
      }
      TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
      ::Remove((TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
                *)this_00,uVar27);
    }
  }
  local_a80[0] = uVar48;
  if (*(int *)&(this->seamQuadrics).field_0x8 != *(int *)&(this->seamQuadrics).field_0x34) {
    TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                       *)this_00,uVar48,(int *)local_a80);
  }
  if ((uVar29 != 0xffffffff) &&
     (local_a78[0] = uVar29,
     *(int *)&(this->seamQuadrics).field_0x8 != *(int *)&(this->seamQuadrics).field_0x34)) {
    TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                       *)this_00,uVar29,(int *)local_a78);
  }
  lVar44 = *(longlong *)&this->field_0x8;
  dVar5 = this->SeamEdgeWeight;
  FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_850,(FSmallListSet *)(lVar44 + 0xb8),uVar12,false);
  FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_6c8,(FSmallListSet *)(lVar44 + 0xb8),uVar12,true);
  while ((((local_850.ListSet != local_6c8.ListSet || (local_850.ListIndex != local_6c8.ListIndex))
          || (local_850.iCur != local_6c8.iCur)) || (local_850.cur_ptr != local_6c8.cur_ptr))) {
    this_01 = *(FDynamicMesh3 **)&this->field_0x8;
    local_a70[0] = local_850.cur_value;
    auVar7 = *(undefined1 (*) [16])
              (*(longlong *)
                ((this_01->Edges).Blocks.AllocatorInstance.Data +
                ((local_850._32_8_ & 0xffffffff) >> 9) * 8) +
              (ulonglong)(local_a70[0] & 0x1ff) * 0x10);
    local_640 = auVar7;
    iVar40 = TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<int>
                       ((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                         *)this_00,local_a70[0],(int *)local_a70);
    if (iVar40 == -1) {
      lVar44 = 0;
    }
    else {
      lVar44 = (longlong)iVar40 * 0x60 + *(longlong *)&this_00->field_0x0;
    }
    pTVar43 = (TQuadricError<double> *)(lVar44 + 8);
    if (lVar44 == 0) {
      pTVar43 = (TQuadricError<double> *)0x0;
    }
    if (pTVar43 != (TQuadricError<double> *)0x0) {
      pFVar50 = (this_01->Vertices).Blocks.AllocatorInstance.Data;
      uVar46 = (ulonglong)(auVar7._0_4_ & 0x1ff);
      lVar44 = *(longlong *)(pFVar50 + ((auVar7._0_8_ & 0xffffffff) >> 9) * 8);
      pdVar3 = (double *)(lVar44 + uVar46 * 0x18);
      local_7d8._s_0.X = *pdVar3;
      local_7d8._s_0.Y = pdVar3[1];
      local_7d8._s_0.Z = *(double *)(lVar44 + 0x10 + uVar46 * 0x18);
      uVar46 = (ulonglong)(auVar7._4_4_ & 0x1ff);
      lVar44 = *(longlong *)(pFVar50 + (auVar7._0_8_ >> 0x29) * 8);
      pdVar3 = (double *)(lVar44 + uVar46 * 0x18);
      local_7c0._s_0.X = *pdVar3;
      local_7c0._s_0.Y = pdVar3[1];
      local_7c0._s_0.Z = *(double *)(lVar44 + 0x10 + uVar46 * 0x18);
      FDynamicMesh3::GetTriNormal(this_01,&local_6a0,auVar7._8_4_);
      pTVar42 = CreateSeamQuadric<double>
                          (&local_630,(TVector<double> *)&local_7d8._s_0,
                           (TVector<double> *)&local_7c0._s_0,&local_6a0);
      dVar17 = pTVar42->Axy;
      pTVar43->Axx = pTVar42->Axx;
      pTVar43->Axy = dVar17;
      dVar17 = pTVar42->Ayy;
      pTVar43->Axz = pTVar42->Axz;
      pTVar43->Ayy = dVar17;
      dVar17 = pTVar42->Azz;
      pTVar43->Ayz = pTVar42->Ayz;
      pTVar43->Azz = dVar17;
      dVar17 = pTVar42->by;
      pTVar43->bx = pTVar42->bx;
      pTVar43->by = dVar17;
      dVar17 = pTVar42->c;
      pTVar43->bz = pTVar42->bz;
      pTVar43->c = dVar17;
      if (auVar7._12_4_ != -1) {
        FDynamicMesh3::GetTriNormal(*(FDynamicMesh3 **)&this->field_0x8,&local_688,auVar7._12_4_);
        pTVar42 = CreateSeamQuadric<double>
                            (&local_5e0,(TVector<double> *)&local_7d8._s_0,
                             (TVector<double> *)&local_7c0._s_0,&local_688);
        TQuadricError<double>::Add(pTVar43,pTVar42);
      }
      dVar17 = dVar5 * pTVar43->Axx;
      dVar18 = dVar5 * pTVar43->Axy;
      auVar7._8_4_ = SUB84(dVar18,0);
      auVar7._0_8_ = dVar17;
      auVar7._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      pTVar43->Axx = dVar17;
      pTVar43->Axy = (double)auVar7._8_8_;
      dVar17 = dVar5 * pTVar43->Axz;
      dVar18 = dVar5 * pTVar43->Ayy;
      auVar8._8_4_ = SUB84(dVar18,0);
      auVar8._0_8_ = dVar17;
      auVar8._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      pTVar43->Axz = dVar17;
      pTVar43->Ayy = (double)auVar8._8_8_;
      dVar17 = dVar5 * pTVar43->Ayz;
      dVar18 = dVar5 * pTVar43->Azz;
      auVar9._8_4_ = SUB84(dVar18,0);
      auVar9._0_8_ = dVar17;
      auVar9._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      pTVar43->Ayz = dVar17;
      pTVar43->Azz = (double)auVar9._8_8_;
      dVar17 = dVar5 * pTVar43->bx;
      dVar18 = dVar5 * pTVar43->by;
      auVar10._8_4_ = SUB84(dVar18,0);
      auVar10._0_8_ = dVar17;
      auVar10._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      pTVar43->bx = dVar17;
      pTVar43->by = (double)auVar10._8_8_;
      dVar17 = dVar5 * pTVar43->bz;
      dVar18 = dVar5 * pTVar43->c;
      auVar11._8_4_ = SUB84(dVar18,0);
      auVar11._0_8_ = dVar17;
      auVar11._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      pTVar43->bz = dVar17;
      pTVar43->c = (double)auVar11._8_8_;
    }
    FSmallListSet::BaseValueIterator::GotoNext(&local_850);
  }
LAB_14c774863:
  uVar48 = local_aa8[0];
  lVar44 = 0;
  uVar47 = 0;
  if (this->bRetainQuadricMemory == false) {
    FDynamicMesh3::VtxTrianglesItr
              (*(FDynamicMesh3 **)&this->field_0x8,
               (TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)local_3a8,uVar12
              );
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_328,
               &local_378,&local_350,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_3a8);
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_208,
               &local_350,&local_350,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_3a8);
    while (((uVar29 = local_328._88_4_, local_328._0_8_ != local_208._0_8_ ||
            (local_328._8_4_ != local_208._8_4_)) ||
           ((local_328._24_4_ != local_208._24_4_ || (local_328._28_4_ != local_208._28_4_))))) {
      uVar58 = (uint)~local_328._88_4_ >> 0x1f;
      uVar48 = uVar47;
      if ((int)local_328._88_4_ < (this->triAreas).ArrayNum) {
        uVar48 = uVar58;
      }
      if ((uVar48 == 0) &&
         (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar39)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      lVar49 = (longlong)(int)uVar29;
      dVar5 = *(double *)((this->triAreas).AllocatorInstance.Data + lVar49 * 8);
      uVar48 = uVar47;
      if ((int)uVar29 < (this->triQuadrics).ArrayNum) {
        uVar48 = uVar58;
      }
      if ((uVar48 == 0) &&
         (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar39)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar50 = (this->triQuadrics).AllocatorInstance.Data;
      local_8c8 = *(double *)(pFVar50 + lVar49 * 0x50);
      dStack_8c0 = *(double *)(pFVar50 + lVar49 * 0x50 + 8);
      local_8b8 = *(double *)(pFVar50 + lVar49 * 0x50 + 0x10);
      dStack_8b0 = *(double *)(pFVar50 + lVar49 * 0x50 + 0x10 + 8);
      local_8a8 = *(double *)(pFVar50 + lVar49 * 0x50 + 0x20);
      dStack_8a0 = *(double *)(pFVar50 + lVar49 * 0x50 + 0x20 + 8);
      local_898 = *(double *)(pFVar50 + lVar49 * 0x50 + 0x30);
      dStack_890 = *(double *)(pFVar50 + lVar49 * 0x50 + 0x30 + 8);
      local_888 = *(double *)(pFVar50 + lVar49 * 0x50 + 0x40);
      dStack_880 = *(double *)(pFVar50 + lVar49 * 0x50 + 0x40 + 8);
      FDynamicMesh3::GetTriInfo
                (*(FDynamicMesh3 **)&this->field_0x8,uVar29,&local_658,(double *)&local_a90,
                 &local_670);
      TQuadricError<double>::TQuadricError<double>(&local_918,&local_658,&local_670);
      FVar28 = local_a90;
      uVar48 = uVar47;
      if ((int)uVar29 < (this->triAreas).ArrayNum) {
        uVar48 = uVar58;
      }
      if ((uVar48 == 0) &&
         (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar39)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      dVar6 = local_918.c;
      dVar63 = local_918.bz;
      dVar24 = local_918.by;
      dVar23 = local_918.bx;
      dVar22 = local_918.Azz;
      dVar21 = local_918.Ayz;
      dVar20 = local_918.Ayy;
      dVar19 = local_918.Axz;
      dVar18 = local_918.Axy;
      dVar17 = local_918.Axx;
      *(FIndex2i_u_0 *)((this->triAreas).AllocatorInstance.Data + lVar49 * 8) = FVar28;
      uVar48 = uVar47;
      if ((int)uVar29 < (this->triQuadrics).ArrayNum) {
        uVar48 = uVar58;
      }
      if ((uVar48 == 0) &&
         (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar39)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      dVar38 = dStack_880;
      dVar37 = local_888;
      dVar36 = dStack_890;
      dVar35 = local_898;
      dVar34 = dStack_8a0;
      dVar33 = local_8a8;
      dVar32 = dStack_8b0;
      dVar31 = local_8b8;
      dVar30 = dStack_8c0;
      pFVar50 = (this->triQuadrics).AllocatorInstance.Data;
      puVar59 = local_9f0;
      lVar62 = 3;
      *(double *)(pFVar50 + lVar49 * 0x50) = dVar17;
      *(double *)(pFVar50 + lVar49 * 0x50 + 8) = dVar18;
      *(double *)(pFVar50 + lVar49 * 0x50 + 0x10) = dVar19;
      *(double *)(pFVar50 + lVar49 * 0x50 + 0x10 + 8) = dVar20;
      *(double *)(pFVar50 + lVar49 * 0x50 + 0x20) = dVar21;
      *(double *)(pFVar50 + lVar49 * 0x50 + 0x20 + 8) = dVar22;
      *(double *)(pFVar50 + lVar49 * 0x50 + 0x30) = dVar23;
      *(double *)(pFVar50 + lVar49 * 0x50 + 0x30 + 8) = dVar24;
      *(double *)(pFVar50 + lVar49 * 0x50 + 0x40) = dVar63;
      *(double *)(pFVar50 + lVar49 * 0x50 + 0x40 + 8) = dVar6;
      lVar49 = *(longlong *)
                (*(longlong *)(*(longlong *)&this->field_0x8 + 0x130) +
                (ulonglong)((uint)uVar29 >> 9) * 8);
      local_9f0 = (uint  [2])*(undefined8 *)(lVar49 + (ulonglong)(uVar29 & 0x1ff) * 0xc);
      local_ab0 = (ForElementType<int>)local_8c8;
      local_9e8._0_4_ = *(undefined4 *)(lVar49 + 8 + (ulonglong)(uVar29 & 0x1ff) * 0xc);
      FVar51 = (ForElementType<int>)local_8c8;
      do {
        uVar48 = *puVar59;
        lVar49 = (longlong)(int)uVar48;
        if (uVar48 != uVar12) {
          uVar58 = uVar47;
          if ((int)uVar48 < (this->vertQuadrics).ArrayNum) {
            uVar58 = ~uVar48 >> 0x1f;
          }
          if ((uVar58 == 0) &&
             (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             FVar51 = local_ab0, bVar39)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar50 = (this->vertQuadrics).AllocatorInstance.Data;
          *(double *)(pFVar50 + lVar49 * 0x50) =
               *(double *)(pFVar50 + lVar49 * 0x50) - (double)FVar51 * dVar5;
          *(double *)(pFVar50 + lVar49 * 0x50 + 8) =
               *(double *)(pFVar50 + lVar49 * 0x50 + 8) - dVar30 * dVar5;
          *(double *)(pFVar50 + lVar49 * 0x50 + 0x10) =
               *(double *)(pFVar50 + lVar49 * 0x50 + 0x10) - dVar31 * dVar5;
          *(double *)(pFVar50 + lVar49 * 0x50 + 0x18) =
               *(double *)(pFVar50 + lVar49 * 0x50 + 0x18) - dVar32 * dVar5;
          *(double *)(pFVar50 + lVar49 * 0x50 + 0x20) =
               *(double *)(pFVar50 + lVar49 * 0x50 + 0x20) - dVar33 * dVar5;
          *(double *)(pFVar50 + lVar49 * 0x50 + 0x28) =
               *(double *)(pFVar50 + lVar49 * 0x50 + 0x28) - dVar34 * dVar5;
          *(double *)(pFVar50 + lVar49 * 0x50 + 0x30) =
               *(double *)(pFVar50 + lVar49 * 0x50 + 0x30) - dVar35 * dVar5;
          *(double *)(pFVar50 + lVar49 * 0x50 + 0x38) =
               *(double *)(pFVar50 + lVar49 * 0x50 + 0x38) - dVar36 * dVar5;
          *(double *)(pFVar50 + lVar49 * 0x50 + 0x40) =
               *(double *)(pFVar50 + lVar49 * 0x50 + 0x40) - dVar37 * dVar5;
          *(double *)(pFVar50 + lVar49 * 0x50 + 0x48) =
               *(double *)(pFVar50 + lVar49 * 0x50 + 0x48) - dVar38 * dVar5;
          uVar58 = uVar47;
          if ((int)uVar48 < (this->vertQuadrics).ArrayNum) {
            uVar58 = ~uVar48 >> 0x1f;
          }
          if ((uVar58 == 0) &&
             (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar39)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          lVar49 = (longlong)(int)uVar48;
          pFVar50 = (this->vertQuadrics).AllocatorInstance.Data;
          *(double *)(pFVar50 + lVar49 * 0x50) =
               local_918.Axx * (double)local_a90 + *(double *)(pFVar50 + lVar49 * 0x50);
          *(double *)(pFVar50 + lVar49 * 0x50 + 8) =
               local_918.Axy * (double)local_a90 + *(double *)(pFVar50 + lVar49 * 0x50 + 8);
          *(double *)(pFVar50 + lVar49 * 0x50 + 0x10) =
               local_918.Axz * (double)local_a90 + *(double *)(pFVar50 + lVar49 * 0x50 + 0x10);
          *(double *)(pFVar50 + lVar49 * 0x50 + 0x18) =
               local_918.Ayy * (double)local_a90 + *(double *)(pFVar50 + lVar49 * 0x50 + 0x18);
          *(double *)(pFVar50 + lVar49 * 0x50 + 0x20) =
               local_918.Ayz * (double)local_a90 + *(double *)(pFVar50 + lVar49 * 0x50 + 0x20);
          *(double *)(pFVar50 + lVar49 * 0x50 + 0x28) =
               local_918.Azz * (double)local_a90 + *(double *)(pFVar50 + lVar49 * 0x50 + 0x28);
          *(double *)(pFVar50 + lVar49 * 0x50 + 0x30) =
               local_918.bx * (double)local_a90 + *(double *)(pFVar50 + lVar49 * 0x50 + 0x30);
          *(double *)(pFVar50 + lVar49 * 0x50 + 0x38) =
               local_918.by * (double)local_a90 + *(double *)(pFVar50 + lVar49 * 0x50 + 0x38);
          *(double *)(pFVar50 + lVar49 * 0x50 + 0x40) =
               local_918.bz * (double)local_a90 + *(double *)(pFVar50 + lVar49 * 0x50 + 0x40);
          *(double *)(pFVar50 + lVar49 * 0x50 + 0x48) =
               local_918.c * (double)local_a90 + *(double *)(pFVar50 + lVar49 * 0x50 + 0x48);
          FVar51 = local_ab0;
        }
        puVar59 = puVar59 + 1;
        lVar62 = lVar62 + -1;
      } while (lVar62 != 0);
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_328);
    }
    if (local_208._96_8_ != 0) {
      plVar45 = (longlong *)(local_208 + 0x70);
      if ((longlong *)local_208._136_8_ != (longlong *)0x0) {
        plVar45 = (longlong *)local_208._136_8_;
      }
      (**(code **)(*plVar45 + 0x10))();
    }
    if (local_328._96_8_ != 0) {
      plVar45 = (longlong *)(local_328 + 0x70);
      if ((longlong *)local_328._136_8_ != (longlong *)0x0) {
        plVar45 = (longlong *)local_328._136_8_;
      }
      (**(code **)(*plVar45 + 0x10))();
    }
    if (local_3a8._0_8_ != 0) {
      plVar45 = (longlong *)(local_3a8 + 0x10);
      if ((longlong *)local_3a8._40_8_ != (longlong *)0x0) {
        plVar45 = (longlong *)local_3a8._40_8_;
      }
      (**(code **)(*plVar45 + 0x10))();
    }
    lVar49 = 2;
    do {
      uVar48 = *(uint *)((longlong)&local_a98 + lVar44);
      if (uVar48 != 0xffffffff) {
        uVar58 = uVar47;
        if ((int)uVar48 < (this->triAreas).ArrayNum) {
          uVar58 = ~uVar48 >> 0x1f;
        }
        if ((uVar58 == 0) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar39)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        uVar58 = *(uint *)((longlong)&local_a98 + lVar44);
        lVar62 = (longlong)(int)uVar58;
        dVar5 = *(double *)((this->triAreas).AllocatorInstance.Data + (longlong)(int)uVar48 * 8);
        uVar48 = uVar47;
        if ((int)uVar58 < (this->triQuadrics).ArrayNum) {
          uVar48 = ~uVar58 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar39)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar50 = (this->triQuadrics).AllocatorInstance.Data;
        uVar48 = *(uint *)((longlong)&local_9f8 + lVar44);
        lVar60 = (longlong)(int)uVar48;
        auVar7 = *(undefined1 (*) [16])(pFVar50 + lVar62 * 0x50);
        auVar8 = *(undefined1 (*) [16])(pFVar50 + lVar62 * 0x50 + 0x10);
        auVar9 = *(undefined1 (*) [16])(pFVar50 + lVar62 * 0x50 + 0x20);
        auVar10 = *(undefined1 (*) [16])(pFVar50 + lVar62 * 0x50 + 0x30);
        auVar11 = *(undefined1 (*) [16])(pFVar50 + lVar62 * 0x50 + 0x40);
        uVar56 = uVar47;
        if ((int)uVar48 < (this->vertQuadrics).ArrayNum) {
          uVar56 = ~uVar48 >> 0x1f;
        }
        if ((uVar56 == 0) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar39)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar50 = (this->vertQuadrics).AllocatorInstance.Data;
        *(double *)(pFVar50 + lVar60 * 0x50) =
             *(double *)(pFVar50 + lVar60 * 0x50) - dVar5 * auVar7._0_8_;
        *(double *)(pFVar50 + lVar60 * 0x50 + 8) =
             *(double *)(pFVar50 + lVar60 * 0x50 + 8) - dVar5 * auVar7._8_8_;
        *(double *)(pFVar50 + lVar60 * 0x50 + 0x10) =
             *(double *)(pFVar50 + lVar60 * 0x50 + 0x10) - dVar5 * auVar8._0_8_;
        *(double *)(pFVar50 + lVar60 * 0x50 + 0x18) =
             *(double *)(pFVar50 + lVar60 * 0x50 + 0x18) - dVar5 * auVar8._8_8_;
        *(double *)(pFVar50 + lVar60 * 0x50 + 0x20) =
             *(double *)(pFVar50 + lVar60 * 0x50 + 0x20) - dVar5 * auVar9._0_8_;
        *(double *)(pFVar50 + lVar60 * 0x50 + 0x28) =
             *(double *)(pFVar50 + lVar60 * 0x50 + 0x28) - dVar5 * auVar9._8_8_;
        *(double *)(pFVar50 + lVar60 * 0x50 + 0x30) =
             *(double *)(pFVar50 + lVar60 * 0x50 + 0x30) - dVar5 * auVar10._0_8_;
        *(double *)(pFVar50 + lVar60 * 0x50 + 0x38) =
             *(double *)(pFVar50 + lVar60 * 0x50 + 0x38) - dVar5 * auVar10._8_8_;
        *(double *)(pFVar50 + lVar60 * 0x50 + 0x40) =
             *(double *)(pFVar50 + lVar60 * 0x50 + 0x40) - dVar5 * auVar11._0_8_;
        *(double *)(pFVar50 + lVar60 * 0x50 + 0x48) =
             *(double *)(pFVar50 + lVar60 * 0x50 + 0x48) - dVar5 * auVar11._8_8_;
        uVar48 = uVar47;
        if ((int)uVar58 < (this->triQuadrics).ArrayNum) {
          uVar48 = ~uVar58 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar39)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar62 = (longlong)(int)uVar58;
        pFVar50 = (this->triQuadrics).AllocatorInstance.Data;
        *(undefined8 *)(pFVar50 + lVar62 * 0x50) = 0;
        *(undefined8 *)(pFVar50 + lVar62 * 0x50 + 8) = 0;
        *(undefined8 *)(pFVar50 + lVar62 * 0x50 + 0x10) = 0;
        *(undefined8 *)(pFVar50 + lVar62 * 0x50 + 0x18) = 0;
        *(undefined8 *)(pFVar50 + lVar62 * 0x50 + 0x20) = 0;
        *(undefined8 *)(pFVar50 + lVar62 * 0x50 + 0x28) = 0;
        *(undefined8 *)(pFVar50 + lVar62 * 0x50 + 0x30) = 0;
        *(undefined8 *)(pFVar50 + lVar62 * 0x50 + 0x38) = 0;
        *(undefined8 *)(pFVar50 + lVar62 * 0x50 + 0x40) = 0;
        *(undefined8 *)(pFVar50 + lVar62 * 0x50 + 0x48) = 0;
        uVar48 = *(uint *)((longlong)&local_a98 + lVar44);
        uVar58 = uVar47;
        if ((int)uVar48 < (this->triAreas).ArrayNum) {
          uVar58 = ~uVar48 >> 0x1f;
        }
        if ((uVar58 == 0) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar39)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        *(undefined8 *)((this->triAreas).AllocatorInstance.Data + (longlong)(int)uVar48 * 8) = 0;
      }
      lVar44 = lVar44 + 4;
      lVar49 = lVar49 + -1;
    } while (lVar49 != 0);
    dVar63 = 0.0;
    dVar5 = 0.0;
    dVar17 = 0.0;
    dVar18 = 0.0;
    dVar19 = 0.0;
    dVar20 = 0.0;
    dVar21 = 0.0;
    dVar22 = 0.0;
    dVar23 = 0.0;
    dVar24 = 0.0;
    FDynamicMesh3::VtxTrianglesItr
              (*(FDynamicMesh3 **)&this->field_0x8,
               (TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)local_428,uVar12
              );
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_298,
               &local_3f8,&local_3d0,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_428);
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_178,
               &local_3d0,&local_3d0,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_428);
    while( true ) {
      uVar29 = local_298._88_4_;
      if ((((local_298._0_8_ == local_178._0_8_) && (local_298._8_4_ == local_178._8_4_)) &&
          (local_298._24_4_ == local_178._24_4_)) && (local_298._28_4_ == local_178._28_4_)) break;
      lVar44 = (longlong)(int)local_298._88_4_;
      uVar58 = ~local_298._88_4_;
      uVar48 = uVar47;
      if ((int)local_298._88_4_ < (this->triQuadrics).ArrayNum) {
        uVar48 = uVar58 >> 0x1f;
      }
      if ((uVar48 == 0) &&
         (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar39)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar50 = (this->triQuadrics).AllocatorInstance.Data + lVar44 * 0x50;
      uVar48 = uVar47;
      if ((int)uVar29 < (this->triAreas).ArrayNum) {
        uVar48 = uVar58 >> 0x1f;
      }
      if ((uVar48 == 0) &&
         (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar39)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      dVar6 = *(double *)((this->triAreas).AllocatorInstance.Data + lVar44 * 8);
      dVar24 = dVar24 + dVar6 * *(double *)pFVar50;
      dVar23 = dVar23 + dVar6 * *(double *)(pFVar50 + 8);
      dVar22 = dVar22 + dVar6 * *(double *)(pFVar50 + 0x10);
      dVar21 = dVar21 + dVar6 * *(double *)(pFVar50 + 0x18);
      dVar20 = dVar20 + dVar6 * *(double *)(pFVar50 + 0x20);
      dVar19 = dVar19 + dVar6 * *(double *)(pFVar50 + 0x28);
      dVar18 = dVar18 + dVar6 * *(double *)(pFVar50 + 0x30);
      dVar17 = dVar17 + dVar6 * *(double *)(pFVar50 + 0x38);
      dVar5 = dVar5 + dVar6 * *(double *)(pFVar50 + 0x40);
      dVar63 = dVar63 + dVar6 * *(double *)(pFVar50 + 0x48);
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_298);
    }
    if (local_178._96_8_ != 0) {
      plVar45 = (longlong *)(local_178 + 0x70);
      if ((longlong *)local_178._136_8_ != (longlong *)0x0) {
        plVar45 = (longlong *)local_178._136_8_;
      }
      (**(code **)(*plVar45 + 0x10))();
    }
    if (local_298._96_8_ != 0) {
      plVar45 = (longlong *)(local_298 + 0x70);
      if ((longlong *)local_298._136_8_ != (longlong *)0x0) {
        plVar45 = (longlong *)local_298._136_8_;
      }
      (**(code **)(*plVar45 + 0x10))();
    }
    if (local_428._0_8_ != 0) {
      plVar45 = (longlong *)(local_428 + 0x10);
      if ((longlong *)local_428._40_8_ != (longlong *)0x0) {
        plVar45 = (longlong *)local_428._40_8_;
      }
      (**(code **)(*plVar45 + 0x10))();
    }
    if ((int)uVar12 < (this->vertQuadrics).ArrayNum) {
      uVar47 = ~uVar12 >> 0x1f;
    }
    if ((uVar47 == 0) &&
       (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar39)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pFVar50 = (this->vertQuadrics).AllocatorInstance.Data;
    *(double *)(pFVar50 + lVar57 * 0x50) = dVar24;
    *(double *)(pFVar50 + lVar57 * 0x50 + 8) = dVar23;
    auVar15._8_4_ = SUB84(dVar21,0);
    auVar15._0_8_ = dVar22;
    auVar15._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    *(undefined1 (*) [16])(pFVar50 + lVar57 * 0x50 + 0x10) = auVar15;
    *(double *)(pFVar50 + lVar57 * 0x50 + 0x20) = dVar20;
    *(double *)(pFVar50 + lVar57 * 0x50 + 0x20 + 8) = dVar19;
    auVar16._8_4_ = SUB84(dVar17,0);
    auVar16._0_8_ = dVar18;
    auVar16._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    *(undefined1 (*) [16])(pFVar50 + lVar57 * 0x50 + 0x30) = auVar16;
    *(double *)(pFVar50 + lVar57 * 0x50 + 0x40) = dVar5;
    *(double *)(pFVar50 + lVar57 * 0x50 + 0x40 + 8) = dVar63;
  }
  else {
    uVar58 = uVar47;
    if ((int)local_aa8[0] < (this->vertQuadrics).ArrayNum) {
      uVar58 = ~local_aa8[0] >> 0x1f;
    }
    if ((uVar58 == 0) &&
       (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar39)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pFVar50 = (this->vertQuadrics).AllocatorInstance.Data;
    uVar58 = uVar47;
    if ((int)uVar12 < (this->vertQuadrics).ArrayNum) {
      uVar58 = ~uVar12 >> 0x1f;
    }
    if ((uVar58 == 0) &&
       (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar39)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    lVar57 = lVar57 * 0x50;
    pTVar43 = TQuadricError<double>::TQuadricError<double>
                        (&local_590,
                         (TQuadricError<double> *)
                         ((this->vertQuadrics).AllocatorInstance.Data + lVar57),
                         (TQuadricError<double> *)(pFVar50 + (longlong)(int)uVar48 * 0x50));
    dVar5 = pTVar43->Axx;
    dVar17 = pTVar43->Axy;
    dVar18 = pTVar43->Axz;
    dVar19 = pTVar43->Ayy;
    dVar20 = pTVar43->Ayz;
    dVar21 = pTVar43->Azz;
    dVar22 = pTVar43->bx;
    dVar23 = pTVar43->by;
    dVar24 = pTVar43->bz;
    dVar63 = pTVar43->c;
    if ((int)uVar12 < (this->vertQuadrics).ArrayNum) {
      uVar47 = ~uVar12 >> 0x1f;
    }
    if ((uVar47 == 0) &&
       (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar39)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pFVar50 = (this->vertQuadrics).AllocatorInstance.Data;
    *(double *)(pFVar50 + lVar57) = dVar5;
    *(double *)(pFVar50 + lVar57 + 8) = dVar17;
    *(double *)(pFVar50 + lVar57 + 0x10) = dVar18;
    *(double *)(pFVar50 + lVar57 + 0x10 + 8) = dVar19;
    *(double *)(pFVar50 + lVar57 + 0x20) = dVar20;
    *(double *)(pFVar50 + lVar57 + 0x20 + 8) = dVar21;
    *(double *)(pFVar50 + lVar57 + 0x30) = dVar22;
    *(double *)(pFVar50 + lVar57 + 0x30 + 8) = dVar23;
    *(double *)(pFVar50 + lVar57 + 0x40) = dVar24;
    *(double *)(pFVar50 + lVar57 + 0x40 + 8) = dVar63;
  }
  FVar51 = (ForElementType<int>)(*(longlong *)&this->field_0x8 + 0xb8);
  local_ab0 = FVar51;
  if (this->bRetainQuadricMemory == false) {
    local_538.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_538.ArrayNum = 0;
    local_538.ArrayMax = 0x40;
    FSmallListSet::BaseValueIterator::BaseValueIterator
              (&local_878,(FSmallListSet *)FVar51,uVar12,false);
    while ((((iVar40 = local_538.ArrayNum, (ForElementType<int>)local_878.ListSet != FVar51 ||
             (local_878.ListIndex != uVar12)) || (local_878.iCur != -1)) ||
           (local_878.cur_ptr != -1))) {
      local_ab4 = local_878.cur_value;
      FVar51 = (ForElementType<int>)&local_538;
      if (local_538.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar51 = local_538.AllocatorInstance.SecondaryData;
      }
      if ((ulonglong)FVar51 <= &local_ab4) {
        FVar51 = (ForElementType<int>)&local_538;
        if (local_538.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar51 = local_538.AllocatorInstance.SecondaryData;
        }
        if ((&local_ab4 < (uint *)((longlong)FVar51 + (longlong)local_538.ArrayMax * 4)) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar39)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      if (local_538.ArrayNum == local_538.ArrayMax) {
        local_538.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                       (0x404,&local_538.AllocatorInstance,&local_538.ArrayMax);
      }
      FVar51 = (ForElementType<int>)&local_538;
      if (local_538.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar51 = local_538.AllocatorInstance.SecondaryData;
      }
      lVar57 = (longlong)local_538.ArrayNum;
      local_538.ArrayNum = local_538.ArrayNum + 1;
      *(uint *)((longlong)FVar51 + lVar57 * 4) = local_ab4;
      uVar13 = *(undefined8 *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                  (ulonglong)(local_ab4 >> 9) * 8) + (ulonglong)(local_ab4 & 0x1ff) * 0x10);
      uVar48 = (uint)uVar13;
      if (uVar48 == uVar12) {
        uVar48 = (uint)((ulonglong)uVar13 >> 0x20);
      }
      if (uVar48 != 0xffffffff) {
        pFVar52 = (FSmallListSet *)(*(longlong *)&this->field_0x8 + 0xb8);
        FSmallListSet::BaseValueIterator::BaseValueIterator(&local_800,pFVar52,uVar48,false);
        while (((local_800.ListSet != pFVar52 || (local_800.ListIndex != uVar48)) ||
               ((local_800.iCur != -1 || (local_800.cur_ptr != -1))))) {
          local_aa8[0] = local_800.cur_value;
          if (local_aa8[0] != local_ab4) {
            TArray<int,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>::
            AddUniqueImpl<int_const_&>(&local_538,(int *)local_aa8);
          }
          FSmallListSet::BaseValueIterator::GotoNext(&local_800);
        }
      }
      FSmallListSet::BaseValueIterator::GotoNext(&local_878);
      FVar51 = local_ab0;
    }
    uVar46 = (ulonglong)local_538.ArrayNum;
    FVar51 = (ForElementType<int>)&local_538;
    if (local_538.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar51 = local_538.AllocatorInstance.SecondaryData;
    }
    local_ab0 = (ForElementType<int>)((longlong)FVar51 + uVar46 * 4);
    while( true ) {
      FVar26 = local_ab0;
      if ((uint)uVar46 != iVar40) {
        local_ab8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_ab8);
      }
      if (FVar51 == FVar26) break;
      uVar12 = *(uint *)FVar51;
      pFVar4 = (FIndex2i_u_0 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                 (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 0x10);
      local_9d0 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar4->_s_0;
      FStack_9c8 = pFVar4[1];
      AssembleEdgeQuadric(this,(TQuadricError<double> *)local_968,(FEdge *)&local_9d0._s_0);
      OptimalPoint(this,(TVector<double> *)&local_a50._s_0,uVar12,(TQuadricError<double> *)local_968
                   ,local_9d0._s_0.A,local_9d0._s_0.B);
      dVar17 = (double)CONCAT44(uStack_934,local_938) * local_a50._s_0.X;
      dVar5 = (double)CONCAT44(uStack_92c,uStack_930) * local_a50._s_0.Y;
      fVar64 = (float)((dStack_950 * local_a50._s_0.Y + (double)local_968._8_8_ * local_a50._s_0.X +
                       local_948 * local_a50._s_0.Z) * local_a50._s_0.Y +
                       (local_a50._s_0.Y * (double)local_968._8_8_ +
                        local_a50._s_0.X * (double)local_968._0_8_ +
                       local_a50._s_0.Z * (double)local_968._16_8_) * local_a50._s_0.X +
                       (local_948 * local_a50._s_0.Y + (double)local_968._16_8_ * local_a50._s_0.X +
                       dStack_940 * local_a50._s_0.Z) * local_a50._s_0.Z + dVar5 +
                       local_928 * local_a50._s_0.Z + local_928 * local_a50._s_0.Z + dVar17 +
                       dVar5 + dVar17 + dStack_920);
      dStack_730 = (double)local_968._0_8_;
      dStack_728 = (double)local_968._8_8_;
      auStack_720 = stack0xfffffffffffff6a8;
      local_710 = local_948;
      dStack_708 = dStack_940;
      uVar48 = 0;
      if ((int)uVar12 < (this->EdgeQuadrics).ArrayNum) {
        uVar48 = ~uVar12 >> 0x1f;
      }
      local_700 = local_938;
      uStack_6fc = uStack_934;
      uStack_6f8 = uStack_930;
      uStack_6f4 = uStack_92c;
      local_6f0 = local_928;
      dStack_6e8 = dStack_920;
      local_6d0 = local_a50._s_0.Z;
      local_6e0 = local_a50._s_0.X;
      dStack_6d8 = local_a50._s_0.Y;
      local_738 = uVar12;
      if ((uVar48 == 0) &&
         (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar39)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar50 = (this->EdgeQuadrics).AllocatorInstance.Data;
      lVar57 = (longlong)(int)uVar12 * 0x70;
      *(ulonglong *)(pFVar50 + lVar57) = CONCAT44(uStack_734,local_738);
      *(double *)(pFVar50 + lVar57 + 8) = dStack_730;
      *(double *)(pFVar50 + lVar57 + 0x10) = dStack_728;
      *(undefined8 *)(pFVar50 + lVar57 + 0x10 + 8) = auStack_720._0_8_;
      *(undefined8 *)(pFVar50 + lVar57 + 0x20) = auStack_720._8_8_;
      *(double *)(pFVar50 + lVar57 + 0x20 + 8) = local_710;
      *(double *)(pFVar50 + lVar57 + 0x30) = dStack_708;
      *(ulonglong *)(pFVar50 + lVar57 + 0x30 + 8) = CONCAT44(uStack_6fc,local_700);
      *(ulonglong *)(pFVar50 + lVar57 + 0x40) = CONCAT44(uStack_6f4,uStack_6f8);
      *(double *)(pFVar50 + lVar57 + 0x40 + 8) = local_6f0;
      *(double *)(pFVar50 + lVar57 + 0x50) = dStack_6e8;
      *(double *)(pFVar50 + lVar57 + 0x50 + 8) = local_6e0;
      *(double *)(pFVar50 + lVar57 + 0x60) = dStack_6d8;
      *(double *)(pFVar50 + lVar57 + 0x60 + 8) = local_6d0;
      iVar61 = (this->EdgeQueue).id_to_index.ArrayNum;
      if (iVar61 + 1 < (int)uVar12) {
LAB_14c7763e8:
        cVar54 = (this->EdgeQueue).EnableDebugChecks;
LAB_14c7763f3:
        if (((cVar54 != '\0') &&
            (bVar39 = FIndexPriorityQueue::Contains(&this->EdgeQueue,uVar12), bVar39)) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("Contains(NodeID) == false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0x7d,L""), bVar39)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar61 = (this->EdgeQueue).num_nodes + 1;
        (this->EdgeQueue).num_nodes = iVar61;
        uVar48 = 0;
        if ((int)uVar12 < (this->EdgeQueue).id_to_index.ArrayNum) {
          uVar48 = ~uVar12 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar39)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        *(int *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar12 * 4) =
             iVar61;
        uVar48 = (this->EdgeQueue).num_nodes;
        uVar47 = (this->EdgeQueue).nodes.CurBlock;
        uVar58 = (this->EdgeQueue).nodes.CurBlockUsed;
        uVar56 = uVar47 * 0x200 + uVar58;
        if (uVar48 == uVar56) {
          if (uVar58 == 0x200) {
            if (uVar47 == (this->EdgeQueue).nodes.Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                        (&(this->EdgeQueue).nodes);
            }
            pTVar1 = &(this->EdgeQueue).nodes;
            pTVar1->CurBlock = pTVar1->CurBlock + 1;
            uVar47 = (this->EdgeQueue).nodes.CurBlock;
            (this->EdgeQueue).nodes.CurBlockUsed = 0;
          }
          uVar48 = (this->EdgeQueue).nodes.CurBlockUsed;
LAB_14c776515:
          lVar44 = (longlong)(int)uVar48;
          lVar57 = *(longlong *)
                    ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                    (longlong)(int)uVar47 * 8);
          *(uint *)(lVar57 + lVar44 * 0xc) = uVar12;
          *(float *)(lVar57 + 4 + lVar44 * 0xc) = fVar64;
          *(int *)(lVar57 + 8 + lVar44 * 0xc) = iVar61;
          puVar59 = &(this->EdgeQueue).nodes.CurBlockUsed;
          *puVar59 = *puVar59 + 1;
        }
        else {
          if (uVar56 < uVar48) {
            TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                      (&(this->EdgeQueue).nodes,uVar48);
            uVar48 = (this->EdgeQueue).nodes.CurBlockUsed;
            if (uVar48 == 0x200) {
              if ((this->EdgeQueue).nodes.CurBlock == (this->EdgeQueue).nodes.Blocks.ArrayNum - 1U)
              {
                TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                          (&(this->EdgeQueue).nodes);
              }
              pTVar1 = &(this->EdgeQueue).nodes;
              pTVar1->CurBlock = pTVar1->CurBlock + 1;
              uVar48 = 0;
              (this->EdgeQueue).nodes.CurBlockUsed = 0;
            }
            uVar47 = (this->EdgeQueue).nodes.CurBlock;
            goto LAB_14c776515;
          }
          uVar46 = (ulonglong)(uVar48 & 0x1ff);
          lVar57 = *(longlong *)
                    ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar48 >> 9) * 8);
          *(uint *)(lVar57 + uVar46 * 0xc) = uVar12;
          *(float *)(lVar57 + 4 + uVar46 * 0xc) = fVar64;
          *(int *)(lVar57 + 8 + uVar46 * 0xc) = iVar61;
        }
        uVar12 = (this->EdgeQueue).num_nodes;
        FIndexPriorityQueue::move_up
                  (&this->EdgeQueue,
                   *(int *)(*(longlong *)
                             ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar12 >> 9) * 8) + 8 + (ulonglong)(uVar12 & 0x1ff) * 0xc))
        ;
        uVar46 = (ulonglong)(uint)local_538.ArrayNum;
        FVar51 = (ForElementType<int>)((longlong)FVar51 + 4);
      }
      else {
        uVar48 = 0;
        if ((int)uVar12 < iVar61) {
          uVar48 = ~uVar12 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar39)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        uVar48 = *(uint *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data +
                          (longlong)(int)uVar12 * 4);
        if (((int)uVar48 < 1) || ((this->EdgeQueue).num_nodes < (int)uVar48)) goto LAB_14c7763e8;
        pFVar2 = &this->EdgeQueue;
        cVar54 = pFVar2->EnableDebugChecks;
        if (*(int *)(*(longlong *)
                      ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar48 >> 9) * 8) + 8 + (ulonglong)(uVar48 & 0x1ff) * 0xc) < 1)
        goto LAB_14c7763f3;
        if ((((bool)cVar54 != false) &&
            (bVar39 = FIndexPriorityQueue::Contains(pFVar2,uVar12), !bVar39)) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("Contains(NodeID) == true",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0xb0,L""), bVar39)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        uVar48 = 0;
        if ((int)uVar12 < (this->EdgeQueue).id_to_index.ArrayNum) {
          uVar48 = ~uVar12 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar39)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        uVar12 = *(uint *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data +
                          (longlong)(int)uVar12 * 4);
        uVar46 = (ulonglong)(uVar12 & 0x1ff);
        lVar57 = *(longlong *)
                  ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar12 >> 9) * 8);
        local_a38._0_4_ = (undefined4)*(undefined8 *)(lVar57 + uVar46 * 0xc);
        local_a38._4_4_ = fVar64;
        *(undefined8 *)(lVar57 + uVar46 * 0xc) = local_a38._0_8_;
        *(undefined4 *)(lVar57 + 8 + uVar46 * 0xc) = *(undefined4 *)(lVar57 + 8 + uVar46 * 0xc);
        FIndexPriorityQueue::on_node_updated(pFVar2,uVar12);
        uVar46 = (ulonglong)(uint)local_538.ArrayNum;
        FVar51 = (ForElementType<int>)((longlong)FVar51 + 4);
      }
    }
    if (local_538.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_538.AllocatorInstance.SecondaryData);
    }
  }
  else {
    FSmallListSet::BaseValueIterator::BaseValueIterator
              (&local_828,(FSmallListSet *)FVar51,uVar12,false);
    while (((((ForElementType<int>)local_828.ListSet != FVar51 || (local_828.ListIndex != uVar12))
            || (local_828.iCur != -1)) || (local_828.cur_ptr != -1))) {
      uVar47 = local_828.cur_value;
      pFVar4 = (FIndex2i_u_0 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                 ((local_828._32_8_ & 0xffffffff) >> 9) * 8) + (ulonglong)(uVar47 & 0x1ff) * 0x10);
      local_9e0 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar4->_s_0;
      FStack_9d8 = pFVar4[1];
      AssembleEdgeQuadric(this,&local_9b8,(FEdge *)&local_9e0._s_0);
      OptimalPoint(this,(TVector<double> *)&local_a68._s_0,uVar47,&local_9b8,local_9e0._s_0.A,
                   local_9e0._s_0.B);
      dVar17 = (double)CONCAT44(local_9b8.by._4_4_,local_9b8.by._0_4_) * local_a68._s_0.Y;
      dVar5 = (double)CONCAT44(local_9b8.bx._4_4_,local_9b8.bx._0_4_) * local_a68._s_0.X;
      fVar64 = (float)(((double)CONCAT44(local_9b8.Ayy._4_4_,local_9b8.Ayy._0_4_) * local_a68._s_0.Y
                        + local_9b8.Axy * local_a68._s_0.X + local_9b8.Ayz * local_a68._s_0.Z) *
                       local_a68._s_0.Y +
                       (local_a68._s_0.Y * local_9b8.Axy + local_a68._s_0.X * local_9b8.Axx +
                       local_a68._s_0.Z * (double)CONCAT44(local_9b8.Axz._4_4_,local_9b8.Axz._0_4_))
                       * local_a68._s_0.X +
                       (local_9b8.Ayz * local_a68._s_0.Y +
                        (double)CONCAT44(local_9b8.Axz._4_4_,local_9b8.Axz._0_4_) * local_a68._s_0.X
                       + local_9b8.Azz * local_a68._s_0.Z) * local_a68._s_0.Z + dVar17 +
                       local_9b8.bz * local_a68._s_0.Z + local_9b8.bz * local_a68._s_0.Z + dVar5 +
                       dVar5 + dVar17 + local_9b8.c);
      dStack_7a0 = local_9b8.Axx;
      dStack_798 = local_9b8.Axy;
      iStack_790 = local_9b8.Axz._0_4_;
      uStack_78c = local_9b8.Axz._4_4_;
      uStack_788 = local_9b8.Ayy._0_4_;
      uStack_784 = local_9b8.Ayy._4_4_;
      uVar58 = ~uVar47 >> 0x1f;
      local_780 = local_9b8.Ayz;
      dStack_778 = local_9b8.Azz;
      uVar48 = 0;
      if ((int)uVar47 < (this->EdgeQuadrics).ArrayNum) {
        uVar48 = uVar58;
      }
      local_770 = local_9b8.bx._0_4_;
      uStack_76c = local_9b8.bx._4_4_;
      uStack_768 = local_9b8.by._0_4_;
      uStack_764 = local_9b8.by._4_4_;
      local_760 = local_9b8.bz;
      dStack_758 = local_9b8.c;
      local_740 = local_a68._s_0.Z;
      local_750 = local_a68._s_0.X;
      dStack_748 = local_a68._s_0.Y;
      local_7a8 = uVar47;
      if ((uVar48 == 0) &&
         (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar39)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar50 = (this->EdgeQuadrics).AllocatorInstance.Data;
      pFVar2 = &this->EdgeQueue;
      lVar44 = (longlong)(int)uVar47;
      lVar57 = lVar44 * 0x70;
      *(ulonglong *)(pFVar50 + lVar57) = CONCAT44(uStack_7a4,local_7a8);
      *(double *)(pFVar50 + lVar57 + 8) = dStack_7a0;
      *(double *)(pFVar50 + lVar57 + 0x10) = dStack_798;
      *(ulonglong *)(pFVar50 + lVar57 + 0x10 + 8) = CONCAT44(uStack_78c,iStack_790);
      *(ulonglong *)(pFVar50 + lVar57 + 0x20) = CONCAT44(uStack_784,uStack_788);
      *(double *)(pFVar50 + lVar57 + 0x20 + 8) = local_780;
      *(double *)(pFVar50 + lVar57 + 0x30) = dStack_778;
      *(ulonglong *)(pFVar50 + lVar57 + 0x30 + 8) = CONCAT44(uStack_76c,local_770);
      *(ulonglong *)(pFVar50 + lVar57 + 0x40) = CONCAT44(uStack_764,uStack_768);
      *(double *)(pFVar50 + lVar57 + 0x40 + 8) = local_760;
      *(double *)(pFVar50 + lVar57 + 0x50) = dStack_758;
      *(double *)(pFVar50 + lVar57 + 0x50 + 8) = local_750;
      *(double *)(pFVar50 + lVar57 + 0x60) = dStack_748;
      *(double *)(pFVar50 + lVar57 + 0x60 + 8) = local_740;
      iVar40 = (this->EdgeQueue).id_to_index.ArrayNum;
      if (iVar40 + 1 < (int)uVar47) {
LAB_14c775b77:
        cVar54 = pFVar2->EnableDebugChecks;
LAB_14c775b7e:
        if (((cVar54 != '\0') && (bVar39 = FIndexPriorityQueue::Contains(pFVar2,uVar47), bVar39)) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("Contains(NodeID) == false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0x7d,L""), bVar39)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar40 = (this->EdgeQueue).num_nodes + 1;
        (this->EdgeQueue).num_nodes = iVar40;
        uVar48 = 0;
        if ((int)uVar47 < (this->EdgeQueue).id_to_index.ArrayNum) {
          uVar48 = ~uVar47 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar39)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        *(int *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar47 * 4) =
             iVar40;
        uVar48 = (this->EdgeQueue).num_nodes;
        uVar58 = (this->EdgeQueue).nodes.CurBlock;
        uVar56 = (this->EdgeQueue).nodes.CurBlockUsed;
        uVar55 = uVar58 * 0x200 + uVar56;
        if (uVar48 == uVar55) {
          if (uVar56 == 0x200) {
            if (uVar58 == (this->EdgeQueue).nodes.Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                        (&(this->EdgeQueue).nodes);
            }
            pTVar1 = &(this->EdgeQueue).nodes;
            pTVar1->CurBlock = pTVar1->CurBlock + 1;
            uVar58 = (this->EdgeQueue).nodes.CurBlock;
            (this->EdgeQueue).nodes.CurBlockUsed = 0;
          }
          uVar48 = (this->EdgeQueue).nodes.CurBlockUsed;
LAB_14c775ca5:
          lVar44 = (longlong)(int)uVar48;
          lVar57 = *(longlong *)
                    ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                    (longlong)(int)uVar58 * 8);
          *(uint *)(lVar57 + lVar44 * 0xc) = uVar47;
          *(float *)(lVar57 + 4 + lVar44 * 0xc) = fVar64;
          *(int *)(lVar57 + 8 + lVar44 * 0xc) = iVar40;
          puVar59 = &(this->EdgeQueue).nodes.CurBlockUsed;
          *puVar59 = *puVar59 + 1;
        }
        else {
          if (uVar55 < uVar48) {
            TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                      (&(this->EdgeQueue).nodes,uVar48);
            uVar48 = (this->EdgeQueue).nodes.CurBlockUsed;
            if (uVar48 == 0x200) {
              if ((this->EdgeQueue).nodes.CurBlock == (this->EdgeQueue).nodes.Blocks.ArrayNum - 1U)
              {
                TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                          (&(this->EdgeQueue).nodes);
              }
              pTVar1 = &(this->EdgeQueue).nodes;
              pTVar1->CurBlock = pTVar1->CurBlock + 1;
              (this->EdgeQueue).nodes.CurBlockUsed = 0;
              uVar48 = 0;
            }
            uVar58 = (this->EdgeQueue).nodes.CurBlock;
            goto LAB_14c775ca5;
          }
          uVar46 = (ulonglong)(uVar48 & 0x1ff);
          lVar57 = *(longlong *)
                    ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar48 >> 9) * 8);
          *(uint *)(lVar57 + uVar46 * 0xc) = uVar47;
          *(float *)(lVar57 + 4 + uVar46 * 0xc) = fVar64;
          *(int *)(lVar57 + 8 + uVar46 * 0xc) = iVar40;
        }
        uVar48 = (this->EdgeQueue).num_nodes;
        FIndexPriorityQueue::move_up
                  (pFVar2,*(int *)(*(longlong *)
                                    ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                                    (ulonglong)(uVar48 >> 9) * 8) + 8 +
                                  (ulonglong)(uVar48 & 0x1ff) * 0xc));
        FSmallListSet::BaseValueIterator::GotoNext(&local_828);
        FVar51 = local_ab0;
      }
      else {
        uVar48 = 0;
        if ((int)uVar47 < iVar40) {
          uVar48 = uVar58;
        }
        if ((uVar48 == 0) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar39)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        uVar48 = *(uint *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data + lVar44 * 4);
        if (((int)uVar48 < 1) || ((this->EdgeQueue).num_nodes < (int)uVar48)) goto LAB_14c775b77;
        cVar54 = pFVar2->EnableDebugChecks;
        if (*(int *)(*(longlong *)
                      ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar48 >> 9) * 8) + 8 + (ulonglong)(uVar48 & 0x1ff) * 0xc) < 1)
        goto LAB_14c775b7e;
        if ((((bool)cVar54 != false) &&
            (bVar39 = FIndexPriorityQueue::Contains(pFVar2,uVar47), !bVar39)) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("Contains(NodeID) == true",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0xb0,L""), bVar39)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        uVar48 = 0;
        if ((int)uVar47 < (this->EdgeQueue).id_to_index.ArrayNum) {
          uVar48 = uVar58;
        }
        if ((uVar48 == 0) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar39)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        uVar48 = *(uint *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data + lVar44 * 4);
        uVar46 = (ulonglong)(uVar48 & 0x1ff);
        lVar57 = *(longlong *)
                  ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar48 >> 9) * 8);
        local_a38._0_4_ = (undefined4)*(undefined8 *)(lVar57 + uVar46 * 0xc);
        local_a38._4_4_ = fVar64;
        *(undefined8 *)(lVar57 + uVar46 * 0xc) = local_a38._0_8_;
        *(undefined4 *)(lVar57 + 8 + uVar46 * 0xc) = *(undefined4 *)(lVar57 + 8 + uVar46 * 0xc);
        FIndexPriorityQueue::on_node_updated(pFVar2,uVar48);
        FSmallListSet::BaseValueIterator::GotoNext(&local_828);
        FVar51 = local_ab0;
      }
    }
  }
  return;
}

// UpdateNeighborhood @ 14c776630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::UpdateNeighborhood
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,
          FEdgeCollapseInfo *param_1)

{
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> *pTVar1;
  TMap<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
  *this_00;
  FIndexPriorityQueue *pFVar2;
  double *pdVar3;
  FIndex2i_u_0 *pFVar4;
  undefined1 auVar5 [16];
  FDynamicMesh3 *this_01;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  TKeyInitializer<int_const_&> *pTVar12;
  undefined4 uVar13;
  FIndex2i_u_0 FVar14;
  undefined4 uVar15;
  ForElementType<int> FVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  FMeshConstraints *pFVar20;
  TQuadricError<double> *pTVar21;
  TQuadricError<double> *pTVar22;
  TAttrBasedQuadricError<double> *pTVar23;
  longlong lVar24;
  longlong *plVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong lVar28;
  TVolPresQuadricError<double> *pTVar29;
  uint uVar30;
  uint *puVar31;
  FSmallListSet *pFVar32;
  int **ppiVar33;
  ulonglong uVar34;
  char cVar35;
  uint uVar36;
  uint uVar37;
  ForElementType<int> FVar38;
  longlong lVar39;
  FScriptContainerElement *pFVar40;
  FSmallListSet *pFVar41;
  uint uVar42;
  longlong lVar43;
  double dVar44;
  float fVar45;
  undefined1 auStackY_1148 [32];
  undefined1 local_10f8 [4];
  uint local_10f4;
  uint local_10f0 [2];
  FIndex2i_u_0 local_10e8;
  FIndex2i_u_0 local_10e0;
  FIndex2i_u_0 local_10d8;
  uint local_10d0 [2];
  uint local_10c8 [2];
  uint local_10c0 [2];
  uint local_10b8 [2];
  uint local_10b0;
  FIndex2i_u_0 local_10a8;
  FIndex2i_u_0 FStack_10a0;
  TAttrBasedQuadricError<double> local_1098;
  ForElementType<int> local_fb8;
  TKeyInitializer<int_const_&> local_fa8;
  TKeyInitializer<int_const_&> local_fa0;
  FIndex2i_u_0 *local_f98;
  int *local_f90;
  FIndex2i_u_0 *local_f88;
  int *local_f80;
  FIndex2i_u_0 local_f78;
  undefined8 local_f70;
  undefined4 local_f68;
  FIndex2i_u_0 local_f60;
  FIndex2i_u_0 FStack_f58;
  BaseValueIterator local_f50;
  BaseValueIterator local_f28;
  BaseValueIterator local_f00;
  BaseValueIterator local_ed8;
  TVector<double>_u_0 local_eb0;
  TVector<double>_u_0 local_e98;
  TVector<double>_u_0 local_e80;
  TVector<double>_u_0 local_e68;
  TVolPresQuadricError<double> local_e48;
  undefined8 local_dd8;
  longlong lStack_dd0;
  double local_dc8;
  double dStack_dc0;
  double local_db8;
  double dStack_db0;
  double local_da8;
  double dStack_da0;
  double local_d98;
  double dStack_d90;
  double local_d88;
  double local_d80;
  double dStack_d78;
  double local_d70;
  BaseValueIterator local_d68;
  BaseValueIterator local_d40;
  uint local_d18;
  TAttrBasedQuadricError<double> local_d10;
  double local_c30;
  double dStack_c28;
  double local_c20;
  uint local_c18;
  TAttrBasedQuadricError<double> local_c10;
  double local_b30;
  double dStack_b28;
  double local_b20;
  TAttrBasedQuadricError<double> local_b18;
  TVector<double> local_a38;
  TVector<double> local_a20;
  TAttrBasedQuadricError<double> local_a08;
  undefined1 local_928 [16];
  TVector<double> local_918;
  TVector<double> local_900;
  TQuadricError<double> local_8e8;
  TQuadricError<double> local_898;
  undefined1 local_848 [104];
  double dStack_7e0;
  double local_7d8;
  double dStack_7d0;
  TVector<double>_u_0 local_7c8;
  TVector<double>_u_0 local_7b0;
  TVector<double>_u_0 local_798;
  double dStack_780;
  double local_778;
  double dStack_770;
  TAttrBasedQuadricError<double> local_768;
  TAttrBasedQuadricError<double> local_688;
  TArray<int,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> local_5a8;
  undefined1 local_498 [48];
  ValueIterator local_468;
  ValueIterator local_440;
  undefined1 local_418 [48];
  ValueIterator local_3e8;
  ValueIterator local_3c0;
  undefined1 local_398 [144];
  undefined1 local_308 [144];
  undefined1 local_278 [144];
  undefined1 local_1e8 [144];
  TAttrBasedQuadricError<double> local_158;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1148;
  local_10d8 = (param_1->RemovedTris).field0_0x0;
  local_10f0[0] = param_1->RemovedVertex;
  uVar19 = param_1->KeptVertex;
  local_f78 = (param_1->OpposingVerts).field0_0x0;
  if (this->bAllowSeamCollapse == false) goto LAB_14c776aad;
  local_10e0 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&(param_1->RemovedEdges).field0_0x0._s_0;
  this_00 = &this->seamQuadrics;
  local_10e8 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&(param_1->KeptEdges).field0_0x0._s_0;
  uVar15 = local_10e0._s_0.B;
  uVar37 = local_10e0._s_0.A;
  if (this->field_0xc8 == '\0') {
    pTVar21 = TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
              ::Find((TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
                      *)this_00,uVar37);
    if (pTVar21 != (TQuadricError<double> *)0x0) {
      local_f88 = &local_10e8;
      TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                  *)this_00,&local_fa0,(bool *)&local_f88);
    }
    if ((uVar15 != 0xffffffff) &&
       (pTVar21 = TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
                  ::Find((TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
                          *)this_00,uVar15), pTVar21 != (TQuadricError<double> *)0x0)) {
      local_f80 = &local_10e8._s_0.B;
      ppiVar33 = &local_f80;
      pTVar12 = &local_fa0;
LAB_14c7767ed:
      TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                  *)this_00,(TKeyInitializer<int_const_&> *)((longlong)&pTVar12->Key + 4),
                 (bool *)ppiVar33);
    }
  }
  else {
    pFVar20 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                        ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
    uVar30 = local_10e8._s_0.A;
    bVar17 = FMeshConstraints::HasEdgeConstraint(pFVar20,uVar30);
    if (bVar17) {
      local_f98 = &local_10e8;
      TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                  *)this_00,&local_fa8,(bool *)&local_f98);
    }
    else {
      local_10d0[0] = uVar30;
      if (*(int *)&(this->seamQuadrics).field_0x8 != *(int *)&(this->seamQuadrics).field_0x34) {
        TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                           *)this_00,uVar30,(int *)local_10d0);
      }
    }
    if (local_10e8._s_0.B != -1) {
      pFVar20 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                          ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
      uVar13 = local_10e8._s_0.B;
      bVar17 = FMeshConstraints::HasEdgeConstraint(pFVar20,local_10e8._s_0.B);
      if (bVar17) {
        local_f90 = &local_10e8._s_0.B;
        ppiVar33 = &local_f90;
        pTVar12 = &local_fa8;
        goto LAB_14c7767ed;
      }
      TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
      ::Remove((TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
                *)this_00,uVar13);
    }
  }
  local_10c8[0] = uVar37;
  if (*(int *)&(this->seamQuadrics).field_0x8 != *(int *)&(this->seamQuadrics).field_0x34) {
    TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                       *)this_00,uVar37,(int *)local_10c8);
  }
  if ((uVar15 != 0xffffffff) &&
     (local_10c0[0] = uVar15,
     *(int *)&(this->seamQuadrics).field_0x8 != *(int *)&(this->seamQuadrics).field_0x34)) {
    TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                       *)this_00,uVar15,(int *)local_10c0);
  }
  lVar24 = *(longlong *)&this->field_0x8;
  dVar44 = this->SeamEdgeWeight;
  FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_f28,(FSmallListSet *)(lVar24 + 0xb8),uVar19,false);
  FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_d68,(FSmallListSet *)(lVar24 + 0xb8),uVar19,true);
  while ((((local_f28.ListSet != local_d68.ListSet || (local_f28.ListIndex != local_d68.ListIndex))
          || (local_f28.iCur != local_d68.iCur)) || (local_f28.cur_ptr != local_d68.cur_ptr))) {
    this_01 = *(FDynamicMesh3 **)&this->field_0x8;
    local_10b8[0] = local_f28.cur_value;
    auVar5 = *(undefined1 (*) [16])
              (*(longlong *)
                ((this_01->Edges).Blocks.AllocatorInstance.Data +
                ((local_f28._32_8_ & 0xffffffff) >> 9) * 8) +
              (ulonglong)(local_10b8[0] & 0x1ff) * 0x10);
    local_928 = auVar5;
    iVar18 = TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<int>
                       ((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                         *)this_00,local_10b8[0],(int *)local_10b8);
    if (iVar18 == -1) {
      lVar24 = 0;
    }
    else {
      lVar24 = (longlong)iVar18 * 0x60 + *(longlong *)&this_00->field_0x0;
    }
    pTVar21 = (TQuadricError<double> *)(lVar24 + 8);
    if (lVar24 == 0) {
      pTVar21 = (TQuadricError<double> *)0x0;
    }
    if (pTVar21 != (TQuadricError<double> *)0x0) {
      pFVar40 = (this_01->Vertices).Blocks.AllocatorInstance.Data;
      uVar26 = (ulonglong)(auVar5._0_4_ & 0x1ff);
      lVar24 = *(longlong *)(pFVar40 + ((auVar5._0_8_ & 0xffffffff) >> 9) * 8);
      pdVar3 = (double *)(lVar24 + uVar26 * 0x18);
      local_e98._s_0.X = *pdVar3;
      local_e98._s_0.Y = pdVar3[1];
      local_e98._s_0.Z = *(double *)(lVar24 + 0x10 + uVar26 * 0x18);
      uVar26 = (ulonglong)(auVar5._4_4_ & 0x1ff);
      lVar24 = *(longlong *)(pFVar40 + (auVar5._0_8_ >> 0x29) * 8);
      pdVar3 = (double *)(lVar24 + uVar26 * 0x18);
      local_eb0._s_0.X = *pdVar3;
      local_eb0._s_0.Y = pdVar3[1];
      local_eb0._s_0.Z = *(double *)(lVar24 + 0x10 + uVar26 * 0x18);
      FDynamicMesh3::GetTriNormal(this_01,&local_a20,auVar5._8_4_);
      pTVar22 = CreateSeamQuadric<double>
                          (&local_8e8,(TVector<double> *)&local_e98._s_0,
                           (TVector<double> *)&local_eb0._s_0,&local_a20);
      dVar10 = pTVar22->Axy;
      pTVar21->Axx = pTVar22->Axx;
      pTVar21->Axy = dVar10;
      dVar10 = pTVar22->Ayy;
      pTVar21->Axz = pTVar22->Axz;
      pTVar21->Ayy = dVar10;
      dVar10 = pTVar22->Azz;
      pTVar21->Ayz = pTVar22->Ayz;
      pTVar21->Azz = dVar10;
      dVar10 = pTVar22->by;
      pTVar21->bx = pTVar22->bx;
      pTVar21->by = dVar10;
      dVar10 = pTVar22->c;
      pTVar21->bz = pTVar22->bz;
      pTVar21->c = dVar10;
      if (auVar5._12_4_ != -1) {
        FDynamicMesh3::GetTriNormal(*(FDynamicMesh3 **)&this->field_0x8,&local_a38,auVar5._12_4_);
        pTVar22 = CreateSeamQuadric<double>
                            (&local_898,(TVector<double> *)&local_e98._s_0,
                             (TVector<double> *)&local_eb0._s_0,&local_a38);
        TQuadricError<double>::Add(pTVar21,pTVar22);
      }
      dVar10 = dVar44 * pTVar21->Axx;
      dVar11 = dVar44 * pTVar21->Axy;
      auVar5._8_4_ = SUB84(dVar11,0);
      auVar5._0_8_ = dVar10;
      auVar5._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      pTVar21->Axx = dVar10;
      pTVar21->Axy = (double)auVar5._8_8_;
      pTVar21->Axz = pTVar21->Axz * dVar44;
      pTVar21->Ayy = pTVar21->Ayy * dVar44;
      dVar10 = dVar44 * pTVar21->Ayz;
      dVar11 = dVar44 * pTVar21->Azz;
      auVar8._8_4_ = SUB84(dVar11,0);
      auVar8._0_8_ = dVar10;
      auVar8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      pTVar21->Ayz = dVar10;
      pTVar21->Azz = (double)auVar8._8_8_;
      pTVar21->bx = pTVar21->bx * dVar44;
      pTVar21->by = pTVar21->by * dVar44;
      dVar10 = dVar44 * pTVar21->bz;
      dVar11 = dVar44 * pTVar21->c;
      auVar9._8_4_ = SUB84(dVar11,0);
      auVar9._0_8_ = dVar10;
      auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      pTVar21->bz = dVar10;
      pTVar21->c = (double)auVar9._8_8_;
    }
    FSmallListSet::BaseValueIterator::GotoNext(&local_f28);
  }
LAB_14c776aad:
  uVar37 = local_10f0[0];
  lVar24 = 0;
  uVar30 = 0;
  if (this->bRetainQuadricMemory == false) {
    FDynamicMesh3::VtxTrianglesItr
              (*(FDynamicMesh3 **)&this->field_0x8,
               (TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)local_498,uVar19
              );
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_308,
               &local_468,&local_440,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_498);
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_278,
               &local_440,&local_440,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_498);
    uVar37 = (uint)__xmm_80000000000000008000000000000000;
    uVar27 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    while (((uVar15 = local_308._88_4_, local_308._0_8_ != local_278._0_8_ ||
            (local_308._8_4_ != local_278._8_4_)) ||
           ((local_308._24_4_ != local_278._24_4_ || (local_308._28_4_ != local_278._28_4_))))) {
      uVar42 = (uint)~local_308._88_4_ >> 0x1f;
      uVar36 = uVar30;
      if ((int)local_308._88_4_ < (this->triAreas).ArrayNum) {
        uVar36 = uVar42;
      }
      if ((uVar36 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar43 = (longlong)(int)uVar15;
      uVar6 = *(undefined8 *)((this->triAreas).AllocatorInstance.Data + lVar43 * 8);
      uVar36 = uVar30;
      if ((int)uVar15 < (this->triQuadrics).ArrayNum) {
        uVar36 = uVar42;
      }
      if ((uVar36 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar40 = (this->triQuadrics).AllocatorInstance.Data;
      lVar28 = lVar43 * 0xe0;
      local_e48._padding_ = *(longlong *)(pFVar40 + lVar28);
      local_e48._padding_ = *(longlong *)(pFVar40 + lVar28 + 8);
      local_e48._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x10);
      local_e48._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x10 + 8);
      local_e48._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x20);
      local_e48._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x20 + 8);
      local_e48._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x30);
      local_e48._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x30 + 8);
      local_e48._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x40);
      local_e48._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x40 + 8);
      local_e48.PlaneData.N.field0_0x0._s_0.X = (double)*(undefined8 *)(pFVar40 + lVar28 + 0x50);
      local_e48.PlaneData.N.field0_0x0._s_0.Y = (double)*(undefined8 *)(pFVar40 + lVar28 + 0x50 + 8)
      ;
      local_e48.PlaneData.N.field0_0x0._s_0.Z = (double)*(undefined8 *)(pFVar40 + lVar28 + 0x60);
      local_e48.PlaneData.Dist = *(double *)(pFVar40 + lVar28 + 0x60 + 8);
      local_db8 = *(double *)(pFVar40 + lVar28 + 0x90);
      dStack_db0 = *(double *)(pFVar40 + lVar28 + 0x90 + 8);
      local_dd8 = *(undefined8 *)(pFVar40 + lVar28 + 0x70);
      lStack_dd0 = *(longlong *)(pFVar40 + lVar28 + 0x70 + 8);
      local_d98 = *(double *)(pFVar40 + lVar28 + 0xb0);
      dStack_d90 = *(double *)(pFVar40 + lVar28 + 0xb0 + 8);
      local_dc8 = *(double *)(pFVar40 + lVar28 + 0x80);
      dStack_dc0 = *(double *)(pFVar40 + lVar28 + 0x80 + 8);
      local_d80 = *(double *)(pFVar40 + lVar28 + 200);
      dStack_d78 = *(double *)(pFVar40 + lVar28 + 200 + 8);
      local_da8 = *(double *)(pFVar40 + lVar28 + 0xa0);
      dStack_da0 = *(double *)(pFVar40 + lVar28 + 0xa0 + 8);
      local_d88 = *(double *)(pFVar40 + lVar28 + 0xc0);
      local_d70 = *(double *)(pFVar40 + lVar28 + 0xd8);
      ComputeFaceQuadric(this,(TAttrBasedQuadricError<double> *)local_848,uVar15,&local_900,
                         &local_918,(double *)&local_10e0);
      FVar14 = local_10e0;
      uVar36 = uVar30;
      if ((int)uVar15 < (this->triAreas).ArrayNum) {
        uVar36 = uVar42;
      }
      if ((uVar36 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(FIndex2i_u_0 *)((this->triAreas).AllocatorInstance.Data + lVar43 * 8) = FVar14;
      uVar36 = uVar30;
      if ((int)uVar15 < (this->triQuadrics).ArrayNum) {
        uVar36 = uVar42;
      }
      if ((uVar36 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar40 = (this->triQuadrics).AllocatorInstance.Data;
      lVar39 = 3;
      *(undefined8 *)(pFVar40 + lVar28) = local_848._0_8_;
      *(undefined8 *)(pFVar40 + lVar28 + 8) = local_848._8_8_;
      *(undefined8 *)(pFVar40 + lVar28 + 0x10) = local_848._16_8_;
      *(undefined8 *)(pFVar40 + lVar28 + 0x10 + 8) = local_848._24_8_;
      *(undefined8 *)(pFVar40 + lVar28 + 0x20) = local_848._32_8_;
      *(undefined8 *)(pFVar40 + lVar28 + 0x20 + 8) = local_848._40_8_;
      puVar31 = (uint *)&local_f70;
      *(undefined8 *)(pFVar40 + lVar28 + 0x30) = local_848._48_8_;
      *(undefined8 *)(pFVar40 + lVar28 + 0x30 + 8) = local_848._56_8_;
      *(undefined8 *)(pFVar40 + lVar28 + 0x40) = local_848._64_8_;
      *(undefined8 *)(pFVar40 + lVar28 + 0x40 + 8) = local_848._72_8_;
      *(undefined8 *)(pFVar40 + lVar28 + 0x50) = local_848._80_8_;
      *(undefined8 *)(pFVar40 + lVar28 + 0x50 + 8) = local_848._88_8_;
      *(undefined8 *)(pFVar40 + lVar28 + 0x60) = local_848._96_8_;
      *(double *)(pFVar40 + lVar28 + 0x60 + 8) = dStack_7e0;
      *(double *)(pFVar40 + lVar28 + 0x70) = local_7d8;
      *(double *)(pFVar40 + lVar28 + 0x70 + 8) = dStack_7d0;
      *(double *)(pFVar40 + lVar28 + 0x80) = local_7c8._s_0.X;
      *(double *)(pFVar40 + lVar28 + 0x80 + 8) = local_7c8._s_0.Y;
      *(double *)(pFVar40 + lVar28 + 0x90) = local_7c8._s_0.Z;
      *(double *)(pFVar40 + lVar28 + 0x98) = local_7b0._s_0.X;
      *(double *)(pFVar40 + lVar28 + 0x98 + 8) = local_7b0._s_0.Y;
      *(double *)(pFVar40 + lVar28 + 0xa8) = local_7b0._s_0.Z;
      *(double *)(pFVar40 + lVar28 + 0xb0) = local_798._s_0.X;
      *(double *)(pFVar40 + lVar28 + 0xb0 + 8) = local_798._s_0.Y;
      *(double *)(pFVar40 + lVar28 + 0xc0) = local_798._s_0.Z;
      *(double *)(pFVar40 + lVar28 + 0xc0 + 8) = dStack_780;
      *(double *)(pFVar40 + lVar28 + 0xd0) = local_778;
      *(double *)(pFVar40 + lVar28 + 0xd0 + 8) = dStack_770;
      lVar43 = *(longlong *)
                (*(longlong *)(*(longlong *)&this->field_0x8 + 0x130) +
                (ulonglong)((uint)uVar15 >> 9) * 8);
      local_f70 = *(undefined8 *)(lVar43 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
      local_f68 = *(undefined4 *)(lVar43 + 8 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
      do {
        uVar36 = *puVar31;
        if (uVar36 != uVar19) {
          uVar42 = uVar30;
          if ((int)uVar36 < (this->vertQuadrics).ArrayNum) {
            uVar42 = ~uVar36 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          dVar44 = (double)CONCAT44((uint)((ulonglong)uVar6 >> 0x20) ^ uVar27,(uint)uVar6 ^ uVar37);
          pTVar29 = (TVolPresQuadricError<double> *)
                    ((this->vertQuadrics).AllocatorInstance.Data + (longlong)(int)uVar36 * 0xe0);
          TVolPresQuadricError<double>::Add(pTVar29,dVar44,&local_e48);
          pTVar29[1]._padding_ = (longlong)(dVar44 + (double)pTVar29[1]._padding_);
          pTVar29[1]._padding_ = lStack_dd0;
          pTVar29[1]._padding_ = (longlong)(dStack_dc0 * dVar44 + (double)pTVar29[1]._padding_);
          pTVar29[1]._padding_ = (longlong)(local_dc8 * dVar44 + (double)pTVar29[1]._padding_);
          pTVar29[1]._padding_ = (longlong)(local_db8 * dVar44 + (double)pTVar29[1]._padding_);
          pTVar29[1]._padding_ = (longlong)(local_da8 * dVar44 + (double)pTVar29[1]._padding_);
          pTVar29[1]._padding_ = (longlong)(dStack_db0 * dVar44 + (double)pTVar29[1]._padding_);
          pTVar29[1]._padding_ = (longlong)(dStack_da0 * dVar44 + (double)pTVar29[1]._padding_);
          pTVar29[1]._padding_ = (longlong)(dStack_d90 * dVar44 + (double)pTVar29[1]._padding_);
          pTVar29[1]._padding_ = (longlong)(local_d98 * dVar44 + (double)pTVar29[1]._padding_);
          pTVar29[1].PlaneData.N.field0_0x0._s_0.X =
               local_d88 * dVar44 + pTVar29[1].PlaneData.N.field0_0x0._s_0.X;
          pTVar29[1].PlaneData.N.field0_0x0._s_0.Y =
               local_d80 * dVar44 + pTVar29[1].PlaneData.N.field0_0x0._s_0.Y;
          pTVar29[1].PlaneData.N.field0_0x0._s_0.Z =
               dStack_d78 * dVar44 + pTVar29[1].PlaneData.N.field0_0x0._s_0.Z;
          pTVar29[1].PlaneData.Dist = local_d70 * dVar44 + pTVar29[1].PlaneData.Dist;
          uVar36 = *puVar31;
          uVar42 = uVar30;
          if ((int)uVar36 < (this->vertQuadrics).ArrayNum) {
            uVar42 = ~uVar36 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar14 = local_10e0;
          pTVar29 = (TVolPresQuadricError<double> *)
                    ((this->vertQuadrics).AllocatorInstance.Data + (longlong)(int)uVar36 * 0xe0);
          TVolPresQuadricError<double>::Add
                    (pTVar29,(double)local_10e0,(TVolPresQuadricError<double> *)local_848);
          pTVar29[1]._padding_ = (longlong)((double)FVar14 + (double)pTVar29[1]._padding_);
          pTVar29[1]._padding_ = (longlong)dStack_7d0;
          pTVar29[1]._padding_ =
               (longlong)(local_7c8._s_0.Y * (double)FVar14 + (double)pTVar29[1]._padding_);
          pTVar29[1]._padding_ =
               (longlong)(local_7c8._s_0.X * (double)FVar14 + (double)pTVar29[1]._padding_);
          pTVar29[1]._padding_ =
               (longlong)(local_7c8._s_0.Z * (double)FVar14 + (double)pTVar29[1]._padding_);
          pTVar29[1]._padding_ =
               (longlong)(local_7b0._s_0.Y * (double)FVar14 + (double)pTVar29[1]._padding_);
          pTVar29[1]._padding_ =
               (longlong)(local_7b0._s_0.X * (double)FVar14 + (double)pTVar29[1]._padding_);
          pTVar29[1]._padding_ =
               (longlong)(local_7b0._s_0.Z * (double)FVar14 + (double)pTVar29[1]._padding_);
          pTVar29[1]._padding_ =
               (longlong)(local_798._s_0.Y * (double)FVar14 + (double)pTVar29[1]._padding_);
          pTVar29[1]._padding_ =
               (longlong)(local_798._s_0.X * (double)FVar14 + (double)pTVar29[1]._padding_);
          pTVar29[1].PlaneData.N.field0_0x0._s_0.X =
               local_798._s_0.Z * (double)FVar14 + pTVar29[1].PlaneData.N.field0_0x0._s_0.X;
          pTVar29[1].PlaneData.N.field0_0x0._s_0.Y =
               dStack_780 * (double)FVar14 + pTVar29[1].PlaneData.N.field0_0x0._s_0.Y;
          pTVar29[1].PlaneData.N.field0_0x0._s_0.Z =
               local_778 * (double)FVar14 + pTVar29[1].PlaneData.N.field0_0x0._s_0.Z;
          pTVar29[1].PlaneData.Dist = dStack_770 * (double)FVar14 + pTVar29[1].PlaneData.Dist;
        }
        puVar31 = puVar31 + 1;
        lVar39 = lVar39 + -1;
      } while (lVar39 != 0);
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_308);
    }
    if (local_278._96_8_ != 0) {
      plVar25 = (longlong *)(local_278 + 0x70);
      if ((longlong *)local_278._136_8_ != (longlong *)0x0) {
        plVar25 = (longlong *)local_278._136_8_;
      }
      (**(code **)(*plVar25 + 0x10))();
    }
    if (local_308._96_8_ != 0) {
      plVar25 = (longlong *)(local_308 + 0x70);
      if ((longlong *)local_308._136_8_ != (longlong *)0x0) {
        plVar25 = (longlong *)local_308._136_8_;
      }
      (**(code **)(*plVar25 + 0x10))();
    }
    if (local_498._0_8_ != 0) {
      plVar25 = (longlong *)(local_498 + 0x10);
      if ((longlong *)local_498._40_8_ != (longlong *)0x0) {
        plVar25 = (longlong *)local_498._40_8_;
      }
      (**(code **)(*plVar25 + 0x10))();
    }
    lVar43 = 2;
    do {
      uVar36 = *(uint *)((longlong)local_10d0 + lVar24 + -8);
      if (uVar36 != 0xffffffff) {
        uVar42 = uVar30;
        if ((int)uVar36 < (this->triAreas).ArrayNum) {
          uVar42 = ~uVar36 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar6 = *(undefined8 *)((this->triAreas).AllocatorInstance.Data + (longlong)(int)uVar36 * 8)
        ;
        uVar36 = *(uint *)((longlong)local_10d0 + lVar24 + -8);
        uVar42 = uVar30;
        if ((int)uVar36 < (this->triQuadrics).ArrayNum) {
          uVar42 = ~uVar36 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar40 = (this->triQuadrics).AllocatorInstance.Data;
        lVar28 = (longlong)(int)uVar36 * 0xe0;
        uVar36 = *(uint *)((longlong)&local_f78 + lVar24);
        local_a08._padding_ = *(longlong *)(pFVar40 + lVar28);
        local_a08._padding_ = *(longlong *)(pFVar40 + lVar28 + 8);
        local_a08._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x10);
        local_a08._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x10 + 8);
        local_a08._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x20);
        local_a08._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x20 + 8);
        local_a08._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x30);
        local_a08._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x30 + 8);
        local_a08._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x40);
        local_a08._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x40 + 8);
        local_a08._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x50);
        local_a08._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x50 + 8);
        local_a08._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x60);
        local_a08._padding_ = *(longlong *)(pFVar40 + lVar28 + 0x60 + 8);
        local_a08.grad[0].field0_0x0._s_0.Z = (double)*(undefined8 *)(pFVar40 + lVar28 + 0x90);
        local_a08.grad[1].field0_0x0._s_0.X = (double)*(undefined8 *)(pFVar40 + lVar28 + 0x90 + 8);
        local_a08.a = *(double *)(pFVar40 + lVar28 + 0x70);
        local_a08.attrweight = *(double *)(pFVar40 + lVar28 + 0x70 + 8);
        local_a08.grad[2].field0_0x0._s_0.X = (double)*(undefined8 *)(pFVar40 + lVar28 + 0xb0);
        local_a08.grad[2].field0_0x0._s_0.Y = (double)*(undefined8 *)(pFVar40 + lVar28 + 0xb0 + 8);
        local_a08.grad[0].field0_0x0._s_0.X = (double)*(undefined8 *)(pFVar40 + lVar28 + 0x80);
        local_a08.grad[0].field0_0x0._s_0.Y = (double)*(undefined8 *)(pFVar40 + lVar28 + 0x80 + 8);
        local_a08.d[0] = *(double *)(pFVar40 + lVar28 + 200);
        local_a08.d[1] = *(double *)(pFVar40 + lVar28 + 200 + 8);
        local_a08.grad[1].field0_0x0._s_0.Y = (double)*(undefined8 *)(pFVar40 + lVar28 + 0xa0);
        local_a08.grad[1].field0_0x0._s_0.Z = (double)*(undefined8 *)(pFVar40 + lVar28 + 0xa0 + 8);
        local_a08.grad[2].field0_0x0._s_0.Z = (double)*(undefined8 *)(pFVar40 + lVar28 + 0xc0);
        local_a08.d[2] = *(double *)(pFVar40 + lVar28 + 0xd8);
        uVar42 = uVar30;
        if ((int)uVar36 < (this->vertQuadrics).ArrayNum) {
          uVar42 = ~uVar36 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        TAttrBasedQuadricError<double>::Add
                  ((TAttrBasedQuadricError<double> *)
                   ((this->vertQuadrics).AllocatorInstance.Data + (longlong)(int)uVar36 * 0xe0),
                   (double)CONCAT44((uint)((ulonglong)uVar6 >> 0x20) ^ uVar27,(uint)uVar6 ^ uVar37),
                   &local_a08);
        TAttrBasedQuadricError<double>::TAttrBasedQuadricError<double>(&local_b18);
        uVar36 = *(uint *)((longlong)local_10d0 + lVar24 + -8);
        uVar42 = uVar30;
        if ((int)uVar36 < (this->triQuadrics).ArrayNum) {
          uVar42 = ~uVar36 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar40 = (this->triQuadrics).AllocatorInstance.Data;
        lVar28 = (longlong)(int)uVar36 * 0xe0;
        *(longlong *)(pFVar40 + lVar28) = local_b18._padding_;
        *(longlong *)(pFVar40 + lVar28 + 8) = local_b18._padding_;
        *(longlong *)(pFVar40 + lVar28 + 0x10) = local_b18._padding_;
        *(longlong *)(pFVar40 + lVar28 + 0x10 + 8) = local_b18._padding_;
        *(longlong *)(pFVar40 + lVar28 + 0x20) = local_b18._padding_;
        *(longlong *)(pFVar40 + lVar28 + 0x20 + 8) = local_b18._padding_;
        *(longlong *)(pFVar40 + lVar28 + 0x30) = local_b18._padding_;
        *(longlong *)(pFVar40 + lVar28 + 0x30 + 8) = local_b18._padding_;
        *(longlong *)(pFVar40 + lVar28 + 0x40) = local_b18._padding_;
        *(longlong *)(pFVar40 + lVar28 + 0x40 + 8) = local_b18._padding_;
        *(longlong *)(pFVar40 + lVar28 + 0x50) = local_b18._padding_;
        *(longlong *)(pFVar40 + lVar28 + 0x50 + 8) = local_b18._padding_;
        *(longlong *)(pFVar40 + lVar28 + 0x60) = local_b18._padding_;
        *(longlong *)(pFVar40 + lVar28 + 0x60 + 8) = local_b18._padding_;
        *(double *)(pFVar40 + lVar28 + 0x70) = local_b18.a;
        *(double *)(pFVar40 + lVar28 + 0x70 + 8) = local_b18.attrweight;
        *(double *)(pFVar40 + lVar28 + 0x80) = local_b18.grad[0].field0_0x0._s_0.X;
        *(double *)(pFVar40 + lVar28 + 0x80 + 8) = local_b18.grad[0].field0_0x0._s_0.Y;
        *(double *)(pFVar40 + lVar28 + 0x90) = local_b18.grad[0].field0_0x0._s_0.Z;
        *(double *)(pFVar40 + lVar28 + 0x98) = local_b18.grad[1].field0_0x0._s_0.X;
        *(double *)(pFVar40 + lVar28 + 0x98 + 8) = local_b18.grad[1].field0_0x0._s_0.Y;
        *(double *)(pFVar40 + lVar28 + 0xa8) = local_b18.grad[1].field0_0x0._s_0.Z;
        *(double *)(pFVar40 + lVar28 + 0xb0) = local_b18.grad[2].field0_0x0._s_0.X;
        *(double *)(pFVar40 + lVar28 + 0xb0 + 8) = local_b18.grad[2].field0_0x0._s_0.Y;
        *(double *)(pFVar40 + lVar28 + 0xc0) = local_b18.grad[2].field0_0x0._s_0.Z;
        *(double *)(pFVar40 + lVar28 + 0xc0 + 8) = local_b18.d[0];
        *(double *)(pFVar40 + lVar28 + 0xd0) = local_b18.d[1];
        *(double *)(pFVar40 + lVar28 + 0xd0 + 8) = local_b18.d[2];
        uVar42 = uVar30;
        if ((int)uVar36 < (this->triAreas).ArrayNum) {
          uVar42 = ~uVar36 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined8 *)((this->triAreas).AllocatorInstance.Data + (longlong)(int)uVar36 * 8) = 0;
      }
      lVar24 = lVar24 + 4;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    TAttrBasedQuadricError<double>::TAttrBasedQuadricError<double>(&local_1098);
    FDynamicMesh3::VtxTrianglesItr
              (*(FDynamicMesh3 **)&this->field_0x8,
               (TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)local_418,uVar19
              );
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_398,
               &local_3e8,&local_3c0,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_418);
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_1e8,
               &local_3c0,&local_3c0,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_418);
    while ((((uVar15 = local_398._88_4_, local_398._0_8_ != local_1e8._0_8_ ||
             (local_398._8_4_ != local_1e8._8_4_)) || (local_398._24_4_ != local_1e8._24_4_)) ||
           (local_398._28_4_ != local_1e8._28_4_))) {
      lVar24 = (longlong)(int)local_398._88_4_;
      uVar27 = ~local_398._88_4_;
      uVar37 = uVar30;
      if ((int)local_398._88_4_ < (this->triQuadrics).ArrayNum) {
        uVar37 = uVar27 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar40 = (this->triQuadrics).AllocatorInstance.Data + lVar24 * 0xe0;
      uVar37 = uVar30;
      if ((int)uVar15 < (this->triAreas).ArrayNum) {
        uVar37 = uVar27 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar44 = *(double *)((this->triAreas).AllocatorInstance.Data + lVar24 * 8);
      local_1098._padding_ = (longlong)((double)local_1098._padding_ + dVar44 * *(double *)pFVar40);
      local_1098._padding_ =
           (longlong)((double)local_1098._padding_ + dVar44 * *(double *)(pFVar40 + 8));
      local_1098._padding_ =
           (longlong)((double)local_1098._padding_ + dVar44 * *(double *)(pFVar40 + 0x10));
      local_1098._padding_ =
           (longlong)((double)local_1098._padding_ + dVar44 * *(double *)(pFVar40 + 0x18));
      local_1098._padding_ =
           (longlong)((double)local_1098._padding_ + dVar44 * *(double *)(pFVar40 + 0x20));
      local_1098._padding_ =
           (longlong)((double)local_1098._padding_ + dVar44 * *(double *)(pFVar40 + 0x28));
      local_1098._padding_ =
           (longlong)((double)local_1098._padding_ + dVar44 * *(double *)(pFVar40 + 0x30));
      local_1098._padding_ =
           (longlong)((double)local_1098._padding_ + dVar44 * *(double *)(pFVar40 + 0x38));
      local_1098._padding_ =
           (longlong)((double)local_1098._padding_ + dVar44 * *(double *)(pFVar40 + 0x40));
      local_1098._padding_ =
           (longlong)((double)local_1098._padding_ + dVar44 * *(double *)(pFVar40 + 0x48));
      local_1098._padding_ =
           (longlong)((double)local_1098._padding_ + dVar44 * *(double *)(pFVar40 + 0x50));
      local_1098._padding_ =
           (longlong)((double)local_1098._padding_ + dVar44 * *(double *)(pFVar40 + 0x58));
      local_1098._padding_ =
           (longlong)((double)local_1098._padding_ + dVar44 * *(double *)(pFVar40 + 0x60));
      local_1098._padding_ =
           (longlong)((double)local_1098._padding_ + dVar44 * *(double *)(pFVar40 + 0x68));
      local_1098.a = local_1098.a + dVar44;
      local_1098.attrweight = *(double *)(pFVar40 + 0x78);
      local_1098.grad[0].field0_0x0._s_0.X =
           local_1098.grad[0].field0_0x0._s_0.X + dVar44 * *(double *)(pFVar40 + 0x80);
      local_1098.grad[0].field0_0x0._s_0.Y =
           local_1098.grad[0].field0_0x0._s_0.Y + dVar44 * *(double *)(pFVar40 + 0x88);
      local_1098.grad[0].field0_0x0._s_0.Z =
           local_1098.grad[0].field0_0x0._s_0.Z + dVar44 * *(double *)(pFVar40 + 0x90);
      local_1098.grad[1].field0_0x0._s_0.X =
           local_1098.grad[1].field0_0x0._s_0.X + dVar44 * *(double *)(pFVar40 + 0x98);
      local_1098.grad[1].field0_0x0._s_0.Y =
           local_1098.grad[1].field0_0x0._s_0.Y + dVar44 * *(double *)(pFVar40 + 0xa0);
      local_1098.grad[1].field0_0x0._s_0.Z =
           local_1098.grad[1].field0_0x0._s_0.Z + dVar44 * *(double *)(pFVar40 + 0xa8);
      local_1098.grad[2].field0_0x0._s_0.X =
           local_1098.grad[2].field0_0x0._s_0.X + dVar44 * *(double *)(pFVar40 + 0xb0);
      local_1098.grad[2].field0_0x0._s_0.Y =
           local_1098.grad[2].field0_0x0._s_0.Y + dVar44 * *(double *)(pFVar40 + 0xb8);
      local_1098.grad[2].field0_0x0._s_0.Z =
           local_1098.grad[2].field0_0x0._s_0.Z + dVar44 * *(double *)(pFVar40 + 0xc0);
      local_1098.d[0] = local_1098.d[0] + dVar44 * *(double *)(pFVar40 + 200);
      local_1098.d[1] = local_1098.d[1] + dVar44 * *(double *)(pFVar40 + 0xd0);
      local_1098.d[2] = local_1098.d[2] + dVar44 * *(double *)(pFVar40 + 0xd8);
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_398);
    }
    if (local_1e8._96_8_ != 0) {
      plVar25 = (longlong *)(local_1e8 + 0x70);
      if ((longlong *)local_1e8._136_8_ != (longlong *)0x0) {
        plVar25 = (longlong *)local_1e8._136_8_;
      }
      (**(code **)(*plVar25 + 0x10))();
    }
    if (local_398._96_8_ != 0) {
      plVar25 = (longlong *)(local_398 + 0x70);
      if ((longlong *)local_398._136_8_ != (longlong *)0x0) {
        plVar25 = (longlong *)local_398._136_8_;
      }
      (**(code **)(*plVar25 + 0x10))();
    }
    if (local_418._0_8_ != 0) {
      plVar25 = (longlong *)(local_418 + 0x10);
      if ((longlong *)local_418._40_8_ != (longlong *)0x0) {
        plVar25 = (longlong *)local_418._40_8_;
      }
      (**(code **)(*plVar25 + 0x10))();
    }
    if ((int)uVar19 < (this->vertQuadrics).ArrayNum) {
      uVar30 = ~uVar19 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar40 = (this->vertQuadrics).AllocatorInstance.Data;
    lVar24 = (longlong)(int)uVar19 * 0xe0;
    *(longlong *)(pFVar40 + lVar24) = local_1098._padding_;
    *(longlong *)(pFVar40 + lVar24 + 8) = local_1098._padding_;
    *(longlong *)(pFVar40 + lVar24 + 0x10) = local_1098._padding_;
    *(longlong *)(pFVar40 + lVar24 + 0x10 + 8) = local_1098._padding_;
    *(longlong *)(pFVar40 + lVar24 + 0x20) = local_1098._padding_;
    *(longlong *)(pFVar40 + lVar24 + 0x20 + 8) = local_1098._padding_;
    *(longlong *)(pFVar40 + lVar24 + 0x30) = local_1098._padding_;
    *(longlong *)(pFVar40 + lVar24 + 0x30 + 8) = local_1098._padding_;
    *(longlong *)(pFVar40 + lVar24 + 0x40) = local_1098._padding_;
    *(longlong *)(pFVar40 + lVar24 + 0x40 + 8) = local_1098._padding_;
    *(longlong *)(pFVar40 + lVar24 + 0x50) = local_1098._padding_;
    *(longlong *)(pFVar40 + lVar24 + 0x50 + 8) = local_1098._padding_;
    *(longlong *)(pFVar40 + lVar24 + 0x60) = local_1098._padding_;
    *(longlong *)(pFVar40 + lVar24 + 0x60 + 8) = local_1098._padding_;
    *(double *)(pFVar40 + lVar24 + 0x70) = local_1098.a;
    *(double *)(pFVar40 + lVar24 + 0x70 + 8) = local_1098.attrweight;
    *(double *)(pFVar40 + lVar24 + 0x80) = local_1098.grad[0].field0_0x0._s_0.X;
    *(double *)(pFVar40 + lVar24 + 0x80 + 8) = local_1098.grad[0].field0_0x0._s_0.Y;
    *(double *)(pFVar40 + lVar24 + 0x90) = local_1098.grad[0].field0_0x0._s_0.Z;
    *(double *)(pFVar40 + lVar24 + 0x98) = local_1098.grad[1].field0_0x0._s_0.X;
    *(double *)(pFVar40 + lVar24 + 0x98 + 8) = local_1098.grad[1].field0_0x0._s_0.Y;
    *(double *)(pFVar40 + lVar24 + 0xa8) = local_1098.grad[1].field0_0x0._s_0.Z;
    *(double *)(pFVar40 + lVar24 + 0xb0) = local_1098.grad[2].field0_0x0._s_0.X;
    *(double *)(pFVar40 + lVar24 + 0xb0 + 8) = local_1098.grad[2].field0_0x0._s_0.Y;
    *(double *)(pFVar40 + lVar24 + 0xc0) = local_1098.grad[2].field0_0x0._s_0.Z;
    *(double *)(pFVar40 + lVar24 + 0xc0 + 8) = local_1098.d[0];
    *(double *)(pFVar40 + lVar24 + 0xd0) = local_1098.d[1];
    *(double *)(pFVar40 + lVar24 + 0xd0 + 8) = local_1098.d[2];
  }
  else {
    uVar27 = uVar30;
    if ((int)local_10f0[0] < (this->vertQuadrics).ArrayNum) {
      uVar27 = ~local_10f0[0] >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar40 = (this->vertQuadrics).AllocatorInstance.Data;
    uVar27 = uVar30;
    if ((int)uVar19 < (this->vertQuadrics).ArrayNum) {
      uVar27 = ~uVar19 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar24 = (longlong)(int)uVar19 * 0xe0;
    pTVar23 = TAttrBasedQuadricError<double>::TAttrBasedQuadricError<double>
                        (&local_158,
                         (TAttrBasedQuadricError<double> *)
                         ((this->vertQuadrics).AllocatorInstance.Data + lVar24),
                         (TAttrBasedQuadricError<double> *)(pFVar40 + (longlong)(int)uVar37 * 0xe0))
    ;
    if ((int)uVar19 < (this->vertQuadrics).ArrayNum) {
      uVar30 = ~uVar19 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TAttrBasedQuadricError<double>::operator=
              ((TAttrBasedQuadricError<double> *)
               ((this->vertQuadrics).AllocatorInstance.Data + lVar24),pTVar23);
  }
  pFVar41 = (FSmallListSet *)(*(longlong *)&this->field_0x8 + 0xb8);
  if (this->bRetainQuadricMemory == false) {
    local_5a8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_5a8.ArrayNum = 0;
    local_5a8.ArrayMax = 0x40;
    FSmallListSet::BaseValueIterator::BaseValueIterator(&local_f50,pFVar41,uVar19,false);
    while ((((local_f50.ListSet != pFVar41 || (local_f50.ListIndex != uVar19)) ||
            (local_f50.iCur != -1)) || (local_f50.cur_ptr != -1))) {
      local_10f4 = local_f50.cur_value;
      FVar38 = (ForElementType<int>)&local_5a8;
      if (local_5a8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar38 = local_5a8.AllocatorInstance.SecondaryData;
      }
      if ((ulonglong)FVar38 <= &local_10f4) {
        FVar38 = (ForElementType<int>)&local_5a8;
        if (local_5a8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar38 = local_5a8.AllocatorInstance.SecondaryData;
        }
        if ((&local_10f4 < (uint *)((longlong)FVar38 + (longlong)local_5a8.ArrayMax * 4)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (local_5a8.ArrayNum == local_5a8.ArrayMax) {
        local_5a8.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                       (0x404,&local_5a8.AllocatorInstance,&local_5a8.ArrayMax);
      }
      FVar38 = (ForElementType<int>)&local_5a8;
      if (local_5a8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar38 = local_5a8.AllocatorInstance.SecondaryData;
      }
      lVar24 = (longlong)local_5a8.ArrayNum;
      local_5a8.ArrayNum = local_5a8.ArrayNum + 1;
      *(uint *)((longlong)FVar38 + lVar24 * 4) = local_10f4;
      uVar6 = *(undefined8 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                 (ulonglong)(local_10f4 >> 9) * 8) + (ulonglong)(local_10f4 & 0x1ff) * 0x10);
      uVar37 = (uint)uVar6;
      if (uVar37 == uVar19) {
        uVar37 = (uint)((ulonglong)uVar6 >> 0x20);
      }
      if (uVar37 != 0xffffffff) {
        pFVar32 = (FSmallListSet *)(*(longlong *)&this->field_0x8 + 0xb8);
        FSmallListSet::BaseValueIterator::BaseValueIterator(&local_ed8,pFVar32,uVar37,false);
        while (((local_ed8.ListSet != pFVar32 || (local_ed8.ListIndex != uVar37)) ||
               ((local_ed8.iCur != -1 || (local_ed8.cur_ptr != -1))))) {
          local_10f0[0] = local_ed8.cur_value;
          if (local_10f0[0] != local_10f4) {
            TArray<int,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>::
            AddUniqueImpl<int_const_&>(&local_5a8,(int *)local_10f0);
          }
          FSmallListSet::BaseValueIterator::GotoNext(&local_ed8);
        }
      }
      FSmallListSet::BaseValueIterator::GotoNext(&local_f50);
    }
    uVar26 = (ulonglong)local_5a8.ArrayNum;
    local_10b0 = local_5a8.ArrayNum;
    FVar38 = (ForElementType<int>)&local_5a8;
    if (local_5a8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar38 = local_5a8.AllocatorInstance.SecondaryData;
    }
    local_fb8 = (ForElementType<int>)((longlong)FVar38 + uVar26 * 4);
    uVar34 = uVar26;
    while( true ) {
      FVar16 = local_fb8;
      if ((int)uVar26 != (int)uVar34) {
        local_10f8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_10f8);
      }
      if (FVar38 == FVar16) break;
      uVar19 = *(uint *)FVar38;
      pFVar4 = (FIndex2i_u_0 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                 (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 0x10);
      local_10a8 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar4->_s_0;
      FStack_10a0 = pFVar4[1];
      AssembleEdgeQuadric(this,&local_688,(FEdge *)&local_10a8._s_0);
      OptimalPoint(this,(TVector<double> *)&local_e68._s_0,uVar19,&local_688,local_10a8._s_0.A,
                   local_10a8._s_0.B);
      dVar44 = TAttrBasedQuadricError<double>::Evaluate
                         (&local_688,(TVector<double> *)&local_e68._s_0);
      fVar45 = (float)dVar44;
      TAttrBasedQuadricError<double>::TAttrBasedQuadricError<double>(&local_c10);
      local_c10._padding_ = local_688._padding_;
      local_c10._padding_ = local_688._padding_;
      local_c10._padding_ = local_688._padding_;
      local_c10._padding_ = local_688._padding_;
      uVar37 = 0;
      if ((int)uVar19 < (this->EdgeQuadrics).ArrayNum) {
        uVar37 = ~uVar19 >> 0x1f;
      }
      local_c10._padding_ = local_688._padding_;
      local_c10._padding_ = local_688._padding_;
      local_c10._padding_ = local_688._padding_;
      local_c10._padding_ = local_688._padding_;
      local_c10._padding_ = local_688._padding_;
      local_c10._padding_ = local_688._padding_;
      local_c10._padding_ = local_688._padding_;
      local_c10._padding_ = local_688._padding_;
      local_c10._padding_ = local_688._padding_;
      local_c10._padding_ = local_688._padding_;
      local_c10.grad[0].field0_0x0._s_0.Z = local_688.grad[0].field0_0x0._s_0.Z;
      local_c10.grad[1].field0_0x0._s_0.Z = local_688.grad[1].field0_0x0._s_0.Z;
      local_c10.a = local_688.a;
      local_c10.attrweight = local_688.attrweight;
      local_c10.grad[0].field0_0x0._s_0.X = local_688.grad[0].field0_0x0._s_0.X;
      local_c10.grad[0].field0_0x0._s_0.Y = local_688.grad[0].field0_0x0._s_0.Y;
      local_c10.grad[2].field0_0x0._s_0.Z = local_688.grad[2].field0_0x0._s_0.Z;
      local_c10.d[0] = local_688.d[0];
      local_c10.grad[1].field0_0x0._s_0.X = local_688.grad[1].field0_0x0._s_0.X;
      local_c10.grad[1].field0_0x0._s_0.Y = local_688.grad[1].field0_0x0._s_0.Y;
      local_c10.d[1] = local_688.d[1];
      local_c10.d[2] = local_688.d[2];
      local_c10.grad[2].field0_0x0._s_0.X = local_688.grad[2].field0_0x0._s_0.X;
      local_c10.grad[2].field0_0x0._s_0.Y = local_688.grad[2].field0_0x0._s_0.Y;
      local_b20 = local_e68._s_0.Z;
      local_b30 = local_e68._s_0.X;
      dStack_b28 = local_e68._s_0.Y;
      local_c18 = uVar19;
      if ((uVar37 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar40 = (this->EdgeQuadrics).AllocatorInstance.Data;
      lVar24 = (longlong)(int)uVar19 * 0x100;
      *(uint *)(pFVar40 + lVar24) = local_c18;
      TAttrBasedQuadricError<double>::operator=
                ((TAttrBasedQuadricError<double> *)(pFVar40 + lVar24 + 8),&local_c10);
      *(double *)(pFVar40 + lVar24 + 0xe8) = local_b30;
      *(double *)(pFVar40 + lVar24 + 0xe8 + 8) = dStack_b28;
      *(double *)(pFVar40 + lVar24 + 0xf8) = local_b20;
      iVar18 = (this->EdgeQueue).id_to_index.ArrayNum;
      if (iVar18 + 1 < (int)uVar19) {
LAB_14c77898b:
        cVar35 = (this->EdgeQueue).EnableDebugChecks;
LAB_14c778996:
        if (((cVar35 != '\0') &&
            (bVar17 = FIndexPriorityQueue::Contains(&this->EdgeQueue,uVar19), bVar17)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Contains(NodeID) == false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0x7d,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar18 = (this->EdgeQueue).num_nodes + 1;
        (this->EdgeQueue).num_nodes = iVar18;
        uVar37 = 0;
        if ((int)uVar19 < (this->EdgeQueue).id_to_index.ArrayNum) {
          uVar37 = ~uVar19 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(int *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar19 * 4) =
             iVar18;
        uVar37 = (this->EdgeQueue).num_nodes;
        uVar30 = (this->EdgeQueue).nodes.CurBlock;
        uVar27 = (this->EdgeQueue).nodes.CurBlockUsed;
        uVar36 = uVar30 * 0x200 + uVar27;
        if (uVar37 == uVar36) {
          if (uVar27 == 0x200) {
            if (uVar30 == (this->EdgeQueue).nodes.Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                        (&(this->EdgeQueue).nodes);
            }
            pTVar1 = &(this->EdgeQueue).nodes;
            pTVar1->CurBlock = pTVar1->CurBlock + 1;
            uVar30 = (this->EdgeQueue).nodes.CurBlock;
            (this->EdgeQueue).nodes.CurBlockUsed = 0;
          }
          uVar37 = (this->EdgeQueue).nodes.CurBlockUsed;
LAB_14c778abd:
          lVar43 = (longlong)(int)uVar37;
          lVar24 = *(longlong *)
                    ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                    (longlong)(int)uVar30 * 8);
          *(uint *)(lVar24 + lVar43 * 0xc) = uVar19;
          *(float *)(lVar24 + 4 + lVar43 * 0xc) = fVar45;
          *(int *)(lVar24 + 8 + lVar43 * 0xc) = iVar18;
          puVar31 = &(this->EdgeQueue).nodes.CurBlockUsed;
          *puVar31 = *puVar31 + 1;
        }
        else {
          if (uVar36 < uVar37) {
            TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                      (&(this->EdgeQueue).nodes,uVar37);
            uVar37 = (this->EdgeQueue).nodes.CurBlockUsed;
            if (uVar37 == 0x200) {
              if ((this->EdgeQueue).nodes.CurBlock == (this->EdgeQueue).nodes.Blocks.ArrayNum - 1U)
              {
                TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                          (&(this->EdgeQueue).nodes);
              }
              pTVar1 = &(this->EdgeQueue).nodes;
              pTVar1->CurBlock = pTVar1->CurBlock + 1;
              uVar37 = 0;
              (this->EdgeQueue).nodes.CurBlockUsed = 0;
            }
            uVar30 = (this->EdgeQueue).nodes.CurBlock;
            goto LAB_14c778abd;
          }
          uVar26 = (ulonglong)(uVar37 & 0x1ff);
          lVar24 = *(longlong *)
                    ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar37 >> 9) * 8);
          *(uint *)(lVar24 + uVar26 * 0xc) = uVar19;
          *(float *)(lVar24 + 4 + uVar26 * 0xc) = fVar45;
          *(int *)(lVar24 + 8 + uVar26 * 0xc) = iVar18;
        }
        uVar19 = (this->EdgeQueue).num_nodes;
        FIndexPriorityQueue::move_up
                  (&this->EdgeQueue,
                   *(int *)(*(longlong *)
                             ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar19 >> 9) * 8) + 8 + (ulonglong)(uVar19 & 0x1ff) * 0xc))
        ;
        uVar26 = (ulonglong)(uint)local_5a8.ArrayNum;
        FVar38 = (ForElementType<int>)((longlong)FVar38 + 4);
        uVar34 = (ulonglong)local_10b0;
      }
      else {
        uVar37 = 0;
        if ((int)uVar19 < iVar18) {
          uVar37 = ~uVar19 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar37 = *(uint *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data +
                          (longlong)(int)uVar19 * 4);
        if (((int)uVar37 < 1) || ((this->EdgeQueue).num_nodes < (int)uVar37)) goto LAB_14c77898b;
        pFVar2 = &this->EdgeQueue;
        cVar35 = pFVar2->EnableDebugChecks;
        if (*(int *)(*(longlong *)
                      ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar37 >> 9) * 8) + 8 + (ulonglong)(uVar37 & 0x1ff) * 0xc) < 1)
        goto LAB_14c778996;
        if ((((bool)cVar35 != false) &&
            (bVar17 = FIndexPriorityQueue::Contains(pFVar2,uVar19), !bVar17)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Contains(NodeID) == true",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0xb0,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar37 = 0;
        if ((int)uVar19 < (this->EdgeQueue).id_to_index.ArrayNum) {
          uVar37 = ~uVar19 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar19 = *(uint *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data +
                          (longlong)(int)uVar19 * 4);
        uVar26 = (ulonglong)(uVar19 & 0x1ff);
        lVar24 = *(longlong *)
                  ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar19 >> 9) * 8);
        local_10a8._s_0.A = (int)*(undefined8 *)(lVar24 + uVar26 * 0xc);
        local_10a8._s_0.B = (int)fVar45;
        *(FIndex2i_u_0 *)(lVar24 + uVar26 * 0xc) = local_10a8;
        *(undefined4 *)(lVar24 + 8 + uVar26 * 0xc) = *(undefined4 *)(lVar24 + 8 + uVar26 * 0xc);
        FIndexPriorityQueue::on_node_updated(pFVar2,uVar19);
        uVar26 = (ulonglong)(uint)local_5a8.ArrayNum;
        FVar38 = (ForElementType<int>)((longlong)FVar38 + 4);
        uVar34 = (ulonglong)local_10b0;
      }
    }
    if (local_5a8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_5a8.AllocatorInstance.SecondaryData);
    }
  }
  else {
    FSmallListSet::BaseValueIterator::BaseValueIterator(&local_f00,pFVar41,uVar19,false);
    FSmallListSet::BaseValueIterator::BaseValueIterator(&local_d40,pFVar41,uVar19,true);
    while ((((local_f00.ListSet != local_d40.ListSet || (local_f00.ListIndex != local_d40.ListIndex)
             ) || (local_f00.iCur != local_d40.iCur)) || (local_f00.cur_ptr != local_d40.cur_ptr)))
    {
      uVar30 = local_f00.cur_value;
      pFVar4 = (FIndex2i_u_0 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                 ((local_f00._32_8_ & 0xffffffff) >> 9) * 8) + (ulonglong)(uVar30 & 0x1ff) * 0x10);
      local_f60 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar4->_s_0;
      FStack_f58 = pFVar4[1];
      AssembleEdgeQuadric(this,&local_768,(FEdge *)&local_f60._s_0);
      OptimalPoint(this,(TVector<double> *)&local_e80._s_0,uVar30,&local_768,local_f60._s_0.A,
                   local_f60._s_0.B);
      dVar44 = TAttrBasedQuadricError<double>::Evaluate
                         (&local_768,(TVector<double> *)&local_e80._s_0);
      fVar45 = (float)dVar44;
      TAttrBasedQuadricError<double>::TAttrBasedQuadricError<double>(&local_d10);
      local_d10._padding_ = local_768._padding_;
      local_d10._padding_ = local_768._padding_;
      uVar37 = ~uVar30 >> 0x1f;
      local_d10._padding_ = local_768._padding_;
      local_d10._padding_ = local_768._padding_;
      uVar19 = 0;
      if ((int)uVar30 < (this->EdgeQuadrics).ArrayNum) {
        uVar19 = uVar37;
      }
      local_d10._padding_ = local_768._padding_;
      local_d10._padding_ = local_768._padding_;
      local_d10._padding_ = local_768._padding_;
      local_d10._padding_ = local_768._padding_;
      local_d10._padding_ = local_768._padding_;
      local_d10._padding_ = local_768._padding_;
      local_d10._padding_ = local_768._padding_;
      local_d10._padding_ = local_768._padding_;
      local_d10._padding_ = local_768._padding_;
      local_d10._padding_ = local_768._padding_;
      local_d10.grad[0].field0_0x0._s_0.Z = local_768.grad[0].field0_0x0._s_0.Z;
      local_d10.grad[1].field0_0x0._s_0.Z = local_768.grad[1].field0_0x0._s_0.Z;
      local_d10.a = local_768.a;
      local_d10.attrweight = local_768.attrweight;
      local_d10.grad[0].field0_0x0._s_0.X = local_768.grad[0].field0_0x0._s_0.X;
      local_d10.grad[0].field0_0x0._s_0.Y = local_768.grad[0].field0_0x0._s_0.Y;
      local_d10.grad[2].field0_0x0._s_0.Z = local_768.grad[2].field0_0x0._s_0.Z;
      local_d10.d[0] = local_768.d[0];
      local_d10.grad[1].field0_0x0._s_0.X = local_768.grad[1].field0_0x0._s_0.X;
      local_d10.grad[1].field0_0x0._s_0.Y = local_768.grad[1].field0_0x0._s_0.Y;
      local_d10.d[1] = local_768.d[1];
      local_d10.d[2] = local_768.d[2];
      local_d10.grad[2].field0_0x0._s_0.X = local_768.grad[2].field0_0x0._s_0.X;
      local_d10.grad[2].field0_0x0._s_0.Y = local_768.grad[2].field0_0x0._s_0.Y;
      local_c20 = local_e80._s_0.Z;
      local_c30 = local_e80._s_0.X;
      dStack_c28 = local_e80._s_0.Y;
      local_d18 = uVar30;
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar40 = (this->EdgeQuadrics).AllocatorInstance.Data;
      lVar43 = (longlong)(int)uVar30;
      lVar24 = lVar43 * 0x100;
      *(uint *)(pFVar40 + lVar24) = uVar30;
      TAttrBasedQuadricError<double>::operator=
                ((TAttrBasedQuadricError<double> *)(pFVar40 + lVar24 + 8),&local_d10);
      *(double *)(pFVar40 + lVar24 + 0xe8) = local_c30;
      *(double *)(pFVar40 + lVar24 + 0xe8 + 8) = dStack_c28;
      *(double *)(pFVar40 + lVar24 + 0xf8) = local_c20;
      pFVar2 = &this->EdgeQueue;
      iVar18 = (this->EdgeQueue).id_to_index.ArrayNum;
      if (iVar18 + 1 < (int)uVar30) {
LAB_14c7781c2:
        cVar35 = pFVar2->EnableDebugChecks;
LAB_14c7781c9:
        if (((cVar35 != '\0') && (bVar17 = FIndexPriorityQueue::Contains(pFVar2,uVar30), bVar17)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Contains(NodeID) == false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0x7d,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar18 = (this->EdgeQueue).num_nodes + 1;
        (this->EdgeQueue).num_nodes = iVar18;
        uVar19 = 0;
        if ((int)uVar30 < (this->EdgeQueue).id_to_index.ArrayNum) {
          uVar19 = ~uVar30 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(int *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar30 * 4) =
             iVar18;
        uVar19 = (this->EdgeQueue).num_nodes;
        uVar37 = (this->EdgeQueue).nodes.CurBlock;
        uVar27 = (this->EdgeQueue).nodes.CurBlockUsed;
        uVar36 = uVar37 * 0x200 + uVar27;
        if (uVar19 == uVar36) {
          if (uVar27 == 0x200) {
            if (uVar37 == (this->EdgeQueue).nodes.Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                        (&(this->EdgeQueue).nodes);
            }
            pTVar1 = &(this->EdgeQueue).nodes;
            pTVar1->CurBlock = pTVar1->CurBlock + 1;
            uVar37 = (this->EdgeQueue).nodes.CurBlock;
            (this->EdgeQueue).nodes.CurBlockUsed = 0;
          }
          uVar19 = (this->EdgeQueue).nodes.CurBlockUsed;
LAB_14c7782ed:
          lVar43 = (longlong)(int)uVar19;
          lVar24 = *(longlong *)
                    ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                    (longlong)(int)uVar37 * 8);
          *(uint *)(lVar24 + lVar43 * 0xc) = uVar30;
          *(float *)(lVar24 + 4 + lVar43 * 0xc) = fVar45;
          *(int *)(lVar24 + 8 + lVar43 * 0xc) = iVar18;
          puVar31 = &(this->EdgeQueue).nodes.CurBlockUsed;
          *puVar31 = *puVar31 + 1;
        }
        else {
          if (uVar36 < uVar19) {
            TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                      (&(this->EdgeQueue).nodes,uVar19);
            uVar19 = (this->EdgeQueue).nodes.CurBlockUsed;
            if (uVar19 == 0x200) {
              if ((this->EdgeQueue).nodes.CurBlock == (this->EdgeQueue).nodes.Blocks.ArrayNum - 1U)
              {
                TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                          (&(this->EdgeQueue).nodes);
              }
              pTVar1 = &(this->EdgeQueue).nodes;
              pTVar1->CurBlock = pTVar1->CurBlock + 1;
              uVar19 = 0;
              (this->EdgeQueue).nodes.CurBlockUsed = 0;
            }
            uVar37 = (this->EdgeQueue).nodes.CurBlock;
            goto LAB_14c7782ed;
          }
          uVar26 = (ulonglong)(uVar19 & 0x1ff);
          lVar24 = *(longlong *)
                    ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar19 >> 9) * 8);
          *(uint *)(lVar24 + uVar26 * 0xc) = uVar30;
          *(float *)(lVar24 + 4 + uVar26 * 0xc) = fVar45;
          *(int *)(lVar24 + 8 + uVar26 * 0xc) = iVar18;
        }
        uVar19 = (this->EdgeQueue).num_nodes;
        FIndexPriorityQueue::move_up
                  (pFVar2,*(int *)(*(longlong *)
                                    ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                                    (ulonglong)(uVar19 >> 9) * 8) + 8 +
                                  (ulonglong)(uVar19 & 0x1ff) * 0xc));
        FSmallListSet::BaseValueIterator::GotoNext(&local_f00);
      }
      else {
        uVar19 = 0;
        if ((int)uVar30 < iVar18) {
          uVar19 = uVar37;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar19 = *(uint *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data + lVar43 * 4);
        if (((int)uVar19 < 1) || ((this->EdgeQueue).num_nodes < (int)uVar19)) goto LAB_14c7781c2;
        cVar35 = pFVar2->EnableDebugChecks;
        if (*(int *)(*(longlong *)
                      ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar19 >> 9) * 8) + 8 + (ulonglong)(uVar19 & 0x1ff) * 0xc) < 1)
        goto LAB_14c7781c9;
        if ((((bool)cVar35 != false) &&
            (bVar17 = FIndexPriorityQueue::Contains(pFVar2,uVar30), !bVar17)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Contains(NodeID) == true",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0xb0,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar19 = 0;
        if ((int)uVar30 < (this->EdgeQueue).id_to_index.ArrayNum) {
          uVar19 = uVar37;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar19 = *(uint *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data + lVar43 * 4);
        uVar26 = (ulonglong)(uVar19 & 0x1ff);
        lVar24 = *(longlong *)
                  ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar19 >> 9) * 8);
        local_fb8 = (ForElementType<int>)
                    CONCAT44(fVar45,(int)*(undefined8 *)(lVar24 + uVar26 * 0xc));
        *(ForElementType<int> *)(lVar24 + uVar26 * 0xc) = local_fb8;
        *(undefined4 *)(lVar24 + 8 + uVar26 * 0xc) = *(undefined4 *)(lVar24 + 8 + uVar26 * 0xc);
        FIndexPriorityQueue::on_node_updated(pFVar2,uVar19);
        FSmallListSet::BaseValueIterator::GotoNext(&local_f00);
      }
    }
  }
  return;
}

// UpdateNeighborhood @ 14c778b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::UpdateNeighborhood
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,
          FEdgeCollapseInfo *param_1)

{
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> *pTVar1;
  uint *puVar2;
  TMap<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
  *this_00;
  FIndexPriorityQueue *pFVar3;
  double *pdVar4;
  FIndex2i_u_0 *pFVar5;
  undefined1 auVar6 [16];
  FDynamicMesh3 *this_01;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  TKeyInitializer<int_const_&> *pTVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  FIndex2i_u_0 FVar17;
  undefined4 uVar18;
  ForElementType<int> FVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  bool bVar40;
  int iVar41;
  uint uVar42;
  FMeshConstraints *pFVar43;
  TQuadricError<double> *pTVar44;
  TVolPresQuadricError<double> *pTVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  longlong *plVar49;
  ulonglong uVar50;
  uint uVar51;
  TQuadricError<double> *pTVar52;
  FScriptContainerElement *pFVar53;
  uint uVar54;
  FSmallListSet *pFVar55;
  int **ppiVar56;
  char cVar57;
  uint uVar58;
  uint uVar59;
  ForElementType<int> FVar60;
  FSmallListSet *pFVar61;
  uint uVar62;
  uint uVar63;
  int iVar64;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar65 [16];
  double dVar66;
  float fVar67;
  double dVar68;
  uint uVar69;
  uint uVar70;
  undefined1 auStackY_d68 [32];
  undefined1 local_d18 [4];
  uint local_d14;
  uint local_d10 [2];
  FIndex2i_u_0 local_d08;
  uint local_d00;
  uint uStack_cfc;
  uint local_cf8;
  FIndex2i_u_0 local_cf0;
  ForElementType<int> local_ce8;
  FIndex2i_u_0 local_cd8;
  uint local_cd0 [2];
  uint local_cc8 [2];
  uint local_cc0 [2];
  uint local_cb8 [2];
  TVector<double>_u_0 local_cb0;
  TVector<double>_u_0 local_c98;
  double local_c78;
  double dStack_c70;
  double local_c68;
  double dStack_c60;
  double local_c58;
  double dStack_c50;
  double local_c48;
  double dStack_c40;
  double local_c38;
  double dStack_c30;
  double local_c28;
  double dStack_c20;
  double local_c18;
  double dStack_c10;
  FIndex2i_u_0 local_c08;
  FIndex2i_u_0 FStack_c00;
  TKeyInitializer<int_const_&> local_bf8;
  TKeyInitializer<int_const_&> local_bf0;
  FIndex2i_u_0 *local_be8;
  int *local_be0;
  FIndex2i_u_0 *local_bd8;
  int *local_bd0;
  FIndex2i_u_0 local_bc8;
  FIndex2i_u_0 local_bc0;
  FIndex2i_u_0 FStack_bb8;
  TQuadricError<double> local_ba8;
  undefined1 local_b58 [16];
  double local_b48;
  double dStack_b40;
  TVector<double>_u_0 local_b38;
  TQuadricError<double> local_b18;
  double local_ac8;
  double dStack_ac0;
  double local_ab8;
  double dStack_ab0;
  TVolPresQuadricError<double> local_aa8;
  undefined1 local_a38 [24];
  double dStack_a20;
  undefined1 local_a18 [16];
  undefined4 local_a08;
  undefined4 uStack_a04;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  undefined4 local_9f8;
  undefined4 uStack_9f4;
  undefined4 uStack_9f0;
  undefined4 uStack_9ec;
  TVector<double>_u_0 local_9e8;
  double local_9d0;
  BaseValueIterator local_9c8;
  BaseValueIterator local_9a0;
  BaseValueIterator local_978;
  BaseValueIterator local_950;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  double local_8d8;
  double dStack_8d0;
  double local_8c8;
  TVector<double>_u_0 local_8b8;
  TVector<double>_u_0 local_8a0;
  TVector<double>_u_0 local_888;
  uint local_870;
  undefined4 local_868;
  undefined4 uStack_864;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined4 local_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  double local_818;
  double dStack_810;
  double local_808;
  double local_800;
  double local_7f8;
  double dStack_7f0;
  double local_7e8;
  undefined4 local_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 local_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 local_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  double local_788;
  double dStack_780;
  double local_778;
  double local_770;
  double local_768;
  double dStack_760;
  double local_758;
  BaseValueIterator local_750;
  BaseValueIterator local_728;
  TQuadricError<double> local_6f8;
  double local_6a8;
  double dStack_6a0;
  double local_698;
  double local_690;
  TVector<double> local_688;
  TVector<double> local_670;
  undefined1 local_658 [16];
  TQuadricError<double> local_648;
  TQuadricError<double> local_5f8;
  TVolPresQuadricError<double> local_5a8;
  TArray<int,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> local_538;
  undefined1 local_428 [48];
  ValueIterator local_3f8;
  ValueIterator local_3d0;
  undefined1 local_3a8 [48];
  ValueIterator local_378;
  ValueIterator local_350;
  undefined1 local_328 [144];
  undefined1 local_298 [144];
  undefined1 local_208 [144];
  undefined1 local_178 [144];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_d68;
  local_cd8 = (param_1->RemovedTris).field0_0x0;
  local_d10[0] = param_1->RemovedVertex;
  uVar42 = param_1->KeptVertex;
  local_bc8 = (param_1->OpposingVerts).field0_0x0;
  if (this->bAllowSeamCollapse == false) goto LAB_14c778fe7;
  local_cf0 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&(param_1->RemovedEdges).field0_0x0._s_0;
  this_00 = &this->seamQuadrics;
  local_d08 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&(param_1->KeptEdges).field0_0x0._s_0;
  uVar18 = local_cf0._s_0.B;
  uVar51 = local_cf0._s_0.A;
  if (this->field_0xc8 == '\0') {
    pTVar52 = TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
              ::Find((TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
                      *)this_00,uVar51);
    if (pTVar52 != (TQuadricError<double> *)0x0) {
      local_bd8 = &local_d08;
      TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                  *)this_00,&local_bf0,(bool *)&local_bd8);
    }
    if ((uVar18 != 0xffffffff) &&
       (pTVar52 = TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
                  ::Find((TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
                          *)this_00,uVar18), pTVar52 != (TQuadricError<double> *)0x0)) {
      local_bd0 = &local_d08._s_0.B;
      ppiVar56 = &local_bd0;
      pTVar13 = &local_bf0;
LAB_14c778d31:
      TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                  *)this_00,(TKeyInitializer<int_const_&> *)((longlong)&pTVar13->Key + 4),
                 (bool *)ppiVar56);
    }
  }
  else {
    pFVar43 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                        ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
    uVar54 = local_d08._s_0.A;
    bVar40 = FMeshConstraints::HasEdgeConstraint(pFVar43,uVar54);
    if (bVar40) {
      local_be8 = &local_d08;
      TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                  *)this_00,&local_bf8,(bool *)&local_be8);
    }
    else {
      local_cd0[0] = uVar54;
      if (*(int *)&(this->seamQuadrics).field_0x8 != *(int *)&(this->seamQuadrics).field_0x34) {
        TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                           *)this_00,uVar54,(int *)local_cd0);
      }
    }
    if (local_d08._s_0.B != -1) {
      pFVar43 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                          ((TOptional<UE::Geometry::FMeshConstraints> *)&this->field_0x10);
      uVar16 = local_d08._s_0.B;
      bVar40 = FMeshConstraints::HasEdgeConstraint(pFVar43,local_d08._s_0.B);
      if (bVar40) {
        local_be0 = &local_d08._s_0.B;
        ppiVar56 = &local_be0;
        pTVar13 = &local_bf8;
        goto LAB_14c778d31;
      }
      TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
      ::Remove((TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
                *)this_00,uVar16);
    }
  }
  local_cc8[0] = uVar51;
  if (*(int *)&(this->seamQuadrics).field_0x8 != *(int *)&(this->seamQuadrics).field_0x34) {
    TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                       *)this_00,uVar51,(int *)local_cc8);
  }
  if ((uVar18 != 0xffffffff) &&
     (local_cc0[0] = uVar18,
     *(int *)&(this->seamQuadrics).field_0x8 != *(int *)&(this->seamQuadrics).field_0x34)) {
    TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                       *)this_00,uVar18,(int *)local_cc0);
  }
  lVar47 = *(longlong *)&this->field_0x8;
  dVar66 = this->SeamEdgeWeight;
  FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_978,(FSmallListSet *)(lVar47 + 0xb8),uVar42,false);
  FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_750,(FSmallListSet *)(lVar47 + 0xb8),uVar42,true);
  while ((((local_978.ListSet != local_750.ListSet || (local_978.ListIndex != local_750.ListIndex))
          || (local_978.iCur != local_750.iCur)) || (local_978.cur_ptr != local_750.cur_ptr))) {
    this_01 = *(FDynamicMesh3 **)&this->field_0x8;
    local_cb8[0] = local_978.cur_value;
    auVar6 = *(undefined1 (*) [16])
              (*(longlong *)
                ((this_01->Edges).Blocks.AllocatorInstance.Data +
                ((local_978._32_8_ & 0xffffffff) >> 9) * 8) +
              (ulonglong)(local_cb8[0] & 0x1ff) * 0x10);
    local_658 = auVar6;
    iVar41 = TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<int>
                       ((TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
                         *)this_00,local_cb8[0],(int *)local_cb8);
    if (iVar41 == -1) {
      lVar47 = 0;
    }
    else {
      lVar47 = (longlong)iVar41 * 0x60 + *(longlong *)&this_00->field_0x0;
    }
    pTVar52 = (TQuadricError<double> *)(lVar47 + 8);
    if (lVar47 == 0) {
      pTVar52 = (TQuadricError<double> *)0x0;
    }
    if (pTVar52 != (TQuadricError<double> *)0x0) {
      pFVar53 = (this_01->Vertices).Blocks.AllocatorInstance.Data;
      uVar50 = (ulonglong)(auVar6._0_4_ & 0x1ff);
      lVar47 = *(longlong *)(pFVar53 + ((auVar6._0_8_ & 0xffffffff) >> 9) * 8);
      pdVar4 = (double *)(lVar47 + uVar50 * 0x18);
      local_8b8._s_0.X = *pdVar4;
      local_8b8._s_0.Y = pdVar4[1];
      local_8b8._s_0.Z = *(double *)(lVar47 + 0x10 + uVar50 * 0x18);
      uVar50 = (ulonglong)(auVar6._4_4_ & 0x1ff);
      lVar47 = *(longlong *)(pFVar53 + (auVar6._0_8_ >> 0x29) * 8);
      pdVar4 = (double *)(lVar47 + uVar50 * 0x18);
      local_8a0._s_0.X = *pdVar4;
      local_8a0._s_0.Y = pdVar4[1];
      local_8a0._s_0.Z = *(double *)(lVar47 + 0x10 + uVar50 * 0x18);
      FDynamicMesh3::GetTriNormal(this_01,&local_688,auVar6._8_4_);
      pTVar44 = CreateSeamQuadric<double>
                          (&local_648,(TVector<double> *)&local_8b8._s_0,
                           (TVector<double> *)&local_8a0._s_0,&local_688);
      dVar10 = pTVar44->Axy;
      pTVar52->Axx = pTVar44->Axx;
      pTVar52->Axy = dVar10;
      dVar10 = pTVar44->Ayy;
      pTVar52->Axz = pTVar44->Axz;
      pTVar52->Ayy = dVar10;
      dVar10 = pTVar44->Azz;
      pTVar52->Ayz = pTVar44->Ayz;
      pTVar52->Azz = dVar10;
      dVar10 = pTVar44->by;
      pTVar52->bx = pTVar44->bx;
      pTVar52->by = dVar10;
      dVar10 = pTVar44->c;
      pTVar52->bz = pTVar44->bz;
      pTVar52->c = dVar10;
      if (auVar6._12_4_ != -1) {
        FDynamicMesh3::GetTriNormal(*(FDynamicMesh3 **)&this->field_0x8,&local_670,auVar6._12_4_);
        pTVar44 = CreateSeamQuadric<double>
                            (&local_5f8,(TVector<double> *)&local_8b8._s_0,
                             (TVector<double> *)&local_8a0._s_0,&local_670);
        TQuadricError<double>::Add(pTVar52,pTVar44);
      }
      dVar10 = dVar66 * pTVar52->Axx;
      dVar11 = dVar66 * pTVar52->Axy;
      auVar6._8_4_ = SUB84(dVar11,0);
      auVar6._0_8_ = dVar10;
      auVar6._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      pTVar52->Axx = dVar10;
      pTVar52->Axy = (double)auVar6._8_8_;
      pTVar52->Axz = pTVar52->Axz * dVar66;
      pTVar52->Ayy = pTVar52->Ayy * dVar66;
      pTVar52->Ayz = pTVar52->Ayz * dVar66;
      pTVar52->Azz = pTVar52->Azz * dVar66;
      pTVar52->bx = pTVar52->bx * dVar66;
      pTVar52->by = pTVar52->by * dVar66;
      pTVar52->bz = pTVar52->bz * dVar66;
      pTVar52->c = pTVar52->c * dVar66;
    }
    FSmallListSet::BaseValueIterator::GotoNext(&local_978);
  }
LAB_14c778fe7:
  uVar51 = local_d10[0];
  if (this->bRetainQuadricMemory == false) {
    FDynamicMesh3::VtxTrianglesItr
              (*(FDynamicMesh3 **)&this->field_0x8,
               (TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)local_428,uVar42
              );
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_328,
               &local_3f8,&local_3d0,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_428);
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_208,
               &local_3d0,&local_3d0,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_428);
    uVar51 = (uint)__xmm_80000000000000008000000000000000;
    uVar54 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    while( true ) {
      uVar18 = local_328._88_4_;
      lVar47 = 0;
      uVar63 = 0;
      if (((local_328._0_8_ == local_208._0_8_) && (local_328._8_4_ == local_208._8_4_)) &&
         ((local_328._24_4_ == local_208._24_4_ && (local_328._28_4_ == local_208._28_4_)))) break;
      uVar58 = (uint)~local_328._88_4_ >> 0x1f;
      uVar59 = uVar63;
      if ((int)local_328._88_4_ < (this->triAreas).ArrayNum) {
        uVar59 = uVar58;
      }
      if ((uVar59 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar47 = (longlong)(int)uVar18;
      uVar8 = *(undefined8 *)((this->triAreas).AllocatorInstance.Data + lVar47 * 8);
      uVar69 = (uint)uVar8;
      uVar70 = (uint)((ulonglong)uVar8 >> 0x20);
      uVar59 = uVar63;
      if ((int)uVar18 < (this->triQuadrics).ArrayNum) {
        uVar59 = uVar58;
      }
      if ((uVar59 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar53 = (this->triQuadrics).AllocatorInstance.Data;
      lVar46 = lVar47 * 0x70;
      local_b18.Axx = *(double *)(pFVar53 + lVar46);
      local_b18.Axy = *(double *)(pFVar53 + lVar46 + 8);
      local_b18.Axz = *(double *)(pFVar53 + lVar46 + 0x10);
      local_b18.Ayy = *(double *)(pFVar53 + lVar46 + 0x10 + 8);
      local_b18.Ayz = *(double *)(pFVar53 + lVar46 + 0x20);
      local_b18.Azz = *(double *)(pFVar53 + lVar46 + 0x20 + 8);
      local_b18.bx = *(double *)(pFVar53 + lVar46 + 0x30);
      local_b18.by = *(double *)(pFVar53 + lVar46 + 0x30 + 8);
      local_b18.bz = *(double *)(pFVar53 + lVar46 + 0x40);
      local_b18.c = *(double *)(pFVar53 + lVar46 + 0x40 + 8);
      local_ac8 = *(double *)(pFVar53 + lVar46 + 0x50);
      dStack_ac0 = *(double *)(pFVar53 + lVar46 + 0x50 + 8);
      local_ab8 = *(double *)(pFVar53 + lVar46 + 0x60);
      dStack_ab0 = *(double *)(pFVar53 + lVar46 + 0x60 + 8);
      FDynamicMesh3::GetTriInfo
                (*(FDynamicMesh3 **)&this->field_0x8,uVar18,(TVector<double> *)&local_888._s_0,
                 (double *)&local_cf0,(TVector<double> *)&local_b38._s_0);
      TQuadricError<double>::TQuadricError<double>
                (&local_ba8,(TVector<double> *)&local_888._s_0,(TVector<double> *)&local_b38._s_0);
      FVar17 = local_cf0;
      auVar12._4_8_ = extraout_XMM0_Qb;
      auVar12._0_4_ = local_888._4_4_;
      auVar65._0_8_ = auVar12._0_8_ << 0x20;
      auVar65._8_4_ = local_888._8_4_;
      auVar65._12_4_ = local_888._12_4_;
      uVar59 = uVar63;
      if ((int)uVar18 < (this->triAreas).ArrayNum) {
        uVar59 = uVar58;
      }
      local_b58 = local_888._0_16_;
      local_b48 = local_888._s_0.Z;
      dVar66 = local_b38._s_0.Y * auVar65._8_8_ + local_b38._s_0.X * local_888._0_8_ +
               local_b38._s_0.Z * local_888._s_0.Z;
      dStack_b40 = (double)CONCAT44((uint)((ulonglong)dVar66 >> 0x20) ^ uVar54,
                                    SUB84(dVar66,0) ^ uVar51);
      if ((uVar59 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(FIndex2i_u_0 *)((this->triAreas).AllocatorInstance.Data + lVar47 * 8) = FVar17;
      uVar59 = uVar63;
      if ((int)uVar18 < (this->triQuadrics).ArrayNum) {
        uVar59 = uVar58;
      }
      if ((uVar59 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar53 = (this->triQuadrics).AllocatorInstance.Data;
      *(double *)(pFVar53 + lVar46) = local_ba8.Axx;
      *(double *)(pFVar53 + lVar46 + 8) = local_ba8.Axy;
      *(double *)(pFVar53 + lVar46 + 0x10) = local_ba8.Axz;
      *(double *)(pFVar53 + lVar46 + 0x10 + 8) = local_ba8.Ayy;
      *(double *)(pFVar53 + lVar46 + 0x20) = local_ba8.Ayz;
      *(double *)(pFVar53 + lVar46 + 0x20 + 8) = local_ba8.Azz;
      *(double *)(pFVar53 + lVar46 + 0x30) = local_ba8.bx;
      *(double *)(pFVar53 + lVar46 + 0x30 + 8) = local_ba8.by;
      *(double *)(pFVar53 + lVar46 + 0x40) = local_ba8.bz;
      *(double *)(pFVar53 + lVar46 + 0x40 + 8) = local_ba8.c;
      *(undefined8 *)(pFVar53 + lVar46 + 0x50) = local_b58._0_8_;
      *(undefined8 *)(pFVar53 + lVar46 + 0x50 + 8) = local_b58._8_8_;
      *(double *)(pFVar53 + lVar46 + 0x60) = local_b48;
      *(double *)(pFVar53 + lVar46 + 0x60 + 8) = dStack_b40;
      lVar47 = *(longlong *)
                (*(longlong *)(*(longlong *)&this->field_0x8 + 0x130) +
                (ulonglong)((uint)uVar18 >> 9) * 8);
      _local_d00 = *(undefined8 *)(lVar47 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
      uVar59 = *(uint *)(lVar47 + 8 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
      uVar58 = local_d00;
      local_cf8 = uVar59;
      if (local_d00 != uVar42) {
        uVar62 = ~local_d00;
        if ((int)local_d00 < (this->vertQuadrics).ArrayNum) {
          uVar63 = uVar62 >> 0x1f;
        }
        if ((uVar63 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_ce8 = (ForElementType<int>)((longlong)(int)uVar58 * 0x70);
        dVar66 = (double)CONCAT44(uVar70 ^ uVar54,uVar69 ^ uVar51);
        pTVar52 = (TQuadricError<double> *)
                  ((this->vertQuadrics).AllocatorInstance.Data + (longlong)local_ce8);
        TQuadricError<double>::Add(pTVar52,dVar66,&local_b18);
        pTVar52[1].Axx = dVar66 * local_ac8 + pTVar52[1].Axx;
        pTVar52[1].Axy = dVar66 * dStack_ac0 + pTVar52[1].Axy;
        pTVar52[1].Axz = dVar66 * local_ab8 + pTVar52[1].Axz;
        pTVar52[1].Ayy = dVar66 * dStack_ab0 + pTVar52[1].Ayy;
        uVar63 = 0;
        if ((int)uVar58 < (this->vertQuadrics).ArrayNum) {
          uVar63 = uVar62 >> 0x1f;
        }
        if ((uVar63 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar17 = local_cf0;
        pTVar52 = (TQuadricError<double> *)
                  ((this->vertQuadrics).AllocatorInstance.Data + (longlong)local_ce8);
        TQuadricError<double>::Add(pTVar52,(double)local_cf0,&local_ba8);
        pTVar52[1].Axx = (double)local_b58._0_8_ * (double)FVar17 + pTVar52[1].Axx;
        pTVar52[1].Axy = (double)local_b58._8_8_ * (double)FVar17 + pTVar52[1].Axy;
        pTVar52[1].Axz = local_b48 * (double)FVar17 + pTVar52[1].Axz;
        pTVar52[1].Ayy = dStack_b40 * (double)FVar17 + pTVar52[1].Ayy;
      }
      uVar63 = uStack_cfc;
      if (uStack_cfc != uVar42) {
        uVar62 = ~uStack_cfc;
        uVar58 = 0;
        if ((int)uStack_cfc < (this->vertQuadrics).ArrayNum) {
          uVar58 = uVar62 >> 0x1f;
        }
        if ((uVar58 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_ce8 = (ForElementType<int>)((longlong)(int)uVar63 * 0x70);
        dVar66 = (double)CONCAT44(uVar70 ^ uVar54,uVar69 ^ uVar51);
        pTVar52 = (TQuadricError<double> *)
                  ((this->vertQuadrics).AllocatorInstance.Data + (longlong)local_ce8);
        TQuadricError<double>::Add(pTVar52,dVar66,&local_b18);
        pTVar52[1].Axx = dVar66 * local_ac8 + pTVar52[1].Axx;
        pTVar52[1].Axy = dVar66 * dStack_ac0 + pTVar52[1].Axy;
        pTVar52[1].Axz = dVar66 * local_ab8 + pTVar52[1].Axz;
        pTVar52[1].Ayy = dVar66 * dStack_ab0 + pTVar52[1].Ayy;
        uVar58 = 0;
        if ((int)uVar63 < (this->vertQuadrics).ArrayNum) {
          uVar58 = uVar62 >> 0x1f;
        }
        if ((uVar58 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar17 = local_cf0;
        pTVar52 = (TQuadricError<double> *)
                  ((this->vertQuadrics).AllocatorInstance.Data + (longlong)local_ce8);
        TQuadricError<double>::Add(pTVar52,(double)local_cf0,&local_ba8);
        pTVar52[1].Axx = (double)local_b58._0_8_ * (double)FVar17 + pTVar52[1].Axx;
        pTVar52[1].Axy = (double)local_b58._8_8_ * (double)FVar17 + pTVar52[1].Axy;
        pTVar52[1].Axz = local_b48 * (double)FVar17 + pTVar52[1].Axz;
        pTVar52[1].Ayy = dStack_b40 * (double)FVar17 + pTVar52[1].Ayy;
      }
      if (uVar59 != uVar42) {
        uVar63 = 0;
        if ((int)uVar59 < (this->vertQuadrics).ArrayNum) {
          uVar63 = ~uVar59 >> 0x1f;
        }
        if ((uVar63 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar69 = uVar69 ^ uVar51;
        uVar70 = uVar70 ^ uVar54;
        pTVar52 = (TQuadricError<double> *)
                  ((this->vertQuadrics).AllocatorInstance.Data + (longlong)(int)uVar59 * 0x70);
        TQuadricError<double>::Add(pTVar52,(double)CONCAT44(uVar70,uVar69),&local_b18);
        pTVar52[1].Axx = (double)CONCAT44(uVar70,uVar69) * local_ac8 + pTVar52[1].Axx;
        pTVar52[1].Axy = (double)CONCAT44(uVar70,uVar69) * dStack_ac0 + pTVar52[1].Axy;
        pTVar52[1].Axz = (double)CONCAT44(uVar70,uVar69) * local_ab8 + pTVar52[1].Axz;
        pTVar52[1].Ayy = (double)CONCAT44(uVar70,uVar69) * dStack_ab0 + pTVar52[1].Ayy;
        uVar63 = 0;
        if ((int)uVar59 < (this->vertQuadrics).ArrayNum) {
          uVar63 = ~uVar59 >> 0x1f;
        }
        if ((uVar63 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar17 = local_cf0;
        pTVar52 = (TQuadricError<double> *)
                  ((this->vertQuadrics).AllocatorInstance.Data + (longlong)(int)uVar59 * 0x70);
        TQuadricError<double>::Add(pTVar52,(double)local_cf0,&local_ba8);
        pTVar52[1].Axx = (double)local_b58._0_8_ * (double)FVar17 + pTVar52[1].Axx;
        pTVar52[1].Axy = (double)local_b58._8_8_ * (double)FVar17 + pTVar52[1].Axy;
        pTVar52[1].Axz = local_b48 * (double)FVar17 + pTVar52[1].Axz;
        pTVar52[1].Ayy = dStack_b40 * (double)FVar17 + pTVar52[1].Ayy;
      }
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_328);
    }
    if (local_208._96_8_ != 0) {
      plVar49 = (longlong *)(local_208 + 0x70);
      if ((longlong *)local_208._136_8_ != (longlong *)0x0) {
        plVar49 = (longlong *)local_208._136_8_;
      }
      (**(code **)(*plVar49 + 0x10))();
    }
    if (local_328._96_8_ != 0) {
      plVar49 = (longlong *)(local_328 + 0x70);
      if ((longlong *)local_328._136_8_ != (longlong *)0x0) {
        plVar49 = (longlong *)local_328._136_8_;
      }
      (**(code **)(*plVar49 + 0x10))();
    }
    if (local_428._0_8_ != 0) {
      plVar49 = (longlong *)(local_428 + 0x10);
      if ((longlong *)local_428._40_8_ != (longlong *)0x0) {
        plVar49 = (longlong *)local_428._40_8_;
      }
      (**(code **)(*plVar49 + 0x10))();
    }
    lVar46 = 2;
    do {
      uVar59 = *(uint *)((longlong)local_cd0 + lVar47 + -8);
      if (uVar59 != 0xffffffff) {
        uVar58 = uVar63;
        if ((int)uVar59 < (this->triAreas).ArrayNum) {
          uVar58 = ~uVar59 >> 0x1f;
        }
        if ((uVar58 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar8 = *(undefined8 *)((this->triAreas).AllocatorInstance.Data + (longlong)(int)uVar59 * 8)
        ;
        uVar59 = *(uint *)((longlong)local_cd0 + lVar47 + -8);
        uVar58 = uVar63;
        if ((int)uVar59 < (this->triQuadrics).ArrayNum) {
          uVar58 = ~uVar59 >> 0x1f;
        }
        if ((uVar58 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar53 = (this->triQuadrics).AllocatorInstance.Data;
        lVar48 = (longlong)(int)uVar59 * 0x70;
        uVar59 = *(uint *)((longlong)&local_bc8 + lVar47);
        local_6f8.Axx = *(double *)(pFVar53 + lVar48);
        local_6f8.Axy = *(double *)(pFVar53 + lVar48 + 8);
        local_6f8.Axz = *(double *)(pFVar53 + lVar48 + 0x10);
        local_6f8.Ayy = *(double *)(pFVar53 + lVar48 + 0x10 + 8);
        dVar66 = *(double *)(pFVar53 + lVar48 + 0x68);
        local_6f8.Ayz = *(double *)(pFVar53 + lVar48 + 0x20);
        local_6f8.Azz = *(double *)(pFVar53 + lVar48 + 0x20 + 8);
        local_6f8.bx = *(double *)(pFVar53 + lVar48 + 0x30);
        local_6f8.by = *(double *)(pFVar53 + lVar48 + 0x30 + 8);
        local_6f8.bz = *(double *)(pFVar53 + lVar48 + 0x40);
        local_6f8.c = *(double *)(pFVar53 + lVar48 + 0x40 + 8);
        local_6a8 = *(double *)(pFVar53 + lVar48 + 0x50);
        dStack_6a0 = *(double *)(pFVar53 + lVar48 + 0x50 + 8);
        local_698 = *(double *)(pFVar53 + lVar48 + 0x60);
        uVar58 = uVar63;
        if ((int)uVar59 < (this->vertQuadrics).ArrayNum) {
          uVar58 = ~uVar59 >> 0x1f;
        }
        local_690 = dVar66;
        if ((uVar58 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar58 = (uint)uVar8 ^ uVar51;
        uVar69 = (uint)((ulonglong)uVar8 >> 0x20) ^ uVar54;
        pTVar52 = (TQuadricError<double> *)
                  ((this->vertQuadrics).AllocatorInstance.Data + (longlong)(int)uVar59 * 0x70);
        TQuadricError<double>::Add(pTVar52,(double)CONCAT44(uVar69,uVar58),&local_6f8);
        local_8e8 = 0;
        uStack_8e0 = 0;
        local_8f8 = 0;
        uStack_8f0 = 0;
        pTVar52[1].Axx = local_6a8 * (double)CONCAT44(uVar69,uVar58) + pTVar52[1].Axx;
        pTVar52[1].Axy = dStack_6a0 * (double)CONCAT44(uVar69,uVar58) + pTVar52[1].Axy;
        local_908 = 0;
        uStack_900 = 0;
        local_918 = 0;
        uStack_910 = 0;
        local_928 = 0;
        uStack_920 = 0;
        pTVar52[1].Axz = local_698 * (double)CONCAT44(uVar69,uVar58) + pTVar52[1].Axz;
        pTVar52[1].Ayy = dVar66 * (double)CONCAT44(uVar69,uVar58) + pTVar52[1].Ayy;
        uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar59 = *(uint *)((longlong)local_cd0 + lVar47 + -8);
        local_8c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_8d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_8d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar58 = uVar63;
        if ((int)uVar59 < (this->triQuadrics).ArrayNum) {
          uVar58 = ~uVar59 >> 0x1f;
        }
        if ((uVar58 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar53 = (this->triQuadrics).AllocatorInstance.Data;
        lVar48 = (longlong)(int)uVar59 * 0x70;
        uVar59 = *(uint *)((longlong)local_cd0 + lVar47 + -8);
        *(undefined8 *)(pFVar53 + lVar48) = local_928;
        *(undefined8 *)(pFVar53 + lVar48 + 8) = uStack_920;
        *(undefined8 *)(pFVar53 + lVar48 + 0x10) = local_918;
        *(undefined8 *)(pFVar53 + lVar48 + 0x10 + 8) = uStack_910;
        *(undefined8 *)(pFVar53 + lVar48 + 0x20) = local_908;
        *(undefined8 *)(pFVar53 + lVar48 + 0x20 + 8) = uStack_900;
        *(undefined8 *)(pFVar53 + lVar48 + 0x30) = local_8f8;
        *(undefined8 *)(pFVar53 + lVar48 + 0x30 + 8) = uStack_8f0;
        *(undefined8 *)(pFVar53 + lVar48 + 0x40) = local_8e8;
        *(undefined8 *)(pFVar53 + lVar48 + 0x40 + 8) = uStack_8e0;
        *(undefined8 *)(pFVar53 + lVar48 + 0x68) = 0;
        *(undefined8 *)(pFVar53 + lVar48 + 0x50) = uVar8;
        *(undefined8 *)(pFVar53 + lVar48 + 0x50 + 8) = uVar14;
        *(undefined8 *)(pFVar53 + lVar48 + 0x60) = uVar15;
        uVar58 = uVar63;
        if ((int)uVar59 < (this->triAreas).ArrayNum) {
          uVar58 = ~uVar59 >> 0x1f;
        }
        if ((uVar58 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(undefined8 *)((this->triAreas).AllocatorInstance.Data + (longlong)(int)uVar59 * 8) = 0;
      }
      lVar47 = lVar47 + 4;
      lVar46 = lVar46 + -1;
    } while (lVar46 != 0);
    dStack_c10 = 0.0;
    local_c28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_c20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_c18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_c38 = 0.0;
    dStack_c30 = 0.0;
    local_c48 = 0.0;
    dStack_c40 = 0.0;
    local_c58 = 0.0;
    dStack_c50 = 0.0;
    local_c68 = 0.0;
    dStack_c60 = 0.0;
    local_c78 = 0.0;
    dStack_c70 = 0.0;
    FDynamicMesh3::VtxTrianglesItr
              (*(FDynamicMesh3 **)&this->field_0x8,
               (TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)local_3a8,uVar42
              );
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_298,
               &local_378,&local_350,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_3a8);
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_178,
               &local_350,&local_350,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_3a8);
    while ((((uVar18 = local_298._88_4_, local_298._0_8_ != local_178._0_8_ ||
             (local_298._8_4_ != local_178._8_4_)) || (local_298._24_4_ != local_178._24_4_)) ||
           (local_298._28_4_ != local_178._28_4_))) {
      lVar47 = (longlong)(int)local_298._88_4_;
      uVar54 = ~local_298._88_4_;
      uVar51 = uVar63;
      if ((int)local_298._88_4_ < (this->triQuadrics).ArrayNum) {
        uVar51 = uVar54 >> 0x1f;
      }
      if ((uVar51 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar53 = (this->triQuadrics).AllocatorInstance.Data + lVar47 * 0x70;
      uVar51 = uVar63;
      if ((int)uVar18 < (this->triAreas).ArrayNum) {
        uVar51 = uVar54 >> 0x1f;
      }
      if ((uVar51 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      dVar66 = *(double *)((this->triAreas).AllocatorInstance.Data + lVar47 * 8);
      local_c78 = local_c78 + dVar66 * *(double *)pFVar53;
      dStack_c70 = dStack_c70 + dVar66 * *(double *)(pFVar53 + 8);
      local_c68 = local_c68 + dVar66 * *(double *)(pFVar53 + 0x10);
      dStack_c60 = dStack_c60 + dVar66 * *(double *)(pFVar53 + 0x18);
      local_c58 = local_c58 + dVar66 * *(double *)(pFVar53 + 0x20);
      dStack_c50 = dStack_c50 + dVar66 * *(double *)(pFVar53 + 0x28);
      local_c48 = local_c48 + dVar66 * *(double *)(pFVar53 + 0x30);
      dStack_c40 = dStack_c40 + dVar66 * *(double *)(pFVar53 + 0x38);
      local_c38 = local_c38 + dVar66 * *(double *)(pFVar53 + 0x40);
      dStack_c30 = dStack_c30 + dVar66 * *(double *)(pFVar53 + 0x48);
      local_c28 = local_c28 + dVar66 * *(double *)(pFVar53 + 0x50);
      dStack_c20 = dStack_c20 + dVar66 * *(double *)(pFVar53 + 0x58);
      local_c18 = local_c18 + dVar66 * *(double *)(pFVar53 + 0x60);
      dStack_c10 = dStack_c10 + dVar66 * *(double *)(pFVar53 + 0x68);
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_298);
    }
    if (local_178._96_8_ != 0) {
      plVar49 = (longlong *)(local_178 + 0x70);
      if ((longlong *)local_178._136_8_ != (longlong *)0x0) {
        plVar49 = (longlong *)local_178._136_8_;
      }
      (**(code **)(*plVar49 + 0x10))();
    }
    if (local_298._96_8_ != 0) {
      plVar49 = (longlong *)(local_298 + 0x70);
      if ((longlong *)local_298._136_8_ != (longlong *)0x0) {
        plVar49 = (longlong *)local_298._136_8_;
      }
      (**(code **)(*plVar49 + 0x10))();
    }
    if (local_3a8._0_8_ != 0) {
      plVar49 = (longlong *)(local_3a8 + 0x10);
      if ((longlong *)local_3a8._40_8_ != (longlong *)0x0) {
        plVar49 = (longlong *)local_3a8._40_8_;
      }
      (**(code **)(*plVar49 + 0x10))();
    }
    if ((int)uVar42 < (this->vertQuadrics).ArrayNum) {
      uVar63 = ~uVar42 >> 0x1f;
    }
    if ((uVar63 == 0) &&
       (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar40)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar53 = (this->vertQuadrics).AllocatorInstance.Data;
    lVar47 = (longlong)(int)uVar42 * 0x70;
    *(double *)(pFVar53 + lVar47) = local_c78;
    *(double *)(pFVar53 + lVar47 + 8) = dStack_c70;
    *(double *)(pFVar53 + lVar47 + 0x10) = local_c68;
    *(double *)(pFVar53 + lVar47 + 0x10 + 8) = dStack_c60;
    *(double *)(pFVar53 + lVar47 + 0x20) = local_c58;
    *(double *)(pFVar53 + lVar47 + 0x20 + 8) = dStack_c50;
    *(double *)(pFVar53 + lVar47 + 0x30) = local_c48;
    *(double *)(pFVar53 + lVar47 + 0x30 + 8) = dStack_c40;
    *(double *)(pFVar53 + lVar47 + 0x40) = local_c38;
    *(double *)(pFVar53 + lVar47 + 0x40 + 8) = dStack_c30;
    *(double *)(pFVar53 + lVar47 + 0x50) = local_c28;
    *(double *)(pFVar53 + lVar47 + 0x50 + 8) = dStack_c20;
    *(double *)(pFVar53 + lVar47 + 0x60) = local_c18;
    *(double *)(pFVar53 + lVar47 + 0x60 + 8) = dStack_c10;
  }
  else {
    uVar63 = 0;
    uVar54 = uVar63;
    if ((int)local_d10[0] < (this->vertQuadrics).ArrayNum) {
      uVar54 = ~local_d10[0] >> 0x1f;
    }
    if ((uVar54 == 0) &&
       (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar40)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar53 = (this->vertQuadrics).AllocatorInstance.Data;
    uVar54 = uVar63;
    if ((int)uVar42 < (this->vertQuadrics).ArrayNum) {
      uVar54 = ~uVar42 >> 0x1f;
    }
    if ((uVar54 == 0) &&
       (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar40)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar47 = (longlong)(int)uVar42 * 0x70;
    pTVar45 = TVolPresQuadricError<double>::TVolPresQuadricError<double>
                        (&local_5a8,
                         (TVolPresQuadricError<double> *)
                         ((this->vertQuadrics).AllocatorInstance.Data + lVar47),
                         (TVolPresQuadricError<double> *)(pFVar53 + (longlong)(int)uVar51 * 0x70));
    if ((int)uVar42 < (this->vertQuadrics).ArrayNum) {
      uVar63 = ~uVar42 >> 0x1f;
    }
    if ((uVar63 == 0) &&
       (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar40)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar46 = pTVar45->_padding_;
    pFVar53 = (this->vertQuadrics).AllocatorInstance.Data;
    *(longlong *)(pFVar53 + lVar47) = pTVar45->_padding_;
    *(longlong *)(pFVar53 + lVar47 + 8) = lVar46;
    lVar46 = pTVar45->_padding_;
    *(longlong *)(pFVar53 + lVar47 + 0x10) = pTVar45->_padding_;
    *(longlong *)(pFVar53 + lVar47 + 0x10 + 8) = lVar46;
    lVar46 = pTVar45->_padding_;
    *(longlong *)(pFVar53 + lVar47 + 0x20) = pTVar45->_padding_;
    *(longlong *)(pFVar53 + lVar47 + 0x20 + 8) = lVar46;
    lVar46 = pTVar45->_padding_;
    *(longlong *)(pFVar53 + lVar47 + 0x30) = pTVar45->_padding_;
    *(longlong *)(pFVar53 + lVar47 + 0x30 + 8) = lVar46;
    lVar46 = pTVar45->_padding_;
    *(longlong *)(pFVar53 + lVar47 + 0x40) = pTVar45->_padding_;
    *(longlong *)(pFVar53 + lVar47 + 0x40 + 8) = lVar46;
    dVar66 = (pTVar45->PlaneData).N.field0_0x0._s_0.Y;
    *(double *)(pFVar53 + lVar47 + 0x50) = (pTVar45->PlaneData).N.field0_0x0._s_0.X;
    *(double *)(pFVar53 + lVar47 + 0x50 + 8) = dVar66;
    *(double *)(pFVar53 + lVar47 + 0x60) = (pTVar45->PlaneData).N.field0_0x0._s_0.Z;
    *(double *)(pFVar53 + lVar47 + 0x68) = (pTVar45->PlaneData).Dist;
  }
  pFVar61 = (FSmallListSet *)(*(longlong *)&this->field_0x8 + 0xb8);
  uVar51 = 0;
  if (this->bRetainQuadricMemory == false) {
    local_538.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_538.ArrayNum = 0;
    local_538.ArrayMax = 0x40;
    FSmallListSet::BaseValueIterator::BaseValueIterator(&local_9a0,pFVar61,uVar42,false);
    while ((((iVar41 = local_538.ArrayNum, local_9a0.ListSet != pFVar61 ||
             (local_9a0.ListIndex != uVar42)) || (local_9a0.iCur != -1)) ||
           (local_9a0.cur_ptr != -1))) {
      local_d14 = local_9a0.cur_value;
      FVar60 = (ForElementType<int>)&local_538;
      if (local_538.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar60 = local_538.AllocatorInstance.SecondaryData;
      }
      if ((ulonglong)FVar60 <= &local_d14) {
        FVar60 = (ForElementType<int>)&local_538;
        if (local_538.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar60 = local_538.AllocatorInstance.SecondaryData;
        }
        if ((&local_d14 < (uint *)((longlong)FVar60 + (longlong)local_538.ArrayMax * 4)) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (local_538.ArrayNum == local_538.ArrayMax) {
        local_538.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                       (0x404,&local_538.AllocatorInstance,&local_538.ArrayMax);
      }
      FVar60 = (ForElementType<int>)&local_538;
      if (local_538.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar60 = local_538.AllocatorInstance.SecondaryData;
      }
      lVar47 = (longlong)local_538.ArrayNum;
      local_538.ArrayNum = local_538.ArrayNum + 1;
      *(uint *)((longlong)FVar60 + lVar47 * 4) = local_d14;
      uVar8 = *(undefined8 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                 (ulonglong)(local_d14 >> 9) * 8) + (ulonglong)(local_d14 & 0x1ff) * 0x10);
      uVar51 = (uint)uVar8;
      if (uVar51 == uVar42) {
        uVar51 = (uint)((ulonglong)uVar8 >> 0x20);
      }
      if (uVar51 != 0xffffffff) {
        pFVar55 = (FSmallListSet *)(*(longlong *)&this->field_0x8 + 0xb8);
        FSmallListSet::BaseValueIterator::BaseValueIterator(&local_9c8,pFVar55,uVar51,false);
        while (((local_9c8.ListSet != pFVar55 || (local_9c8.ListIndex != uVar51)) ||
               ((local_9c8.iCur != -1 || (local_9c8.cur_ptr != -1))))) {
          local_d10[0] = local_9c8.cur_value;
          if (local_d10[0] != local_d14) {
            TArray<int,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>::
            AddUniqueImpl<int_const_&>(&local_538,(int *)local_d10);
          }
          FSmallListSet::BaseValueIterator::GotoNext(&local_9c8);
        }
      }
      FSmallListSet::BaseValueIterator::GotoNext(&local_9a0);
    }
    uVar50 = (ulonglong)local_538.ArrayNum;
    FVar60 = (ForElementType<int>)&local_538;
    if (local_538.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar60 = local_538.AllocatorInstance.SecondaryData;
    }
    local_ce8 = (ForElementType<int>)((longlong)FVar60 + uVar50 * 4);
    while( true ) {
      FVar19 = local_ce8;
      if ((uint)uVar50 != iVar41) {
        local_d18[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_d18);
      }
      if (FVar60 == FVar19) break;
      uVar42 = *(uint *)FVar60;
      lVar47 = (longlong)(int)uVar42;
      pFVar5 = (FIndex2i_u_0 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                 (ulonglong)(uVar42 >> 9) * 8) + (ulonglong)(uVar42 & 0x1ff) * 0x10);
      local_c08 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar5->_s_0;
      FStack_c00 = pFVar5[1];
      AssembleEdgeQuadric(this,(TVolPresQuadricError<double> *)local_a38,(FEdge *)&local_c08._s_0);
      OptimalPoint(this,(TVector<double> *)&local_c98._s_0,uVar42,
                   (TVolPresQuadricError<double> *)local_a38,local_c08._s_0.A,local_c08._s_0.B);
      dVar11 = local_9d0;
      uVar39 = local_9e8._s_0.Z;
      uVar38 = local_9e8._s_0.Y;
      uVar15 = local_9e8._s_0.X;
      uVar29 = uStack_9ec;
      uVar28 = uStack_9f0;
      uVar27 = uStack_9f4;
      uVar26 = local_9f8;
      uVar25 = uStack_9fc;
      uVar24 = uStack_a00;
      uVar23 = uStack_a04;
      uVar22 = local_a08;
      auVar65 = local_a18;
      auVar6 = stack0xfffffffffffff5d8;
      uVar21 = local_a38._12_4_;
      uVar20 = local_a38._8_4_;
      uVar16 = local_a38._4_4_;
      uVar18 = local_a38._0_4_;
      uVar14 = local_c98._s_0.Y;
      uVar8 = local_c98._s_0.X;
      dVar68 = (double)CONCAT44(uStack_9fc,uStack_a00) * local_c98._s_0.Y;
      dVar66 = (double)CONCAT44(uStack_a04,local_a08) * local_c98._s_0.X;
      dVar10 = (double)CONCAT44(uStack_9f4,local_9f8) * local_c98._s_0.Z;
      fVar67 = (float)((dStack_a20 * local_c98._s_0.Y +
                        (double)CONCAT44(local_a38._12_4_,local_a38._8_4_) * local_c98._s_0.X +
                       (double)local_a18._0_8_ * local_c98._s_0.Z) * local_c98._s_0.Y +
                       (local_c98._s_0.Y * (double)CONCAT44(local_a38._12_4_,local_a38._8_4_) +
                        local_c98._s_0.X * (double)CONCAT44(local_a38._4_4_,local_a38._0_4_) +
                       local_c98._s_0.Z * (double)local_a38._16_8_) * local_c98._s_0.X +
                       ((double)local_a18._0_8_ * local_c98._s_0.Y +
                        (double)local_a38._16_8_ * local_c98._s_0.X +
                       (double)local_a18._8_8_ * local_c98._s_0.Z) * local_c98._s_0.Z + dVar68 +
                       dVar10 + dVar10 + dVar66 + dVar68 + dVar66 +
                      (double)CONCAT44(uStack_9ec,uStack_9f0));
      uVar51 = 0;
      if ((int)uVar42 < (this->EdgeQuadrics).ArrayNum) {
        uVar51 = ~uVar42 >> 0x1f;
      }
      local_800 = local_9d0;
      local_808 = local_9e8._s_0.Z;
      local_7e8 = local_c98._s_0.Z;
      local_868 = local_a38._0_4_;
      uStack_864 = local_a38._4_4_;
      uStack_860 = local_a38._8_4_;
      uStack_85c = local_a38._12_4_;
      local_838 = local_a08;
      uStack_834 = uStack_a04;
      uStack_830 = uStack_a00;
      uStack_82c = uStack_9fc;
      local_828 = local_9f8;
      uStack_824 = uStack_9f4;
      uStack_820 = uStack_9f0;
      uStack_81c = uStack_9ec;
      local_818 = local_9e8._s_0.X;
      dStack_810 = local_9e8._s_0.Y;
      local_7f8 = local_c98._s_0.X;
      dStack_7f0 = local_c98._s_0.Y;
      local_870 = uVar42;
      if ((uVar51 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar7 = (this->EdgeQuadrics).AllocatorInstance.Data;
      *(uint *)(pFVar7 + lVar47 * 0x90) = uVar42;
      pFVar53 = pFVar7 + lVar47 * 0x90 + 8;
      *(undefined4 *)pFVar53 = uVar18;
      *(undefined4 *)(pFVar53 + 4) = uVar16;
      *(undefined4 *)(pFVar53 + 8) = uVar20;
      *(undefined4 *)(pFVar53 + 0xc) = uVar21;
      *(undefined1 (*) [16])(pFVar7 + lVar47 * 0x90 + 0x18) = auVar6;
      *(undefined1 (*) [16])(pFVar7 + lVar47 * 0x90 + 0x28) = auVar65;
      pFVar53 = pFVar7 + lVar47 * 0x90 + 0x38;
      *(undefined4 *)pFVar53 = uVar22;
      *(undefined4 *)(pFVar53 + 4) = uVar23;
      *(undefined4 *)(pFVar53 + 8) = uVar24;
      *(undefined4 *)(pFVar53 + 0xc) = uVar25;
      pFVar53 = pFVar7 + lVar47 * 0x90 + 0x48;
      *(undefined4 *)pFVar53 = uVar26;
      *(undefined4 *)(pFVar53 + 4) = uVar27;
      *(undefined4 *)(pFVar53 + 8) = uVar28;
      *(undefined4 *)(pFVar53 + 0xc) = uVar29;
      *(undefined8 *)(pFVar7 + lVar47 * 0x90 + 0x58) = uVar15;
      *(undefined8 *)(pFVar7 + lVar47 * 0x90 + 0x58 + 8) = uVar38;
      *(undefined8 *)(pFVar7 + lVar47 * 0x90 + 0x68) = uVar39;
      *(double *)(pFVar7 + lVar47 * 0x90 + 0x70) = dVar11;
      *(undefined8 *)(pFVar7 + lVar47 * 0x90 + 0x78) = uVar8;
      *(undefined8 *)(pFVar7 + lVar47 * 0x90 + 0x78 + 8) = uVar14;
      *(double *)(pFVar7 + lVar47 * 0x90 + 0x88) = local_7e8;
      iVar64 = (this->EdgeQueue).id_to_index.ArrayNum;
      if (iVar64 + 1 < (int)uVar42) {
LAB_14c77affb:
        cVar57 = (this->EdgeQueue).EnableDebugChecks;
LAB_14c77b006:
        if (((cVar57 != '\0') &&
            (bVar40 = FIndexPriorityQueue::Contains(&this->EdgeQueue,uVar42), bVar40)) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("Contains(NodeID) == false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0x7d,L""), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar64 = (this->EdgeQueue).num_nodes + 1;
        (this->EdgeQueue).num_nodes = iVar64;
        uVar51 = 0;
        if ((int)uVar42 < (this->EdgeQueue).id_to_index.ArrayNum) {
          uVar51 = ~uVar42 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(int *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar42 * 4) =
             iVar64;
        uVar51 = (this->EdgeQueue).num_nodes;
        uVar54 = (this->EdgeQueue).nodes.CurBlock;
        uVar63 = (this->EdgeQueue).nodes.CurBlockUsed;
        uVar59 = uVar54 * 0x200 + uVar63;
        if (uVar51 == uVar59) {
          if (uVar63 == 0x200) {
            if (uVar54 == (this->EdgeQueue).nodes.Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                        (&(this->EdgeQueue).nodes);
            }
            pTVar1 = &(this->EdgeQueue).nodes;
            pTVar1->CurBlock = pTVar1->CurBlock + 1;
            uVar54 = (this->EdgeQueue).nodes.CurBlock;
            (this->EdgeQueue).nodes.CurBlockUsed = 0;
          }
          uVar51 = (this->EdgeQueue).nodes.CurBlockUsed;
LAB_14c77b128:
          lVar46 = (longlong)(int)uVar51;
          lVar47 = *(longlong *)
                    ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                    (longlong)(int)uVar54 * 8);
          *(uint *)(lVar47 + lVar46 * 0xc) = uVar42;
          *(float *)(lVar47 + 4 + lVar46 * 0xc) = fVar67;
          *(int *)(lVar47 + 8 + lVar46 * 0xc) = iVar64;
          puVar2 = &(this->EdgeQueue).nodes.CurBlockUsed;
          *puVar2 = *puVar2 + 1;
        }
        else {
          if (uVar59 < uVar51) {
            TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                      (&(this->EdgeQueue).nodes,uVar51);
            uVar51 = (this->EdgeQueue).nodes.CurBlockUsed;
            if (uVar51 == 0x200) {
              if ((this->EdgeQueue).nodes.CurBlock == (this->EdgeQueue).nodes.Blocks.ArrayNum - 1U)
              {
                TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                          (&(this->EdgeQueue).nodes);
              }
              pTVar1 = &(this->EdgeQueue).nodes;
              pTVar1->CurBlock = pTVar1->CurBlock + 1;
              uVar51 = 0;
              (this->EdgeQueue).nodes.CurBlockUsed = 0;
            }
            uVar54 = (this->EdgeQueue).nodes.CurBlock;
            goto LAB_14c77b128;
          }
          uVar50 = (ulonglong)(uVar51 & 0x1ff);
          lVar47 = *(longlong *)
                    ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar51 >> 9) * 8);
          *(uint *)(lVar47 + uVar50 * 0xc) = uVar42;
          *(float *)(lVar47 + 4 + uVar50 * 0xc) = fVar67;
          *(int *)(lVar47 + 8 + uVar50 * 0xc) = iVar64;
        }
        uVar42 = (this->EdgeQueue).num_nodes;
        FIndexPriorityQueue::move_up
                  (&this->EdgeQueue,
                   *(int *)(*(longlong *)
                             ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar42 >> 9) * 8) + 8 + (ulonglong)(uVar42 & 0x1ff) * 0xc))
        ;
        uVar50 = (ulonglong)(uint)local_538.ArrayNum;
        FVar60 = (ForElementType<int>)((longlong)FVar60 + 4);
      }
      else {
        uVar51 = 0;
        if ((int)uVar42 < iVar64) {
          uVar51 = ~uVar42 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar51 = *(uint *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data +
                          (longlong)(int)uVar42 * 4);
        if (((int)uVar51 < 1) || ((this->EdgeQueue).num_nodes < (int)uVar51)) goto LAB_14c77affb;
        pFVar3 = &this->EdgeQueue;
        cVar57 = pFVar3->EnableDebugChecks;
        if (*(int *)(*(longlong *)
                      ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar51 >> 9) * 8) + 8 + (ulonglong)(uVar51 & 0x1ff) * 0xc) < 1)
        goto LAB_14c77b006;
        if ((((bool)cVar57 != false) &&
            (bVar40 = FIndexPriorityQueue::Contains(pFVar3,uVar42), !bVar40)) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("Contains(NodeID) == true",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0xb0,L""), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar51 = 0;
        if ((int)uVar42 < (this->EdgeQueue).id_to_index.ArrayNum) {
          uVar51 = ~uVar42 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar42 = *(uint *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data +
                          (longlong)(int)uVar42 * 4);
        uVar50 = (ulonglong)(uVar42 & 0x1ff);
        lVar47 = *(longlong *)
                  ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar42 >> 9) * 8);
        local_c08._s_0.A = (int)*(undefined8 *)(lVar47 + uVar50 * 0xc);
        local_c08._s_0.B = (int)fVar67;
        *(FIndex2i_u_0 *)(lVar47 + uVar50 * 0xc) = local_c08;
        *(undefined4 *)(lVar47 + 8 + uVar50 * 0xc) = *(undefined4 *)(lVar47 + 8 + uVar50 * 0xc);
        FIndexPriorityQueue::on_node_updated(pFVar3,uVar42);
        uVar50 = (ulonglong)(uint)local_538.ArrayNum;
        FVar60 = (ForElementType<int>)((longlong)FVar60 + 4);
      }
    }
    if (local_538.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_538.AllocatorInstance.SecondaryData);
    }
  }
  else {
    FSmallListSet::BaseValueIterator::BaseValueIterator(&local_950,pFVar61,uVar42,false);
    FSmallListSet::BaseValueIterator::BaseValueIterator(&local_728,pFVar61,uVar42,true);
    while ((((local_950.ListSet != local_728.ListSet || (local_950.ListIndex != local_728.ListIndex)
             ) || (local_950.iCur != local_728.iCur)) || (local_950.cur_ptr != local_728.cur_ptr)))
    {
      uVar54 = local_950.cur_value;
      pFVar5 = (FIndex2i_u_0 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                 ((local_950._32_8_ & 0xffffffff) >> 9) * 8) + (ulonglong)(uVar54 & 0x1ff) * 0x10);
      local_bc0 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar5->_s_0;
      FStack_bb8 = pFVar5[1];
      AssembleEdgeQuadric(this,&local_aa8,(FEdge *)&local_bc0._s_0);
      OptimalPoint(this,(TVector<double> *)&local_cb0._s_0,uVar54,&local_aa8,local_bc0._s_0.A,
                   local_bc0._s_0.B);
      dVar11 = local_aa8.PlaneData.Dist;
      uVar39 = local_aa8.PlaneData.N.field0_0x0._s_0.Z;
      uVar38 = local_aa8.PlaneData.N.field0_0x0._s_0.Y;
      uVar15 = local_aa8.PlaneData.N.field0_0x0._s_0.X;
      uVar37 = local_aa8._padding_._4_4_;
      uVar36 = (undefined4)local_aa8._padding_;
      uVar35 = local_aa8._padding_._4_4_;
      uVar34 = (undefined4)local_aa8._padding_;
      uVar33 = local_aa8._padding_._4_4_;
      uVar32 = (undefined4)local_aa8._padding_;
      uVar31 = local_aa8._padding_._4_4_;
      uVar30 = (undefined4)local_aa8._padding_;
      uVar29 = local_aa8._padding_._4_4_;
      uVar28 = (undefined4)local_aa8._padding_;
      uVar27 = local_aa8._padding_._4_4_;
      uVar26 = (undefined4)local_aa8._padding_;
      uVar25 = local_aa8._padding_._4_4_;
      uVar24 = (undefined4)local_aa8._padding_;
      uVar23 = local_aa8._padding_._4_4_;
      uVar22 = (undefined4)local_aa8._padding_;
      uVar21 = local_aa8._padding_._4_4_;
      uVar20 = (undefined4)local_aa8._padding_;
      uVar16 = local_aa8._padding_._4_4_;
      uVar18 = (undefined4)local_aa8._padding_;
      uVar14 = local_cb0._s_0.Y;
      uVar8 = local_cb0._s_0.X;
      dVar68 = (double)CONCAT44(local_aa8._padding_._4_4_,(undefined4)local_aa8._padding_) *
               local_cb0._s_0.Y;
      dVar66 = (double)CONCAT44(local_aa8._padding_._4_4_,(undefined4)local_aa8._padding_) *
               local_cb0._s_0.X;
      dVar10 = (double)CONCAT44(local_aa8._padding_._4_4_,(undefined4)local_aa8._padding_) *
               local_cb0._s_0.Z;
      fVar67 = (float)(((double)CONCAT44(local_aa8._padding_._4_4_,(undefined4)local_aa8._padding_)
                        * local_cb0._s_0.Y +
                        (double)CONCAT44(local_aa8._padding_._4_4_,(undefined4)local_aa8._padding_)
                        * local_cb0._s_0.X +
                       (double)CONCAT44(local_aa8._padding_._4_4_,(undefined4)local_aa8._padding_) *
                       local_cb0._s_0.Z) * local_cb0._s_0.Y +
                       (local_cb0._s_0.Y *
                        (double)CONCAT44(local_aa8._padding_._4_4_,(undefined4)local_aa8._padding_)
                        + local_cb0._s_0.X *
                          (double)CONCAT44(local_aa8._padding_._4_4_,(undefined4)local_aa8._padding_
                                          ) +
                       local_cb0._s_0.Z *
                       (double)CONCAT44(local_aa8._padding_._4_4_,(undefined4)local_aa8._padding_))
                       * local_cb0._s_0.X +
                       ((double)CONCAT44(local_aa8._padding_._4_4_,(undefined4)local_aa8._padding_)
                        * local_cb0._s_0.Y +
                        (double)CONCAT44(local_aa8._padding_._4_4_,(undefined4)local_aa8._padding_)
                        * local_cb0._s_0.X +
                       (double)CONCAT44(local_aa8._padding_._4_4_,(undefined4)local_aa8._padding_) *
                       local_cb0._s_0.Z) * local_cb0._s_0.Z + dVar68 +
                       dVar10 + dVar10 + dVar66 + dVar68 + dVar66 +
                      (double)CONCAT44(local_aa8._padding_._4_4_,(undefined4)local_aa8._padding_));
      uVar63 = ~uVar54 >> 0x1f;
      uVar42 = uVar51;
      if ((int)uVar54 < (this->EdgeQuadrics).ArrayNum) {
        uVar42 = uVar63;
      }
      local_770 = local_aa8.PlaneData.Dist;
      local_778 = local_aa8.PlaneData.N.field0_0x0._s_0.Z;
      local_758 = local_cb0._s_0.Z;
      local_7d8 = (undefined4)local_aa8._padding_;
      uStack_7d4 = local_aa8._padding_._4_4_;
      uStack_7d0 = (undefined4)local_aa8._padding_;
      uStack_7cc = local_aa8._padding_._4_4_;
      local_7c8 = (undefined4)local_aa8._padding_;
      uStack_7c4 = local_aa8._padding_._4_4_;
      uStack_7c0 = (undefined4)local_aa8._padding_;
      uStack_7bc = local_aa8._padding_._4_4_;
      local_7b8 = (undefined4)local_aa8._padding_;
      uStack_7b4 = local_aa8._padding_._4_4_;
      uStack_7b0 = (undefined4)local_aa8._padding_;
      uStack_7ac = local_aa8._padding_._4_4_;
      local_7a8 = (undefined4)local_aa8._padding_;
      uStack_7a4 = local_aa8._padding_._4_4_;
      uStack_7a0 = (undefined4)local_aa8._padding_;
      uStack_79c = local_aa8._padding_._4_4_;
      local_798 = (undefined4)local_aa8._padding_;
      uStack_794 = local_aa8._padding_._4_4_;
      uStack_790 = (undefined4)local_aa8._padding_;
      uStack_78c = local_aa8._padding_._4_4_;
      local_788 = local_aa8.PlaneData.N.field0_0x0._s_0.X;
      dStack_780 = local_aa8.PlaneData.N.field0_0x0._s_0.Y;
      local_768 = local_cb0._s_0.X;
      dStack_760 = local_cb0._s_0.Y;
      if ((uVar42 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar7 = (this->EdgeQuadrics).AllocatorInstance.Data;
      lVar47 = (longlong)(int)uVar54;
      *(uint *)(pFVar7 + lVar47 * 0x90) = uVar54;
      pFVar53 = pFVar7 + lVar47 * 0x90 + 8;
      *(undefined4 *)pFVar53 = uVar18;
      *(undefined4 *)(pFVar53 + 4) = uVar16;
      *(undefined4 *)(pFVar53 + 8) = uVar20;
      *(undefined4 *)(pFVar53 + 0xc) = uVar21;
      pFVar53 = pFVar7 + lVar47 * 0x90 + 0x18;
      *(undefined4 *)pFVar53 = uVar22;
      *(undefined4 *)(pFVar53 + 4) = uVar23;
      *(undefined4 *)(pFVar53 + 8) = uVar24;
      *(undefined4 *)(pFVar53 + 0xc) = uVar25;
      pFVar53 = pFVar7 + lVar47 * 0x90 + 0x28;
      *(undefined4 *)pFVar53 = uVar26;
      *(undefined4 *)(pFVar53 + 4) = uVar27;
      *(undefined4 *)(pFVar53 + 8) = uVar28;
      *(undefined4 *)(pFVar53 + 0xc) = uVar29;
      pFVar53 = pFVar7 + lVar47 * 0x90 + 0x38;
      *(undefined4 *)pFVar53 = uVar30;
      *(undefined4 *)(pFVar53 + 4) = uVar31;
      *(undefined4 *)(pFVar53 + 8) = uVar32;
      *(undefined4 *)(pFVar53 + 0xc) = uVar33;
      pFVar53 = pFVar7 + lVar47 * 0x90 + 0x48;
      *(undefined4 *)pFVar53 = uVar34;
      *(undefined4 *)(pFVar53 + 4) = uVar35;
      *(undefined4 *)(pFVar53 + 8) = uVar36;
      *(undefined4 *)(pFVar53 + 0xc) = uVar37;
      *(undefined8 *)(pFVar7 + lVar47 * 0x90 + 0x58) = uVar15;
      *(undefined8 *)(pFVar7 + lVar47 * 0x90 + 0x58 + 8) = uVar38;
      *(undefined8 *)(pFVar7 + lVar47 * 0x90 + 0x68) = uVar39;
      *(double *)(pFVar7 + lVar47 * 0x90 + 0x70) = dVar11;
      *(undefined8 *)(pFVar7 + lVar47 * 0x90 + 0x78) = uVar8;
      *(undefined8 *)(pFVar7 + lVar47 * 0x90 + 0x78 + 8) = uVar14;
      *(double *)(pFVar7 + lVar47 * 0x90 + 0x88) = local_758;
      iVar41 = (this->EdgeQueue).id_to_index.ArrayNum;
      if (iVar41 + 1 < (int)uVar54) {
LAB_14c77a70b:
        cVar57 = (this->EdgeQueue).EnableDebugChecks;
LAB_14c77a716:
        if (((cVar57 != '\0') &&
            (bVar40 = FIndexPriorityQueue::Contains(&this->EdgeQueue,uVar54), bVar40)) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("Contains(NodeID) == false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0x7d,L""), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar41 = (this->EdgeQueue).num_nodes + 1;
        (this->EdgeQueue).num_nodes = iVar41;
        uVar42 = uVar51;
        if ((int)uVar54 < (this->EdgeQueue).id_to_index.ArrayNum) {
          uVar42 = ~uVar54 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(int *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar54 * 4) =
             iVar41;
        uVar42 = (this->EdgeQueue).num_nodes;
        uVar63 = (this->EdgeQueue).nodes.CurBlock;
        uVar59 = (this->EdgeQueue).nodes.CurBlockUsed;
        uVar58 = uVar63 * 0x200 + uVar59;
        if (uVar42 == uVar58) {
          if (uVar59 == 0x200) {
            if (uVar63 == (this->EdgeQueue).nodes.Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                        (&(this->EdgeQueue).nodes);
            }
            pTVar1 = &(this->EdgeQueue).nodes;
            pTVar1->CurBlock = pTVar1->CurBlock + 1;
            uVar63 = (this->EdgeQueue).nodes.CurBlock;
            (this->EdgeQueue).nodes.CurBlockUsed = 0;
          }
          uVar42 = (this->EdgeQueue).nodes.CurBlockUsed;
LAB_14c77a83a:
          lVar46 = (longlong)(int)uVar42;
          lVar47 = *(longlong *)
                    ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                    (longlong)(int)uVar63 * 8);
          *(uint *)(lVar47 + lVar46 * 0xc) = uVar54;
          *(float *)(lVar47 + 4 + lVar46 * 0xc) = fVar67;
          *(int *)(lVar47 + 8 + lVar46 * 0xc) = iVar41;
          puVar2 = &(this->EdgeQueue).nodes.CurBlockUsed;
          *puVar2 = *puVar2 + 1;
        }
        else {
          if (uVar58 < uVar42) {
            TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                      (&(this->EdgeQueue).nodes,uVar42);
            uVar42 = (this->EdgeQueue).nodes.CurBlockUsed;
            if (uVar42 == 0x200) {
              if ((this->EdgeQueue).nodes.CurBlock == (this->EdgeQueue).nodes.Blocks.ArrayNum - 1U)
              {
                TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                          (&(this->EdgeQueue).nodes);
              }
              pTVar1 = &(this->EdgeQueue).nodes;
              pTVar1->CurBlock = pTVar1->CurBlock + 1;
              (this->EdgeQueue).nodes.CurBlockUsed = 0;
              uVar42 = uVar51;
            }
            uVar63 = (this->EdgeQueue).nodes.CurBlock;
            goto LAB_14c77a83a;
          }
          uVar50 = (ulonglong)(uVar42 & 0x1ff);
          lVar47 = *(longlong *)
                    ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar42 >> 9) * 8);
          *(uint *)(lVar47 + uVar50 * 0xc) = uVar54;
          *(float *)(lVar47 + 4 + uVar50 * 0xc) = fVar67;
          *(int *)(lVar47 + 8 + uVar50 * 0xc) = iVar41;
        }
        uVar42 = (this->EdgeQueue).num_nodes;
        FIndexPriorityQueue::move_up
                  (&this->EdgeQueue,
                   *(int *)(*(longlong *)
                             ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar42 >> 9) * 8) + 8 + (ulonglong)(uVar42 & 0x1ff) * 0xc))
        ;
        FSmallListSet::BaseValueIterator::GotoNext(&local_950);
      }
      else {
        uVar42 = uVar51;
        if ((int)uVar54 < iVar41) {
          uVar42 = uVar63;
        }
        if ((uVar42 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar42 = *(uint *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data + lVar47 * 4);
        if (((int)uVar42 < 1) || ((this->EdgeQueue).num_nodes < (int)uVar42)) goto LAB_14c77a70b;
        pFVar3 = &this->EdgeQueue;
        cVar57 = pFVar3->EnableDebugChecks;
        if (*(int *)(*(longlong *)
                      ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar42 >> 9) * 8) + 8 + (ulonglong)(uVar42 & 0x1ff) * 0xc) < 1)
        goto LAB_14c77a716;
        if ((((bool)cVar57 != false) &&
            (bVar40 = FIndexPriorityQueue::Contains(pFVar3,uVar54), !bVar40)) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("Contains(NodeID) == true",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0xb0,L""), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar42 = uVar51;
        if ((int)uVar54 < (this->EdgeQueue).id_to_index.ArrayNum) {
          uVar42 = uVar63;
        }
        if ((uVar42 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar42 = *(uint *)((this->EdgeQueue).id_to_index.AllocatorInstance.Data +
                          (longlong)(int)uVar54 * 4);
        uVar50 = (ulonglong)(uVar42 & 0x1ff);
        lVar47 = *(longlong *)
                  ((this->EdgeQueue).nodes.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar42 >> 9) * 8);
        local_ce8 = (ForElementType<int>)
                    CONCAT44(fVar67,(int)*(undefined8 *)(lVar47 + uVar50 * 0xc));
        *(ForElementType<int> *)(lVar47 + uVar50 * 0xc) = local_ce8;
        *(undefined4 *)(lVar47 + 8 + uVar50 * 0xc) = *(undefined4 *)(lVar47 + 8 + uVar50 * 0xc);
        FIndexPriorityQueue::on_node_updated(pFVar3,uVar42);
        FSmallListSet::BaseValueIterator::GotoNext(&local_950);
      }
    }
  }
  return;
}

// operator() @ 150573aa0

bool __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::DoSimplify'::__l8::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8014598786120680059>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8014598786120680059>,
                       &`public:___cdecl_`protected:_virtual_void___cdecl_UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::DoSimplify(void)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150573ae0

bool __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::DoSimplify'::__l8
::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8014598786120680059>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8014598786120680059>,
                       &`public:___cdecl_`protected:_virtual_void___cdecl_UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::DoSimplify(void)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150573b20

bool __thiscall
`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::DoSimplify'::__l8::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8014598786120680059>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8014598786120680059>,
                       &`public:___cdecl_`protected:_virtual_void___cdecl_UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::DoSimplify(void)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

