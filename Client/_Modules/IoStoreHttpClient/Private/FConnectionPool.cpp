// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 5

// FConnectionPool @ 14456ad00

FConnectionPool * __thiscall
UE::IoStore::HTTP::FConnectionPool::FConnectionPool(FConnectionPool *this,FParams *param_1)

{
  FHost *_Dst;
  uchar uVar1;
  EHttpVersion EVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  FConnectionPool *pFVar7;
  FHost *pFVar8;
  
  this->Ptr = (FHost *)0x0;
  if (0x3f < param_1->ConnectionCount - 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Params.ConnectionCount - 1u <= 63u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\ConnectionPool.inl"
                       ,0xf4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FConnectionPool *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (0xffff < param_1->Port) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Params.Port <= 0xffffu",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\ConnectionPool.inl"
                       ,0xf5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FConnectionPool *)(*pcVar4)();
      return pFVar7;
    }
  }
  if ((param_1->HttpVersion == Two) && (param_1->ConnectionCount != 1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Params.HttpVersion != EHttpVersion::Two || Params.ConnectionCount == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\ConnectionPool.inl"
                       ,0xf6,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FConnectionPool *)(*pcVar4)();
      return pFVar7;
    }
  }
  uVar3 = (param_1->HostName).Size;
  pFVar8 = FMemory::Malloc((ulonglong)(uVar3 + 0x31),8);
  _Dst = pFVar8 + 1;
  memcpy(_Dst,(param_1->HostName).DataPtr,(ulonglong)uVar3);
  *(undefined1 *)((longlong)_Dst->IpAddresses + ((ulonglong)uVar3 - 0x10)) = 0;
  uVar6 = param_1->ConnectionCount;
  uVar3 = param_1->Port;
  uVar1 = param_1->MaxInflight;
  EVar2 = param_1->HttpVersion;
  pFVar8->VerifyCert = param_1->VerifyCert;
  pFVar8->HostName = (char *)_Dst;
  pFVar8->IpAddresses[0] = 0;
  pFVar8->IpAddresses[1] = 0;
  pFVar8->IpAddresses[2] = 0;
  pFVar8->IpAddresses[3] = 0;
  pFVar8->SendBufKb = -1;
  pFVar8->RecvBufKb = -1;
  pFVar8->Port = (ushort)uVar3;
  pFVar8->MaxConnections = (uchar)uVar6;
  pFVar8->MaxInflight = uVar1;
  pFVar8->HttpVersion = EVar2;
  pFVar8->bPooled = true;
  if (((uchar)uVar6 == '\0') || ((uVar6 & 0xff) != uVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxConnections && MaxConnections == Params.MaxConnections",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\ConnectionPool.inl"
                       ,0x40,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FConnectionPool *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (pFVar8->Port == 0) {
    uVar6 = 0x1bb;
    if (pFVar8->VerifyCert == 0) {
      uVar6 = 0x50;
    }
    pFVar8->Port = uVar6;
  }
  pFVar8->RecvBufKb = (short)(param_1->RecvBufSize >> 10);
  this->Ptr = pFVar8;
  return this;
}

// ~FConnectionPool @ 14456bd90

void __thiscall UE::IoStore::HTTP::FConnectionPool::~FConnectionPool(FConnectionPool *this)

{
  FHost *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = this->Ptr;
  if (pFVar1 == (FHost *)0x0) {
    return;
  }
  if (pFVar1 != (FHost *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// Describe @ 144572130

void __thiscall
UE::IoStore::HTTP::FConnectionPool::Describe
          (FConnectionPool *this,TStringBuilderBase<char> *param_1)

{
  char *_Str;
  void *pvVar1;
  
  _Str = this->Ptr->HostName;
  if (_Str != (char *)0x0) {
    strlen(_Str);
  }
  TStringBuilderBase<char>::AppendfImpl(param_1,"%.*s");
  if (this->Ptr->IpAddresses[0] != 0) {
    TStringBuilderBase<char>::AppendfImpl(param_1," (%u.%u.%u.%u)");
    return;
  }
  if (param_1->End < param_1->CurPos + 0xd) {
    TStringBuilderBase<char>::Extend(param_1,0xd);
  }
  pvVar1 = FGenericPlatformString::Memcpy(param_1->CurPos," (unresolved)",0xd);
  param_1->CurPos = (char *)((longlong)pvVar1 + 0xd);
  return;
}

// IsValidHostUrl @ 144578ba0

bool __cdecl UE::IoStore::HTTP::FConnectionPool::IsValidHostUrl(TStringView<char> *param_1)

{
  int iVar1;
  FUrlOffsets local_res8 [4];
  TStringView<char> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar1 = ParseUrl(&local_18,local_res8);
  return (bool)((byte)((uint)iVar1 >> 0x1f) ^ 1);
}

// Resolve @ 144580580

bool __thiscall UE::IoStore::HTTP::FConnectionPool::Resolve(FConnectionPool *this)

{
  FOutcome FVar1;
  
  FVar1 = FHost::ResolveHostName(this->Ptr);
  return *(int *)((longlong)FVar1.field0_0x0 + 4) == 0x8000;
}

