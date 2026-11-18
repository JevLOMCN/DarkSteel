// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 1

// SerializeHeader @ 14e29d600

void __thiscall
FPacketCaptureArchive::FCaptureHeader::SerializeHeader
          (FCaptureHeader *this,FPacketCaptureArchive *param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  puVar1 = *(uint **)param_1->_padding_;
  if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar1 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,&this->Magic);
    }
  }
  else {
    this->Magic = *puVar1;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  puVar1 = *(uint **)param_1->_padding_;
  if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar1 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,&this->CaptureVersion,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,&this->CaptureVersion);
    }
  }
  else {
    this->CaptureVersion = *puVar1;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  if ((param_1->_padding_ & 1) != 0) {
    if (this->Magic == 0x41091cc4) {
      uVar4 = this->CaptureVersion;
      if (uVar4 < 3) goto LAB_14e29d727;
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7780651153003380879>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0x8f,"CaptureVersion <= 0x00000002");
      if (bVar3) goto code_r0x00014e29d71a;
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7780651153003380878>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0x8e,"Magic == 0x41091CC4");
      if (bVar3) {
code_r0x00014e29d71a:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  uVar4 = this->CaptureVersion;
LAB_14e29d727:
  if (1 < uVar4) {
    operator<<<unsigned_int>((FArchive *)param_1,&this->PacketCount);
    operator<<<unsigned_int>((FArchive *)param_1,&this->PacketDataOffset);
    operator<<<unsigned_int>((FArchive *)param_1,&this->PacketDataLength);
  }
  uVar4 = (**(code **)(param_1->_padding_ + 0x28))(param_1);
  FOodleNetworkArchiveBase::TRewritable<unsigned_int>::Set
            (&this->PacketDataOffset,(FOodleNetworkArchiveBase *)param_1,uVar4);
  return;
}

