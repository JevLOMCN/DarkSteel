// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 16

// StaticClass @ 14cc8f820

UClass * __cdecl URemeshMeshTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URemeshMeshTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RemeshMeshTool",
               &Z_Registration_Info_UClass_URemeshMeshTool.InnerSingleton,
               StaticRegisterNativesURemeshMeshTool,0x130,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<URemeshMeshTool>,
               InternalVTableHelperCtorCaller<URemeshMeshTool>,local_res8,
               UMultiSelectionMeshEditingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URemeshMeshTool.InnerSingleton;
}

// URemeshMeshTool @ 14ccbf690

URemeshMeshTool * __thiscall
URemeshMeshTool::URemeshMeshTool(URemeshMeshTool *this,FVTableHelper *param_1)

{
  UMultiSelectionMeshEditingTool::UMultiSelectionMeshEditingTool
            ((UMultiSelectionMeshEditingTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->BasicProperties).field0_0x0.DebugPtr = (URemeshMeshToolProperties *)0x0;
  (this->MeshStatisticsProperties).field0_0x0.DebugPtr = (UMeshStatisticsProperties *)0x0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->MeshElementsDisplay).field0_0x0.DebugPtr = (UMeshElementsVisualizer *)0x0;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->OriginalMeshSpatial).Object = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  (this->OriginalMeshSpatial).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// URemeshMeshTool @ 14ccbf720

URemeshMeshTool * __thiscall
URemeshMeshTool::URemeshMeshTool(URemeshMeshTool *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  URemeshMeshToolProperties *this_00;
  FName local_res8;
  
  UMultiSelectionMeshEditingTool::UMultiSelectionMeshEditingTool
            ((UMultiSelectionMeshEditingTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->BasicProperties).field0_0x0.DebugPtr = (URemeshMeshToolProperties *)0x0;
  (this->MeshStatisticsProperties).field0_0x0.DebugPtr = (UMeshStatisticsProperties *)0x0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->MeshElementsDisplay).field0_0x0.DebugPtr = (UMeshElementsVisualizer *)0x0;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->OriginalMeshSpatial).Object = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  (this->OriginalMeshSpatial).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"RemeshProperties");
  FVar1 = *pFVar2;
  pUVar3 = URemeshMeshToolProperties::StaticClass();
  this_00 = (URemeshMeshToolProperties *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (URemeshMeshToolProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->BasicProperties).field0_0x0.DebugPtr = this_00;
  UObjectBase::AtomicallyClearFlags((UObjectBase *)this_00,RF_Transactional);
  return this;
}

// ~URemeshMeshTool @ 14ccc4bf0

void __thiscall URemeshMeshTool::~URemeshMeshTool(URemeshMeshTool *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMeshSpatial).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  UMultiSelectionMeshEditingTool::~UMultiSelectionMeshEditingTool
            ((UMultiSelectionMeshEditingTool *)this);
  return;
}

// operator() @ 14ccce760

void __thiscall `URemeshMeshTool::Setup'::__l2::<lambda_1>::operator()(void *this,bool param_1)

{
  longlong *plVar1;
  longlong lVar2;
  UInteractiveToolManager *pUVar3;
  UMaterialInstanceDynamic *pUVar4;
  code *local_38 [2];
  undefined **local_28;
  longlong *local_20;
  undefined8 local_10;
  
  plVar1 = *(longlong **)this;
  if (*(char *)(plVar1[0x1d] + 0xc6) != '\0') {
    pUVar3 = (UInteractiveToolManager *)(**(code **)(*plVar1 + 0x2d8))(plVar1);
    pUVar4 = ToolSetupUtil::GetVertexColorMaterial(pUVar3,false);
    lVar2 = plVar1[0x1f];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    *(UMaterialInstanceDynamic **)(lVar2 + 0x80) = pUVar4;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`URemeshMeshTool::UpdateVisualization'::`5'::<lambda_1>,0,0>::
                _vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`URemeshMeshTool::UpdateVisualization'::__l5::<lambda_1>,FColor,UE::Geometry::FDynamicMesh3_const_*,int>
                  ::Call;
    local_10 = 0;
    local_20 = plVar1;
    UPreviewMesh::SetTriangleColorFunction
              (*(UPreviewMesh **)(plVar1[0x1f] + 0x68),
               (TFunction<FColor___cdecl(UE::Geometry::FDynamicMesh3_const_*,int)> *)local_38,
               FastUpdate);
    return;
  }
  *(undefined8 *)(plVar1[0x1f] + 0x80) = 0;
  UPreviewMesh::ClearTriangleColorFunction(*(UPreviewMesh **)(plVar1[0x1f] + 0x68),FastUpdate);
  return;
}

// CanAccept @ 14ccebab0

bool __thiscall URemeshMeshTool::CanAccept(URemeshMeshTool *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x398))();
  if ((cVar1 != '\0') && (((this->Preview).field0_0x0.DebugPtr)->bResultValid != false)) {
    return true;
  }
  return false;
}

// GetPrivateStaticClass @ 14cd014b0

UClass * __cdecl URemeshMeshTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URemeshMeshTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RemeshMeshTool",
               &Z_Registration_Info_UClass_URemeshMeshTool.InnerSingleton,
               StaticRegisterNativesURemeshMeshTool,0x130,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<URemeshMeshTool>,
               InternalVTableHelperCtorCaller<URemeshMeshTool>,local_res8,
               UMultiSelectionMeshEditingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URemeshMeshTool.InnerSingleton;
}

// HasAccept @ 14cd03490

bool __thiscall URemeshMeshTool::HasAccept(URemeshMeshTool *this)

{
  return true;
}

// HasCancel @ 14cd03530

bool __thiscall URemeshMeshTool::HasCancel(URemeshMeshTool *this)

{
  return true;
}

// MakeNewOperator @ 14cd0a2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall URemeshMeshTool::MakeNewOperator(URemeshMeshTool *this)

{
  int iVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDynamicMesh3 *pFVar4;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar5;
  code *pcVar6;
  bool bVar7;
  FRemeshMeshOp *pFVar8;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  TVar9;
  FDynamicMeshOperator *in_RDX;
  double dVar10;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong local_130;
  FDynamicMesh3 *local_128;
  TReferenceControllerBase<1> *pTStack_120;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  TQuaternion<double>_u_0 local_108;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_a8;
  double local_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  pFVar8 = ::operator_new(0x2d0);
  if (pFVar8 == (FRemeshMeshOp *)0x0) {
    pFVar8 = (FRemeshMeshOp *)0x0;
  }
  else {
    memset(pFVar8,0,0x2d0);
    pFVar8 = UE::Geometry::FRemeshMeshOp::FRemeshMeshOp(pFVar8);
  }
  pFVar8->RemeshType = *(ERemeshType *)(this->_padding_ + 199);
  lVar2 = this->_padding_;
  if (*(char *)(lVar2 + 0xd4) == '\0') {
    dVar10 = UE::Geometry::FRemeshMeshOp::CalculateTargetEdgeLength
                       ((FDynamicMesh3 *)this->_padding_,*(int *)(lVar2 + 0xc0),
                        (double)this->_padding_);
    pFVar8->TargetEdgeLength = dVar10;
    dVar10 = (double)*(int *)(this->_padding_ + 0xc0);
    pFVar8->TriangleCountHint = (int)(dVar10 + dVar10);
  }
  else {
    pFVar8->TargetEdgeLength = (double)*(float *)(lVar2 + 0xd8);
  }
  pFVar8->bCollapses = *(bool *)(this->_padding_ + 0xbe);
  pFVar8->bDiscardAttributes = *(bool *)(this->_padding_ + 0xc5);
  pFVar8->bResultMustHaveAttributesEnabled = true;
  pFVar8->bFlips = *(bool *)(this->_padding_ + 0xbc);
  pFVar8->bPreserveSharpEdges = *(bool *)(this->_padding_ + 0xb0);
  pFVar8->MeshBoundaryConstraint = (uint)*(byte *)(this->_padding_ + 0xb1);
  pFVar8->GroupBoundaryConstraint = (uint)*(byte *)(this->_padding_ + 0xb2);
  pFVar8->MaterialBoundaryConstraint = (uint)*(byte *)(this->_padding_ + 0xb3);
  pFVar8->bPreventNormalFlips = *(bool *)(this->_padding_ + 0xb4);
  pFVar8->bPreventTinyTriangles = *(bool *)(this->_padding_ + 0xb5);
  pFVar8->bReproject = *(bool *)(this->_padding_ + 0xdc);
  pFVar8->bReprojectConstraints = *(bool *)(this->_padding_ + 0xdd);
  pFVar8->BoundaryCornerAngleThreshold = (double)*(float *)(this->_padding_ + 0xe0);
  pFVar8->bSplits = *(bool *)(this->_padding_ + 0xbd);
  pFVar8->RemeshIterations = *(int *)(this->_padding_ + 200);
  pFVar8->MaxRemeshIterations = *(int *)(this->_padding_ + 0xcc);
  pFVar8->ExtraProjectionIterations = *(int *)(this->_padding_ + 0xd0);
  pFVar8->SmoothingStrength = *(float *)(this->_padding_ + 0xb8);
  pFVar8->SmoothingType = *(ERemeshSmoothingType *)(this->_padding_ + 0xc4);
  iVar1 = *(int *)&this[-1].OriginalMeshSpatial.SharedReferenceCount.ReferenceController;
  if (iVar1 < 1) {
    local_138 = 0;
    local_130 = (longlong)iVar1;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      TVar9.Ptr = (FDynamicMeshOperator *)(*pcVar6)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar9.Ptr;
    }
  }
  UE::ToolTarget::GetLocalToWorldTransform
            (&local_88,(UToolTarget *)(this[-1].OriginalMeshSpatial.Object)->_padding_);
  local_108._s_0.X = local_88.Rotation.XY.m128d_f64[0];
  local_108._s_0.Z = local_88.Rotation.ZW.m128d_f64[0];
  local_108._s_0.Y = local_88.Rotation.XY.m128d_f64[1];
  local_a8 = local_88.Translation.ZW.m128d_f64[0];
  local_108._s_0.W = local_88.Rotation.ZW.m128d_f64[1];
  local_d8 = local_88.Translation.ZW.m128d_f64[0];
  local_90 = local_88.Scale3D.ZW.m128d_f64[0];
  local_e8 = local_88.Translation.XY.m128d_f64[0];
  dStack_e0 = local_88.Translation.XY.m128d_f64[1];
  local_c0 = local_88.Scale3D.ZW.m128d_f64[0];
  local_d0 = local_88.Scale3D.XY.m128d_f64[0];
  dStack_c8 = local_88.Scale3D.XY.m128d_f64[1];
  UE::Geometry::FRemeshMeshOp::SetTransform(pFVar8,(TTransformSRT3<double> *)&local_108._s_0);
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  pFVar4 = (FDynamicMesh3 *)this->_padding_;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_128 = (pFVar8->OriginalMesh).Object;
  pTStack_120 = (pFVar8->OriginalMesh).SharedReferenceCount.ReferenceController;
  (pFVar8->OriginalMesh).Object = pFVar4;
  (pFVar8->OriginalMesh).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_120);
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  pTVar5 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)this->_padding_;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_118 = (pFVar8->OriginalMeshSpatial).Object;
  pTStack_110 = (pFVar8->OriginalMeshSpatial).SharedReferenceCount.ReferenceController;
  (pFVar8->OriginalMeshSpatial).Object = pTVar5;
  (pFVar8->OriginalMeshSpatial).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_110);
  pFVar8->ProjectionTarget = (FDynamicMesh3 *)0x0;
  pFVar8->ProjectionTargetSpatial = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  in_RDX->_padding_ = (longlong)pFVar8;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// OnPropertyModified @ 14cd11da0

void __thiscall
URemeshMeshTool::OnPropertyModified(URemeshMeshTool *this,UObject *param_1,FProperty *param_2)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  FName FVar4;
  FName local_res18 [2];
  
  if (param_2 != (FProperty *)0x0) {
    pFVar3 = ::FName::FName(local_res18,0x10,L"bShowGroupColors",FNAME_Add);
    FVar1 = *pFVar3;
    bVar2 = IsThisNotNull(param_2,"FField::GetFName");
    if (bVar2) {
      FVar4 = (FName)param_2->_padding_;
    }
    else {
      FVar4.ComparisonIndex.Value = 0;
      FVar4.Number = 0;
    }
    if (FVar4 != FVar1) {
      UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
    }
  }
  return;
}

// OnShutdown @ 14cd13030

void __thiscall URemeshMeshTool::OnShutdown(URemeshMeshTool *this,EToolShutdownType param_1)

{
  URemeshMeshToolProperties *pUVar1;
  code *pcVar2;
  UMeshElementsVisualizerProperties *pUVar3;
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> TVar4;
  bool bVar5;
  uint uVar6;
  FText *pFVar7;
  uint uVar8;
  longlong lVar9;
  FConversionToMeshDescriptionOptions local_a8;
  FString local_98;
  FString local_88;
  FText local_78;
  FDynamicMeshOpResult local_68;
  
  pUVar1 = (this->BasicProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
  ::FString::FString(&local_98,L"");
  (*pcVar2)(pUVar1,this,&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pUVar3 = (((this->MeshElementsDisplay).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr;
  if (pUVar3 == (UMeshElementsVisualizerProperties *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3343903065257279312>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\RemeshMeshTool.cpp"
                       ,0xb0,"MeshElementsDisplay->Settings");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pcVar2 = *(code **)(pUVar3->_padding_ + 0x2b0);
    ::FString::FString(&local_88,L"Remesh");
    (*pcVar2)(pUVar3,this,&local_88);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  UPreviewGeometry::Disconnect((UPreviewGeometry *)(this->MeshElementsDisplay).field0_0x0.DebugPtr);
  uVar8 = 0;
  if (0 < (int)this->_padding_) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      UE::ToolTarget::ShowSourceObject(*(UToolTarget **)(this->_padding_ + lVar9));
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (int)this->_padding_);
  }
  UMeshOpPreviewWithBackgroundCompute::Shutdown((this->Preview).field0_0x0.DebugPtr,&local_68);
  if (param_1 == Accept) {
    lVar9 = (**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar2 = *(code **)(*(longlong *)(lVar9 + 0x28) + 0x10);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"URemeshMeshTool",L"RemeshMeshToolTransactionName",L"Remesh Mesh"
                       );
    (*pcVar2)(lVar9 + 0x28,pFVar7);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    TVar4.Ptr = local_68.Mesh.Ptr;
    local_a8.bSetPolyGroups = true;
    local_a8.bUpdatePositions = true;
    local_a8.bUpdateNormals = true;
    local_a8.bUpdateTangents = false;
    local_a8.bUpdateUVs = false;
    local_a8.bUpdateVtxColors = false;
    local_a8.bTransformVtxColorsSRGBToLinear = true;
    local_a8.bConvertBackToNonManifold = false;
    local_a8.bSetHardEdgesFromNormalSeams = true;
    if ((int)this->_padding_ < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::ToolTarget::CommitDynamicMeshUpdate
              (*(UToolTarget **)this->_padding_,TVar4.Ptr,true,&local_a8,
               (FComponentMaterialSet *)0x0);
    lVar9 = (**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x18))(lVar9 + 0x28);
  }
  if (local_68.Mesh.Ptr != (FDynamicMesh3 *)0x0) {
    (**(code **)(local_68.Mesh.Ptr)->_padding_)(local_68.Mesh.Ptr,1);
  }
  return;
}

// OnTick @ 14cd151d0

void __thiscall URemeshMeshTool::OnTick(URemeshMeshTool *this,float param_1)

{
  UMeshOpPreviewWithBackgroundCompute::Tick((this->Preview).field0_0x0.DebugPtr,param_1);
  UMeshElementsVisualizer::OnTick((this->MeshElementsDisplay).field0_0x0.DebugPtr,param_1);
  return;
}

// Setup @ 14cd2a1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall URemeshMeshTool::Setup(URemeshMeshTool *this)

{
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> *pTVar1;
  URemeshMeshToolProperties *pUVar2;
  UPreviewMesh *pUVar3;
  UMeshElementsVisualizerProperties *pUVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  bool bVar6;
  UClass *pUVar7;
  UMeshStatisticsProperties *pUVar8;
  UMeshOpPreviewWithBackgroundCompute *pUVar9;
  UWorld *pUVar10;
  UInteractiveToolManager *pUVar11;
  UMaterialInterface *pUVar12;
  FDynamicMesh3 *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  TTransform<double> *pTVar15;
  TVector2<double> *pTVar16;
  UMeshElementsVisualizer *this_00;
  FText *pFVar17;
  longlong *plVar18;
  int iVar19;
  undefined ***pppuVar20;
  TReferenceControllerBase<1> *pTVar21;
  FDynamicMesh3 *pFVar22;
  double dVar23;
  undefined1 auStackY_4f8 [32];
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_4b8;
  FDynamicMesh3 *local_4a8;
  FSharedReferencer<1> FStack_4a0;
  FDynamicMesh3 *local_498;
  FSharedReferencer<1> FStack_490;
  FGetMeshParameters local_488;
  URemeshMeshTool *local_478;
  FComponentMaterialSet local_470;
  FString local_460;
  FString local_450;
  <lambda_3> local_440;
  FText local_438;
  FText local_428;
  code *local_418 [2];
  undefined **local_408;
  URemeshMeshTool *local_400;
  undefined8 local_3f0;
  TVector2<double> local_3e8;
  FDynamicMesh3 local_3d8;
  undefined1 local_1a8 [128];
  code *local_128 [2];
  undefined **local_118;
  URemeshMeshTool *local_110;
  undefined ***local_100;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  UInteractiveTool::Setup((UInteractiveTool *)this);
  if ((this->BasicProperties).field0_0x0.DebugPtr == (URemeshMeshToolProperties *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("BasicProperties",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\RemeshMeshTool.cpp"
                       ,100,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pUVar2 = (this->BasicProperties).field0_0x0.DebugPtr;
  pcVar5 = *(code **)(pUVar2->_padding_ + 0x2b8);
  ::FString::FString(&local_460,L"");
  (*pcVar5)(pUVar2,this,&local_460);
  if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.Data.AllocatorInstance.Data);
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = UMeshStatisticsProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1a8,pUVar7);
  local_1a8._8_8_ = this;
  pUVar8 = (UMeshStatisticsProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1a8);
  if (local_1a8._64_8_ != 0) {
    plVar18 = (longlong *)(local_1a8 + 0x50);
    if ((longlong *)local_1a8._104_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_1a8._104_8_;
    }
    (**(code **)(*plVar18 + 0x10))(plVar18);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 != (UMeshStatisticsProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->MeshStatisticsProperties).field0_0x0.DebugPtr = pUVar8;
  if ((int)this->_padding_ < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Targets.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\RemeshMeshTool.cpp"
                       ,0x68,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar21 = (TReferenceControllerBase<1> *)0x0;
  if ((int)this->_padding_ < 1) {
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
  if (*(longlong *)this->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Targets[0]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\RemeshMeshTool.cpp"
                       ,0x69,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((int)this->_padding_ < 1) {
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
  UE::ToolTarget::HideSourceObject(*(UToolTarget **)this->_padding_);
  pUVar9 = NewObject<UMeshOpPreviewWithBackgroundCompute>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UMeshOpPreviewWithBackgroundCompute *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->Preview).field0_0x0.DebugPtr = pUVar9;
  pUVar10 = (UWorld *)(**(code **)(this->_padding_ + 0x3b0))(this);
  pTVar14 = (TReferenceControllerBase<1> *)&this->_padding_;
  if (this == (URemeshMeshTool *)0x0) {
    pTVar14 = pTVar21;
  }
  UMeshOpPreviewWithBackgroundCompute::Setup(pUVar9,pUVar10,(IDynamicMeshOperatorFactory *)pTVar14);
  if ((int)this->_padding_ < 1) {
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
  ToolSetupUtil::ApplyRenderingConfigurationToPreview
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             *(UToolTarget **)this->_padding_);
  if ((int)this->_padding_ < 1) {
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
  UE::ToolTarget::GetMaterialSet(&local_470,*(UToolTarget **)this->_padding_,false);
  pUVar9 = (this->Preview).field0_0x0.DebugPtr;
  pUVar11 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar12 = ToolSetupUtil::GetDefaultWorkingMaterial(pUVar11);
  _Src.Data = local_470.Materials.AllocatorInstance.Data;
  local_4b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_470.Materials.ArrayNum == 0) {
    local_4b8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_470.Materials.ArrayNum,0,&local_4b8.AllocatorInstance,
               local_470.Materials.ArrayNum,&local_4b8.ArrayMax);
    memcpy(local_4b8.AllocatorInstance.Data,_Src.Data,(longlong)local_470.Materials.ArrayNum << 3);
  }
  UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials
            (pUVar9,&local_4b8,pUVar12,(UMaterialInterface *)0x0);
  pUVar2 = (this->BasicProperties).field0_0x0.DebugPtr;
  local_408 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`URemeshMeshTool::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  local_3f0 = 0;
  local_418[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`URemeshMeshTool::Setup'::__l2::<lambda_1>,void,bool_const_&>::
                 Call;
  local_400 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar2->_padding_,&pUVar2->bShowGroupColors,
             (TFunction<void___cdecl(bool_const_&)> *)local_418);
  local_488.bHaveRequestLOD = false;
  local_488._1_3_ = 0;
  local_488.RequestLOD = Default;
  local_488.bWantMeshTangents = false;
  local_488._9_3_ = 0;
  if ((int)this->_padding_ < 1) {
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
  pFVar13 = UE::ToolTarget::GetDynamicMeshCopy
                      (&local_3d8,*(UToolTarget **)this->_padding_,&local_488);
  pTVar14 = ::operator_new(0x240);
  pFVar22 = (FDynamicMesh3 *)&DAT_00000010;
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
    local_4a8 = ___xmm_00000000000000000000000000000010;
    pFVar13 = (FDynamicMesh3 *)&DAT_00000010;
    FStack_4a0.ReferenceController = _UNK_150651568;
    pTVar14 = pTVar21;
  }
  else {
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    pTVar14->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDynamicMesh3_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    UE::Geometry::FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)(pTVar14 + 1),pFVar13);
    pFVar13 = (FDynamicMesh3 *)(pTVar14 + 1);
    if (pFVar13 == (FDynamicMesh3 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
    FStack_4a0.ReferenceController = pTVar14;
    local_4a8 = pFVar13;
  }
  pTVar1 = &this->OriginalMesh;
  if (pTVar1 != (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)&local_4a8) {
    pTVar1->Object = pFVar13;
    local_4a8 = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OriginalMesh).SharedReferenceCount,&FStack_4a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_4a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_3d8);
  pUVar3 = (((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr;
  if ((int)this->_padding_ < 1) {
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
  pTVar15 = UE::ToolTarget::GetLocalToWorldTransform(&local_f8,*(UToolTarget **)this->_padding_);
  UPreviewMesh::SetTransform(pUVar3,pTVar15);
  UPreviewMesh::SetTangentsMode
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,AutoCalculated
            );
  UPreviewMesh::UpdatePreview
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,pTVar1->Object
             ,FullUpdate,AllVertexAttribs);
  pFVar13 = pTVar1->Object;
  pTVar14 = ::operator_new(0xd0);
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
    local_498 = ___xmm_00000000000000000000000000000010;
    FStack_490.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    pTVar14->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE___00_SharedPointerInternals__6B_
    ;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(pTVar14 + 1),pFVar13,true);
    pFVar22 = (FDynamicMesh3 *)(pTVar14 + 1);
    if (pFVar22 == (FDynamicMesh3 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
    FStack_490.ReferenceController = pTVar14;
    pTVar21 = pTVar14;
    local_498 = pFVar22;
  }
  if (&this->OriginalMeshSpatial !=
      (TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *)&local_498) {
    (this->OriginalMeshSpatial).Object = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)pFVar22;
    local_498 = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OriginalMeshSpatial).SharedReferenceCount,&FStack_490);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_490.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  if (pTVar1->Object == (FDynamicMesh3 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar22 = pTVar1->Object;
  pTVar16 = UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVolumeArea
                      (&local_3e8,pFVar22);
  this->InitialMeshArea = (pTVar16->field0_0x0)._s_0.Y;
  if (pFVar22 == (FDynamicMesh3 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar19 = 5000;
  if (4999 < (pTVar1->Object->TriangleRefCounts).UsedCount) {
    if (pTVar1->Object == (FDynamicMesh3 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar19 = (pTVar1->Object->TriangleRefCounts).UsedCount;
  }
  ((this->BasicProperties).field0_0x0.DebugPtr)->TargetTriangleCount = iVar19;
  dVar23 = UE::Geometry::FRemeshMeshOp::CalculateTargetEdgeLength
                     (pTVar1->Object,
                      ((this->BasicProperties).field0_0x0.DebugPtr)->TargetTriangleCount,
                      this->InitialMeshArea);
  ((this->BasicProperties).field0_0x0.DebugPtr)->TargetEdgeLength = (float)dVar23;
  (**(code **)(this->_padding_ + 0x318))(this,(this->BasicProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x318))(this,(this->MeshStatisticsProperties).field0_0x0.DebugPtr);
  this_00 = NewObject<UMeshElementsVisualizer>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UMeshElementsVisualizer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->MeshElementsDisplay).field0_0x0.DebugPtr = this_00;
  pTVar15 = UPreviewMesh::GetTransform
                      ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
                       &local_98);
  pUVar3 = (((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr;
  pUVar10 = (UWorld *)(**(code **)(*(longlong *)pUVar3 + 0x180))(pUVar3);
  UPreviewGeometry::CreateInWorld((UPreviewGeometry *)this_00,pUVar10,pTVar15);
  pUVar4 = (((this->MeshElementsDisplay).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr;
  if (pUVar4 == (UMeshElementsVisualizerProperties *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3343903065257279344>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\RemeshMeshTool.cpp"
                       ,0x90,"MeshElementsDisplay->Settings");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pUVar4->bShowWireframe = true;
    pUVar4 = (((this->MeshElementsDisplay).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr;
    pcVar5 = *(code **)(pUVar4->_padding_ + 0x2b8);
    ::FString::FString(&local_450,L"Remesh");
    (*pcVar5)(pUVar4,this,&local_450);
    if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.Data.AllocatorInstance.Data);
    }
    (**(code **)(this->_padding_ + 0x318))
              (this,(((this->MeshElementsDisplay).field0_0x0.DebugPtr)->Settings).field0_0x0.
                    DebugPtr);
  }
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`URemeshMeshTool::Setup'::`2'::<lambda_2>,1,0>::_vftable_;
  local_100 = (undefined ***)0x0;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`URemeshMeshTool::Setup'::__l2::<lambda_2>,void,TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)>_>
                 ::Call;
  local_110 = this;
  UMeshElementsVisualizer::SetMeshAccessFunction
            ((this->MeshElementsDisplay).field0_0x0.DebugPtr,
             (TUniqueFunction<void___cdecl(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)>)>
              *)local_128);
  if (local_128[0] != (code *)0x0) {
    pppuVar20 = &local_118;
    if (local_100 != (undefined ***)0x0) {
      pppuVar20 = local_100;
    }
    (*(code *)(*pppuVar20)[2])();
  }
  local_478 = this;
  TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
  ::AddLambda<_URemeshMeshTool::Setup_::__l2::<lambda_3>_>
            ((TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
              *)&((this->Preview).field0_0x0.DebugPtr)->OnMeshUpdated,&local_440);
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
  pcVar5 = *(code **)(this->_padding_ + 0x380);
  pFVar17 = FText::AsLocalizable_Advanced_LocText
                      (&local_438,L"URemeshMeshTool",L"ToolName",L"Remesh");
  (*pcVar5)(this,pFVar17);
  if (local_438.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
  }
  plVar18 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar5 = *(code **)(*plVar18 + 0x360);
  pFVar17 = FText::AsLocalizable_Advanced_LocText
                      (&local_428,L"URemeshMeshTool",L"OnStartTool",
                       L"Retriangulate the selected Mesh. Use the Boundary Constraints to preserve mesh borders. Enable Discard Attributes to ignore UV/Normal Seams. "
                      );
  (*pcVar5)(plVar18,pFVar17,2);
  if (local_428.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_428.TextData.Reference + 0x10))();
  }
  if (local_470.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.Materials.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesURemeshMeshTool @ 14cd2f2c0

void __cdecl URemeshMeshTool::StaticRegisterNativesURemeshMeshTool(void)

{
  return;
}

// UpdateVisualization @ 14cd3d210

void __thiscall URemeshMeshTool::UpdateVisualization(URemeshMeshTool *this)

{
  UMeshOpPreviewWithBackgroundCompute *pUVar1;
  UInteractiveToolManager *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  code *local_38 [2];
  undefined **local_28;
  URemeshMeshTool *local_20;
  undefined8 local_10;
  
  if (((this->BasicProperties).field0_0x0.DebugPtr)->bShowGroupColors != false) {
    pUVar2 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
    pUVar3 = ToolSetupUtil::GetVertexColorMaterial(pUVar2,false);
    pUVar1 = (this->Preview).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (pUVar1->OverrideMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)pUVar3;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`URemeshMeshTool::UpdateVisualization'::`5'::<lambda_1>,0,0>::
                _vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`URemeshMeshTool::UpdateVisualization'::__l5::<lambda_1>,FColor,UE::Geometry::FDynamicMesh3_const_*,int>
                  ::Call;
    local_10 = 0;
    local_20 = this;
    UPreviewMesh::SetTriangleColorFunction
              ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
               (TFunction<FColor___cdecl(UE::Geometry::FDynamicMesh3_const_*,int)> *)local_38,
               FastUpdate);
    return;
  }
  (((this->Preview).field0_0x0.DebugPtr)->OverrideMaterial).field0_0x0.DebugPtr =
       (UMaterialInterface *)0x0;
  UPreviewMesh::ClearTriangleColorFunction
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,FastUpdate);
  return;
}

