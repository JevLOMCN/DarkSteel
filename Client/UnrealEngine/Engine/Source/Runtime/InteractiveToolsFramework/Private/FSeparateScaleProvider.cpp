// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 3

// <lambda_invoker_cdecl> @ 149673310

TVector<double> * __cdecl
FSeparateScaleProvider::<lambda_25_>::<lambda_invoker_cdecl>
          (TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 149673340

void __cdecl FSeparateScaleProvider::<lambda_26_>::<lambda_invoker_cdecl>(TVector<double> *param_1)

{
  return;
}

// FSeparateScaleProvider @ 149683110

FSeparateScaleProvider * __thiscall
FSeparateScaleProvider::FSeparateScaleProvider(FSeparateScaleProvider *this)

{
  undefined1 *puVar1;
  
  *(undefined8 *)&this->GetScale = 0;
  *(undefined8 *)&(this->GetScale).field_0x28 = 0;
  *(undefined ***)&(this->GetScale).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_N_Math_UE__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GetScale).field_0x18;
  *(code **)puVar1 = <lambda_25_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetScale =
         UE::Core::Private::Function::
         TFunctionRefCaller<UE::Math::TVector<double>_(__cdecl*)(void),UE::Math::TVector<double>_>::
         Call;
  }
  *(undefined8 *)&this->SetScale = 0;
  *(undefined8 *)&(this->SetScale).field_0x28 = 0;
  *(undefined ***)&(this->SetScale).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6AXU__TVector_N_Math_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->SetScale).field_0x18;
  *(code **)puVar1 = <lambda_26_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->SetScale =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(UE::Math::TVector<double>),void,UE::Math::TVector<double>_>
         ::Call;
  }
  return this;
}

