// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 26

// StaticClass @ 14966e590

UClass * __cdecl UViewAdjustedStaticMeshGizmoComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UViewAdjustedStaticMeshGizmoComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ViewAdjustedStaticMeshGizmoComponent",
               &Z_Registration_Info_UClass_UViewAdjustedStaticMeshGizmoComponent.InnerSingleton,
               StaticRegisterNativesUViewAdjustedStaticMeshGizmoComponent,0x6c0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UViewAdjustedStaticMeshGizmoComponent>,
               InternalVTableHelperCtorCaller<UViewAdjustedStaticMeshGizmoComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewAdjustedStaticMeshGizmoComponent.InnerSingleton;
}

// UViewAdjustedStaticMeshGizmoComponent @ 149688880

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UViewAdjustedStaticMeshGizmoComponent * __thiscall
UViewAdjustedStaticMeshGizmoComponent::UViewAdjustedStaticMeshGizmoComponent
          (UViewAdjustedStaticMeshGizmoComponent *this,FVTableHelper *param_1)

{
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UViewAdjustedStaticMeshGizmoComponent__6B_;
  (this->GizmoViewContext).field0_0x0.DebugPtr = (UGizmoViewContext *)0x0;
  (this->SubstituteInteractionComponent).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->HoverOverrideMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->TransformAdjuster).Object = (IViewBasedTransformAdjuster *)0x0;
  (this->TransformAdjuster).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bHovered = false;
  this->bInteracted = false;
  *(undefined8 *)&this->RenderVisibilityFunc = 0;
  *(undefined8 *)&(this->RenderVisibilityFunc).field_0x28 = 0;
  return this;
}

// UViewAdjustedStaticMeshGizmoComponent @ 149688930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UViewAdjustedStaticMeshGizmoComponent * __thiscall
UViewAdjustedStaticMeshGizmoComponent::UViewAdjustedStaticMeshGizmoComponent
          (UViewAdjustedStaticMeshGizmoComponent *this,FObjectInitializer *param_1)

{
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UViewAdjustedStaticMeshGizmoComponent__6B_;
  (this->GizmoViewContext).field0_0x0.DebugPtr = (UGizmoViewContext *)0x0;
  (this->SubstituteInteractionComponent).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->HoverOverrideMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->TransformAdjuster).Object = (IViewBasedTransformAdjuster *)0x0;
  (this->TransformAdjuster).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bHovered = false;
  this->bInteracted = false;
  *(undefined8 *)&this->RenderVisibilityFunc = 0;
  *(undefined8 *)&(this->RenderVisibilityFunc).field_0x28 = 0;
  return this;
}

// ~UViewAdjustedStaticMeshGizmoComponent @ 14968ac90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UViewAdjustedStaticMeshGizmoComponent::~UViewAdjustedStaticMeshGizmoComponent
          (UViewAdjustedStaticMeshGizmoComponent *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UViewAdjustedStaticMeshGizmoComponent__6B_;
  if (*(longlong *)&this->RenderVisibilityFunc != 0) {
    plVar1 = *(longlong **)&(this->RenderVisibilityFunc).field_0x28;
    plVar2 = (longlong *)&(this->RenderVisibilityFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TransformAdjuster).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IGizmoBaseComponentInterface__6B_;
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  return;
}

// CalcBounds @ 149694bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UViewAdjustedStaticMeshGizmoComponent::CalcBounds
          (UViewAdjustedStaticMeshGizmoComponent *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TTransform<double> *param_1)

{
  IViewBasedTransformAdjuster *pIVar1;
  TVector<double>_u_0 local_48;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  
  UStaticMeshComponent::CalcBounds
            ((UStaticMeshComponent *)this,(TBoxSphereBounds<double,double> *)&local_48._s_0,param_1)
  ;
  pIVar1 = (this->TransformAdjuster).Object;
  if (pIVar1 == (IViewBasedTransformAdjuster *)0x0) {
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = local_48._s_0.X;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = local_48._s_0.Y;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_48._s_0.Z;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dStack_30;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = local_28;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dStack_20;
    __return_storage_ptr__->SphereRadius = local_18;
    return __return_storage_ptr__;
  }
  (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,__return_storage_ptr__,param_1,&local_48);
  return __return_storage_ptr__;
}

// CreateStaticMeshSceneProxy @ 14969bee0

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
UViewAdjustedStaticMeshGizmoComponent::CreateStaticMeshSceneProxy
          (UViewAdjustedStaticMeshGizmoComponent *this,FMaterialAudit *param_1,bool param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  FStaticMeshSceneProxy *this_00;
  undefined8 *puVar5;
  FStaticMeshSceneProxyDesc local_198;
  
  this_00 = ::operator_new(0xbe0);
  if (this_00 != (FStaticMeshSceneProxy *)0x0) {
    FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc(&local_198,(UStaticMeshComponent *)this);
    local_198._padding_ =
         (longlong)
         &___7FViewAdjustedStaticMeshSceneProxyDesc_ViewAdjustedStaticMeshGizmoComponentLocals__6B_;
    FStaticMeshSceneProxy::FStaticMeshSceneProxy(this_00,&local_198,false);
    FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc(&local_198);
    *(undefined ***)this_00 =
         &
         ___7FViewAdjustedStaticMeshGizmoComponentProxy_ViewAdjustedStaticMeshGizmoComponentLocals__6B_
    ;
    *(IViewBasedTransformAdjuster **)&this_00->field_0xb88 = (this->TransformAdjuster).Object;
    pTVar1 = (this->TransformAdjuster).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)(this_00 + 1) = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TObjectPtr<UMaterialInterface>_u_0 *)&this_00[1].field_0x8 =
         (this->HoverOverrideMaterial).field0_0x0;
    this_00[1].field_0x10 = this->bHovered;
    if ((this->bInteracted == false) ||
       ((this->SubstituteInteractionComponent).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    this_00[1].field_0x11 = uVar4;
    lVar2 = *(longlong *)&this->RenderVisibilityFunc;
    *(longlong *)&this_00[1].field_0x20 = lVar2;
    *(undefined8 *)&this_00[1].field_0x48 = 0;
    if (lVar2 != 0) {
      puVar3 = *(undefined8 **)&(this->RenderVisibilityFunc).field_0x28;
      puVar5 = (undefined8 *)&(this->RenderVisibilityFunc).field_0x10;
      if (puVar3 != (undefined8 *)0x0) {
        puVar5 = puVar3;
      }
      (**(code **)*puVar5)();
    }
    return (FPrimitiveSceneProxy *)this_00;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetMaterialRelevance @ 1496a34f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __thiscall
UViewAdjustedStaticMeshGizmoComponent::GetMaterialRelevance
          (UViewAdjustedStaticMeshGizmoComponent *this,EShaderPlatform param_1)

{
  uint uVar1;
  UMaterialInterface *this_00;
  FMaterialRelevance FVar2;
  undefined6 in_register_00000012;
  FMaterialRelevance_u_0 FVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  FVar3.Raw._2_6_ = in_register_00000012;
  FVar3.Raw._0_2_ = param_1;
  UMeshComponent::GetMaterialRelevance((UMeshComponent *)this,param_1);
  this_00 = (this->HoverOverrideMaterial).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialInterface *)0x0) {
    FVar2 = UMaterialInterface::GetRelevance_Concurrent(this_00,(EShaderPlatform)local_res8);
    uVar1 = *(uint *)FVar3;
    *(ulonglong *)FVar3 = *(ulonglong *)FVar3 | *(ulonglong *)FVar2.field0_0x0;
    uVar4 = *(uint *)FVar2.field0_0x0 >> 0x12;
    if (((byte)(*(uint *)FVar2.field0_0x0 >> 0x12) & 0x3f) < ((byte)(uVar1 >> 0x12) & 0x3f)) {
      uVar4 = uVar1 >> 0x12;
    }
    *(uint *)FVar3 =
         (uVar4 << 0x12 ^ (uint)*(ulonglong *)FVar3) & 0xfc0000 ^ (uint)*(ulonglong *)FVar3;
  }
  return (FMaterialRelevance)FVar3;
}

// GetMaterialRelevance @ 1496a3580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __thiscall
UViewAdjustedStaticMeshGizmoComponent::GetMaterialRelevance
          (UViewAdjustedStaticMeshGizmoComponent *this,Type param_1)

{
  code *pcVar1;
  FMaterialRelevance_u_0 FVar2;
  undefined4 in_register_00000014;
  int in_R8D;
  
  FVar2.Raw._4_4_ = in_register_00000014;
  FVar2.Raw._0_4_ = param_1;
  pcVar1 = *(code **)(this->_padding_ + 0xaa8);
  if (in_R8D == 5) {
    (*pcVar1)(this,param_1,0x9b);
    return (FMaterialRelevance)FVar2;
  }
  (*pcVar1)(this,param_1,GRHIGlobals.ShaderPlatformForFeatureLevel[in_R8D]);
  return (FMaterialRelevance)FVar2._s_0;
}

// GetPrivateStaticClass @ 1496a7990

UClass * __cdecl UViewAdjustedStaticMeshGizmoComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UViewAdjustedStaticMeshGizmoComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ViewAdjustedStaticMeshGizmoComponent",
               &Z_Registration_Info_UClass_UViewAdjustedStaticMeshGizmoComponent.InnerSingleton,
               StaticRegisterNativesUViewAdjustedStaticMeshGizmoComponent,0x6c0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UViewAdjustedStaticMeshGizmoComponent>,
               InternalVTableHelperCtorCaller<UViewAdjustedStaticMeshGizmoComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewAdjustedStaticMeshGizmoComponent.InnerSingleton;
}

// IsHLODRelevant @ 1496ad590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UViewAdjustedStaticMeshGizmoComponent::IsHLODRelevant(UViewAdjustedStaticMeshGizmoComponent *this)

{
  return false;
}

// LineTraceComponent @ 1496b3010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UViewAdjustedStaticMeshGizmoComponent::LineTraceComponent
          (UViewAdjustedStaticMeshGizmoComponent *this,FHitResult *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FCollisionQueryParams *param_4)

{
  UGizmoViewContext *pUVar1;
  IViewBasedTransformAdjuster *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  bool bVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  longlong *plVar25;
  longlong lVar26;
  undefined1 auStackY_238 [32];
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_168;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pUVar1 = (this->GizmoViewContext).field0_0x0.DebugPtr;
  if (pUVar1 == (UGizmoViewContext *)0x0) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_235107819748065016>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\ViewAdjustedStaticMeshGizmoComponent.cpp"
                        ,0x108,"GizmoViewContext");
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      uVar17 = (*pcVar4)();
      return (bool)uVar17;
    }
    local_1e8._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_1e8._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_1e8._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    local_1c8._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_1c8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_1c8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    bVar16 = UPrimitiveComponent::LineTraceComponent
                       ((UPrimitiveComponent *)this,param_1,(TVector<double> *)&local_1c8._s_0,
                        (TVector<double> *)&local_1e8._s_0,param_4);
    return bVar16;
  }
  pIVar2 = (this->TransformAdjuster).Object;
  if (pIVar2 == (IViewBasedTransformAdjuster *)0x0) {
    if ((*(longlong *)&this->RenderVisibilityFunc != 0) &&
       (bVar16 = UE::Core::Private::Function::
                 TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&)>
                 ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&)>
                               *)&this->RenderVisibilityFunc,
                              (ISceneViewInterface *)&pUVar1->field_0x28,
                              (TTransform<double> *)&this->_padding_), !bVar16)) {
      return false;
    }
    goto LAB_1496b3311;
  }
  local_148 = (double)this->_padding_;
  dStack_140 = (double)this->_padding_;
  local_138 = (double)this->_padding_;
  dStack_130 = (double)this->_padding_;
  local_128 = (double)this->_padding_;
  dStack_120 = (double)this->_padding_;
  local_118 = (double)this->_padding_;
  dStack_110 = (double)this->_padding_;
  local_108 = (undefined4)this->_padding_;
  uStack_104 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  uStack_100 = (undefined4)this->_padding_;
  uStack_fc = *(undefined4 *)((longlong)&this->_padding_ + 4);
  local_f8 = (undefined4)this->_padding_;
  uStack_f4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  uStack_f0 = (undefined4)this->_padding_;
  uStack_ec = *(undefined4 *)((longlong)&this->_padding_ + 4);
  uVar18 = (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_e8,&pUVar1->field_0x28,&local_148);
  uVar21 = 0;
  if (*(void **)&this->RenderVisibilityFunc != (void *)0x0) {
    pUVar1 = (this->GizmoViewContext).field0_0x0.DebugPtr;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->RenderVisibilityFunc);
    pcVar4 = *(code **)&this->RenderVisibilityFunc;
    plVar3 = *(longlong **)&(this->RenderVisibilityFunc).field_0x28;
    plVar25 = (longlong *)&(this->RenderVisibilityFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar25 = plVar3;
    }
    uVar20 = (**(code **)(*plVar25 + 8))();
    uVar18 = (*pcVar4)(uVar20,&pUVar1->field_0x28);
    uVar21 = (undefined4)uVar20;
    if ((char)uVar18 == '\0') {
      return false;
    }
  }
  lVar26 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)(dStack_110 - local_e8.Translation.ZW.m128d_f64[1])
                                   >> 0x20) & _UNK_15061cc8c,
                             SUB84(dStack_110 - local_e8.Translation.ZW.m128d_f64[1],0) &
                             _UNK_15061cc88));
  auVar5._8_4_ = (int)lVar26;
  auVar5._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)
                                          (local_118 - local_e8.Translation.ZW.m128d_f64[0]) >> 0x20
                                         ) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(local_118 - local_e8.Translation.ZW.m128d_f64[0],0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar5._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
  uVar22 = movmskpd(uVar21,auVar5);
  lVar26 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)(dStack_120 - local_e8.Translation.XY.m128d_f64[1])
                                   >> 0x20) & _UNK_15061cc8c,
                             SUB84(dStack_120 - local_e8.Translation.XY.m128d_f64[1],0) &
                             _UNK_15061cc88));
  auVar13._8_4_ = (int)lVar26;
  auVar13._0_8_ =
       -(ulonglong)
        (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)(local_128 - local_e8.Translation.XY.m128d_f64[0]) >>
                               0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_128 - local_e8.Translation.XY.m128d_f64[0],0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar13._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
  iVar19 = movmskpd(uVar18,auVar13);
  if ((uVar22 & 0x3fffffff) == 0 && iVar19 == 0) {
    lVar26 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)(dStack_130 - local_e8.Rotation.ZW.m128d_f64[1]) >>
                                     0x20) & _UNK_15061cc8c,
                               SUB84(dStack_130 - local_e8.Rotation.ZW.m128d_f64[1],0) &
                               _UNK_15061cc88));
    auVar6._8_4_ = (int)lVar26;
    auVar6._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)
                                            (local_138 - local_e8.Rotation.ZW.m128d_f64[0]) >> 0x20)
                                     & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(local_138 - local_e8.Rotation.ZW.m128d_f64[0],0) &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar6._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    iVar23 = movmskpd(0,auVar6);
    lVar26 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)(dStack_140 - local_e8.Rotation.XY.m128d_f64[1]) >>
                                     0x20) & _UNK_15061cc8c,
                               SUB84(dStack_140 - local_e8.Rotation.XY.m128d_f64[1],0) &
                               _UNK_15061cc88));
    auVar7._8_4_ = (int)lVar26;
    auVar7._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)
                                            (local_148 - local_e8.Rotation.XY.m128d_f64[0]) >> 0x20)
                                     & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(local_148 - local_e8.Rotation.XY.m128d_f64[0],0) &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar7._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    uVar22 = movmskpd(iVar19,auVar7);
    uVar24 = iVar23 << 2 | uVar22;
    if (uVar24 != 0) {
      lVar26 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)(dStack_130 + local_e8.Rotation.ZW.m128d_f64[1])
                                       >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dStack_130 + local_e8.Rotation.ZW.m128d_f64[1],0) &
                                 _UNK_15061cc88));
      auVar8._8_4_ = (int)lVar26;
      auVar8._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)
                                              (local_138 + local_e8.Rotation.ZW.m128d_f64[0]) >>
                                             0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(local_138 + local_e8.Rotation.ZW.m128d_f64[0],0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar8._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      uVar24 = movmskpd(uVar24,auVar8);
      lVar26 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)(dStack_140 + local_e8.Rotation.XY.m128d_f64[1])
                                       >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dStack_140 + local_e8.Rotation.XY.m128d_f64[1],0) &
                                 _UNK_15061cc88));
      auVar15._8_4_ = (int)lVar26;
      auVar15._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)(local_148 + local_e8.Rotation.XY.m128d_f64[0]) >>
                                   0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_148 + local_e8.Rotation.XY.m128d_f64[0],0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar15._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      uVar22 = movmskpd(uVar22,auVar15);
      if ((uVar24 & 0x3fffffff) != 0 || uVar22 != 0) goto LAB_1496b32b8;
    }
    dVar10 = (double)CONCAT44(uStack_f4,local_f8) - local_e8.Scale3D.ZW.m128d_f64[0];
    local_e8.Scale3D.ZW.m128d_f64[1] =
         (double)CONCAT44(uStack_ec,uStack_f0) - local_e8.Scale3D.ZW.m128d_f64[1];
    lVar26 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)local_e8.Scale3D.ZW.m128d_f64[1] >> 0x20) &
                               _UNK_15061cc8c,
                               SUB84(local_e8.Scale3D.ZW.m128d_f64[1],0) & _UNK_15061cc88));
    dVar11 = (double)CONCAT44(uStack_104,local_108) - local_e8.Scale3D.XY.m128d_f64[0];
    dVar12 = (double)CONCAT44(uStack_fc,uStack_100) - local_e8.Scale3D.XY.m128d_f64[1];
    auVar9._8_4_ = (int)lVar26;
    auVar9._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar9._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    uVar24 = movmskpd(0,auVar9);
    lVar26 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar12,0) & _UNK_15061cc88));
    auVar14._8_4_ = (int)lVar26;
    auVar14._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar14._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    iVar19 = movmskpd(uVar22,auVar14);
    if ((uVar24 & 0x3fffffff) == 0 && iVar19 == 0) goto LAB_1496b3311;
  }
LAB_1496b32b8:
  FBodyInstance::SetBodyTransform((FBodyInstance *)&this->_padding_,&local_e8,None,true);
  local_1a8._s_0.Z = local_e8.Scale3D.ZW.m128d_f64[0];
  local_1a8._s_0.X = local_e8.Scale3D.XY.m128d_f64[0];
  local_1a8._s_0.Y = local_e8.Scale3D.XY.m128d_f64[1];
  FBodyInstance::UpdateBodyScale
            ((FBodyInstance *)&this->_padding_,(TVector<double> *)&local_1a8._s_0,false);
LAB_1496b3311:
  local_188._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_188._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_188._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  local_168._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_168._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_168._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  bVar16 = UPrimitiveComponent::LineTraceComponent
                     ((UPrimitiveComponent *)this,param_1,(TVector<double> *)&local_168._s_0,
                      (TVector<double> *)&local_188._s_0,param_4);
  return bVar16;
}

// NeedsLoadForServer @ 1496b4740

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UViewAdjustedStaticMeshGizmoComponent::NeedsLoadForServer
          (UViewAdjustedStaticMeshGizmoComponent *this)

{
  return false;
}

// SetAllMaterials @ 1496bd1d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UViewAdjustedStaticMeshGizmoComponent::SetAllMaterials
          (UViewAdjustedStaticMeshGizmoComponent *this,UMaterialInterface *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(this->_padding_ + 0x810))();
  if (0 < iVar1) {
    do {
      (**(code **)(this->_padding_ + 0x6b8))(this,iVar2,param_1);
      iVar2 = iVar2 + 1;
      iVar1 = (**(code **)(this->_padding_ + 0x810))(this);
    } while (iVar2 < iVar1);
  }
  return;
}

// SetHoverOverrideMaterial @ 1496bda90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UViewAdjustedStaticMeshGizmoComponent::SetHoverOverrideMaterial
          (UViewAdjustedStaticMeshGizmoComponent *this,UMaterialInterface *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->HoverOverrideMaterial).field0_0x0.DebugPtr = param_1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetRenderVisibilityFunction @ 1496bfa10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UViewAdjustedStaticMeshGizmoComponent::SetRenderVisibilityFunction
          (UViewAdjustedStaticMeshGizmoComponent *this,
          TFunction<bool___cdecl(UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&)>
          *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = *(longlong *)param_1;
  uStack_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,&local_48);
  }
  lVar6 = *(longlong *)&this->RenderVisibilityFunc;
  uVar7 = *(undefined8 *)&(this->RenderVisibilityFunc).field_0x8;
  uVar1 = *(undefined4 *)&(this->RenderVisibilityFunc).field_0x10;
  uVar2 = *(undefined4 *)&(this->RenderVisibilityFunc).field_0x14;
  uVar3 = *(undefined4 *)&(this->RenderVisibilityFunc).field_0x18;
  uVar4 = *(undefined4 *)&(this->RenderVisibilityFunc).field_0x1c;
  uVar5 = *(undefined8 *)&(this->RenderVisibilityFunc).field_0x20;
  plVar10 = *(longlong **)&(this->RenderVisibilityFunc).field_0x28;
  *(longlong *)&this->RenderVisibilityFunc = local_58;
  *(undefined8 *)&(this->RenderVisibilityFunc).field_0x8 = uStack_50;
  *(undefined4 *)&(this->RenderVisibilityFunc).field_0x10 = (undefined4)local_48;
  *(undefined4 *)&(this->RenderVisibilityFunc).field_0x14 = local_48._4_4_;
  *(undefined4 *)&(this->RenderVisibilityFunc).field_0x18 = uStack_40;
  *(undefined4 *)&(this->RenderVisibilityFunc).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->RenderVisibilityFunc).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->RenderVisibilityFunc).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->RenderVisibilityFunc).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->RenderVisibilityFunc).field_0x2c = uStack_30._4_4_;
  local_48._0_4_ = uVar1;
  local_48._4_4_ = uVar2;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  local_38 = uVar5;
  uStack_30 = plVar10;
  local_58 = lVar6;
  uStack_50 = uVar7;
  if (lVar6 != 0) {
    plVar9 = &local_48;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return;
}

// SetSubstituteInteractionComponent @ 1496bfed0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UViewAdjustedStaticMeshGizmoComponent::SetSubstituteInteractionComponent
          (UViewAdjustedStaticMeshGizmoComponent *this,UPrimitiveComponent *param_1,
          TTransform<double> *param_2)

{
  UPrimitiveComponent *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->SubstituteInteractionComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UPrimitiveComponent *)0x0) {
    bVar2 = param_1 == (UPrimitiveComponent *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if (pUVar1 != (UPrimitiveComponent *)0x0) {
      if (pUVar1->bRegistered != 0) {
        UActorComponent::UnregisterComponent((UActorComponent *)pUVar1);
      }
      pUVar1 = (this->SubstituteInteractionComponent).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar1 + 0x518))
                (pUVar1,&FDetachmentTransformRules::KeepWorldTransform);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (param_1 == (UPrimitiveComponent *)0x0)) {
      (this->SubstituteInteractionComponent).field0_0x0.DebugPtr = param_1;
      if (param_1 == (UPrimitiveComponent *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)param_1);
      (this->SubstituteInteractionComponent).field0_0x0.DebugPtr = param_1;
    }
    if ((param_1->field_0x98 & 1) != 0) {
      UActorComponent::UnregisterComponent((UActorComponent *)param_1);
    }
    (**(code **)(*(longlong *)param_1 + 0x508))(param_1,this);
    USceneComponent::SetRelativeTransform
              ((USceneComponent *)param_1,param_2,false,(FHitResult *)0x0,None);
    UActorComponent::RegisterComponent((UActorComponent *)param_1);
    (**(code **)(this->_padding_ + 0x20))(&this->_padding_,0);
  }
  return;
}

// SetTransformAdjuster @ 1496c06c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UViewAdjustedStaticMeshGizmoComponent::SetTransformAdjuster
          (UViewAdjustedStaticMeshGizmoComponent *this,
          TSharedPtr<UE::GizmoRenderingUtil::IViewBasedTransformAdjuster,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IViewBasedTransformAdjuster *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->TransformAdjuster).SharedReferenceCount.ReferenceController;
  (this->TransformAdjuster).Object = pIVar2;
  (this->TransformAdjuster).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StaticRegisterNativesUViewAdjustedStaticMeshGizmoComponent @ 1496c2db0

void __cdecl
UViewAdjustedStaticMeshGizmoComponent::StaticRegisterNativesUViewAdjustedStaticMeshGizmoComponent
          (void)

{
  return;
}

// UpdateHoverState @ 1496c4150

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UViewAdjustedStaticMeshGizmoComponent::UpdateHoverState
          (UViewAdjustedStaticMeshGizmoComponent *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (bool)(char)this->_padding_) {
    *(bool *)&this->_padding_ = param_1;
    if (this[-1]._padding_ != this[-1]._padding_) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneProxy == SceneData.SceneProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\PrimitiveComponent.h"
                         ,0x801,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this[-1]._padding_ != 0) {
      *(char *)(this[-1]._padding_ + 0xba0) = (char)this->_padding_;
    }
  }
  return;
}

// UpdateInteractingState @ 1496c42e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UViewAdjustedStaticMeshGizmoComponent::UpdateInteractingState
          (UViewAdjustedStaticMeshGizmoComponent *this,bool param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  *(bool *)((longlong)&this->_padding_ + 1) = param_1;
  if ((USceneComponent *)this->_padding_ != (USceneComponent *)0x0) {
    USceneComponent::SetVisibility((USceneComponent *)this->_padding_,param_1,DirtyOnly);
  }
  if (this[-1]._padding_ != this[-1]._padding_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneProxy == SceneData.SceneProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\PrimitiveComponent.h"
                       ,0x801,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = this[-1]._padding_;
  if (lVar1 != 0) {
    if ((*(char *)((longlong)&this->_padding_ + 1) != '\0') && (this->_padding_ != 0)) {
      *(undefined1 *)(lVar1 + 0xba1) = 1;
      return;
    }
    *(undefined1 *)(lVar1 + 0xba1) = 0;
  }
  return;
}

// UpdateWorldLocalState @ 1496c5b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UViewAdjustedStaticMeshGizmoComponent::UpdateWorldLocalState
          (UViewAdjustedStaticMeshGizmoComponent *this,bool param_1)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  longlong *plVar2;
  undefined7 in_register_00000011;
  
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,CONCAT71(in_register_00000011,param_1));
  }
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar1 = Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
    }
  }
  return;
}

// _getUObject @ 1496ca870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall
UViewAdjustedStaticMeshGizmoComponent::_getUObject(UViewAdjustedStaticMeshGizmoComponent *this)

{
  return (UObject *)&this[-1].RenderVisibilityFunc.field_0x8;
}

// _getUObject`adjustor{552}' @ 1496ca87c

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UViewAdjustedStaticMeshGizmoComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall
UViewAdjustedStaticMeshGizmoComponent::_getUObject_adjustor_552__
          (UViewAdjustedStaticMeshGizmoComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UViewAdjustedStaticMeshGizmoComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{560}' @ 1496ca890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UViewAdjustedStaticMeshGizmoComponent::_getUObject`adjustor{560}' (void)const __ptr64 */

UObject * __thiscall
UViewAdjustedStaticMeshGizmoComponent::_getUObject_adjustor_560__
          (UViewAdjustedStaticMeshGizmoComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UViewAdjustedStaticMeshGizmoComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{568}' @ 1496ca8a4

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UViewAdjustedStaticMeshGizmoComponent::_getUObject`adjustor{568}' (void)const __ptr64 */

UObject * __thiscall
UViewAdjustedStaticMeshGizmoComponent::_getUObject_adjustor_568__
          (UViewAdjustedStaticMeshGizmoComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UViewAdjustedStaticMeshGizmoComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1576}' @ 1496ca8b8

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UViewAdjustedStaticMeshGizmoComponent::_getUObject`adjustor{1576}' (void)const __ptr64 */

UObject * __thiscall
UViewAdjustedStaticMeshGizmoComponent::_getUObject_adjustor_1576__
          (UViewAdjustedStaticMeshGizmoComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UViewAdjustedStaticMeshGizmoComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

