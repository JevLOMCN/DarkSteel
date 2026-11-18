// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 12

// StaticClass @ 149670970

UClass * __cdecl UGizmoLambdaHitTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoLambdaHitTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoLambdaHitTarget",
               &Z_Registration_Info_UClass_UGizmoLambdaHitTarget.InnerSingleton,
               StaticRegisterNativesUGizmoLambdaHitTarget,0x120,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGizmoLambdaHitTarget>,
               InternalVTableHelperCtorCaller<UGizmoLambdaHitTarget>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoLambdaHitTarget.InnerSingleton;
}

// UGizmoLambdaHitTarget @ 1496855d0

UGizmoLambdaHitTarget * __thiscall
UGizmoLambdaHitTarget::UGizmoLambdaHitTarget(UGizmoLambdaHitTarget *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoClickTarget__;
  *(undefined8 *)&this->IsHitFunction = 0;
  *(undefined8 *)&(this->IsHitFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateHoverFunction = 0;
  *(undefined8 *)&(this->UpdateHoverFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateInteractingFunction = 0;
  *(undefined8 *)&(this->UpdateInteractingFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateSelectedFunction = 0;
  *(undefined8 *)&(this->UpdateSelectedFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateSubdueFunction = 0;
  *(undefined8 *)&(this->UpdateSubdueFunction).field_0x28 = 0;
  return this;
}

// UGizmoLambdaHitTarget @ 149685650

UGizmoLambdaHitTarget * __thiscall
UGizmoLambdaHitTarget::UGizmoLambdaHitTarget
          (UGizmoLambdaHitTarget *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoClickTarget__;
  *(undefined8 *)&this->IsHitFunction = 0;
  *(undefined8 *)&(this->IsHitFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateHoverFunction = 0;
  *(undefined8 *)&(this->UpdateHoverFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateInteractingFunction = 0;
  *(undefined8 *)&(this->UpdateInteractingFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateSelectedFunction = 0;
  *(undefined8 *)&(this->UpdateSelectedFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateSubdueFunction = 0;
  *(undefined8 *)&(this->UpdateSubdueFunction).field_0x28 = 0;
  return this;
}

// ~UGizmoLambdaHitTarget @ 149689d30

void __thiscall UGizmoLambdaHitTarget::~UGizmoLambdaHitTarget(UGizmoLambdaHitTarget *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoClickTarget__;
  if (*(longlong *)&this->UpdateSubdueFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateSubdueFunction).field_0x28;
    plVar2 = (longlong *)&(this->UpdateSubdueFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->UpdateSelectedFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateSelectedFunction).field_0x28;
    plVar2 = (longlong *)&(this->UpdateSelectedFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->UpdateInteractingFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateInteractingFunction).field_0x28;
    plVar2 = (longlong *)&(this->UpdateInteractingFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->UpdateHoverFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateHoverFunction).field_0x28;
    plVar2 = (longlong *)&(this->UpdateHoverFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->IsHitFunction != 0) {
    plVar1 = *(longlong **)&(this->IsHitFunction).field_0x28;
    plVar2 = (longlong *)&(this->IsHitFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IGizmoClickTarget__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1496a5a10

UClass * __cdecl UGizmoLambdaHitTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoLambdaHitTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoLambdaHitTarget",
               &Z_Registration_Info_UClass_UGizmoLambdaHitTarget.InnerSingleton,
               StaticRegisterNativesUGizmoLambdaHitTarget,0x120,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGizmoLambdaHitTarget>,
               InternalVTableHelperCtorCaller<UGizmoLambdaHitTarget>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoLambdaHitTarget.InnerSingleton;
}

// IsHit @ 1496aded0

FInputRayHit * __thiscall
UGizmoLambdaHitTarget::IsHit
          (UGizmoLambdaHitTarget *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1
          )

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((void *)this->_padding_ != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
    pcVar1 = (code *)this->_padding_;
    plVar3 = &this->_padding_;
    if (*(longlong **)&this->IsHitFunction != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->IsHitFunction;
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(__return_storage_ptr__,uVar2,param_1);
    return __return_storage_ptr__;
  }
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUGizmoLambdaHitTarget @ 1496c2a40

void __cdecl UGizmoLambdaHitTarget::StaticRegisterNativesUGizmoLambdaHitTarget(void)

{
  return;
}

// UpdateHoverState @ 1496c40f0

void __thiscall UGizmoLambdaHitTarget::UpdateHoverState(UGizmoLambdaHitTarget *this,bool param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  pvVar1 = *(void **)&(this->IsHitFunction).field_0x8;
  if (pvVar1 != (void *)0x0) {
    local_res8[0] = param_1;
    UE::Core::Private::Function::CheckCallable(pvVar1);
    pcVar2 = *(code **)&(this->IsHitFunction).field_0x8;
    plVar4 = (longlong *)&(this->IsHitFunction).field_0x18;
    if (*(longlong **)&this->UpdateHoverFunction != (longlong *)0x0) {
      plVar4 = *(longlong **)&this->UpdateHoverFunction;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,local_res8);
  }
  return;
}

// UpdateInteractingState @ 1496c4280

void __thiscall
UGizmoLambdaHitTarget::UpdateInteractingState(UGizmoLambdaHitTarget *this,bool param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  pvVar1 = *(void **)&(this->UpdateHoverFunction).field_0x8;
  if (pvVar1 != (void *)0x0) {
    local_res8[0] = param_1;
    UE::Core::Private::Function::CheckCallable(pvVar1);
    pcVar2 = *(code **)&(this->UpdateHoverFunction).field_0x8;
    plVar4 = (longlong *)&(this->UpdateHoverFunction).field_0x18;
    if (*(longlong **)&this->UpdateInteractingFunction != (longlong *)0x0) {
      plVar4 = *(longlong **)&this->UpdateInteractingFunction;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,local_res8);
  }
  return;
}

// UpdateSelectedState @ 1496c5570

void __thiscall UGizmoLambdaHitTarget::UpdateSelectedState(UGizmoLambdaHitTarget *this,bool param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  pvVar1 = *(void **)&(this->UpdateInteractingFunction).field_0x8;
  if (pvVar1 != (void *)0x0) {
    local_res8[0] = param_1;
    UE::Core::Private::Function::CheckCallable(pvVar1);
    pcVar2 = *(code **)&(this->UpdateInteractingFunction).field_0x8;
    plVar4 = (longlong *)&(this->UpdateInteractingFunction).field_0x18;
    if (*(longlong **)&this->UpdateSelectedFunction != (longlong *)0x0) {
      plVar4 = *(longlong **)&this->UpdateSelectedFunction;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,local_res8);
  }
  return;
}

// UpdateSubdueState @ 1496c5ad0

void __thiscall UGizmoLambdaHitTarget::UpdateSubdueState(UGizmoLambdaHitTarget *this,bool param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  pvVar1 = *(void **)&(this->UpdateSelectedFunction).field_0x8;
  if (pvVar1 != (void *)0x0) {
    local_res8[0] = param_1;
    UE::Core::Private::Function::CheckCallable(pvVar1);
    pcVar2 = *(code **)&(this->UpdateSelectedFunction).field_0x8;
    plVar4 = (longlong *)&(this->UpdateSelectedFunction).field_0x18;
    if (*(longlong **)&this->UpdateSubdueFunction != (longlong *)0x0) {
      plVar4 = *(longlong **)&this->UpdateSubdueFunction;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,local_res8);
  }
  return;
}

// _getUObject @ 1496ca7e0

UObject * __thiscall UGizmoLambdaHitTarget::_getUObject(UGizmoLambdaHitTarget *this)

{
  return (UObject *)&this[-1].UpdateSubdueFunction.field_0x8;
}

