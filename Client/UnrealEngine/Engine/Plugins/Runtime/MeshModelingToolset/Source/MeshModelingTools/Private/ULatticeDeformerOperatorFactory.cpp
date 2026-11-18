// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cc91180

UClass * __cdecl ULatticeDeformerOperatorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULatticeDeformerOperatorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"LatticeDeformerOperatorFactory",
               &Z_Registration_Info_UClass_ULatticeDeformerOperatorFactory.InnerSingleton,
               StaticRegisterNativesULatticeDeformerOperatorFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULatticeDeformerOperatorFactory>,
               InternalVTableHelperCtorCaller<ULatticeDeformerOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULatticeDeformerOperatorFactory.InnerSingleton;
}

// ULatticeDeformerOperatorFactory @ 14ccbb3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULatticeDeformerOperatorFactory * __thiscall
ULatticeDeformerOperatorFactory::ULatticeDeformerOperatorFactory
          (ULatticeDeformerOperatorFactory *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->LatticeDeformerTool).field0_0x0.DebugPtr = (ULatticeDeformerTool *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  return this;
}

// ULatticeDeformerOperatorFactory @ 14ccbb400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULatticeDeformerOperatorFactory * __thiscall
ULatticeDeformerOperatorFactory::ULatticeDeformerOperatorFactory
          (ULatticeDeformerOperatorFactory *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->LatticeDeformerTool).field0_0x0.DebugPtr = (ULatticeDeformerTool *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  return this;
}

// ~ULatticeDeformerOperatorFactory @ 14ccc3690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULatticeDeformerOperatorFactory::~ULatticeDeformerOperatorFactory
          (ULatticeDeformerOperatorFactory *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14ccff610

UClass * __cdecl ULatticeDeformerOperatorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULatticeDeformerOperatorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"LatticeDeformerOperatorFactory",
               &Z_Registration_Info_UClass_ULatticeDeformerOperatorFactory.InnerSingleton,
               StaticRegisterNativesULatticeDeformerOperatorFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULatticeDeformerOperatorFactory>,
               InternalVTableHelperCtorCaller<ULatticeDeformerOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULatticeDeformerOperatorFactory.InnerSingleton;
}

// MakeNewOperator @ 14cd09970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall ULatticeDeformerOperatorFactory::MakeNewOperator(ULatticeDeformerOperatorFactory *this)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  FLatticeDeformerOp *pFVar5;
  FDynamicMeshOperator *in_RDX;
  bool bVar6;
  TSharedPtr<UE::Geometry::FDynamicSubmesh3,1> local_98;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> local_88;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> local_78;
  TTransform<double> local_68;
  
  lVar2 = this->_padding_;
  lVar3 = *(longlong *)(lVar2 + 0x1b8);
  bVar6 = *(char *)(lVar3 + 200) == '\x01';
  if (*(char *)(lVar2 + 0x1e2) == '\0') {
    pTVar4 = ULatticeControlPointsMechanic::GetControlPoints
                       (*(ULatticeControlPointsMechanic **)(lVar2 + 0x1b0));
    lVar2 = this->_padding_;
    pFVar5 = ::operator_new(0x140);
    if (pFVar5 != (FLatticeDeformerOp *)0x0) {
      local_98.Object = *(FDynamicSubmesh3 **)(lVar2 + 0x1a0);
      bVar1 = *(bool *)(lVar3 + 0xc9);
      local_98.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar2 + 0x1a8);
      if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_88.Object = *(FDynamicMesh3 **)(lVar2 + 0x120);
      local_88.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar2 + 0x128);
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar5 = UE::Geometry::FLatticeDeformerOp::FLatticeDeformerOp
                         (pFVar5,&local_88,(TSharedPtr<UE::Geometry::FFFDLattice,1> *)&local_98,
                          pTVar4,bVar6,bVar1);
      goto LAB_14cd09b61;
    }
  }
  else {
    pTVar4 = ULatticeControlPointsMechanic::GetControlPoints
                       (*(ULatticeControlPointsMechanic **)(lVar2 + 0x1b0));
    lVar2 = this->_padding_;
    pFVar5 = ::operator_new(0x140);
    if (pFVar5 != (FLatticeDeformerOp *)0x0) {
      local_88.Object = *(FDynamicMesh3 **)(lVar2 + 0x1a0);
      bVar1 = *(bool *)(lVar3 + 0xc9);
      local_88.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar2 + 0x1a8);
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_98.Object = *(FDynamicSubmesh3 **)(lVar2 + 0x130);
      local_68.Rotation.XY.m128d_f64[0] = *(double *)(lVar2 + 0x140);
      local_68.Rotation.XY.m128d_f64[1] = *(double *)(lVar2 + 0x148);
      local_68.Rotation.ZW.m128d_f64[0] = *(double *)(lVar2 + 0x150);
      local_68.Rotation.ZW.m128d_f64[1] = *(double *)(lVar2 + 0x158);
      local_68.Translation.XY.m128d_f64[0] = *(double *)(lVar2 + 0x160);
      local_68.Translation.XY.m128d_f64[1] = *(double *)(lVar2 + 0x168);
      local_68.Translation.ZW.m128d_f64[0] = *(double *)(lVar2 + 0x170);
      local_68.Translation.ZW.m128d_f64[1] = *(double *)(lVar2 + 0x178);
      local_68.Scale3D.XY.m128d_f64[0] = *(double *)(lVar2 + 0x180);
      local_68.Scale3D.XY.m128d_f64[1] = *(double *)(lVar2 + 0x188);
      local_68.Scale3D.ZW.m128d_f64[0] = *(double *)(lVar2 + 400);
      local_68.Scale3D.ZW.m128d_f64[1] = *(double *)(lVar2 + 0x198);
      local_98.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar2 + 0x138);
      if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_78.Object = *(FDynamicMesh3 **)(lVar2 + 0x120);
      local_78.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar2 + 0x128);
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar5 = UE::Geometry::FLatticeDeformerOp::FLatticeDeformerOp
                         (pFVar5,&local_78,&local_98,&local_68,
                          (TSharedPtr<UE::Geometry::FFFDLattice,1> *)&local_88,pTVar4,bVar6,bVar1);
      goto LAB_14cd09b61;
    }
  }
  pFVar5 = (FLatticeDeformerOp *)0x0;
LAB_14cd09b61:
  in_RDX->_padding_ = (longlong)pFVar5;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// StaticRegisterNativesULatticeDeformerOperatorFactory @ 14cd2eeb0

void __cdecl
ULatticeDeformerOperatorFactory::StaticRegisterNativesULatticeDeformerOperatorFactory(void)

{
  return;
}

