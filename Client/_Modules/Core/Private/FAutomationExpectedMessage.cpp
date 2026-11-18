// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FAutomationExpectedMessage @ 141814d90

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FAutomationExpectedMessage * __thiscall
FAutomationExpectedMessage::FAutomationExpectedMessage
          (FAutomationExpectedMessage *this,FString *param_1,Type param_2,MatchType param_3,
          int param_4,bool param_5)

{
  int iVar1;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  bool bVar4;
  FRegexPattern *pFVar5;
  FString *pFVar6;
  FString local_48;
  FString local_38;
  FRegexPattern local_28;
  
  ::FString::FString(&this->MessagePatternString,param_1);
  this->ExpectedNumberOfOccurrences = param_4;
  (this->MessagePatternRegex).bIsSet = false;
  this->CompareType = param_3;
  this->ActualNumberOfOccurrences = 0;
  this->Verbosity = param_2;
  if (param_5) {
    iVar1 = (param_1->Data).ArrayNum;
    if (param_3 == Exact) {
      ::FString::PrintfImpl(&local_38,L"^%s$");
      pFVar6 = &local_38;
      bVar4 = true;
      bVar3 = false;
    }
    else {
      _Src = (param_1->Data).AllocatorInstance.Data;
      bVar4 = false;
      bVar3 = true;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = iVar1;
      if (iVar1 == 0) {
        local_48.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,(ForAnyElementType *)&local_48,iVar1,&local_48.Data.ArrayMax);
        memcpy(local_48.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      }
      pFVar6 = &local_48;
    }
    pFVar5 = FRegexPattern::FRegexPattern(&local_28,pFVar6,CaseInsensitive);
    if ((TOptional<FRegexPattern> *)pFVar5 != &this->MessagePatternRegex) {
      if ((this->MessagePatternRegex).bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((this->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
                   ReferenceController);
      }
      (this->MessagePatternRegex).TypedValue.Implementation.Object = (pFVar5->Implementation).Object
      ;
      pTVar2 = (pFVar5->Implementation).SharedReferenceCount.ReferenceController;
      (this->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.ReferenceController
           = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      (this->MessagePatternRegex).bIsSet = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.Implementation.SharedReferenceCount.ReferenceController);
    if ((bVar3) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

