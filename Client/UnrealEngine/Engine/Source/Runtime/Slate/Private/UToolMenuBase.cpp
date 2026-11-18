// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 18

// StaticClass @ 14269b8e0

UClass * __cdecl UToolMenuBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ToolMenuBase",
               &Z_Registration_Info_UClass_UToolMenuBase.InnerSingleton,
               StaticRegisterNativesUToolMenuBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UToolMenuBase>,
               InternalVTableHelperCtorCaller<UToolMenuBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuBase.InnerSingleton;
}

// UToolMenuBase @ 1426a9be0

UToolMenuBase * __thiscall UToolMenuBase::UToolMenuBase(UToolMenuBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UToolMenuBase__6B_;
  return this;
}

// UToolMenuBase @ 1426a9c10

UToolMenuBase * __thiscall
UToolMenuBase::UToolMenuBase(UToolMenuBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UToolMenuBase__6B_;
  return this;
}

// ~UToolMenuBase @ 1426abd40

void __thiscall UToolMenuBase::~UToolMenuBase(UToolMenuBase *this)

{
  *(undefined ***)this = &___7UToolMenuBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddMenuCustomization @ 1426b04b0

FCustomizedToolMenu * __thiscall UToolMenuBase::AddMenuCustomization(UToolMenuBase *this)

{
  return (FCustomizedToolMenu *)0x0;
}

// AddMenuProfile @ 1426b04c0

FToolMenuProfile * __thiscall UToolMenuBase::AddMenuProfile(UToolMenuBase *this,FName *param_1)

{
  return (FToolMenuProfile *)0x0;
}

// ContainsEntry @ 1426b4ad0

bool __thiscall UToolMenuBase::ContainsEntry(UToolMenuBase *this,FName param_1)

{
  return false;
}

// ContainsSection @ 1426b4ae0

bool __thiscall UToolMenuBase::ContainsSection(UToolMenuBase *this,FName param_1)

{
  return false;
}

// FindMenuCustomization @ 1426baf00

FCustomizedToolMenu * __thiscall UToolMenuBase::FindMenuCustomization(UToolMenuBase *this)

{
  return (FCustomizedToolMenu *)0x0;
}

// FindMenuProfile @ 1426bb150

FToolMenuProfile * __thiscall UToolMenuBase::FindMenuProfile(UToolMenuBase *this,FName *param_1)

{
  return (FToolMenuProfile *)0x0;
}

// GetMenuCustomizationHierarchy @ 1426bdb70

FCustomizedToolMenuHierarchy * __thiscall
UToolMenuBase::GetMenuCustomizationHierarchy
          (UToolMenuBase *this,FCustomizedToolMenuHierarchy *__return_storage_ptr__)

{
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->Hierarchy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Hierarchy).ArrayNum = 0;
  (__return_storage_ptr__->Hierarchy).ArrayMax = 0;
  (__return_storage_ptr__->RuntimeHierarchy).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->RuntimeHierarchy).ArrayNum = 0;
  (__return_storage_ptr__->RuntimeHierarchy).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetMenuProfileHierarchy @ 1426bdbf0

FToolMenuProfileHierarchy * __thiscall
UToolMenuBase::GetMenuProfileHierarchy
          (UToolMenuBase *this,FToolMenuProfileHierarchy *__return_storage_ptr__,FName *param_1)

{
  (__return_storage_ptr__->ProfileHierarchy).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ProfileHierarchy).ArrayNum = 0;
  (__return_storage_ptr__->ProfileHierarchy).ArrayMax = 0;
  (__return_storage_ptr__->RuntimeProfileHierarchy).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RuntimeProfileHierarchy).ArrayNum = 0;
  (__return_storage_ptr__->RuntimeProfileHierarchy).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1426bef70

UClass * __cdecl UToolMenuBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ToolMenuBase",
               &Z_Registration_Info_UClass_UToolMenuBase.InnerSingleton,
               StaticRegisterNativesUToolMenuBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UToolMenuBase>,
               InternalVTableHelperCtorCaller<UToolMenuBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuBase.InnerSingleton;
}

// GetSectionName @ 1426bf1b0

FName __thiscall UToolMenuBase::GetSectionName(UToolMenuBase *this,FName param_1)

{
  *(undefined8 *)param_1 = 0;
  return param_1;
}

// IsEditing @ 1426c26c0

bool __thiscall UToolMenuBase::IsEditing(UToolMenuBase *this)

{
  return false;
}

// OnMenuDestroyed @ 1426c7240

void __thiscall UToolMenuBase::OnMenuDestroyed(UToolMenuBase *this)

{
  return;
}

// StaticRegisterNativesUToolMenuBase @ 1426df990

void __cdecl UToolMenuBase::StaticRegisterNativesUToolMenuBase(void)

{
  return;
}

// UpdateMenuCustomizationFromMultibox @ 1426e4cb0

void __thiscall
UToolMenuBase::UpdateMenuCustomizationFromMultibox
          (UToolMenuBase *this,TSharedRef<FMultiBox_const_,1> *param_1)

{
  return;
}

