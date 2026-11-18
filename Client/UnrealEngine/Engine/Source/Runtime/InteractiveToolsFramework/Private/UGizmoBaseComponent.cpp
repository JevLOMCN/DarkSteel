// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 15

// StaticClass @ 14962bec0

UClass * __cdecl UGizmoBaseComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoBaseComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoBaseComponent",
               &Z_Registration_Info_UClass_UGizmoBaseComponent.InnerSingleton,
               StaticRegisterNativesUGizmoBaseComponent,0x580,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoBaseComponent>,
               InternalVTableHelperCtorCaller<UGizmoBaseComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoBaseComponent.InnerSingleton;
}

// UGizmoBaseComponent @ 14963a4d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UGizmoBaseComponent * __thiscall
UGizmoBaseComponent::UGizmoBaseComponent(UGizmoBaseComponent *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UGizmoBaseComponent__6B_;
  FVar1 = FLinearColor::Red;
  this->HoverSizeMultiplier = 2.0;
  this->PixelHitDistanceThreshold = 7.0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->GizmoViewContext).field0_0x0.DebugPtr = (UGizmoViewContext *)0x0;
  this->bHovering = false;
  this->bWorld = false;
  this->bIsViewDependent = false;
  return this;
}

// UGizmoBaseComponent @ 14963a590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UGizmoBaseComponent * __thiscall UGizmoBaseComponent::UGizmoBaseComponent(UGizmoBaseComponent *this)

{
  byte *pbVar1;
  FLinearColor FVar2;
  FObjectInitializer *pFVar3;
  
  pFVar3 = FObjectInitializer::Get();
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,pFVar3);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UGizmoBaseComponent__6B_;
  FVar2 = FLinearColor::Red;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xef;
  this->HoverSizeMultiplier = 2.0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  (this->GizmoViewContext).field0_0x0.DebugPtr = (UGizmoViewContext *)0x0;
  this->PixelHitDistanceThreshold = 7.0;
  this->bHovering = false;
  this->bWorld = false;
  this->bIsViewDependent = false;
  return this;
}

// ~UGizmoBaseComponent @ 14963e7c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGizmoBaseComponent::~UGizmoBaseComponent(UGizmoBaseComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7IGizmoBaseComponentInterface__6B_;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// GetPrivateStaticClass @ 149656190

UClass * __cdecl UGizmoBaseComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoBaseComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoBaseComponent",
               &Z_Registration_Info_UClass_UGizmoBaseComponent.InnerSingleton,
               StaticRegisterNativesUGizmoBaseComponent,0x580,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoBaseComponent>,
               InternalVTableHelperCtorCaller<UGizmoBaseComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoBaseComponent.InnerSingleton;
}

// StaticRegisterNativesUGizmoBaseComponent @ 149664a80

void __cdecl UGizmoBaseComponent::StaticRegisterNativesUGizmoBaseComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UGizmoBaseComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateHoverState @ 149666d70

void __thiscall UGizmoBaseComponent::UpdateHoverState(UGizmoBaseComponent *this,bool param_1)

{
  if (param_1 != (bool)(char)this->_padding_) {
    *(bool *)&this->_padding_ = param_1;
  }
  return;
}

// UpdateWorldLocalState @ 1496672c0

void __thiscall UGizmoBaseComponent::UpdateWorldLocalState(UGizmoBaseComponent *this,bool param_1)

{
  if (param_1 != (bool)*(char *)((longlong)&this->_padding_ + 1)) {
    *(bool *)((longlong)&this->_padding_ + 1) = param_1;
  }
  return;
}

// _getUObject @ 14966b190

UObject * __thiscall UGizmoBaseComponent::_getUObject(UGizmoBaseComponent *this)

{
  return (UObject *)((longlong)&this[-1].Color.field0_0x0 + 8);
}

// _getUObject`adjustor{552}' @ 14966b19c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGizmoBaseComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall UGizmoBaseComponent::_getUObject_adjustor_552__(UGizmoBaseComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGizmoBaseComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{560}' @ 14966b1b0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGizmoBaseComponent::_getUObject`adjustor{560}' (void)const __ptr64 */

UObject * __thiscall UGizmoBaseComponent::_getUObject_adjustor_560__(UGizmoBaseComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGizmoBaseComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{568}' @ 14966b1c4

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGizmoBaseComponent::_getUObject`adjustor{568}' (void)const __ptr64 */

UObject * __thiscall UGizmoBaseComponent::_getUObject_adjustor_568__(UGizmoBaseComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGizmoBaseComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1312}' @ 14966b1d8

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGizmoBaseComponent::_getUObject`adjustor{1312}' (void)const __ptr64 */

UObject * __thiscall UGizmoBaseComponent::_getUObject_adjustor_1312__(UGizmoBaseComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGizmoBaseComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// execUpdateHoverState @ 14966b250

void __cdecl
UGizmoBaseComponent::execUpdateHoverState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)&param_1[0x21].field_0x20 + 0x10))
            (&param_1[0x21].field_0x20,local_res8[0] != 0);
  return;
}

// execUpdateWorldLocalState @ 14966b2f0

void __cdecl
UGizmoBaseComponent::execUpdateWorldLocalState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)&param_1[0x21].field_0x20 + 0x18))
            (&param_1[0x21].field_0x20,local_res8[0] != 0);
  return;
}

