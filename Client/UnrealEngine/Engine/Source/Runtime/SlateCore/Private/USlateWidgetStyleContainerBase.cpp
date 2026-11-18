// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// StaticClass @ 14252e740

UClass * __cdecl USlateWidgetStyleContainerBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateWidgetStyleContainerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateCore",L"SlateWidgetStyleContainerBase",
               &Z_Registration_Info_UClass_USlateWidgetStyleContainerBase.InnerSingleton,
               StaticRegisterNativesUSlateWidgetStyleContainerBase,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USlateWidgetStyleContainerBase>,
               InternalVTableHelperCtorCaller<USlateWidgetStyleContainerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateWidgetStyleContainerBase.InnerSingleton;
}

// USlateWidgetStyleContainerBase @ 142549ee0

USlateWidgetStyleContainerBase * __thiscall
USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
          (USlateWidgetStyleContainerBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ISlateWidgetStyleContainerInterface__;
  return this;
}

// USlateWidgetStyleContainerBase @ 142549f20

USlateWidgetStyleContainerBase * __thiscall
USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
          (USlateWidgetStyleContainerBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ISlateWidgetStyleContainerInterface__;
  return this;
}

// ~USlateWidgetStyleContainerBase @ 14254c9a0

void __thiscall
USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
          (USlateWidgetStyleContainerBase *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ISlateWidgetStyleContainerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1425825d0

UClass * __cdecl USlateWidgetStyleContainerBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateWidgetStyleContainerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateCore",L"SlateWidgetStyleContainerBase",
               &Z_Registration_Info_UClass_USlateWidgetStyleContainerBase.InnerSingleton,
               StaticRegisterNativesUSlateWidgetStyleContainerBase,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USlateWidgetStyleContainerBase>,
               InternalVTableHelperCtorCaller<USlateWidgetStyleContainerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateWidgetStyleContainerBase.InnerSingleton;
}

// GetStyle @ 142588c90

FSlateWidgetStyle * __thiscall
USlateWidgetStyleContainerBase::GetStyle(USlateWidgetStyleContainerBase *this)

{
  return (FSlateWidgetStyle *)0x0;
}

// StaticRegisterNativesUSlateWidgetStyleContainerBase @ 1425a8780

void __cdecl
USlateWidgetStyleContainerBase::StaticRegisterNativesUSlateWidgetStyleContainerBase(void)

{
  return;
}

// _getUObject @ 1425ac5b0

UObject * __thiscall
USlateWidgetStyleContainerBase::_getUObject(USlateWidgetStyleContainerBase *this)

{
  return (UObject *)&this[-1].field_0x8;
}

