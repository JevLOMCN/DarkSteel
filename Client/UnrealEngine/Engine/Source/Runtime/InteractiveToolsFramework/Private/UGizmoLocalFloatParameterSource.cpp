// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 10

// StaticClass @ 14966f770

UClass * __cdecl UGizmoLocalFloatParameterSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoLocalFloatParameterSource",
               &Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoLocalFloatParameterSource,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoLocalFloatParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoLocalFloatParameterSource>,local_res8,
               UGizmoBaseFloatParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource.InnerSingleton;
}

// UGizmoLocalFloatParameterSource @ 149685910

UGizmoLocalFloatParameterSource * __thiscall
UGizmoLocalFloatParameterSource::UGizmoLocalFloatParameterSource
          (UGizmoLocalFloatParameterSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Value = 0.0;
  (this->LastChange).InitialValue = 0.0;
  (this->LastChange).CurrentValue = 0.0;
  return this;
}

// UGizmoLocalFloatParameterSource @ 149685960

UGizmoLocalFloatParameterSource * __thiscall
UGizmoLocalFloatParameterSource::UGizmoLocalFloatParameterSource
          (UGizmoLocalFloatParameterSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Value = 0.0;
  (this->LastChange).InitialValue = 0.0;
  (this->LastChange).CurrentValue = 0.0;
  return this;
}

// ~UGizmoLocalFloatParameterSource @ 149689f00

void __thiscall
UGizmoLocalFloatParameterSource::~UGizmoLocalFloatParameterSource
          (UGizmoLocalFloatParameterSource *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
  UGizmoBaseFloatParameterSource::~UGizmoBaseFloatParameterSource
            ((UGizmoBaseFloatParameterSource *)this);
  return;
}

// BeginModify @ 149693110

void __thiscall UGizmoLocalFloatParameterSource::BeginModify(UGizmoLocalFloatParameterSource *this)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar1;
  *(undefined4 *)&this->_padding_ = uVar1;
  return;
}

// EndModify @ 14969dc80

void __thiscall UGizmoLocalFloatParameterSource::EndModify(UGizmoLocalFloatParameterSource *this)

{
  return;
}

// GetParameter @ 1496a3b50

float __thiscall
UGizmoLocalFloatParameterSource::GetParameter(UGizmoLocalFloatParameterSource *this)

{
  return *(float *)&this->_padding_;
}

// GetPrivateStaticClass @ 1496a5c30

UClass * __cdecl UGizmoLocalFloatParameterSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoLocalFloatParameterSource",
               &Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoLocalFloatParameterSource,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoLocalFloatParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoLocalFloatParameterSource>,local_res8,
               UGizmoBaseFloatParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource.InnerSingleton;
}

// SetParameter @ 1496be730

void __thiscall
UGizmoLocalFloatParameterSource::SetParameter(UGizmoLocalFloatParameterSource *this,float param_1)

{
  FGizmoFloatParameterChange FVar1;
  UGizmoLocalFloatParameterSource *pUVar2;
  
  *(float *)&this->_padding_ = param_1;
  *(float *)&this->_padding_ = param_1;
  pUVar2 = this;
  if (this == (UGizmoLocalFloatParameterSource *)&DAT_00000028) {
    pUVar2 = (UGizmoLocalFloatParameterSource *)0x0;
  }
  FVar1.CurrentValue = param_1;
  FVar1.InitialValue = *(float *)((longlong)&this->_padding_ + 4);
  TMulticastDelegate<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
               *)&this->_padding_,(IGizmoFloatParameterSource *)pUVar2,FVar1);
  return;
}

// StaticRegisterNativesUGizmoLocalFloatParameterSource @ 1496c2a70

void __cdecl
UGizmoLocalFloatParameterSource::StaticRegisterNativesUGizmoLocalFloatParameterSource(void)

{
  return;
}

