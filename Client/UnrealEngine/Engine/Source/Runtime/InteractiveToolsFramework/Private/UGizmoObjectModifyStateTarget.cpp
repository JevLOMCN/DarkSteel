// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 9

// StaticClass @ 1496706c0

UClass * __cdecl UGizmoObjectModifyStateTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoObjectModifyStateTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoObjectModifyStateTarget",
               &Z_Registration_Info_UClass_UGizmoObjectModifyStateTarget.InnerSingleton,
               StaticRegisterNativesUGizmoObjectModifyStateTarget,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoObjectModifyStateTarget>,
               InternalVTableHelperCtorCaller<UGizmoObjectModifyStateTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoObjectModifyStateTarget.InnerSingleton;
}

// UGizmoObjectModifyStateTarget @ 149685a30

UGizmoObjectModifyStateTarget * __thiscall
UGizmoObjectModifyStateTarget::UGizmoObjectModifyStateTarget
          (UGizmoObjectModifyStateTarget *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ModifyObject).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&_vftable__for__IGizmoStateTarget__;
  FText::FText(&this->TransactionDescription);
  *(undefined8 *)&this->TransactionManager = 0;
  *(undefined8 *)&(this->TransactionManager).field_0x8 = 0;
  return this;
}

// UGizmoObjectModifyStateTarget @ 149685a90

UGizmoObjectModifyStateTarget * __thiscall
UGizmoObjectModifyStateTarget::UGizmoObjectModifyStateTarget
          (UGizmoObjectModifyStateTarget *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ModifyObject).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&_vftable__for__IGizmoStateTarget__;
  FText::FText(&this->TransactionDescription);
  *(undefined8 *)&this->TransactionManager = 0;
  *(undefined8 *)&(this->TransactionManager).field_0x8 = 0;
  return this;
}

// ~UGizmoObjectModifyStateTarget @ 149689f40

void __thiscall
UGizmoObjectModifyStateTarget::~UGizmoObjectModifyStateTarget(UGizmoObjectModifyStateTarget *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoStateTarget__;
  pIVar1 = (this->TransactionDescription).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IGizmoStateTarget__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginUpdate @ 1496935f0

void __thiscall UGizmoObjectModifyStateTarget::BeginUpdate(UGizmoObjectModifyStateTarget *this)

{
  bool bVar1;
  
  if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
    (**(code **)(*(longlong *)this->_padding_ + 0x10))((longlong *)this->_padding_,&this->_padding_)
    ;
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    return;
  }
  return;
}

// EndUpdate @ 14969dd60

void __thiscall UGizmoObjectModifyStateTarget::EndUpdate(UGizmoObjectModifyStateTarget *this)

{
  if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014969dd75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x18))();
    return;
  }
  return;
}

// GetPrivateStaticClass @ 1496a5da0

UClass * __cdecl UGizmoObjectModifyStateTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoObjectModifyStateTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoObjectModifyStateTarget",
               &Z_Registration_Info_UClass_UGizmoObjectModifyStateTarget.InnerSingleton,
               StaticRegisterNativesUGizmoObjectModifyStateTarget,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoObjectModifyStateTarget>,
               InternalVTableHelperCtorCaller<UGizmoObjectModifyStateTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoObjectModifyStateTarget.InnerSingleton;
}

// StaticRegisterNativesUGizmoObjectModifyStateTarget @ 1496c2a90

void __cdecl UGizmoObjectModifyStateTarget::StaticRegisterNativesUGizmoObjectModifyStateTarget(void)

{
  return;
}

// _getUObject @ 1496ca810

UObject * __thiscall UGizmoObjectModifyStateTarget::_getUObject(UGizmoObjectModifyStateTarget *this)

{
  return (UObject *)&this[-1].ModifyObject;
}

