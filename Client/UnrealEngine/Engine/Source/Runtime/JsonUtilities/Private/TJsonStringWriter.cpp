// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: JsonUtilities
// Functions: 1

// TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> @ 144625510

TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> * __thiscall
TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>::
TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>
          (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *this,FString *param_1,int param_2)

{
  FArchiveState *this_00;
  FArchiveState *pFVar1;
  
  this_00 = ::operator_new(0xa8);
  pFVar1 = (FArchiveState *)0x0;
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
    this_00[1].ActiveFPLB = (FFastPathLoadBuffer *)&this->Bytes;
    this_00[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    FArchiveState::SetIsSaving(this_00,true);
    (**(code **)(this_00->_padding_ + 0x108))(this_00,0);
    this_00->_padding_ = (longlong)&___7FMemoryWriter__6B_;
    pFVar1 = this_00;
  }
  this->_padding_ = (longlong)pFVar1;
  this->_padding_ = (longlong)&___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__W____6B_;
  *(int *)((longlong)&this->_padding_ + 4) = param_2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->OutString = param_1;
  (this->Bytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bytes).ArrayNum = 0;
  (this->Bytes).ArrayMax = 0;
  return this;
}

