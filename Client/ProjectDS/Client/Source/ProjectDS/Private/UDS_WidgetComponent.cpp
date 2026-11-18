// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b414200

UClass * __cdecl UDS_WidgetComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WidgetComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WidgetComponent",
               &Z_Registration_Info_UClass_UDS_WidgetComponent.InnerSingleton,
               StaticRegisterNativesUDS_WidgetComponent,0x750,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_WidgetComponent>,
               InternalVTableHelperCtorCaller<UDS_WidgetComponent>,aFStackX_8,
               UWidgetComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WidgetComponent.InnerSingleton;
}

// UDS_WidgetComponent @ 14b764520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_WidgetComponent * __thiscall
UDS_WidgetComponent::UDS_WidgetComponent(UDS_WidgetComponent *this,FVTableHelper *param_1)

{
  UWidgetComponent::UWidgetComponent((UWidgetComponent *)this,param_1);
  this->bInVisible = true;
  this->bCanOverlap = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  return this;
}

// UDS_WidgetComponent @ 14b764590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_WidgetComponent * __thiscall
UDS_WidgetComponent::UDS_WidgetComponent(UDS_WidgetComponent *this,FObjectInitializer *param_1)

{
  UWidgetComponent::UWidgetComponent((UWidgetComponent *)this,param_1);
  this->bInVisible = true;
  this->bCanOverlap = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  return this;
}

// ~UDS_WidgetComponent @ 14b765230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_WidgetComponent::~UDS_WidgetComponent(UDS_WidgetComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  UWidgetComponent::~UWidgetComponent((UWidgetComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b766790

UClass * __cdecl UDS_WidgetComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WidgetComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WidgetComponent",
               &Z_Registration_Info_UClass_UDS_WidgetComponent.InnerSingleton,
               StaticRegisterNativesUDS_WidgetComponent,0x750,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_WidgetComponent>,
               InternalVTableHelperCtorCaller<UDS_WidgetComponent>,local_res8,
               UWidgetComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WidgetComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_WidgetComponent @ 14b766d20

void __cdecl UDS_WidgetComponent::StaticRegisterNativesUDS_WidgetComponent(void)

{
  return;
}

// BeginPlay @ 14bc2e830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_WidgetComponent::BeginPlay(UDS_WidgetComponent *this)

{
  (**(code **)(this->_padding_ + 0x420))(this,(char)this->_padding_ != '\0');
  (**(code **)(this->_padding_ + 0xb28))(this);
  UPrimitiveComponent::BeginPlay((UPrimitiveComponent *)this);
  this->_padding_ = this->_padding_;
  UWidgetComponent::UpdateBodySetup((UWidgetComponent *)this,true);
  UActorComponent::RecreatePhysicsState((UActorComponent *)this);
  return;
}

// EndPlay @ 14bc3a580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_WidgetComponent::EndPlay(UDS_WidgetComponent *this,Type param_1)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0xb50))();
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      (**(code **)(*plVar2 + 0x4e8))(plVar2);
    }
  }
  UWidgetComponent::EndPlay((UWidgetComponent *)this,param_1);
  return;
}

// SetComponentWidgetVisibility @ 14bc5db70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WidgetComponent::SetComponentWidgetVisibility(UDS_WidgetComponent *this,bool param_1)

{
  ESlateVisibility EVar1;
  UWidget *this_00;
  code *pcVar2;
  undefined7 in_register_00000011;
  ulonglong uVar3;
  
  if ((char)this->_padding_ != '\0') {
    this->bInVisible = param_1;
    this_00 = (UWidget *)(**(code **)(this->_padding_ + 0xb50))();
    if (this_00 != (UWidget *)0x0) {
      if (param_1) {
        uVar3 = (ulonglong)this->RegistedVisibleState;
        pcVar2 = *(code **)(this_00->_padding_ + 0x2c0);
      }
      else {
        EVar1 = UWidget::GetVisibility(this_00);
        this->RegistedVisibleState = EVar1;
        uVar3 = CONCAT71(in_register_00000011,1);
        pcVar2 = *(code **)(this_00->_padding_ + 0x2c0);
      }
      (*pcVar2)(this_00,uVar3);
    }
  }
  return;
}

// SetWidget @ 14bc650c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_WidgetComponent::SetWidget(UDS_WidgetComponent *this,UUserWidget *param_1)

{
  ESlateVisibility EVar1;
  
  UWidgetComponent::SetWidget((UWidgetComponent *)this,param_1);
  if (param_1 != (UUserWidget *)0x0) {
    EVar1 = UWidget::GetVisibility((UWidget *)param_1);
    this->RegistedVisibleState = EVar1;
    if (this->bInVisible == false) {
      (**(code **)(param_1->_padding_ + 0x2c0))(param_1,1);
    }
  }
  return;
}

// UpdateOverlapsImpl @ 14bc6dbb0

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
UDS_WidgetComponent::UpdateOverlapsImpl
          (UDS_WidgetComponent *this,TArrayView<FOverlapInfo_const_,int> *param_1,bool param_2,
          TArrayView<FOverlapInfo_const_,int> *param_3)

{
  bool bVar1;
  
  if (this->bCanOverlap == false) {
    return false;
  }
  bVar1 = UPrimitiveComponent::UpdateOverlapsImpl
                    ((UPrimitiveComponent *)this,param_1,param_2,param_3);
  return bVar1;
}

