// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b40c910

UClass * __cdecl UDS_AI_GYM_DamageWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AI_GYM_DamageWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AI_GYM_DamageWidget",
               &Z_Registration_Info_UClass_UDS_AI_GYM_DamageWidget.InnerSingleton,
               StaticRegisterNativesUDS_AI_GYM_DamageWidget,0x3c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AI_GYM_DamageWidget>,
               InternalVTableHelperCtorCaller<UDS_AI_GYM_DamageWidget>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AI_GYM_DamageWidget.InnerSingleton;
}

// UDS_AI_GYM_DamageWidget @ 14b410f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_AI_GYM_DamageWidget * __thiscall
UDS_AI_GYM_DamageWidget::UDS_AI_GYM_DamageWidget
          (UDS_AI_GYM_DamageWidget *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_AI_GYM_DamageWidget__6B_;
  ::FString::FString(&this->DamageString,"");
  (this->OwnerWidgetComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->OwnerWidgetComponent).WeakPtr,(FObjectPtr)&local_res8);
  this->bIsFadeOut = false;
  this->FadeOutElapsedTime = 0.0;
  return this;
}

// UDS_AI_GYM_DamageWidget @ 14b410fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_AI_GYM_DamageWidget * __thiscall
UDS_AI_GYM_DamageWidget::UDS_AI_GYM_DamageWidget
          (UDS_AI_GYM_DamageWidget *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_AI_GYM_DamageWidget__6B_;
  ::FString::FString(&this->DamageString,"");
  (this->OwnerWidgetComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->OwnerWidgetComponent).WeakPtr,(FObjectPtr)&local_res8);
  this->bIsFadeOut = false;
  this->FadeOutElapsedTime = 0.0;
  return this;
}

// ~UDS_AI_GYM_DamageWidget @ 14b411d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_AI_GYM_DamageWidget::~UDS_AI_GYM_DamageWidget(UDS_AI_GYM_DamageWidget *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_AI_GYM_DamageWidget__6B_;
  pFVar1 = (this->DamageString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UUserWidget::~UUserWidget((UUserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b413120

UClass * __cdecl UDS_AI_GYM_DamageWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AI_GYM_DamageWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AI_GYM_DamageWidget",
               &Z_Registration_Info_UClass_UDS_AI_GYM_DamageWidget.InnerSingleton,
               StaticRegisterNativesUDS_AI_GYM_DamageWidget,0x3c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AI_GYM_DamageWidget>,
               InternalVTableHelperCtorCaller<UDS_AI_GYM_DamageWidget>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AI_GYM_DamageWidget.InnerSingleton;
}

// StaticRegisterNativesUDS_AI_GYM_DamageWidget @ 14b414210

void __cdecl UDS_AI_GYM_DamageWidget::StaticRegisterNativesUDS_AI_GYM_DamageWidget(void)

{
  return;
}

// NativeTick @ 14b880220

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

void __thiscall
UDS_AI_GYM_DamageWidget::NativeTick(UDS_AI_GYM_DamageWidget *this,FGeometry *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  bool bVar5;
  UObject *pUVar6;
  UWidget *this_00;
  UWidgetComponent *this_01;
  USceneComponent *this_02;
  float fVar7;
  TVector2<double>_u_0 local_98;
  TVector<double>_u_0 local_88 [5];
  
  UUserWidget::NativeTick((UUserWidget *)this,param_1,param_2);
  fVar4 = __real_3f800000;
  if (this->bIsFadeOut == false) {
    fVar7 = param_2 + this->FadeOutElapsedTime;
    bVar5 = fVar7 < __real_3f800000;
    this->FadeOutElapsedTime = fVar7;
    if (bVar5) {
      bVar5 = TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>::UEOpEquals
                        (&this->OwnerWidgetComponent,(void *)0x0);
      if (!bVar5) {
        pUVar6 = FWeakObjectPtr::Get(&(this->OwnerWidgetComponent).WeakPtr);
        this_00 = (UWidget *)(**(code **)(*(longlong *)pUVar6 + 0xb50))(pUVar6);
        if (this_00 != (UWidget *)0x0) {
          UWidget::GetDesiredSize(this_00,(TVector2<double> *)&local_98._s_0);
          if ((local_98._s_0.X != UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X) ||
             (local_98._s_0.Y != UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y)) {
            this_01 = (UWidgetComponent *)FWeakObjectPtr::Get(&(this->OwnerWidgetComponent).WeakPtr)
            ;
            local_88[0]._s_0.X = local_98._s_0.X;
            local_88[0]._s_0.Y = local_98._s_0.Y;
            UWidgetComponent::SetDrawSize(this_01,(TVector2<double> *)&local_88[0]._s_0);
          }
          pUVar6 = FWeakObjectPtr::Get(&(this->OwnerWidgetComponent).WeakPtr);
          dVar2 = *(double *)&pUVar6[8].field_0x8;
          dVar3 = *(double *)&pUVar6[8].field_0x10;
          dVar1 = *(double *)&pUVar6[8].field_0x18;
          this_02 = (USceneComponent *)FWeakObjectPtr::Get(&(this->OwnerWidgetComponent).WeakPtr);
          local_88[0]._16_8_ = (double)(param_2 * __real_43960000) + dVar1;
          local_88[0]._0_8_ = dVar2;
          local_88[0]._8_8_ = dVar3;
          USceneComponent::SetRelativeLocation
                    (this_02,(TVector<double> *)&local_88[0]._s_0,false,(FHitResult *)0x0,None);
          UWidget::SetRenderOpacity((UWidget *)this,fVar4 - this->FadeOutElapsedTime);
        }
      }
    }
    else {
      this->bIsFadeOut = true;
      (**(code **)(this->_padding_ + 0x2c0))(this,1);
    }
  }
  return;
}

// SetOwnerWidgetComponent @ 14b899060

void __thiscall
UDS_AI_GYM_DamageWidget::SetOwnerWidgetComponent
          (UDS_AI_GYM_DamageWidget *this,TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr> param_1)

{
  (this->OwnerWidgetComponent).WeakPtr = param_1.WeakPtr;
  return;
}

