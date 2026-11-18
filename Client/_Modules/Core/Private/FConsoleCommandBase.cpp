// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// AsCommand @ 141629ce0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

IConsoleCommand * __thiscall FConsoleCommandBase::AsCommand(FConsoleCommandBase *this)

{
  return (IConsoleCommand *)this;
}

// GetFlags @ 141641f10

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

EConsoleVariableFlags __thiscall FConsoleCommandBase::GetFlags(FConsoleCommandBase *this)

{
  return this->Flags;
}

// GetHelp @ 141642950

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

wchar_t * __thiscall FConsoleCommandBase::GetHelp(FConsoleCommandBase *this)

{
  if ((this->Help).Data.ArrayNum != 0) {
    return (wchar_t *)(this->Help).Data.AllocatorInstance.Data;
  }
  return L"";
}

// SetFlags @ 14165d2a0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleCommandBase::SetFlags(FConsoleCommandBase *this,EConsoleVariableFlags param_1)

{
  this->Flags = param_1;
  if ((param_1 & (ECVF_ExcludeFromPreview|ECVF_Scalability)) == ECVF_Scalability) {
    this->Flags = param_1 | ECVF_Preview;
  }
  return;
}

// SetHelp @ 14165d780

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall FConsoleCommandBase::SetHelp(FConsoleCommandBase *this,wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (wchar_t *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                       ,0x1a4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*param_1 == L'\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("*InValue != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                       ,0x1a5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::FString::operator=(&this->Help,param_1);
  return;
}

