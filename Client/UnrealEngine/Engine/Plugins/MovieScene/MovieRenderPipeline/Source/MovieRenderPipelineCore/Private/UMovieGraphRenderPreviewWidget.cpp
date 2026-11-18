// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dc68e50

UClass * __cdecl UMovieGraphRenderPreviewWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRenderPreviewWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRenderPreviewWidget",
               &Z_Registration_Info_UClass_UMovieGraphRenderPreviewWidget.InnerSingleton,
               StaticRegisterNativesUMovieGraphRenderPreviewWidget,0x3a8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphRenderPreviewWidget>,
               InternalVTableHelperCtorCaller<UMovieGraphRenderPreviewWidget>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderPreviewWidget.InnerSingleton;
}

// UMovieGraphRenderPreviewWidget @ 14dc737e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMovieGraphRenderPreviewWidget * __thiscall
UMovieGraphRenderPreviewWidget::UMovieGraphRenderPreviewWidget
          (UMovieGraphRenderPreviewWidget *this,FVTableHelper *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UMovieGraphRenderPreviewWidget__6B_;
  return this;
}

// UMovieGraphRenderPreviewWidget @ 14dc73820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMovieGraphRenderPreviewWidget * __thiscall
UMovieGraphRenderPreviewWidget::UMovieGraphRenderPreviewWidget
          (UMovieGraphRenderPreviewWidget *this,FObjectInitializer *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UMovieGraphRenderPreviewWidget__6B_;
  return this;
}

// ~UMovieGraphRenderPreviewWidget @ 14dc748d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UMovieGraphRenderPreviewWidget::~UMovieGraphRenderPreviewWidget
          (UMovieGraphRenderPreviewWidget *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UMovieGraphRenderPreviewWidget__6B_;
  UUserWidget::~UUserWidget((UUserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14dc82360

UClass * __cdecl UMovieGraphRenderPreviewWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRenderPreviewWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRenderPreviewWidget",
               &Z_Registration_Info_UClass_UMovieGraphRenderPreviewWidget.InnerSingleton,
               StaticRegisterNativesUMovieGraphRenderPreviewWidget,0x3a8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphRenderPreviewWidget>,
               InternalVTableHelperCtorCaller<UMovieGraphRenderPreviewWidget>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderPreviewWidget.InnerSingleton;
}

// OnInitializedForPipeline @ 14dc85140

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
UMovieGraphRenderPreviewWidget::OnInitializedForPipeline
          (UMovieGraphRenderPreviewWidget *this,UMovieGraphPipeline *param_1)

{
  UFunction *pUVar1;
  UMovieGraphPipeline *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UMovieGraphRenderPreviewWidget_OnInitializedForPipeline);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// StaticRegisterNativesUMovieGraphRenderPreviewWidget @ 14dc89c90

void __cdecl
UMovieGraphRenderPreviewWidget::StaticRegisterNativesUMovieGraphRenderPreviewWidget(void)

{
  return;
}

