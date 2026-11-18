// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 10

// StaticClass @ 14966d8d0

UClass * __cdecl UGizmoRectangleComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoRectangleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoRectangleComponent",
               &Z_Registration_Info_UClass_UGizmoRectangleComponent.InnerSingleton,
               StaticRegisterNativesUGizmoRectangleComponent,0x5d0,0x10,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UGizmoRectangleComponent>,
               InternalVTableHelperCtorCaller<UGizmoRectangleComponent>,local_res8,
               UGizmoBaseComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoRectangleComponent.InnerSingleton;
}

// UGizmoRectangleComponent @ 1496861f0

UGizmoRectangleComponent * __thiscall
UGizmoRectangleComponent::UGizmoRectangleComponent
          (UGizmoRectangleComponent *this,FVTableHelper *param_1)

{
  UGizmoBaseComponent::UGizmoBaseComponent((UGizmoBaseComponent *)this,param_1);
  this->LengthX = 20.0;
  this->bOrientYAccordingToCamera = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UGizmoRectangleComponent__6B_;
  (this->DirectionX).field0_0x0._s_0.Z = 1.0;
  (this->DirectionY).field0_0x0._s_0.Y = 1.0;
  (this->DirectionX).field0_0x0._s_0.X = 0.0;
  (this->DirectionX).field0_0x0._s_0.Y = 0.0;
  (this->DirectionY).field0_0x0._s_0.X = 0.0;
  (this->DirectionY).field0_0x0._s_0.Z = 0.0;
  this->OffsetX = 0.0;
  this->OffsetY = 0.0;
  this->LengthY = 20.0;
  this->Thickness = 2.0;
  this->SegmentFlags = '\x0f';
  return this;
}

// UGizmoRectangleComponent @ 1496862d0

UGizmoRectangleComponent * __thiscall
UGizmoRectangleComponent::UGizmoRectangleComponent(UGizmoRectangleComponent *this)

{
  UGizmoBaseComponent::UGizmoBaseComponent((UGizmoBaseComponent *)this);
  this->LengthX = 20.0;
  this->bOrientYAccordingToCamera = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UGizmoRectangleComponent__6B_;
  (this->DirectionX).field0_0x0._s_0.Z = 1.0;
  (this->DirectionY).field0_0x0._s_0.Y = 1.0;
  (this->DirectionX).field0_0x0._s_0.X = 0.0;
  (this->DirectionX).field0_0x0._s_0.Y = 0.0;
  (this->DirectionY).field0_0x0._s_0.X = 0.0;
  (this->DirectionY).field0_0x0._s_0.Z = 0.0;
  this->OffsetX = 0.0;
  this->OffsetY = 0.0;
  this->LengthY = 20.0;
  this->Thickness = 2.0;
  this->SegmentFlags = '\x0f';
  return this;
}

// ~UGizmoRectangleComponent @ 14968a0f0

void __thiscall UGizmoRectangleComponent::~UGizmoRectangleComponent(UGizmoRectangleComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UGizmoRectangleComponent__6B_;
  UGizmoBaseComponent::~UGizmoBaseComponent((UGizmoBaseComponent *)this);
  return;
}

// CalcBounds @ 149694b10

TBoxSphereBounds<double,double> * __thiscall
UGizmoRectangleComponent::CalcBounds
          (UGizmoRectangleComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  TSphere<double> *pTVar5;
  float fVar6;
  float fVar7;
  TVector<double>_u_0 local_48;
  double local_30;
  TSphere<double> local_28;
  
  fVar7 = this->OffsetY;
  if (this->OffsetY <= this->OffsetX) {
    fVar7 = this->OffsetX;
  }
  local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  fVar6 = this->LengthY;
  if (this->LengthY <= this->LengthX) {
    fVar6 = this->LengthX;
  }
  local_30 = (double)(fVar7 * __real_42c80000 + fVar6);
  pTVar5 = UE::Math::TSphere<double>::TransformBy
                     ((TSphere<double> *)&local_48._s_0,&local_28,param_1);
  dVar4 = (pTVar5->Center).field0_0x0._s_0.Y;
  dVar1 = (pTVar5->Center).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (pTVar5->Center).field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar4;
  uVar2 = *(undefined4 *)&pTVar5->W;
  uVar3 = *(undefined4 *)((longlong)&pTVar5->W + 4);
  *(undefined4 *)&__return_storage_ptr__->SphereRadius = uVar2;
  *(undefined4 *)((longlong)&__return_storage_ptr__->SphereRadius + 4) = uVar3;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar1;
  *(undefined4 *)&(__return_storage_ptr__->BoxExtent).field0_0x0 = uVar2;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 4) = uVar3;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 8) = uVar2;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0xc) = uVar3;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0x10) = uVar2;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0x14) = uVar3;
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 14969bda0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UGizmoRectangleComponent::CreateSceneProxy(UGizmoRectangleComponent *this)

{
  longlong lVar1;
  double dVar2;
  FPrimitiveSceneProxy *this_00;
  
  this_00 = ::operator_new(0x300);
  if (this_00 == (FPrimitiveSceneProxy *)0x0) {
    this_00 = (FPrimitiveSceneProxy *)0x0;
  }
  else {
    FPrimitiveSceneProxy::FPrimitiveSceneProxy(this_00,(UPrimitiveComponent *)this,(FName)0x0);
    this_00->_padding_ = (longlong)&___7FGizmoRectangleComponentSceneProxy__6B_;
    lVar1 = this->_padding_;
    this_00[1]._padding_ = this->_padding_;
    this_00[1]._padding_ = lVar1;
    dVar2 = (this->DirectionX).field0_0x0._s_0.Y;
    this_00[1].DebugMassData.AllocatorInstance.Data =
         (FScriptContainerElement *)(this->DirectionX).field0_0x0._s_0.X;
    *(double *)&this_00[1].DebugMassData.ArrayNum = dVar2;
    this_00[1].SimpleStreamableAssetManagerIndex.Object =
         (int *)(this->DirectionX).field0_0x0._s_0.Z;
    dVar2 = (this->DirectionY).field0_0x0._s_0.Y;
    this_00[1].SimpleStreamableAssetManagerIndex.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)(this->DirectionY).field0_0x0._s_0.X;
    *(double *)&this_00[1].WireframeColor.field0_0x0 = dVar2;
    *(double *)((longlong)&this_00[1].WireframeColor.field0_0x0 + 8) =
         (this->DirectionY).field0_0x0._s_0.Z;
    *(bool *)&this_00[1].PrimitiveColor.field0_0x0 = this->bOrientYAccordingToCamera;
    this_00[1].PrimitiveColor.field0_0x0._s_0.G = this->OffsetX;
    this_00[1].PrimitiveColor.field0_0x0._s_0.B = this->OffsetY;
    this_00[1].PrimitiveColor.field0_0x0._s_0.A = this->LengthX;
    *(float *)&this_00[1].CustomPrimitiveData.Data.AllocatorInstance.Data = this->LengthY;
    *(float *)((longlong)&this_00[1].CustomPrimitiveData.Data.AllocatorInstance.Data + 4) =
         this->Thickness;
    this_00[1].CustomPrimitiveData.Data.ArrayNum = (int)this->_padding_;
    *(uchar *)&this_00[1].CustomPrimitiveData.Data.ArrayMax = this->SegmentFlags;
  }
  *(longlong **)&this_00[1].TranslucencySortPriority = &this->_padding_;
  *(undefined1 **)&this_00[1].Mobility = (undefined1 *)((longlong)&this->_padding_ + 1);
  this_00[1].StatId.StatIdPtr = (TStatIdData *)&this->_padding_;
  return this_00;
}

// GetPrivateStaticClass @ 1496a5fd0

UClass * __cdecl UGizmoRectangleComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoRectangleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoRectangleComponent",
               &Z_Registration_Info_UClass_UGizmoRectangleComponent.InnerSingleton,
               StaticRegisterNativesUGizmoRectangleComponent,0x5d0,0x10,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UGizmoRectangleComponent>,
               InternalVTableHelperCtorCaller<UGizmoRectangleComponent>,local_res8,
               UGizmoBaseComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoRectangleComponent.InnerSingleton;
}

// GetUsedMaterials @ 1496a94f0

void __thiscall
UGizmoRectangleComponent::GetUsedMaterials
          (UGizmoRectangleComponent *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  return;
}

// LineTraceComponent @ 1496b26a0

bool __thiscall
UGizmoRectangleComponent::LineTraceComponent
          (UGizmoRectangleComponent *this,FHitResult *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FCollisionQueryParams *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_200;
  float local_1f0 [2];
  TVector<double>_u_0 local_1e8;
  longlong *local_1d0;
  UGizmoRectangleComponent *local_1c8;
  UGizmoRectangleComponent *local_1c0;
  code *local_1b8;
  longlong **local_1b0;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_190;
  double local_178;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8 [6];
  
  uVar14 = 0;
  dVar23 = (double)this->_padding_ * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar4 = (double)this->_padding_ * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar36 = (undefined4)((ulonglong)dVar4 >> 0x20);
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  local_1f0[0] = 1.0;
  auVar39._8_4_ = SUB84(dVar4,0);
  auVar39._0_8_ = dVar23;
  auVar39._12_4_ = uVar36;
  dVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * (double)this->_padding_;
  dVar5 = (double)this->_padding_ * 0.0;
  local_1d0 = &this->_padding_;
  auVar35._0_8_ = this->_padding_;
  auVar35._8_8_ = this->_padding_;
  local_c8[0]._0_8_ = this->_padding_;
  local_c8[0]._8_8_ = this->_padding_;
  dVar38 = (double)this->_padding_;
  auVar26 = blendpd(local_c8[0]._0_16_,auVar35,2);
  auVar40._0_8_ = auVar39._8_8_ * (double)local_c8[0]._0_8_ - (double)local_c8[0]._8_8_ * dVar23;
  auVar40._8_8_ = dVar24 * (double)local_c8[0]._8_8_ - (double)auVar35._0_8_ * dVar4;
  auVar18._8_4_ = SUB84(dVar4,0);
  auVar18._0_8_ = dVar23;
  auVar18._12_4_ = uVar36;
  auVar41._8_4_ = SUB84(dVar5,0);
  auVar41._0_8_ = dVar24;
  auVar41._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar19 = blendpd(auVar18,auVar41,2);
  auVar20._0_8_ = auVar19._0_8_ * (double)auVar35._0_8_ - auVar26._0_8_ * dVar24;
  auVar20._8_8_ = auVar19._8_8_ * (double)auVar35._8_8_ - auVar26._8_8_ * dVar5;
  auVar19._0_8_ = this->_padding_;
  auVar19._8_8_ = this->_padding_;
  local_1b0 = &local_1d0;
  auVar41 = blendpd(auVar40,auVar20,2);
  dVar5 = auVar40._8_8_ + auVar40._8_8_;
  dVar17 = auVar20._0_8_ + auVar20._0_8_;
  uVar36 = (undefined4)((ulonglong)dVar17 >> 0x20);
  local_1b8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UGizmoRectangleComponent::LineTraceComponent'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
              ::Call;
  auVar42._0_8_ = auVar41._0_8_ + auVar41._0_8_;
  auVar42._8_8_ = auVar41._8_8_ + auVar41._8_8_;
  auVar33._8_4_ = SUB84(dVar17,0);
  auVar33._0_8_ = dVar5;
  auVar33._12_4_ = uVar36;
  auVar30._8_4_ = SUB84(dVar17,0);
  auVar30._0_8_ = dVar5;
  auVar30._12_4_ = uVar36;
  auVar41 = blendpd(auVar30,auVar42,2);
  auVar34._0_8_ = auVar33._8_8_ * (double)auVar19._0_8_ - (double)auVar19._8_8_ * dVar5;
  auVar34._8_8_ = auVar42._0_8_ * (double)auVar19._8_8_ - (double)auVar35._0_8_ * dVar17;
  auVar26._8_4_ = SUB84(auVar34._8_8_,0);
  auVar26._0_8_ = auVar34._0_8_;
  auVar26._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
  auVar19 = blendpd(auVar19,auVar35,2);
  auVar31._0_8_ = auVar41._0_8_ * (double)auVar35._0_8_ - auVar19._0_8_ * auVar42._0_8_;
  auVar31._8_8_ = auVar41._8_8_ * (double)auVar35._8_8_ - auVar19._8_8_ * auVar42._8_8_;
  auVar35 = blendpd(auVar34,auVar31,2);
  dVar17 = dVar17 * dVar38 + dVar4 + auVar31._0_8_ + (double)this->_padding_;
  local_168._s_0.Z = auVar42._0_8_ * dVar38 + dVar24 + auVar35._0_8_ + (double)this->_padding_;
  local_168._8_4_ = SUB84(dVar17,0);
  local_168._0_8_ = dVar5 * dVar38 + dVar23 + auVar26._8_8_ + (double)this->_padding_;
  local_168._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  bVar7 = GizmoRectangleComponentLocals::GetWorldCorners<UGizmoViewContext>
                    (SUB81(this->_padding_,0),(UGizmoViewContext *)this->_padding_,
                     (TVector<double> *)&local_168._s_0,&this->DirectionX,&this->DirectionY,
                     this->OffsetX,this->OffsetY,this->LengthX,this->LengthY,
                     *(bool *)((longlong)&this->_padding_ + 1),this->bOrientYAccordingToCamera,
                     (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                      *)&local_1b8,&local_200,local_1f0);
  if (bVar7) {
    bVar7 = false;
    dVar5 = (double)(local_1f0[0] * *(float *)((longlong)&this->_padding_ + 4));
    uVar16 = uVar14;
    do {
      dVar4 = (param_3->field0_0x0)._s_0.X;
      dVar24 = (param_3->field0_0x0)._s_0.Y;
      dVar17 = (param_3->field0_0x0)._s_0.Z;
      uVar15 = (int)uVar14 + 1;
      dVar38 = (param_2->field0_0x0)._s_0.X;
      dVar25 = (param_2->field0_0x0)._s_0.Y;
      dVar23 = (param_2->field0_0x0)._s_0.Z;
      uVar12 = uVar15 & 0x80000003;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
      }
      uVar10 = 0;
      if ((int)uVar12 < local_200.ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
      }
      dVar32 = *(double *)(local_200.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x18 + 0x10);
      auVar35 = *(undefined1 (*) [16])
                 (local_200.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x18);
      if (local_200.ArrayNum <= (int)uVar14) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
      }
      local_e8._s_0.X = (double)*(undefined8 *)(local_200.AllocatorInstance.Data + uVar16);
      local_e8._s_0.Y = (double)*(undefined8 *)(local_200.AllocatorInstance.Data + uVar16 + 8);
      local_e8._s_0.Z = (double)*(undefined8 *)(local_200.AllocatorInstance.Data + uVar16 + 0x10);
      local_148._s_0.X = dVar4;
      local_148._s_0.Y = dVar24;
      local_148._s_0.Z = dVar17;
      local_128._s_0.X = dVar38;
      local_128._s_0.Y = dVar25;
      local_128._s_0.Z = dVar23;
      local_108._0_16_ = auVar35;
      local_108._s_0.Z = dVar32;
      FMath::SegmentDistToSegmentSafe<double>
                ((TVector<double> *)&local_e8._s_0,(TVector<double> *)&local_108._s_0,
                 (TVector<double> *)&local_128._s_0,(TVector<double> *)&local_148._s_0,
                 (TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_1e8._s_0);
      auVar27._0_8_ =
           (local_1e8._s_0.Y - local_1a8._s_0.Y) * (local_1e8._s_0.Y - local_1a8._s_0.Y) +
           (local_1e8._s_0.X - local_1a8._s_0.X) * (local_1e8._s_0.X - local_1a8._s_0.X) +
           (local_1e8._s_0.Z - local_1a8._s_0.Z) * (local_1e8._s_0.Z - local_1a8._s_0.Z);
      auVar27._8_8_ = 0;
      auVar35 = sqrtpd(auVar35,auVar27);
      if (auVar35._0_8_ < dVar5) {
        bVar7 = true;
        local_1c8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&(param_1->Component).WeakPtr,(FObjectPtr)&local_1c8);
        dVar23 = local_1e8._s_0.Y - (param_2->field0_0x0)._s_0.Y;
        dVar5 = local_1e8._s_0.X - (param_2->field0_0x0)._s_0.X;
        dVar17 = local_1e8._s_0.Z - (param_2->field0_0x0)._s_0.Z;
        auVar21._0_8_ = dVar17 * dVar17;
        auVar21._8_8_ = 0;
        auVar28._0_8_ = dVar23 * dVar23 + dVar5 * dVar5 + auVar21._0_8_;
        auVar28._8_8_ = 0;
        auVar19 = sqrtpd(auVar21,auVar28);
        *(double *)&param_1->ImpactPoint = local_1e8._s_0.X;
        *(double *)&(param_1->ImpactPoint).field_0x8 = local_1e8._s_0.Y;
        param_1->Distance = (float)auVar19._0_8_;
        *(double *)&(param_1->ImpactPoint).field_0x10 = local_1e8._s_0.Z;
        dVar5 = auVar35._0_8_;
      }
      uVar16 = uVar16 + 0x18;
      uVar14 = (ulonglong)uVar15;
    } while ((int)uVar15 < 4);
    if (bVar7) {
      if (local_200.ArrayNum < 2) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
      }
      FVar6.Data = local_200.AllocatorInstance.Data;
      iVar11 = local_200.ArrayNum;
      if (local_200.ArrayNum < 1) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        iVar11 = local_200.ArrayNum;
      }
      dVar4 = __real_3e45798ee0000000;
      dVar23 = __real_3ff0000000000000;
      dVar38 = *(double *)(FVar6.Data + 0x18) - *(double *)local_200.AllocatorInstance.Data;
      dVar5 = *(double *)(FVar6.Data + 0x20) - *(double *)(local_200.AllocatorInstance.Data + 8);
      dVar17 = *(double *)(FVar6.Data + 0x28) - *(double *)(local_200.AllocatorInstance.Data + 0x10)
      ;
      dVar24 = dVar5 * dVar5 + dVar38 * dVar38 + dVar17 * dVar17;
      if (__real_3e45798ee0000000 < dVar24) {
        local_178 = __real_3ff0000000000000 / SQRT(dVar24);
        dVar38 = dVar38 * local_178;
        dVar5 = dVar5 * local_178;
        dVar17 = dVar17 * local_178;
      }
      if (iVar11 < 3) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        iVar11 = local_200.ArrayNum;
      }
      FVar6.Data = local_200.AllocatorInstance.Data;
      if (iVar11 < 1) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
      }
      dVar32 = *(double *)(FVar6.Data + 0x30) - *(double *)local_200.AllocatorInstance.Data;
      dVar37 = *(double *)(FVar6.Data + 0x38) - *(double *)(local_200.AllocatorInstance.Data + 8);
      dVar24 = *(double *)(FVar6.Data + 0x40) - *(double *)(local_200.AllocatorInstance.Data + 0x10)
      ;
      dVar25 = dVar37 * dVar37 + dVar32 * dVar32 + dVar24 * dVar24;
      if (dVar4 < dVar25) {
        dVar23 = dVar23 / SQRT(dVar25);
        dVar32 = dVar32 * dVar23;
        dVar37 = dVar37 * dVar23;
        dVar24 = dVar24 * dVar23;
      }
      *(double *)&param_1->ImpactNormal = dVar37 * dVar17 - dVar24 * dVar5;
      *(double *)&(param_1->ImpactNormal).field_0x8 = dVar24 * dVar38 - dVar32 * dVar17;
      *(double *)&(param_1->ImpactNormal).field_0x10 = dVar32 * dVar5 - dVar37 * dVar38;
      UE::Math::TVector<double>::Normalize((TVector<double> *)&param_1->ImpactNormal,dVar4);
LAB_1496b2f7b:
      bVar7 = true;
    }
    else {
      piVar13 = Triangles[0] + 1;
      do {
        uVar12 = piVar13[1];
        uVar15 = 0;
        if ((int)uVar12 < local_200.ArrayNum) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
        }
        uVar15 = *piVar13;
        pFVar1 = local_200.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x18;
        uVar12 = 0;
        if ((int)uVar15 < local_200.ArrayNum) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        iVar11 = local_200.ArrayNum;
        if (uVar12 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
          iVar11 = local_200.ArrayNum;
        }
        uVar12 = (*(int (*) [3])(piVar13 + -1))[0];
        pFVar2 = local_200.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x18;
        uVar15 = 0;
        if ((int)uVar12 < iVar11) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
        }
        bVar7 = FMath::SegmentTriangleIntersection
                          (param_2,param_3,
                           (TVector<double> *)
                           (local_200.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x18),
                           (TVector<double> *)pFVar2,(TVector<double> *)pFVar1,
                           (TVector<double> *)&local_190._s_0,(TVector<double> *)&local_c8[0]._s_0);
        if (bVar7) {
          local_1c0 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=(&(param_1->Component).WeakPtr,(FObjectPtr)&local_1c0);
          dVar17 = local_190._s_0.Y - (param_2->field0_0x0)._s_0.Y;
          dVar23 = local_190._s_0.X - (param_2->field0_0x0)._s_0.X;
          dVar5 = local_190._s_0.Z - (param_2->field0_0x0)._s_0.Z;
          auVar22._0_8_ = dVar17 * dVar17;
          auVar22._8_8_ = 0;
          auVar29._0_8_ = dVar23 * dVar23 + auVar22._0_8_ + dVar5 * dVar5;
          auVar29._8_8_ = 0;
          auVar35 = sqrtpd(auVar22,auVar29);
          *(double *)&param_1->ImpactPoint = local_190._s_0.X;
          *(double *)&(param_1->ImpactPoint).field_0x8 = local_190._s_0.Y;
          param_1->Distance = (float)auVar35._0_8_;
          *(double *)&(param_1->ImpactPoint).field_0x10 = local_190._s_0.Z;
          *(undefined8 *)&param_1->ImpactNormal = local_c8[0]._s_0.X;
          *(undefined8 *)&(param_1->ImpactNormal).field_0x8 = local_c8[0]._s_0.Y;
          *(undefined8 *)&(param_1->ImpactNormal).field_0x10 = local_c8[0]._s_0.Z;
          goto LAB_1496b2f7b;
        }
        piVar13 = piVar13 + 3;
      } while ((longlong)piVar13 < 0x151e95ddc);
      bVar7 = false;
    }
  }
  else {
    bVar7 = false;
  }
  if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.AllocatorInstance.Data);
  }
  return bVar7;
}

// StaticRegisterNativesUGizmoRectangleComponent @ 1496c2ac0

void __cdecl UGizmoRectangleComponent::StaticRegisterNativesUGizmoRectangleComponent(void)

{
  return;
}

