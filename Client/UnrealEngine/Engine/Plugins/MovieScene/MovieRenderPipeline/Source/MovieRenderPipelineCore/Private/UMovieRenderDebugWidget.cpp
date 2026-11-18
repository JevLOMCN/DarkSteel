// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dc68b90

UClass * __cdecl UMovieRenderDebugWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieRenderDebugWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieRenderDebugWidget",
               &Z_Registration_Info_UClass_UMovieRenderDebugWidget.InnerSingleton,
               StaticRegisterNativesUMovieRenderDebugWidget,0x3a8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieRenderDebugWidget>,
               InternalVTableHelperCtorCaller<UMovieRenderDebugWidget>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieRenderDebugWidget.InnerSingleton;
}

// UMovieRenderDebugWidget @ 14dc73ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMovieRenderDebugWidget * __thiscall
UMovieRenderDebugWidget::UMovieRenderDebugWidget
          (UMovieRenderDebugWidget *this,FVTableHelper *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UMovieRenderDebugWidget__6B_;
  return this;
}

// UMovieRenderDebugWidget @ 14dc73be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMovieRenderDebugWidget * __thiscall
UMovieRenderDebugWidget::UMovieRenderDebugWidget
          (UMovieRenderDebugWidget *this,FObjectInitializer *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UMovieRenderDebugWidget__6B_;
  return this;
}

// ~UMovieRenderDebugWidget @ 14dc74af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMovieRenderDebugWidget::~UMovieRenderDebugWidget(UMovieRenderDebugWidget *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UMovieRenderDebugWidget__6B_;
  UUserWidget::~UUserWidget((UUserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14dc82a10

UClass * __cdecl UMovieRenderDebugWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieRenderDebugWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieRenderDebugWidget",
               &Z_Registration_Info_UClass_UMovieRenderDebugWidget.InnerSingleton,
               StaticRegisterNativesUMovieRenderDebugWidget,0x3a8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieRenderDebugWidget>,
               InternalVTableHelperCtorCaller<UMovieRenderDebugWidget>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieRenderDebugWidget.InnerSingleton;
}

// OnInitializedForPipeline @ 14dc85180

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieRenderDebugWidget::OnInitializedForPipeline
          (UMovieRenderDebugWidget *this,UMoviePipeline *param_1)

{
  UFunction *pUVar1;
  UMoviePipeline *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UMovieRenderDebugWidget_OnInitializedForPipeline);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// StaticRegisterNativesUMovieRenderDebugWidget @ 14dc89d80

void __cdecl UMovieRenderDebugWidget::StaticRegisterNativesUMovieRenderDebugWidget(void)

{
  return;
}

