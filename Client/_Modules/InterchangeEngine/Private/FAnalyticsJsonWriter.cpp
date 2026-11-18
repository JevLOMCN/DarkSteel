// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 1

// FAnalyticsJsonWriter @ 14e4d6ed0

FAnalyticsJsonWriter * __thiscall
UE::Interchange::Private::FAnalyticsJsonWriter::FAnalyticsJsonWriter
          (FAnalyticsJsonWriter *this,FString *param_1)

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
    this_00[1].ActiveFPLB = (FFastPathLoadBuffer *)&this->field_0x28;
    this_00[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    FArchiveState::SetIsSaving(this_00,true);
    (**(code **)(this_00->_padding_ + 0x108))(this_00,0);
    this_00->_padding_ = (longlong)&___7FMemoryWriter__6B_;
    pFVar1 = this_00;
  }
  *(FString **)&this->field_0x38 = param_1;
  *(undefined ***)this = &___7FAnalyticsJsonWriter_Private_Interchange_UE__6B_;
  *(FArchiveState **)&this->field_0x8 = pFVar1;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  return this;
}

