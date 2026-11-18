// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 10

// ~TFunction_OwnedObject<void_(__cdecl*)(USingleCameraDirector_*,UE::Cameras::Test::FNamedObjectRegistry_*),0,0> @ 14d657cd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(USingleCameraDirector_*,UE::Cameras::Test::FNamedObjectRegistry_*),0,0>
::
~TFunction_OwnedObject<void_(__cdecl*)(USingleCameraDirector_*,UE::Cameras::Test::FNamedObjectRegistry_*),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(USingleCameraDirector_*,UE::Cameras::Test::FNamedObjectRegistry_*),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXPEAVUSingleCameraDirector__PEAVFNamedObjectRegistry_Test_Cameras_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14d65d4b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(USingleCameraDirector_*,UE::Cameras::Test::FNamedObjectRegistry_*),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(USingleCameraDirector_*,UE::Cameras::Test::FNamedObjectRegistry_*),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXPEAVUSingleCameraDirector__PEAVFNamedObjectRegistry_Test_Cameras_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_USingleCameraDirector_ptr_FNamedObjectRegistry_ptr **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d65d4d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d65d4f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14d65e2b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(USingleCameraDirector_*,UE::Cameras::Test::FNamedObjectRegistry_*),0,0>
::Destroy(TFunction_OwnedObject<void_(__cdecl*)(USingleCameraDirector_*,UE::Cameras::Test::FNamedObjectRegistry_*),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d65e2b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14d65e2c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d65e2c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d65e2d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d65e2d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14d65f9e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(USingleCameraDirector_*,UE::Cameras::Test::FNamedObjectRegistry_*),0,0>
::GetAddress(TFunction_OwnedObject<void_(__cdecl*)(USingleCameraDirector_*,UE::Cameras::Test::FNamedObjectRegistry_*),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14d65f9f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d65fa00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

