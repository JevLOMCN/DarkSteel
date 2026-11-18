// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// AllocateInputData_External @ 1436f8a90

FSimCallbackInput * __thiscall
Chaos::FSimCallbackCommandObject::AllocateInputData_External(FSimCallbackCommandObject *this)

{
  code *pcVar1;
  bool bVar2;
  FSimCallbackInput *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                     ,0x1df,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSimCallbackInput *)(*pcVar1)();
    return pFVar3;
  }
  return (FSimCallbackInput *)0x0;
}

// FreeInputData_Internal @ 1436ff440

void __thiscall
Chaos::FSimCallbackCommandObject::FreeInputData_Internal
          (FSimCallbackCommandObject *this,FSimCallbackInput *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                     ,0x1e6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// FreeOutputData_External @ 1436ff480

void __thiscall
Chaos::FSimCallbackCommandObject::FreeOutputData_External
          (FSimCallbackCommandObject *this,FSimCallbackOutput *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                     ,0x1c2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetFNameForStatId @ 1436ff870

FName __thiscall
Chaos::FSimCallbackCommandObject::GetFNameForStatId(FSimCallbackCommandObject *this)

{
  FName in_RDX;
  
  FLazyName::Resolve(&`public:_virtual_class_FName___cdecl_Chaos::FSimCallbackCommandObject::GetFNameForStatId(void)const___ptr64'
                      ::__l2::StaticName);
  return in_RDX;
}

// OnPreSimulate_Internal @ 1437029f0

void __thiscall
Chaos::FSimCallbackCommandObject::OnPreSimulate_Internal(FSimCallbackCommandObject *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 local_res8;
  undefined8 local_res10;
  
  if (this->bFuncHasTimeParameters == false) {
    if ((*(longlong *)&this->Func == 0) &&
       (bVar2 = `Chaos::FSimCallbackCommandObject::OnPreSimulate_Internal'::__l6::<lambda_1>::
                operator()(&local_res8), !bVar2)) {
      return;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&this->Func);
    plVar1 = *(longlong **)&(this->Func).field_0x28;
    UNRECOVERED_JUMPTABLE = *(code **)&this->Func;
    plVar4 = (longlong *)&(this->Func).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143702a51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar3);
    return;
  }
  if ((*(longlong *)&this->Func2 == 0) &&
     (bVar2 = `Chaos::FSimCallbackCommandObject::OnPreSimulate_Internal'::__l11::<lambda_2>::
              operator()(&local_res8), !bVar2)) {
    return;
  }
  local_res8 = *(undefined8 *)&this->field_0x30;
  local_res10 = *(undefined8 *)&this->field_0x38;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Func2);
  UNRECOVERED_JUMPTABLE = *(code **)&this->Func2;
  plVar1 = *(longlong **)&(this->Func2).field_0x28;
  plVar4 = (longlong *)&(this->Func2).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*UNRECOVERED_JUMPTABLE)(uVar3,&local_res10,&local_res8);
  return;
}

// operator() @ 1504a1730

bool __thiscall
`Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8052828509065707955>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8052828509065707955>,
                       &`public:___cdecl_`public:___cdecl_Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject(TUniqueFunction<void___cdecl(void)>&&___ptr64,int)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a1c70

bool __thiscall
`Chaos::FSimCallbackCommandObject::OnPreSimulate_Internal'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8052828509065708013>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8052828509065708013>,
                       &`public:___cdecl_`private:_virtual_void___cdecl_Chaos::FSimCallbackCommandObject::OnPreSimulate_Internal(void)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a1d70

bool __thiscall
`Chaos::FSimCallbackCommandObject::OnPreSimulate_Internal'::__l11::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8052828509065708020>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8052828509065708020>,
                       &`public:___cdecl_`private:_virtual_void___cdecl_Chaos::FSimCallbackCommandObject::OnPreSimulate_Internal(void)___ptr64'::`11'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

