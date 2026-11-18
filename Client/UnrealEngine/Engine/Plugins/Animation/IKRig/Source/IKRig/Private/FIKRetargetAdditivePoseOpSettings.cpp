// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 4

// StaticStruct @ 14deffef0

UScriptStruct * __cdecl FIKRetargetAdditivePoseOpSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetAdditivePoseOpSettings,
                         (UObject *)pUVar1,L"IKRetargetAdditivePoseOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOpSettings.OuterSingleton;
}

// FIKRetargetAdditivePoseOpSettings @ 14df15ee0

FIKRetargetAdditivePoseOpSettings * __thiscall
FIKRetargetAdditivePoseOpSettings::FIKRetargetAdditivePoseOpSettings
          (FIKRetargetAdditivePoseOpSettings *this,FIKRetargetAdditivePoseOpSettings *param_1)

{
  UObjectBase *this_00;
  
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = 0;
  this_00 = (UObjectBase *)param_1->_padding_;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    this->_padding_ = (longlong)this_00;
  }
  this->_padding_ = (longlong)&___7FIKRetargetAdditivePoseOpSettings__6B_;
  this->PoseToApply = param_1->PoseToApply;
  this->Alpha = param_1->Alpha;
  return this;
}

// CopySettingsAtRuntime @ 14df2d620

void __thiscall
FIKRetargetAdditivePoseOpSettings::CopySettingsAtRuntime
          (FIKRetargetAdditivePoseOpSettings *this,FIKRetargetOpSettingsBase *param_1)

{
  UPackage *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FIKRetargetAdditivePoseOpSettings::CopySettingsAtRuntime'::__l2::
             _dynamic_atexit_destructor_for__PropertiesToIgnore__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetAdditivePoseOpSettings,
                         (UObject *)pUVar1,L"IKRetargetAdditivePoseOpSettings");
  }
  FIKRetargetOpBase::CopyStructProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOpSettings.OuterSingleton,
             param_1,this,&PropertiesToIgnore);
  return;
}

// GetControllerType @ 14df37d50

UClass * __thiscall
FIKRetargetAdditivePoseOpSettings::GetControllerType(FIKRetargetAdditivePoseOpSettings *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetAdditivePoseController.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetAdditivePoseController",
               &Z_Registration_Info_UClass_UIKRetargetAdditivePoseController.InnerSingleton,
               UIKRetargetAdditivePoseController::
               StaticRegisterNativesUIKRetargetAdditivePoseController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetAdditivePoseController>,
               InternalVTableHelperCtorCaller<UIKRetargetAdditivePoseController>,aFStackX_8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetAdditivePoseController.InnerSingleton;
}

