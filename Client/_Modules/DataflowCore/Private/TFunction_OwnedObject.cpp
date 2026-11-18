// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 16

// ~TFunction_OwnedObject<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_(__cdecl*)(UE::Dataflow::FNewNodeParameters_const_&),0,0> @ 144432d70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_(__cdecl*)(UE::Dataflow::FNewNodeParameters_const_&),0,0>
::
~TFunction_OwnedObject<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_(__cdecl*)(UE::Dataflow::FNewNodeParameters_const_&),0,0>
          (TFunction_OwnedObject<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_(__cdecl*)(UE::Dataflow::FNewNodeParameters_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_UFDataflowNode__U__TDefaultDelete_UFDataflowNode______AEBUFNewNodeParameters_Dataflow_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14443bc00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_(__cdecl*)(UE::Dataflow::FNewNodeParameters_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_(__cdecl*)(UE::Dataflow::FNewNodeParameters_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_UFDataflowNode__U__TDefaultDelete_UFDataflowNode______AEBUFNewNodeParameters_Dataflow_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_FNewNodeParameters_ptr **
   )(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14443bc20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14443bc60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14443bca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Dataflow::FContextEvaluator::ScheduleTask'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14443bce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Dataflow::FContextEvaluator::ScheduleTask'::__l5::<lambda_2>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// Destroy @ 144444800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_(__cdecl*)(UE::Dataflow::FNewNodeParameters_const_&),0,0>
::Destroy(TFunction_OwnedObject<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_(__cdecl*)(UE::Dataflow::FNewNodeParameters_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144444805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 144444810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144444815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144444820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144444850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Dataflow::FContextEvaluator::ScheduleTask'::__l5::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144444880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Dataflow::FContextEvaluator::ScheduleTask'::__l5::<lambda_2>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14444a3d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_(__cdecl*)(UE::Dataflow::FNewNodeParameters_const_&),0,0>
::GetAddress(TFunction_OwnedObject<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_(__cdecl*)(UE::Dataflow::FNewNodeParameters_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14444a3e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14444a3f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14444a400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Dataflow::FContextEvaluator::ScheduleTask'::__l5::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14444a410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Dataflow::FContextEvaluator::ScheduleTask'::__l5::<lambda_2>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

