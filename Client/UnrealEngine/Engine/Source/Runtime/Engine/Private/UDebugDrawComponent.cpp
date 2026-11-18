// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// UDebugDrawComponent @ 147abd090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UDebugDrawComponent * __thiscall
UDebugDrawComponent::UDebugDrawComponent(UDebugDrawComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  FDebugDrawDelegateHelper::FDebugDrawDelegateHelper(&this->DebugDrawDelegateHelper);
  return this;
}

// UDebugDrawComponent @ 147abd110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UDebugDrawComponent * __thiscall
UDebugDrawComponent::UDebugDrawComponent(UDebugDrawComponent *this,FObjectInitializer *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  FDebugDrawDelegateHelper::FDebugDrawDelegateHelper(&this->DebugDrawDelegateHelper);
  return this;
}

// ~UDebugDrawComponent @ 147abf670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UDebugDrawComponent::~UDebugDrawComponent(UDebugDrawComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  FDebugDrawDelegateHelper::~FDebugDrawDelegateHelper(&this->DebugDrawDelegateHelper);
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// CreateDebugSceneProxy @ 147acdd50

FDebugRenderSceneProxy * __thiscall
UDebugDrawComponent::CreateDebugSceneProxy(UDebugDrawComponent *this)

{
  return (FDebugRenderSceneProxy *)0x0;
}

// CreateRenderState_Concurrent @ 147ace930

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
UDebugDrawComponent::CreateRenderState_Concurrent
          (UDebugDrawComponent *this,FRegisterComponentContext *param_1)

{
  longlong *plVar1;
  
  UPrimitiveComponent::CreateRenderState_Concurrent((UPrimitiveComponent *)this,param_1);
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0xa98))(this);
  *(bool *)((longlong)plVar1 + 0x2c) = param_1 != (FRegisterComponentContext *)0x0;
  if (param_1 == (FRegisterComponentContext *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}

// CreateSceneProxy @ 147aceb60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UDebugDrawComponent::CreateSceneProxy(UDebugDrawComponent *this)

{
  FDebugRenderSceneProxy *pFVar1;
  FDebugDrawDelegateHelper *this_00;
  longlong *plVar2;
  
  pFVar1 = (FDebugRenderSceneProxy *)(**(code **)(this->_padding_ + 0xa90))();
  if (pFVar1 != (FDebugRenderSceneProxy *)0x0) {
    this_00 = (FDebugDrawDelegateHelper *)(**(code **)(this->_padding_ + 0xa98))(this);
    FDebugDrawDelegateHelper::InitDelegateHelper(this_00,pFVar1);
  }
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0xa98))(this);
  if (*(char *)((longlong)plVar2 + 0x2c) != '\0') {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    *(undefined1 *)((longlong)plVar2 + 0x2c) = 0;
  }
  return (FPrimitiveSceneProxy *)pFVar1;
}

// DestroyRenderState_Concurrent @ 147ad03b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UDebugDrawComponent::DestroyRenderState_Concurrent(UDebugDrawComponent *this)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0xa98))();
  (**(code **)(*plVar1 + 8))(plVar1);
  UPrimitiveComponent::DestroyRenderState_Concurrent((UPrimitiveComponent *)this);
  return;
}

// GetPrivateStaticClass @ 147aeb430

UClass * __cdecl UDebugDrawComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDebugDrawComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DebugDrawComponent",
               &Z_Registration_Info_UClass_UDebugDrawComponent.InnerSingleton,
               StaticRegisterNativesUDebugDrawComponent,0x5b0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDebugDrawComponent>,
               InternalVTableHelperCtorCaller<UDebugDrawComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDebugDrawComponent.InnerSingleton;
}

// StaticRegisterNativesUDebugDrawComponent @ 147b17290

void __cdecl UDebugDrawComponent::StaticRegisterNativesUDebugDrawComponent(void)

{
  return;
}

