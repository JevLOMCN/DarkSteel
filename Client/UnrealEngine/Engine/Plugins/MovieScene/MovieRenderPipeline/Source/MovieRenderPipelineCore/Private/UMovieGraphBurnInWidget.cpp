// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dc6a3a0

UClass * __cdecl UMovieGraphBurnInWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphBurnInWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphBurnInWidget",
               &Z_Registration_Info_UClass_UMovieGraphBurnInWidget.InnerSingleton,
               StaticRegisterNativesUMovieGraphBurnInWidget,0x3a8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphBurnInWidget>,
               InternalVTableHelperCtorCaller<UMovieGraphBurnInWidget>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphBurnInWidget.InnerSingleton;
}

// UMovieGraphBurnInWidget @ 14dc72a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMovieGraphBurnInWidget * __thiscall
UMovieGraphBurnInWidget::UMovieGraphBurnInWidget
          (UMovieGraphBurnInWidget *this,FVTableHelper *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UMovieGraphBurnInWidget__6B_;
  return this;
}

// UMovieGraphBurnInWidget @ 14dc72a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMovieGraphBurnInWidget * __thiscall
UMovieGraphBurnInWidget::UMovieGraphBurnInWidget
          (UMovieGraphBurnInWidget *this,FObjectInitializer *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UMovieGraphBurnInWidget__6B_;
  return this;
}

// ~UMovieGraphBurnInWidget @ 14dc743d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMovieGraphBurnInWidget::~UMovieGraphBurnInWidget(UMovieGraphBurnInWidget *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UMovieGraphBurnInWidget__6B_;
  UUserWidget::~UUserWidget((UUserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14dc81900

UClass * __cdecl UMovieGraphBurnInWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphBurnInWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphBurnInWidget",
               &Z_Registration_Info_UClass_UMovieGraphBurnInWidget.InnerSingleton,
               StaticRegisterNativesUMovieGraphBurnInWidget,0x3a8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphBurnInWidget>,
               InternalVTableHelperCtorCaller<UMovieGraphBurnInWidget>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphBurnInWidget.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphBurnInWidget @ 14dc89b20

void __cdecl UMovieGraphBurnInWidget::StaticRegisterNativesUMovieGraphBurnInWidget(void)

{
  return;
}

// UpdateForGraph @ 14dc8bfb0

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
UMovieGraphBurnInWidget::UpdateForGraph
          (UMovieGraphBurnInWidget *this,UMovieGraphPipeline *param_1,
          UMovieGraphEvaluatedConfig *param_2,int param_3,FString *param_4)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *pUVar2;
  UMovieGraphPipeline *local_38;
  UMovieGraphEvaluatedConfig *local_30;
  int local_28;
  FString local_20;
  
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  if (&local_20 != param_4) {
    uVar1 = (param_4->Data).ArrayNum;
    _Src = (param_4->Data).AllocatorInstance.Data;
    local_20.Data.ArrayMax = 0;
    local_20.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_20,uVar1,&local_20.Data.ArrayMax);
      memcpy(local_20.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UMovieGraphBurnInWidget_UpdateForGraph)
  ;
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar2,&local_38);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

