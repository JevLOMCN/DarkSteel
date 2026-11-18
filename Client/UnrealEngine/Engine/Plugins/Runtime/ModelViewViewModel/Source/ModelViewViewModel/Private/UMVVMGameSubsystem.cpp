// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 9

// StaticClass @ 14a738a30

UClass * __cdecl UMVVMGameSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMGameSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMGameSubsystem",
               &Z_Registration_Info_UClass_UMVVMGameSubsystem.InnerSingleton,
               StaticRegisterNativesUMVVMGameSubsystem,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMVVMGameSubsystem>,
               InternalVTableHelperCtorCaller<UMVVMGameSubsystem>,local_res8,
               UGameInstanceSubsystem::StaticClass,UGameInstance::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMGameSubsystem.InnerSingleton;
}

// UMVVMGameSubsystem @ 14a73f9d0

UMVVMGameSubsystem * __thiscall
UMVVMGameSubsystem::UMVVMGameSubsystem(UMVVMGameSubsystem *this,FVTableHelper *param_1)

{
  UGameInstanceSubsystem::UGameInstanceSubsystem((UGameInstanceSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMVVMGameSubsystem__6B_;
  (this->ViewModelCollection).field0_0x0.DebugPtr = (UMVVMViewModelCollectionObject *)0x0;
  return this;
}

// UMVVMGameSubsystem @ 14a73fa00

UMVVMGameSubsystem * __thiscall UMVVMGameSubsystem::UMVVMGameSubsystem(UMVVMGameSubsystem *this)

{
  UGameInstanceSubsystem::UGameInstanceSubsystem((UGameInstanceSubsystem *)this);
  this->_padding_ = (longlong)&___7UMVVMGameSubsystem__6B_;
  (this->ViewModelCollection).field0_0x0.DebugPtr = (UMVVMViewModelCollectionObject *)0x0;
  return this;
}

// ~UMVVMGameSubsystem @ 14a7406c0

void __thiscall UMVVMGameSubsystem::~UMVVMGameSubsystem(UMVVMGameSubsystem *this)

{
  this->_padding_ = (longlong)&___7UMVVMGameSubsystem__6B_;
  UGameInstanceSubsystem::~UGameInstanceSubsystem((UGameInstanceSubsystem *)this);
  return;
}

// Deinitialize @ 14a746890

void __thiscall UMVVMGameSubsystem::Deinitialize(UMVVMGameSubsystem *this)

{
  (this->ViewModelCollection).field0_0x0.DebugPtr = (UMVVMViewModelCollectionObject *)0x0;
  return;
}

// GetPrivateStaticClass @ 14a753830

UClass * __cdecl UMVVMGameSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMGameSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMGameSubsystem",
               &Z_Registration_Info_UClass_UMVVMGameSubsystem.InnerSingleton,
               StaticRegisterNativesUMVVMGameSubsystem,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMVVMGameSubsystem>,
               InternalVTableHelperCtorCaller<UMVVMGameSubsystem>,local_res8,
               UGameInstanceSubsystem::StaticClass,UGameInstance::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMGameSubsystem.InnerSingleton;
}

// Initialize @ 14a755930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UMVVMGameSubsystem::Initialize(UMVVMGameSubsystem *this,FSubsystemCollectionBase *param_1)

{
  UClass *pUVar1;
  UMVVMViewModelCollectionObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMVVMViewModelCollectionObject::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = this;
  pUVar2 = (UMVVMViewModelCollectionObject *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UMVVMViewModelCollectionObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ViewModelCollection).field0_0x0.DebugPtr = pUVar2;
  return;
}

// StaticRegisterNativesUMVVMGameSubsystem @ 14a7600c0

void __cdecl UMVVMGameSubsystem::StaticRegisterNativesUMVVMGameSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMVVMGameSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetViewModelCollection @ 14a76b810

void __cdecl
UMVVMGameSubsystem::execGetViewModelCollection(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x8;
  return;
}

