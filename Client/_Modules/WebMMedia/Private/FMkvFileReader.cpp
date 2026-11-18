// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMedia
// Functions: 4

// GetVideoFrameDuration @ 14f11f650

FTimespan __cdecl FMkvFileReader::GetVideoFrameDuration(VideoTrack *param_1)

{
  undefined1 auVar1 [16];
  VideoTrack *in_RDX;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2._0_8_ = mkvparser::VideoTrack::GetFrameRate(in_RDX);
  auVar2._8_8_ = extraout_XMM0_Qb;
  if (0.0 < auVar2._0_8_) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = __real_416312d000000000 / auVar2._0_8_ + __real_3fe0000000000000;
    auVar2 = roundpd(auVar2,auVar1,1);
    param_1->_padding_ = (longlong)auVar2._0_8_;
    return (FTimespan)(long64)param_1;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = __real_4114585755555555;
  auVar2 = roundpd(auVar3,auVar3,1);
  param_1->_padding_ = (longlong)auVar2._0_8_;
  return (FTimespan)(long64)param_1;
}

// Length @ 14f120000

int __thiscall FMkvFileReader::Length(FMkvFileReader *this,long64 *param_1,long64 *param_2)

{
  IFileHandle *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long64 lVar6;
  
  if ((this->m_file).Ptr == (IFileHandle *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("m_file.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\Player\\MkvFileReader.cpp"
                       ,0x29,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  uVar5 = (**(code **)((longlong)*(this->m_file).Ptr + 8))();
  pIVar1 = (this->m_file).Ptr;
  (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,0);
  lVar6 = (**(code **)((longlong)*(this->m_file).Ptr + 8))();
  pIVar1 = (this->m_file).Ptr;
  (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,uVar5);
  if (param_1 != (long64 *)0x0) {
    *param_1 = lVar6;
  }
  if (param_2 != (long64 *)0x0) {
    *param_2 = lVar6;
  }
  return 0;
}

// Open @ 14f120970

bool __thiscall FMkvFileReader::Open(FMkvFileReader *this,wchar_t *param_1)

{
  IFileHandle *pIVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  IFileHandle *pIVar3;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
  pIVar3 = (IFileHandle *)(**(code **)((longlong)*pIVar2 + 0xe8))(pIVar2,param_1,0);
  pIVar1 = (this->m_file).Ptr;
  if ((pIVar1 != pIVar3) && ((this->m_file).Ptr = pIVar3, pIVar1 != (IFileHandle *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  return (this->m_file).Ptr != (IFileHandle *)0x0;
}

// Read @ 14f1218e0

int __thiscall FMkvFileReader::Read(FMkvFileReader *this,long64 param_1,long param_2,uchar *param_3)

{
  IFileHandle *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((this->m_file).Ptr == (IFileHandle *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("m_file.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\Player\\MkvFileReader.cpp"
                       ,0x20,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pIVar1 = (this->m_file).Ptr;
  (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,param_1);
  pIVar1 = (this->m_file).Ptr;
  (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,param_3,(longlong)param_2);
  return 0;
}

