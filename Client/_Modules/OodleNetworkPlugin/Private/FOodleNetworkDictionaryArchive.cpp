// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 4

// FOodleNetworkDictionaryArchive @ 14e293bc0

FOodleNetworkDictionaryArchive * __thiscall
FOodleNetworkDictionaryArchive::FOodleNetworkDictionaryArchive
          (FOodleNetworkDictionaryArchive *this,FArchive *param_1)

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
  lVar1 = this->_padding_;
  *(bool *)&this->_padding_ = bVar2;
  this->_padding_ = (longlong)&___7FOodleNetworkDictionaryArchive__6B_;
  (this->Header).Magic = 0x1b1bacd4;
  (this->Header).DictionaryVersion = 0;
  (this->Header).OodleMajorHeaderVersion = 0;
  (this->Header).HashTableSize.Value = -1;
  *(undefined8 *)&(this->Header).HashTableSize.Offset = 0;
  *(undefined8 *)&(this->Header).DictionaryData.Offset.Offset = 0;
  *(undefined8 *)&(this->Header).DictionaryData.CompressedLength.Offset = 0;
  *(undefined8 *)&(this->Header).DictionaryData.DecompressedLength.Offset = 0;
  *(undefined8 *)&(this->Header).CompressorData.Offset.Offset = 0;
  *(undefined8 *)&(this->Header).CompressorData.CompressedLength.Offset = 0;
  (this->Header).CompressorData.DecompressedLength.Offset = 0;
  if ((lVar1 & 4) != 0) {
    (this->Header).DictionaryVersion = 1;
    (this->Header).OodleMajorHeaderVersion = 9;
  }
  return this;
}

// SerializeDictionaryAndState @ 14e29d490

void __thiscall
FOodleNetworkDictionaryArchive::SerializeDictionaryAndState
          (FOodleNetworkDictionaryArchive *this,uchar **param_1,uint *param_2,uchar **param_3,
          uint *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->_padding_ & 1) == 0) {
    if (*param_2 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DictionaryBytes > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0x196,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*param_4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompactCompressorStateBytes > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0x197,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FOodleNetworkArchiveBase::SerializeOodleCompressData
              ((FOodleNetworkArchiveBase *)this,&(this->Header).DictionaryData,*param_1,*param_2);
    FOodleNetworkArchiveBase::SerializeOodleCompressData
              ((FOodleNetworkArchiveBase *)this,&(this->Header).CompressorData,*param_3,*param_4);
  }
  else {
    if (*param_1 != (uchar *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DictionaryData == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0x18d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*param_3 != (uchar *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompactCompresorState == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0x18e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FOodleNetworkArchiveBase::SerializeOodleDecompressData
              ((FOodleNetworkArchiveBase *)this,&(this->Header).DictionaryData,param_1,param_2,true)
    ;
    FOodleNetworkArchiveBase::SerializeOodleDecompressData
              ((FOodleNetworkArchiveBase *)this,&(this->Header).CompressorData,param_3,param_4,false
              );
  }
  return;
}

// SerializeHeader @ 14e29da10

void __thiscall
FOodleNetworkDictionaryArchive::SerializeHeader(FOodleNetworkDictionaryArchive *this)

{
  FDictionaryHeader::SerializeHeader(&this->Header,this);
  return;
}

// SetDictionaryHeaderValues @ 14e29e0f0

void __thiscall
FOodleNetworkDictionaryArchive::SetDictionaryHeaderValues
          (FOodleNetworkDictionaryArchive *this,int param_1,uint param_2)

{
  code *pcVar1;
  TRewritable<int> TVar2;
  bool bVar3;
  
  if ((this->_padding_ & 4) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSaving()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                       ,0x17d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TVar2.Offset = 0;
  TVar2.Value = param_1;
  (this->Header).HashTableSize = TVar2;
  (this->Header).OodleMajorHeaderVersion = param_2;
  return;
}

