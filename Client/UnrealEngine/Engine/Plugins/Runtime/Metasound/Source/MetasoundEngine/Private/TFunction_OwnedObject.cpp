// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 42

// ~TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),1,0> @ 14b34e8c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),1,0>::
~TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),1,0>
          (TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),1,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXV__TSharedPtr_UFParameterInterface_Audio___00___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),0,0> @ 14b34e8e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXV__TSharedPtr_UFParameterInterface_Audio___00___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(FName,FName),0,0> @ 14b34e900

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(FName,FName),0,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(FName,FName),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(FName,FName),0,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_NVFName__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14b368a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),1,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),1,0>
                    *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14b368a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXV__TSharedPtr_UFParameterInterface_Audio___00___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_TSharedPtr<Audio::FParameterInterface,1> **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14b368ab0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(FName,FName),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<bool_(__cdecl*)(FName,FName),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6A_NVFName__0_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_bool_FName_FName **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14b368ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorGraphSet'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 14b368b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorVertexInterfaceChanged'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14b368b50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorCreated'::__l5::<lambda_1>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14b368b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorDestroyed'::__l5::<lambda_1>_>'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 14b368bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleOutputChanged'::__l29::<lambda_1>_>'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 14b368c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`UMetaSoundSource::InitResources'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 14b368c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UMetaSoundAssetSubsystem::PostInitAssetScanInternal'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<``UMetaSoundAssetSubsystem::PostInitAssetScanInternal'::`8'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b368cb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Metasound::Engine::FMetaSoundAssetManager::RegisterAssetClassesInDirectories'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<``Metasound::Engine::FMetaSoundAssetManager::RegisterAssetClassesInDirectories'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b368d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UMetaSoundSourceBuilder::OnInputAdded'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 14b368d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UMetaSoundSourceBuilder::OnRemovingInput'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>,1,0>
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

// Destroy @ 14b3980e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),1,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),1,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b3980e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14b3980f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),0,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b3980f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14b398100

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(FName,FName),0,0>::Destroy
          (TFunction_OwnedObject<bool_(__cdecl*)(FName,FName),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b398105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14b398110

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorGraphSet'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b398115. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14b398120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorVertexInterfaceChanged'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b398150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorCreated'::__l5::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b398180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorDestroyed'::__l5::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b398185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14b398190

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleOutputChanged'::__l29::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b398195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14b3981a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`UMetaSoundSource::InitResources'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b3981a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14b3981b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UMetaSoundAssetSubsystem::PostInitAssetScanInternal'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b3981e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Metasound::Engine::FMetaSoundAssetManager::RegisterAssetClassesInDirectories'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b398210

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UMetaSoundSourceBuilder::OnInputAdded'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b398215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14b398220

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UMetaSoundSourceBuilder::OnRemovingInput'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b398225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14b3abe30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),1,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),1,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 14b3abe40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 14b3abe50

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(FName,FName),0,0>::GetAddress
          (TFunction_OwnedObject<bool_(__cdecl*)(FName,FName),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14b3abe60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorGraphSet'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b3abe70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorVertexInterfaceChanged'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b3abe80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorCreated'::__l5::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b3abe90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorDestroyed'::__l5::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b3abea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleOutputChanged'::__l29::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b3abeb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`UMetaSoundSource::InitResources'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b3abec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UMetaSoundAssetSubsystem::PostInitAssetScanInternal'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b3abed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Metasound::Engine::FMetaSoundAssetManager::RegisterAssetClassesInDirectories'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b3abee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UMetaSoundSourceBuilder::OnInputAdded'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b3abef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UMetaSoundSourceBuilder::OnRemovingInput'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

