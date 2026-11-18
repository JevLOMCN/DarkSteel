// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cc92160

UClass * __cdecl UHoleFillOperatorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHoleFillOperatorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"HoleFillOperatorFactory",
               &Z_Registration_Info_UClass_UHoleFillOperatorFactory.InnerSingleton,
               StaticRegisterNativesUHoleFillOperatorFactory,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UHoleFillOperatorFactory>,
               InternalVTableHelperCtorCaller<UHoleFillOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHoleFillOperatorFactory.InnerSingleton;
}

// UHoleFillOperatorFactory @ 14ccbad60

UHoleFillOperatorFactory * __thiscall
UHoleFillOperatorFactory::UHoleFillOperatorFactory
          (UHoleFillOperatorFactory *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->FillTool).field0_0x0.DebugPtr = (UHoleFillTool *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  return this;
}

// UHoleFillOperatorFactory @ 14ccbada0

UHoleFillOperatorFactory * __thiscall
UHoleFillOperatorFactory::UHoleFillOperatorFactory
          (UHoleFillOperatorFactory *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->FillTool).field0_0x0.DebugPtr = (UHoleFillTool *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  return this;
}

// ~UHoleFillOperatorFactory @ 14ccc33f0

void __thiscall UHoleFillOperatorFactory::~UHoleFillOperatorFactory(UHoleFillOperatorFactory *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14ccfef60

UClass * __cdecl UHoleFillOperatorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHoleFillOperatorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"HoleFillOperatorFactory",
               &Z_Registration_Info_UClass_UHoleFillOperatorFactory.InnerSingleton,
               StaticRegisterNativesUHoleFillOperatorFactory,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UHoleFillOperatorFactory>,
               InternalVTableHelperCtorCaller<UHoleFillOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHoleFillOperatorFactory.InnerSingleton;
}

// MakeNewOperator @ 14cd09710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall UHoleFillOperatorFactory::MakeNewOperator(UHoleFillOperatorFactory *this)

{
  float fVar1;
  undefined4 uVar2;
  UObjectBaseUtility *this_00;
  TReferenceControllerBase<1> *pTVar3;
  FDynamicMesh3 *pFVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  FHoleFillOp *this_01;
  FHoleFillOp *pFVar10;
  UClass *pUVar11;
  FHoleFillOp *pFVar12;
  FDynamicMeshOperator *in_RDX;
  undefined1 auStack_138 [33];
  undefined7 uStack_117;
  undefined8 local_108;
  undefined4 uStack_fc;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  this_01 = ::operator_new(0x108);
  pFVar12 = (FHoleFillOp *)0x0;
  pFVar10 = pFVar12;
  if (this_01 != (FHoleFillOp *)0x0) {
    memset(this_01,0,0x108);
    pFVar10 = UE::Geometry::FHoleFillOp::FHoleFillOp(this_01);
  }
  this_00 = *(UObjectBaseUtility **)(this->_padding_ + 200);
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar11 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
    pFVar12 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar11);
  }
  (**(code **)(pFVar12->_padding_ + 0x28))(pFVar12,&local_98);
  local_e8 = local_98;
  local_d8 = local_88;
  local_e0 = uStack_90;
  local_d0 = uStack_80;
  local_b8 = local_68;
  local_108 = local_48;
  local_c8 = local_78;
  uStack_c0 = uStack_70;
  local_a0 = local_48;
  local_b0 = local_58;
  uStack_ac = uStack_54;
  uStack_a8 = uStack_50;
  uStack_a4 = uStack_4c;
  (**(code **)(pFVar10->_padding_ + 8))(pFVar10,&local_e8);
  pTVar3 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x110);
  pFVar4 = *(FDynamicMesh3 **)(this->_padding_ + 0x108);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (pFVar10->OriginalMesh).SharedReferenceCount.ReferenceController;
  (pFVar10->OriginalMesh).Object = pFVar4;
  (pFVar10->OriginalMesh).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pFVar10->MeshUVScaleFactor = (double)*(float *)(this->_padding_ + 0x118);
  UHoleFillTool::GetLoopsToFill((UHoleFillTool *)this->_padding_,&pFVar10->Loops);
  pFVar10->FillType = *(EHoleFillOpFillType *)(*(longlong *)(this->_padding_ + 0xe0) + 0xb0);
  (pFVar10->FillOptions).bRemoveIsolatedTriangles =
       *(bool *)(*(longlong *)(this->_padding_ + 0xe0) + 0xb1);
  (pFVar10->FillOptions).bQuickFillSmallHoles =
       *(bool *)(*(longlong *)(this->_padding_ + 0xe0) + 0xb2);
  lVar5 = *(longlong *)(this->_padding_ + 0xd8);
  fVar1 = *(float *)(lVar5 + 0xc0);
  uVar7 = *(undefined4 *)(lVar5 + 200);
  uVar8 = *(undefined4 *)(lVar5 + 0xcc);
  uVar9 = *(undefined8 *)(lVar5 + 0xb4);
  uVar2 = *(undefined4 *)(lVar5 + 0xbc);
  uStack_f0 = CONCAT31(uStack_f0._1_3_,*(undefined1 *)(lVar5 + 0xd0));
  *(ulonglong *)&pFVar10->SmoothFillOptions = CONCAT71(uStack_117,*(undefined1 *)(lVar5 + 0xb0));
  (pFVar10->SmoothFillOptions).InteriorSmoothness = (double)fVar1;
  (pFVar10->SmoothFillOptions).RemeshingExteriorRegionWidth = (int)uVar9;
  (pFVar10->SmoothFillOptions).SmoothingExteriorRegionWidth = (int)((ulonglong)uVar9 >> 0x20);
  *(ulonglong *)&(pFVar10->SmoothFillOptions).SmoothingInteriorRegionWidth =
       CONCAT44(uStack_fc,uVar2);
  *(undefined4 *)&(pFVar10->SmoothFillOptions).FillDensityScalar = uVar7;
  *(undefined4 *)((longlong)&(pFVar10->SmoothFillOptions).FillDensityScalar + 4) = uVar8;
  *(undefined4 *)&(pFVar10->SmoothFillOptions).bProjectDuringRemesh = uStack_f0;
  *(undefined4 *)&(pFVar10->SmoothFillOptions).field_0x2c = uStack_ec;
  in_RDX->_padding_ = (longlong)pFVar10;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// StaticRegisterNativesUHoleFillOperatorFactory @ 14cd2edf0

void __cdecl UHoleFillOperatorFactory::StaticRegisterNativesUHoleFillOperatorFactory(void)

{
  return;
}

