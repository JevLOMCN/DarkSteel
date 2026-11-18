// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 6

// StaticClass @ 1468df460

UClass * __cdecl UWidgetFieldNotificationExtension::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetFieldNotificationExtension.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetFieldNotificationExtension",
               &Z_Registration_Info_UClass_UWidgetFieldNotificationExtension.InnerSingleton,
               StaticRegisterNativesUWidgetFieldNotificationExtension,0x40,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetFieldNotificationExtension>,
               InternalVTableHelperCtorCaller<UWidgetFieldNotificationExtension>,local_res8,
               UUserWidgetExtension::StaticClass,UUserWidget::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetFieldNotificationExtension.InnerSingleton;
}

// UWidgetFieldNotificationExtension @ 146902af0

UWidgetFieldNotificationExtension * __thiscall
UWidgetFieldNotificationExtension::UWidgetFieldNotificationExtension
          (UWidgetFieldNotificationExtension *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWidgetFieldNotificationExtension__6B_;
  (this->Delegates).Delegates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Delegates).Delegates.ArrayNum = 0;
  (this->Delegates).Delegates.ArrayMax = 0;
  (this->Delegates).DelegateLockCount = 0;
  (this->Delegates).CompactionCount = 0;
  (this->Delegates).AddedEmplaceAt = 0xffff;
  return this;
}

// UWidgetFieldNotificationExtension @ 146902b30

UWidgetFieldNotificationExtension * __thiscall
UWidgetFieldNotificationExtension::UWidgetFieldNotificationExtension
          (UWidgetFieldNotificationExtension *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWidgetFieldNotificationExtension__6B_;
  (this->Delegates).Delegates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Delegates).Delegates.ArrayNum = 0;
  (this->Delegates).Delegates.ArrayMax = 0;
  (this->Delegates).DelegateLockCount = 0;
  (this->Delegates).CompactionCount = 0;
  (this->Delegates).AddedEmplaceAt = 0xffff;
  return this;
}

// ~UWidgetFieldNotificationExtension @ 146905110

void __thiscall
UWidgetFieldNotificationExtension::~UWidgetFieldNotificationExtension
          (UWidgetFieldNotificationExtension *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWidgetFieldNotificationExtension__6B_;
  DestructItems<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,int>
            ((FInvocationElement *)(this->Delegates).Delegates.AllocatorInstance.Data,
             (this->Delegates).Delegates.ArrayNum);
  pFVar1 = (this->Delegates).Delegates.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UUserWidgetExtension__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1469238f0

UClass * __cdecl UWidgetFieldNotificationExtension::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetFieldNotificationExtension.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetFieldNotificationExtension",
               &Z_Registration_Info_UClass_UWidgetFieldNotificationExtension.InnerSingleton,
               StaticRegisterNativesUWidgetFieldNotificationExtension,0x40,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetFieldNotificationExtension>,
               InternalVTableHelperCtorCaller<UWidgetFieldNotificationExtension>,local_res8,
               UUserWidgetExtension::StaticClass,UUserWidget::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetFieldNotificationExtension.InnerSingleton;
}

// StaticRegisterNativesUWidgetFieldNotificationExtension @ 146945d00

void __cdecl
UWidgetFieldNotificationExtension::StaticRegisterNativesUWidgetFieldNotificationExtension(void)

{
  return;
}

