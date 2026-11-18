// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Serialize @ 147bfee00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FConsoleOutputDevice::Serialize
          (FConsoleOutputDevice *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  UConsole *pUVar1;
  code *pcVar2;
  bool bVar3;
  size_t sVar4;
  FOutputDeviceRedirector *this_00;
  IConsoleManager *pIVar5;
  longlong *plVar6;
  TConsoleVariableData<int> *pTVar7;
  FString local_38;
  FString local_28;
  FString local_18;
  
  sVar4 = wcslen(param_1);
  ::FString::AppendChars((FString *)&this->_padding_,param_1,(int)sVar4);
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    ::FString::FString(&local_38,L"\r\n");
    (**(code **)(this->_padding_ + 0x58))(this,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  ::FString::AppendChars((FString *)&this->_padding_,L"\n",1);
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    ::FString::FString(&local_28,L"\r\n");
    (**(code **)(this->_padding_ + 0x58))(this,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  this_00 = GetGlobalLogSingleton();
  FOutputDeviceRedirector::Serialize(this_00,param_1,param_2,param_3);
  if (this->Console != (UConsole *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar5 = IConsoleManager::Get();
      plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"con.MinLogVerbosity",1);
      pTVar7 = (TConsoleVariableData<int> *)0x0;
      if (plVar6 != (longlong *)0x0) {
        pTVar7 = (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
      }
      ::CVar = pTVar7;
      _Init_thread_footer(&::_TSS0);
    }
    pTVar7 = ::CVar;
    if (::CVar != (TConsoleVariableData<int> *)0x0) {
      bVar3 = IsInActualRenderingThread();
      if ((bVar3) &&
         (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007977>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6e9,"!IsInActualRenderingThread()"), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((int)(uint)param_2 <= pTVar7->ShadowedValue[0]) {
        return;
      }
    }
    pUVar1 = this->Console;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x2d0);
    ::FString::FString(&local_18,param_1);
    (*pcVar2)(pUVar1,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

