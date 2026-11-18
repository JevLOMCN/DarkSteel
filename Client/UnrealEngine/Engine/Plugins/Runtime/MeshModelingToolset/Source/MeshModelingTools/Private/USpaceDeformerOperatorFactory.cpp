// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cc8e9c0

UClass * __cdecl USpaceDeformerOperatorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpaceDeformerOperatorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SpaceDeformerOperatorFactory",
               &Z_Registration_Info_UClass_USpaceDeformerOperatorFactory.InnerSingleton,
               StaticRegisterNativesUSpaceDeformerOperatorFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USpaceDeformerOperatorFactory>,
               InternalVTableHelperCtorCaller<USpaceDeformerOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpaceDeformerOperatorFactory.InnerSingleton;
}

// USpaceDeformerOperatorFactory @ 14ccc0200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

USpaceDeformerOperatorFactory * __thiscall
USpaceDeformerOperatorFactory::USpaceDeformerOperatorFactory
          (USpaceDeformerOperatorFactory *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->SpaceDeformerTool).field0_0x0.DebugPtr = (UMeshSpaceDeformerTool *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  return this;
}

// USpaceDeformerOperatorFactory @ 14ccc0240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

USpaceDeformerOperatorFactory * __thiscall
USpaceDeformerOperatorFactory::USpaceDeformerOperatorFactory
          (USpaceDeformerOperatorFactory *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->SpaceDeformerTool).field0_0x0.DebugPtr = (UMeshSpaceDeformerTool *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  return this;
}

// ~USpaceDeformerOperatorFactory @ 14ccc4f00

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
USpaceDeformerOperatorFactory::~USpaceDeformerOperatorFactory(USpaceDeformerOperatorFactory *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cd01da0

UClass * __cdecl USpaceDeformerOperatorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpaceDeformerOperatorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SpaceDeformerOperatorFactory",
               &Z_Registration_Info_UClass_USpaceDeformerOperatorFactory.InnerSingleton,
               StaticRegisterNativesUSpaceDeformerOperatorFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USpaceDeformerOperatorFactory>,
               InternalVTableHelperCtorCaller<USpaceDeformerOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpaceDeformerOperatorFactory.InnerSingleton;
}

// MakeNewOperator @ 14cd0b2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
__thiscall USpaceDeformerOperatorFactory::MakeNewOperator(USpaceDeformerOperatorFactory *this)

{
  char cVar1;
  longlong lVar2;
  UObjectBaseUtility *this_00;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  TVar6;
  FMeshSpaceDeformerOp *pFVar7;
  longlong lVar8;
  UClass *pUVar9;
  FMeshSpaceDeformerOp *pFVar10;
  double *pdVar11;
  FDynamicMeshOperator *in_RDX;
  FMeshSpaceDeformerOp *pFVar12;
  float fVar13;
  undefined1 auStack_148 [32];
  FDynamicMesh3 *local_128;
  FSharedReferencer<1> local_120 [2];
  TQuaternion<double>_u_0 local_110;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b0;
  double local_98;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SpaceDeformerTool",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshSpaceDeformerTool.cpp"
                         ,0x33,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar6.Ptr = (FDynamicMeshOperator *)(*pcVar3)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar6.Ptr;
  }
  pFVar10 = (FMeshSpaceDeformerOp *)0x0;
  cVar1 = *(char *)(*(longlong *)(this->_padding_ + 0xe0) + 0xb0);
  pFVar12 = pFVar10;
  if (cVar1 == '\0') {
    pFVar7 = ::operator_new(0x170);
    if (pFVar7 != (FMeshSpaceDeformerOp *)0x0) {
      memset(pFVar7,0,0x170);
      UE::Geometry::FMeshSpaceDeformerOp::FMeshSpaceDeformerOp(pFVar7);
      *(undefined1 *)&pFVar7[1]._padding_ = 0;
      pFVar7->_padding_ = (longlong)&___7FBendMeshOp_Geometry_UE__6B_;
      pFVar7[1]._padding_ = 0x4056800000000000;
      pFVar12 = pFVar7;
    }
    fVar13 = *(float *)(*(longlong *)(this->_padding_ + 0xe0) + 0xbc);
  }
  else {
    if (cVar1 == '\x01') {
      pFVar7 = ::operator_new(0x180);
      if (pFVar7 != (FMeshSpaceDeformerOp *)0x0) {
        memset(pFVar7,0,0x180);
        UE::Geometry::FMeshSpaceDeformerOp::FMeshSpaceDeformerOp(pFVar7);
        *(undefined4 *)&pFVar7[1]._padding_ = 0;
        pFVar7->_padding_ = (longlong)&___7FFlareMeshOp_Geometry_UE__6B_;
        pFVar7[1]._padding_ = 0x4059000000000000;
        pFVar7[1]._padding_ = 0x4059000000000000;
        pFVar12 = pFVar7;
      }
      pFVar12[1]._padding_ =
           (longlong)(double)*(float *)(*(longlong *)(this->_padding_ + 0xe0) + 200);
      lVar2 = *(longlong *)(this->_padding_ + 0xe0);
      lVar8 = 200;
      if (*(char *)(lVar2 + 0xcc) == '\0') {
        lVar8 = 0xd0;
      }
      pFVar12[1]._padding_ = (longlong)(double)*(float *)(lVar8 + lVar2);
      cVar1 = *(char *)(*(longlong *)(this->_padding_ + 0xe0) + 0xc4);
      if (cVar1 == '\0') {
        *(undefined4 *)&pFVar12[1]._padding_ = 0;
      }
      else {
        *(uint *)&pFVar12[1]._padding_ = (cVar1 != '\x01') + 1;
      }
      goto LAB_14cd0b523;
    }
    if (cVar1 != '\x02') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshSpaceDeformerTool.cpp"
                         ,0x5f,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (FDynamicMeshOperator *)(*pcVar3)();
        return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
                )TVar6.Ptr;
      }
      goto LAB_14cd0b523;
    }
    pFVar7 = ::operator_new(0x170);
    if (pFVar7 != (FMeshSpaceDeformerOp *)0x0) {
      memset(pFVar7,0,0x170);
      UE::Geometry::FMeshSpaceDeformerOp::FMeshSpaceDeformerOp(pFVar7);
      *(undefined1 *)&pFVar7[1]._padding_ = 0;
      pFVar7->_padding_ = (longlong)&___7FTwistMeshOp_Geometry_UE__6B_;
      pFVar7[1]._padding_ = 0x4066800000000000;
      pFVar12 = pFVar7;
    }
    fVar13 = *(float *)(*(longlong *)(this->_padding_ + 0xe0) + 0xc0);
  }
  pFVar12[1]._padding_ = (longlong)(double)fVar13;
  *(undefined1 *)&pFVar12[1]._padding_ =
       *(undefined1 *)(*(longlong *)(this->_padding_ + 0xe0) + 0xd4);
LAB_14cd0b523:
  lVar2 = this->_padding_;
  local_120[0].ReferenceController = *(TReferenceControllerBase<1> **)(lVar2 + 0x110);
  local_128 = *(FDynamicMesh3 **)(lVar2 + 0x108);
  if (local_120[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_120[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_120[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&pFVar12->OriginalMesh != (TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *)&local_128) {
    (pFVar12->OriginalMesh).Object = local_128;
    local_128 = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar12->OriginalMesh).SharedReferenceCount,local_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120[0].ReferenceController);
  this_00 = *(UObjectBaseUtility **)(lVar2 + 200);
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar9 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
    pFVar10 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar9);
  }
  pdVar11 = (double *)(**(code **)(pFVar10->_padding_ + 0x28))(pFVar10,local_88);
  local_110._s_0.X = *pdVar11;
  local_110._s_0.Y = pdVar11[1];
  local_110._s_0.Z = pdVar11[2];
  local_110._s_0.W = pdVar11[3];
  local_e0 = pdVar11[6];
  local_f0 = pdVar11[4];
  dStack_e8 = pdVar11[5];
  local_c8 = pdVar11[10];
  local_d8 = pdVar11[8];
  dStack_d0 = pdVar11[9];
  local_b0 = local_e0;
  local_98 = local_c8;
  UE::Geometry::FMeshSpaceDeformerOp::SetTransform
            (pFVar12,(TTransformSRT3<double> *)&local_110._s_0);
  dVar4 = *(double *)(lVar2 + 0x178);
  (pFVar12->GizmoFrame).Origin.field0_0x0._s_0.X = *(double *)(lVar2 + 0x170);
  (pFVar12->GizmoFrame).Origin.field0_0x0._s_0.Y = dVar4;
  dVar4 = *(double *)(lVar2 + 0x188);
  (pFVar12->GizmoFrame).Origin.field0_0x0._s_0.Z = *(double *)(lVar2 + 0x180);
  (pFVar12->GizmoFrame).Rotation.field0_0x0._s_0.X = dVar4;
  dVar4 = *(double *)(lVar2 + 0x198);
  (pFVar12->GizmoFrame).Rotation.field0_0x0._s_0.Y = *(double *)(lVar2 + 400);
  (pFVar12->GizmoFrame).Rotation.field0_0x0._s_0.Z = dVar4;
  (pFVar12->GizmoFrame).Rotation.field0_0x0._s_0.W = *(double *)(lVar2 + 0x1a0);
  pFVar12->UpperBoundsInterval = (double)*(float *)(*(longlong *)(lVar2 + 0xe0) + 0xb4);
  pFVar12->LowerBoundsInterval = (double)*(float *)(*(longlong *)(lVar2 + 0xe0) + 0xb8);
  in_RDX->_padding_ = (longlong)pFVar12;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// StaticRegisterNativesUSpaceDeformerOperatorFactory @ 14cd2f380

void __cdecl USpaceDeformerOperatorFactory::StaticRegisterNativesUSpaceDeformerOperatorFactory(void)

{
  return;
}

