// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CookOnTheFly
// Functions: 3

// ReadBody @ 14311ec80

TUniquePtr<FArchive,TDefaultDelete<FArchive>_> __thiscall
UE::Cook::FCookOnTheFlyMessage::ReadBody(FCookOnTheFlyMessage *this)

{
  FMemoryReader *pFVar1;
  FArchive *in_RDX;
  
  pFVar1 = ::operator_new(0xa8);
  if (pFVar1 != (FMemoryReader *)0x0) {
    pFVar1 = FMemoryReader::FMemoryReader(pFVar1,&this->Body,false);
    *(FMemoryReader **)in_RDX = pFVar1;
    return (TUniquePtr<FArchive,TDefaultDelete<FArchive>_>)in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return (TUniquePtr<FArchive,TDefaultDelete<FArchive>_>)in_RDX;
}

// SetBody @ 14311ff50

void __thiscall
UE::Cook::FCookOnTheFlyMessage::SetBody
          (FCookOnTheFlyMessage *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = &this->Body;
  if (pTVar1 != param_1) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Body).ArrayNum = param_1->ArrayNum;
    (this->Body).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// WriteBody @ 143120600

TUniquePtr<FArchive,TDefaultDelete<FArchive>_> __thiscall
UE::Cook::FCookOnTheFlyMessage::WriteBody(FCookOnTheFlyMessage *this)

{
  FArchiveState *this_00;
  FArchive *in_RDX;
  
  this_00 = ::operator_new(0xa8);
  if (this_00 != (FArchiveState *)0x0) {
    this_00->_padding_ = 0;
    this_00->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    (this_00->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
    (this_00->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
    (this_00->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    this_00->ArSerializingDefaults = 0;
    this_00->ArPortFlags = 0;
    this_00->ArMaxSerializeSize = 0;
    (this_00->ArUEVer).FileVersionUE4 = 0;
    (this_00->ArUEVer).FileVersionUE5 = 0;
    this_00->ArLicenseeUEVer = 0;
    (this_00->ArEngineVer).Major = 0;
    (this_00->ArEngineVer).Minor = 0;
    (this_00->ArEngineVer).Patch = 0;
    *(undefined2 *)&(this_00->ArEngineVer).field_0x6 = 0;
    (this_00->ArEngineVer).Changelist = 0;
    this_00->CustomVersionContainer = (FCustomVersionContainer *)0x0;
    this_00->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    this_00->SavePackageData = (FArchiveSavePackageData *)0x0;
    this_00->SerializedProperty = (FProperty *)0x0;
    this_00->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    *(undefined8 *)&this_00->bCustomVersionsAreReset = 0;
    this_00->NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(this_00);
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    this_00[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    this_00[1].ActiveFPLB = (FFastPathLoadBuffer *)&this->Body;
    FArchiveState::SetIsSaving(this_00,true);
    (**(code **)(this_00->_padding_ + 0x108))(this_00,0);
    *(FArchiveState **)in_RDX = this_00;
    this_00->_padding_ = (longlong)&___7FMemoryWriter__6B_;
    return (TUniquePtr<FArchive,TDefaultDelete<FArchive>_>)in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return (TUniquePtr<FArchive,TDefaultDelete<FArchive>_>)in_RDX;
}

