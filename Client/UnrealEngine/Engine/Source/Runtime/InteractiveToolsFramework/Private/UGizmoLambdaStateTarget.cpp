// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 9

// StaticClass @ 1496704f0

UClass * __cdecl UGizmoLambdaStateTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoLambdaStateTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoLambdaStateTarget",
               &Z_Registration_Info_UClass_UGizmoLambdaStateTarget.InnerSingleton,
               StaticRegisterNativesUGizmoLambdaStateTarget,0x90,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UGizmoLambdaStateTarget>,
               InternalVTableHelperCtorCaller<UGizmoLambdaStateTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoLambdaStateTarget.InnerSingleton;
}

// UGizmoLambdaStateTarget @ 1496856d0

UGizmoLambdaStateTarget * __thiscall
UGizmoLambdaStateTarget::UGizmoLambdaStateTarget
          (UGizmoLambdaStateTarget *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoStateTarget__;
  *(undefined8 *)&this->BeginUpdateFunction = 0;
  *(undefined8 *)&(this->BeginUpdateFunction).field_0x28 = 0;
  *(undefined8 *)&this->EndUpdateFunction = 0;
  *(undefined8 *)&(this->EndUpdateFunction).field_0x28 = 0;
  return this;
}

// UGizmoLambdaStateTarget @ 149685720

UGizmoLambdaStateTarget * __thiscall
UGizmoLambdaStateTarget::UGizmoLambdaStateTarget
          (UGizmoLambdaStateTarget *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoStateTarget__;
  *(undefined8 *)&this->BeginUpdateFunction = 0;
  *(undefined8 *)&(this->BeginUpdateFunction).field_0x28 = 0;
  *(undefined8 *)&this->EndUpdateFunction = 0;
  *(undefined8 *)&(this->EndUpdateFunction).field_0x28 = 0;
  return this;
}

// ~UGizmoLambdaStateTarget @ 149689e10

void __thiscall UGizmoLambdaStateTarget::~UGizmoLambdaStateTarget(UGizmoLambdaStateTarget *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoStateTarget__;
  if (*(longlong *)&this->EndUpdateFunction != 0) {
    plVar1 = *(longlong **)&(this->EndUpdateFunction).field_0x28;
    plVar2 = (longlong *)&(this->EndUpdateFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->BeginUpdateFunction != 0) {
    plVar1 = *(longlong **)&(this->BeginUpdateFunction).field_0x28;
    plVar2 = (longlong *)&(this->BeginUpdateFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IGizmoStateTarget__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginUpdate @ 149693590

void __thiscall UGizmoLambdaStateTarget::BeginUpdate(UGizmoLambdaStateTarget *this)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((void *)this->_padding_ != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
    pcVar1 = (code *)this->_padding_;
    plVar3 = &this->_padding_;
    if (*(longlong **)&this->BeginUpdateFunction != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->BeginUpdateFunction;
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2);
  }
  return;
}

// EndUpdate @ 14969dd00

void __thiscall UGizmoLambdaStateTarget::EndUpdate(UGizmoLambdaStateTarget *this)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pvVar1 = *(void **)&(this->BeginUpdateFunction).field_0x8;
  if (pvVar1 != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(pvVar1);
    pcVar2 = *(code **)&(this->BeginUpdateFunction).field_0x8;
    plVar4 = (longlong *)&(this->BeginUpdateFunction).field_0x18;
    if (*(longlong **)&this->EndUpdateFunction != (longlong *)0x0) {
      plVar4 = *(longlong **)&this->EndUpdateFunction;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3);
  }
  return;
}

// GetPrivateStaticClass @ 1496a5ac0

UClass * __cdecl UGizmoLambdaStateTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoLambdaStateTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoLambdaStateTarget",
               &Z_Registration_Info_UClass_UGizmoLambdaStateTarget.InnerSingleton,
               StaticRegisterNativesUGizmoLambdaStateTarget,0x90,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UGizmoLambdaStateTarget>,
               InternalVTableHelperCtorCaller<UGizmoLambdaStateTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoLambdaStateTarget.InnerSingleton;
}

// StaticRegisterNativesUGizmoLambdaStateTarget @ 1496c2a50

void __cdecl UGizmoLambdaStateTarget::StaticRegisterNativesUGizmoLambdaStateTarget(void)

{
  return;
}

// _getUObject @ 1496ca7f0

UObject * __thiscall UGizmoLambdaStateTarget::_getUObject(UGizmoLambdaStateTarget *this)

{
  return (UObject *)&this[-1].EndUpdateFunction.field_0x8;
}

