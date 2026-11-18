// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEnginePlugin
// Functions: 19

// StaticClass @ 14daaec30

UClass * __cdecl UDataflowComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEnginePlugin",L"DataflowComponent",
               &Z_Registration_Info_UClass_UDataflowComponent.InnerSingleton,
               StaticRegisterNativesUDataflowComponent,0x690,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDataflowComponent>,
               InternalVTableHelperCtorCaller<UDataflowComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowComponent.InnerSingleton;
}

// UDataflowComponent @ 14daafc80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UDataflowComponent * __thiscall
UDataflowComponent::UDataflowComponent(UDataflowComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->Context).Object = (FContext *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->Context).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->RenderTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderTargets).ArrayNum = 0;
  (this->RenderTargets).ArrayMax = 0;
  (this->Dataflow).field0_0x0.DebugPtr = (UDataflow *)0x0;
  FManagedArrayCollection::FManagedArrayCollection(&this->RenderCollection);
  this->bUpdateRender = true;
  this->bUpdateSelection = true;
  this->bBoundsNeedsUpdate = true;
  (this->BoundingBox).Origin.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Origin.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Origin.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).SphereRadius = 0.0;
  (this->SelectionState).Mode = DSS_Dataflow_None;
  (this->SelectionState).Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectionState).Nodes.ArrayNum = 0;
  (this->SelectionState).Nodes.ArrayMax = 0;
  (this->SelectionState).Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectionState).Vertices.ArrayNum = 0;
  (this->SelectionState).Vertices.ArrayMax = 0;
  return this;
}

// UDataflowComponent @ 14daafd90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UDataflowComponent * __thiscall
UDataflowComponent::UDataflowComponent(UDataflowComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->Context).Object = (FContext *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->Context).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->RenderTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderTargets).ArrayNum = 0;
  (this->RenderTargets).ArrayMax = 0;
  (this->Dataflow).field0_0x0.DebugPtr = (UDataflow *)0x0;
  FManagedArrayCollection::FManagedArrayCollection(&this->RenderCollection);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  this->bUpdateRender = true;
  this->bUpdateSelection = true;
  this->bBoundsNeedsUpdate = true;
  (this->BoundingBox).Origin.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Origin.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Origin.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).SphereRadius = 0.0;
  (this->SelectionState).Mode = DSS_Dataflow_None;
  (this->SelectionState).Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectionState).Nodes.ArrayNum = 0;
  (this->SelectionState).Nodes.ArrayMax = 0;
  (this->SelectionState).Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectionState).Vertices.ArrayNum = 0;
  (this->SelectionState).Vertices.ArrayMax = 0;
  return this;
}

// ~UDataflowComponent @ 14daaffb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UDataflowComponent::~UDataflowComponent(UDataflowComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->SelectionState).Vertices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDataflowSelectionState::ObjectID,int>
            ((ObjectID *)(this->SelectionState).Nodes.AllocatorInstance.Data,
             (this->SelectionState).Nodes.ArrayNum);
  pFVar1 = (this->SelectionState).Nodes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->RenderCollection);
  pFVar1 = (this->RenderTargets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Context).SharedReferenceCount.ReferenceController);
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// AddRenderTarget @ 14dab1660

void __thiscall
UDataflowComponent::AddRenderTarget(UDataflowComponent *this,UDataflowEdNode *param_1)

{
  UDataflowEdNode *local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<UDataflowEdNode_const_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UDataflowEdNode_const_*_const_&>(&this->RenderTargets,local_res10);
  Invalidate(this);
  return;
}

// CalcBounds @ 14dab16a0

TBoxSphereBounds<double,double> * __thiscall
UDataflowComponent::CalcBounds
          (UDataflowComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  TMatrix<double> local_88;
  
  UE::Math::TTransform<double>::ToMatrixWithScale((TTransform<double> *)&this->_padding_,&local_88);
  UE::Math::TBoxSphereBounds<double,double>::TransformBy
            (&this->BoundingBox,__return_storage_ptr__,&local_88);
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 14dab3e90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UDataflowComponent::CreateSceneProxy(UDataflowComponent *this)

{
  bool bVar1;
  FRenderingFacade *this_00;
  FDataflowEngineSceneProxy *pFVar2;
  FRenderingFacade local_528;
  
  this_00 = GeometryCollection::Facades::FRenderingFacade::FRenderingFacade
                      (&local_528,&this->RenderCollection);
  bVar1 = GeometryCollection::Facades::FRenderingFacade::CanRenderSurface(this_00);
  if (bVar1) {
    pFVar2 = ::operator_new(0xa60);
    if (pFVar2 != (FDataflowEngineSceneProxy *)0x0) {
      pFVar2 = FDataflowEngineSceneProxy::FDataflowEngineSceneProxy(pFVar2,this);
      return (FPrimitiveSceneProxy *)pFVar2;
    }
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetDefaultMaterial @ 14dab41a0

UMaterialInterface * __thiscall UDataflowComponent::GetDefaultMaterial(UDataflowComponent *this)

{
  UClass *pUVar1;
  UMaterialInterface *pUVar2;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0x4e;
  local_28.DataPtr = (wchar_t *)0x0;
  local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
  local_18.DataPtr =
       L"/Engine/EditorMaterials/Dataflow/DataflowVertexMaterial.DataflowVertexMaterial";
  pUVar1 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  pUVar2 = (UMaterialInterface *)
           StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  return pUVar2;
}

// GetMaterial @ 14dab4970

UMaterialInterface * __thiscall
UDataflowComponent::GetMaterial(UDataflowComponent *this,int param_1)

{
  UClass *pUVar1;
  UMaterial *pUVar2;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  pUVar2 = (((this->Dataflow).field0_0x0.DebugPtr)->Material).field0_0x0.DebugPtr;
  if (pUVar2 == (UMaterial *)0x0) {
    local_18.DataPtr =
         L"/Engine/EditorMaterials/Dataflow/DataflowVertexMaterial.DataflowVertexMaterial";
    local_28.DataPtr = (wchar_t *)0x0;
    local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
    local_18.Size = 0x4e;
    pUVar1 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    pUVar2 = (UMaterial *)
             StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                              (FLinkerInstancingContext *)0x0);
  }
  return (UMaterialInterface *)pUVar2;
}

// GetMaterialRelevance @ 14dab4a00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __thiscall
UDataflowComponent::GetMaterialRelevance(UDataflowComponent *this,EShaderPlatform param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  UMaterial *this_00;
  FMaterialRelevance FVar4;
  undefined6 in_register_00000012;
  FMaterialRelevance_u_0 FVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  
  FVar5.Raw._2_6_ = in_register_00000012;
  FVar5.Raw._0_2_ = param_1;
  lVar2 = this->_padding_;
  iVar6 = 0;
  *(ulonglong *)FVar5 = 0;
  iVar3 = (**(code **)(lVar2 + 0x810))();
  if (0 < iVar3) {
    do {
      this_00 = (UMaterial *)(**(code **)(this->_padding_ + 0x690))(this,iVar6);
      if (this_00 == (UMaterial *)0x0) {
        this_00 = UMaterial::GetDefaultMaterial(MD_Surface);
      }
      FVar4 = UMaterialInterface::GetRelevance_Concurrent
                        ((UMaterialInterface *)this_00,(EShaderPlatform)local_res8);
      uVar1 = *(uint *)FVar5;
      uVar8 = *(ulonglong *)FVar4.field0_0x0;
      *(ulonglong *)FVar5 = *(ulonglong *)FVar5 | uVar8;
      uVar8 = uVar8 >> 0x12 & 0x3fff;
      lVar2 = this->_padding_;
      uVar7 = (uint)uVar8;
      if (((byte)uVar8 & 0x3f) < ((byte)(uVar1 >> 0x12) & 0x3f)) {
        uVar7 = uVar1 >> 0x12;
      }
      iVar6 = iVar6 + 1;
      *(uint *)FVar5 =
           (uVar7 << 0x12 ^ (uint)*(ulonglong *)FVar5) & 0xfc0000 ^ (uint)*(ulonglong *)FVar5;
      iVar3 = (**(code **)(lVar2 + 0x810))(this);
    } while (iVar6 < iVar3);
  }
  return (FMaterialRelevance)FVar5;
}

// GetMaterialRelevance @ 14dab4ad0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __thiscall
UDataflowComponent::GetMaterialRelevance(UDataflowComponent *this,Type param_1)

{
  code *pcVar1;
  FMaterialRelevance_u_0 FVar2;
  undefined4 in_register_00000014;
  int in_R8D;
  
  FVar2.Raw._4_4_ = in_register_00000014;
  FVar2.Raw._0_4_ = param_1;
  pcVar1 = *(code **)(this->_padding_ + 0xa90);
  if (in_R8D == 5) {
    (*pcVar1)(this,param_1,0x9b);
    return (FMaterialRelevance)FVar2;
  }
  (*pcVar1)(this,param_1,GRHIGlobals.ShaderPlatformForFeatureLevel[in_R8D]);
  return (FMaterialRelevance)FVar2._s_0;
}

// GetPrivateStaticClass @ 14dab5200

UClass * __cdecl UDataflowComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEnginePlugin",L"DataflowComponent",
               &Z_Registration_Info_UClass_UDataflowComponent.InnerSingleton,
               StaticRegisterNativesUDataflowComponent,0x690,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDataflowComponent>,
               InternalVTableHelperCtorCaller<UDataflowComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowComponent.InnerSingleton;
}

// GetRenderingCollection @ 14dab5300

FManagedArrayCollection * __thiscall
UDataflowComponent::GetRenderingCollection(UDataflowComponent *this)

{
  return &this->RenderCollection;
}

// Invalidate @ 14dab55e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDataflowComponent::Invalidate(UDataflowComponent *this)

{
  int *piVar1;
  FManagedArrayCollection *pFVar2;
  undefined1 auStackY_f8 [32];
  FManagedArrayCollection local_c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  this->bUpdateRender = true;
  this->bUpdateSelection = true;
  this->bBoundsNeedsUpdate = true;
  piVar1 = &(this->SelectionState).Vertices.ArrayMax;
  (this->SelectionState).Vertices.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SelectionState).Vertices.AllocatorInstance,0,piVar1);
  }
  pFVar2 = FManagedArrayCollection::FManagedArrayCollection(&local_c8);
  FManagedArrayCollection::operator=(&this->RenderCollection,pFVar2);
  FManagedArrayCollection::~FManagedArrayCollection(&local_c8);
  return;
}

// ModifyRenderingCollection @ 14dab56b0

FManagedArrayCollection * __thiscall
UDataflowComponent::ModifyRenderingCollection(UDataflowComponent *this)

{
  return &this->RenderCollection;
}

// ResetRenderTargets @ 14dab5750

void __thiscall UDataflowComponent::ResetRenderTargets(UDataflowComponent *this)

{
  (this->RenderTargets).ArrayNum = 0;
  if ((this->RenderTargets).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->RenderTargets).AllocatorInstance,0,&(this->RenderTargets).ArrayMax);
  }
  Invalidate(this);
  return;
}

// SetRenderingCollection @ 14dab57a0

void __thiscall
UDataflowComponent::SetRenderingCollection
          (UDataflowComponent *this,FManagedArrayCollection *param_1)

{
  Invalidate(this);
  FManagedArrayCollection::operator=(&this->RenderCollection,param_1);
  return;
}

// StaticRegisterNativesUDataflowComponent @ 14dab5970

void __cdecl UDataflowComponent::StaticRegisterNativesUDataflowComponent(void)

{
  return;
}

// UpdateLocalBounds @ 14dab5bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDataflowComponent::UpdateLocalBounds(UDataflowComponent *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TBox<double> *pTVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_208 [32];
  FBoundsFacade local_1e8;
  TBox<double> local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_208;
  if (this->bBoundsNeedsUpdate != false) {
    GeometryCollection::Facades::FBoundsFacade::FBoundsFacade(&local_1e8,&this->RenderCollection);
    GeometryCollection::Facades::FBoundsFacade::DefineSchema(&local_1e8);
    GeometryCollection::Facades::FBoundsFacade::UpdateBoundingBox(&local_1e8);
    pTVar6 = GeometryCollection::Facades::FBoundsFacade::GetBoundingBoxInCollectionSpace
                       (&local_1e8,&local_88);
    dVar4 = (pTVar6->Max).field0_0x0._s_0.X - (pTVar6->Min).field0_0x0._s_0.X;
    dVar1 = (pTVar6->Min).field0_0x0._s_0.Y;
    dVar2 = (pTVar6->Min).field0_0x0._s_0.Z;
    dVar5 = (pTVar6->Max).field0_0x0._s_0.Y - dVar1;
    dVar3 = (pTVar6->Max).field0_0x0._s_0.Z - dVar2;
    dVar11 = dVar4 * __real_3fe0000000000000;
    dVar10 = dVar5 * __real_3fe0000000000000;
    dVar9 = dVar3 * __real_3fe0000000000000;
    (this->BoundingBox).Origin.field0_0x0._s_0.X = dVar11 + (pTVar6->Min).field0_0x0._s_0.X;
    auVar7._0_8_ = dVar9 + dVar2;
    auVar7._8_8_ = 0;
    (this->BoundingBox).Origin.field0_0x0._s_0.Y = dVar10 + dVar1;
    (this->BoundingBox).Origin.field0_0x0._s_0.Z = auVar7._0_8_;
    (this->BoundingBox).BoxExtent.field0_0x0._s_0.X = dVar11;
    (this->BoundingBox).BoxExtent.field0_0x0._s_0.Y = dVar10;
    (this->BoundingBox).BoxExtent.field0_0x0._s_0.Z = dVar9;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3) * __real_3fd0000000000000;
    auVar8 = sqrtpd(auVar7,auVar8);
    (this->BoundingBox).SphereRadius = auVar8._0_8_;
    this->bBoundsNeedsUpdate = false;
    (**(code **)(this->_padding_ + 0x5b0))(this);
  }
  return;
}

