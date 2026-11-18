// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b40cfd0

UClass * __cdecl UDS_AI_GYM_DebugWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AI_GYM_DebugWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AI_GYM_DebugWidget",
               &Z_Registration_Info_UClass_UDS_AI_GYM_DebugWidget.InnerSingleton,
               StaticRegisterNativesUDS_AI_GYM_DebugWidget,0x3b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AI_GYM_DebugWidget>,
               InternalVTableHelperCtorCaller<UDS_AI_GYM_DebugWidget>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AI_GYM_DebugWidget.InnerSingleton;
}

// UDS_AI_GYM_DebugWidget @ 14b4111e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_AI_GYM_DebugWidget * __thiscall
UDS_AI_GYM_DebugWidget::UDS_AI_GYM_DebugWidget(UDS_AI_GYM_DebugWidget *this,FVTableHelper *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_AI_GYM_DebugWidget__6B_;
  ::FString::FString(&this->DebugString,"");
  return this;
}

// UDS_AI_GYM_DebugWidget @ 14b411240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_AI_GYM_DebugWidget * __thiscall
UDS_AI_GYM_DebugWidget::UDS_AI_GYM_DebugWidget
          (UDS_AI_GYM_DebugWidget *this,FObjectInitializer *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_AI_GYM_DebugWidget__6B_;
  ::FString::FString(&this->DebugString,"");
  return this;
}

// ~UDS_AI_GYM_DebugWidget @ 14b411df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_AI_GYM_DebugWidget::~UDS_AI_GYM_DebugWidget(UDS_AI_GYM_DebugWidget *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_AI_GYM_DebugWidget__6B_;
  pFVar1 = (this->DebugString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UUserWidget::~UUserWidget((UUserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b4132a0

UClass * __cdecl UDS_AI_GYM_DebugWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AI_GYM_DebugWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AI_GYM_DebugWidget",
               &Z_Registration_Info_UClass_UDS_AI_GYM_DebugWidget.InnerSingleton,
               StaticRegisterNativesUDS_AI_GYM_DebugWidget,0x3b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AI_GYM_DebugWidget>,
               InternalVTableHelperCtorCaller<UDS_AI_GYM_DebugWidget>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AI_GYM_DebugWidget.InnerSingleton;
}

// StaticRegisterNativesUDS_AI_GYM_DebugWidget @ 14b414230

void __cdecl UDS_AI_GYM_DebugWidget::StaticRegisterNativesUDS_AI_GYM_DebugWidget(void)

{
  return;
}

