// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 2

// CastDocumentObjectChecked<UObject> @ 14b30a430

UObject * __thiscall
FMetaSoundFrontendDocumentBuilder::CastDocumentObjectChecked<UObject>
          (FMetaSoundFrontendDocumentBuilder *this)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (*(UObject **)&this->DocumentInterface != (UObject *)0x0) {
    return *(UObject **)&this->DocumentInterface;
  }
  pFVar1 = GetTypeName<UObject>(&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// operator= @ 14b352ec0

FMetaSoundFrontendDocumentBuilder * __thiscall
FMetaSoundFrontendDocumentBuilder::operator=
          (FMetaSoundFrontendDocumentBuilder *this,FMetaSoundFrontendDocumentBuilder *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDocumentCache *pIVar2;
  FDocumentModifyDelegates *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FName FVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)&param_1->DocumentInterface != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)&param_1->DocumentInterface);
  }
  *(undefined8 *)&this->DocumentInterface = *(undefined8 *)&param_1->DocumentInterface;
  *(undefined8 *)&(this->DocumentInterface).field_0x8 =
       *(undefined8 *)&(param_1->DocumentInterface).field_0x8;
  uVar6 = (param_1->BuildPageID).B;
  uVar7 = (param_1->BuildPageID).C;
  uVar8 = (param_1->BuildPageID).D;
  (this->BuildPageID).A = (param_1->BuildPageID).A;
  (this->BuildPageID).B = uVar6;
  (this->BuildPageID).C = uVar7;
  (this->BuildPageID).D = uVar8;
  pTVar1 = (param_1->DocumentCache).SharedReferenceCount.ReferenceController;
  pIVar2 = (param_1->DocumentCache).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->DocumentCache).SharedReferenceCount.ReferenceController;
  (this->DocumentCache).Object = pIVar2;
  (this->DocumentCache).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar1 = (param_1->DocumentDelegates).SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->DocumentDelegates).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->DocumentDelegates).SharedReferenceCount.ReferenceController;
  (this->DocumentDelegates).Object = pFVar3;
  (this->DocumentDelegates).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FVar5 = (param_1->HintPath).AssetName;
  (this->HintPath).PackageName = (param_1->HintPath).PackageName;
  (this->HintPath).AssetName = FVar5;
  return this;
}

