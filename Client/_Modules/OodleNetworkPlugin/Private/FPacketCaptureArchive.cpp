// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 5

// FPacketCaptureArchive @ 14e293c90

FPacketCaptureArchive * __thiscall
FPacketCaptureArchive::FPacketCaptureArchive(FPacketCaptureArchive *this,FArchive *param_1)

{
  longlong lVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  FArchiveProxy::FArchiveProxy((FArchiveProxy *)this,param_1);
  this->_padding_ = (longlong)&___7FOodleNetworkArchiveBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  pwVar3 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar3,L"FORCELOGFLUSH");
  *(bool *)&this->_padding_ = bVar2;
  this->_padding_ = (longlong)&___7FPacketCaptureArchive__6B_;
  lVar1 = this->_padding_;
  (this->Header).Magic = 0x41091cc4;
  (this->Header).CaptureVersion = (byte)((byte)lVar1 >> 1) & 2;
  (this->Header).PacketCount.Value = 0;
  (this->Header).PacketCount.Offset = 0;
  (this->Header).PacketDataOffset.Value = 0;
  (this->Header).PacketDataOffset.Offset = 0;
  (this->Header).PacketDataLength.Value = 0;
  (this->Header).PacketDataLength.Offset = 0;
  return this;
}

// AppendPacketFile @ 14e294f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPacketCaptureArchive::AppendPacketFile(FPacketCaptureArchive *this,FPacketCaptureArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  uint local_res8 [2];
  
  if (((this->_padding_ & 4) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSaving()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0xe9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar3 = (**(code **)(this->_padding_ + 0x28))(this);
  if ((lVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Tell() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0xea,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_1->_padding_ & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPacketFile.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar3 = (**(code **)(param_1->_padding_ + 0x28))(param_1);
  if ((lVar3 != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPacketFile.Tell() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0xec,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FCaptureHeader::SerializeHeader(&param_1->Header,param_1);
  if (((param_1->_padding_ & 4) != 0) && ((char)param_1->_padding_ != '\0')) {
    (**(code **)(param_1->_padding_ + 0x208))(param_1);
  }
  if (((this->Header).CaptureVersion != (param_1->Header).CaptureVersion) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header.CaptureVersion == InPacketFile.Header.CaptureVersion",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0xf1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar4 = operator_new__(0x100000);
  pcVar1 = *(code **)(param_1->_padding_ + 0x28);
  lVar3 = (**(code **)(param_1->_padding_ + 0x30))(param_1);
  lVar5 = (*pcVar1)(param_1);
  if (lVar5 < lVar3) {
    do {
      local_res8[0] = 0x100000;
      SerializePacket(param_1,pvVar4,local_res8);
      if ((param_1->_padding_ & 0x200) != 0) {
        if (2 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
        }
        break;
      }
      SerializePacket(this,pvVar4,local_res8);
      pcVar1 = *(code **)(param_1->_padding_ + 0x30);
      lVar3 = (**(code **)(param_1->_padding_ + 0x28))(param_1);
      lVar5 = (*pcVar1)(param_1);
    } while (lVar3 < lVar5);
  }
  operator_delete__(pvVar4);
  if (((this->_padding_ & 4) != 0) && ((char)this->_padding_ != '\0')) {
    (**(code **)(this->_padding_ + 0x208))(this);
  }
  return;
}

// GetPacketCount @ 14e296100

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FPacketCaptureArchive::GetPacketCount(FPacketCaptureArchive *this)

{
  uint uVar1;
  FArchive *this_00;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint local_res8 [2];
  
  uVar5 = 0;
  if (((this->_padding_ & 4) == 0) && ((this->Header).CaptureVersion < 2)) {
    lVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x30))();
    uVar1 = (this->Header).PacketDataOffset.Value;
    if (uVar1 == 0) {
      if (2 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
      }
    }
    else {
      FOodleNetworkArchiveBase::SeekPush((FOodleNetworkArchiveBase *)this,(ulonglong)uVar1);
      lVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
      while (lVar4 + 4 < lVar3) {
        this_00 = (FArchive *)this->_padding_;
        local_res8[0] = 0;
        puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
        if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar2 + 1) {
          if ((this_00->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(this_00,local_res8);
          }
        }
        else {
          local_res8[0] = *puVar2;
          **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
        }
        lVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
        if ((longlong)((ulonglong)local_res8[0] + lVar4) <= lVar3) {
          (**(code **)(*(longlong *)this->_padding_ + 0x1b8))();
          uVar5 = uVar5 + 1;
        }
        lVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
      }
      FOodleNetworkArchiveBase::SeekPop((FOodleNetworkArchiveBase *)this);
    }
    return uVar5;
  }
  return (this->Header).PacketCount.Value;
}

// SerializeCaptureHeader @ 14e29d440

void __thiscall FPacketCaptureArchive::SerializeCaptureHeader(FPacketCaptureArchive *this)

{
  FCaptureHeader::SerializeHeader(&this->Header,this);
  if (((this->_padding_ & 4) != 0) && ((char)this->_padding_ != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00014e29d472. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x208))(this);
    return;
  }
  return;
}

// SerializePacket @ 14e29dda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPacketCaptureArchive::SerializePacket(FPacketCaptureArchive *this,void *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FArchive *this_00;
  uint *puVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  
  if (((this->Header).PacketDataOffset.Value == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header.PacketDataOffset.Get() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0xb2,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar12 = (this->Header).PacketDataOffset.Value;
  lVar10 = (**(code **)(this->_padding_ + 0x28))(this);
  if ((lVar10 < (longlong)(ulonglong)uVar12) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Tell() >= Header.PacketDataOffset.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0xb3,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->_padding_ & 1) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *param_2;
  }
  iVar8 = (**(code **)(this->_padding_ + 0x28))(this);
  this_00 = (FArchive *)this->_padding_;
  puVar4 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar4 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,param_2);
    }
  }
  else {
    *param_2 = *puVar4;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  if ((this->_padding_ & 1) == 0) {
LAB_14e29dfc3:
    (**(code **)(*(longlong *)this->_padding_ + 0x188))
              ((longlong *)this->_padding_,param_1,*param_2);
    if ((this->_padding_ & 4) == 0) {
      return;
    }
    uVar12 = (this->Header).PacketDataLength.Value;
    uVar1 = (this->Header).PacketCount.Value;
    iVar9 = (**(code **)(this->_padding_ + 0x28))(this);
    FOodleNetworkArchiveBase::TRewritable<unsigned_int>::Set
              (&(this->Header).PacketCount,(FOodleNetworkArchiveBase *)this,uVar1 + 1);
    FOodleNetworkArchiveBase::TRewritable<unsigned_int>::Set
              (&(this->Header).PacketDataLength,(FOodleNetworkArchiveBase *)this,
               (uVar12 - iVar8) + iVar9);
    if ((char)this->_padding_ == '\0') {
      return;
    }
    (**(code **)(this->_padding_ + 0x208))(this);
    return;
  }
  if (((1 < (this->Header).CaptureVersion) &&
      (uVar1 = (this->Header).PacketDataLength.Value, uVar2 = *param_2,
      uVar3 = (this->Header).PacketDataOffset.Value,
      lVar10 = (**(code **)(this->_padding_ + 0x28))(this),
      (longlong)(ulonglong)(uVar2 + 4 + uVar1 + uVar3) <= lVar10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Tell() < Header.PacketDataOffset.Get() + Header.PacketDataLength.Get() + (uint32)sizeof(PacketSize) + PacketSize"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0xbe,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*param_2 <= uVar12) {
    if (*param_2 < 0x8000001) {
      plVar5 = (longlong *)this->_padding_;
      lVar10 = (**(code **)(*plVar5 + 0x28))(plVar5);
      lVar11 = (**(code **)(*plVar5 + 0x30))(plVar5);
      if ((longlong)(ulonglong)*param_2 <= lVar11 - lVar10) goto LAB_14e29dfc3;
      if (2 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
        plVar5 = (longlong *)this->_padding_;
        (**(code **)(*plVar5 + 0x28))(plVar5);
        (**(code **)(*plVar5 + 0x30))(plVar5);
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
        FArchiveState::SetError((FArchiveState *)this);
        return;
      }
      goto LAB_14e29df45;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7780651153003380930>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                       ,0xc2,"PacketSize <= 134217728");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (2 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
  }
LAB_14e29df45:
  FArchiveState::SetError((FArchiveState *)this);
  return;
}

