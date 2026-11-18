// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// UpdateOperation @ 14d087a40

void __thiscall
FLiveLinkMessageBusFinderAction::UpdateOperation
          (FLiveLinkMessageBusFinderAction *this,FLatentResponse *param_1)

{
  undefined1 *lpCriticalSection;
  int *piVar1;
  int iVar2;
  TArray<FProviderPollResult,TSizedDefaultAllocator<32>_> *pTVar3;
  FProviderPollResult *pFVar4;
  UObject *pUVar5;
  float fVar6;
  
  fVar6 = this->RemainingTime - param_1->DeltaTime;
  this->RemainingTime = fVar6;
  if (fVar6 <= 0.0) {
    pUVar5 = FWeakObjectPtr::Get(&(this->MessageBusFinderWeakPtr).WeakPtr);
    if (pUVar5 != (UObject *)0x0) {
      pTVar3 = this->OutAvailableProviders;
      lpCriticalSection = &pUVar5[2].field_0x8;
      if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (pTVar3 != (TArray<FProviderPollResult,TSizedDefaultAllocator<32>_> *)&pUVar5[1].field_0x10
         ) {
        DestructItems<FProviderPollResult,int>
                  ((FProviderPollResult *)(pTVar3->AllocatorInstance).Data,pTVar3->ArrayNum);
        iVar2 = *(int *)&pUVar5[1].field_0x18;
        piVar1 = &pTVar3->ArrayMax;
        pFVar4 = *(FProviderPollResult **)&pUVar5[1].field_0x10;
        pTVar3->ArrayNum = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x90,8,iVar2,*piVar1,&pTVar3->AllocatorInstance,iVar2,piVar1);
          ConstructItems<FProviderPollResult,FProviderPollResult,int>
                    ((pTVar3->AllocatorInstance).Data,pFVar4,iVar2);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    FLatentResponse::FinishAndTriggerIf
              (param_1,true,this->ExecutionFunction,this->OutputLink,this->CallbackTarget);
  }
  return;
}

