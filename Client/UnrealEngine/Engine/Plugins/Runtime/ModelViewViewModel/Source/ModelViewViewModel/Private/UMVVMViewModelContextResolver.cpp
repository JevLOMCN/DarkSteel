// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 10

// StaticClass @ 14a737c40

UClass * __cdecl UMVVMViewModelContextResolver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewModelContextResolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewModelContextResolver",
               &Z_Registration_Info_UClass_UMVVMViewModelContextResolver.InnerSingleton,
               StaticRegisterNativesUMVVMViewModelContextResolver,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMVVMViewModelContextResolver>,
               InternalVTableHelperCtorCaller<UMVVMViewModelContextResolver>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewModelContextResolver.InnerSingleton;
}

// UMVVMViewModelContextResolver @ 14a7401d0

UMVVMViewModelContextResolver * __thiscall
UMVVMViewModelContextResolver::UMVVMViewModelContextResolver
          (UMVVMViewModelContextResolver *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMVVMViewModelContextResolver__6B_;
  return this;
}

// UMVVMViewModelContextResolver @ 14a740200

UMVVMViewModelContextResolver * __thiscall
UMVVMViewModelContextResolver::UMVVMViewModelContextResolver
          (UMVVMViewModelContextResolver *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMVVMViewModelContextResolver__6B_;
  return this;
}

// ~UMVVMViewModelContextResolver @ 14a740a60

void __thiscall
UMVVMViewModelContextResolver::~UMVVMViewModelContextResolver(UMVVMViewModelContextResolver *this)

{
  *(undefined ***)this = &___7UMVVMViewModelContextResolver__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateInstance @ 14a746820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UObject * __thiscall
UMVVMViewModelContextResolver::CreateInstance
          (UMVVMViewModelContextResolver *this,UClass *param_1,UUserWidget *param_2,
          UMVVMView *param_3)

{
  UObject *pUVar1;
  UFunction *pUVar2;
  UClass *local_28;
  UUserWidget *local_20;
  UObject *local_18;
  undefined8 uStack_10;
  
  local_18 = (UObject *)0x0;
  uStack_10 = 0;
  local_28 = param_1;
  local_20 = param_2;
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UMVVMViewModelContextResolver_K2_CreateInstance);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar2,&local_28);
  pUVar1 = local_18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_18);
  }
  return pUVar1;
}

// DestroyInstance @ 14a7469a0

void __thiscall
UMVVMViewModelContextResolver::DestroyInstance
          (UMVVMViewModelContextResolver *this,UObject *param_1,UMVVMView *param_2)

{
  UFunction *pUVar1;
  UObject *local_18;
  UMVVMView *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UMVVMViewModelContextResolver_K2_DestroyInstance);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_18);
  return;
}

// GetPrivateStaticClass @ 14a754110

UClass * __cdecl UMVVMViewModelContextResolver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewModelContextResolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewModelContextResolver",
               &Z_Registration_Info_UClass_UMVVMViewModelContextResolver.InnerSingleton,
               StaticRegisterNativesUMVVMViewModelContextResolver,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMVVMViewModelContextResolver>,
               InternalVTableHelperCtorCaller<UMVVMViewModelContextResolver>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewModelContextResolver.InnerSingleton;
}

// K2_CreateInstance @ 14a75a990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TScriptInterface<INotifyFieldValueChanged> * __thiscall
UMVVMViewModelContextResolver::K2_CreateInstance
          (UMVVMViewModelContextResolver *this,
          TScriptInterface<INotifyFieldValueChanged> *__return_storage_ptr__,UClass *param_1,
          UUserWidget *param_2)

{
  UFunction *pUVar1;
  UClass *local_28;
  UUserWidget *local_20;
  UObject *local_18;
  undefined8 uStack_10;
  
  local_18 = (UObject *)0x0;
  uStack_10 = 0;
  local_28 = param_1;
  local_20 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UMVVMViewModelContextResolver_K2_CreateInstance);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_28);
  *(UObject **)__return_storage_ptr__ = local_18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_18);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uStack_10;
  return __return_storage_ptr__;
}

// K2_DestroyInstance @ 14a75aa10

void __thiscall
UMVVMViewModelContextResolver::K2_DestroyInstance
          (UMVVMViewModelContextResolver *this,UObject *param_1,UMVVMView *param_2)

{
  UFunction *pUVar1;
  UObject *local_18;
  UMVVMView *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UMVVMViewModelContextResolver_K2_DestroyInstance);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_18);
  return;
}

// StaticRegisterNativesUMVVMViewModelContextResolver @ 14a7602d0

void __cdecl UMVVMViewModelContextResolver::StaticRegisterNativesUMVVMViewModelContextResolver(void)

{
  return;
}

