// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// GetBool @ 14163eb00

bool __thiscall FConsoleVariableNameRef::GetBool(FConsoleVariableNameRef *this)

{
  undefined1 local_res10 [24];
  
  `FConsoleVariableNameRef::GetBool'::__l2::<lambda_1>::operator()(local_res10);
  return false;
}

// GetFloat @ 141642420

float __thiscall FConsoleVariableNameRef::GetFloat(FConsoleVariableNameRef *this)

{
  undefined1 local_res10 [24];
  
  `FConsoleVariableNameRef::GetFloat'::__l2::<lambda_1>::operator()(local_res10);
  return 0.0;
}

// GetInt @ 141642f20

int __thiscall FConsoleVariableNameRef::GetInt(FConsoleVariableNameRef *this)

{
  undefined1 local_res10 [24];
  
  `FConsoleVariableNameRef::GetInt'::__l2::<lambda_1>::operator()(local_res10);
  return 0;
}

// GetString @ 141646b60

FString * __thiscall
FConsoleVariableNameRef::GetString(FConsoleVariableNameRef *this,FString *__return_storage_ptr__)

{
  ::FName::ToString(&this->MainValue,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsVariableString @ 14164a680

bool __thiscall FConsoleVariableNameRef::IsVariableString(FConsoleVariableNameRef *this)

{
  return true;
}

// OnChanged @ 14164edc0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableNameRef::OnChanged
          (FConsoleVariableNameRef *this,EConsoleVariableFlags param_1,bool param_2)

{
  FName *pFVar1;
  IConsoleManager IVar2;
  code *pcVar3;
  longlong lVar4;
  IConsoleManager *pIVar5;
  bool bVar6;
  
  lVar4 = this->_padding_;
  pFVar1 = this->RefValue;
  if ((param_1 >> 0x11 & 1) == 0) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar5 = IConsoleManager::Singleton;
    bVar6 = IsInGameThread();
    if ((bVar6) || (bVar6 = IsReloadActive(), bVar6)) {
      if (((lVar4 & 0x20) == 0) || (IVar2 = pIVar5[0x20], IVar2 == (IConsoleManager)0x0)) {
        *pFVar1 = this->MainValue;
      }
      else {
        (*(code *)**(undefined8 **)IVar2)(IVar2,pFVar1,&this->MainValue);
      }
    }
    else {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0x1e6,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((param_1 >> 0x10 & 1) == 0) {
      *(undefined1 *)(pIVar5 + 0x3a) = 1;
    }
  }
  else {
    *pFVar1 = this->MainValue;
  }
  FConsoleVariableBase::OnChanged((FConsoleVariableBase *)this,param_1,param_2);
  return;
}

// Release @ 141656840

void __thiscall FConsoleVariableNameRef::Release(FConsoleVariableNameRef *this)

{
  if (this != (FConsoleVariableNameRef *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014165684d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)this->_padding_)(this,1);
    return;
  }
  return;
}

// Set @ 14165cbd0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableNameRef::Set
          (FConsoleVariableNameRef *this,wchar_t *param_1,FResolvedContext *param_2)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res18 [2];
  
  FConsoleVariableExtendedData<FString>::TrackHistory
            ((FConsoleVariableExtendedData<FString> *)this,param_1,param_2->Flags,param_2->Tag);
  bVar1 = FConsoleVariableBase::CanChange((FConsoleVariableBase *)this,param_2->Flags);
  if (bVar1) {
    pFVar2 = ::FName::FName(local_res18,param_1);
    this->MainValue = *pFVar2;
    (**(code **)(this->_padding_ + 0x128))(this,param_2->Flags,0);
  }
  return;
}

// SetInternal @ 14165da00

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableNameRef::SetInternal
          (FConsoleVariableNameRef *this,FString *param_1,EConsoleVariableFlags param_2)

{
  int iVar1;
  FName *pFVar2;
  int iVar3;
  FName local_res8 [4];
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  pFVar2 = ::FName::FName(local_res8,iVar3,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          FNAME_Add);
  this->MainValue = *pFVar2;
  return;
}

// operator() @ 1504793b0

bool __thiscall `FConsoleVariableNameRef::GetBool'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2189577819309213451>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2189577819309213451>,
                       &`public:___cdecl_`public:_virtual_bool___cdecl_FConsoleVariableNameRef::GetBool(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504793f0

bool __thiscall `FConsoleVariableNameRef::GetFloat'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2189577819309213461>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2189577819309213461>,
                       &`public:___cdecl_`public:_virtual_float___cdecl_FConsoleVariableNameRef::GetFloat(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150479430

bool __thiscall `FConsoleVariableNameRef::GetInt'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2189577819309213456>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2189577819309213456>,
                       &`public:___cdecl_`public:_virtual_int___cdecl_FConsoleVariableNameRef::GetInt(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

