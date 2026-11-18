// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 54

// StaticClass @ 145ef1aa0

UClass * __cdecl ULandscapeHeightfieldCollisionComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeHeightfieldCollisionComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeHeightfieldCollisionComponent",
               &Z_Registration_Info_UClass_ULandscapeHeightfieldCollisionComponent.InnerSingleton,
               StaticRegisterNativesULandscapeHeightfieldCollisionComponent,0x650,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeHeightfieldCollisionComponent>,
               InternalVTableHelperCtorCaller<ULandscapeHeightfieldCollisionComponent>,local_res8,
               UPrimitiveComponent::StaticClass,ALandscapeProxy::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeHeightfieldCollisionComponent.InnerSingleton;
}

// GetPrivateStaticClass @ 145ef5890

UClass * __cdecl ULandscapeHeightfieldCollisionComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeHeightfieldCollisionComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeHeightfieldCollisionComponent",
               &Z_Registration_Info_UClass_ULandscapeHeightfieldCollisionComponent.InnerSingleton,
               StaticRegisterNativesULandscapeHeightfieldCollisionComponent,0x650,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeHeightfieldCollisionComponent>,
               InternalVTableHelperCtorCaller<ULandscapeHeightfieldCollisionComponent>,local_res8,
               UPrimitiveComponent::StaticClass,ALandscapeProxy::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeHeightfieldCollisionComponent.InnerSingleton;
}

// Serialize @ 145ef5ed0

void __thiscall
ULandscapeHeightfieldCollisionComponent::Serialize
          (ULandscapeHeightfieldCollisionComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesULandscapeHeightfieldCollisionComponent @ 145ef6040

void __cdecl
ULandscapeHeightfieldCollisionComponent::
StaticRegisterNativesULandscapeHeightfieldCollisionComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsGatheringGeometrySlices @ 145ef6120

bool __thiscall
ULandscapeHeightfieldCollisionComponent::SupportsGatheringGeometrySlices
          (ULandscapeHeightfieldCollisionComponent *this)

{
  return true;
}

// execGetRenderComponent @ 145ef6d80

void __cdecl
ULandscapeHeightfieldCollisionComponent::execGetRenderComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  ULandscapeComponent *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetRenderComponent((ULandscapeHeightfieldCollisionComponent *)param_1);
  *(ULandscapeComponent **)param_3 = pUVar1;
  return;
}

// ULandscapeHeightfieldCollisionComponent @ 145f02c70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ULandscapeHeightfieldCollisionComponent * __thiscall
ULandscapeHeightfieldCollisionComponent::ULandscapeHeightfieldCollisionComponent
          (ULandscapeHeightfieldCollisionComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->ComponentLayerInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentLayerInfos).ArrayNum = 0;
  (this->ComponentLayerInfos).ArrayMax = 0;
  this->bCookedCollisionDataWasDeleted = false;
  (this->CollisionQuadFlags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionQuadFlags).ArrayNum = 0;
  (this->CollisionQuadFlags).ArrayMax = 0;
  (this->HeightfieldGuid).A = 0;
  (this->HeightfieldGuid).B = 0;
  (this->HeightfieldGuid).C = 0;
  (this->HeightfieldGuid).D = 0;
  (this->CachedLocalBox).IsValid = '\0';
  (this->RenderComponentRef).field0_0x0.DebugPtr = (ULandscapeComponent *)0x0;
  (this->CookedCollisionData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedCollisionData).ArrayNum = 0;
  (this->CookedCollisionData).ArrayMax = 0;
  (this->CookedPhysicalMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedPhysicalMaterials).ArrayNum = 0;
  (this->CookedPhysicalMaterials).ArrayMax = 0;
  (this->HeightfieldRef).Reference = (FHeightfieldGeometryRef *)0x0;
  (this->LocalHeightfieldGeometryRef).Reference = (FHeightField *)0x0;
  (this->LocalHeightfieldSimpleGeometryRef).Reference = (FHeightField *)0x0;
  FNavHeightfieldSamples::FNavHeightfieldSamples(&this->CachedHeightFieldSamples);
  return this;
}

// ULandscapeHeightfieldCollisionComponent @ 145f02d60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ULandscapeHeightfieldCollisionComponent * __thiscall
ULandscapeHeightfieldCollisionComponent::ULandscapeHeightfieldCollisionComponent
          (ULandscapeHeightfieldCollisionComponent *this,FObjectInitializer *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->ComponentLayerInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentLayerInfos).ArrayNum = 0;
  (this->ComponentLayerInfos).ArrayMax = 0;
  this->bCookedCollisionDataWasDeleted = false;
  (this->CollisionQuadFlags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionQuadFlags).ArrayNum = 0;
  (this->CollisionQuadFlags).ArrayMax = 0;
  (this->HeightfieldGuid).A = 0;
  (this->HeightfieldGuid).B = 0;
  (this->HeightfieldGuid).C = 0;
  (this->HeightfieldGuid).D = 0;
  (this->CachedLocalBox).IsValid = '\0';
  (this->RenderComponentRef).field0_0x0.DebugPtr = (ULandscapeComponent *)0x0;
  (this->CookedCollisionData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedCollisionData).ArrayNum = 0;
  (this->CookedCollisionData).ArrayMax = 0;
  (this->CookedPhysicalMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedPhysicalMaterials).ArrayNum = 0;
  (this->CookedPhysicalMaterials).ArrayMax = 0;
  (this->HeightfieldRef).Reference = (FHeightfieldGeometryRef *)0x0;
  (this->LocalHeightfieldGeometryRef).Reference = (FHeightField *)0x0;
  (this->LocalHeightfieldSimpleGeometryRef).Reference = (FHeightField *)0x0;
  FNavHeightfieldSamples::FNavHeightfieldSamples(&this->CachedHeightFieldSamples);
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::BlockAll_ProfileName,true);
  UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this,false);
  this->field_0x27e = this->field_0x27e & 0xfe;
  this->field_0x27d = this->field_0x27d | 8;
  this->field_0x27c = this->field_0x27c & 0xfe;
  this->field_0x9a = this->field_0x9a | 0x80;
  this->field_0x1ab = 0;
  this->field_0x285 = 1;
  this->HeightfieldRowsCount = -1;
  this->HeightfieldColumnsCount = -1;
  UActorComponent::SetNetAddressable((UActorComponent *)this);
  return this;
}

// ~ULandscapeHeightfieldCollisionComponent @ 145f041c0

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
ULandscapeHeightfieldCollisionComponent::~ULandscapeHeightfieldCollisionComponent
          (ULandscapeHeightfieldCollisionComponent *this)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int iVar3;
  FHeightField *pFVar4;
  FHeightfieldGeometryRef *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  FNavHeightfieldSamples::~FNavHeightfieldSamples(&this->CachedHeightFieldSamples);
  pFVar4 = (this->LocalHeightfieldSimpleGeometryRef).Reference;
  if (pFVar4 != (FHeightField *)0x0) {
    LOCK();
    puVar1 = &pFVar4->field_0x8;
    iVar3 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (*(int *)&pFVar4->field_0xc == 0)) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  pFVar4 = (this->LocalHeightfieldGeometryRef).Reference;
  if (pFVar4 != (FHeightField *)0x0) {
    LOCK();
    puVar1 = &pFVar4->field_0x8;
    iVar3 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (*(int *)&pFVar4->field_0xc == 0)) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  pFVar5 = (this->HeightfieldRef).Reference;
  if (pFVar5 != (FHeightfieldGeometryRef *)0x0) {
    plVar2 = &pFVar5->_padding_;
    LOCK();
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  pFVar6 = (this->CookedPhysicalMaterials).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->CookedCollisionData).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->CollisionQuadFlags).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->ComponentLayerInfos).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// operator() @ 145f04c50

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
`ULandscapeHeightfieldCollisionComponent::CreateCollisionObject'::__l2::<lambda_1>::operator()
          (void *this,TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TObjectPtr<UPhysicalMaterial>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ALandscapeProxy *pAVar7;
  THandle<Chaos::FChaosPhysicsMaterial,24,8> *pTVar8;
  UPhysicalMaterial *this_00;
  FScriptContainerElement *pFVar9;
  undefined1 local_res18 [16];
  
  pFVar9 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPhysicalMaterial>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar9 == pFVar1) break;
    this_00 = *(UPhysicalMaterial **)pFVar9;
    if (this_00 == (UPhysicalMaterial *)0x0) {
      pAVar7 = CastChecked<ALandscapeProxy,UObject>(*(UObject **)(*(longlong *)this + 0x20));
      if ((pAVar7 == (ALandscapeProxy *)0x0) ||
         (this_00 = (pAVar7->DefaultPhysMaterial).field0_0x0.DebugPtr,
         this_00 == (UPhysicalMaterial *)0x0)) {
        this_00 = (GEngine->DefaultPhysMaterial).field0_0x0.DebugPtr;
      }
    }
    pTVar8 = &UPhysicalMaterial::GetPhysicsMaterial(this_00)->InnerHandle;
    pFVar3 = (param_1->AllocatorInstance).Data;
    if ((pFVar3 <= pTVar8) && (pTVar8 < pFVar3 + (longlong)param_1->ArrayMax * 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_1->ArrayNum;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar6 + 1;
    pFVar9 = pFVar9 + 8;
    *(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)
     ((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4) = *pTVar8;
  }
  return;
}

// operator() @ 145f04da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`ULandscapeHeightfieldCollisionComponent::DeferredDestroyCollision'::__l2::<lambda_1>::operator()
          (void *this)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FSimCallbackCommandObject *pFVar6;
  undefined ***pppuVar7;
  FSimCallbackCommandObject *pFVar8;
  FSimCallbackCommandObject *pFVar9;
  FSimCallbackCommandObject *pFVar10;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined4 local_70;
  FSimCallbackCommandObject *local_68;
  undefined **local_58;
  undefined8 uStack_50;
  FSimCallbackCommandObject *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar10 = (FSimCallbackCommandObject *)0x0;
  pFVar9 = *(FSimCallbackCommandObject **)((longlong)this + 0x10);
  pFVar8 = *(FSimCallbackCommandObject **)((longlong)this + 0x18);
  local_70 = 0;
  lVar3 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x40);
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  if (((Chaos::CVars::bEnableAsyncInitBody == false) && (bVar5 = IsInGameThread(), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                         ,0x1b3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = ::operator_new(0xc0);
  if (pFVar6 != (FSimCallbackCommandObject *)0x0) {
    uStack_50 = pFVar9;
    pFVar9 = uStack_50;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<``ULandscapeHeightfieldCollisionComponent::DeferredDestroyCollision'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    local_40 = (undefined ***)0x0;
    local_48 = pFVar8;
    *(undefined ***)pFVar6 = &___7FSimCallbackCommandObject_Chaos__6B_;
    *(undefined2 *)&pFVar6->field_0x8 = 0;
    *(undefined8 *)&pFVar6->field_0x10 = 0;
    *(undefined8 *)&pFVar6->field_0x18 = 0;
    *(undefined8 *)&pFVar6->field_0x20 = 0;
    *(undefined8 *)&pFVar6->field_0x28 = 0;
    *(undefined2 *)&pFVar6->field_0x40 = 1;
    *(code **)&pFVar6->Func =
         UE::Core::Private::Function::
         TFunctionRefCaller<``ULandscapeHeightfieldCollisionComponent::DeferredDestroyCollision'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
         ::Call;
    *(undefined8 *)&(pFVar6->Func).field_0x28 = 0;
    uStack_50._0_4_ = SUB84(pFVar9,0);
    uStack_50._4_4_ = (undefined4)((ulonglong)pFVar9 >> 0x20);
    *(undefined4 *)&(pFVar6->Func).field_0x10 = 0x51199d90;
    *(undefined4 *)&(pFVar6->Func).field_0x14 = 1;
    *(undefined4 *)&(pFVar6->Func).field_0x18 = (undefined4)uStack_50;
    *(undefined4 *)&(pFVar6->Func).field_0x1c = uStack_50._4_4_;
    *(FSimCallbackCommandObject **)&(pFVar6->Func).field_0x20 = pFVar8;
    local_68 = (FSimCallbackCommandObject *)
               UE::Core::Private::Function::
               TFunctionRefCaller<``ULandscapeHeightfieldCollisionComponent::DeferredDestroyCollision'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
               ::Call;
    if (*(longlong *)&pFVar6->Func != 0) {
      local_68 = pFVar10;
    }
    *(undefined8 *)&pFVar6->Func2 = 0;
    *(undefined8 *)&(pFVar6->Func2).field_0x28 = 0;
    pFVar6->bFuncHasTimeParameters = false;
    pFVar6->ExecuteOnStep = -1;
    uStack_50 = pFVar9;
    if (*(longlong *)&pFVar6->Func == 0) {
      `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                (local_78);
    }
    pFVar8 = pFVar10;
    pFVar9 = pFVar10;
    pFVar10 = pFVar6;
    if (local_68 != (FSimCallbackCommandObject *)0x0) {
      pppuVar7 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar7 = local_40;
      }
      (*(code *)(*pppuVar7)[2])();
    }
  }
  Chaos::FChaosMarshallingManager::RegisterSimCommand_External
            ((FChaosMarshallingManager *)(lVar3 + 0x98),pFVar10);
  if (pFVar8 != (FSimCallbackCommandObject *)0x0) {
    LOCK();
    puVar1 = &pFVar8->field_0x8;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)&pFVar8->field_0xc == 0)) {
      (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
    }
  }
  if (pFVar9 != (FSimCallbackCommandObject *)0x0) {
    LOCK();
    puVar1 = &pFVar9->field_0x8;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)&pFVar9->field_0xc == 0)) {
      (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
    }
  }
  return;
}

// operator() @ 145f04fa0

void __thiscall
`ULandscapeHeightfieldCollisionComponent::FillHeightTile'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  plVar9 = *(longlong **)((longlong)this + 8);
  iVar10 = 0;
  if (0 < (int)plVar9[1]) {
    do {
      dVar12 = Chaos::FHeightField::GetHeight(*(FHeightField **)(*plVar9 + 0x30),iVar10,param_1);
      pauVar2 = *(undefined1 (**) [16])((longlong)this + 0x10);
      plVar9 = *(longlong **)this;
      auVar19 = *pauVar2;
      dVar6 = *(double *)(pauVar2[1] + 8);
      dVar13 = (double)((float)dVar12 * *(float *)((longlong)this + 0x20));
      uVar11 = param_1 * *(int *)((longlong)this + 0x1c) + *(int *)((longlong)this + 0x18) + iVar10;
      auVar1 = pauVar2[1];
      auVar14 = *pauVar2;
      dVar12 = auVar1._0_8_;
      auVar15 = blendpd(auVar14,auVar1,2);
      auVar21._0_8_ = auVar14._0_8_ * 0.0 - auVar14._8_8_ * 0.0;
      auVar21._8_8_ = dVar13 * auVar14._8_8_ - dVar12 * 0.0;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar13;
      auVar14 = blendpd(ZEXT816(0),auVar14,2);
      auVar16._0_8_ = auVar14._0_8_ * dVar12 - auVar15._0_8_ * dVar13;
      auVar16._8_8_ = auVar14._8_8_ * auVar1._8_8_ - auVar15._8_8_ * 0.0;
      auVar14 = blendpd(auVar21,auVar16,2);
      auVar22._0_8_ = auVar14._0_8_ + auVar14._0_8_;
      auVar22._8_8_ = auVar14._8_8_ + auVar14._8_8_;
      dVar4 = auVar21._8_8_ + auVar21._8_8_;
      dVar5 = auVar16._0_8_ + auVar16._0_8_;
      uVar20 = (undefined4)((ulonglong)dVar5 >> 0x20);
      auVar17._8_4_ = SUB84(dVar5,0);
      auVar17._0_8_ = dVar4;
      auVar17._12_4_ = uVar20;
      auVar15._8_4_ = SUB84(dVar5,0);
      auVar15._0_8_ = dVar4;
      auVar15._12_4_ = uVar20;
      auVar14 = blendpd(auVar15,auVar22,2);
      auVar18._0_8_ = auVar17._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar4;
      auVar18._8_8_ = auVar22._0_8_ * auVar19._8_8_ - dVar12 * dVar5;
      auVar16 = blendpd(auVar19,auVar1,2);
      auVar19._0_8_ = auVar14._0_8_ * dVar12 - auVar16._0_8_ * auVar22._0_8_;
      auVar19._8_8_ = auVar14._8_8_ * auVar1._8_8_ - auVar16._8_8_ * auVar22._8_8_;
      auVar19 = blendpd(auVar18,auVar19,2);
      dVar12 = *(double *)pauVar2[3];
      uVar8 = 0;
      if ((int)uVar11 < (int)plVar9[1]) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar10 = iVar10 + 1;
      *(float *)(*plVar9 + (longlong)(int)uVar11 * 4) =
           (float)(auVar22._0_8_ * dVar6 + dVar13 + auVar19._0_8_ + dVar12);
      plVar9 = *(longlong **)((longlong)this + 8);
    } while (iVar10 < (int)plVar9[1]);
  }
  return;
}

// operator() @ 145f051c0

void __thiscall
`ULandscapeHeightfieldCollisionComponent::GenerateCollisionData'::__l8::<lambda_1>::operator()
          (void *this,int param_1,TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<unsigned_char_const_,int> *param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  UPhysicalMaterial **ppUVar11;
  uint uVar12;
  UPhysicalMaterial *pUVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int local_res8;
  FScriptContainerElement local_58 [4];
  int local_54;
  UPhysicalMaterial *local_50;
  UPhysicalMaterial *local_48 [2];
  int iVar13;
  
  if ((**(char **)((longlong)this + 0x10) != '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Params.bUseDefaultMaterialOnly",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                         ,0x4d5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_res8 = 0;
  if (0 < param_1) {
    iVar1 = param_1 + -1;
    local_54 = 0;
    do {
      iVar15 = 0;
      iVar9 = local_54;
      iVar17 = iVar1;
      do {
        iVar13 = iVar17;
        if (**(char **)((longlong)this + 8) == '\0') {
          iVar13 = iVar15;
        }
        uVar12 = iVar13 + iVar9;
        if ((local_res8 < iVar1) && (iVar15 < iVar1)) {
          if (param_2->ArrayNum == 0) {
            bVar7 = 0xff;
          }
          else {
            uVar8 = 0;
            if ((int)uVar12 < param_2->ArrayNum) {
              uVar8 = ~uVar12 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            bVar7 = param_2->DataPtr[(int)uVar12];
          }
          lVar16 = *(longlong *)((longlong)this + 0x10);
          if ((int)(uint)bVar7 < *(int *)(lVar16 + 0x80)) {
            if ((*(int *)(lVar16 + 0x80) <= (int)(uint)bVar7) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x78) + (ulonglong)bVar7 * 8);
          }
          else {
            lVar16 = 0;
          }
          lVar3 = *(longlong *)((longlong)this + 0x10);
          if ((*(char *)(lVar3 + 2) == '\0') || ((uint)bVar7 != *(uint *)(lVar3 + 0x88))) {
            if ((*(char *)(lVar3 + 1) == '\0') ||
               ((*(int *)(lVar3 + 0x70) == 0 || (param_3->ArrayNum == 0)))) {
              if ((lVar16 == 0) || (*(UObject **)(lVar16 + 0x30) == (UObject *)0x0)) {
                pUVar14 = (UPhysicalMaterial *)**(undefined8 **)((longlong)this + 0x18);
              }
              else {
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(*(UObject **)(lVar16 + 0x30));
                }
                pUVar14 = *(UPhysicalMaterial **)(lVar16 + 0x30);
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar14 != (UPhysicalMaterial *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar14);
                }
              }
              ppUVar11 = local_48;
              local_48[0] = pUVar14;
            }
            else {
              pbVar10 = TArrayView<unsigned_char_const_,int>::operator[](param_3,uVar12);
              bVar7 = *pbVar10;
              if (bVar7 == 0) {
                ppUVar11 = &local_50;
                local_50 = (UPhysicalMaterial *)**(undefined8 **)((longlong)this + 0x18);
              }
              else {
                lVar16 = *(longlong *)((longlong)this + 0x10);
                uVar12 = 0;
                if ((int)(bVar7 - 1) < *(int *)(lVar16 + 0x70)) {
                  uVar12 = ~(bVar7 - 1) >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                ppUVar11 = &local_50;
                local_50 = *(UPhysicalMaterial **)
                            (*(longlong *)(lVar16 + 0x68) + (ulonglong)bVar7 * 8 + -8);
              }
            }
            uVar12 = TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_>::
                     AddUniqueImpl<UPhysicalMaterial_*_const_&>
                               (*(TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> **)
                                 ((longlong)this + 0x20),ppUVar11);
          }
          else {
            uVar12 = 0xff;
          }
          pFVar4 = *(ForAnyElementType **)this;
          if (((uVar12 != (uVar12 & 0xff)) || ((int)uVar12 < 0)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_58[0] = SUB41(uVar12,0);
          if (((pFVar4->Data <= local_58) &&
              (local_58 < pFVar4->Data + *(int *)((longlong)&pFVar4[1].Data + 4))) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = *(int *)&pFVar4[1].Data;
          piVar2 = (int *)((longlong)&pFVar4[1].Data + 4);
          if (iVar9 == *piVar2) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,pFVar4,piVar2);
          }
          *(int *)&pFVar4[1].Data = iVar9 + 1;
          pFVar4->Data[iVar9] = local_58[0];
          iVar9 = local_54;
        }
        iVar15 = iVar15 + 1;
        iVar17 = iVar17 + -1;
      } while (iVar15 < param_1);
      local_res8 = local_res8 + 1;
      local_54 = iVar9 + param_1;
    } while (local_res8 < param_1);
  }
  return;
}

// operator() @ 145f055b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145f05934) */
/* WARNING: Removing unreachable block (ram,0x000145f05940) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSingleParticlePhysicsProxy * __thiscall
`ULandscapeHeightfieldCollisionComponent::OnCreatePhysicsState'::__l8::<lambda_1>::operator()
          (void *this)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar3;
  undefined8 uVar4;
  double adVar5 [2];
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  UActorComponent *this_00;
  FName FVar10;
  FScriptContainerElement *pFVar11;
  FShapeInstanceProxy *pFVar12;
  IPhysicsProxyBase *pIVar13;
  FImplicitObject *pFVar14;
  TGeometryParticle<double,3> *pTVar15;
  TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> this_01;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  bool bVar28;
  bool bVar29;
  UObject *pUVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  FSingleParticlePhysicsProxy *this_02;
  TEnumAsByte<ECollisionChannel> TVar35;
  int iVar36;
  int iVar37;
  UWorld *pUVar38;
  FString *pFVar39;
  longlong lVar40;
  TImplicitObjectTransformed<double,3,1> *pTVar41;
  TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_> TVar42;
  FCollisionResponseContainer *pFVar43;
  FImplicitObjectUnion *pFVar44;
  longlong lVar45;
  ForAnyElementType FVar46;
  ulonglong uVar47;
  TRefCountPtr<Chaos::FImplicitObject> TVar48;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar49;
  double dVar50;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar51 [16];
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  double dVar57;
  undefined1 unaff_XMM13 [16];
  undefined1 auStackY_558 [32];
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_520;
  undefined1 local_510 [8];
  TImplicitObjectTransformed<double,3,1> *local_508;
  TImplicitObjectTransformed<double,3,1> *local_500;
  TRefCountPtr<Chaos::FImplicitObject> local_4f8;
  TRefCountPtr<Chaos::FImplicitObject> local_4f0;
  FSingleParticlePhysicsProxy *local_4e8;
  FScriptContainerElement *local_4e0;
  FString local_4d8;
  FCollisionFilterData local_4c8;
  FCollisionFilterData local_4b8;
  FPhysicsFilterBuilder local_4a8;
  double local_498;
  double local_490;
  undefined8 *local_488;
  longlong local_480;
  TRefCountPtr<Chaos::FImplicitObject> local_478 [2];
  longlong local_468;
  UObject *local_460;
  undefined8 *local_458;
  FName local_450;
  FName local_448;
  TRawPtrProxy<TArray<char,TSizedDefaultAllocator<32>_>_> local_440;
  FString local_438;
  FString local_428;
  FCollisionFilterData local_418;
  FCollisionFilterData local_408;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  longlong lStack_3f0;
  FString local_3e8;
  FString local_3d8;
  FCollisionFilterData local_3c8;
  FCollisionFilterData local_3b8;
  TMatrix<double> local_3a8;
  TTransform<double> local_328;
  FActorCreationParams local_298;
  TArray<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  local_218;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198 [2];
  double local_188 [2];
  double local_178 [2];
  double local_168 [2];
  double local_158 [2];
  double local_148 [2];
  double local_138 [2];
  double local_128 [2];
  double local_118 [2];
  double local_108 [2];
  double local_f8 [2];
  double local_e8 [2];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_558;
  lVar45 = *(longlong *)this;
  dVar21 = *(double *)(lVar45 + 0x1f0);
  dVar52 = *(double *)(lVar45 + 0x1f8);
  dVar22 = *(double *)(lVar45 + 0x200);
  dVar23 = *(double *)(lVar45 + 0x208);
  dVar24 = *(double *)(lVar45 + 0x210);
  dVar25 = *(double *)(lVar45 + 0x218);
  dVar26 = *(double *)(lVar45 + 0x220);
  dVar27 = *(double *)(lVar45 + 0x228);
  adVar5 = *(double (*) [2])(lVar45 + 0x230);
  dVar53 = *(double *)(lVar45 + 0x240);
  local_328.Scale3D.ZW.m128d_f64[1] = *(double *)(lVar45 + 0x248);
  local_328.Rotation.XY.m128d_f64[0] = dVar21;
  local_328.Rotation.XY.m128d_f64[1] = dVar52;
  local_328.Rotation.ZW.m128d_f64[0] = dVar22;
  local_328.Rotation.ZW.m128d_f64[1] = dVar23;
  local_328.Translation.XY.m128d_f64[0] = dVar24;
  local_328.Translation.XY.m128d_f64[1] = dVar25;
  local_328.Translation.ZW.m128d_f64[0] = dVar26;
  local_328.Translation.ZW.m128d_f64[1] = dVar27;
  local_328.Scale3D.XY.m128d_f64 = adVar5;
  local_328.Scale3D.ZW.m128d_f64[0] = dVar53;
  UE::Math::TTransform<double>::ToMatrixWithScale(&local_328,&local_3a8);
  auVar55._0_8_ =
       local_3a8.M[0][0] * local_3a8.M[0][0] + local_3a8.M[0][1] * local_3a8.M[0][1] +
       local_3a8.M[0][2] * local_3a8.M[0][2];
  auVar55._8_8_ = 0;
  dVar57 = local_3a8.M[1][0] * local_3a8.M[1][0] + local_3a8.M[1][1] * local_3a8.M[1][1] +
           local_3a8.M[1][2] * local_3a8.M[1][2];
  auVar54._0_8_ = local_3a8.M[2][2] * local_3a8.M[2][2];
  auVar54._8_8_ = 0;
  dVar50 = local_3a8.M[2][0] * local_3a8.M[2][0] + local_3a8.M[2][1] * local_3a8.M[2][1] +
           auVar54._0_8_;
  if (auVar55._0_8_ <= __real_3e45798ee0000000) {
    local_498 = 0.0;
  }
  else {
    auVar55 = sqrtpd(auVar55,auVar55);
    local_498 = auVar55._0_8_;
  }
  if (dVar57 <= __real_3e45798ee0000000) {
    local_490 = 0.0;
  }
  else {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = dVar57;
    auVar54 = sqrtpd(auVar54,auVar16);
    local_490 = auVar54._0_8_;
  }
  if (dVar50 <= __real_3e45798ee0000000) {
    dVar57 = 0.0;
  }
  else {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = dVar50;
    auVar54 = sqrtpd(unaff_XMM13,auVar17);
    dVar57 = auVar54._0_8_;
  }
  this_00 = *(UActorComponent **)this;
  iVar37 = (int)this_00[7]._padding_;
  if (iVar37 < 1) {
    fVar56 = 0.0;
  }
  else {
    fVar56 = ((float)(int)this_00[7]._padding_ * *(float *)((longlong)&this_00[7]._padding_ + 4)) /
             (float)iVar37;
  }
  dVar57 = dVar57 * __real_3f80000000000000;
  local_298.bEnableGravity = false;
  local_298.bUpdateKinematicFromSimulation = false;
  local_298.bSimulatePhysics = false;
  local_298.bStartAwake = true;
  dVar50 = (double)*(float *)((longlong)&this_00[7]._padding_ + 4);
  local_298.bStatic = true;
  local_298.bQueryOnly = false;
  local_4f8.Reference = (FImplicitObject *)(local_490 * dVar50);
  dVar50 = local_498 * dVar50;
  local_298.InitialTM.Scale3D.XY.m128d_f64[0] = 0.0;
  local_298.InitialTM.Scale3D.XY.m128d_f64[1] = 0.0;
  local_298.InitialTM.Scale3D.ZW.m128d_f64[0] = 0.0;
  local_298.InitialTM.Scale3D.ZW.m128d_f64[1] = 0.0;
  pUVar38 = this_00->WorldPrivate;
  local_298.InitialTM.Rotation.XY.m128d_f64[0] = dVar21;
  local_298.InitialTM.Rotation.XY.m128d_f64[1] = dVar52;
  local_298.InitialTM.Rotation.ZW.m128d_f64[0] = dVar22;
  local_298.InitialTM.Rotation.ZW.m128d_f64[1] = dVar23;
  local_298.InitialTM.Translation.XY.m128d_f64[0] = dVar24;
  local_298.InitialTM.Translation.XY.m128d_f64[1] = dVar25;
  local_298.InitialTM.Translation.ZW.m128d_f64[0] = dVar26;
  local_298.InitialTM.Translation.ZW.m128d_f64[1] = dVar27;
  if (pUVar38 == (UWorld *)0x0) {
    pUVar38 = UActorComponent::GetWorld_Uncached(this_00);
  }
  local_298.Scene = (FChaosScene *)pUVar38->PhysicsScene;
  FVar10 = *(FName *)(*(longlong *)this + 0x18);
  if (*(longlong *)(*(longlong *)this + 0xa8) == 0) {
    local_448 = FVar10;
    ::FName::ToString(&local_448,&local_438);
    FVar46.Data = (FScriptContainerElement *)L"";
    if (local_438.Data.ArrayNum != 0) {
      FVar46.Data = local_438.Data.AllocatorInstance.Data;
    }
    pFVar39 = ::FString::FString(&local_3e8,(wchar_t *)FVar46.Data);
    FVar46.Data = (pFVar39->Data).AllocatorInstance.Data;
    (pFVar39->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar36 = (pFVar39->Data).ArrayNum;
    (pFVar39->Data).ArrayNum = 0;
    (pFVar39->Data).ArrayMax = 0;
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      local_4e0 = FVar46.Data;
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
    bVar29 = false;
    bVar28 = false;
    local_4e0 = FVar46.Data;
    if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_450 = FVar10;
    ::FName::ToString(&local_450,&local_428);
    UObjectBaseUtility::GetFullName
              (*(UObjectBaseUtility **)(*(longlong *)this + 0xa8),&local_3d8,(UObject *)0x0,None);
    ::FString::PrintfImpl(&local_4d8,L"%s:%s");
    iVar36 = local_4d8.Data.ArrayNum;
    FVar46.Data = local_4d8.Data.AllocatorInstance.Data;
    local_4d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4e0 = FVar46.Data;
    local_4d8.Data.ArrayNum = 0;
    local_4d8.Data.ArrayMax = 0;
    bVar29 = true;
    bVar28 = true;
  }
  if ((bVar28) && (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
  if ((bVar29) && (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  local_440.Object = ::operator_new(0x10);
  if (local_440.Object == (TArray<char,TSizedDefaultAllocator<32>_> *)0x0) {
    local_440.Object = (TArray<char,TSizedDefaultAllocator<32>_> *)0x0;
  }
  else {
    if (iVar36 == 0) {
      iVar36 = 1;
      FVar46.Data = (FScriptContainerElement *)L"";
    }
    lVar40 = 0;
    ((local_440.Object)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (local_440.Object)->ArrayNum = 0;
    (local_440.Object)->ArrayMax = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar36,&(local_440.Object)->AllocatorInstance,&(local_440.Object)->ArrayNum,
               &(local_440.Object)->ArrayMax);
    pFVar11 = ((local_440.Object)->AllocatorInstance).Data;
    bVar28 = false;
    lVar45 = lVar40;
    if (0 < iVar36) {
      do {
        uVar6 = *(ushort *)(FVar46.Data + lVar45 * 2);
        pFVar11[lVar45] = SUB21(uVar6,0);
        lVar45 = lVar45 + 1;
        bVar28 = (bool)(bVar28 | 0x7f < uVar6);
      } while (lVar45 < iVar36);
      if (bVar28) {
        do {
          if (0x7f < *(ushort *)(FVar46.Data + lVar40 * 2)) {
            pFVar11[lVar40] = (FScriptContainerElement)0x3f;
          }
          lVar40 = lVar40 + 1;
        } while (lVar40 < iVar36);
      }
    }
  }
  TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1>::
  operator=<TArray<char,TSizedDefaultAllocator<32>_>_>
            ((TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)(*(longlong *)this + 0x4d0),
             &local_440);
  if (*(undefined8 **)(*(longlong *)this + 0x4d0) == (undefined8 *)0x0) {
    local_298.DebugName = (char *)0x0;
  }
  else {
    local_298.DebugName = (char *)**(undefined8 **)(*(longlong *)this + 0x4d0);
  }
  FChaosEngineInterface::CreateActor(&local_298,&local_4e8,(UObject *)0x0);
  this_02 = local_4e8;
  local_218.AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
        )0x0;
  local_218.ArrayNum = 0;
  local_218.ArrayMax = 1;
  local_520.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_520.ArrayNum = 0;
  local_520.ArrayMax = 0;
  lVar45 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x5f0) + 0x30);
  dVar21 = __real_bff0000000000000;
  if (0.0 <= dVar53) {
    dVar21 = __real_3ff0000000000000;
  }
  auVar20._4_8_ = extraout_XMM0_Qb;
  auVar20._0_4_ = adVar5[0]._4_4_;
  auVar51._0_8_ = auVar20._0_8_ << 0x20;
  auVar51._8_4_ = adVar5[1]._0_4_;
  auVar51._12_4_ = adVar5[1]._4_4_;
  dVar53 = __real_bff0000000000000;
  if (0.0 <= auVar51._8_8_) {
    dVar53 = __real_3ff0000000000000;
  }
  dVar52 = __real_3ff0000000000000;
  if (adVar5[0] < 0.0) {
    dVar52 = __real_bff0000000000000;
  }
  dVar52 = dVar52 * dVar50;
  *(double *)(lVar45 + 0x50) = dVar52;
  *(double *)(lVar45 + 0x58) = dVar53 * (double)local_4f8.Reference;
  *(double *)(lVar45 + 0x60) = dVar21 * dVar57;
  auVar18._4_4_ = (float)(dVar53 * (double)local_4f8.Reference);
  auVar18._0_4_ = (float)dVar52;
  auVar18._8_4_ = (float)(dVar21 * dVar57);
  auVar18._12_4_ = 0;
  *(undefined1 (*) [16])(lVar45 + 0x70) = auVar18;
  TVar48.Reference = *(FImplicitObject **)(*(longlong *)(*(longlong *)this + 0x5f0) + 0x30);
  if (TVar48.Reference != (FImplicitObject *)0x0) {
    LOCK();
    *(int *)&(TVar48.Reference)->_padding_ = (int)(TVar48.Reference)->_padding_ + 1;
    UNLOCK();
  }
  local_198[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_198[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_188[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_188[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_178[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_178[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_168[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_168[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_158[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_158[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_148[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_148[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  local_4f0.Reference = TVar48.Reference;
  pTVar41 = ::operator_new(0xc0);
  if (pTVar41 == (TImplicitObjectTransformed<double,3,1> *)0x0) {
    local_500 = (TImplicitObjectTransformed<double,3,1> *)0x0;
  }
  else {
    local_500 = Chaos::TImplicitObjectTransformed<double,3,1>::
                TImplicitObjectTransformed<double,3,1>
                          (pTVar41,&local_4f0,(TRigidTransform<double,3> *)local_198);
    if (local_500 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
      LOCK();
      *(int *)&local_500->_padding_ = (int)local_500->_padding_ + 1;
      UNLOCK();
    }
  }
  TVar42 = Chaos::FShapeInstanceProxy::Make
                     ((int)&local_488,
                      (TRefCountPtr<Chaos::FImplicitObject> *)(ulonglong)(uint)local_218.ArrayNum);
  pFVar12 = (FShapeInstanceProxy *)(TVar42.Ptr)->_padding_;
  (TVar42.Ptr)->_padding_ = 0;
  if (local_488 != (undefined8 *)0x0) {
    (**(code **)*local_488)(local_488,1);
  }
  uVar7 = *(uint *)((longlong)*(longlong **)this + 0xc);
  pFVar43 = (FCollisionResponseContainer *)(**(code **)(**(longlong **)this + 0x5c8))();
  uVar8 = *(uint *)((*(longlong **)this)[0x15] + 0xc);
  TVar35.Value = (**(code **)(**(longlong **)this + 0x5f0))();
  FPhysicsFilterBuilder::FPhysicsFilterBuilder(&local_4a8,TVar35,'\0',pFVar43);
  local_4a8.Word3 = local_4a8.Word3 | 0x14;
  local_4c8.Word2 = local_4a8.TouchingBits;
  local_4c8.Word1 = local_4a8.BlockingBits;
  local_4b8.Word0 = 0;
  local_4c8.Word3 = (iVar37 < 1) + 2 | local_4a8.Word3;
  local_4b8.Word1 = local_4a8.BlockingBits;
  uVar9 = (uint)pFVar12->_padding_;
  local_4c8.Word0 = uVar8;
  local_4b8.Word2 = uVar7;
  local_4b8.Word3 = local_4c8.Word3;
  if ((uVar9 & 3) == 0) {
    local_3c8.Word1 = local_4a8.BlockingBits;
    local_3c8.Word0 = uVar8;
    local_3c8.Word3 = local_4c8.Word3;
    local_3c8.Word2 = local_4a8.TouchingBits;
    pIVar13 = pFVar12->Proxy;
    Chaos::FCollisionData::SetQueryData(&(pFVar12->CollisionData).Property,&local_3c8);
    uVar7 = *(uint *)((longlong)&pFVar12->_padding_ + 4);
    *(uint *)((longlong)&pFVar12->_padding_ + 4) = uVar7 | 1;
    if (((uVar7 == 0) && (pIVar13 != (IPhysicsProxyBase *)0x0)) &&
       (pIVar13->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxyShape(pIVar13->Solver,pIVar13,uVar9 >> 3);
    }
  }
  else {
    Chaos::FCollisionData::SetQueryData((FCollisionData *)&pFVar12->Proxy,&local_4c8);
  }
  if ((pFVar12->_padding_ & 3) == 0) {
    Chaos::FShapeInstanceProxy::SetSimData(pFVar12,&local_4b8);
  }
  else {
    Chaos::FCollisionData::SetSimData((FCollisionData *)&pFVar12->Proxy,&local_4b8);
  }
  local_480 = *(longlong *)(*(longlong *)this + 0x5f0) + 0x20;
  Chaos::FPerShapeData::DownCast<_Chaos::FPerShapeData::SetMaterials_::__l2::<lambda_1>_>
            ((FPerShapeData *)pFVar12,(<lambda_1> *)&local_480);
  iVar36 = local_520.ArrayNum;
  if (local_520.ArrayNum == local_520.ArrayMax) {
    iVar36 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_520.AllocatorInstance,&local_520.ArrayMax);
  }
  local_520.ArrayNum = iVar36 + 1;
  *(undefined8 *)(local_520.AllocatorInstance.Data + (longlong)iVar36 * 8) = 0;
  *(TImplicitObjectTransformed<double,3,1> **)
   (local_520.AllocatorInstance.Data + (longlong)iVar36 * 8) = local_500;
  local_500 = (TImplicitObjectTransformed<double,3,1> *)0x0;
  if (local_218.ArrayNum == local_218.ArrayMax) {
    local_218.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>_>
                   (0x808,(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                           *)&local_218,&local_218.ArrayMax);
  }
  lVar45 = (longlong)local_218.ArrayNum;
  FVar49 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
            )&local_218;
  if (local_218.AllocatorInstance.SecondaryData !=
      (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
       )0x0) {
    FVar49 = local_218.AllocatorInstance.SecondaryData;
  }
  local_218.ArrayNum = local_218.ArrayNum + 1;
  ((TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *)
  ((longlong)FVar49 + lVar45 * 8))->Ptr = (FPerShapeData *)pFVar12;
  if (0 < iVar37) {
    dVar50 = (double)fVar56 * local_490;
    lVar45 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x5f0) + 0x38);
    dVar53 = (double)fVar56 * local_498;
    *(double *)(lVar45 + 0x50) = dVar53;
    *(double *)(lVar45 + 0x58) = dVar50;
    *(double *)(lVar45 + 0x60) = dVar57;
    auVar19._4_4_ = (float)dVar50;
    auVar19._0_4_ = (float)dVar53;
    auVar19._8_4_ = (float)dVar57;
    auVar19._12_4_ = 0;
    *(undefined1 (*) [16])(lVar45 + 0x70) = auVar19;
    pFVar14 = *(FImplicitObject **)(*(longlong *)(*(longlong *)this + 0x5f0) + 0x38);
    if (pFVar14 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + 1;
      UNLOCK();
    }
    local_138[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    local_138[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_128[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    local_128[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    local_118[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    local_118[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    local_108[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    local_108[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    local_f8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    local_f8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_e8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    local_e8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    local_478[0].Reference = pFVar14;
    pTVar41 = ::operator_new(0xc0);
    if (pTVar41 == (TImplicitObjectTransformed<double,3,1> *)0x0) {
      local_508 = (TImplicitObjectTransformed<double,3,1> *)0x0;
    }
    else {
      local_508 = Chaos::TImplicitObjectTransformed<double,3,1>::
                  TImplicitObjectTransformed<double,3,1>
                            (pTVar41,local_478,(TRigidTransform<double,3> *)local_138);
      if (local_508 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
        LOCK();
        *(int *)&local_508->_padding_ = (int)local_508->_padding_ + 1;
        UNLOCK();
      }
    }
    TVar42 = Chaos::FShapeInstanceProxy::Make
                       ((int)&local_458,
                        (TRefCountPtr<Chaos::FImplicitObject> *)(ulonglong)(uint)local_218.ArrayNum)
    ;
    pFVar12 = (FShapeInstanceProxy *)(TVar42.Ptr)->_padding_;
    (TVar42.Ptr)->_padding_ = 0;
    if (local_458 != (undefined8 *)0x0) {
      (**(code **)*local_458)(local_458,1);
    }
    local_418.Word0 = local_4c8.Word0;
    local_418.Word1 = local_4c8.Word1;
    local_418.Word2 = local_4c8.Word2;
    local_408.Word0 = local_4b8.Word0;
    local_408.Word1 = local_4b8.Word1;
    local_408.Word2 = local_4b8.Word2;
    local_418.Word3 = local_4c8.Word3 & 0xfffffffd | 1;
    local_408.Word3 = local_4b8.Word3 & 0xfffffffd | 1;
    uVar7 = (uint)pFVar12->_padding_;
    if ((uVar7 & 3) == 0) {
      local_3b8.Word1 = local_4c8.Word1;
      local_3b8.Word0 = local_4c8.Word0;
      local_3b8._8_8_ = CONCAT44(local_4c8.Word3,local_4c8.Word2) & 0xfffffffdffffffff | 0x100000000
      ;
      pIVar13 = pFVar12->Proxy;
      Chaos::FCollisionData::SetQueryData(&(pFVar12->CollisionData).Property,&local_3b8);
      uVar8 = *(uint *)((longlong)&pFVar12->_padding_ + 4);
      *(uint *)((longlong)&pFVar12->_padding_ + 4) = uVar8 | 1;
      if (((uVar8 == 0) && (pIVar13 != (IPhysicsProxyBase *)0x0)) &&
         (pIVar13->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxyShape(pIVar13->Solver,pIVar13,uVar7 >> 3);
      }
    }
    else {
      Chaos::FCollisionData::SetQueryData((FCollisionData *)&pFVar12->Proxy,&local_418);
    }
    if ((pFVar12->_padding_ & 3) == 0) {
      Chaos::FShapeInstanceProxy::SetSimData(pFVar12,&local_408);
    }
    else {
      Chaos::FCollisionData::SetSimData((FCollisionData *)&pFVar12->Proxy,&local_408);
    }
    local_468 = *(longlong *)(*(longlong *)this + 0x5f0) + 0x20;
    Chaos::FPerShapeData::DownCast<_Chaos::FPerShapeData::SetMaterials_::__l2::<lambda_1>_>
              ((FPerShapeData *)pFVar12,(<lambda_1> *)&local_468);
    iVar37 = local_520.ArrayNum;
    if (local_520.ArrayNum == local_520.ArrayMax) {
      iVar37 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_520.AllocatorInstance,&local_520.ArrayMax);
    }
    local_520.ArrayNum = iVar37 + 1;
    *(undefined8 *)(local_520.AllocatorInstance.Data + (longlong)iVar37 * 8) = 0;
    *(TImplicitObjectTransformed<double,3,1> **)
     (local_520.AllocatorInstance.Data + (longlong)iVar37 * 8) = local_508;
    local_508 = (TImplicitObjectTransformed<double,3,1> *)0x0;
    if (local_218.ArrayNum == local_218.ArrayMax) {
      local_218.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>_>
                     (0x808,(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                             *)&local_218,&local_218.ArrayMax);
    }
    lVar45 = (longlong)local_218.ArrayNum;
    FVar49 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
              )&local_218;
    if (local_218.AllocatorInstance.SecondaryData !=
        (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
         )0x0) {
      FVar49 = local_218.AllocatorInstance.SecondaryData;
    }
    local_218.ArrayNum = local_218.ArrayNum + 1;
    ((TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *)
    ((longlong)FVar49 + lVar45 * 8))->Ptr = (FPerShapeData *)pFVar12;
    if (local_508 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_508 + 8);
      iVar37 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar37 == 1) && (*(int *)((longlong)local_508 + 0xc) == 0)) {
        (*(code *)**(undefined8 **)local_508)(local_508,1);
      }
    }
    TVar48.Reference = local_4f0.Reference;
    if (pFVar14 != (FImplicitObject *)0x0) {
      LOCK();
      plVar2 = &pFVar14->_padding_;
      lVar45 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar45 == 1) && (*(int *)((longlong)&pFVar14->_padding_ + 4) == 0)) {
        (**(code **)pFVar14->_padding_)(pFVar14,1);
        TVar48.Reference = local_4f0.Reference;
      }
    }
  }
  FVar46.Data = local_520.AllocatorInstance.Data;
  if (local_520.ArrayNum != 1) {
    pFVar44 = ::operator_new(0x70);
    if (pFVar44 == (FImplicitObjectUnion *)0x0) {
      local_4f8.Reference = (FImplicitObject *)0x0;
    }
    else {
      pFVar44 = Chaos::FImplicitObjectUnion::FImplicitObjectUnion(pFVar44,&local_520);
      local_4f8.Reference = (FImplicitObject *)pFVar44;
      if (pFVar44 != (FImplicitObjectUnion *)0x0) {
        LOCK();
        *(int *)&pFVar44->_padding_ = (int)pFVar44->_padding_ + 1;
        UNLOCK();
        Chaos::FRigidBodyHandle_External::SetGeometry
                  ((FRigidBodyHandle_External *)this_02,&local_4f8);
        LOCK();
        plVar2 = &pFVar44->_padding_;
        lVar45 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if (((int)lVar45 == 1) && (*(int *)((longlong)&pFVar44->_padding_ + 4) == 0)) {
          (**(code **)pFVar44->_padding_)(pFVar44,1);
        }
        goto LAB_145f06110;
      }
    }
    FVar46.Data = (FScriptContainerElement *)&local_4f8;
  }
  Chaos::FRigidBodyHandle_External::SetGeometry
            ((FRigidBodyHandle_External *)this_02,
             (TRefCountPtr<Chaos::FImplicitObject> *)FVar46.Data);
LAB_145f06110:
  iVar37 = local_218.ArrayNum;
  uVar34 = _UNK_150689688;
  uVar33 = ___xmm_3ff00000000000003ff0000000000000;
  uVar32 = _UNK_150689518;
  uVar31 = ___xmm_00000000000000003ff0000000000000;
  uVar47 = (ulonglong)local_218.ArrayNum;
  FVar49 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
            )&local_218;
  if (local_218.AllocatorInstance.SecondaryData !=
      (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
       )0x0) {
    FVar49 = local_218.AllocatorInstance.SecondaryData;
  }
  FVar3 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
           )((longlong)FVar49 + uVar47 * 8);
  while( true ) {
    if ((uint)uVar47 != iVar37) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_510);
    }
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_02);
    if (FVar49 == FVar3) break;
    pTVar15 = (this_02->Particle).Ptr;
    uVar4 = *(undefined8 *)&(pTVar15->MXR).Property.MR.field_0x8;
    dVar57 = (double)(float)((ulonglong)uVar4 >> 0x20);
    dVar50 = (double)*(float *)&(pTVar15->MXR).Property.MR;
    dVar53 = (double)*(float *)&(pTVar15->MXR).Property.MR.field_0x4;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_02);
    pTVar15 = (this_02->Particle).Ptr;
    this_01.Ptr = *(FPerShapeData **)FVar49;
    local_1e8._8_4_ = SUB84(dVar57,0);
    local_1e8._0_8_ = (double)(float)uVar4;
    local_1e8._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
    local_1c8 = *(undefined8 *)&(pTVar15->MXR).Property.MX.field_0x10;
    local_1d8 = *(undefined8 *)&(pTVar15->MXR).Property.MX;
    uStack_1d0 = *(undefined8 *)&(pTVar15->MXR).Property.MX.field_0x8;
    uStack_1c0 = 0;
    local_1b8 = uVar33;
    uStack_1b0 = uVar34;
    local_1a8 = uVar31;
    uStack_1a0 = uVar32;
    local_1f8 = dVar50;
    dStack_1f0 = dVar53;
    if ((*(longlong *)&(this_01.Ptr)->field_0x8 & 3) == 0) {
      Chaos::FShapeInstanceProxy::UpdateShapeBounds
                ((FShapeInstanceProxy *)this_01.Ptr,(TRigidTransform<double,3> *)&local_1f8);
      uVar47 = (ulonglong)(uint)local_218.ArrayNum;
      FVar49 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                )((longlong)FVar49 + 8);
    }
    else {
      Chaos::FShapeInstance::UpdateShapeBounds
                ((FShapeInstance *)this_01.Ptr,(TRigidTransform<double,3> *)&local_1f8);
      uVar47 = (ulonglong)(uint)local_218.ArrayNum;
      FVar49 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                )((longlong)FVar49 + 8);
    }
  }
  Chaos::TGeometryParticle<double,3>::MergeShapeInstances((this_02->Particle).Ptr,&local_218);
  lVar45 = *(longlong *)this;
  local_3f8 = 1;
  lStack_3f0 = lVar45 + 0x390;
  *(ulonglong *)(lVar45 + 0x500) = CONCAT44(uStack_3f4,1);
  *(longlong *)(lVar45 + 0x508) = lStack_3f0;
  local_460 = *(UObject **)this;
  pUVar30 = local_460 + 0x1f;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_460 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_460);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar30->field_0x8,(FObjectPtr)&local_460);
  FBodyInstance::SetPhysicsActor((FBodyInstance *)(*(longlong *)this + 0x390),local_4e8);
  lVar45 = *(longlong *)this;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_02);
  ((this_02->Particle).Ptr)->MUserData = (void *)(lVar45 + 0x500);
  if (local_500 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_500 + 8);
    iVar37 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar37 == 1) && (*(int *)((longlong)local_500 + 0xc) == 0)) {
      (*(code *)**(undefined8 **)local_500)(local_500,1);
    }
  }
  if (TVar48.Reference != (FImplicitObject *)0x0) {
    LOCK();
    plVar2 = &(TVar48.Reference)->_padding_;
    lVar45 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar45 == 1) && (*(int *)((longlong)&(TVar48.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(TVar48.Reference)->_padding_)(TVar48.Reference,1);
    }
  }
  DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
            ((TRefCountPtr<Chaos::FImplicitObject> *)local_520.AllocatorInstance.Data,
             local_520.ArrayNum);
  if (local_520.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.AllocatorInstance.Data);
  }
  FVar49 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
            )&local_218;
  if (local_218.AllocatorInstance.SecondaryData !=
      (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
       )0x0) {
    FVar49 = local_218.AllocatorInstance.SecondaryData;
  }
  DestructItems<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,int>
            ((TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *)FVar49,
             local_218.ArrayNum);
  if (local_218.AllocatorInstance.SecondaryData !=
      (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
       )0x0) {
    FMemory::Free((void *)local_218.AllocatorInstance.SecondaryData);
  }
  if (local_4e0 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e0);
  }
  return local_4e8;
}

// operator() @ 145f07870

void __thiscall
`ULandscapeHeightfieldCollisionComponent::OnCreatePhysicsState'::__l8::<lambda_2>::operator()
          (void *this)

{
  undefined8 uVar1;
  FSingleParticlePhysicsProxy *pFVar2;
  TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(char *)((longlong)this + 0x18) == '\0') {
    pFVar2 = __l8::<lambda_1>::operator()(*(void **)((longlong)this + 8));
  }
  else {
    pFVar2 = (FSingleParticlePhysicsProxy *)**(undefined8 **)this;
  }
  **(undefined8 **)this = pFVar2;
  uVar1 = **(undefined8 **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(undefined8 *)local_18.AllocatorInstance.Data = uVar1;
  FChaosScene::AddActorsToScene_AssumesLocked
            (*(FChaosScene **)((longlong)this + 0x10),&local_18,true);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// AllowsAsyncPhysicsStateCreation @ 145f08c60

bool __thiscall
ULandscapeHeightfieldCollisionComponent::AllowsAsyncPhysicsStateCreation
          (ULandscapeHeightfieldCollisionComponent *this)

{
  return true;
}

// ApplyWorldOffset @ 145f08c70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULandscapeHeightfieldCollisionComponent::ApplyWorldOffset
          (ULandscapeHeightfieldCollisionComponent *this,TVector<double> *param_1,bool param_2)

{
  bool bVar1;
  
  USceneComponent::ApplyWorldOffset((USceneComponent *)this,param_1,param_2);
  if ((param_2) && (bVar1 = FPhysScene_Chaos::SupportsOriginShifting(), bVar1)) {
    return;
  }
  UActorComponent::RecreatePhysicsState((UActorComponent *)this);
  return;
}

// BeginDestroy @ 145f091b0

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
ULandscapeHeightfieldCollisionComponent::BeginDestroy(ULandscapeHeightfieldCollisionComponent *this)

{
  longlong *plVar1;
  FHeightfieldGeometryRef *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  
  UPrimitiveComponent::BeginDestroy((UPrimitiveComponent *)this);
  if ((this->HeightfieldRef).Reference != (FHeightfieldGeometryRef *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6625317152381467084>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                       ,0x634,"HeightfieldRef == nullptr");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->HeightfieldRef).Reference;
    if (pFVar2 != (FHeightfieldGeometryRef *)0x0) {
      (this->HeightfieldRef).Reference = (FHeightfieldGeometryRef *)0x0;
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
    (this->HeightfieldGuid).A = 0;
    (this->HeightfieldGuid).B = 0;
    (this->HeightfieldGuid).C = 0;
    (this->HeightfieldGuid).D = 0;
    FNavHeightfieldSamples::Empty(&this->CachedHeightFieldSamples);
  }
  return;
}

// CalcBounds @ 145f09480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBoxSphereBounds<double,double> * __thiscall
ULandscapeHeightfieldCollisionComponent::CalcBounds
          (ULandscapeHeightfieldCollisionComponent *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TTransform<double> *param_1)

{
  double dVar1;
  TMatrix<double> *pTVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auStack_128 [32];
  TVector<double>_u_0 local_108;
  double local_f0;
  double local_e8;
  double local_e0;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  pTVar2 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_c8);
  UE::Math::TBox<double>::TransformBy(&this->CachedLocalBox,(TBox<double> *)&local_108._s_0,pTVar2);
  local_e0 = local_e0 - local_108._s_0.Z;
  local_e8 = local_e8 - local_108._s_0.Y;
  dVar5 = local_e0 * __real_3fe0000000000000;
  dVar1 = (local_f0 - local_108._s_0.X) * __real_3fe0000000000000;
  dVar6 = local_e8 * __real_3fe0000000000000;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar1 + local_108._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar6 + local_108._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar5 + local_108._s_0.Z;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar1;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar6;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar5;
  dVar1 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  auVar3._0_8_ = dVar1 * dVar1;
  auVar3._8_8_ = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (local_e0 * local_e0 + local_e8 * local_e8) * __real_3fd0000000000000 +
                 auVar3._0_8_;
  auVar4 = sqrtpd(auVar3,auVar4);
  __return_storage_ptr__->SphereRadius = auVar4._0_8_;
  return __return_storage_ptr__;
}

// CreateCollisionObject @ 145f0a2b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ULandscapeHeightfieldCollisionComponent::CreateCollisionObject
          (ULandscapeHeightfieldCollisionComponent *this,bool param_1,
          TArrayView<unsigned_short_const_,int> *param_2,
          TArrayView<unsigned_short_const_,int> *param_3,
          TArrayView<unsigned_char_const_,int> *param_4,
          TArrayView<unsigned_char_const_,int> *param_5,
          TArrayView<TObjectPtr<UPhysicalMaterial>_const_,int> *param_6)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  TObjectPtr<UPhysicalMaterial>_u_0 *pTVar4;
  FHeightfieldGeometryRef *pFVar5;
  FHeightfieldGeometryRef *pFVar6;
  FHeightField *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  FString *pFVar18;
  FGuid *pFVar19;
  FHeightField *pFVar20;
  TRefCountPtr<Chaos::FHeightField> *pTVar21;
  FHeightField *pFVar22;
  undefined8 *puVar23;
  THandle<Chaos::FChaosPhysicsMaterial,24,8> *pTVar24;
  byte *pbVar25;
  byte *pbVar26;
  longlong *plVar27;
  TObjectPtr<UPhysicalMaterial>_u_0 *pTVar28;
  int iVar29;
  undefined1 local_res8 [8];
  undefined1 local_124 [20];
  int iStack_110;
  undefined4 uStack_10c;
  FGuid *local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined8 local_f0;
  TStringView<wchar_t> local_e8;
  FString local_d8;
  TArrayView<unsigned_char_const_,int> local_c8;
  TArrayView<unsigned_short_const_,int> local_b8;
  TArrayView<unsigned_char_const_,int> local_a8;
  TArrayView<unsigned_short_const_,int> local_98;
  TVector<double,3> local_88;
  TVector<double,3> local_70;
  FGuid local_58 [2];
  
  if ((this->SimpleCollisionSizeQuads < 1) || (param_1)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  if ((((this->HeightfieldGuid).D != 0 || (this->HeightfieldGuid).C != 0) ||
      (this->HeightfieldGuid).B != 0) || (this->HeightfieldGuid).A != 0) {
    local_res8[0] = 0;
    bVar15 = `ULandscapeHeightfieldCollisionComponent::CreateCollisionObject'::__l3::<lambda_1>::
             operator()(local_res8);
    if (!bVar15) {
      return;
    }
  }
  iVar17 = this->CollisionSizeQuads;
  pFVar22 = (FHeightField *)0x0;
  iVar29 = this->SimpleCollisionSizeQuads + 1;
  if (this->SimpleCollisionSizeQuads < 1) {
    iVar29 = 0;
  }
  iVar1 = iVar17 + 1;
  if (param_2->ArrayNum != iVar1 * iVar1) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6625317152381467629>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                        ,0x413,"Heights.Num() == Info.NumSamples");
    if (!bVar16) {
      return;
    }
code_r0x000145f0a5f5:
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (param_4->ArrayNum != iVar17 * iVar17) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6625317152381467623>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                        ,0x419,"PhysicalMaterialIds.Num() == NumQuads");
    if (!bVar16) {
      return;
    }
    goto code_r0x000145f0a5f5;
  }
  if (bVar16) {
    if (param_3->ArrayNum != iVar29 * iVar29) {
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6625317152381467616>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                          ,0x420,"SimpleHeights.Num() == Info.NumSimpleSamples");
      if (!bVar16) {
        return;
      }
      goto code_r0x000145f0a5f5;
    }
    if (param_5->ArrayNum != (iVar29 + -1) * (iVar29 + -1)) {
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6625317152381467610>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                          ,0x426,"SimplePhysicalMaterialIds.Num() == NumSimpleQuads");
      if (!bVar16) {
        return;
      }
      goto code_r0x000145f0a5f5;
    }
  }
  pbVar25 = param_4->DataPtr;
  pbVar26 = pbVar25 + param_4->ArrayNum;
  for (; pbVar25 != pbVar26; pbVar25 = pbVar25 + 1) {
    if ((*pbVar25 != 0xff) && (param_6->ArrayNum <= (int)(uint)*pbVar25)) {
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6625317152381467600>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                          ,0x430,"Sample == 0xFF || PhysicalMaterialObjects.IsValidIndex(Sample)");
      if (!bVar16) {
        return;
      }
      goto code_r0x000145f0a5f5;
    }
  }
  if (bVar16) {
    pbVar26 = param_5->DataPtr;
    pbVar25 = pbVar26 + param_5->ArrayNum;
    for (; pbVar26 != pbVar25; pbVar26 = pbVar26 + 1) {
      if ((*pbVar26 != 0xff) && (param_6->ArrayNum <= (int)(uint)*pbVar26)) {
        bVar16 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_6625317152381467590>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                            ,0x43a,"Sample == 0xFF || PhysicalMaterialObjects.IsValidIndex(Sample)")
        ;
        if (!bVar16) {
          return;
        }
        goto code_r0x000145f0a5f5;
      }
    }
  }
  pFVar18 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_d8,(UObject *)0x0);
  local_124._12_8_ = (pFVar18->Data).AllocatorInstance.Data;
  iVar17 = (pFVar18->Data).ArrayNum;
  iStack_110 = iVar17 + -1;
  if (iVar17 == 0) {
    iStack_110 = 0;
  }
  local_e8._12_4_ = uStack_10c;
  local_e8.Size = iStack_110;
  local_e8.DataPtr = (wchar_t *)local_124._12_8_;
  pFVar19 = FGuid::NewDeterministicGuid(local_58,&local_e8,0);
  uVar10 = pFVar19->B;
  uVar11 = pFVar19->C;
  uVar12 = pFVar19->D;
  (this->HeightfieldGuid).A = pFVar19->A;
  (this->HeightfieldGuid).B = uVar10;
  (this->HeightfieldGuid).C = uVar11;
  (this->HeightfieldGuid).D = uVar12;
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GSharedHeightfieldRefsCriticalSection);
  pFVar20 = ::operator_new(0x40);
  local_124._4_8_ = pFVar22;
  if (pFVar20 != (FHeightField *)0x0) {
    *(undefined4 *)&pFVar20->field_0x8 = 0;
    *(undefined ***)pFVar20 =
         &___7FHeightfieldGeometryRef_ULandscapeHeightfieldCollisionComponent__6B_;
    uVar10 = (this->HeightfieldGuid).B;
    uVar11 = (this->HeightfieldGuid).C;
    uVar12 = (this->HeightfieldGuid).D;
    *(uint *)&pFVar20->field_0x10 = (this->HeightfieldGuid).A;
    *(uint *)&pFVar20->field_0x14 = uVar10;
    *(uint *)&pFVar20->field_0x18 = uVar11;
    *(uint *)&pFVar20->field_0x1c = uVar12;
    (pFVar20->GeomData).Heights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar20->GeomData).Heights.ArrayNum = 0;
    (pFVar20->GeomData).Heights.ArrayMax = 0;
    (pFVar20->GeomData).LowResolutionHeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (pFVar20->GeomData).LowResolutionHeights.ArrayNum = 0;
    (pFVar20->GeomData).LowResolutionHeights.ArrayMax = 0;
    local_124._4_8_ = pFVar20;
  }
  local_108 = &this->HeightfieldGuid;
  local_100 = local_124 + 4;
  TSet<TTuple<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*>,TDefaultMapHashableKeyFuncs<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FGuid_const_&,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*_&&>_>
            ((TSet<TTuple<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*>,TDefaultMapHashableKeyFuncs<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*,0>,FDefaultSetAllocator>
              *)&GSharedHeightfieldRefs,
             (TPairInitializer<FGuid_const_&,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*_&&>
              *)local_124,(bool *)&local_108);
  pFVar5 = *(FHeightfieldGeometryRef **)
            ((longlong)(int)local_124._0_4_ * 0x20 + 0x10 + GSharedHeightfieldRefs._0_8_);
  pFVar6 = (this->HeightfieldRef).Reference;
  if (pFVar6 != pFVar5) {
    (this->HeightfieldRef).Reference = pFVar5;
    if (pFVar5 != (FHeightfieldGeometryRef *)0x0) {
      LOCK();
      *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar6 != (FHeightfieldGeometryRef *)0x0) {
      plVar27 = &pFVar6->_padding_;
      LOCK();
      lVar13 = *plVar27;
      *(int *)plVar27 = (int)*plVar27 + -1;
      UNLOCK();
      if ((((int)lVar13 == 1) && (plVar27 != (longlong *)0x0)) &&
         (pFVar6 != (FHeightfieldGeometryRef *)0x0)) {
        (**(code **)pFVar6->_padding_)(pFVar6,1);
      }
    }
  }
  pFVar20 = ::operator_new(0x170);
  uVar14 = __real_3ff0000000000000;
  if (pFVar20 == (FHeightField *)0x0) {
    pFVar20 = (FHeightField *)0x0;
  }
  else {
    local_88._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
    local_88._8_8_ = _UNK_150689688;
    local_b8.DataPtr = param_2->DataPtr;
    local_b8.ArrayNum = param_2->ArrayNum;
    local_b8._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_c8.DataPtr = param_4->DataPtr;
    local_c8.ArrayNum = param_4->ArrayNum;
    local_c8._12_4_ = *(undefined4 *)&param_4->field_0xc;
    local_88._16_8_ = __real_3ff0000000000000;
    pFVar20 = Chaos::FHeightField::FHeightField(pFVar20,&local_b8,&local_c8,iVar1,iVar1,&local_88);
    if (pFVar20 != (FHeightField *)0x0) {
      LOCK();
      *(int *)&pFVar20->field_0x8 = *(int *)&pFVar20->field_0x8 + 1;
      UNLOCK();
    }
  }
  pTVar21 = &((this->HeightfieldRef).Reference)->HeightfieldGeometry;
  if (pTVar21 == (TRefCountPtr<Chaos::FHeightField> *)&local_f8) {
    if (pFVar20 != (FHeightField *)0x0) {
      LOCK();
      puVar2 = &pFVar20->field_0x8;
      iVar17 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if ((iVar17 == 1) && (*(int *)&pFVar20->field_0xc == 0)) {
        puVar23 = *(undefined8 **)pFVar20;
        goto LAB_145f0a762;
      }
    }
  }
  else {
    pFVar7 = pTVar21->Reference;
    pTVar21->Reference = pFVar20;
    if (pFVar7 != (FHeightField *)0x0) {
      LOCK();
      puVar2 = &pFVar7->field_0x8;
      iVar17 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if ((iVar17 == 1) && (*(int *)&pFVar7->field_0xc == 0)) {
        puVar23 = *(undefined8 **)pFVar7;
        pFVar20 = pFVar7;
LAB_145f0a762:
        (*(code *)*puVar23)(pFVar20,1);
      }
    }
  }
  if (!bVar16) goto LAB_145f0a83d;
  pFVar20 = ::operator_new(0x170);
  if (pFVar20 != (FHeightField *)0x0) {
    local_70._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
    local_70._8_8_ = _UNK_150689688;
    local_70._16_8_ = uVar14;
    local_a8.DataPtr = param_5->DataPtr;
    local_a8.ArrayNum = param_5->ArrayNum;
    local_a8._12_4_ = *(undefined4 *)&param_5->field_0xc;
    local_98.DataPtr = param_3->DataPtr;
    local_98.ArrayNum = param_3->ArrayNum;
    local_98._12_4_ = *(undefined4 *)&param_3->field_0xc;
    pFVar22 = Chaos::FHeightField::FHeightField(pFVar20,&local_98,&local_a8,iVar29,iVar29,&local_70)
    ;
    if (pFVar22 != (FHeightField *)0x0) {
      LOCK();
      *(int *)&pFVar22->field_0x8 = *(int *)&pFVar22->field_0x8 + 1;
      UNLOCK();
    }
  }
  pTVar21 = &((this->HeightfieldRef).Reference)->HeightfieldSimpleGeometry;
  if (pTVar21 == (TRefCountPtr<Chaos::FHeightField> *)&local_f0) {
    if (pFVar22 == (FHeightField *)0x0) goto LAB_145f0a83d;
    LOCK();
    puVar2 = &pFVar22->field_0x8;
    iVar17 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if ((iVar17 != 1) || (*(int *)&pFVar22->field_0xc != 0)) goto LAB_145f0a83d;
    puVar23 = *(undefined8 **)pFVar22;
  }
  else {
    pFVar20 = pTVar21->Reference;
    pTVar21->Reference = pFVar22;
    if (pFVar20 == (FHeightField *)0x0) goto LAB_145f0a83d;
    LOCK();
    puVar2 = &pFVar20->field_0x8;
    iVar17 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if ((iVar17 != 1) || (*(int *)&pFVar20->field_0xc != 0)) goto LAB_145f0a83d;
    puVar23 = *(undefined8 **)pFVar20;
    pFVar22 = pFVar20;
  }
  (*(code *)*puVar23)(pFVar22,1);
LAB_145f0a83d:
  pTVar28 = &param_6->DataPtr->field0_0x0;
  pTVar4 = pTVar28 + param_6->ArrayNum;
  while( true ) {
    if (pTVar28 == pTVar4) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&GSharedHeightfieldRefsCriticalSection);
      return;
    }
    pFVar5 = (this->HeightfieldRef).Reference;
    pTVar24 = &UPhysicalMaterial::GetPhysicsMaterial(pTVar28->DebugPtr)->InnerHandle;
    pFVar8 = (pFVar5->UsedChaosMaterials).AllocatorInstance.Data;
    if (((pFVar8 <= pTVar24) &&
        (pTVar24 < pFVar8 + (longlong)(pFVar5->UsedChaosMaterials).ArrayMax * 4)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar16)) break;
    iVar17 = (pFVar5->UsedChaosMaterials).ArrayNum;
    piVar3 = &(pFVar5->UsedChaosMaterials).ArrayMax;
    if (iVar17 == *piVar3) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&(pFVar5->UsedChaosMaterials).AllocatorInstance,piVar3);
    }
    (pFVar5->UsedChaosMaterials).ArrayNum = iVar17 + 1;
    pTVar28 = pTVar28 + 1;
    *(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)
     ((pFVar5->UsedChaosMaterials).AllocatorInstance.Data + (longlong)iVar17 * 4) = *pTVar24;
  }
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

// CreateCollisionObject @ 145f0a950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULandscapeHeightfieldCollisionComponent::CreateCollisionObject
          (ULandscapeHeightfieldCollisionComponent *this)

{
  longlong *plVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int *piVar4;
  FGuid *pFVar5;
  TRefCountPtr<Chaos::FHeightField> *pTVar6;
  uint uVar7;
  FHeightfieldGeometryRef *pFVar8;
  FHeightfieldGeometryRef *pFVar9;
  FHeightField *pFVar10;
  uint uVar11;
  uint uVar12;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> TVar13;
  int iVar14;
  int iVar15;
  FString *pFVar16;
  FGuid *pFVar17;
  FChaosArchiveContext *pFVar18;
  ulong64 uVar19;
  longlong lVar20;
  FChaosArchiveContext *pFVar21;
  TRefCountPtr<Chaos::FHeightField> *pTVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  FLLMScope local_res8 [2];
  TPairInitializer<FGuid_const_&,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*_&&>
  local_res10;
  ULandscapeHeightfieldCollisionComponent *local_res20;
  undefined1 local_1c8 [16];
  FMemScope local_1b8;
  FString local_1b0;
  FArchiveState local_198;
  undefined8 local_108;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_100;
  undefined8 local_f8;
  FChaosArchive local_e8;
  FGuid local_48;
  
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId840,
               "ULandscapeHeightfieldCollisionComponent::CreateCollisionObject",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
               ,0x348);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId840);
  }
  FLLMScope::FLLMScope(local_res8,ChaosLandscape,false,None,Default,true);
  FMemScope::FMemScope(&local_1b8,ChaosLandscape,true);
  local_res20 = this;
  if ((this->HeightfieldRef).Reference != (FHeightfieldGeometryRef *)0x0) goto LAB_145f0b01e;
  EnterCriticalSection((LPCRITICAL_SECTION)&GSharedHeightfieldRefsCriticalSection);
  if (*(longlong *)&this->field_0xb0 == 0) {
    UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  pFVar5 = &this->HeightfieldGuid;
  pFVar21 = (FChaosArchiveContext *)0x0;
  if ((((this->HeightfieldGuid).D == 0 && (this->HeightfieldGuid).C == 0) &&
      (this->HeightfieldGuid).B == 0) && pFVar5->A == 0) {
    pFVar16 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_1b0,(UObject *)0x0);
    local_1c8._0_8_ = (pFVar16->Data).AllocatorInstance.Data;
    iVar15 = (pFVar16->Data).ArrayNum;
    iVar14 = iVar15 + -1;
    if (iVar15 == 0) {
      iVar14 = 0;
    }
    local_1c8._8_4_ = iVar14;
    pFVar17 = FGuid::NewDeterministicGuid(&local_48,(TStringView<wchar_t> *)local_1c8,0);
    uVar7 = pFVar17->B;
    uVar11 = pFVar17->C;
    uVar12 = pFVar17->D;
    pFVar5->A = pFVar17->A;
    pFVar5->B = uVar7;
    (this->HeightfieldGuid).C = uVar11;
    (this->HeightfieldGuid).D = uVar12;
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
LAB_145f0aa99:
    if ((this->CookedCollisionData).ArrayNum == 0) {
      pTVar6 = &this->LocalHeightfieldGeometryRef;
      if (pTVar6->Reference == (FHeightField *)0x0) {
        if ((this->bCookedCollisionDataWasDeleted != false) && (2 < (byte)LogLandscape._0_1_)) {
          local_res10.Key = *(FGuid **)&this->field_0x18;
          ::FName::ToString((FName *)&local_res10,(FString *)local_1c8);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
          if ((FScriptContainerElement *)local_1c8._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_1c8._0_8_);
          }
        }
        goto LAB_145f0b001;
      }
      pFVar18 = ::operator_new(0x40);
      if (pFVar18 != (FChaosArchiveContext *)0x0) {
        (pFVar18->TagToObject).ArrayNum = 0;
        (pFVar18->TagToObject).AllocatorInstance.Data =
             (FScriptContainerElement *)
             &___7FHeightfieldGeometryRef_ULandscapeHeightfieldCollisionComponent__6B_;
        uVar7 = pFVar5->B;
        uVar11 = (this->HeightfieldGuid).C;
        uVar12 = (this->HeightfieldGuid).D;
        *(uint *)&(pFVar18->ObjToTag).field_0x0 = pFVar5->A;
        *(uint *)&(pFVar18->ObjToTag).field_0x4 = uVar7;
        *(uint *)&(pFVar18->ObjToTag).field_0x8 = uVar11;
        *(uint *)&(pFVar18->ObjToTag).field_0xc = uVar12;
        *(undefined8 *)&(pFVar18->ObjToTag).field_0x10 = 0;
        *(undefined8 *)&(pFVar18->ObjToTag).field_0x18 = 0;
        *(undefined8 *)&(pFVar18->ObjToTag).field_0x20 = 0;
        *(undefined8 *)&(pFVar18->ObjToTag).field_0x28 = 0;
        pFVar21 = pFVar18;
      }
      local_1c8._8_8_ = &local_res10.Value;
      local_res10.Value = (FHeightfieldGeometryRef **)pFVar21;
      local_1c8._0_8_ = pFVar5;
      TSet<TTuple<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*>,TDefaultMapHashableKeyFuncs<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FGuid_const_&,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*_&&>_>
                ((TSet<TTuple<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*>,TDefaultMapHashableKeyFuncs<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*,0>,FDefaultSetAllocator>
                  *)&GSharedHeightfieldRefs,&local_res10,(bool *)local_1c8);
      pFVar8 = *(FHeightfieldGeometryRef **)
                ((longlong)(int)(uint)local_res10.Key * 0x20 + 0x10 + GSharedHeightfieldRefs._0_8_);
      pFVar9 = (this->HeightfieldRef).Reference;
      if (pFVar9 != pFVar8) {
        (this->HeightfieldRef).Reference = pFVar8;
        if (pFVar8 != (FHeightfieldGeometryRef *)0x0) {
          LOCK();
          *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
          UNLOCK();
        }
        if (pFVar9 != (FHeightfieldGeometryRef *)0x0) {
          plVar1 = &pFVar9->_padding_;
          LOCK();
          lVar20 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)lVar20 == 1) && (plVar1 != (longlong *)0x0)) {
            (**(code **)pFVar9->_padding_)(pFVar9,1);
          }
        }
      }
      pTVar22 = &((this->HeightfieldRef).Reference)->HeightfieldGeometry;
      if (pTVar22 != pTVar6) {
        pFVar10 = pTVar22->Reference;
        pTVar22->Reference = pTVar6->Reference;
        pTVar6->Reference = (FHeightField *)0x0;
        if (pFVar10 != (FHeightField *)0x0) {
          LOCK();
          puVar2 = &pFVar10->field_0x8;
          iVar15 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if ((iVar15 == 1) && (*(int *)&pFVar10->field_0xc == 0)) {
            (*(code *)**(undefined8 **)pFVar10)(pFVar10,1);
          }
        }
      }
      if ((this->LocalHeightfieldSimpleGeometryRef).Reference != (FHeightField *)0x0) {
        TRefCountPtr<Chaos::FHeightField>::operator=
                  (&((this->HeightfieldRef).Reference)->HeightfieldSimpleGeometry,
                   &this->LocalHeightfieldSimpleGeometryRef);
      }
    }
    else {
      pFVar18 = ::operator_new(0x40);
      local_res10.Value = (FHeightfieldGeometryRef **)pFVar21;
      if (pFVar18 != (FChaosArchiveContext *)0x0) {
        (pFVar18->TagToObject).ArrayNum = 0;
        (pFVar18->TagToObject).AllocatorInstance.Data =
             (FScriptContainerElement *)
             &___7FHeightfieldGeometryRef_ULandscapeHeightfieldCollisionComponent__6B_;
        uVar7 = pFVar5->B;
        uVar11 = (this->HeightfieldGuid).C;
        uVar12 = (this->HeightfieldGuid).D;
        *(uint *)&(pFVar18->ObjToTag).field_0x0 = pFVar5->A;
        *(uint *)&(pFVar18->ObjToTag).field_0x4 = uVar7;
        *(uint *)&(pFVar18->ObjToTag).field_0x8 = uVar11;
        *(uint *)&(pFVar18->ObjToTag).field_0xc = uVar12;
        *(undefined8 *)&(pFVar18->ObjToTag).field_0x10 = 0;
        *(undefined8 *)&(pFVar18->ObjToTag).field_0x18 = 0;
        *(undefined8 *)&(pFVar18->ObjToTag).field_0x20 = 0;
        *(undefined8 *)&(pFVar18->ObjToTag).field_0x28 = 0;
        local_res10.Value = (FHeightfieldGeometryRef **)pFVar18;
      }
      local_1c8._8_8_ = &local_res10.Value;
      local_1c8._0_8_ = pFVar5;
      TSet<TTuple<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*>,TDefaultMapHashableKeyFuncs<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FGuid_const_&,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*_&&>_>
                ((TSet<TTuple<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*>,TDefaultMapHashableKeyFuncs<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*,0>,FDefaultSetAllocator>
                  *)&GSharedHeightfieldRefs,&local_res10,(bool *)local_1c8);
      pFVar8 = *(FHeightfieldGeometryRef **)
                ((longlong)(int)(uint)local_res10.Key * 0x20 + 0x10 + GSharedHeightfieldRefs._0_8_);
      pFVar9 = (this->HeightfieldRef).Reference;
      if (pFVar9 != pFVar8) {
        (this->HeightfieldRef).Reference = pFVar8;
        if (pFVar8 != (FHeightfieldGeometryRef *)0x0) {
          LOCK();
          *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
          UNLOCK();
        }
        if (pFVar9 != (FHeightfieldGeometryRef *)0x0) {
          plVar1 = &pFVar9->_padding_;
          LOCK();
          lVar20 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)lVar20 == 1) && (plVar1 != (longlong *)0x0)) {
            (**(code **)pFVar9->_padding_)(pFVar9,1);
          }
        }
      }
      bVar24 = -1 < CpuChannel->Enabled;
      if (bVar24) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId977,"CreateCollisionObject_ChaosStream",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                   ,0x3d1);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId977);
      }
      local_198._padding_ = 0;
      local_198.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_198.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_198.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_198.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_198._40_8_ = 0;
      local_198.ArSerializingDefaults = 0;
      local_198.ArPortFlags = 0;
      local_198.ArMaxSerializeSize = 0;
      local_198.ArUEVer.FileVersionUE4 = 0;
      local_198.ArUEVer.FileVersionUE5 = 0;
      local_198.ArLicenseeUEVer = 0;
      local_198.ArEngineVer.Major = 0;
      local_198.ArEngineVer.Minor = 0;
      local_198.ArEngineVer.Patch = 0;
      local_198.ArEngineVer._6_2_ = 0;
      local_198.ArEngineVer.Changelist = 0;
      local_198.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_198.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_198.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_198.SerializedProperty = (FProperty *)0x0;
      local_198.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_198.bCustomVersionsAreReset = false;
      local_198._129_7_ = 0;
      local_198.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_198);
      local_108 = 0;
      local_198._padding_ = (longlong)&___7FMemoryReader__6B_;
      local_f8 = 0x7fffffffffffffff;
      local_100 = &this->CookedCollisionData;
      FArchiveState::SetIsLoading(&local_198,true);
      (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
      FArchiveProxy::FArchiveProxy((FArchiveProxy *)&local_e8,(FArchive *)&local_198);
      local_e8._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
      pFVar18 = ::operator_new(0x158);
      if (pFVar18 != (FChaosArchiveContext *)0x0) {
        pFVar21 = Chaos::FChaosArchiveContext::FChaosArchiveContext(pFVar18);
      }
      bVar25 = false;
      puVar3 = *(uint **)local_e8._padding_ + 1;
      local_e8.Context.Ptr = pFVar21;
      if (*(uint **)(local_e8._padding_ + 8) < puVar3) {
        local_res10.Key = (FGuid *)((ulonglong)local_res10.Key & 0xffffffff00000000);
        if (*(code **)(local_e8._padding_ + 0x188) == FArchiveProxy::Serialize) {
          (**(code **)(*(longlong *)local_e8._padding_ + 0x188))();
        }
        else {
          (**(code **)(local_e8._padding_ + 0x188))(&local_e8,&local_res10,4);
        }
        if (1 < (uint)local_res10.Key) {
          FArchiveState::SetError((FArchiveState *)&local_e8);
        }
        uVar7 = (uint)local_res10.Key;
        if (((byte)local_e8._padding_ & 1) != 0) goto LAB_145f0af35;
      }
      else {
        uVar7 = **(uint **)local_e8._padding_;
        *(uint **)local_e8._padding_ = puVar3;
LAB_145f0af35:
        bVar25 = uVar7 != 0;
      }
      Chaos::operator<<<Chaos::FHeightField>
                (&local_e8,&((this->HeightfieldRef).Reference)->HeightfieldGeometry);
      if (bVar25) {
        Chaos::operator<<<Chaos::FHeightField>
                  (&local_e8,&((this->HeightfieldRef).Reference)->HeightfieldSimpleGeometry);
      }
      TVar13.Ptr = local_e8.Context.Ptr;
      if (local_e8.Context.Ptr != (FChaosArchiveContext *)0x0) {
        Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_e8.Context.Ptr);
        ::operator_delete(TVar13.Ptr,0x158);
      }
      FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&local_e8);
      FArchive::~FArchive((FArchive *)&local_198);
      if (bVar24) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    `ULandscapeHeightfieldCollisionComponent::CreateCollisionObject'::__l2::<lambda_1>::operator()
              (&local_res20,&((this->HeightfieldRef).Reference)->UsedChaosMaterials,
               &this->CookedPhysicalMaterials);
    piVar4 = &(this->CookedCollisionData).ArrayMax;
    (this->CookedCollisionData).ArrayNum = 0;
    if (*piVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->CookedCollisionData).AllocatorInstance,0,piVar4);
    }
    this->bCookedCollisionDataWasDeleted = true;
  }
  else {
    uVar19 = CityHash64((char *)pFVar5,0x10);
    iVar15 = TSet<TTuple<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*>,TDefaultMapHashableKeyFuncs<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FGuid>
                       ((TSet<TTuple<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*>,TDefaultMapHashableKeyFuncs<FGuid,ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef_*,0>,FDefaultSetAllocator>
                         *)&GSharedHeightfieldRefs,(uint)uVar19,pFVar5);
    if (((iVar15 == -1) ||
        (lVar20 = (longlong)iVar15 * 0x20 + GSharedHeightfieldRefs._0_8_, lVar20 == 0)) ||
       (pFVar8 = *(FHeightfieldGeometryRef **)(lVar20 + 0x10),
       pFVar8 == (FHeightfieldGeometryRef *)0x0)) goto LAB_145f0aa99;
    pFVar9 = (this->HeightfieldRef).Reference;
    if (pFVar9 != pFVar8) {
      (this->HeightfieldRef).Reference = pFVar8;
      LOCK();
      *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
      UNLOCK();
      if (pFVar9 != (FHeightfieldGeometryRef *)0x0) {
        plVar1 = &pFVar9->_padding_;
        LOCK();
        lVar20 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar20 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar9->_padding_)(pFVar9,1);
        }
      }
    }
  }
LAB_145f0b001:
  LeaveCriticalSection((LPCRITICAL_SECTION)&GSharedHeightfieldRefsCriticalSection);
LAB_145f0b01e:
  FMemScope::~FMemScope(&local_1b8);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DeferredDestroyCollision @ 145f0b370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULandscapeHeightfieldCollisionComponent::DeferredDestroyCollision
          (ULandscapeHeightfieldCollisionComponent *this,
          TRefCountPtr<ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FHeightfieldGeometryRef *pFVar3;
  UWorld *pUVar4;
  ULandscapeHeightfieldCollisionComponent *local_28;
  FPhysScene_Chaos *local_20;
  FHeightField *local_18;
  FHeightField *local_10;
  
  if ((param_1->Reference != (FHeightfieldGeometryRef *)0x0) &&
     ((uint)param_1->Reference->_padding_ < 2)) {
    pUVar4 = *(UWorld **)&this->field_0xb0;
    if ((pUVar4 == (UWorld *)0x0) &&
       (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar4 == (UWorld *)0x0)) {
      return;
    }
    local_20 = pUVar4->PhysicsScene;
    if ((local_20 != (FPhysScene_Chaos *)0x0) && (local_20->_padding_ != 0)) {
      pFVar3 = param_1->Reference;
      local_18 = (pFVar3->HeightfieldGeometry).Reference;
      (pFVar3->HeightfieldGeometry).Reference = (FHeightField *)0x0;
      local_10 = (pFVar3->HeightfieldSimpleGeometry).Reference;
      (pFVar3->HeightfieldSimpleGeometry).Reference = (FHeightField *)0x0;
      local_28 = this;
      `ULandscapeHeightfieldCollisionComponent::DeferredDestroyCollision'::__l2::<lambda_1>::
      operator()(&local_28);
      if (local_10 != (FHeightField *)0x0) {
        LOCK();
        puVar1 = &local_10->field_0x8;
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (*(int *)&local_10->field_0xc == 0)) {
          (*(code *)**(undefined8 **)local_10)(local_10,1);
        }
      }
      if (local_18 != (FHeightField *)0x0) {
        LOCK();
        puVar1 = &local_18->field_0x8;
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (*(int *)&local_18->field_0xc == 0)) {
          (*(code *)**(undefined8 **)local_18)(local_18,1);
        }
      }
    }
  }
  return;
}

// DestroyComponent @ 145f0b6b0

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
ULandscapeHeightfieldCollisionComponent::DestroyComponent
          (ULandscapeHeightfieldCollisionComponent *this,bool param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ALandscapeProxy *pAVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ULandscapeHeightfieldCollisionComponent *pUVar9;
  int iVar10;
  ULandscapeHeightfieldCollisionComponent *local_48 [2];
  
  pAVar5 = CastChecked<ALandscapeProxy,UObject>(*(UObject **)&this->field_0x20);
  if (pAVar5 != (ALandscapeProxy *)0x0) {
    local_48[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pFVar2 = (pAVar5->CollisionComponents).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 <
         pFVar2 + (longlong)(pAVar5->CollisionComponents).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (pAVar5->CollisionComponents).ArrayNum;
    if (iVar1 != 0) {
      iVar10 = 0;
      pFVar2 = (pAVar5->CollisionComponents).AllocatorInstance.Data;
      bVar4 = *(ULandscapeHeightfieldCollisionComponent **)pFVar2 != local_48[0];
      lVar6 = 0;
      pUVar9 = local_48[0];
      iVar7 = 0;
      do {
        iVar8 = iVar7;
        do {
          lVar6 = lVar6 + 1;
          iVar8 = iVar8 + 1;
          if (iVar1 <= lVar6) break;
        } while (bVar4 == (*(ULandscapeHeightfieldCollisionComponent **)(pFVar2 + lVar6 * 8) !=
                          pUVar9));
        if (bVar4 != false) {
          if (iVar10 != iVar7) {
            memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar7 * 8,
                    (longlong)(iVar8 - iVar7) << 3);
            pUVar9 = local_48[0];
          }
          iVar10 = iVar10 + (iVar8 - iVar7);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar7 = iVar8;
      } while (lVar6 < iVar1);
      (pAVar5->CollisionComponents).ArrayNum = iVar10;
    }
  }
  USceneComponent::DestroyComponent((USceneComponent *)this,param_1);
  return;
}

// DoCustomNavigableGeometryExport @ 145f0bc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
ULandscapeHeightfieldCollisionComponent::DoCustomNavigableGeometryExport
          (ULandscapeHeightfieldCollisionComponent *this,FNavigableGeometryExport *param_1)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ForElementType<unsigned_int> FVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auStack_c8 [80];
  FHeightfieldGeometryRef *local_78;
  FHeightField *pFStack_70;
  FHeightField *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar8 = IsInGameThread();
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                       ,0x74c,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return (bool)uVar9;
    }
  }
  lVar1 = *(longlong *)&this->field_0x3a0;
  if ((lVar1 != 0) && (lVar10 = *(longlong *)(lVar1 + 0x30), lVar10 != 0)) {
    local_78 = this[-1].HeightfieldRef.Reference;
    pFStack_70 = this[-1].LocalHeightfieldGeometryRef.Reference;
    local_68 = this[-1].LocalHeightfieldSimpleGeometryRef.Reference;
    uStack_60._0_4_ = this[-1].HeightfieldRowsCount;
    uStack_60._4_4_ = this[-1].HeightfieldColumnsCount;
    dVar5 = *(double *)(this[-1].CachedHeightFieldSamples.Holes.AllocatorInstance.InlineData + 8);
    FVar6 = this[-1].CachedHeightFieldSamples.Holes.AllocatorInstance.SecondaryData;
    dVar7 = *(double *)&this[-1].CachedHeightFieldSamples.Holes.NumBits;
    local_58 = *(undefined8 *)&this[-1].CachedHeightFieldSamples.Heights;
    uStack_50 = *(undefined8 *)&this[-1].CachedHeightFieldSamples.Heights.field_0x8;
    local_48 = *(undefined8 *)&this[-1].CachedHeightFieldSamples.Heights.field_0x10;
    uStack_40 = *(undefined8 *)this[-1].CachedHeightFieldSamples.Holes.AllocatorInstance.InlineData;
    if (*(longlong *)(lVar1 + 0x38) == 0) {
      dVar4 = *(double *)&this[-1].field_0x648 * 0.0;
      dVar3 = (double)FVar6 * (double)*(float *)&this->field_0x314;
      local_28._8_4_ = SUB84(dVar4,0);
      local_28._0_8_ = dVar7 * __real_3f80000000000000;
      local_28._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      local_38._8_4_ = SUB84(dVar3,0);
      local_38._0_8_ = dVar5 * (double)*(float *)&this->field_0x314;
      local_38._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      dVar11 = (double)(((float)*(int *)&this->field_0x310 * *(float *)&this->field_0x314) /
                       (float)*(int *)&this->field_0x318);
      dVar3 = (double)FVar6 * dVar11;
      dVar4 = *(double *)&this[-1].field_0x648 * 0.0;
      local_38._8_4_ = SUB84(dVar3,0);
      local_38._0_8_ = dVar5 * dVar11;
      local_38._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      local_28._8_4_ = SUB84(dVar4,0);
      local_28._0_8_ = dVar7 * __real_3f80000000000000;
      local_28._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      lVar10 = *(longlong *)(lVar1 + 0x38);
    }
    (**(code **)((longlong)*param_1 + 0x18))(param_1,lVar10,&local_78);
  }
  return false;
}

// FillHeightTile @ 145f0cb70

bool __thiscall
ULandscapeHeightfieldCollisionComponent::FillHeightTile
          (ULandscapeHeightfieldCollisionComponent *this,TArrayView<float,int> *param_1,int param_2,
          int param_3)

{
  FHeightField *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  <lambda_1> local_res8;
  FHeightfieldGeometryRef *local_78;
  uint local_70;
  uint local_6c;
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  TArrayView<float,int> **ppTStack_50;
  double local_48;
  TArrayView<float,int> *local_38;
  FHeightfieldGeometryRef **local_30;
  undefined1 *local_28;
  int local_20;
  int local_1c;
  float local_18;
  
  local_78 = (this->HeightfieldRef).Reference;
  if (local_78 != (FHeightfieldGeometryRef *)0x0) {
    pFVar1 = (local_78->HeightfieldGeometry).Reference;
    uVar4 = 0;
    local_70 = uVar4;
    if (pFVar1 != (FHeightField *)0x0) {
      local_70 = (uint)(pFVar1->GeomData).NumCols;
    }
    pFVar1 = (local_78->HeightfieldGeometry).Reference;
    local_6c = uVar4;
    if (pFVar1 != (FHeightField *)0x0) {
      local_6c = (uint)(pFVar1->GeomData).NumRows;
    }
    iVar2 = local_6c - 1;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    uVar3 = local_70 - 1;
    if ((int)(local_70 - 1) < 0) {
      uVar3 = uVar4;
    }
    iVar2 = param_2 + iVar2 * param_3 + uVar3;
    if ((-1 < iVar2) && (iVar2 < param_1->ArrayNum)) {
      local_48 = *(double *)&this->field_0x240;
      local_30 = &local_78;
      local_28 = &this->field_0x1f0;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`ULandscapeHeightfieldCollisionComponent::FillHeightTile'::__l2::<lambda_1>,void,int>
                 ::Call;
      ppTStack_50 = &local_38;
      local_18 = (float)(local_48 * __real_3f80000000000000);
      local_68.DataPtr = (void **)0x0;
      local_68.ArrayNum = 0;
      local_38 = param_1;
      local_20 = param_2;
      local_1c = param_3;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",local_6c,1,(TFunctionRef<void___cdecl(int)> *)&local_58,
                 local_res8,None,&local_68);
      return true;
    }
  }
  return false;
}

// FillMaterialIndexTile @ 145f0cce0

bool __thiscall
ULandscapeHeightfieldCollisionComponent::FillMaterialIndexTile
          (ULandscapeHeightfieldCollisionComponent *this,TArrayView<unsigned_char,int> *param_1,
          int param_2,int param_3)

{
  FHeightfieldGeometryRef *pFVar1;
  FHeightField *pFVar2;
  code *pcVar3;
  uchar uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  
  pFVar1 = (this->HeightfieldRef).Reference;
  uVar14 = (ulonglong)param_2;
  if (pFVar1 != (FHeightfieldGeometryRef *)0x0) {
    pFVar2 = (pFVar1->HeightfieldGeometry).Reference;
    uVar16 = 0;
    if (pFVar2 == (FHeightField *)0x0) {
      uVar10 = 0;
      uVar12 = uVar16;
    }
    else {
      uVar10 = (uint)(pFVar2->GeomData).NumCols;
      uVar12 = (uint)(pFVar2->GeomData).NumRows;
    }
    iVar7 = uVar12 - 1;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    iVar9 = uVar10 - 1;
    if ((int)(uVar10 - 1) < 0) {
      iVar9 = 0;
    }
    iVar9 = param_2 + iVar7 * param_3 + iVar9;
    if ((-1 < iVar9) && (iVar9 < param_1->ArrayNum)) {
      if (uVar12 != 0) {
        uVar15 = uVar14;
        do {
          iVar7 = 0;
          uVar11 = uVar15;
          if (uVar10 != 0) {
            do {
              uVar4 = Chaos::FHeightField::GetMaterialIndex
                                ((pFVar1->HeightfieldGeometry).Reference,iVar7,uVar16);
              uVar13 = (int)uVar14 + iVar7;
              uVar8 = 0;
              if ((int)uVar13 < param_1->ArrayNum) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              iVar7 = iVar7 + 1;
              param_1->DataPtr[uVar11] = uVar4;
              uVar11 = uVar11 + 1;
            } while (iVar7 < (int)uVar10);
          }
          uVar15 = uVar15 + (longlong)param_3;
          uVar16 = uVar16 + 1;
          uVar14 = (ulonglong)(uint)((int)uVar14 + param_3);
        } while ((int)uVar16 < (int)uVar12);
      }
      return true;
    }
  }
  return false;
}

// GatherGeometrySlice @ 145f0da20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ULandscapeHeightfieldCollisionComponent::GatherGeometrySlice
          (ULandscapeHeightfieldCollisionComponent *this,FNavigableGeometryExport *param_1,
          TBox<double> *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_c8 [32];
  FHeightfieldGeometryRef **local_a8;
  TBox<double> *local_a0;
  FHeightfieldGeometryRef *local_78;
  FHeightField *pFStack_70;
  FHeightField *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((*(int *)&this->field_0x3d0 != 0) || (*(int *)&this->field_0x3f0 != 0)) {
    local_68 = this[-1].LocalHeightfieldSimpleGeometryRef.Reference;
    uStack_60._0_4_ = this[-1].HeightfieldRowsCount;
    uStack_60._4_4_ = this[-1].HeightfieldColumnsCount;
    local_78 = this[-1].HeightfieldRef.Reference;
    pFStack_70 = this[-1].LocalHeightfieldGeometryRef.Reference;
    local_48 = *(undefined8 *)&this[-1].CachedHeightFieldSamples.Heights.field_0x10;
    uStack_40 = *(undefined8 *)this[-1].CachedHeightFieldSamples.Holes.AllocatorInstance.InlineData;
    local_58 = *(undefined8 *)&this[-1].CachedHeightFieldSamples.Heights;
    uStack_50 = *(undefined8 *)&this[-1].CachedHeightFieldSamples.Heights.field_0x8;
    local_a8 = &local_78;
    dVar1 = (double)this[-1].CachedHeightFieldSamples.Holes.AllocatorInstance.SecondaryData *
            (double)*(float *)&this->field_0x314;
    dVar2 = *(double *)&this[-1].field_0x648 * 0.0;
    local_38._8_4_ = SUB84(dVar1,0);
    local_38._0_8_ =
         *(double *)(this[-1].CachedHeightFieldSamples.Holes.AllocatorInstance.InlineData + 8) *
         (double)*(float *)&this->field_0x314;
    local_38._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    local_28._8_4_ = SUB84(dVar2,0);
    local_28._0_8_ =
         *(double *)&this[-1].CachedHeightFieldSamples.Holes.NumBits * __real_3f80000000000000;
    local_28._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_a0 = param_2;
    (**(code **)((longlong)*param_1 + 0x20))
              (param_1,&this->field_0x3c0,*(undefined4 *)&this->field_0x3b8,
               *(undefined4 *)&this->field_0x3bc);
  }
  return;
}

// GenerateCollisionData @ 145f0db00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
ULandscapeHeightfieldCollisionComponent::GenerateCollisionData
          (ULandscapeHeightfieldCollisionComponent *this,FWriteRuntimeDataParams *param_1,
          TRefCountPtr<Chaos::FHeightField> *param_2,bool param_3,
          TRefCountPtr<Chaos::FHeightField> *param_4,
          TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  FHeightField *pFVar4;
  code *pcVar5;
  double dVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  undefined1 uVar9;
  ALandscapeProxy *pAVar10;
  FHeightField *pFVar11;
  FHeightField *pFVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined1 local_res8 [8];
  ForAnyElementType local_170;
  int local_168;
  int local_164;
  TObjectPtr<UPhysicalMaterial>_u_0 local_160;
  FScriptContainerElement *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  ForAnyElementType *local_138;
  undefined1 *local_130;
  FWriteRuntimeDataParams *local_128;
  TObjectPtr<UPhysicalMaterial>_u_0 *local_120;
  TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *local_118;
  undefined1 local_110 [24];
  TRefCountPtr<Chaos::FHeightField> local_f8;
  TRefCountPtr<Chaos::FHeightField> local_f0;
  TArrayView<unsigned_char_const_,int> local_e8;
  TArrayView<unsigned_char_const_,int> local_d8;
  TArrayView<unsigned_char_const_,int> local_c8;
  TArrayView<unsigned_char_const_,int> local_b8;
  TArrayView<unsigned_char_const_,int> local_a8;
  TArrayView<unsigned_short_const_,int> local_98;
  TArrayView<unsigned_char_const_,int> local_88;
  TArrayView<unsigned_short_const_,int> local_78;
  undefined1 local_68 [48];
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1209,
               "ULandscapeHeightfieldCollisionComponent::GenerateCollisionData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
               ,0x4b9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1209);
  }
  pAVar10 = CastChecked<ALandscapeProxy,UObject>(*(UObject **)&this->field_0x20);
  if ((pAVar10 == (ALandscapeProxy *)0x0) || (pAVar10->_padding_ == 0)) {
    bVar20 = false;
    goto LAB_145f0e080;
  }
  local_160 = (TObjectPtr<UPhysicalMaterial>_u_0)(pAVar10->DefaultPhysMaterial).field0_0x0.DebugPtr;
  if (local_160.DebugPtr == (UPhysicalMaterial *)0x0) {
    local_160 = (GEngine->DefaultPhysMaterial).field0_0x0;
  }
  iVar16 = this->CollisionSizeQuads;
  lVar3 = pAVar10->_padding_;
  iVar18 = iVar16 + 1;
  local_110._16_8_ = *(double *)(lVar3 + 0x188);
  iVar2 = this->SimpleCollisionSizeQuads;
  local_res8[0] =
       *(double *)(lVar3 + 0x180) * *(double *)(lVar3 + 0x178) * (double)local_110._16_8_ < 0.0;
  pFVar12 = (FHeightField *)0x0;
  local_170.Data = (FScriptContainerElement *)0x0;
  iVar14 = iVar2 + 1;
  if (iVar2 < 1) {
    iVar14 = 0;
  }
  local_164 = 0;
  local_168 = 0;
  if (param_1->bUseDefaultMaterialOnly == false) {
    param_5->ArrayNum = 0;
    if (param_5->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
    }
    uVar15 = iVar14 * iVar14 + iVar18 * iVar18;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if (local_164 < (int)uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar15,&local_170,local_168,&local_164);
    }
    local_138 = &local_170;
    local_130 = local_res8;
    local_120 = &local_160;
    local_118 = param_5;
    bVar20 = -1 < CpuChannel->Enabled;
    local_128 = param_1;
    if (bVar20) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1275,"ResolveMaterials",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                 ,0x4fb);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1275);
    }
    local_e8.DataPtr = (param_1->RenderPhysicalMaterialIds).DataPtr;
    local_e8.ArrayNum = (param_1->RenderPhysicalMaterialIds).ArrayNum;
    local_e8._12_4_ = *(undefined4 *)&(param_1->RenderPhysicalMaterialIds).field_0xc;
    local_d8.DataPtr = (param_1->DominantLayers).DataPtr;
    local_d8.ArrayNum = (param_1->DominantLayers).ArrayNum;
    local_d8._12_4_ = *(undefined4 *)&(param_1->DominantLayers).field_0xc;
    `ULandscapeHeightfieldCollisionComponent::GenerateCollisionData'::__l8::<lambda_1>::operator()
              (&local_138,iVar18,&local_d8,&local_e8);
    local_c8.DataPtr = (param_1->SimpleRenderPhysicalMaterialIds).DataPtr;
    local_c8.ArrayNum = (param_1->SimpleRenderPhysicalMaterialIds).ArrayNum;
    local_c8._12_4_ = *(undefined4 *)&(param_1->SimpleRenderPhysicalMaterialIds).field_0xc;
    local_b8.DataPtr = (param_1->SimpleDominantLayers).DataPtr;
    local_b8.ArrayNum = (param_1->SimpleDominantLayers).ArrayNum;
    local_b8._12_4_ = *(undefined4 *)&(param_1->SimpleDominantLayers).field_0xc;
    `ULandscapeHeightfieldCollisionComponent::GenerateCollisionData'::__l8::<lambda_1>::operator()
              (&local_138,iVar14,&local_b8,&local_c8);
    if (bVar20) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    uVar15 = iVar16 * iVar16;
    if (param_3) {
      uVar15 = uVar15 + iVar2 * iVar2;
    }
    if ((int)uVar15 < 1) {
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
    }
    else {
      iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,uVar15,&local_170,&local_168,&local_164);
      memset(local_170.Data + iVar16,0,(longlong)(int)uVar15);
    }
  }
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1292,"CreateHeightField",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
               ,0x50c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1292);
  }
  FVar7.Data = local_170.Data;
  iVar16 = this->CollisionSizeQuads * this->CollisionSizeQuads;
  if ((iVar16 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pFVar11 = ::operator_new(0x170);
  dVar6 = __real_3ff0000000000000;
  if (pFVar11 == (FHeightField *)0x0) {
    pFVar11 = (FHeightField *)0x0;
  }
  else {
    local_98.DataPtr = (param_1->Heights).DataPtr;
    local_98.ArrayNum = (param_1->Heights).ArrayNum;
    local_98._12_4_ = *(undefined4 *)&(param_1->Heights).field_0xc;
    local_68._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
    local_68._8_8_ = _UNK_150689688;
    local_158 = FVar7.Data;
    local_a8._12_4_ = uStack_14c;
    local_a8.ArrayNum = iVar16;
    local_68._16_8_ = __real_3ff0000000000000;
    local_a8.DataPtr = (uchar *)FVar7.Data;
    iStack_150 = iVar16;
    pFVar11 = Chaos::FHeightField::FHeightField
                        (pFVar11,&local_98,&local_a8,iVar18,iVar18,(TVector<double,3> *)local_68);
    if (pFVar11 != (FHeightField *)0x0) {
      LOCK();
      *(int *)&pFVar11->field_0x8 = *(int *)&pFVar11->field_0x8 + 1;
      UNLOCK();
    }
  }
  if (param_2 == &local_f8) {
    if (pFVar11 != (FHeightField *)0x0) {
      LOCK();
      puVar1 = &pFVar11->field_0x8;
      iVar18 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar18 == 1) && (*(int *)&pFVar11->field_0xc == 0)) {
        puVar13 = *(undefined8 **)pFVar11;
        goto LAB_145f0df3f;
      }
    }
  }
  else {
    pFVar4 = param_2->Reference;
    param_2->Reference = pFVar11;
    if (pFVar4 != (FHeightField *)0x0) {
      LOCK();
      puVar1 = &pFVar4->field_0x8;
      iVar18 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar18 == 1) && (*(int *)&pFVar4->field_0xc == 0)) {
        puVar13 = *(undefined8 **)pFVar4;
        pFVar11 = pFVar4;
LAB_145f0df3f:
        (*(code *)*puVar13)(pFVar11,1);
      }
    }
  }
  if (param_3) {
    iVar18 = this->SimpleCollisionSizeQuads * this->SimpleCollisionSizeQuads;
    pFVar17 = local_170.Data + iVar16;
    if ((iVar18 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    pFVar11 = ::operator_new(0x170);
    if (pFVar11 != (FHeightField *)0x0) {
      local_78.DataPtr = (param_1->SimpleHeights).DataPtr;
      local_78.ArrayNum = (param_1->SimpleHeights).ArrayNum;
      local_78._12_4_ = *(undefined4 *)&(param_1->SimpleHeights).field_0xc;
      local_110._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
      local_110._8_8_ = _UNK_150689688;
      local_88._12_4_ = uStack_13c;
      local_88.ArrayNum = iVar18;
      local_110._16_8_ = dVar6;
      local_148 = pFVar17;
      iStack_140 = iVar18;
      local_88.DataPtr = (uchar *)pFVar17;
      pFVar12 = Chaos::FHeightField::FHeightField
                          (pFVar11,&local_78,&local_88,iVar14,iVar14,(TVector<double,3> *)local_110)
      ;
      if (pFVar12 != (FHeightField *)0x0) {
        LOCK();
        *(int *)&pFVar12->field_0x8 = *(int *)&pFVar12->field_0x8 + 1;
        UNLOCK();
      }
    }
    if (param_4 == &local_f0) {
      if (pFVar12 != (FHeightField *)0x0) {
        LOCK();
        puVar1 = &pFVar12->field_0x8;
        iVar18 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if ((iVar18 == 1) && (*(int *)&pFVar12->field_0xc == 0)) {
          puVar13 = *(undefined8 **)pFVar12;
          goto LAB_145f0e053;
        }
      }
    }
    else {
      pFVar11 = param_4->Reference;
      param_4->Reference = pFVar12;
      if (pFVar11 != (FHeightField *)0x0) {
        LOCK();
        puVar1 = &pFVar11->field_0x8;
        iVar18 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if ((iVar18 == 1) && (*(int *)&pFVar11->field_0xc == 0)) {
          puVar13 = *(undefined8 **)pFVar11;
          pFVar12 = pFVar11;
LAB_145f0e053:
          (*(code *)*puVar13)(pFVar12,1);
        }
      }
    }
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar20 = true;
  if (local_170.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data);
  }
LAB_145f0e080:
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar20;
}

// GetCollisionEnabled @ 145f0ea50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

Type __thiscall
ULandscapeHeightfieldCollisionComponent::GetCollisionEnabled
          (ULandscapeHeightfieldCollisionComponent *this)

{
  Type TVar1;
  ALandscapeProxy *pAVar2;
  
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    pAVar2 = CastChecked<ALandscapeProxy,UObject>(*(UObject **)&this->field_0x20);
    TVar1 = FBodyInstance::GetCollisionEnabled_CheckOwner(&pAVar2->BodyInstance);
    return TVar1;
  }
  return QueryAndPhysics;
}

// GetCollisionObjectType @ 145f0ea90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ECollisionChannel __thiscall
ULandscapeHeightfieldCollisionComponent::GetCollisionObjectType
          (ULandscapeHeightfieldCollisionComponent *this)

{
  ALandscapeProxy *pAVar1;
  
  pAVar1 = CastChecked<ALandscapeProxy,UObject>(*(UObject **)&this->field_0x20);
  return (ECollisionChannel)(pAVar1->BodyInstance).ObjectType.Value;
}

// GetCollisionResponseToChannel @ 145f0eab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ECollisionResponse __thiscall
ULandscapeHeightfieldCollisionComponent::GetCollisionResponseToChannel
          (ULandscapeHeightfieldCollisionComponent *this,ECollisionChannel param_1)

{
  ALandscapeProxy *pAVar1;
  
  pAVar1 = CastChecked<ALandscapeProxy,UObject>(*(UObject **)&this->field_0x20);
  return (ECollisionResponse)
         (pAVar1->BodyInstance).CollisionResponses.ResponseToChannels.field0_0x0.EnumArray
         [(int)param_1];
}

// GetCollisionResponseToChannels @ 145f0eae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCollisionResponseContainer * __thiscall
ULandscapeHeightfieldCollisionComponent::GetCollisionResponseToChannels
          (ULandscapeHeightfieldCollisionComponent *this)

{
  ALandscapeProxy *pAVar1;
  
  pAVar1 = CastChecked<ALandscapeProxy,UObject>(*(UObject **)&this->field_0x20);
  return &(pAVar1->BodyInstance).CollisionResponses.ResponseToChannels;
}

// GetCollisionSampleInfo @ 145f0eb00

FCollisionSampleInfo * __thiscall
ULandscapeHeightfieldCollisionComponent::GetCollisionSampleInfo
          (ULandscapeHeightfieldCollisionComponent *this,
          FCollisionSampleInfo *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = this->SimpleCollisionSizeQuads;
  iVar3 = this->CollisionSizeQuads + 1;
  __return_storage_ptr__->CollisionSizeVerts = iVar3;
  iVar2 = iVar1 + 1;
  if (iVar1 < 1) {
    iVar2 = 0;
  }
  __return_storage_ptr__->SimpleCollisionSizeVerts = iVar2;
  __return_storage_ptr__->NumSamples = iVar3 * iVar3;
  __return_storage_ptr__->NumSimpleSamples = iVar2 * iVar2;
  return __return_storage_ptr__;
}

// GetGeometryGatheringMode @ 145f0f000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ENavDataGatheringMode __thiscall
ULandscapeHeightfieldCollisionComponent::GetGeometryGatheringMode
          (ULandscapeHeightfieldCollisionComponent *this)

{
  ALandscapeProxy *pAVar1;
  
  pAVar1 = CastChecked<ALandscapeProxy,UObject>(*(UObject **)&this[-1].field_0x420);
  if (pAVar1 != (ALandscapeProxy *)0x0) {
    return pAVar1->NavigationGeometryGatheringMode;
  }
  return Default;
}

// GetHeight @ 145f0f030

TOptional<float> __thiscall
ULandscapeHeightfieldCollisionComponent::GetHeight
          (ULandscapeHeightfieldCollisionComponent *this,float param_1,float param_2,
          EHeightfieldSource param_3)

{
  FHeightfieldGeometryRef *pFVar1;
  FHeightField *this_00;
  TOptional<float> in_RDX;
  double dVar2;
  float in_XMM3_Da;
  int in_stack_00000028;
  undefined1 local_28 [8];
  double local_20;
  double local_18;
  
  *(undefined1 *)((longlong)in_RDX + 4) = 0;
  pFVar1 = (this->HeightfieldRef).Reference;
  if (pFVar1 != (FHeightfieldGeometryRef *)0x0) {
    if (in_stack_00000028 == 1) {
      this_00 = (pFVar1->HeightfieldSimpleGeometry).Reference;
    }
    else {
      if (in_stack_00000028 != 2) {
        return in_RDX;
      }
      this_00 = (pFVar1->HeightfieldGeometry).Reference;
    }
    if (this_00 != (FHeightField *)0x0) {
      local_20 = (double)param_2;
      local_18 = (double)in_XMM3_Da;
      dVar2 = Chaos::FHeightField::GetHeightAt(this_00,(TVector<double,2> *)&local_20);
      if ((TOptional<float>)local_28 != in_RDX) {
        *(float *)in_RDX = (float)dVar2;
        *(undefined1 *)((longlong)in_RDX + 4) = 1;
        return in_RDX;
      }
    }
  }
  return in_RDX;
}

// GetLandscapeInfo @ 145f10220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULandscapeInfo * __thiscall
ULandscapeHeightfieldCollisionComponent::GetLandscapeInfo
          (ULandscapeHeightfieldCollisionComponent *this)

{
  ALandscapeProxy *pAVar1;
  ULandscapeInfo *pUVar2;
  
  pAVar1 = CastChecked<ALandscapeProxy,UObject>(*(UObject **)&this->field_0x20);
                    /* WARNING: Could not recover jumptable at 0x000145f1023b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar2 = (ULandscapeInfo *)(**(code **)(pAVar1->_padding_ + 0x18))();
  return pUVar2;
}

// GetLandscapeProxy @ 145f104b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALandscapeProxy * __thiscall
ULandscapeHeightfieldCollisionComponent::GetLandscapeProxy
          (ULandscapeHeightfieldCollisionComponent *this)

{
  ALandscapeProxy *pAVar1;
  
  pAVar1 = CastChecked<ALandscapeProxy,UObject>(*(UObject **)&this->field_0x20);
  return pAVar1;
}

// GetPhysicalMaterial @ 145f121b0

UPhysicalMaterial * __thiscall
ULandscapeHeightfieldCollisionComponent::GetPhysicalMaterial
          (ULandscapeHeightfieldCollisionComponent *this,float param_1,float param_2,
          EHeightfieldSource param_3)

{
  FHeightfieldGeometryRef *pFVar1;
  int *piVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  UPhysicalMaterial *pUVar6;
  FChaosPhysicsMaterial *pFVar7;
  FHeightField *this_00;
  FMaterialHandle local_res8 [2];
  double local_18;
  double local_10;
  
  pUVar6 = (UPhysicalMaterial *)0x0;
  pFVar1 = (this->HeightfieldRef).Reference;
  if (pFVar1 == (FHeightfieldGeometryRef *)0x0) {
    return (UPhysicalMaterial *)0x0;
  }
  if (param_3 == Simple) {
    this_00 = (pFVar1->HeightfieldSimpleGeometry).Reference;
  }
  else {
    if (param_3 != Complex) {
      return (UPhysicalMaterial *)0x0;
    }
    this_00 = (pFVar1->HeightfieldGeometry).Reference;
  }
  if (this_00 != (FHeightField *)0x0) {
    local_18 = (double)param_1;
    local_10 = (double)param_2;
    bVar4 = Chaos::FHeightField::GetMaterialIndexAt(this_00,(TVector<double,2> *)&local_18);
    if (bVar4 != 0xff) {
      pFVar1 = (this->HeightfieldRef).Reference;
      if ((int)(uint)bVar4 < (pFVar1->UsedChaosMaterials).ArrayNum) {
        if (((pFVar1->UsedChaosMaterials).ArrayNum <= (int)(uint)bVar4) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pUVar6 = (UPhysicalMaterial *)(*pcVar3)();
          return pUVar6;
        }
        local_res8[0].InnerHandle =
             *(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)
              ((pFVar1->UsedChaosMaterials).AllocatorInstance.Data + (ulonglong)bVar4 * 4);
        pFVar7 = Chaos::FMaterialHandle::Get(local_res8);
        if (((pFVar7 != (FChaosPhysicsMaterial *)0x0) &&
            (piVar2 = pFVar7->UserData, piVar2 != (int *)0x0)) &&
           (pUVar6 = (UPhysicalMaterial *)0x0, *piVar2 == 2)) {
          pUVar6 = *(UPhysicalMaterial **)(piVar2 + 2);
        }
      }
    }
  }
  return pUVar6;
}

// GetRenderComponent @ 145f13290

ULandscapeComponent * __thiscall
ULandscapeHeightfieldCollisionComponent::GetRenderComponent
          (ULandscapeHeightfieldCollisionComponent *this)

{
  return (this->RenderComponentRef).field0_0x0.DebugPtr;
}

// GetResourceSizeEx @ 145f135d0

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
ULandscapeHeightfieldCollisionComponent::GetResourceSizeEx
          (ULandscapeHeightfieldCollisionComponent *this,FResourceSizeEx *param_1)

{
  FHeightfieldGeometryRef *this_00;
  
  UPrimitiveComponent::GetResourceSizeEx((UPrimitiveComponent *)this,param_1);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->CookedCollisionData).ArrayMax + 0x18);
  this_00 = (this->HeightfieldRef).Reference;
  if (this_00 != (FHeightfieldGeometryRef *)0x0) {
    FHeightfieldGeometryRef::GetResourceSizeEx(this_00,param_1);
  }
  FNavHeightfieldSamples::GetResourceSizeEx(&this->CachedHeightFieldSamples,param_1);
  return;
}

// GetSectionBase @ 145f13670

TIntPoint<int> __thiscall
ULandscapeHeightfieldCollisionComponent::GetSectionBase
          (ULandscapeHeightfieldCollisionComponent *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(int *)in_RDX = this->SectionBaseX;
  *(int *)((longlong)in_RDX + 4) = this->SectionBaseY;
  return (TIntPoint<int>)in_RDX;
}

// IsShown @ 145f15c50

bool __thiscall
ULandscapeHeightfieldCollisionComponent::IsShown
          (ULandscapeHeightfieldCollisionComponent *this,FEngineShowFlags *param_1)

{
  return param_1->Landscape;
}

// OnCreatePhysicsState @ 145f16170

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULandscapeHeightfieldCollisionComponent::OnCreatePhysicsState
          (ULandscapeHeightfieldCollisionComponent *this)

{
  FPhysScene_Chaos *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  UWorld *pUVar4;
  bool bVar5;
  ULandscapeHeightfieldCollisionComponent *local_res8;
  FSingleParticlePhysicsProxy *local_res10;
  code *local_48;
  FSingleParticlePhysicsProxy ***local_40;
  FSingleParticlePhysicsProxy **local_38;
  ULandscapeHeightfieldCollisionComponent **local_30;
  FPhysScene_Chaos *local_28;
  undefined1 local_20;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId351,
               "ULandscapeHeightfieldCollisionComponent::OnCreatePhysicsState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
               ,0x15f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId351);
  }
  UActorComponent::OnCreatePhysicsState((UActorComponent *)this);
  bVar2 = FBodyInstance::IsValidBodyInstance((FBodyInstance *)&this->field_0x390);
  if (bVar2) goto LAB_145f162e7;
  (**(code **)(*(longlong *)this + 0xa90))(this);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  if ((this->HeightfieldRef).Reference == (FHeightfieldGeometryRef *)0x0) goto LAB_145f162e7;
  pUVar4 = *(UWorld **)&this->field_0xb0;
  local_res8 = this;
  if (pUVar4 == (UWorld *)0x0) {
    pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  this_00 = pUVar4->PhysicsScene;
  bVar2 = IsInGameThread();
  if (Chaos::CVars::bEnableAsyncInitBody == false) {
    if (bVar2) goto LAB_145f1630f;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Chaos::CVars::bEnableAsyncInitBody || bIsInGameThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                       ,500,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
LAB_145f16271:
    local_res10 = (FSingleParticlePhysicsProxy *)0x0;
  }
  else {
    if (!bVar2) goto LAB_145f16271;
LAB_145f1630f:
    local_res10 = `ULandscapeHeightfieldCollisionComponent::OnCreatePhysicsState'::__l8::<lambda_1>
                  ::operator()(&local_res8);
  }
  local_38 = &local_res10;
  local_30 = &local_res8;
  local_40 = &local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`ULandscapeHeightfieldCollisionComponent::OnCreatePhysicsState'::__l8::<lambda_2>,void>
             ::Call;
  local_28 = this_00;
  local_20 = bVar2;
  FPhysInterface_Chaos::ExecuteWrite(this_00,(TFunctionRef<void___cdecl(void)> *)&local_48);
  FPhysScene_Chaos::AddToComponentMaps
            (this_00,(UPrimitiveComponent *)this,(IPhysicsProxyBase *)local_res10);
  if ((this->field_0x3cb & 0x40) != 0) {
    FPhysScene_Chaos::RegisterForCollisionEvents(this_00,(UPrimitiveComponent *)this);
  }
LAB_145f162e7:
  if (!bVar5) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// OnDestroyPhysicsState @ 145f16330

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
ULandscapeHeightfieldCollisionComponent::OnDestroyPhysicsState
          (ULandscapeHeightfieldCollisionComponent *this)

{
  FPhysScene_Chaos *this_00;
  UWorld *pUVar1;
  FSingleParticlePhysicsProxy *pFVar2;
  
  UPrimitiveComponent::OnDestroyPhysicsState((UPrimitiveComponent *)this);
  pUVar1 = *(UWorld **)&this->field_0xb0;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  this_00 = pUVar1->PhysicsScene;
  if (this_00 != (FPhysScene_Chaos *)0x0) {
    pFVar2 = FBodyInstance::GetPhysicsActor((FBodyInstance *)&this->field_0x390);
    if (pFVar2 != (FSingleParticlePhysicsProxy *)0x0) {
      FPhysScene_Chaos::RemoveFromComponentMaps(this_00,(IPhysicsProxyBase *)pFVar2);
    }
    if ((this->field_0x3cb & 0x40) != 0) {
      FPhysScene_Chaos::UnRegisterForCollisionEvents(this_00,(UPrimitiveComponent *)this);
    }
  }
  return;
}

// OnRegister @ 145f16650

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
ULandscapeHeightfieldCollisionComponent::OnRegister(ULandscapeHeightfieldCollisionComponent *this)

{
  ALandscapeProxy *pAVar1;
  UWorld *pUVar2;
  ULandscapeInfo *this_00;
  
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  pAVar1 = CastChecked<ALandscapeProxy,UObject>(*(UObject **)&this->field_0x20);
  if (pAVar1 != (ALandscapeProxy *)0x0) {
    pAVar1 = CastChecked<ALandscapeProxy,UObject>(*(UObject **)&this->field_0x20);
    pUVar2 = AActor::GetWorld((AActor *)pAVar1);
    if (pUVar2 != (UWorld *)0x0) {
      pAVar1 = CastChecked<ALandscapeProxy,UObject>(*(UObject **)&this->field_0x20);
      this_00 = (ULandscapeInfo *)(**(code **)(pAVar1->_padding_ + 0x18))();
      if (this_00 != (ULandscapeInfo *)0x0) {
        ULandscapeInfo::RegisterCollisionComponent(this_00,this);
        return;
      }
    }
  }
  return;
}

// OnUnregister @ 145f16930

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
ULandscapeHeightfieldCollisionComponent::OnUnregister(ULandscapeHeightfieldCollisionComponent *this)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int iVar3;
  FHeightfieldGeometryRef *pFVar4;
  FHeightField *pFVar5;
  FHeightField *pFVar6;
  longlong lVar7;
  ALandscapeProxy *pAVar8;
  UWorld *pUVar9;
  ULandscapeInfo *this_00;
  
  UPrimitiveComponent::OnUnregister((UPrimitiveComponent *)this);
  pFVar4 = (this->HeightfieldRef).Reference;
  if (pFVar4 != (FHeightfieldGeometryRef *)0x0) {
    pFVar5 = (pFVar4->HeightfieldGeometry).Reference;
    pFVar6 = (this->LocalHeightfieldGeometryRef).Reference;
    if (pFVar6 != pFVar5) {
      (this->LocalHeightfieldGeometryRef).Reference = pFVar5;
      if (pFVar5 != (FHeightField *)0x0) {
        LOCK();
        *(int *)&pFVar5->field_0x8 = *(int *)&pFVar5->field_0x8 + 1;
        UNLOCK();
      }
      if (pFVar6 != (FHeightField *)0x0) {
        LOCK();
        puVar1 = &pFVar6->field_0x8;
        iVar3 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (*(int *)&pFVar6->field_0xc == 0)) {
          (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
        }
      }
    }
    pFVar5 = (this->LocalHeightfieldSimpleGeometryRef).Reference;
    pFVar6 = (((this->HeightfieldRef).Reference)->HeightfieldSimpleGeometry).Reference;
    if (pFVar5 != pFVar6) {
      (this->LocalHeightfieldSimpleGeometryRef).Reference = pFVar6;
      if (pFVar6 != (FHeightField *)0x0) {
        LOCK();
        *(int *)&pFVar6->field_0x8 = *(int *)&pFVar6->field_0x8 + 1;
        UNLOCK();
      }
      if (pFVar5 != (FHeightField *)0x0) {
        LOCK();
        puVar1 = &pFVar5->field_0x8;
        iVar3 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (*(int *)&pFVar5->field_0xc == 0)) {
          (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
        }
      }
    }
  }
  DeferredDestroyCollision(this,&this->HeightfieldRef);
  pFVar4 = (this->HeightfieldRef).Reference;
  if (pFVar4 != (FHeightfieldGeometryRef *)0x0) {
    (this->HeightfieldRef).Reference = (FHeightfieldGeometryRef *)0x0;
    plVar2 = &pFVar4->_padding_;
    LOCK();
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  (this->HeightfieldGuid).A = 0;
  (this->HeightfieldGuid).B = 0;
  (this->HeightfieldGuid).C = 0;
  (this->HeightfieldGuid).D = 0;
  FNavHeightfieldSamples::Empty(&this->CachedHeightFieldSamples);
  pAVar8 = CastChecked<ALandscapeProxy,UObject>(*(UObject **)&this->field_0x20);
  if (pAVar8 != (ALandscapeProxy *)0x0) {
    pAVar8 = CastChecked<ALandscapeProxy,UObject>(*(UObject **)&this->field_0x20);
    pUVar9 = AActor::GetWorld((AActor *)pAVar8);
    if (pUVar9 != (UWorld *)0x0) {
      pAVar8 = CastChecked<ALandscapeProxy,UObject>(*(UObject **)&this->field_0x20);
      this_00 = (ULandscapeInfo *)(**(code **)(pAVar8->_padding_ + 0x18))();
      if (this_00 != (ULandscapeInfo *)0x0) {
        ULandscapeInfo::UnregisterCollisionComponent(this_00,this);
      }
    }
  }
  return;
}

// PostLoad @ 145f17420

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULandscapeHeightfieldCollisionComponent::PostLoad(ULandscapeHeightfieldCollisionComponent *this)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  UWorld *this_00;
  AWorldSettings *pAVar4;
  float fVar5;
  
  UActorComponent::PostLoad((UActorComponent *)this);
  UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar2) {
    FBodyInstance::FixupData((FBodyInstance *)&this->field_0x390,(UObject *)this);
  }
  fVar5 = *(float *)&this->field_0x26c;
  if (0.0 < fVar5) {
    fVar1 = *(float *)&this->field_0x270;
    if ((fVar1 != 0.0) && (fVar1 <= fVar5)) {
      fVar5 = fVar1;
    }
    if (((this->field_0x27a & 8) != 0) || (*(longlong *)&this->field_0x540 != 0)) {
      fVar5 = 0.0;
    }
    *(float *)&this->field_0x270 = fVar5;
  }
  this_00 = *(UWorld **)&this->field_0xb0;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (this_00 != (UWorld *)0x0) goto LAB_1478e7ab3;
  }
  else {
LAB_1478e7ab3:
    pAVar4 = UWorld::GetWorldSettings(this_00,false,true);
    if ((pAVar4 != (AWorldSettings *)0x0) && (pAVar4->bForceVolumetricLightmapsOnly != '\0'))
    goto LAB_1478e7aed;
  }
  if (this->field_0x277 == '\x01') {
    iVar3 = (**(code **)(*(longlong *)this + 2000))(this);
    if (iVar3 == 0) {
      this->field_0x277 = 0;
    }
  }
LAB_1478e7aed:
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&this->field_0x2c8,
             (TArray<float,TSizedDefaultAllocator<32>_> *)&this->field_0x2b8);
  return;
}

// PreSave @ 145f17700

void __thiscall
ULandscapeHeightfieldCollisionComponent::PreSave
          (ULandscapeHeightfieldCollisionComponent *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// PrepareGeometryExportSync @ 145f17730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULandscapeHeightfieldCollisionComponent::PrepareGeometryExportSync
          (ULandscapeHeightfieldCollisionComponent *this)

{
  undefined1 *puVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  UWorld *pUVar5;
  FName *pFVar6;
  TStatId TVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  double dVar17;
  FName local_res8;
  FName local_res10;
  FName local_68;
  byte local_60;
  FSourceLocation local_58;
  
  if (((((*(longlong *)&this->field_0x3a0 != 0) &&
        (*(longlong *)(*(longlong *)&this->field_0x3a0 + 0x30) != 0)) &&
       (puVar8 = &this->field_0x3d0, *(int *)puVar8 == 0)) && (*(int *)&this->field_0x3f0 == 0)) &&
     ((*(longlong *)&this[-1].field_0x4b0 != 0 ||
      (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)&this[-1].field_0x400),
      pUVar5 != (UWorld *)0x0)))) {
    uVar10 = (uint)*(ushort *)(*(longlong *)(*(longlong *)&this->field_0x3a0 + 0x30) + 0x90);
    *(uint *)&this->field_0x3b8 = uVar10;
    uVar9 = (uint)*(ushort *)(*(longlong *)(*(longlong *)&this->field_0x3a0 + 0x30) + 0x92);
    *(uint *)&this->field_0x3bc = uVar9;
    uVar9 = uVar9 * uVar10;
    if (*(uint *)puVar8 != uVar9) {
      uVar16 = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        if (StatPtr_STAT_NavMesh_ExportChaosHeightField_saveCells ==
            (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ULandscapeHeightfieldCollisionComponent::PrepareGeometryExportSync(void)_::_11_::FStat_STAT_NavMesh_ExportChaosHeightField_saveCells>
             )0x0) {
          pFVar6 = ::FName::FName(&local_res8,"STAT_NavMesh_ExportChaosHeightField_saveCells");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)
                     &StatPtr_STAT_NavMesh_ExportChaosHeightField_saveCells,*pFVar6,
                     L"STAT_NavMesh_ExportChaosHeightField_saveCells","STATGROUP_Quick",
                     "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
      TVar7.StatIdPtr = (TStatIdData *)StatPtr_STAT_NavMesh_ExportChaosHeightField_saveCells;
      if (StatPtr_STAT_NavMesh_ExportChaosHeightField_saveCells ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ULandscapeHeightfieldCollisionComponent::PrepareGeometryExportSync(void)_::_11_::FStat_STAT_NavMesh_ExportChaosHeightField_saveCells>
           )0x0) {
        pFVar6 = ::FName::FName(&local_res10,"STAT_NavMesh_ExportChaosHeightField_saveCells");
        TVar7.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NavMesh_ExportChaosHeightField_saveCells,*pFVar6,
                        L"STAT_NavMesh_ExportChaosHeightField_saveCells","STATGROUP_Quick",
                        "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      local_58.Impl._Line = 0x780;
      local_58.Impl._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
      ;
      local_58.Impl._Column = 5;
      local_58.Impl._Function =
           "void __cdecl ULandscapeHeightfieldCollisionComponent::PrepareGeometryExportSync(void)";
      FScopeCycleCounter::FScopeCycleCounter
                ((FScopeCycleCounter *)&local_68,TVar7,CycleStat|ClearEveryFrame,false,&local_58);
      puVar1 = &this->field_0x3c0;
      iVar13 = *(int *)&this->field_0x3d0;
      if (iVar13 < (int)uVar9) {
        UE::Core::Private::ReallocGrow<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                  (2,2,uVar9 - iVar13,(ForAnyElementType *)puVar1,(int *)puVar8,
                   (int *)&this->field_0x3d4);
      }
      else {
        if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
        }
        if ((int)uVar9 < iVar13) {
          uVar10 = iVar13 - uVar9;
          if (((int)(uVar10 | uVar9) < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (uVar10 != 0) {
            _Dst = (void *)(*(longlong *)puVar1 + (longlong)(int)uVar9 * 2);
            iVar13 = (*(int *)&this->field_0x3d0 - uVar10) - uVar9;
            if (iVar13 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar10 * 2),(longlong)iVar13 * 2
                     );
            }
            *(uint *)&this->field_0x3d0 = *(int *)&this->field_0x3d0 - uVar10;
            UE::Core::Private::
            ReallocShrink<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                      (2,2,(ForAnyElementType *)puVar1,*(int *)&this->field_0x3d0,
                       (int *)&this->field_0x3d4);
          }
        }
      }
      uVar11 = uVar16;
      uVar14 = uVar16;
      if (0 < (int)uVar9) {
        do {
          uVar12 = (uint)uVar14;
          dVar17 = Chaos::FHeightField::GetHeight
                             (*(FHeightField **)(*(longlong *)&this->field_0x3a0 + 0x30),uVar12);
          uVar10 = 0;
          if ((int)uVar12 < *(int *)puVar8) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(short *)(*(longlong *)puVar1 + uVar11 * 2) = (short)(int)dVar17;
          uVar11 = uVar11 + 1;
          uVar14 = (ulonglong)(uVar12 + 1);
        } while ((longlong)uVar11 < (longlong)(int)uVar9);
      }
      iVar13 = (*(int *)&this->field_0x3bc + -1) * (*(int *)&this->field_0x3b8 + -1);
      TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x3d8,iVar13);
      if (0 < iVar13) {
        uVar10 = 1;
        do {
          iVar15 = (int)uVar16;
          bVar3 = Chaos::FHeightField::IsHole
                            (*(FHeightField **)(*(longlong *)&this->field_0x3a0 + 0x30),iVar15);
          if ((*(int *)&this->field_0x3f0 <= iVar15) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          puVar8 = *(undefined1 **)&this->field_0x3e8;
          if (*(undefined1 **)&this->field_0x3e8 == (undefined1 *)0x0) {
            puVar8 = &this->field_0x3d8;
          }
          uVar11 = uVar16 >> 5;
          if (bVar3) {
            uVar9 = *(uint *)(puVar8 + uVar11 * 4) | uVar10;
          }
          else {
            uVar9 = *(uint *)(puVar8 + uVar11 * 4) & ~uVar10;
          }
          uVar16 = (ulonglong)(iVar15 + 1U);
          uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
          *(uint *)(puVar8 + uVar11 * 4) = uVar9;
        } while ((int)(iVar15 + 1U) < iVar13);
      }
      if ((local_60 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_60 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_60 & 4) != 0) {
        FThreadStats::AddMessage(local_68,CycleScopeEnd);
      }
    }
  }
  return;
}

// RecreateCollision @ 145f180f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ULandscapeHeightfieldCollisionComponent::RecreateCollision
          (ULandscapeHeightfieldCollisionComponent *this)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int iVar3;
  FHeightfieldGeometryRef *pFVar4;
  FPhysScene_Chaos *pFVar5;
  longlong lVar6;
  UWorld *pUVar7;
  FHeightfieldGeometryRef *pFVar8;
  ULandscapeHeightfieldCollisionComponent *local_28;
  FPhysScene_Chaos *pFStack_20;
  FHeightField *local_18;
  FHeightField *local_10;
  
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    return true;
  }
  pFVar8 = (this->HeightfieldRef).Reference;
  if (pFVar8 != (FHeightfieldGeometryRef *)0x0) {
    LOCK();
    *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
    UNLOCK();
  }
  pFVar4 = (this->HeightfieldRef).Reference;
  if (pFVar4 != (FHeightfieldGeometryRef *)0x0) {
    (this->HeightfieldRef).Reference = (FHeightfieldGeometryRef *)0x0;
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  local_28 = (ULandscapeHeightfieldCollisionComponent *)0x0;
  pFStack_20 = (FPhysScene_Chaos *)0x0;
  (this->HeightfieldGuid).A = 0;
  (this->HeightfieldGuid).B = 0;
  (this->HeightfieldGuid).C = 0;
  (this->HeightfieldGuid).D = 0;
  FNavHeightfieldSamples::Empty(&this->CachedHeightFieldSamples);
  UActorComponent::RecreatePhysicsState((UActorComponent *)this);
  if ((((pFVar8 != (FHeightfieldGeometryRef *)0x0) && ((uint)pFVar8->_padding_ < 2)) &&
      ((pUVar7 = *(UWorld **)&this->field_0xb0, pUVar7 != (UWorld *)0x0 ||
       (pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar7 != (UWorld *)0x0)))) &&
     ((pFVar5 = pUVar7->PhysicsScene, pFVar5 != (FPhysScene_Chaos *)0x0 && (pFVar5->_padding_ != 0))
     )) {
    local_18 = (pFVar8->HeightfieldGeometry).Reference;
    local_10 = (pFVar8->HeightfieldSimpleGeometry).Reference;
    (pFVar8->HeightfieldGeometry).Reference = (FHeightField *)0x0;
    (pFVar8->HeightfieldSimpleGeometry).Reference = (FHeightField *)0x0;
    local_28 = this;
    pFStack_20 = pFVar5;
    `ULandscapeHeightfieldCollisionComponent::DeferredDestroyCollision'::__l2::<lambda_1>::
    operator()(&local_28);
    if (local_10 != (FHeightField *)0x0) {
      LOCK();
      puVar2 = &local_10->field_0x8;
      iVar3 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (*(int *)&local_10->field_0xc == 0)) {
        (*(code *)**(undefined8 **)local_10)(local_10,1);
      }
    }
    if (local_18 != (FHeightField *)0x0) {
      LOCK();
      puVar2 = &local_18->field_0x8;
      iVar3 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (*(int *)&local_18->field_0xc == 0)) {
        (*(code *)**(undefined8 **)local_18)(local_18,1);
        UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
        goto LAB_145f18266;
      }
    }
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  if (pFVar8 == (FHeightfieldGeometryRef *)0x0) {
    return true;
  }
LAB_145f18266:
  plVar1 = &pFVar8->_padding_;
  LOCK();
  lVar6 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar6 == 1) {
    if (plVar1 == (longlong *)0x0) {
      pFVar8 = (FHeightfieldGeometryRef *)0x0;
    }
    if (pFVar8 != (FHeightfieldGeometryRef *)0x0) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
  }
  return true;
}

// Serialize @ 145f1db30

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
ULandscapeHeightfieldCollisionComponent::Serialize
          (ULandscapeHeightfieldCollisionComponent *this,FArchive *param_1)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  bool bVar5;
  FLLMScope local_res10 [2];
  uint local_res18 [2];
  FMemScope local_res20;
  FString local_28;
  
  FLLMScope::FLLMScope(local_res10,Landscape,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,Landscape,true);
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,param_1);
  if (*(int *)&param_1->field_0x40 < 0x15b) goto LAB_145f1dc84;
  if (((*(longlong *)&param_1->field_0x68 == 0) ||
      (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) &&
     ((param_1->field_0x28 & 4) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  puVar3 = &param_1->field_0x28;
  bVar5 = SUB41(uVar4,0);
  puVar2 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_res18[0] = 0;
    if ((*puVar3 & 1) == 0) {
      local_res18[0] = uVar4;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18);
    if (1 < local_res18[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res18[0];
    if ((*puVar3 & 1) != 0) goto LAB_145f1dc11;
  }
  else {
    uVar4 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
LAB_145f1dc11:
    bVar5 = uVar4 != 0;
  }
  if (bVar5 == false) {
    if ((*puVar3 & 1) != 0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0,None);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::BulkSerialize
              (&this->CookedCollisionData,param_1,false);
  }
LAB_145f1dc84:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetSectionBase @ 145f1e420

void __thiscall
ULandscapeHeightfieldCollisionComponent::SetSectionBase
          (ULandscapeHeightfieldCollisionComponent *this,TIntPoint<int> param_1)

{
  this->SectionBaseX = param_1.field0_0x0._0_4_;
  this->SectionBaseY = param_1.field0_0x0._4_4_;
  return;
}

// WriteRuntimeData @ 145f20600

bool __thiscall
ULandscapeHeightfieldCollisionComponent::WriteRuntimeData
          (ULandscapeHeightfieldCollisionComponent *this,FWriteRuntimeDataParams *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> TVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  FChaosArchiveContext *this_00;
  FChaosArchiveContext *pFVar8;
  TRefCountPtr<Chaos::FHeightField> TVar9;
  bool bVar10;
  bool bVar11;
  uint local_res8 [2];
  TRefCountPtr<Chaos::FHeightField> local_198;
  TRefCountPtr<Chaos::FHeightField> local_190;
  undefined8 local_188;
  FArchiveState local_178;
  undefined8 local_e8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_e0;
  undefined8 local_d8;
  FChaosArchive local_c8;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1311,
               "ULandscapeHeightfieldCollisionComponent::WriteRuntimeData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
               ,0x51f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1311);
  }
  pFVar8 = (FChaosArchiveContext *)0x0;
  local_190.Reference = (FHeightField *)0x0;
  local_198.Reference = (FHeightField *)0x0;
  if ((this->SimpleCollisionSizeQuads < 1) || (param_1->bUseDefaultMaterialOnly != false)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  bVar5 = GenerateCollisionData(this,param_1,&local_190,bVar10,&local_198,param_3);
  if (bVar5) {
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1318,"Chaos_stream",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                 ,0x526);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1318);
    }
    if ((local_190.Reference == (FHeightField *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Heightfield",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                           ,0x527,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    TVar9.Reference = local_198.Reference;
    if (((bVar10 != false) && (local_198.Reference == (FHeightField *)0x0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bGenerateSimpleCollision || HeightfieldSimple",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                           ,0x528,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    local_188 = 0;
    local_178._padding_ = 0;
    local_178.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_178.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_178.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_178.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_178._40_8_ = 0;
    local_178.ArSerializingDefaults = 0;
    local_178.ArPortFlags = 0;
    local_178.ArMaxSerializeSize = 0;
    local_178.ArUEVer.FileVersionUE4 = 0;
    local_178.ArUEVer.FileVersionUE5 = 0;
    local_178.ArLicenseeUEVer = 0;
    local_178.ArEngineVer.Major = 0;
    local_178.ArEngineVer.Minor = 0;
    local_178.ArEngineVer.Patch = 0;
    local_178.ArEngineVer._6_2_ = 0;
    local_178.ArEngineVer.Changelist = 0;
    local_178.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_178.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_178.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_178.SerializedProperty = (FProperty *)0x0;
    local_178.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_178.bCustomVersionsAreReset = false;
    local_178._129_7_ = 0;
    local_178.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_178);
    local_e8 = 0;
    local_178._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_d8 = 0;
    local_e0 = param_2;
    FArchiveState::SetIsSaving(&local_178,true);
    (**(code **)(local_178._padding_ + 0x108))(&local_178,0);
    local_178._padding_ = (longlong)&___7FMemoryWriter__6B_;
    FArchiveProxy::FArchiveProxy((FArchiveProxy *)&local_c8,(FArchive *)&local_178);
    local_c8._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
    this_00 = ::operator_new(0x158);
    if (this_00 != (FChaosArchiveContext *)0x0) {
      pFVar8 = Chaos::FChaosArchiveContext::FChaosArchiveContext(this_00);
    }
    local_c8.Context.Ptr = pFVar8;
    if (*(ulonglong *)(local_c8._padding_ + 8) < *(ulonglong *)local_c8._padding_ + 4) {
      local_res8[0] = 0;
      if (((byte)local_c8._padding_ & 1) == 0) {
        local_res8[0] = (uint)bVar10;
      }
      if (*(code **)(local_c8._padding_ + 0x188) == FArchiveProxy::Serialize) {
        (**(code **)(*(longlong *)local_c8._padding_ + 0x188))();
      }
      else {
        (**(code **)(local_c8._padding_ + 0x188))(&local_c8,local_res8,4);
      }
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)&local_c8);
      }
    }
    else {
      *(ulonglong *)local_c8._padding_ = *(ulonglong *)local_c8._padding_ + 4;
    }
    Chaos::operator<<<Chaos::FHeightField>(&local_c8,&local_190);
    if (bVar10 != false) {
      Chaos::operator<<<Chaos::FHeightField>(&local_c8,&local_198);
      TVar9.Reference = local_198.Reference;
    }
    TVar4.Ptr = local_c8.Context.Ptr;
    if (local_c8.Context.Ptr != (FChaosArchiveContext *)0x0) {
      Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_c8.Context.Ptr);
      ::operator_delete(TVar4.Ptr,0x158);
    }
    FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&local_c8);
    FArchive::~FArchive((FArchive *)&local_178);
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar10 = true;
  }
  else {
    bVar10 = false;
    TVar9.Reference = local_198.Reference;
  }
  if (TVar9.Reference != (FHeightField *)0x0) {
    LOCK();
    puVar1 = &(TVar9.Reference)->field_0x8;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)&(TVar9.Reference)->field_0xc == 0)) {
      (*(code *)**(undefined8 **)TVar9.Reference)(TVar9.Reference,1);
    }
  }
  if (local_190.Reference != (FHeightField *)0x0) {
    LOCK();
    puVar1 = &(local_190.Reference)->field_0x8;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)&(local_190.Reference)->field_0xc == 0)) {
      (*(code *)**(undefined8 **)local_190.Reference)(local_190.Reference,1);
    }
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar10;
}

// operator() @ 1504dea40

bool __thiscall
`ULandscapeHeightfieldCollisionComponent::CreateCollisionObject'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6625317152381467636>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6625317152381467636>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

