// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 9

// CloneToEmptyStorage @ 14eb0c740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<```UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  ```UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l2::<lambda_2>::operator()'
  ::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::<lambda_1>
            (puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14eb0c7a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  ``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::__l2::
  <lambda_1>::operator()'::__l2::<lambda_1>::<lambda_1>
            (puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14eb0c800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes'::__l7::<lambda_1>,1,1>
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

// Destroy @ 14eb136e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14eb13710

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14eb13740

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes'::__l7::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14eb150f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14eb15100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14eb15110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes'::__l7::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

