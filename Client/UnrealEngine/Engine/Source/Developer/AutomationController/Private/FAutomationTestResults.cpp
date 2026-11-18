// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 2

// FAutomationTestResults @ 148c537f0

FAutomationTestResults * __thiscall
FAutomationTestResults::FAutomationTestResults
          (FAutomationTestResults *this,FAutomationTestResults *param_1)

{
  TArray<FAutomationArtifact,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FAutomationArtifact *pFVar5;
  FAutomationExecutionEntry *pFVar6;
  
  this->State = param_1->State;
  this->Duration = param_1->Duration;
  ::FString::FString(&this->GameInstance,&param_1->GameInstance);
  pTVar1 = &this->Artifacts;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Artifacts).ArrayMax;
  iVar4 = (param_1->Artifacts).ArrayNum;
  pFVar5 = (FAutomationArtifact *)(param_1->Artifacts).AllocatorInstance.Data;
  (this->Artifacts).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FAutomationArtifact,FAutomationArtifact,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
  }
  pTVar3 = &this->Entries;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Entries).ArrayMax;
  iVar4 = (param_1->Entries).ArrayNum;
  pFVar6 = (FAutomationExecutionEntry *)(param_1->Entries).AllocatorInstance.Data;
  (this->Entries).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FAutomationExecutionEntry,FAutomationExecutionEntry,int>
              ((pTVar3->AllocatorInstance).Data,pFVar6,iVar4);
  }
  this->WarningTotal = param_1->WarningTotal;
  this->ErrorTotal = param_1->ErrorTotal;
  return this;
}

// AddEvent @ 148c564f0

void __thiscall
FAutomationTestResults::AddEvent(FAutomationTestResults *this,FAutomationExecutionEntry *param_1)

{
  int *piVar1;
  EAutomationEventType EVar2;
  FAutomationExecutionEntry *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  EVar2 = (param_1->Event).Type;
  if (EVar2 == Warning) {
    this->WarningTotal = this->WarningTotal + 1;
  }
  else if (EVar2 == Error) {
    this->ErrorTotal = this->ErrorTotal + 1;
  }
  pFVar3 = (FAutomationExecutionEntry *)(this->Entries).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Entries).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x858,&(this->Entries).AllocatorInstance,piVar1);
  }
  (this->Entries).ArrayNum = iVar7 + 1;
  pFVar8 = (this->Entries).AllocatorInstance.Data + (longlong)iVar7 * 0x58;
  *pFVar8 = (FScriptContainerElement)(param_1->Event).Type;
  ::FString::FString((FString *)(pFVar8 + 8),&(param_1->Event).Message);
  ::FString::FString((FString *)(pFVar8 + 0x18),&(param_1->Event).Context);
  uVar5 = *(undefined8 *)&(param_1->Event).Artifact.C;
  *(undefined8 *)(pFVar8 + 0x28) = *(undefined8 *)&(param_1->Event).Artifact;
  *(undefined8 *)(pFVar8 + 0x30) = uVar5;
  ::FString::FString((FString *)(pFVar8 + 0x38),&param_1->Filename);
  *(int *)(pFVar8 + 0x48) = param_1->LineNumber;
  *(long64 *)(pFVar8 + 0x50) = (param_1->Timestamp).Ticks;
  return;
}

