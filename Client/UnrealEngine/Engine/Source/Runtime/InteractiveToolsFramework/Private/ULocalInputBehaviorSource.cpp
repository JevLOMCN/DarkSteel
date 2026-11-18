// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 9

// StaticClass @ 14966cf90

UClass * __cdecl ULocalInputBehaviorSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalInputBehaviorSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"LocalInputBehaviorSource",
               &Z_Registration_Info_UClass_ULocalInputBehaviorSource.InnerSingleton,
               StaticRegisterNativesULocalInputBehaviorSource,0x60,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocalInputBehaviorSource>,
               InternalVTableHelperCtorCaller<ULocalInputBehaviorSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalInputBehaviorSource.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 149673300

void * __cdecl ULocalInputBehaviorSource::<lambda_24_>::<lambda_invoker_cdecl>(void)

{
  return (void *)0x0;
}

// ULocalInputBehaviorSource @ 149687780

ULocalInputBehaviorSource * __thiscall
ULocalInputBehaviorSource::ULocalInputBehaviorSource
          (ULocalInputBehaviorSource *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  *(undefined8 *)&this->GetInputBehaviorsFunc = 0;
  *(undefined8 *)&(this->GetInputBehaviorsFunc).field_0x28 = 0;
  *(undefined ***)&(this->GetInputBehaviorsFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6A__TXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->GetInputBehaviorsFunc).field_0x18;
  *(code **)puVar1 = <lambda_24_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetInputBehaviorsFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<std::nullptr_t_(__cdecl*)(void),UInputBehaviorSet_const_*>::Call;
  }
  return this;
}

// ULocalInputBehaviorSource @ 1496877f0

ULocalInputBehaviorSource * __thiscall
ULocalInputBehaviorSource::ULocalInputBehaviorSource
          (ULocalInputBehaviorSource *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  *(undefined8 *)&this->GetInputBehaviorsFunc = 0;
  *(undefined8 *)&(this->GetInputBehaviorsFunc).field_0x28 = 0;
  *(undefined ***)&(this->GetInputBehaviorsFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6A__TXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->GetInputBehaviorsFunc).field_0x18;
  *(code **)puVar1 = <lambda_24_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetInputBehaviorsFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<std::nullptr_t_(__cdecl*)(void),UInputBehaviorSet_const_*>::Call;
  }
  return this;
}

// ~ULocalInputBehaviorSource @ 14968a690

void __thiscall
ULocalInputBehaviorSource::~ULocalInputBehaviorSource(ULocalInputBehaviorSource *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  if (*(longlong *)&this->GetInputBehaviorsFunc != 0) {
    plVar1 = *(longlong **)&(this->GetInputBehaviorsFunc).field_0x28;
    plVar2 = (longlong *)&(this->GetInputBehaviorsFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IInputBehaviorSource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetInputBehaviors @ 1496a2f70

UInputBehaviorSet * __thiscall
ULocalInputBehaviorSource::GetInputBehaviors(ULocalInputBehaviorSource *this)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  UInputBehaviorSet *pUVar2;
  longlong *plVar3;
  
  UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
  UNRECOVERED_JUMPTABLE = (code *)this->_padding_;
  plVar3 = &this->_padding_;
  if (*(longlong **)&this->GetInputBehaviorsFunc != (longlong *)0x0) {
    plVar3 = *(longlong **)&this->GetInputBehaviorsFunc;
  }
  uVar1 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001496a2faf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar2 = (UInputBehaviorSet *)(*UNRECOVERED_JUMPTABLE)(uVar1);
  return pUVar2;
}

// GetPrivateStaticClass @ 1496a6db0

UClass * __cdecl ULocalInputBehaviorSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalInputBehaviorSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"LocalInputBehaviorSource",
               &Z_Registration_Info_UClass_ULocalInputBehaviorSource.InnerSingleton,
               StaticRegisterNativesULocalInputBehaviorSource,0x60,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocalInputBehaviorSource>,
               InternalVTableHelperCtorCaller<ULocalInputBehaviorSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalInputBehaviorSource.InnerSingleton;
}

// StaticRegisterNativesULocalInputBehaviorSource @ 1496c2cb0

void __cdecl ULocalInputBehaviorSource::StaticRegisterNativesULocalInputBehaviorSource(void)

{
  return;
}

// _getUObject @ 1496ca840

UObject * __thiscall ULocalInputBehaviorSource::_getUObject(ULocalInputBehaviorSource *this)

{
  return (UObject *)&this[-1].GetInputBehaviorsFunc.field_0x8;
}

