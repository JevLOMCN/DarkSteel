// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~FWaitForProcessToCompleteLatentCommand @ 14887eda0

void __thiscall
FWaitForProcessToCompleteLatentCommand::~FWaitForProcessToCompleteLatentCommand
          (FWaitForProcessToCompleteLatentCommand *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7IAutomationLatentCommand__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014887edca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Update @ 14889e4b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWaitForProcessToCompleteLatentCommand::Update(FWaitForProcessToCompleteLatentCommand *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_res8 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  if ((this->ProcessInfo).ProcessHandle == (FProcHandle)0x0) {
    return true;
  }
  FWindowsPlatformProcess::ReadPipe(&local_28,(this->ProcessInfo).ReadPipe);
  uVar6 = 0;
  iVar5 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  if (0 < iVar5) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_28,&local_38,L"\n",false);
    iVar5 = local_38.ArrayNum;
    if (0 < local_38.ArrayNum) {
      do {
        if (4 < (byte)LogBaseAutomationTests._0_1_) {
          uVar4 = 0;
          if ((int)uVar6 < iVar5) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogBaseAutomationTests);
          iVar5 = local_38.ArrayNum;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar5);
    }
    DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,iVar5);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  bVar2 = FWindowsPlatformProcess::IsProcRunning(&(this->ProcessInfo).ProcessHandle);
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return false;
  }
  FWindowsPlatformProcess::ClosePipe((this->ProcessInfo).ReadPipe,(this->ProcessInfo).WritePipe);
  (this->ProcessInfo).ReadPipe = (void *)0x0;
  (this->ProcessInfo).WritePipe = (void *)0x0;
  bVar2 = FWindowsPlatformProcess::GetProcReturnCode(&(this->ProcessInfo).ProcessHandle,local_res8);
  if (bVar2) {
    if (local_res8[0] == 0) goto LAB_14889e667;
  }
  else {
    local_res8[0] = -1;
  }
  if (1 < (byte)LogBaseAutomationTests._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBaseAutomationTests);
  }
LAB_14889e667:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return true;
}

