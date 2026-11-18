// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 15

// ~TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_Dummy_*_(__cdecl*)(void),0,0> @ 148d00f70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_Dummy_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_Dummy_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_Dummy_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderH264_Dummy_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_WindowsImpl_*_(__cdecl*)(void),0,0> @ 148d00f90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_WindowsImpl_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_WindowsImpl_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_WindowsImpl_*_(__cdecl*)(void),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderH264_WindowsImpl_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<AVEncoder::FVideoDecoderMPEG4_Impl_*_(__cdecl*)(void),0,0> @ 148d00fb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<AVEncoder::FVideoDecoderMPEG4_Impl_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<AVEncoder::FVideoDecoderMPEG4_Impl_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<AVEncoder::FVideoDecoderMPEG4_Impl_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderMPEG4_Impl_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 148d042b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_Dummy_*_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_Dummy_*_(__cdecl*)(void),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderH264_Dummy_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FVideoDecoderH264_Dummy_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148d042d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_WindowsImpl_*_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_WindowsImpl_*_(__cdecl*)(void),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderH264_WindowsImpl_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FVideoDecoderH264_WindowsImpl_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148d042f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<AVEncoder::FVideoDecoderMPEG4_Impl_*_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<AVEncoder::FVideoDecoderMPEG4_Impl_*_(__cdecl*)(void),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderMPEG4_Impl_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FVideoDecoderMPEG4_Impl_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148d04310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AVEncoder::FVideoDecoderH264_WindowsImpl::CreateWorkerThread'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 148d095e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_Dummy_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_Dummy_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148d095e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 148d095f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_WindowsImpl_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_WindowsImpl_*_(__cdecl*)(void),0,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148d095f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 148d09600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<AVEncoder::FVideoDecoderMPEG4_Impl_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<AVEncoder::FVideoDecoderMPEG4_Impl_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148d09605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 148d09610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AVEncoder::FVideoDecoderH264_WindowsImpl::CreateWorkerThread'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148d09615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 148d0acd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_Dummy_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_Dummy_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 148d0ace0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_WindowsImpl_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<AVEncoder::FVideoDecoderH264_WindowsImpl_*_(__cdecl*)(void),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 148d0acf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<AVEncoder::FVideoDecoderMPEG4_Impl_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<AVEncoder::FVideoDecoderMPEG4_Impl_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 148d0ad00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AVEncoder::FVideoDecoderH264_WindowsImpl::CreateWorkerThread'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

