// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cd42f20

UClass * __cdecl UWeldMeshEdgesOperatorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"WeldMeshEdgesOperatorFactory",
               &Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory.InnerSingleton,
               StaticRegisterNativesUWeldMeshEdgesOperatorFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWeldMeshEdgesOperatorFactory>,
               InternalVTableHelperCtorCaller<UWeldMeshEdgesOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory.InnerSingleton;
}

// UWeldMeshEdgesOperatorFactory @ 14cd52190

UWeldMeshEdgesOperatorFactory * __thiscall
UWeldMeshEdgesOperatorFactory::UWeldMeshEdgesOperatorFactory
          (UWeldMeshEdgesOperatorFactory *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->WeldMeshEdgesTool).field0_0x0.DebugPtr = (UWeldMeshEdgesTool *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  return this;
}

// UWeldMeshEdgesOperatorFactory @ 14cd521d0

UWeldMeshEdgesOperatorFactory * __thiscall
UWeldMeshEdgesOperatorFactory::UWeldMeshEdgesOperatorFactory
          (UWeldMeshEdgesOperatorFactory *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->WeldMeshEdgesTool).field0_0x0.DebugPtr = (UWeldMeshEdgesTool *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  return this;
}

// ~UWeldMeshEdgesOperatorFactory @ 14cd53b10

void __thiscall
UWeldMeshEdgesOperatorFactory::~UWeldMeshEdgesOperatorFactory(UWeldMeshEdgesOperatorFactory *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6ed50

UClass * __cdecl UWeldMeshEdgesOperatorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"WeldMeshEdgesOperatorFactory",
               &Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory.InnerSingleton,
               StaticRegisterNativesUWeldMeshEdgesOperatorFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWeldMeshEdgesOperatorFactory>,
               InternalVTableHelperCtorCaller<UWeldMeshEdgesOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory.InnerSingleton;
}

// MakeNewOperator @ 14cd743c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall UWeldMeshEdgesOperatorFactory::MakeNewOperator(UWeldMeshEdgesOperatorFactory *this)

{
  char cVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDynamicMesh3 *pFVar4;
  code *pcVar5;
  bool bVar6;
  EWeldAttributeMode EVar7;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  TVar8;
  FWeldMeshEdgesOp *pFVar9;
  FDynamicMeshOperator *in_RDX;
  undefined1 auStack_138 [32];
  FDynamicMesh3 *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  if (this->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("WeldMeshEdgesTool",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\WeldMeshEdgesTool.cpp"
                       ,0xc0,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      TVar8.Ptr = (FDynamicMeshOperator *)(*pcVar5)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar8.Ptr;
    }
  }
  pFVar9 = ::operator_new(0x110);
  if (pFVar9 == (FWeldMeshEdgesOp *)0x0) {
    pFVar9 = (FWeldMeshEdgesOp *)0x0;
  }
  else {
    pFVar9 = FWeldMeshEdgesOp::FWeldMeshEdgesOp(pFVar9);
  }
  lVar2 = this->_padding_;
  pFVar9->bOnlyUnique = *(bool *)(*(longlong *)(lVar2 + 0x148) + 0xb4);
  pFVar9->bResolveTJunctions = *(bool *)(*(longlong *)(lVar2 + 0x148) + 0xb5);
  pFVar9->bSplitBowties = *(bool *)(*(longlong *)(lVar2 + 0x148) + 0xb6);
  pFVar9->Tolerance = (double)*(float *)(*(longlong *)(lVar2 + 0x148) + 0xb0);
  cVar1 = *(char *)(*(longlong *)(lVar2 + 0x148) + 0xc0);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      EVar7 = OnWeldedMeshEdgesOnly;
      goto LAB_14cd744bd;
    }
    if (cVar1 == '\x02') {
      EVar7 = OnFullMesh;
      goto LAB_14cd744bd;
    }
  }
  EVar7 = None;
LAB_14cd744bd:
  pFVar9->WeldAttributeMode = EVar7;
  pFVar9->SplitUVThreshold = *(float *)(*(longlong *)(lVar2 + 0x148) + 0xcc);
  pFVar9->SplitColorThreshold = *(float *)(*(longlong *)(lVar2 + 0x148) + 0xd0);
  pFVar9->SplitNormalThreshold = *(float *)(*(longlong *)(lVar2 + 0x148) + 0xc4);
  pFVar9->SplitTangentsThreshold = *(float *)(*(longlong *)(lVar2 + 0x148) + 200);
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar2 + 0x170);
  pFVar4 = *(FDynamicMesh3 **)(lVar2 + 0x168);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_118 = (pFVar9->SourceMesh).Object;
  pTStack_110 = (pFVar9->SourceMesh).SharedReferenceCount.ReferenceController;
  (pFVar9->SourceMesh).Object = pFVar4;
  (pFVar9->SourceMesh).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_110);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&pFVar9->SelectedEdges,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar2 + 0x178));
  UE::ToolTarget::GetLocalToWorldTransform(&local_88,*(UToolTarget **)(lVar2 + 200));
  pFVar9->_padding_ = (longlong)local_88.Rotation.XY.m128d_f64[0];
  pFVar9->_padding_ = (longlong)local_88.Rotation.XY.m128d_f64[1];
  pFVar9->_padding_ = (longlong)local_88.Rotation.ZW.m128d_f64[0];
  pFVar9->_padding_ = (longlong)local_88.Rotation.ZW.m128d_f64[1];
  pFVar9->_padding_ = (longlong)local_88.Translation.XY.m128d_f64[0];
  pFVar9->_padding_ = (longlong)local_88.Translation.XY.m128d_f64[1];
  pFVar9->_padding_ = (longlong)local_88.Translation.ZW.m128d_f64[0];
  pFVar9->_padding_ = (longlong)local_88.Scale3D.XY.m128d_f64[0];
  pFVar9->_padding_ = (longlong)local_88.Scale3D.XY.m128d_f64[1];
  pFVar9->_padding_ = (longlong)local_88.Scale3D.ZW.m128d_f64[0];
  in_RDX->_padding_ = (longlong)pFVar9;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// StaticRegisterNativesUWeldMeshEdgesOperatorFactory @ 14cd815b0

void __cdecl UWeldMeshEdgesOperatorFactory::StaticRegisterNativesUWeldMeshEdgesOperatorFactory(void)

{
  return;
}

