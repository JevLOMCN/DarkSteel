// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldNotification
// Functions: 6

// StaticClass @ 1441bdf70

UClass * __cdecl UNotifyFieldValueChanged::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNotifyFieldValueChanged.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldNotification",L"NotifyFieldValueChanged",
               &Z_Registration_Info_UClass_UNotifyFieldValueChanged.InnerSingleton,
               StaticRegisterNativesUNotifyFieldValueChanged,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNotifyFieldValueChanged>,
               InternalVTableHelperCtorCaller<UNotifyFieldValueChanged>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNotifyFieldValueChanged.InnerSingleton;
}

// UNotifyFieldValueChanged @ 1441bec30

UNotifyFieldValueChanged * __thiscall
UNotifyFieldValueChanged::UNotifyFieldValueChanged
          (UNotifyFieldValueChanged *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNotifyFieldValueChanged__6B_;
  return this;
}

// UNotifyFieldValueChanged @ 1441bec60

UNotifyFieldValueChanged * __thiscall
UNotifyFieldValueChanged::UNotifyFieldValueChanged
          (UNotifyFieldValueChanged *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNotifyFieldValueChanged__6B_;
  return this;
}

// ~UNotifyFieldValueChanged @ 1441bec90

void __thiscall UNotifyFieldValueChanged::~UNotifyFieldValueChanged(UNotifyFieldValueChanged *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1441c2380

UClass * __cdecl UNotifyFieldValueChanged::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNotifyFieldValueChanged.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldNotification",L"NotifyFieldValueChanged",
               &Z_Registration_Info_UClass_UNotifyFieldValueChanged.InnerSingleton,
               StaticRegisterNativesUNotifyFieldValueChanged,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNotifyFieldValueChanged>,
               InternalVTableHelperCtorCaller<UNotifyFieldValueChanged>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNotifyFieldValueChanged.InnerSingleton;
}

// StaticRegisterNativesUNotifyFieldValueChanged @ 1441c3a60

void __cdecl UNotifyFieldValueChanged::StaticRegisterNativesUNotifyFieldValueChanged(void)

{
  return;
}

