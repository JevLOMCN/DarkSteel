// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 1

// SerializeHeader @ 14e29d780

void __thiscall
FOodleNetworkDictionaryArchive::FDictionaryHeader::SerializeHeader
          (FDictionaryHeader *this,FOodleNetworkDictionaryArchive *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  code *pcVar4;
  int *piVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  
  puVar2 = *(uint **)param_1->_padding_;
  if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,&this->Magic);
    }
  }
  else {
    this->Magic = *puVar2;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  pbVar1 = (byte *)((longlong)&param_1->_padding_ + 2);
  puVar2 = *(uint **)param_1->_padding_;
  if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar2 + 1) {
    if ((*pbVar1 & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,&this->DictionaryVersion,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,&this->DictionaryVersion);
    }
  }
  else {
    this->DictionaryVersion = *puVar2;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  puVar2 = &this->OodleMajorHeaderVersion;
  puVar3 = *(uint **)param_1->_padding_;
  if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar3 + 1) {
    if ((*pbVar1 & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  pcVar4 = *(code **)(param_1->_padding_ + 0x28);
  if ((this->HashTableSize).Offset == 0) {
    uVar7 = (*pcVar4)();
    (this->HashTableSize).Offset = uVar7;
  }
  else {
    uVar7 = (this->HashTableSize).Offset;
    uVar8 = (*pcVar4)(param_1);
    if ((uVar7 != uVar8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset == Ar.Tell()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Public\\OodleNetworkArchives.h"
                           ,0x73,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  piVar5 = *(int **)param_1->_padding_;
  if ((int *)((undefined8 *)param_1->_padding_)[1] < piVar5 + 1) {
    if ((*pbVar1 & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,&this->HashTableSize,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)&this->HashTableSize);
    }
  }
  else {
    (this->HashTableSize).Value = *piVar5;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  operator<<<unsigned_int>((FArchive *)param_1,&(this->DictionaryData).Offset);
  operator<<<unsigned_int>((FArchive *)param_1,&(this->DictionaryData).CompressedLength);
  operator<<<unsigned_int>((FArchive *)param_1,&(this->DictionaryData).DecompressedLength);
  operator<<<unsigned_int>((FArchive *)param_1,&(this->CompressorData).Offset);
  operator<<<unsigned_int>((FArchive *)param_1,&(this->CompressorData).CompressedLength);
  operator<<<unsigned_int>((FArchive *)param_1,&(this->CompressorData).DecompressedLength);
  if ((param_1->_padding_ & 1) != 0) {
    if (this->Magic == 0x11235801) {
      UE::Assert::Private::ProcessLowLevelFatalError
                ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                 ,0x15d,
                 L"Tried to load dictionary from old format. Regenerate dictionary using the trainer commandlet."
                );
    }
    else if (this->Magic == 0x1b1bacd4) {
      if (this->DictionaryVersion < 2) {
        return;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7780651153003381090>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0x162,"DictionaryVersion <= 0x00000001");
      if (bVar6) goto code_r0x00014e29d9e1;
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7780651153003381089>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0x161,"Magic == 0x1B1BACD4");
      if (bVar6) {
code_r0x00014e29d9e1:
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return;
}

