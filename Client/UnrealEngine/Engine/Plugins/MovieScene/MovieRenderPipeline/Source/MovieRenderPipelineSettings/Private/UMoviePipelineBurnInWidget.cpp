// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineSettings
// Functions: 7

// StaticClass @ 14ddaff90

UClass * __cdecl UMoviePipelineBurnInWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineBurnInWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineSettings",L"MoviePipelineBurnInWidget",
               &Z_Registration_Info_UClass_UMoviePipelineBurnInWidget.InnerSingleton,
               StaticRegisterNativesUMoviePipelineBurnInWidget,0x3a8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineBurnInWidget>,
               InternalVTableHelperCtorCaller<UMoviePipelineBurnInWidget>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineBurnInWidget.InnerSingleton;
}

// UMoviePipelineBurnInWidget @ 14ddb1870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMoviePipelineBurnInWidget * __thiscall
UMoviePipelineBurnInWidget::UMoviePipelineBurnInWidget
          (UMoviePipelineBurnInWidget *this,FVTableHelper *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UMoviePipelineBurnInWidget__6B_;
  return this;
}

// UMoviePipelineBurnInWidget @ 14ddb18b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMoviePipelineBurnInWidget * __thiscall
UMoviePipelineBurnInWidget::UMoviePipelineBurnInWidget
          (UMoviePipelineBurnInWidget *this,FObjectInitializer *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UMoviePipelineBurnInWidget__6B_;
  return this;
}

// ~UMoviePipelineBurnInWidget @ 14ddb1c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UMoviePipelineBurnInWidget::~UMoviePipelineBurnInWidget(UMoviePipelineBurnInWidget *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UMoviePipelineBurnInWidget__6B_;
  UUserWidget::~UUserWidget((UUserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14ddb4220

UClass * __cdecl UMoviePipelineBurnInWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineBurnInWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineSettings",L"MoviePipelineBurnInWidget",
               &Z_Registration_Info_UClass_UMoviePipelineBurnInWidget.InnerSingleton,
               StaticRegisterNativesUMoviePipelineBurnInWidget,0x3a8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineBurnInWidget>,
               InternalVTableHelperCtorCaller<UMoviePipelineBurnInWidget>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineBurnInWidget.InnerSingleton;
}

// OnOutputFrameStarted @ 14ddb4a30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineBurnInWidget::OnOutputFrameStarted
          (UMoviePipelineBurnInWidget *this,UMoviePipeline *param_1)

{
  UFunction *pUVar1;
  UMoviePipeline *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UMoviePipelineBurnInWidget_OnOutputFrameStarted);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// StaticRegisterNativesUMoviePipelineBurnInWidget @ 14ddb6b60

void __cdecl UMoviePipelineBurnInWidget::StaticRegisterNativesUMoviePipelineBurnInWidget(void)

{
  return;
}

